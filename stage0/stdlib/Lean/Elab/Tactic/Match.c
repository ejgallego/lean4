// Lean compiler output
// Module: Lean.Elab.Tactic.Match
// Imports: public import Lean.Elab.Match public import Lean.Elab.Tactic.Induction
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
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
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__11;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(149, 22, 109, 211, 70, 26, 115, 13)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "case"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(216, 244, 120, 128, 139, 198, 139, 51)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__19_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__20;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__22_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__24_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "withAnnotateState"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(27, 100, 151, 108, 10, 177, 75, 150)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "with_annotate_state"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__28_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__29_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__29_value),LEAN_SCALAR_PTR_LITERAL(244, 42, 145, 170, 145, 147, 228, 105)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__31_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__31_value),LEAN_SCALAR_PTR_LITERAL(121, 5, 219, 45, 43, 52, 169, 192)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__32_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__0_value),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__31_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__4_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "refine"};
static const lean_object* l_Lean_Elab_Tactic_evalMatch___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 130, 130, 160, 131, 48, 178, 245)}};
static const lean_object* l_Lean_Elab_Tactic_evalMatch___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "noImplicitLambda"};
static const lean_object* l_Lean_Elab_Tactic_evalMatch___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalMatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(138, 103, 178, 9, 238, 93, 41, 6)}};
static const lean_object* l_Lean_Elab_Tactic_evalMatch___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_evalMatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "no_implicit_lambda%"};
static const lean_object* l_Lean_Elab_Tactic_evalMatch___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalMatch___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__31_value),LEAN_SCALAR_PTR_LITERAL(232, 36, 240, 216, 203, 28, 130, 220)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalMatch"};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 83, 146, 191, 89, 201, 129, 152)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(53) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1)),((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__1_value),((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(53) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(53) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__4_value),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___boxed(lean_object*);
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__11(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__10));
v___x_22_ = l_String_toRawSubstring_x27(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__20(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Array_mkArray0___redArg();
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0(lean_object* v___x_72_, lean_object* v___x_73_, lean_object* v_alts_74_, lean_object* v_parentTag_75_, lean_object* v_as_76_, size_t v_sz_77_, size_t v_i_78_, lean_object* v_b_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
uint8_t v___x_82_; 
v___x_82_ = lean_usize_dec_lt(v_i_78_, v_sz_77_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; 
lean_dec(v_parentTag_75_);
lean_dec(v___x_73_);
lean_dec(v___x_72_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v_b_79_);
lean_ctor_set(v___x_83_, 1, v___y_81_);
return v___x_83_;
}
else
{
lean_object* v_fst_84_; lean_object* v_snd_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_198_; 
v_fst_84_ = lean_ctor_get(v_b_79_, 0);
v_snd_85_ = lean_ctor_get(v_b_79_, 1);
v_isSharedCheck_198_ = !lean_is_exclusive(v_b_79_);
if (v_isSharedCheck_198_ == 0)
{
v___x_87_ = v_b_79_;
v_isShared_88_ = v_isSharedCheck_198_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_snd_85_);
lean_inc(v_fst_84_);
lean_dec(v_b_79_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_198_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v_nextIdx_90_; lean_object* v_newCases_91_; lean_object* v_alt_92_; lean_object* v___y_93_; lean_object* v_fst_102_; lean_object* v_snd_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_197_; 
v_fst_102_ = lean_ctor_get(v_snd_85_, 0);
v_snd_103_ = lean_ctor_get(v_snd_85_, 1);
v_isSharedCheck_197_ = !lean_is_exclusive(v_snd_85_);
if (v_isSharedCheck_197_ == 0)
{
v___x_105_ = v_snd_85_;
v_isShared_106_ = v_isSharedCheck_197_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_snd_103_);
lean_inc(v_fst_102_);
lean_dec(v_snd_85_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_197_;
goto v_resetjp_104_;
}
v___jp_89_:
{
lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_94_ = lean_array_push(v_fst_84_, v_alt_92_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 1, v_newCases_91_);
lean_ctor_set(v___x_87_, 0, v_nextIdx_90_);
v___x_96_ = v___x_87_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_nextIdx_90_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_newCases_91_);
v___x_96_ = v_reuseFailAlloc_101_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
lean_object* v___x_97_; size_t v___x_98_; size_t v___x_99_; 
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_94_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = ((size_t)1ULL);
v___x_99_ = lean_usize_add(v_i_78_, v___x_98_);
v_i_78_ = v___x_99_;
v_b_79_ = v___x_97_;
v___y_81_ = v___y_93_;
goto _start;
}
}
v_resetjp_104_:
{
lean_object* v_nextIdx_107_; lean_object* v_a_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_nextIdx_107_ = lean_unsigned_to_nat(1u);
v_a_108_ = lean_array_uget_borrowed(v_as_76_, v_i_78_);
v___x_109_ = lean_mk_empty_array_with_capacity(v_nextIdx_107_);
lean_inc(v_a_108_);
v___x_110_ = lean_array_push(v___x_109_, v_a_108_);
v___x_111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__4));
v___x_112_ = lean_box(2);
v___x_113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_111_);
lean_ctor_set(v___x_113_, 2, v___x_110_);
lean_inc(v___x_72_);
v___x_114_ = l_Lean_Syntax_setArg(v___x_72_, v_nextIdx_107_, v___x_113_);
v___x_115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__6));
lean_inc(v___x_73_);
v___x_116_ = l_Lean_Syntax_isOfKind(v___x_73_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___y_119_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_117_ = lean_unsigned_to_nat(3u);
v___x_130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__9));
lean_inc(v___x_73_);
v___x_131_ = l_Lean_Syntax_isOfKind(v___x_73_, v___x_130_);
if (v___x_131_ == 0)
{
lean_object* v_macroScope_132_; lean_object* v_traceMsgs_133_; lean_object* v_expandedMacroDecls_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_191_; 
lean_del_object(v___x_105_);
v_macroScope_132_ = lean_ctor_get(v___y_81_, 0);
v_traceMsgs_133_ = lean_ctor_get(v___y_81_, 1);
v_expandedMacroDecls_134_ = lean_ctor_get(v___y_81_, 2);
v_isSharedCheck_191_ = !lean_is_exclusive(v___y_81_);
if (v_isSharedCheck_191_ == 0)
{
v___x_136_ = v___y_81_;
v_isShared_137_ = v_isSharedCheck_191_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_expandedMacroDecls_134_);
lean_inc(v_traceMsgs_133_);
lean_inc(v_macroScope_132_);
lean_dec(v___y_81_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_191_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v_quotContext_138_; lean_object* v_ref_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
v_quotContext_138_ = lean_ctor_get(v___y_80_, 1);
v_ref_139_ = lean_ctor_get(v___y_80_, 5);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_nat_add(v_macroScope_132_, v_nextIdx_107_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v___x_141_);
v___x_143_ = v___x_136_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_traceMsgs_133_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v_expandedMacroDecls_134_);
v___x_143_ = v_reuseFailAlloc_190_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_144_ = l_Lean_SourceInfo_fromRef(v_ref_139_, v___x_131_);
v___x_145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__7));
lean_inc_n(v___x_144_, 15);
v___x_146_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__11);
v___x_148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__12));
lean_inc(v_quotContext_138_);
v___x_149_ = l_Lean_addMacroScope(v_quotContext_138_, v___x_148_, v_macroScope_132_);
v___x_150_ = lean_box(0);
v___x_151_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_151_, 0, v___x_144_);
lean_ctor_set(v___x_151_, 1, v___x_147_);
lean_ctor_set(v___x_151_, 2, v___x_149_);
lean_ctor_set(v___x_151_, 3, v___x_150_);
v___x_152_ = l_Lean_Syntax_node2(v___x_144_, v___x_115_, v___x_146_, v___x_151_);
v___x_153_ = l_Lean_Syntax_getArg(v___x_152_, v_nextIdx_107_);
v___x_154_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__14));
v___x_155_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__15));
v___x_156_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_144_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
v___x_157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__17));
v___x_158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__19));
v___x_159_ = l_Lean_Syntax_node1(v___x_144_, v___x_158_, v___x_153_);
v___x_160_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__20, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__20);
v___x_161_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_161_, 0, v___x_144_);
lean_ctor_set(v___x_161_, 1, v___x_111_);
lean_ctor_set(v___x_161_, 2, v___x_160_);
lean_inc_ref(v___x_161_);
v___x_162_ = l_Lean_Syntax_node2(v___x_144_, v___x_157_, v___x_159_, v___x_161_);
v___x_163_ = l_Lean_Syntax_node1(v___x_144_, v___x_111_, v___x_162_);
v___x_164_ = lean_unsigned_to_nat(2u);
v___x_165_ = l_Lean_Syntax_getArg(v___x_114_, v___x_164_);
v___x_166_ = l_Lean_SourceInfo_fromRef(v___x_165_, v___x_82_);
v___x_167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__21));
v___x_168_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__23));
v___x_170_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__25));
v___x_171_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__27));
v___x_172_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__28));
v___x_173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_144_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = l_Lean_Syntax_getArg(v___x_114_, v___x_140_);
v___x_175_ = lean_mk_empty_array_with_capacity(v___x_164_);
v___x_176_ = lean_array_push(v___x_175_, v___x_174_);
v___x_177_ = lean_array_push(v___x_176_, v___x_165_);
v___x_178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_112_);
lean_ctor_set(v___x_178_, 1, v___x_111_);
lean_ctor_set(v___x_178_, 2, v___x_177_);
v___x_179_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__29));
v___x_180_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__30));
v___x_181_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_144_);
lean_ctor_set(v___x_181_, 1, v___x_179_);
v___x_182_ = l_Lean_Syntax_node1(v___x_144_, v___x_180_, v___x_181_);
v___x_183_ = l_Lean_Syntax_node3(v___x_144_, v___x_171_, v___x_173_, v___x_178_, v___x_182_);
lean_inc(v___x_73_);
v___x_184_ = l_Lean_Syntax_node3(v___x_144_, v___x_111_, v___x_183_, v___x_161_, v___x_73_);
v___x_185_ = l_Lean_Syntax_node1(v___x_144_, v___x_170_, v___x_184_);
v___x_186_ = l_Lean_Syntax_node1(v___x_144_, v___x_169_, v___x_185_);
v___x_187_ = l_Lean_Syntax_node4(v___x_144_, v___x_155_, v___x_156_, v___x_163_, v___x_168_, v___x_186_);
v___x_188_ = lean_array_push(v_snd_103_, v___x_187_);
v___x_189_ = l_Lean_Syntax_setArg(v___x_114_, v___x_117_, v___x_152_);
v_nextIdx_90_ = v_fst_102_;
v_newCases_91_ = v___x_188_;
v_alt_92_ = v___x_189_;
v___y_93_ = v___x_143_;
goto v___jp_89_;
}
}
}
else
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = lean_array_get_size(v_alts_74_);
v___x_193_ = lean_nat_dec_lt(v_nextIdx_107_, v___x_192_);
if (v___x_193_ == 0)
{
lean_inc(v_parentTag_75_);
v___y_119_ = v_parentTag_75_;
goto v___jp_118_;
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__32));
lean_inc(v_fst_102_);
v___x_195_ = lean_name_append_index_after(v___x_194_, v_fst_102_);
lean_inc(v_parentTag_75_);
v___x_196_ = l_Lean_Name_append(v_parentTag_75_, v___x_195_);
v___y_119_ = v___x_196_;
goto v___jp_118_;
}
}
v___jp_118_:
{
lean_object* v_ref_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v_ref_120_ = lean_ctor_get(v___y_80_, 5);
v___x_121_ = l_Lean_mkIdentFrom(v___x_73_, v___y_119_, v___x_116_);
v___x_122_ = l_Lean_SourceInfo_fromRef(v_ref_120_, v___x_116_);
v___x_123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__7));
lean_inc(v___x_122_);
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 2);
lean_ctor_set(v___x_105_, 1, v___x_123_);
lean_ctor_set(v___x_105_, 0, v___x_122_);
v___x_125_ = v___x_105_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v___x_123_);
v___x_125_ = v_reuseFailAlloc_129_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = l_Lean_Syntax_node2(v___x_122_, v___x_115_, v___x_125_, v___x_121_);
v___x_127_ = lean_nat_add(v_fst_102_, v_nextIdx_107_);
lean_dec(v_fst_102_);
v___x_128_ = l_Lean_Syntax_setArg(v___x_114_, v___x_117_, v___x_126_);
v_nextIdx_90_ = v___x_127_;
v_newCases_91_ = v_snd_103_;
v_alt_92_ = v___x_128_;
v___y_93_ = v___y_81_;
goto v___jp_89_;
}
}
}
else
{
lean_del_object(v___x_105_);
v_nextIdx_90_ = v_fst_102_;
v_newCases_91_ = v_snd_103_;
v_alt_92_ = v___x_114_;
v___y_93_ = v___y_81_;
goto v___jp_89_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___boxed(lean_object* v___x_199_, lean_object* v___x_200_, lean_object* v_alts_201_, lean_object* v_parentTag_202_, lean_object* v_as_203_, lean_object* v_sz_204_, lean_object* v_i_205_, lean_object* v_b_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
size_t v_sz_boxed_209_; size_t v_i_boxed_210_; lean_object* v_res_211_; 
v_sz_boxed_209_ = lean_unbox_usize(v_sz_204_);
lean_dec(v_sz_204_);
v_i_boxed_210_ = lean_unbox_usize(v_i_205_);
lean_dec(v_i_205_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0(v___x_199_, v___x_200_, v_alts_201_, v_parentTag_202_, v_as_203_, v_sz_boxed_209_, v_i_boxed_210_, v_b_206_, v___y_207_, v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec_ref(v_as_203_);
lean_dec_ref(v_alts_201_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1(lean_object* v_alts_218_, lean_object* v_parentTag_219_, lean_object* v_as_220_, size_t v_sz_221_, size_t v_i_222_, lean_object* v_b_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
uint8_t v___x_226_; 
v___x_226_ = lean_usize_dec_lt(v_i_222_, v_sz_221_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; 
lean_dec(v_parentTag_219_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v_b_223_);
lean_ctor_set(v___x_227_, 1, v___y_225_);
return v___x_227_;
}
else
{
lean_object* v_snd_228_; lean_object* v_fst_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_280_; 
v_snd_228_ = lean_ctor_get(v_b_223_, 1);
v_fst_229_ = lean_ctor_get(v_b_223_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v_b_223_);
if (v_isSharedCheck_280_ == 0)
{
v___x_231_ = v_b_223_;
v_isShared_232_ = v_isSharedCheck_280_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_snd_228_);
lean_inc(v_fst_229_);
lean_dec(v_b_223_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_280_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_279_; 
v_fst_233_ = lean_ctor_get(v_snd_228_, 0);
v_snd_234_ = lean_ctor_get(v_snd_228_, 1);
v_isSharedCheck_279_ = !lean_is_exclusive(v_snd_228_);
if (v_isSharedCheck_279_ == 0)
{
v___x_236_ = v_snd_228_;
v_isShared_237_ = v_isSharedCheck_279_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_snd_234_);
lean_inc(v_fst_233_);
lean_dec(v_snd_228_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_279_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v_nextIdx_238_; lean_object* v_a_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
v_nextIdx_238_ = lean_unsigned_to_nat(1u);
v_a_239_ = lean_array_uget_borrowed(v_as_220_, v_i_222_);
v___x_240_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___closed__1));
lean_inc(v_a_239_);
v___x_241_ = l_Lean_Syntax_setKind(v_a_239_, v___x_240_);
v___x_242_ = lean_unsigned_to_nat(3u);
v___x_243_ = l_Lean_Syntax_getArg(v___x_241_, v___x_242_);
v___x_244_ = l_Lean_Syntax_getArg(v___x_241_, v_nextIdx_238_);
v___x_245_ = l_Lean_Syntax_getSepArgs(v___x_244_);
lean_dec(v___x_244_);
if (v_isShared_237_ == 0)
{
v___x_247_ = v___x_236_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_snd_234_);
v___x_247_ = v_reuseFailAlloc_278_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_249_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___x_247_);
v___x_249_ = v___x_231_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_fst_229_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_277_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
size_t v_sz_250_; size_t v___x_251_; lean_object* v___x_252_; 
v_sz_250_ = lean_array_size(v___x_245_);
v___x_251_ = ((size_t)0ULL);
lean_inc(v_parentTag_219_);
v___x_252_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0(v___x_241_, v___x_243_, v_alts_218_, v_parentTag_219_, v___x_245_, v_sz_250_, v___x_251_, v___x_249_, v___y_224_, v___y_225_);
lean_dec_ref(v___x_245_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v_snd_254_; lean_object* v_a_255_; lean_object* v_fst_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_275_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
v_snd_254_ = lean_ctor_get(v_a_253_, 1);
lean_inc(v_snd_254_);
v_a_255_ = lean_ctor_get(v___x_252_, 1);
lean_inc(v_a_255_);
lean_dec_ref_known(v___x_252_, 2);
v_fst_256_ = lean_ctor_get(v_a_253_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v_a_253_);
if (v_isSharedCheck_275_ == 0)
{
lean_object* v_unused_276_; 
v_unused_276_ = lean_ctor_get(v_a_253_, 1);
lean_dec(v_unused_276_);
v___x_258_ = v_a_253_;
v_isShared_259_ = v_isSharedCheck_275_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_fst_256_);
lean_dec(v_a_253_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_275_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v_fst_260_; lean_object* v_snd_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_274_; 
v_fst_260_ = lean_ctor_get(v_snd_254_, 0);
v_snd_261_ = lean_ctor_get(v_snd_254_, 1);
v_isSharedCheck_274_ = !lean_is_exclusive(v_snd_254_);
if (v_isSharedCheck_274_ == 0)
{
v___x_263_ = v_snd_254_;
v_isShared_264_ = v_isSharedCheck_274_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_snd_261_);
lean_inc(v_fst_260_);
lean_dec(v_snd_254_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_274_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_fst_260_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_snd_261_);
v___x_266_ = v_reuseFailAlloc_273_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
lean_object* v___x_268_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v___x_266_);
v___x_268_ = v___x_258_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_fst_256_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v___x_266_);
v___x_268_ = v_reuseFailAlloc_272_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
size_t v___x_269_; size_t v___x_270_; 
v___x_269_ = ((size_t)1ULL);
v___x_270_ = lean_usize_add(v_i_222_, v___x_269_);
v_i_222_ = v___x_270_;
v_b_223_ = v___x_268_;
v___y_225_ = v_a_255_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_parentTag_219_);
return v___x_252_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1___boxed(lean_object* v_alts_281_, lean_object* v_parentTag_282_, lean_object* v_as_283_, lean_object* v_sz_284_, lean_object* v_i_285_, lean_object* v_b_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
size_t v_sz_boxed_289_; size_t v_i_boxed_290_; lean_object* v_res_291_; 
v_sz_boxed_289_ = lean_unbox_usize(v_sz_284_);
lean_dec(v_sz_284_);
v_i_boxed_290_ = lean_unbox_usize(v_i_285_);
lean_dec(v_i_285_);
v_res_291_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1(v_alts_281_, v_parentTag_282_, v_as_283_, v_sz_boxed_289_, v_i_boxed_290_, v_b_286_, v___y_287_, v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec_ref(v_as_283_);
lean_dec_ref(v_alts_281_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm(lean_object* v_parentTag_311_, lean_object* v_matchTac_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v___x_315_; lean_object* v_matchAlts_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_alts_319_; lean_object* v_nextIdx_320_; lean_object* v___x_321_; size_t v_sz_322_; size_t v___x_323_; lean_object* v___x_324_; 
v___x_315_ = lean_unsigned_to_nat(5u);
v_matchAlts_316_ = l_Lean_Syntax_getArg(v_matchTac_312_, v___x_315_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = l_Lean_Syntax_getArg(v_matchAlts_316_, v___x_317_);
lean_dec(v_matchAlts_316_);
v_alts_319_ = l_Lean_Syntax_getArgs(v___x_318_);
lean_dec(v___x_318_);
v_nextIdx_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__2));
v_sz_322_ = lean_array_size(v_alts_319_);
v___x_323_ = ((size_t)0ULL);
v___x_324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__1(v_alts_319_, v_parentTag_311_, v_alts_319_, v_sz_322_, v___x_323_, v___x_321_, v_a_313_, v_a_314_);
lean_dec_ref(v_alts_319_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v_snd_326_; lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_354_; 
v_a_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_325_);
v_snd_326_ = lean_ctor_get(v_a_325_, 1);
lean_inc(v_snd_326_);
v_a_327_ = lean_ctor_get(v___x_324_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_354_ == 0)
{
lean_object* v_unused_355_; 
v_unused_355_ = lean_ctor_get(v___x_324_, 0);
lean_dec(v_unused_355_);
v___x_329_ = v___x_324_;
v_isShared_330_ = v_isSharedCheck_354_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_324_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_354_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_fst_331_; lean_object* v_snd_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_352_; 
v_fst_331_ = lean_ctor_get(v_a_325_, 0);
lean_inc(v_fst_331_);
lean_dec(v_a_325_);
v_snd_332_ = lean_ctor_get(v_snd_326_, 1);
v_isSharedCheck_352_ = !lean_is_exclusive(v_snd_326_);
if (v_isSharedCheck_352_ == 0)
{
lean_object* v_unused_353_; 
v_unused_353_ = lean_ctor_get(v_snd_326_, 0);
lean_dec(v_unused_353_);
v___x_334_ = v_snd_326_;
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_snd_332_);
lean_dec(v_snd_326_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_336_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__3));
v___x_337_ = l_Lean_Syntax_setKind(v_matchTac_312_, v___x_336_);
v___x_338_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___closed__5));
v___x_339_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__4));
v___x_340_ = lean_box(2);
v___x_341_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___x_339_);
lean_ctor_set(v___x_341_, 2, v_fst_331_);
v___x_342_ = lean_mk_empty_array_with_capacity(v_nextIdx_320_);
v___x_343_ = lean_array_push(v___x_342_, v___x_341_);
v___x_344_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_344_, 0, v___x_340_);
lean_ctor_set(v___x_344_, 1, v___x_338_);
lean_ctor_set(v___x_344_, 2, v___x_343_);
v___x_345_ = l_Lean_Syntax_setArg(v___x_337_, v___x_315_, v___x_344_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_345_);
v___x_347_ = v___x_334_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v_snd_332_);
v___x_347_ = v_reuseFailAlloc_351_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_349_; 
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 0, v___x_347_);
v___x_349_ = v___x_329_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_a_327_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_dec(v_matchTac_312_);
v_a_356_ = lean_ctor_get(v___x_324_, 0);
v_a_357_ = lean_ctor_get(v___x_324_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_324_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_inc(v_a_356_);
lean_dec(v___x_324_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_356_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___boxed(lean_object* v_parentTag_365_, lean_object* v_matchTac_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm(v_parentTag_365_, v_matchTac_366_, v_a_367_, v_a_368_);
lean_dec_ref(v_a_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch___lam__0(lean_object* v_stx_370_, lean_object* v___x_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_declName_x3f_381_; lean_object* v_macroStack_382_; uint8_t v_mayPostpone_383_; uint8_t v_errToSorry_384_; lean_object* v_autoBoundImplicitContext_385_; lean_object* v_autoBoundImplicitForbidden_386_; lean_object* v_sectionVars_387_; lean_object* v_sectionFVars_388_; uint8_t v_implicitLambda_389_; uint8_t v_heedElabAsElim_390_; uint8_t v_isNoncomputableSection_391_; uint8_t v_isMetaSection_392_; uint8_t v_ignoreTCFailures_393_; uint8_t v_inPattern_394_; lean_object* v_tacSnap_x3f_395_; uint8_t v_saveRecAppSyntax_396_; uint8_t v_holesAsSyntheticOpaque_397_; lean_object* v_fixedTermElabs_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_declName_x3f_381_ = lean_ctor_get(v___y_374_, 0);
v_macroStack_382_ = lean_ctor_get(v___y_374_, 1);
v_mayPostpone_383_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8);
v_errToSorry_384_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_385_ = lean_ctor_get(v___y_374_, 2);
v_autoBoundImplicitForbidden_386_ = lean_ctor_get(v___y_374_, 3);
v_sectionVars_387_ = lean_ctor_get(v___y_374_, 4);
v_sectionFVars_388_ = lean_ctor_get(v___y_374_, 5);
v_implicitLambda_389_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 2);
v_heedElabAsElim_390_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_391_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 4);
v_isMetaSection_392_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_393_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 6);
v_inPattern_394_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_395_ = lean_ctor_get(v___y_374_, 6);
v_saveRecAppSyntax_396_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_397_ = lean_ctor_get_uint8(v___y_374_, sizeof(void*)*8 + 9);
v_fixedTermElabs_398_ = lean_ctor_get(v___y_374_, 7);
lean_inc(v___x_371_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v_stx_370_);
lean_ctor_set(v___x_399_, 1, v___x_371_);
lean_inc(v_macroStack_382_);
v___x_400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v_macroStack_382_);
lean_inc_ref(v_fixedTermElabs_398_);
lean_inc(v_tacSnap_x3f_395_);
lean_inc(v_sectionFVars_388_);
lean_inc(v_sectionVars_387_);
lean_inc_ref(v_autoBoundImplicitForbidden_386_);
lean_inc(v_autoBoundImplicitContext_385_);
lean_inc(v_declName_x3f_381_);
v___x_401_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_401_, 0, v_declName_x3f_381_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
lean_ctor_set(v___x_401_, 2, v_autoBoundImplicitContext_385_);
lean_ctor_set(v___x_401_, 3, v_autoBoundImplicitForbidden_386_);
lean_ctor_set(v___x_401_, 4, v_sectionVars_387_);
lean_ctor_set(v___x_401_, 5, v_sectionFVars_388_);
lean_ctor_set(v___x_401_, 6, v_tacSnap_x3f_395_);
lean_ctor_set(v___x_401_, 7, v_fixedTermElabs_398_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8, v_mayPostpone_383_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 1, v_errToSorry_384_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 2, v_implicitLambda_389_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 3, v_heedElabAsElim_390_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 4, v_isNoncomputableSection_391_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 5, v_isMetaSection_392_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 6, v_ignoreTCFailures_393_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 7, v_inPattern_394_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_396_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_397_);
v___x_402_ = l_Lean_Elab_Tactic_evalTactic(v___x_371_, v___y_372_, v___y_373_, v___x_401_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec_ref_known(v___x_401_, 8);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch___lam__0___boxed(lean_object* v_stx_403_, lean_object* v___x_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Elab_Tactic_evalMatch___lam__0(v_stx_403_, v___x_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__3(lean_object* v_env_415_, lean_object* v___x_416_, lean_object* v_currNamespace_417_, lean_object* v_openDecls_418_, lean_object* v_n_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = l_Lean_ResolveName_resolveGlobalName(v_env_415_, v___x_416_, v_currNamespace_417_, v_openDecls_418_, v_n_419_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___y_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__3___boxed(lean_object* v_env_424_, lean_object* v___x_425_, lean_object* v_currNamespace_426_, lean_object* v_openDecls_427_, lean_object* v_n_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__3(v_env_424_, v___x_425_, v_currNamespace_426_, v_openDecls_427_, v_n_428_, v___y_429_, v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec_ref(v___x_425_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__0(lean_object* v_env_432_, lean_object* v_declName_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
uint8_t v___x_436_; lean_object* v_env_437_; lean_object* v___x_438_; uint8_t v___x_439_; uint8_t v___x_440_; 
v___x_436_ = 0;
v_env_437_ = l_Lean_Environment_setExporting(v_env_432_, v___x_436_);
lean_inc(v_declName_433_);
v___x_438_ = l_Lean_mkPrivateName(v_env_437_, v_declName_433_);
v___x_439_ = 1;
lean_inc_ref(v_env_437_);
v___x_440_ = l_Lean_Environment_contains(v_env_437_, v___x_438_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_441_ = l_Lean_privateToUserName(v_declName_433_);
v___x_442_ = l_Lean_Environment_contains(v_env_437_, v___x_441_, v___x_439_);
v___x_443_ = lean_box(v___x_442_);
v___x_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___y_435_);
return v___x_444_;
}
else
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec_ref(v_env_437_);
lean_dec(v_declName_433_);
v___x_445_ = lean_box(v___x_440_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v___y_435_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__0___boxed(lean_object* v_env_447_, lean_object* v_declName_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__0(v_env_447_, v_declName_448_, v___y_449_, v___y_450_);
lean_dec_ref(v___y_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__4(lean_object* v_env_452_, lean_object* v_currNamespace_453_, lean_object* v_openDecls_454_, lean_object* v_n_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = l_Lean_ResolveName_resolveNamespace(v_env_452_, v_currNamespace_453_, v_openDecls_454_, v_n_455_);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___y_457_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__4___boxed(lean_object* v_env_460_, lean_object* v_currNamespace_461_, lean_object* v_openDecls_462_, lean_object* v_n_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__4(v_env_460_, v_currNamespace_461_, v_openDecls_462_, v_n_463_, v___y_464_, v___y_465_);
lean_dec_ref(v___y_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1(lean_object* v_msgData_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___x_473_; lean_object* v_env_474_; uint8_t v___x_475_; lean_object* v_env_476_; lean_object* v___x_477_; lean_object* v_toCold_478_; lean_object* v_mctx_479_; lean_object* v_lctx_480_; lean_object* v_options_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_473_ = lean_st_ref_get(v___y_471_);
v_env_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc_ref(v_env_474_);
lean_dec(v___x_473_);
v___x_475_ = 0;
v_env_476_ = l_Lean_Environment_setRecordingDeps(v_env_474_, v___x_475_);
v___x_477_ = lean_st_ref_get(v___y_469_);
v_toCold_478_ = lean_ctor_get(v___y_470_, 0);
v_mctx_479_ = lean_ctor_get(v___x_477_, 0);
lean_inc_ref(v_mctx_479_);
lean_dec(v___x_477_);
v_lctx_480_ = lean_ctor_get(v___y_468_, 2);
v_options_481_ = lean_ctor_get(v_toCold_478_, 2);
lean_inc_ref(v_options_481_);
lean_inc_ref(v_lctx_480_);
v___x_482_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_482_, 0, v_env_476_);
lean_ctor_set(v___x_482_, 1, v_mctx_479_);
lean_ctor_set(v___x_482_, 2, v_lctx_480_);
lean_ctor_set(v___x_482_, 3, v_options_481_);
v___x_483_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v_msgData_467_);
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1(v_msgData_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
return v_res_491_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_492_; double v___x_493_; 
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = lean_float_of_nat(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg(lean_object* v_cls_497_, lean_object* v_msg_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_ref_504_; lean_object* v___x_505_; lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_551_; 
v_ref_504_ = lean_ctor_get(v___y_501_, 2);
v___x_505_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1(v_msg_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_551_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_551_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_551_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v_traceState_511_; lean_object* v_env_512_; lean_object* v_nextMacroScope_513_; lean_object* v_ngen_514_; lean_object* v_auxDeclNGen_515_; lean_object* v_cache_516_; lean_object* v_recordedDeps_517_; lean_object* v_messages_518_; lean_object* v_infoState_519_; lean_object* v_snapshotTasks_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_550_; 
v___x_510_ = lean_st_ref_take(v___y_502_);
v_traceState_511_ = lean_ctor_get(v___x_510_, 4);
v_env_512_ = lean_ctor_get(v___x_510_, 0);
v_nextMacroScope_513_ = lean_ctor_get(v___x_510_, 1);
v_ngen_514_ = lean_ctor_get(v___x_510_, 2);
v_auxDeclNGen_515_ = lean_ctor_get(v___x_510_, 3);
v_cache_516_ = lean_ctor_get(v___x_510_, 5);
v_recordedDeps_517_ = lean_ctor_get(v___x_510_, 6);
v_messages_518_ = lean_ctor_get(v___x_510_, 7);
v_infoState_519_ = lean_ctor_get(v___x_510_, 8);
v_snapshotTasks_520_ = lean_ctor_get(v___x_510_, 9);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_550_ == 0)
{
v___x_522_ = v___x_510_;
v_isShared_523_ = v_isSharedCheck_550_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_snapshotTasks_520_);
lean_inc(v_infoState_519_);
lean_inc(v_messages_518_);
lean_inc(v_recordedDeps_517_);
lean_inc(v_cache_516_);
lean_inc(v_traceState_511_);
lean_inc(v_auxDeclNGen_515_);
lean_inc(v_ngen_514_);
lean_inc(v_nextMacroScope_513_);
lean_inc(v_env_512_);
lean_dec(v___x_510_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_550_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
uint64_t v_tid_524_; lean_object* v_traces_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_549_; 
v_tid_524_ = lean_ctor_get_uint64(v_traceState_511_, sizeof(void*)*1);
v_traces_525_ = lean_ctor_get(v_traceState_511_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v_traceState_511_);
if (v_isSharedCheck_549_ == 0)
{
v___x_527_ = v_traceState_511_;
v_isShared_528_ = v_isSharedCheck_549_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_traces_525_);
lean_dec(v_traceState_511_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_549_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_530_; double v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_529_ = lean_box(0);
v___x_530_ = lean_box(0);
v___x_531_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__0);
v___x_532_ = 0;
v___x_533_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__1));
v___x_534_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_534_, 0, v_cls_497_);
lean_ctor_set(v___x_534_, 1, v___x_530_);
lean_ctor_set(v___x_534_, 2, v___x_533_);
lean_ctor_set_float(v___x_534_, sizeof(void*)*3, v___x_531_);
lean_ctor_set_float(v___x_534_, sizeof(void*)*3 + 8, v___x_531_);
lean_ctor_set_uint8(v___x_534_, sizeof(void*)*3 + 16, v___x_532_);
v___x_535_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__2));
v___x_536_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_536_, 0, v___x_534_);
lean_ctor_set(v___x_536_, 1, v_a_506_);
lean_ctor_set(v___x_536_, 2, v___x_535_);
lean_inc(v_ref_504_);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v_ref_504_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = l_Lean_PersistentArray_push___redArg(v_traces_525_, v___x_537_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v___x_538_);
v___x_540_ = v___x_527_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_538_);
lean_ctor_set_uint64(v_reuseFailAlloc_548_, sizeof(void*)*1, v_tid_524_);
v___x_540_ = v_reuseFailAlloc_548_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_542_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 4, v___x_540_);
v___x_542_ = v___x_522_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_env_512_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_nextMacroScope_513_);
lean_ctor_set(v_reuseFailAlloc_547_, 2, v_ngen_514_);
lean_ctor_set(v_reuseFailAlloc_547_, 3, v_auxDeclNGen_515_);
lean_ctor_set(v_reuseFailAlloc_547_, 4, v___x_540_);
lean_ctor_set(v_reuseFailAlloc_547_, 5, v_cache_516_);
lean_ctor_set(v_reuseFailAlloc_547_, 6, v_recordedDeps_517_);
lean_ctor_set(v_reuseFailAlloc_547_, 7, v_messages_518_);
lean_ctor_set(v_reuseFailAlloc_547_, 8, v_infoState_519_);
lean_ctor_set(v_reuseFailAlloc_547_, 9, v_snapshotTasks_520_);
v___x_542_ = v_reuseFailAlloc_547_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_543_ = lean_st_ref_put(v___y_502_, v___x_542_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_529_);
v___x_545_ = v___x_508_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_529_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___boxed(lean_object* v_cls_552_, lean_object* v_msg_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg(v_cls_552_, v_msg_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4(lean_object* v_as_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
if (lean_obj_tag(v_as_563_) == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_box(0);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
else
{
lean_object* v_toCold_575_; lean_object* v_options_576_; uint8_t v_hasTrace_577_; 
v_toCold_575_ = lean_ctor_get(v___y_570_, 0);
v_options_576_ = lean_ctor_get(v_toCold_575_, 2);
v_hasTrace_577_ = lean_ctor_get_uint8(v_options_576_, sizeof(void*)*1);
if (v_hasTrace_577_ == 0)
{
lean_object* v_tail_578_; 
v_tail_578_ = lean_ctor_get(v_as_563_, 1);
lean_inc(v_tail_578_);
lean_dec_ref_known(v_as_563_, 2);
v_as_563_ = v_tail_578_;
goto _start;
}
else
{
lean_object* v_head_580_; lean_object* v_tail_581_; lean_object* v_fst_582_; lean_object* v_snd_583_; lean_object* v_inheritedTraceOptions_584_; lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v_head_580_ = lean_ctor_get(v_as_563_, 0);
lean_inc(v_head_580_);
v_tail_581_ = lean_ctor_get(v_as_563_, 1);
lean_inc(v_tail_581_);
lean_dec_ref_known(v_as_563_, 2);
v_fst_582_ = lean_ctor_get(v_head_580_, 0);
lean_inc_n(v_fst_582_, 2);
v_snd_583_ = lean_ctor_get(v_head_580_, 1);
lean_inc(v_snd_583_);
lean_dec(v_head_580_);
v_inheritedTraceOptions_584_ = lean_ctor_get(v_toCold_575_, 11);
v___x_585_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__1));
v___x_586_ = l_Lean_Name_append(v___x_585_, v_fst_582_);
v___x_587_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_584_, v_options_576_, v___x_586_);
lean_dec(v___x_586_);
if (v___x_587_ == 0)
{
lean_dec(v_snd_583_);
lean_dec(v_fst_582_);
v_as_563_ = v_tail_581_;
goto _start;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_589_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_589_, 0, v_snd_583_);
v___x_590_ = l_Lean_MessageData_ofFormat(v___x_589_);
v___x_591_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg(v_fst_582_, v___x_590_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_dec_ref_known(v___x_591_, 1);
v_as_563_ = v_tail_581_;
goto _start;
}
else
{
lean_dec(v_tail_581_);
return v___x_591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___boxed(lean_object* v_as_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4(v_as_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg(lean_object* v_x_604_, lean_object* v___y_605_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_607_; 
v_a_606_ = lean_ctor_get(v_x_604_, 0);
lean_inc(v_a_606_);
v___x_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_607_, 0, v_a_606_);
lean_ctor_set(v___x_607_, 1, v___y_605_);
return v___x_607_;
}
else
{
lean_object* v_a_608_; lean_object* v___x_609_; 
v_a_608_ = lean_ctor_get(v_x_604_, 0);
lean_inc(v_a_608_);
v___x_609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_609_, 0, v_a_608_);
lean_ctor_set(v___x_609_, 1, v___y_605_);
return v___x_609_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg___boxed(lean_object* v_x_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg(v_x_610_, v___y_611_);
lean_dec_ref(v_x_610_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__1(lean_object* v_env_613_, lean_object* v_stx_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_613_, v_stx_614_, v___y_615_, v___y_616_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
if (lean_obj_tag(v_a_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_627_; 
v_a_619_ = lean_ctor_get(v___x_617_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; 
v_unused_628_ = lean_ctor_get(v___x_617_, 0);
lean_dec(v_unused_628_);
v___x_621_ = v___x_617_;
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_617_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = lean_box(0);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_a_619_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
else
{
lean_object* v_val_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_657_; 
v_val_629_ = lean_ctor_get(v_a_618_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v_a_618_);
if (v_isSharedCheck_657_ == 0)
{
v___x_631_ = v_a_618_;
v_isShared_632_ = v_isSharedCheck_657_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_val_629_);
lean_dec(v_a_618_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_657_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v_snd_633_; 
v_snd_633_ = lean_ctor_get(v_val_629_, 1);
lean_inc(v_snd_633_);
lean_dec(v_val_629_);
if (lean_obj_tag(v_snd_633_) == 0)
{
lean_object* v_a_634_; lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_643_; 
lean_del_object(v___x_631_);
v_a_634_ = lean_ctor_get(v___x_617_, 1);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_617_, 2);
v_a_635_ = lean_ctor_get(v_snd_633_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v_snd_633_);
if (v_isSharedCheck_643_ == 0)
{
v___x_637_ = v_snd_633_;
v_isShared_638_ = v_isSharedCheck_643_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v_snd_633_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_643_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_642_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; 
v___x_641_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg(v___x_640_, v_a_634_);
lean_dec_ref(v___x_640_);
return v___x_641_;
}
}
}
else
{
lean_object* v_a_644_; lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_656_; 
v_a_644_ = lean_ctor_get(v___x_617_, 1);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_617_, 2);
v_a_645_ = lean_ctor_get(v_snd_633_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v_snd_633_);
if (v_isSharedCheck_656_ == 0)
{
v___x_647_ = v_snd_633_;
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v_snd_633_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v_a_645_);
v___x_650_ = v___x_631_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_655_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_652_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_650_);
v___x_652_ = v___x_647_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_654_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; 
v___x_653_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg(v___x_652_, v_a_644_);
lean_dec_ref(v___x_652_);
return v___x_653_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_658_; lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
v_a_658_ = lean_ctor_get(v___x_617_, 0);
v_a_659_ = lean_ctor_get(v___x_617_, 1);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_617_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_inc(v_a_658_);
lean_dec(v___x_617_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_658_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__1___boxed(lean_object* v_env_667_, lean_object* v_stx_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__1(v_env_667_, v_stx_668_, v___y_669_, v___y_670_);
lean_dec_ref(v___y_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg(lean_object* v_a_672_, lean_object* v_x_673_){
_start:
{
if (lean_obj_tag(v_x_673_) == 0)
{
lean_object* v___x_674_; 
v___x_674_ = lean_box(0);
return v___x_674_;
}
else
{
lean_object* v_key_675_; lean_object* v_value_676_; lean_object* v_tail_677_; uint8_t v___x_678_; 
v_key_675_ = lean_ctor_get(v_x_673_, 0);
v_value_676_ = lean_ctor_get(v_x_673_, 1);
v_tail_677_ = lean_ctor_get(v_x_673_, 2);
v___x_678_ = lean_name_eq(v_key_675_, v_a_672_);
if (v___x_678_ == 0)
{
v_x_673_ = v_tail_677_;
goto _start;
}
else
{
lean_object* v___x_680_; 
lean_inc(v_value_676_);
v___x_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_680_, 0, v_value_676_);
return v___x_680_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object* v_a_681_, lean_object* v_x_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg(v_a_681_, v_x_682_);
lean_dec(v_x_682_);
lean_dec(v_a_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg(lean_object* v_m_684_, lean_object* v_a_685_){
_start:
{
lean_object* v_buckets_686_; lean_object* v___x_687_; uint64_t v___y_689_; 
v_buckets_686_ = lean_ctor_get(v_m_684_, 1);
v___x_687_ = lean_array_get_size(v_buckets_686_);
if (lean_obj_tag(v_a_685_) == 0)
{
uint64_t v___x_703_; 
v___x_703_ = 1723ULL;
v___y_689_ = v___x_703_;
goto v___jp_688_;
}
else
{
uint64_t v_hash_704_; 
v_hash_704_ = lean_ctor_get_uint64(v_a_685_, sizeof(void*)*2);
v___y_689_ = v_hash_704_;
goto v___jp_688_;
}
v___jp_688_:
{
uint64_t v___x_690_; uint64_t v___x_691_; uint64_t v_fold_692_; uint64_t v___x_693_; uint64_t v___x_694_; uint64_t v___x_695_; size_t v___x_696_; size_t v___x_697_; size_t v___x_698_; size_t v___x_699_; size_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_690_ = 32ULL;
v___x_691_ = lean_uint64_shift_right(v___y_689_, v___x_690_);
v_fold_692_ = lean_uint64_xor(v___y_689_, v___x_691_);
v___x_693_ = 16ULL;
v___x_694_ = lean_uint64_shift_right(v_fold_692_, v___x_693_);
v___x_695_ = lean_uint64_xor(v_fold_692_, v___x_694_);
v___x_696_ = lean_uint64_to_usize(v___x_695_);
v___x_697_ = lean_usize_of_nat(v___x_687_);
v___x_698_ = ((size_t)1ULL);
v___x_699_ = lean_usize_sub(v___x_697_, v___x_698_);
v___x_700_ = lean_usize_land(v___x_696_, v___x_699_);
v___x_701_ = lean_array_uget_borrowed(v_buckets_686_, v___x_700_);
v___x_702_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg(v_a_685_, v___x_701_);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_m_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg(v_m_705_, v_a_706_);
lean_dec(v_a_706_);
lean_dec_ref(v_m_705_);
return v_res_707_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_708_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg(){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__1);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___boxed(lean_object* v___dummy_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg();
return v_res_714_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg(lean_object* v_keys_715_, lean_object* v_i_716_, lean_object* v_k_717_){
_start:
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = lean_array_get_size(v_keys_715_);
v___x_719_ = lean_nat_dec_lt(v_i_716_, v___x_718_);
if (v___x_719_ == 0)
{
lean_dec(v_i_716_);
return v___x_719_;
}
else
{
lean_object* v_k_x27_720_; uint8_t v___x_721_; 
v_k_x27_720_ = lean_array_fget_borrowed(v_keys_715_, v_i_716_);
v___x_721_ = l_Lean_instBEqExtraModUse_beq(v_k_717_, v_k_x27_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_unsigned_to_nat(1u);
v___x_723_ = lean_nat_add(v_i_716_, v___x_722_);
lean_dec(v_i_716_);
v_i_716_ = v___x_723_;
goto _start;
}
else
{
lean_dec(v_i_716_);
return v___x_719_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_keys_725_, lean_object* v_i_726_, lean_object* v_k_727_){
_start:
{
uint8_t v_res_728_; lean_object* v_r_729_; 
v_res_728_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg(v_keys_725_, v_i_726_, v_k_727_);
lean_dec_ref(v_k_727_);
lean_dec_ref(v_keys_725_);
v_r_729_ = lean_box(v_res_728_);
return v_r_729_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg(lean_object* v_x_730_, size_t v_x_731_, lean_object* v_x_732_){
_start:
{
if (lean_obj_tag(v_x_730_) == 0)
{
lean_object* v_es_733_; lean_object* v___x_734_; size_t v___x_735_; size_t v___x_736_; lean_object* v_j_737_; lean_object* v___x_738_; 
v_es_733_ = lean_ctor_get(v_x_730_, 0);
v___x_734_ = lean_box(2);
v___x_735_ = ((size_t)31ULL);
v___x_736_ = lean_usize_land(v_x_731_, v___x_735_);
v_j_737_ = lean_usize_to_nat(v___x_736_);
v___x_738_ = lean_array_get_borrowed(v___x_734_, v_es_733_, v_j_737_);
lean_dec(v_j_737_);
switch(lean_obj_tag(v___x_738_))
{
case 0:
{
lean_object* v_key_739_; uint8_t v___x_740_; 
v_key_739_ = lean_ctor_get(v___x_738_, 0);
v___x_740_ = l_Lean_instBEqExtraModUse_beq(v_x_732_, v_key_739_);
return v___x_740_;
}
case 1:
{
lean_object* v_node_741_; size_t v___x_742_; size_t v___x_743_; 
v_node_741_ = lean_ctor_get(v___x_738_, 0);
v___x_742_ = ((size_t)5ULL);
v___x_743_ = lean_usize_shift_right(v_x_731_, v___x_742_);
v_x_730_ = v_node_741_;
v_x_731_ = v___x_743_;
goto _start;
}
default: 
{
uint8_t v___x_745_; 
v___x_745_ = 0;
return v___x_745_;
}
}
}
else
{
lean_object* v_ks_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v_ks_746_ = lean_ctor_get(v_x_730_, 0);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg(v_ks_746_, v___x_747_, v_x_732_);
return v___x_748_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg___boxed(lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v_x_751_){
_start:
{
size_t v_x_24998__boxed_752_; uint8_t v_res_753_; lean_object* v_r_754_; 
v_x_24998__boxed_752_ = lean_unbox_usize(v_x_750_);
lean_dec(v_x_750_);
v_res_753_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg(v_x_749_, v_x_24998__boxed_752_, v_x_751_);
lean_dec_ref(v_x_751_);
lean_dec_ref(v_x_749_);
v_r_754_ = lean_box(v_res_753_);
return v_r_754_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg(lean_object* v_x_755_, lean_object* v_x_756_){
_start:
{
uint64_t v___x_757_; size_t v___x_758_; uint8_t v___x_759_; 
v___x_757_ = l_Lean_instHashableExtraModUse_hash(v_x_756_);
v___x_758_ = lean_uint64_to_usize(v___x_757_);
v___x_759_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg(v_x_755_, v___x_758_, v_x_756_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_x_760_, lean_object* v_x_761_){
_start:
{
uint8_t v_res_762_; lean_object* v_r_763_; 
v_res_762_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg(v_x_760_, v_x_761_);
lean_dec_ref(v_x_761_);
lean_dec_ref(v_x_760_);
v_r_763_ = lean_box(v_res_762_);
return v_r_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___lam__0(lean_object* v_addEntryFn_764_, lean_object* v_entry_765_, lean_object* v_s_766_){
_start:
{
lean_object* v_importedEntries_767_; lean_object* v_state_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_776_; 
v_importedEntries_767_ = lean_ctor_get(v_s_766_, 0);
v_state_768_ = lean_ctor_get(v_s_766_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v_s_766_);
if (v_isSharedCheck_776_ == 0)
{
v___x_770_ = v_s_766_;
v_isShared_771_ = v_isSharedCheck_776_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_state_768_);
lean_inc(v_importedEntries_767_);
lean_dec(v_s_766_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_776_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v_state_772_; lean_object* v___x_774_; 
v_state_772_ = lean_apply_2(v_addEntryFn_764_, v_state_768_, v_entry_765_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 1, v_state_772_);
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_importedEntries_767_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_state_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg___closed__0);
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
return v___x_778_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
return v___x_780_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14___redArg();
return v___x_781_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
return v___x_783_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = lean_unsigned_to_nat(0u);
v___x_785_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0);
v___x_786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
lean_ctor_set(v___x_786_, 2, v___x_784_);
return v___x_786_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__5(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_787_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__4);
v___x_788_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__3);
v___x_789_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__0);
v___x_790_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2);
v___x_791_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
lean_ctor_set(v___x_791_, 1, v___x_789_);
lean_ctor_set(v___x_791_, 2, v___x_788_);
lean_ctor_set(v___x_791_, 3, v___x_789_);
lean_ctor_set(v___x_791_, 4, v___x_789_);
lean_ctor_set(v___x_791_, 5, v___x_789_);
lean_ctor_set(v___x_791_, 6, v___x_789_);
lean_ctor_set(v___x_791_, 7, v___x_787_);
return v___x_791_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__6(void){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_792_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__10(void){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__9));
v___x_798_ = l_Lean_stringToMessageData(v___x_797_);
return v___x_798_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__12(void){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__11));
v___x_801_ = l_Lean_stringToMessageData(v___x_800_);
return v___x_801_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__13(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg___closed__1));
v___x_803_ = l_Lean_stringToMessageData(v___x_802_);
return v___x_803_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__14(void){
_start:
{
lean_object* v_cls_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_cls_804_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__8));
v___x_805_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4___closed__1));
v___x_806_ = l_Lean_Name_append(v___x_805_, v_cls_804_);
return v___x_806_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__16(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__15));
v___x_809_ = l_Lean_stringToMessageData(v___x_808_);
return v___x_809_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__18(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__17));
v___x_812_ = l_Lean_stringToMessageData(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4(lean_object* v_mod_817_, uint8_t v_isMeta_818_, lean_object* v_hint_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v_env_863_; uint8_t v_isExporting_864_; lean_object* v_entry_865_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___x_890_; lean_object* v_env_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_861_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__6);
v___x_862_ = lean_st_ref_get(v___y_827_);
v_env_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc_ref(v_env_863_);
lean_dec(v___x_862_);
v_isExporting_864_ = lean_ctor_get_uint8(v_env_863_, sizeof(void*)*13);
lean_dec_ref(v_env_863_);
lean_inc(v_mod_817_);
v_entry_865_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_865_, 0, v_mod_817_);
lean_ctor_set_uint8(v_entry_865_, sizeof(void*)*1, v_isExporting_864_);
lean_ctor_set_uint8(v_entry_865_, sizeof(void*)*1 + 1, v_isMeta_818_);
v___x_890_ = lean_st_ref_get(v___y_827_);
v_env_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc_ref(v_env_891_);
lean_dec(v___x_890_);
v___x_892_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_893_ = lean_box(1);
v___x_894_ = lean_box(0);
v___x_895_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_861_, v___x_892_, v_env_891_, v___x_893_, v___x_894_);
v___x_896_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg(v___x_895_, v_entry_865_);
lean_dec(v___x_895_);
if (v___x_896_ == 0)
{
lean_object* v_toCold_897_; lean_object* v_options_898_; uint8_t v_hasTrace_899_; 
v_toCold_897_ = lean_ctor_get(v___y_826_, 0);
v_options_898_ = lean_ctor_get(v_toCold_897_, 2);
v_hasTrace_899_ = lean_ctor_get_uint8(v_options_898_, sizeof(void*)*1);
if (v_hasTrace_899_ == 0)
{
lean_dec(v_hint_819_);
lean_dec(v_mod_817_);
v___y_867_ = v___y_825_;
v___y_868_ = v___y_827_;
goto v___jp_866_;
}
else
{
lean_object* v_inheritedTraceOptions_900_; lean_object* v_cls_901_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___x_921_; uint8_t v___x_922_; 
v_inheritedTraceOptions_900_ = lean_ctor_get(v_toCold_897_, 11);
v_cls_901_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__8));
v___x_921_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__14);
v___x_922_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_900_, v_options_898_, v___x_921_);
if (v___x_922_ == 0)
{
lean_dec(v_hint_819_);
lean_dec(v_mod_817_);
v___y_867_ = v___y_825_;
v___y_868_ = v___y_827_;
goto v___jp_866_;
}
else
{
lean_object* v___x_923_; lean_object* v___y_925_; 
v___x_923_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__16);
if (v_isExporting_864_ == 0)
{
lean_object* v___x_932_; 
v___x_932_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__21));
v___y_925_ = v___x_932_;
goto v___jp_924_;
}
else
{
lean_object* v___x_933_; 
v___x_933_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__22));
v___y_925_ = v___x_933_;
goto v___jp_924_;
}
v___jp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_inc_ref(v___y_925_);
v___x_926_ = l_Lean_stringToMessageData(v___y_925_);
v___x_927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_923_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__18);
v___x_929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_927_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
if (v_isMeta_818_ == 0)
{
lean_object* v___x_930_; 
v___x_930_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__19));
v___y_908_ = v___x_929_;
v___y_909_ = v___x_930_;
goto v___jp_907_;
}
else
{
lean_object* v___x_931_; 
v___x_931_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__20));
v___y_908_ = v___x_929_;
v___y_909_ = v___x_931_;
goto v___jp_907_;
}
}
}
v___jp_902_:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_905_, 0, v___y_903_);
lean_ctor_set(v___x_905_, 1, v___y_904_);
v___x_906_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg(v_cls_901_, v___x_905_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_dec_ref_known(v___x_906_, 1);
v___y_867_ = v___y_825_;
v___y_868_ = v___y_827_;
goto v___jp_866_;
}
else
{
lean_dec_ref_known(v_entry_865_, 1);
return v___x_906_;
}
}
v___jp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
lean_inc_ref(v___y_909_);
v___x_910_ = l_Lean_stringToMessageData(v___y_909_);
v___x_911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_911_, 0, v___y_908_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__10);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = l_Lean_MessageData_ofName(v_mod_817_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_Name_isAnonymous(v_hint_819_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_917_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__12);
v___x_918_ = l_Lean_MessageData_ofName(v_hint_819_);
v___x_919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___y_903_ = v___x_915_;
v___y_904_ = v___x_919_;
goto v___jp_902_;
}
else
{
lean_object* v___x_920_; 
lean_dec(v_hint_819_);
v___x_920_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__13);
v___y_903_ = v___x_915_;
v___y_904_ = v___x_920_;
goto v___jp_902_;
}
}
}
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; 
lean_dec_ref_known(v_entry_865_, 1);
lean_dec(v_hint_819_);
lean_dec(v_mod_817_);
v___x_934_ = lean_box(0);
v___x_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
return v___x_935_;
}
v___jp_829_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v_mctx_845_; lean_object* v_zetaDeltaFVarIds_846_; lean_object* v_postponed_847_; lean_object* v_diag_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_859_; 
v___x_841_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__1);
v___x_842_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_842_, 0, v___y_840_);
lean_ctor_set(v___x_842_, 1, v___y_832_);
lean_ctor_set(v___x_842_, 2, v___y_835_);
lean_ctor_set(v___x_842_, 3, v___y_834_);
lean_ctor_set(v___x_842_, 4, v___y_837_);
lean_ctor_set(v___x_842_, 5, v___x_841_);
lean_ctor_set(v___x_842_, 6, v___y_839_);
lean_ctor_set(v___x_842_, 7, v___y_830_);
lean_ctor_set(v___x_842_, 8, v___y_833_);
lean_ctor_set(v___x_842_, 9, v___y_838_);
v___x_843_ = lean_st_ref_put(v___y_836_, v___x_842_);
v___x_844_ = lean_st_ref_take(v___y_831_);
v_mctx_845_ = lean_ctor_get(v___x_844_, 0);
v_zetaDeltaFVarIds_846_ = lean_ctor_get(v___x_844_, 2);
v_postponed_847_ = lean_ctor_get(v___x_844_, 3);
v_diag_848_ = lean_ctor_get(v___x_844_, 4);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v___x_844_, 1);
lean_dec(v_unused_860_);
v___x_850_ = v___x_844_;
v_isShared_851_ = v_isSharedCheck_859_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_diag_848_);
lean_inc(v_postponed_847_);
lean_inc(v_zetaDeltaFVarIds_846_);
lean_inc(v_mctx_845_);
lean_dec(v___x_844_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_859_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_852_ = lean_box(0);
v___x_853_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__5);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v___x_853_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_mctx_845_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_858_, 2, v_zetaDeltaFVarIds_846_);
lean_ctor_set(v_reuseFailAlloc_858_, 3, v_postponed_847_);
lean_ctor_set(v_reuseFailAlloc_858_, 4, v_diag_848_);
v___x_855_ = v_reuseFailAlloc_858_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_st_ref_put(v___y_831_, v___x_855_);
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_852_);
return v___x_857_;
}
}
}
v___jp_866_:
{
lean_object* v___x_869_; lean_object* v_env_870_; lean_object* v_nextMacroScope_871_; lean_object* v_ngen_872_; lean_object* v_auxDeclNGen_873_; lean_object* v_traceState_874_; lean_object* v_recordedDeps_875_; lean_object* v_messages_876_; lean_object* v_infoState_877_; lean_object* v_snapshotTasks_878_; lean_object* v___x_879_; lean_object* v_toEnvExtension_880_; lean_object* v_addEntryFn_881_; lean_object* v_asyncMode_882_; uint8_t v_logWrites_883_; lean_object* v___f_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_869_ = lean_st_ref_take(v___y_868_);
v_env_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc_ref(v_env_870_);
v_nextMacroScope_871_ = lean_ctor_get(v___x_869_, 1);
lean_inc(v_nextMacroScope_871_);
v_ngen_872_ = lean_ctor_get(v___x_869_, 2);
lean_inc_ref(v_ngen_872_);
v_auxDeclNGen_873_ = lean_ctor_get(v___x_869_, 3);
lean_inc_ref(v_auxDeclNGen_873_);
v_traceState_874_ = lean_ctor_get(v___x_869_, 4);
lean_inc_ref(v_traceState_874_);
v_recordedDeps_875_ = lean_ctor_get(v___x_869_, 6);
lean_inc_ref(v_recordedDeps_875_);
v_messages_876_ = lean_ctor_get(v___x_869_, 7);
lean_inc_ref(v_messages_876_);
v_infoState_877_ = lean_ctor_get(v___x_869_, 8);
lean_inc_ref(v_infoState_877_);
v_snapshotTasks_878_ = lean_ctor_get(v___x_869_, 9);
lean_inc_ref(v_snapshotTasks_878_);
lean_dec(v___x_869_);
v___x_879_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_880_ = lean_ctor_get(v___x_879_, 0);
v_addEntryFn_881_ = lean_ctor_get(v___x_879_, 3);
v_asyncMode_882_ = lean_ctor_get(v_toEnvExtension_880_, 2);
v_logWrites_883_ = lean_ctor_get_uint8(v_toEnvExtension_880_, sizeof(void*)*6);
lean_inc(v_addEntryFn_881_);
v___f_884_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___lam__0), 3, 2);
lean_closure_set(v___f_884_, 0, v_addEntryFn_881_);
lean_closure_set(v___f_884_, 1, v_entry_865_);
v___x_885_ = lean_box(0);
v___x_886_ = 1;
if (v_logWrites_883_ == 0)
{
lean_object* v___x_887_; 
lean_inc_ref(v_toEnvExtension_880_);
v___x_887_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_880_, v_env_870_, v___f_884_, v_asyncMode_882_, v___x_885_, v___x_886_);
v___y_830_ = v_messages_876_;
v___y_831_ = v___y_867_;
v___y_832_ = v_nextMacroScope_871_;
v___y_833_ = v_infoState_877_;
v___y_834_ = v_auxDeclNGen_873_;
v___y_835_ = v_ngen_872_;
v___y_836_ = v___y_868_;
v___y_837_ = v_traceState_874_;
v___y_838_ = v_snapshotTasks_878_;
v___y_839_ = v_recordedDeps_875_;
v___y_840_ = v___x_887_;
goto v___jp_829_;
}
else
{
lean_object* v___x_888_; lean_object* v___x_889_; 
lean_inc_ref_n(v_toEnvExtension_880_, 2);
v___x_888_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_880_, v_env_870_);
lean_dec_ref(v_env_870_);
v___x_889_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_880_, v___x_888_, v___f_884_, v_asyncMode_882_, v___x_885_, v___x_886_);
v___y_830_ = v_messages_876_;
v___y_831_ = v___y_867_;
v___y_832_ = v_nextMacroScope_871_;
v___y_833_ = v_infoState_877_;
v___y_834_ = v_auxDeclNGen_873_;
v___y_835_ = v_ngen_872_;
v___y_836_ = v___y_868_;
v___y_837_ = v_traceState_874_;
v___y_838_ = v_snapshotTasks_878_;
v___y_839_ = v_recordedDeps_875_;
v___y_840_ = v___x_889_;
goto v___jp_829_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___boxed(lean_object* v_mod_936_, lean_object* v_isMeta_937_, lean_object* v_hint_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
uint8_t v_isMeta_boxed_948_; lean_object* v_res_949_; 
v_isMeta_boxed_948_ = lean_unbox(v_isMeta_937_);
v_res_949_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4(v_mod_936_, v_isMeta_boxed_948_, v_hint_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__5(lean_object* v___x_950_, lean_object* v_declName_951_, lean_object* v_as_952_, size_t v_sz_953_, size_t v_i_954_, lean_object* v_b_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
uint8_t v___x_965_; 
v___x_965_ = lean_usize_dec_lt(v_i_954_, v_sz_953_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
lean_dec(v_declName_951_);
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v_b_955_);
return v___x_966_;
}
else
{
lean_object* v___x_967_; lean_object* v_modules_968_; lean_object* v___x_969_; lean_object* v_a_970_; lean_object* v___x_971_; lean_object* v_toImport_972_; lean_object* v_module_973_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; 
v___x_967_ = l_Lean_Environment_header(v___x_950_);
v_modules_968_ = lean_ctor_get(v___x_967_, 3);
lean_inc_ref(v_modules_968_);
lean_dec_ref(v___x_967_);
v___x_969_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_970_ = lean_array_uget_borrowed(v_as_952_, v_i_954_);
v___x_971_ = lean_array_get(v___x_969_, v_modules_968_, v_a_970_);
lean_dec_ref(v_modules_968_);
v_toImport_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc_ref(v_toImport_972_);
lean_dec(v___x_971_);
v_module_973_ = lean_ctor_get(v_toImport_972_, 0);
lean_inc(v_module_973_);
lean_dec_ref(v_toImport_972_);
v___x_974_ = lean_box(0);
v___x_975_ = 0;
lean_inc(v_declName_951_);
v___x_976_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4(v_module_973_, v___x_975_, v_declName_951_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_976_) == 0)
{
size_t v___x_977_; size_t v___x_978_; 
lean_dec_ref_known(v___x_976_, 1);
v___x_977_ = ((size_t)1ULL);
v___x_978_ = lean_usize_add(v_i_954_, v___x_977_);
v_i_954_ = v___x_978_;
v_b_955_ = v___x_974_;
goto _start;
}
else
{
lean_dec(v_declName_951_);
return v___x_976_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__5___boxed(lean_object* v___x_980_, lean_object* v_declName_981_, lean_object* v_as_982_, lean_object* v_sz_983_, lean_object* v_i_984_, lean_object* v_b_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
size_t v_sz_boxed_995_; size_t v_i_boxed_996_; lean_object* v_res_997_; 
v_sz_boxed_995_ = lean_unbox_usize(v_sz_983_);
lean_dec(v_sz_983_);
v_i_boxed_996_ = lean_unbox_usize(v_i_984_);
lean_dec(v_i_984_);
v_res_997_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__5(v___x_980_, v_declName_981_, v_as_982_, v_sz_boxed_995_, v_i_boxed_996_, v_b_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec_ref(v_as_982_);
lean_dec_ref(v___x_980_);
return v_res_997_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Std_HashMap_instInhabited___redArg();
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2(lean_object* v_declName_1001_, uint8_t v_isMeta_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v_env_1017_; lean_object* v___y_1019_; lean_object* v___x_1032_; 
v___x_1012_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__0);
v___x_1013_ = lean_st_ref_get(v___y_1010_);
v_env_1017_ = lean_ctor_get(v___x_1013_, 0);
lean_inc_ref(v_env_1017_);
lean_dec(v___x_1013_);
v___x_1032_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1017_, v_declName_1001_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_dec_ref(v_env_1017_);
lean_dec(v_declName_1001_);
goto v___jp_1014_;
}
else
{
lean_object* v_val_1033_; lean_object* v___x_1034_; lean_object* v_modules_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v_val_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_val_1033_);
lean_dec_ref_known(v___x_1032_, 1);
v___x_1034_ = l_Lean_Environment_header(v_env_1017_);
v_modules_1035_ = lean_ctor_get(v___x_1034_, 3);
lean_inc_ref(v_modules_1035_);
lean_dec_ref(v___x_1034_);
v___x_1036_ = lean_array_get_size(v_modules_1035_);
v___x_1037_ = lean_nat_dec_lt(v_val_1033_, v___x_1036_);
if (v___x_1037_ == 0)
{
lean_dec_ref(v_modules_1035_);
lean_dec(v_val_1033_);
lean_dec_ref(v_env_1017_);
lean_dec(v_declName_1001_);
goto v___jp_1014_;
}
else
{
lean_object* v___x_1038_; lean_object* v___x_1039_; uint8_t v___y_1041_; 
v___x_1038_ = lean_array_fget(v_modules_1035_, v_val_1033_);
lean_dec(v_val_1033_);
lean_dec_ref(v_modules_1035_);
v___x_1039_ = lean_st_ref_get(v___y_1010_);
if (v_isMeta_1002_ == 0)
{
lean_dec(v___x_1039_);
v___y_1041_ = v_isMeta_1002_;
goto v___jp_1040_;
}
else
{
lean_object* v_env_1052_; uint8_t v___x_1053_; 
v_env_1052_ = lean_ctor_get(v___x_1039_, 0);
lean_inc_ref(v_env_1052_);
lean_dec(v___x_1039_);
lean_inc(v_declName_1001_);
v___x_1053_ = l_Lean_isMarkedMeta(v_env_1052_, v_declName_1001_);
if (v___x_1053_ == 0)
{
v___y_1041_ = v_isMeta_1002_;
goto v___jp_1040_;
}
else
{
uint8_t v___x_1054_; 
v___x_1054_ = 0;
v___y_1041_ = v___x_1054_;
goto v___jp_1040_;
}
}
v___jp_1040_:
{
lean_object* v_toImport_1042_; lean_object* v_module_1043_; lean_object* v___x_1044_; 
v_toImport_1042_ = lean_ctor_get(v___x_1038_, 0);
lean_inc_ref(v_toImport_1042_);
lean_dec(v___x_1038_);
v_module_1043_ = lean_ctor_get(v_toImport_1042_, 0);
lean_inc(v_module_1043_);
lean_dec_ref(v_toImport_1042_);
lean_inc(v_declName_1001_);
v___x_1044_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4(v_module_1043_, v___y_1041_, v_declName_1001_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec_ref_known(v___x_1044_, 1);
v___x_1045_ = l_Lean_indirectModUseExt;
v___x_1046_ = lean_box(1);
v___x_1047_ = lean_box(0);
lean_inc_ref(v_env_1017_);
v___x_1048_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1012_, v___x_1045_, v_env_1017_, v___x_1046_, v___x_1047_);
v___x_1049_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg(v___x_1048_, v_declName_1001_);
lean_dec(v___x_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___closed__1));
v___y_1019_ = v___x_1050_;
goto v___jp_1018_;
}
else
{
lean_object* v_val_1051_; 
v_val_1051_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_val_1051_);
lean_dec_ref_known(v___x_1049_, 1);
v___y_1019_ = v_val_1051_;
goto v___jp_1018_;
}
}
else
{
lean_dec_ref(v_env_1017_);
lean_dec(v_declName_1001_);
return v___x_1044_;
}
}
}
}
v___jp_1014_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_box(0);
v___x_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
return v___x_1016_;
}
v___jp_1018_:
{
lean_object* v___x_1020_; size_t v_sz_1021_; size_t v___x_1022_; lean_object* v___x_1023_; 
v___x_1020_ = lean_box(0);
v_sz_1021_ = lean_array_size(v___y_1019_);
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__5(v_env_1017_, v_declName_1001_, v___y_1019_, v_sz_1021_, v___x_1022_, v___x_1020_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_);
lean_dec_ref(v___y_1019_);
lean_dec_ref(v_env_1017_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; 
v_unused_1031_ = lean_ctor_get(v___x_1023_, 0);
lean_dec(v_unused_1031_);
v___x_1025_ = v___x_1023_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_dec(v___x_1023_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1020_);
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1020_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
else
{
return v___x_1023_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2___boxed(lean_object* v_declName_1055_, lean_object* v_isMeta_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
uint8_t v_isMeta_boxed_1066_; lean_object* v_res_1067_; 
v_isMeta_boxed_1066_ = lean_unbox(v_isMeta_1056_);
v_res_1067_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2(v_declName_1055_, v_isMeta_boxed_1066_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg(lean_object* v_as_x27_1068_, lean_object* v_b_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
if (lean_obj_tag(v_as_x27_1068_) == 0)
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v_b_1069_);
return v___x_1079_;
}
else
{
lean_object* v_head_1080_; lean_object* v_tail_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; 
v_head_1080_ = lean_ctor_get(v_as_x27_1068_, 0);
v_tail_1081_ = lean_ctor_get(v_as_x27_1068_, 1);
v___x_1082_ = lean_box(0);
v___x_1083_ = 1;
lean_inc(v_head_1080_);
v___x_1084_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2(v_head_1080_, v___x_1083_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_dec_ref_known(v___x_1084_, 1);
v_as_x27_1068_ = v_tail_1081_;
v_b_1069_ = v___x_1082_;
goto _start;
}
else
{
return v___x_1084_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg___boxed(lean_object* v_as_x27_1086_, lean_object* v_b_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg(v_as_x27_1086_, v_b_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_as_x27_1086_);
return v_res_1097_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1098_ = lean_box(0);
v___x_1099_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v___x_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg(){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1102_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___closed__0);
v___x_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg___boxed(lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg();
return v_res_1105_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = l_Lean_maxRecDepthErrorMessage;
v___x_1112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__3);
v___x_1114_ = l_Lean_MessageData_ofFormat(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1115_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__4);
v___x_1116_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__2));
v___x_1117_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
lean_ctor_set(v___x_1117_, 1, v___x_1115_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg(lean_object* v_ref_1118_){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1120_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___closed__5);
v___x_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1121_, 0, v_ref_1118_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg___boxed(lean_object* v_ref_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg(v_ref_1123_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg(lean_object* v_msg_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_ref_1132_; lean_object* v___x_1133_; lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1142_; 
v_ref_1132_ = lean_ctor_get(v___y_1129_, 2);
v___x_1133_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0_spec__1(v_msg_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1136_ = v___x_1133_;
v_isShared_1137_ = v_isSharedCheck_1142_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1133_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1142_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1140_; 
lean_inc(v_ref_1132_);
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v_ref_1132_);
lean_ctor_set(v___x_1138_, 1, v_a_1134_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set_tag(v___x_1136_, 1);
lean_ctor_set(v___x_1136_, 0, v___x_1138_);
v___x_1140_ = v___x_1136_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg___boxed(lean_object* v_msg_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg(v_msg_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg(lean_object* v_ref_1150_, lean_object* v_msg_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_toCold_1161_; lean_object* v_currRecDepth_1162_; lean_object* v_ref_1163_; uint16_t v_optionFlags_1164_; uint8_t v_suppressElabErrors_1165_; uint8_t v_checkDeprecated_1166_; uint8_t v_isRecordingDeps_1167_; lean_object* v_ref_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_toCold_1161_ = lean_ctor_get(v___y_1158_, 0);
v_currRecDepth_1162_ = lean_ctor_get(v___y_1158_, 1);
v_ref_1163_ = lean_ctor_get(v___y_1158_, 2);
v_optionFlags_1164_ = lean_ctor_get_uint16(v___y_1158_, sizeof(void*)*3);
v_suppressElabErrors_1165_ = lean_ctor_get_uint8(v___y_1158_, sizeof(void*)*3 + 2);
v_checkDeprecated_1166_ = lean_ctor_get_uint8(v___y_1158_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1167_ = lean_ctor_get_uint8(v___y_1158_, sizeof(void*)*3 + 4);
v_ref_1168_ = l_Lean_replaceRef(v_ref_1150_, v_ref_1163_);
lean_inc(v_currRecDepth_1162_);
lean_inc_ref(v_toCold_1161_);
v___x_1169_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1169_, 0, v_toCold_1161_);
lean_ctor_set(v___x_1169_, 1, v_currRecDepth_1162_);
lean_ctor_set(v___x_1169_, 2, v_ref_1168_);
lean_ctor_set_uint16(v___x_1169_, sizeof(void*)*3, v_optionFlags_1164_);
lean_ctor_set_uint8(v___x_1169_, sizeof(void*)*3 + 2, v_suppressElabErrors_1165_);
lean_ctor_set_uint8(v___x_1169_, sizeof(void*)*3 + 3, v_checkDeprecated_1166_);
lean_ctor_set_uint8(v___x_1169_, sizeof(void*)*3 + 4, v_isRecordingDeps_1167_);
v___x_1170_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg(v_msg_1151_, v___y_1156_, v___y_1157_, v___x_1169_, v___y_1159_);
lean_dec_ref_known(v___x_1169_, 3);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg___boxed(lean_object* v_ref_1171_, lean_object* v_msg_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg(v_ref_1171_, v_msg_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v_ref_1171_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__2(lean_object* v_currNamespace_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v_currNamespace_1183_);
lean_ctor_set(v___x_1186_, 1, v___y_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__2___boxed(lean_object* v_currNamespace_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__2(v_currNamespace_1187_, v___y_1188_, v___y_1189_);
lean_dec_ref(v___y_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg(lean_object* v_x_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
lean_object* v___x_1202_; lean_object* v_toCold_1203_; lean_object* v_env_1204_; lean_object* v_currRecDepth_1205_; lean_object* v_ref_1206_; lean_object* v_maxRecDepth_1207_; lean_object* v_currNamespace_1208_; lean_object* v_openDecls_1209_; lean_object* v_quotContext_1210_; lean_object* v_currMacroScope_1211_; lean_object* v___f_1212_; lean_object* v___f_1213_; lean_object* v___x_1214_; lean_object* v___f_1215_; lean_object* v___f_1216_; lean_object* v___f_1217_; lean_object* v_methods_1218_; lean_object* v___x_1219_; lean_object* v_nextMacroScope_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1202_ = lean_st_ref_get(v___y_1200_);
v_toCold_1203_ = lean_ctor_get(v___y_1199_, 0);
v_env_1204_ = lean_ctor_get(v___x_1202_, 0);
lean_inc_ref_n(v_env_1204_, 4);
lean_dec(v___x_1202_);
v_currRecDepth_1205_ = lean_ctor_get(v___y_1199_, 1);
v_ref_1206_ = lean_ctor_get(v___y_1199_, 2);
v_maxRecDepth_1207_ = lean_ctor_get(v_toCold_1203_, 3);
v_currNamespace_1208_ = lean_ctor_get(v_toCold_1203_, 4);
v_openDecls_1209_ = lean_ctor_get(v_toCold_1203_, 5);
v_quotContext_1210_ = lean_ctor_get(v_toCold_1203_, 8);
v_currMacroScope_1211_ = lean_ctor_get(v_toCold_1203_, 9);
v___f_1212_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1212_, 0, v_env_1204_);
v___f_1213_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1213_, 0, v_env_1204_);
v___x_1214_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1199_);
lean_inc_n(v_currNamespace_1208_, 3);
v___f_1215_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1215_, 0, v_currNamespace_1208_);
lean_inc_n(v_openDecls_1209_, 2);
v___f_1216_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__3___boxed), 7, 4);
lean_closure_set(v___f_1216_, 0, v_env_1204_);
lean_closure_set(v___f_1216_, 1, v___x_1214_);
lean_closure_set(v___f_1216_, 2, v_currNamespace_1208_);
lean_closure_set(v___f_1216_, 3, v_openDecls_1209_);
v___f_1217_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_1217_, 0, v_env_1204_);
lean_closure_set(v___f_1217_, 1, v_currNamespace_1208_);
lean_closure_set(v___f_1217_, 2, v_openDecls_1209_);
v_methods_1218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1218_, 0, v___f_1213_);
lean_ctor_set(v_methods_1218_, 1, v___f_1215_);
lean_ctor_set(v_methods_1218_, 2, v___f_1212_);
lean_ctor_set(v_methods_1218_, 3, v___f_1217_);
lean_ctor_set(v_methods_1218_, 4, v___f_1216_);
v___x_1219_ = lean_st_ref_get(v___y_1200_);
v_nextMacroScope_1220_ = lean_ctor_get(v___x_1219_, 1);
lean_inc(v_nextMacroScope_1220_);
lean_dec(v___x_1219_);
lean_inc(v_ref_1206_);
lean_inc(v_maxRecDepth_1207_);
lean_inc(v_currRecDepth_1205_);
lean_inc(v_currMacroScope_1211_);
lean_inc(v_quotContext_1210_);
v___x_1221_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1221_, 0, v_methods_1218_);
lean_ctor_set(v___x_1221_, 1, v_quotContext_1210_);
lean_ctor_set(v___x_1221_, 2, v_currMacroScope_1211_);
lean_ctor_set(v___x_1221_, 3, v_currRecDepth_1205_);
lean_ctor_set(v___x_1221_, 4, v_maxRecDepth_1207_);
lean_ctor_set(v___x_1221_, 5, v_ref_1206_);
v___x_1222_ = lean_box(0);
v___x_1223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1223_, 0, v_nextMacroScope_1220_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
lean_ctor_set(v___x_1223_, 2, v___x_1222_);
v___x_1224_ = lean_apply_2(v_x_1192_, v___x_1221_, v___x_1223_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v_a_1226_; lean_object* v_macroScope_1227_; lean_object* v_traceMsgs_1228_; lean_object* v_expandedMacroDecls_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 1);
lean_inc(v_a_1225_);
v_a_1226_ = lean_ctor_get(v___x_1224_, 0);
lean_inc(v_a_1226_);
lean_dec_ref_known(v___x_1224_, 2);
v_macroScope_1227_ = lean_ctor_get(v_a_1225_, 0);
lean_inc(v_macroScope_1227_);
v_traceMsgs_1228_ = lean_ctor_get(v_a_1225_, 1);
lean_inc(v_traceMsgs_1228_);
v_expandedMacroDecls_1229_ = lean_ctor_get(v_a_1225_, 2);
lean_inc(v_expandedMacroDecls_1229_);
lean_dec(v_a_1225_);
v___x_1230_ = lean_box(0);
v___x_1231_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg(v_expandedMacroDecls_1229_, v___x_1230_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v_expandedMacroDecls_1229_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v___x_1232_; lean_object* v_env_1233_; lean_object* v_ngen_1234_; lean_object* v_auxDeclNGen_1235_; lean_object* v_traceState_1236_; lean_object* v_cache_1237_; lean_object* v_recordedDeps_1238_; lean_object* v_messages_1239_; lean_object* v_infoState_1240_; lean_object* v_snapshotTasks_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1267_; 
lean_dec_ref_known(v___x_1231_, 1);
v___x_1232_ = lean_st_ref_take(v___y_1200_);
v_env_1233_ = lean_ctor_get(v___x_1232_, 0);
v_ngen_1234_ = lean_ctor_get(v___x_1232_, 2);
v_auxDeclNGen_1235_ = lean_ctor_get(v___x_1232_, 3);
v_traceState_1236_ = lean_ctor_get(v___x_1232_, 4);
v_cache_1237_ = lean_ctor_get(v___x_1232_, 5);
v_recordedDeps_1238_ = lean_ctor_get(v___x_1232_, 6);
v_messages_1239_ = lean_ctor_get(v___x_1232_, 7);
v_infoState_1240_ = lean_ctor_get(v___x_1232_, 8);
v_snapshotTasks_1241_ = lean_ctor_get(v___x_1232_, 9);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1267_ == 0)
{
lean_object* v_unused_1268_; 
v_unused_1268_ = lean_ctor_get(v___x_1232_, 1);
lean_dec(v_unused_1268_);
v___x_1243_ = v___x_1232_;
v_isShared_1244_ = v_isSharedCheck_1267_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_snapshotTasks_1241_);
lean_inc(v_infoState_1240_);
lean_inc(v_messages_1239_);
lean_inc(v_recordedDeps_1238_);
lean_inc(v_cache_1237_);
lean_inc(v_traceState_1236_);
lean_inc(v_auxDeclNGen_1235_);
lean_inc(v_ngen_1234_);
lean_inc(v_env_1233_);
lean_dec(v___x_1232_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1267_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 1, v_macroScope_1227_);
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_env_1233_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_macroScope_1227_);
lean_ctor_set(v_reuseFailAlloc_1266_, 2, v_ngen_1234_);
lean_ctor_set(v_reuseFailAlloc_1266_, 3, v_auxDeclNGen_1235_);
lean_ctor_set(v_reuseFailAlloc_1266_, 4, v_traceState_1236_);
lean_ctor_set(v_reuseFailAlloc_1266_, 5, v_cache_1237_);
lean_ctor_set(v_reuseFailAlloc_1266_, 6, v_recordedDeps_1238_);
lean_ctor_set(v_reuseFailAlloc_1266_, 7, v_messages_1239_);
lean_ctor_set(v_reuseFailAlloc_1266_, 8, v_infoState_1240_);
lean_ctor_set(v_reuseFailAlloc_1266_, 9, v_snapshotTasks_1241_);
v___x_1246_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = lean_st_ref_put(v___y_1200_, v___x_1246_);
v___x_1248_ = l_List_reverse___redArg(v_traceMsgs_1228_);
v___x_1249_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__4(v___x_1248_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1256_ == 0)
{
lean_object* v_unused_1257_; 
v_unused_1257_ = lean_ctor_get(v___x_1249_, 0);
lean_dec(v_unused_1257_);
v___x_1251_ = v___x_1249_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_dec(v___x_1249_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v_a_1226_);
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1226_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_a_1226_);
v_a_1258_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1249_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1249_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec(v_traceMsgs_1228_);
lean_dec(v_macroScope_1227_);
lean_dec(v_a_1226_);
v_a_1269_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1231_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1231_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
else
{
lean_object* v_a_1277_; 
v_a_1277_ = lean_ctor_get(v___x_1224_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1224_, 2);
if (lean_obj_tag(v_a_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v_a_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
v_a_1278_ = lean_ctor_get(v_a_1277_, 0);
lean_inc(v_a_1278_);
v_a_1279_ = lean_ctor_get(v_a_1277_, 1);
lean_inc_ref(v_a_1279_);
lean_dec_ref_known(v_a_1277_, 2);
v___x_1280_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___closed__0));
v___x_1281_ = lean_string_dec_eq(v_a_1279_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1282_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1282_, 0, v_a_1279_);
v___x_1283_ = l_Lean_MessageData_ofFormat(v___x_1282_);
v___x_1284_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg(v_a_1278_, v___x_1283_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v_a_1278_);
return v___x_1284_;
}
else
{
lean_object* v___x_1285_; 
lean_dec_ref(v_a_1279_);
v___x_1285_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg(v_a_1278_);
return v___x_1285_;
}
}
else
{
lean_object* v___x_1286_; 
v___x_1286_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg();
return v___x_1286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg___boxed(lean_object* v_x_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg(v_x_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___lam__0(lean_object* v_stx_1298_, lean_object* v_output_1299_, lean_object* v_trees_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v_lctx_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_lctx_1310_ = lean_ctor_get(v___y_1305_, 2);
lean_inc_ref(v_lctx_1310_);
v___x_1311_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1311_, 0, v_lctx_1310_);
lean_ctor_set(v___x_1311_, 1, v_stx_1298_);
lean_ctor_set(v___x_1311_, 2, v_output_1299_);
v___x_1312_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
v___x_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v_trees_1300_);
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___lam__0___boxed(lean_object* v_stx_1315_, lean_object* v_output_1316_, lean_object* v_trees_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___lam__0(v_stx_1315_, v_output_1316_, v_trees_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0(lean_object* v___y_1328_, lean_object* v_mkInfoTree_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v_a_1337_, lean_object* v_a_x3f_1338_){
_start:
{
lean_object* v___x_1340_; lean_object* v_infoState_1341_; lean_object* v_trees_1342_; lean_object* v___x_1343_; 
v___x_1340_ = lean_st_ref_get(v___y_1328_);
v_infoState_1341_ = lean_ctor_get(v___x_1340_, 8);
lean_inc_ref(v_infoState_1341_);
lean_dec(v___x_1340_);
v_trees_1342_ = lean_ctor_get(v_infoState_1341_, 2);
lean_inc_ref(v_trees_1342_);
lean_dec_ref(v_infoState_1341_);
lean_inc(v___y_1328_);
lean_inc_ref(v___y_1336_);
lean_inc(v___y_1335_);
lean_inc_ref(v___y_1334_);
lean_inc(v___y_1333_);
lean_inc_ref(v___y_1332_);
lean_inc(v___y_1331_);
lean_inc_ref(v___y_1330_);
v___x_1343_ = lean_apply_10(v_mkInfoTree_1329_, v_trees_1342_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1328_, lean_box(0));
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1383_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1346_ = v___x_1343_;
v_isShared_1347_ = v_isSharedCheck_1383_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1343_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1383_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; lean_object* v_infoState_1349_; lean_object* v_env_1350_; lean_object* v_nextMacroScope_1351_; lean_object* v_ngen_1352_; lean_object* v_auxDeclNGen_1353_; lean_object* v_traceState_1354_; lean_object* v_cache_1355_; lean_object* v_recordedDeps_1356_; lean_object* v_messages_1357_; lean_object* v_snapshotTasks_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1382_; 
v___x_1348_ = lean_st_ref_take(v___y_1328_);
v_infoState_1349_ = lean_ctor_get(v___x_1348_, 8);
v_env_1350_ = lean_ctor_get(v___x_1348_, 0);
v_nextMacroScope_1351_ = lean_ctor_get(v___x_1348_, 1);
v_ngen_1352_ = lean_ctor_get(v___x_1348_, 2);
v_auxDeclNGen_1353_ = lean_ctor_get(v___x_1348_, 3);
v_traceState_1354_ = lean_ctor_get(v___x_1348_, 4);
v_cache_1355_ = lean_ctor_get(v___x_1348_, 5);
v_recordedDeps_1356_ = lean_ctor_get(v___x_1348_, 6);
v_messages_1357_ = lean_ctor_get(v___x_1348_, 7);
v_snapshotTasks_1358_ = lean_ctor_get(v___x_1348_, 9);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1360_ = v___x_1348_;
v_isShared_1361_ = v_isSharedCheck_1382_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_snapshotTasks_1358_);
lean_inc(v_infoState_1349_);
lean_inc(v_messages_1357_);
lean_inc(v_recordedDeps_1356_);
lean_inc(v_cache_1355_);
lean_inc(v_traceState_1354_);
lean_inc(v_auxDeclNGen_1353_);
lean_inc(v_ngen_1352_);
lean_inc(v_nextMacroScope_1351_);
lean_inc(v_env_1350_);
lean_dec(v___x_1348_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1382_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
uint8_t v_enabled_1362_; lean_object* v_assignment_1363_; lean_object* v_lazyAssignment_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1380_; 
v_enabled_1362_ = lean_ctor_get_uint8(v_infoState_1349_, sizeof(void*)*3);
v_assignment_1363_ = lean_ctor_get(v_infoState_1349_, 0);
v_lazyAssignment_1364_ = lean_ctor_get(v_infoState_1349_, 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_infoState_1349_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; 
v_unused_1381_ = lean_ctor_get(v_infoState_1349_, 2);
lean_dec(v_unused_1381_);
v___x_1366_ = v_infoState_1349_;
v_isShared_1367_ = v_isSharedCheck_1380_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_lazyAssignment_1364_);
lean_inc(v_assignment_1363_);
lean_dec(v_infoState_1349_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1380_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1368_ = lean_box(0);
v___x_1369_ = l_Lean_PersistentArray_push___redArg(v_a_1337_, v_a_1344_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 2, v___x_1369_);
v___x_1371_ = v___x_1366_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_assignment_1363_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_lazyAssignment_1364_);
lean_ctor_set(v_reuseFailAlloc_1379_, 2, v___x_1369_);
lean_ctor_set_uint8(v_reuseFailAlloc_1379_, sizeof(void*)*3, v_enabled_1362_);
v___x_1371_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
lean_object* v___x_1373_; 
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 8, v___x_1371_);
v___x_1373_ = v___x_1360_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_env_1350_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_nextMacroScope_1351_);
lean_ctor_set(v_reuseFailAlloc_1378_, 2, v_ngen_1352_);
lean_ctor_set(v_reuseFailAlloc_1378_, 3, v_auxDeclNGen_1353_);
lean_ctor_set(v_reuseFailAlloc_1378_, 4, v_traceState_1354_);
lean_ctor_set(v_reuseFailAlloc_1378_, 5, v_cache_1355_);
lean_ctor_set(v_reuseFailAlloc_1378_, 6, v_recordedDeps_1356_);
lean_ctor_set(v_reuseFailAlloc_1378_, 7, v_messages_1357_);
lean_ctor_set(v_reuseFailAlloc_1378_, 8, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1378_, 9, v_snapshotTasks_1358_);
v___x_1373_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1374_ = lean_st_ref_put(v___y_1328_, v___x_1373_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 0, v___x_1368_);
v___x_1376_ = v___x_1346_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1368_);
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
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_dec_ref(v_a_1337_);
v_a_1384_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1343_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1343_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0___boxed(lean_object* v___y_1392_, lean_object* v_mkInfoTree_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v_a_1401_, lean_object* v_a_x3f_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0(v___y_1392_, v_mkInfoTree_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v_a_1401_, v_a_x3f_1402_);
lean_dec(v_a_x3f_1402_);
lean_dec_ref(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1392_);
return v_res_1404_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = lean_unsigned_to_nat(32u);
v___x_1406_ = lean_mk_empty_array_with_capacity(v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__1(void){
_start:
{
size_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1408_ = ((size_t)5ULL);
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = lean_unsigned_to_nat(32u);
v___x_1411_ = lean_mk_empty_array_with_capacity(v___x_1410_);
v___x_1412_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__0);
v___x_1413_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v___x_1411_);
lean_ctor_set(v___x_1413_, 2, v___x_1409_);
lean_ctor_set(v___x_1413_, 3, v___x_1409_);
lean_ctor_set_usize(v___x_1413_, 4, v___x_1408_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg(lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; lean_object* v_infoState_1417_; lean_object* v_trees_1418_; lean_object* v___x_1419_; lean_object* v_infoState_1420_; lean_object* v_env_1421_; lean_object* v_nextMacroScope_1422_; lean_object* v_ngen_1423_; lean_object* v_auxDeclNGen_1424_; lean_object* v_traceState_1425_; lean_object* v_cache_1426_; lean_object* v_recordedDeps_1427_; lean_object* v_messages_1428_; lean_object* v_snapshotTasks_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1450_; 
v___x_1416_ = lean_st_ref_get(v___y_1414_);
v_infoState_1417_ = lean_ctor_get(v___x_1416_, 8);
lean_inc_ref(v_infoState_1417_);
lean_dec(v___x_1416_);
v_trees_1418_ = lean_ctor_get(v_infoState_1417_, 2);
lean_inc_ref(v_trees_1418_);
lean_dec_ref(v_infoState_1417_);
v___x_1419_ = lean_st_ref_take(v___y_1414_);
v_infoState_1420_ = lean_ctor_get(v___x_1419_, 8);
v_env_1421_ = lean_ctor_get(v___x_1419_, 0);
v_nextMacroScope_1422_ = lean_ctor_get(v___x_1419_, 1);
v_ngen_1423_ = lean_ctor_get(v___x_1419_, 2);
v_auxDeclNGen_1424_ = lean_ctor_get(v___x_1419_, 3);
v_traceState_1425_ = lean_ctor_get(v___x_1419_, 4);
v_cache_1426_ = lean_ctor_get(v___x_1419_, 5);
v_recordedDeps_1427_ = lean_ctor_get(v___x_1419_, 6);
v_messages_1428_ = lean_ctor_get(v___x_1419_, 7);
v_snapshotTasks_1429_ = lean_ctor_get(v___x_1419_, 9);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1431_ = v___x_1419_;
v_isShared_1432_ = v_isSharedCheck_1450_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_snapshotTasks_1429_);
lean_inc(v_infoState_1420_);
lean_inc(v_messages_1428_);
lean_inc(v_recordedDeps_1427_);
lean_inc(v_cache_1426_);
lean_inc(v_traceState_1425_);
lean_inc(v_auxDeclNGen_1424_);
lean_inc(v_ngen_1423_);
lean_inc(v_nextMacroScope_1422_);
lean_inc(v_env_1421_);
lean_dec(v___x_1419_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1450_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v_enabled_1433_; lean_object* v_assignment_1434_; lean_object* v_lazyAssignment_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1448_; 
v_enabled_1433_ = lean_ctor_get_uint8(v_infoState_1420_, sizeof(void*)*3);
v_assignment_1434_ = lean_ctor_get(v_infoState_1420_, 0);
v_lazyAssignment_1435_ = lean_ctor_get(v_infoState_1420_, 1);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_infoState_1420_);
if (v_isSharedCheck_1448_ == 0)
{
lean_object* v_unused_1449_; 
v_unused_1449_ = lean_ctor_get(v_infoState_1420_, 2);
lean_dec(v_unused_1449_);
v___x_1437_ = v_infoState_1420_;
v_isShared_1438_ = v_isSharedCheck_1448_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_lazyAssignment_1435_);
lean_inc(v_assignment_1434_);
lean_dec(v_infoState_1420_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1448_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___closed__1);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 2, v___x_1439_);
v___x_1441_ = v___x_1437_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_assignment_1434_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_lazyAssignment_1435_);
lean_ctor_set(v_reuseFailAlloc_1447_, 2, v___x_1439_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, sizeof(void*)*3, v_enabled_1433_);
v___x_1441_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1443_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 8, v___x_1441_);
v___x_1443_ = v___x_1431_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_env_1421_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v_nextMacroScope_1422_);
lean_ctor_set(v_reuseFailAlloc_1446_, 2, v_ngen_1423_);
lean_ctor_set(v_reuseFailAlloc_1446_, 3, v_auxDeclNGen_1424_);
lean_ctor_set(v_reuseFailAlloc_1446_, 4, v_traceState_1425_);
lean_ctor_set(v_reuseFailAlloc_1446_, 5, v_cache_1426_);
lean_ctor_set(v_reuseFailAlloc_1446_, 6, v_recordedDeps_1427_);
lean_ctor_set(v_reuseFailAlloc_1446_, 7, v_messages_1428_);
lean_ctor_set(v_reuseFailAlloc_1446_, 8, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1446_, 9, v_snapshotTasks_1429_);
v___x_1443_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = lean_st_ref_put(v___y_1414_, v___x_1443_);
v___x_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_trees_1418_);
return v___x_1445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg___boxed(lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg(v___y_1451_);
lean_dec(v___y_1451_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg(lean_object* v_x_1454_, lean_object* v_mkInfoTree_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v___x_1465_; lean_object* v_infoState_1466_; uint8_t v_enabled_1467_; 
v___x_1465_ = lean_st_ref_get(v___y_1463_);
v_infoState_1466_ = lean_ctor_get(v___x_1465_, 8);
lean_inc_ref(v_infoState_1466_);
lean_dec(v___x_1465_);
v_enabled_1467_ = lean_ctor_get_uint8(v_infoState_1466_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1466_);
if (v_enabled_1467_ == 0)
{
lean_object* v___x_1468_; 
lean_dec_ref(v_mkInfoTree_1455_);
lean_inc(v___y_1463_);
lean_inc_ref(v___y_1462_);
lean_inc(v___y_1461_);
lean_inc_ref(v___y_1460_);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
v___x_1468_ = lean_apply_9(v_x_1454_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, lean_box(0));
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; lean_object* v_a_1470_; lean_object* v_r_1471_; 
v___x_1469_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg(v___y_1463_);
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
lean_dec_ref(v___x_1469_);
lean_inc(v___y_1463_);
lean_inc_ref(v___y_1462_);
lean_inc(v___y_1461_);
lean_inc_ref(v___y_1460_);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
v_r_1471_ = lean_apply_9(v_x_1454_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, lean_box(0));
if (lean_obj_tag(v_r_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1496_; 
v_a_1472_ = lean_ctor_get(v_r_1471_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_r_1471_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1474_ = v_r_1471_;
v_isShared_1475_ = v_isSharedCheck_1496_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v_r_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1496_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
lean_inc(v_a_1472_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set_tag(v___x_1474_, 1);
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0(v___y_1463_, v_mkInfoTree_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v_a_1470_, v___x_1477_);
lean_dec_ref(v___x_1477_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; 
v_unused_1486_ = lean_ctor_get(v___x_1478_, 0);
lean_dec(v_unused_1486_);
v___x_1480_ = v___x_1478_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_dec(v___x_1478_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 0, v_a_1472_);
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1472_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec(v_a_1472_);
v_a_1487_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1478_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1478_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v_a_1497_ = lean_ctor_get(v_r_1471_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v_r_1471_, 1);
v___x_1498_ = lean_box(0);
v___x_1499_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___lam__0(v___y_1463_, v_mkInfoTree_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v_a_1470_, v___x_1498_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; 
v_unused_1507_ = lean_ctor_get(v___x_1499_, 0);
lean_dec(v_unused_1507_);
v___x_1501_ = v___x_1499_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_dec(v___x_1499_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set_tag(v___x_1501_, 1);
lean_ctor_set(v___x_1501_, 0, v_a_1497_);
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1497_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec(v_a_1497_);
v_a_1508_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1499_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1499_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg___boxed(lean_object* v_x_1516_, lean_object* v_mkInfoTree_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg(v_x_1516_, v_mkInfoTree_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg(lean_object* v_stx_1528_, lean_object* v_output_1529_, lean_object* v_x_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___f_1540_; lean_object* v___x_1541_; 
v___f_1540_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1540_, 0, v_stx_1528_);
lean_closure_set(v___f_1540_, 1, v_output_1529_);
v___x_1541_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg(v_x_1530_, v___f_1540_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg___boxed(lean_object* v_stx_1542_, lean_object* v_output_1543_, lean_object* v_x_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg(v_stx_1542_, v_output_1543_, v_x_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch(lean_object* v_stx_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Lean_Elab_Tactic_getMainTag___redArg(v_a_1570_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
lean_inc(v_stx_1568_);
v___x_1580_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm___boxed), 4, 2);
lean_closure_set(v___x_1580_, 0, v_a_1579_);
lean_closure_set(v___x_1580_, 1, v_stx_1568_);
v___x_1581_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg(v___x_1580_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v_fst_1583_; lean_object* v_snd_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1610_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v_fst_1583_ = lean_ctor_get(v_a_1582_, 0);
v_snd_1584_ = lean_ctor_get(v_a_1582_, 1);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_a_1582_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1586_ = v_a_1582_;
v_isShared_1587_ = v_isSharedCheck_1610_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_snd_1584_);
lean_inc(v_fst_1583_);
lean_dec(v_a_1582_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1610_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v_ref_1588_; uint8_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v_ref_1588_ = lean_ctor_get(v_a_1575_, 2);
v___x_1589_ = 0;
v___x_1590_ = l_Lean_SourceInfo_fromRef(v_ref_1588_, v___x_1589_);
v___x_1591_ = ((lean_object*)(l_Lean_Elab_Tactic_evalMatch___closed__0));
v___x_1592_ = ((lean_object*)(l_Lean_Elab_Tactic_evalMatch___closed__1));
lean_inc(v___x_1590_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set_tag(v___x_1586_, 2);
lean_ctor_set(v___x_1586_, 1, v___x_1591_);
lean_ctor_set(v___x_1586_, 0, v___x_1590_);
v___x_1594_ = v___x_1586_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v___x_1590_);
lean_ctor_set(v_reuseFailAlloc_1609_, 1, v___x_1591_);
v___x_1594_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___f_1607_; lean_object* v___x_1608_; 
v___x_1595_ = ((lean_object*)(l_Lean_Elab_Tactic_evalMatch___closed__3));
v___x_1596_ = ((lean_object*)(l_Lean_Elab_Tactic_evalMatch___closed__4));
lean_inc_n(v___x_1590_, 2);
v___x_1597_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1590_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = l_Lean_Syntax_node2(v___x_1590_, v___x_1595_, v___x_1597_, v_fst_1583_);
v___x_1599_ = l_Lean_Syntax_node2(v___x_1590_, v___x_1592_, v___x_1594_, v___x_1598_);
v___x_1600_ = lean_unsigned_to_nat(1u);
v___x_1601_ = lean_mk_empty_array_with_capacity(v___x_1600_);
v___x_1602_ = lean_array_push(v___x_1601_, v___x_1599_);
v___x_1603_ = l_Array_append___redArg(v___x_1602_, v_snd_1584_);
lean_dec(v_snd_1584_);
v___x_1604_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_spec__0___closed__4));
v___x_1605_ = lean_box(2);
v___x_1606_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
lean_ctor_set(v___x_1606_, 1, v___x_1604_);
lean_ctor_set(v___x_1606_, 2, v___x_1603_);
lean_inc_ref(v___x_1606_);
lean_inc(v_stx_1568_);
v___f_1607_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalMatch___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1607_, 0, v_stx_1568_);
lean_closure_set(v___f_1607_, 1, v___x_1606_);
v___x_1608_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg(v_stx_1568_, v___x_1606_, v___f_1607_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
return v___x_1608_;
}
}
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec(v_stx_1568_);
v_a_1611_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1581_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1581_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_dec(v_stx_1568_);
v_a_1619_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1578_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1578_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalMatch___boxed(lean_object* v_stx_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lean_Elab_Tactic_evalMatch(v_stx_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
lean_dec(v_a_1633_);
lean_dec_ref(v_a_1632_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1(lean_object* v_00_u03b1_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___redArg(v_x_1639_, v___y_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1643_, lean_object* v_x_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__1(v_00_u03b1_1643_, v_x_1644_, v___y_1645_, v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec_ref(v_x_1644_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6(lean_object* v_00_u03b1_1648_, lean_object* v_ref_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___redArg(v_ref_1649_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6___boxed(lean_object* v_00_u03b1_1660_, lean_object* v_ref_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__6(v_00_u03b1_1660_, v_ref_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7(lean_object* v_00_u03b1_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___redArg();
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7___boxed(lean_object* v_00_u03b1_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__7(v_00_u03b1_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0(lean_object* v_00_u03b1_1694_, lean_object* v_x_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___redArg(v_x_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0___boxed(lean_object* v_00_u03b1_1706_, lean_object* v_x_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0(v_00_u03b1_1706_, v_x_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1(lean_object* v_00_u03b1_1718_, lean_object* v_stx_1719_, lean_object* v_output_1720_, lean_object* v_x_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___redArg(v_stx_1719_, v_output_1720_, v_x_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1___boxed(lean_object* v_00_u03b1_1732_, lean_object* v_stx_1733_, lean_object* v_output_1734_, lean_object* v_x_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1(v_00_u03b1_1732_, v_stx_1733_, v_output_1734_, v_x_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0(lean_object* v_cls_1746_, lean_object* v_msg_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___redArg(v_cls_1746_, v_msg_1747_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0___boxed(lean_object* v_cls_1758_, lean_object* v_msg_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__0(v_cls_1758_, v_msg_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3(lean_object* v_as_1770_, lean_object* v_as_x27_1771_, lean_object* v_b_1772_, lean_object* v_a_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___redArg(v_as_x27_1771_, v_b_1772_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3___boxed(lean_object* v_as_1784_, lean_object* v_as_x27_1785_, lean_object* v_b_1786_, lean_object* v_a_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__3(v_as_1784_, v_as_x27_1785_, v_b_1786_, v_a_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v_as_x27_1785_);
lean_dec(v_as_1784_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5(lean_object* v_00_u03b1_1798_, lean_object* v_ref_1799_, lean_object* v_msg_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___redArg(v_ref_1799_, v_msg_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1811_, lean_object* v_ref_1812_, lean_object* v_msg_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5(v_00_u03b1_1811_, v_ref_1812_, v_msg_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v_ref_1812_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15(lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v___x_1833_; 
v___x_1833_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___redArg(v___y_1831_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15___boxed(lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9_spec__15(v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9(lean_object* v_00_u03b1_1844_, lean_object* v_x_1845_, lean_object* v_mkInfoTree_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___redArg(v_x_1845_, v_mkInfoTree_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9___boxed(lean_object* v_00_u03b1_1857_, lean_object* v_x_1858_, lean_object* v_mkInfoTree_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Tactic_evalMatch_spec__1_spec__9(v_00_u03b1_1857_, v_x_1858_, v_mkInfoTree_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1870_, lean_object* v_m_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___redArg(v_m_1871_, v_a_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1874_, lean_object* v_m_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6(v_00_u03b2_1874_, v_m_1875_, v_a_1876_);
lean_dec(v_a_1876_);
lean_dec_ref(v_m_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10(lean_object* v_00_u03b1_1878_, lean_object* v_msg_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___redArg(v_msg_1879_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10___boxed(lean_object* v_00_u03b1_1890_, lean_object* v_msg_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__5_spec__10(v_00_u03b1_1890_, v_msg_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_1902_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8___redArg(){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v___dummy_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8___redArg();
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1908_){
_start:
{
lean_object* v___x_1909_; 
v___x_1909_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4___closed__2);
return v___x_1909_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9(lean_object* v_00_u03b2_1910_, lean_object* v_x_1911_, lean_object* v_x_1912_){
_start:
{
uint8_t v___x_1913_; 
v___x_1913_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___redArg(v_x_1911_, v_x_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9___boxed(lean_object* v_00_u03b2_1914_, lean_object* v_x_1915_, lean_object* v_x_1916_){
_start:
{
uint8_t v_res_1917_; lean_object* v_r_1918_; 
v_res_1917_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9(v_00_u03b2_1914_, v_x_1915_, v_x_1916_);
lean_dec_ref(v_x_1916_);
lean_dec_ref(v_x_1915_);
v_r_1918_ = lean_box(v_res_1917_);
return v_r_1918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12(lean_object* v_00_u03b2_1919_, lean_object* v_a_1920_, lean_object* v_x_1921_){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___redArg(v_a_1920_, v_x_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12___boxed(lean_object* v_00_u03b2_1923_, lean_object* v_a_1924_, lean_object* v_x_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__6_spec__12(v_00_u03b2_1923_, v_a_1924_, v_x_1925_);
lean_dec(v_x_1925_);
lean_dec(v_a_1924_);
return v_res_1926_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16(lean_object* v_00_u03b2_1927_, lean_object* v_x_1928_, size_t v_x_1929_, lean_object* v_x_1930_){
_start:
{
uint8_t v___x_1931_; 
v___x_1931_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___redArg(v_x_1928_, v_x_1929_, v_x_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16___boxed(lean_object* v_00_u03b2_1932_, lean_object* v_x_1933_, lean_object* v_x_1934_, lean_object* v_x_1935_){
_start:
{
size_t v_x_26744__boxed_1936_; uint8_t v_res_1937_; lean_object* v_r_1938_; 
v_x_26744__boxed_1936_ = lean_unbox_usize(v_x_1934_);
lean_dec(v_x_1934_);
v_res_1937_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16(v_00_u03b2_1932_, v_x_1933_, v_x_26744__boxed_1936_, v_x_1935_);
lean_dec_ref(v_x_1935_);
lean_dec_ref(v_x_1933_);
v_r_1938_ = lean_box(v_res_1937_);
return v_r_1938_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20(lean_object* v_00_u03b2_1939_, lean_object* v_keys_1940_, lean_object* v_vals_1941_, lean_object* v_heq_1942_, lean_object* v_i_1943_, lean_object* v_k_1944_){
_start:
{
uint8_t v___x_1945_; 
v___x_1945_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___redArg(v_keys_1940_, v_i_1943_, v_k_1944_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b2_1946_, lean_object* v_keys_1947_, lean_object* v_vals_1948_, lean_object* v_heq_1949_, lean_object* v_i_1950_, lean_object* v_k_1951_){
_start:
{
uint8_t v_res_1952_; lean_object* v_r_1953_; 
v_res_1952_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Tactic_evalMatch_spec__0_spec__2_spec__4_spec__9_spec__16_spec__20(v_00_u03b2_1946_, v_keys_1947_, v_vals_1948_, v_heq_1949_, v_i_1950_, v_k_1951_);
lean_dec_ref(v_k_1951_);
lean_dec_ref(v_vals_1948_);
lean_dec_ref(v_keys_1947_);
v_r_1953_ = lean_box(v_res_1952_);
return v_r_1953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1(){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1967_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1968_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__0));
v___x_1969_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3));
v___x_1970_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalMatch___boxed), 10, 0);
v___x_1971_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1967_, v___x_1968_, v___x_1969_, v___x_1970_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___boxed(lean_object* v_a_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1();
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3(){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2000_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1___closed__3));
v___x_2001_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___closed__6));
v___x_2002_ = l_Lean_addBuiltinDeclarationRanges(v___x_2000_, v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3___boxed(lean_object* v_a_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3();
return v_res_2004_;
}
}
lean_object* runtime_initialize_Lean_Elab_Match(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Induction(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Match(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_evalMatch___regBuiltin_Lean_Elab_Tactic_evalMatch_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Match(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Match(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Induction(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Match(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Match(builtin);
}
#ifdef __cplusplus
}
#endif
