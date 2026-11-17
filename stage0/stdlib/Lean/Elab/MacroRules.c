// Lean compiler output
// Module: Lean.Elab.MacroRules
// Imports: public import Lean.Elab.Syntax public import Lean.Elab.AuxDef
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkRuleAltKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_Command_visibility_ofAttrKind(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Command_resolveSyntaxKind(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Command_adaptRulesExpander(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_mkMacroRulesFun_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_mkMacroRulesFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__3_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__4 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__5_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__6 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__7 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__8 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Command_mkMacroRulesFun___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__9;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__10 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__10_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__11 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__12 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__13 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__13_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__14 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__15 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__15_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__16 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__16_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noErrorIfUnused"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__17 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__17_value),LEAN_SCALAR_PTR_LITERAL(161, 26, 252, 46, 47, 233, 154, 57)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__18 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__18_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "no_error_if_unused%"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__19 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__19_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__20 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__20_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__21 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__21_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "throw"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__22 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Command_mkMacroRulesFun___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__23;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__22_value),LEAN_SCALAR_PTR_LITERAL(60, 81, 80, 209, 187, 239, 255, 113)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__24 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__24_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadExcept"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__25 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__25_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__26_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__22_value),LEAN_SCALAR_PTR_LITERAL(121, 11, 61, 69, 62, 207, 229, 53)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__26 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__27 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__28 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__28_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Macro.Exception.unsupportedSyntax"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__29 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__29_value;
static lean_once_cell_t l_Lean_Elab_Command_mkMacroRulesFun___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__30;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__31 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__31_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Exception"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__32 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__32_value;
static const lean_string_object l_Lean_Elab_Command_mkMacroRulesFun___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unsupportedSyntax"};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__33 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__33_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__31_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__32_value),LEAN_SCALAR_PTR_LITERAL(215, 141, 7, 16, 63, 180, 3, 59)}};
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__33_value),LEAN_SCALAR_PTR_LITERAL(110, 23, 159, 194, 88, 95, 49, 128)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__34 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__35 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__35_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__34_value)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__36 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__37 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__37_value;
static const lean_ctor_object l_Lean_Elab_Command_mkMacroRulesFun___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__35_value),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__37_value)}};
static const lean_object* l_Lean_Elab_Command_mkMacroRulesFun___closed__38 = (const lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__38_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkMacroRulesFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkMacroRulesFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "macro_rules"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "macroRules"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Command_elabMacroRulesAux___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__5;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__4_value),LEAN_SCALAR_PTR_LITERAL(6, 217, 176, 227, 245, 86, 100, 50)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Command_elabMacroRulesAux___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__8;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__31_value),LEAN_SCALAR_PTR_LITERAL(153, 13, 84, 30, 172, 208, 133, 203)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__13_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__14_value;
static const lean_array_object l_Lean_Elab_Command_elabMacroRulesAux___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__15_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__16 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__16_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__17 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__17_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__18 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__19 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__18_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__19_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__20 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRulesAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Command_elabMacroRulesAux___closed__21 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__31_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__1_value),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__3_value)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 80, 75, 5, 165, 87, 197, 1)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(136, 104, 45, 91, 146, 14, 86, 4)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Command_elabMacroRules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_elabMacroRules___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_elabMacroRules___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabMacroRules___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabMacroRules"};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkMacroRulesFun___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabMacroRulesAux___closed__12_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 95, 207, 180, 64, 53, 80, 160)}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__0_value),((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__1_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__3_value),((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(lean_object* v___y_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_env_4_; lean_object* v___x_5_; lean_object* v_mainModule_6_; lean_object* v___x_7_; 
v___x_3_ = lean_st_ref_get(v___y_1_);
v_env_4_ = lean_ctor_get(v___x_3_, 0);
lean_inc_ref(v_env_4_);
lean_dec(v___x_3_);
v___x_5_ = l_Lean_Environment_header(v_env_4_);
lean_dec_ref(v_env_4_);
v_mainModule_6_ = lean_ctor_get(v___x_5_, 0);
lean_inc(v_mainModule_6_);
lean_dec_ref(v___x_5_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v_mainModule_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg___boxed(lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v___y_8_);
lean_dec(v___y_8_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1(lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v___y_12_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___boxed(lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1(v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_mkMacroRulesFun_spec__0(lean_object* v_cmdName_19_, lean_object* v_k_20_, size_t v_sz_21_, size_t v_i_22_, lean_object* v_bs_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = lean_usize_dec_lt(v_i_22_, v_sz_21_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; 
lean_dec(v_k_20_);
lean_dec_ref(v_cmdName_19_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v_bs_23_);
return v___x_28_;
}
else
{
lean_object* v_v_29_; lean_object* v___x_30_; lean_object* v_bs_x27_31_; lean_object* v___x_32_; 
v_v_29_ = lean_array_uget(v_bs_23_, v_i_22_);
v___x_30_ = lean_unsigned_to_nat(0u);
v_bs_x27_31_ = lean_array_uset(v_bs_23_, v_i_22_, v___x_30_);
lean_inc(v_k_20_);
lean_inc_ref(v_cmdName_19_);
v___x_32_ = l_Lean_Elab_Command_checkRuleAltKind(v_cmdName_19_, v_k_20_, v_v_29_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; size_t v___x_34_; size_t v___x_35_; lean_object* v___x_36_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_a_33_);
lean_dec_ref_known(v___x_32_, 1);
v___x_34_ = ((size_t)1ULL);
v___x_35_ = lean_usize_add(v_i_22_, v___x_34_);
v___x_36_ = lean_array_uset(v_bs_x27_31_, v_i_22_, v_a_33_);
v_i_22_ = v___x_35_;
v_bs_23_ = v___x_36_;
goto _start;
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_dec_ref(v_bs_x27_31_);
lean_dec(v_k_20_);
lean_dec_ref(v_cmdName_19_);
v_a_38_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_32_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_32_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_mkMacroRulesFun_spec__0___boxed(lean_object* v_cmdName_46_, lean_object* v_k_47_, lean_object* v_sz_48_, lean_object* v_i_49_, lean_object* v_bs_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
size_t v_sz_boxed_54_; size_t v_i_boxed_55_; lean_object* v_res_56_; 
v_sz_boxed_54_ = lean_unbox_usize(v_sz_48_);
lean_dec(v_sz_48_);
v_i_boxed_55_ = lean_unbox_usize(v_i_49_);
lean_dec(v_i_49_);
v_res_56_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_mkMacroRulesFun_spec__0(v_cmdName_46_, v_k_47_, v_sz_boxed_54_, v_i_boxed_55_, v_bs_50_, v___y_51_, v___y_52_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_56_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__9(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Array_mkArray0___redArg();
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__23(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__22));
v___x_106_ = l_String_toRawSubstring_x27(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__30(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__29));
v___x_121_ = l_String_toRawSubstring_x27(v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkMacroRulesFun(lean_object* v_cmdName_141_, lean_object* v_k_142_, lean_object* v_alts_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
size_t v_sz_147_; size_t v___x_148_; lean_object* v___x_149_; 
v_sz_147_ = lean_array_size(v_alts_143_);
v___x_148_ = ((size_t)0ULL);
v___x_149_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_mkMacroRulesFun_spec__0(v_cmdName_141_, v_k_142_, v_sz_147_, v___x_148_, v_alts_143_, v_a_144_, v_a_145_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_151_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = l_Lean_Elab_Command_getRef___redArg(v_a_144_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; uint8_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v___x_153_ = 0;
v___x_154_ = l_Lean_SourceInfo_fromRef(v_a_152_, v___x_153_);
lean_dec(v_a_152_);
v___x_155_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_144_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_209_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_209_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_209_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_209_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_a_161_; lean_object* v_quotContext_x3f_205_; 
v_quotContext_x3f_205_ = lean_ctor_get(v_a_144_, 5);
if (lean_obj_tag(v_quotContext_x3f_205_) == 0)
{
lean_object* v___x_206_; lean_object* v_a_207_; 
v___x_206_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v_a_145_);
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref(v___x_206_);
v_a_161_ = v_a_207_;
goto v___jp_160_;
}
else
{
lean_object* v_val_208_; 
v_val_208_ = lean_ctor_get(v_quotContext_x3f_205_, 0);
lean_inc(v_val_208_);
v_a_161_ = v_val_208_;
goto v___jp_160_;
}
v___jp_160_:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_162_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__3));
v___x_163_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__4));
lean_inc_n(v___x_154_, 16);
v___x_164_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_154_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
v___x_165_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__6));
v___x_166_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_167_ = lean_obj_once(&l_Lean_Elab_Command_mkMacroRulesFun___closed__9, &l_Lean_Elab_Command_mkMacroRulesFun___closed__9_once, _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__9);
v___x_168_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__11));
v___x_169_ = l_Array_append___redArg(v___x_167_, v_a_150_);
lean_dec(v_a_150_);
v___x_170_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__12));
v___x_171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_154_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__14));
v___x_173_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__15));
v___x_174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_154_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = l_Lean_Syntax_node1(v___x_154_, v___x_172_, v___x_174_);
v___x_176_ = l_Lean_Syntax_node1(v___x_154_, v___x_166_, v___x_175_);
v___x_177_ = l_Lean_Syntax_node1(v___x_154_, v___x_166_, v___x_176_);
v___x_178_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__16));
v___x_179_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_154_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__18));
v___x_181_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__19));
v___x_182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_154_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
v___x_183_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__21));
v___x_184_ = lean_obj_once(&l_Lean_Elab_Command_mkMacroRulesFun___closed__23, &l_Lean_Elab_Command_mkMacroRulesFun___closed__23_once, _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__23);
v___x_185_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__24));
lean_inc(v_a_156_);
lean_inc(v_a_161_);
v___x_186_ = l_Lean_addMacroScope(v_a_161_, v___x_185_, v_a_156_);
v___x_187_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__28));
v___x_188_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_188_, 0, v___x_154_);
lean_ctor_set(v___x_188_, 1, v___x_184_);
lean_ctor_set(v___x_188_, 2, v___x_186_);
lean_ctor_set(v___x_188_, 3, v___x_187_);
v___x_189_ = lean_obj_once(&l_Lean_Elab_Command_mkMacroRulesFun___closed__30, &l_Lean_Elab_Command_mkMacroRulesFun___closed__30_once, _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__30);
v___x_190_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__34));
v___x_191_ = l_Lean_addMacroScope(v_a_161_, v___x_190_, v_a_156_);
v___x_192_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__38));
v___x_193_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_193_, 0, v___x_154_);
lean_ctor_set(v___x_193_, 1, v___x_189_);
lean_ctor_set(v___x_193_, 2, v___x_191_);
lean_ctor_set(v___x_193_, 3, v___x_192_);
v___x_194_ = l_Lean_Syntax_node1(v___x_154_, v___x_166_, v___x_193_);
v___x_195_ = l_Lean_Syntax_node2(v___x_154_, v___x_183_, v___x_188_, v___x_194_);
v___x_196_ = l_Lean_Syntax_node2(v___x_154_, v___x_180_, v___x_182_, v___x_195_);
v___x_197_ = l_Lean_Syntax_node4(v___x_154_, v___x_168_, v___x_171_, v___x_177_, v___x_179_, v___x_196_);
v___x_198_ = lean_array_push(v___x_169_, v___x_197_);
v___x_199_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_199_, 0, v___x_154_);
lean_ctor_set(v___x_199_, 1, v___x_166_);
lean_ctor_set(v___x_199_, 2, v___x_198_);
v___x_200_ = l_Lean_Syntax_node1(v___x_154_, v___x_165_, v___x_199_);
v___x_201_ = l_Lean_Syntax_node2(v___x_154_, v___x_163_, v___x_164_, v___x_200_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_201_);
v___x_203_ = v___x_158_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
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
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_dec(v___x_154_);
lean_dec(v_a_150_);
v_a_210_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_155_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_155_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec(v_a_150_);
v_a_218_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_151_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_151_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
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
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
v_a_226_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_149_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_149_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_a_226_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkMacroRulesFun___boxed(lean_object* v_cmdName_234_, lean_object* v_k_235_, lean_object* v_alts_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_Elab_Command_mkMacroRulesFun(v_cmdName_234_, v_k_235_, v_alts_236_, v_a_237_, v_a_238_);
lean_dec(v_a_238_);
lean_dec_ref(v_a_237_);
return v_res_240_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__5(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__4));
v___x_247_ = l_String_toRawSubstring_x27(v___x_246_);
return v___x_247_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__8(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__31));
v___x_252_ = l_String_toRawSubstring_x27(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux(lean_object* v_doc_x3f_280_, lean_object* v_attrs_x3f_281_, lean_object* v_attrKind_282_, lean_object* v_tk_283_, lean_object* v_k_284_, lean_object* v_alts_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__0));
lean_inc(v_k_284_);
v___x_290_ = l_Lean_Elab_Command_mkMacroRulesFun(v___x_289_, v_k_284_, v_alts_285_, v_a_286_, v_a_287_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_427_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_427_ == 0)
{
v___x_293_ = v___x_290_;
v_isShared_294_ = v_isSharedCheck_427_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_290_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_427_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___y_296_; lean_object* v___y_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_360_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v_a_364_; lean_object* v___x_373_; 
v___x_373_ = l_Lean_Elab_Command_getRef___redArg(v_a_286_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; uint8_t v___x_375_; lean_object* v___y_377_; lean_object* v___x_397_; lean_object* v___x_416_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v___x_375_ = 0;
v___x_397_ = l_Lean_SourceInfo_fromRef(v_a_374_, v___x_375_);
lean_dec(v_a_374_);
v___x_416_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_286_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_quotContext_x3f_417_; 
lean_dec_ref_known(v___x_416_, 1);
v_quotContext_x3f_417_ = lean_ctor_get(v_a_286_, 5);
if (lean_obj_tag(v_quotContext_x3f_417_) == 0)
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v_a_287_);
lean_dec_ref(v___x_418_);
goto v___jp_398_;
}
else
{
goto v___jp_398_;
}
}
else
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
lean_dec(v___x_397_);
lean_del_object(v___x_293_);
lean_dec(v_a_291_);
lean_dec(v_k_284_);
lean_dec(v_attrKind_282_);
lean_dec(v_doc_x3f_280_);
v_a_419_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_416_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_416_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
v___jp_376_:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_Lean_Parser_Command_visibility_ofAttrKind(v_attrKind_282_);
v___x_379_ = l_Lean_Elab_Command_getRef___redArg(v_a_286_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v___x_379_, 1);
v___x_381_ = l_Lean_SourceInfo_fromRef(v_a_380_, v___x_375_);
lean_dec(v_a_380_);
v___x_382_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_286_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_quotContext_x3f_383_; 
v_quotContext_x3f_383_ = lean_ctor_get(v_a_286_, 5);
if (lean_obj_tag(v_quotContext_x3f_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_385_; lean_object* v_a_386_; 
v_a_384_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v___x_382_, 1);
v___x_385_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v_a_287_);
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref(v___x_385_);
v___y_360_ = v___x_381_;
v___y_361_ = v_a_384_;
v___y_362_ = v___x_378_;
v___y_363_ = v___y_377_;
v_a_364_ = v_a_386_;
goto v___jp_359_;
}
else
{
lean_object* v_a_387_; lean_object* v_val_388_; 
v_a_387_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_382_, 1);
v_val_388_ = lean_ctor_get(v_quotContext_x3f_383_, 0);
lean_inc(v_val_388_);
v___y_360_ = v___x_381_;
v___y_361_ = v_a_387_;
v___y_362_ = v___x_378_;
v___y_363_ = v___y_377_;
v_a_364_ = v_val_388_;
goto v___jp_359_;
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
lean_dec(v___x_381_);
lean_dec(v___x_378_);
lean_dec_ref(v___y_377_);
lean_del_object(v___x_293_);
lean_dec(v_a_291_);
lean_dec(v_k_284_);
lean_dec(v_doc_x3f_280_);
v_a_389_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_382_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_382_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
else
{
lean_dec(v___x_378_);
lean_dec_ref(v___y_377_);
lean_del_object(v___x_293_);
lean_dec(v_a_291_);
lean_dec(v_k_284_);
lean_dec(v_doc_x3f_280_);
return v___x_379_;
}
}
v___jp_398_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_399_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__17));
v___x_400_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__19));
v___x_401_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__20));
lean_inc_n(v___x_397_, 2);
v___x_402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_397_);
lean_ctor_set(v___x_402_, 1, v___x_400_);
lean_inc(v_k_284_);
v___x_403_ = l_Lean_mkIdent(v_k_284_);
v___x_404_ = l_Lean_Syntax_node2(v___x_397_, v___x_401_, v___x_402_, v___x_403_);
lean_inc(v_attrKind_282_);
v___x_405_ = l_Lean_Syntax_node2(v___x_397_, v___x_399_, v_attrKind_282_, v___x_404_);
if (lean_obj_tag(v_attrs_x3f_281_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_406_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__21));
v___x_407_ = lean_unsigned_to_nat(1u);
v___x_408_ = lean_mk_empty_array_with_capacity(v___x_407_);
v___x_409_ = lean_array_push(v___x_408_, v___x_405_);
v___x_410_ = l_Lean_Syntax_SepArray_ofElems(v___x_406_, v___x_409_);
lean_dec_ref(v___x_409_);
v___y_377_ = v___x_410_;
goto v___jp_376_;
}
else
{
lean_object* v_val_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_val_411_ = lean_ctor_get(v_attrs_x3f_281_, 0);
v___x_412_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__21));
v___x_413_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_411_);
v___x_414_ = lean_array_push(v___x_413_, v___x_405_);
v___x_415_ = l_Lean_Syntax_SepArray_ofElems(v___x_412_, v___x_414_);
lean_dec_ref(v___x_414_);
v___y_377_ = v___x_415_;
goto v___jp_376_;
}
}
}
else
{
lean_del_object(v___x_293_);
lean_dec(v_a_291_);
lean_dec(v_k_284_);
lean_dec(v_attrKind_282_);
lean_dec(v_doc_x3f_280_);
return v___x_373_;
}
v___jp_295_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_357_; 
lean_inc_ref_n(v___y_303_, 2);
v___x_307_ = l_Array_append___redArg(v___y_303_, v___y_306_);
lean_dec_ref(v___y_306_);
lean_inc_n(v___y_297_, 4);
lean_inc_n(v___y_296_, 12);
v___x_308_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_308_, 0, v___y_296_);
lean_ctor_set(v___x_308_, 1, v___y_297_);
lean_ctor_set(v___x_308_, 2, v___x_307_);
v___x_309_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__1));
v___x_310_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__2));
v___x_311_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__1));
lean_inc_ref_n(v___y_300_, 2);
v___x_312_ = l_Lean_Name_mkStr4(v___y_300_, v___x_309_, v___x_310_, v___x_311_);
v___x_313_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__2));
v___x_314_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_314_, 0, v___y_296_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = l_Array_append___redArg(v___y_303_, v___y_305_);
lean_dec_ref(v___y_305_);
v___x_316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_316_, 0, v___y_296_);
lean_ctor_set(v___x_316_, 1, v___y_297_);
lean_ctor_set(v___x_316_, 2, v___x_315_);
v___x_317_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__3));
v___x_318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_318_, 0, v___y_296_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = l_Lean_Syntax_node3(v___y_296_, v___x_312_, v___x_314_, v___x_316_, v___x_318_);
v___x_320_ = l_Lean_Syntax_node1(v___y_296_, v___y_297_, v___x_319_);
lean_inc_ref(v___y_299_);
v___x_321_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_321_, 0, v___y_296_);
lean_ctor_set(v___x_321_, 1, v___y_299_);
v___x_322_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__5, &l_Lean_Elab_Command_elabMacroRulesAux___closed__5_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__5);
v___x_323_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__6));
lean_inc(v___y_301_);
lean_inc(v___y_304_);
v___x_324_ = l_Lean_addMacroScope(v___y_304_, v___x_323_, v___y_301_);
v___x_325_ = lean_box(0);
v___x_326_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_326_, 0, v___y_296_);
lean_ctor_set(v___x_326_, 1, v___x_322_);
lean_ctor_set(v___x_326_, 2, v___x_324_);
lean_ctor_set(v___x_326_, 3, v___x_325_);
v___x_327_ = 1;
v___x_328_ = l_Lean_mkIdentFrom(v_tk_283_, v_k_284_, v___x_327_);
v___x_329_ = l_Lean_Syntax_node2(v___y_296_, v___y_297_, v___x_326_, v___x_328_);
v___x_330_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__7));
v___x_331_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_331_, 0, v___y_296_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__31));
v___x_333_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__8, &l_Lean_Elab_Command_elabMacroRulesAux___closed__8_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__8);
v___x_334_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__9));
v___x_335_ = l_Lean_addMacroScope(v___y_304_, v___x_334_, v___y_301_);
v___x_336_ = l_Lean_Name_mkStr2(v___y_300_, v___x_332_);
lean_inc(v___x_336_);
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_325_);
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_336_);
v___x_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_325_);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_337_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_341_, 0, v___y_296_);
lean_ctor_set(v___x_341_, 1, v___x_333_);
lean_ctor_set(v___x_341_, 2, v___x_335_);
lean_ctor_set(v___x_341_, 3, v___x_340_);
v___x_342_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__10));
v___x_343_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_343_, 0, v___y_296_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_unsigned_to_nat(9u);
v___x_345_ = lean_mk_empty_array_with_capacity(v___x_344_);
v___x_346_ = lean_array_push(v___x_345_, v___x_308_);
v___x_347_ = lean_array_push(v___x_346_, v___x_320_);
v___x_348_ = lean_array_push(v___x_347_, v___y_302_);
v___x_349_ = lean_array_push(v___x_348_, v___x_321_);
v___x_350_ = lean_array_push(v___x_349_, v___x_329_);
v___x_351_ = lean_array_push(v___x_350_, v___x_331_);
v___x_352_ = lean_array_push(v___x_351_, v___x_341_);
v___x_353_ = lean_array_push(v___x_352_, v___x_343_);
v___x_354_ = lean_array_push(v___x_353_, v_a_291_);
lean_inc(v___y_298_);
v___x_355_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_355_, 0, v___y_296_);
lean_ctor_set(v___x_355_, 1, v___y_298_);
lean_ctor_set(v___x_355_, 2, v___x_354_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v___x_355_);
v___x_357_ = v___x_293_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
v___jp_359_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_365_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__0));
v___x_366_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__13));
v___x_367_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__14));
v___x_368_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_369_ = lean_obj_once(&l_Lean_Elab_Command_mkMacroRulesFun___closed__9, &l_Lean_Elab_Command_mkMacroRulesFun___closed__9_once, _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__9);
if (lean_obj_tag(v_doc_x3f_280_) == 1)
{
lean_object* v_val_370_; lean_object* v___x_371_; 
v_val_370_ = lean_ctor_get(v_doc_x3f_280_, 0);
lean_inc(v_val_370_);
lean_dec_ref_known(v_doc_x3f_280_, 1);
v___x_371_ = l_Array_mkArray1___redArg(v_val_370_);
v___y_296_ = v___y_360_;
v___y_297_ = v___x_368_;
v___y_298_ = v___x_367_;
v___y_299_ = v___x_366_;
v___y_300_ = v___x_365_;
v___y_301_ = v___y_361_;
v___y_302_ = v___y_362_;
v___y_303_ = v___x_369_;
v___y_304_ = v_a_364_;
v___y_305_ = v___y_363_;
v___y_306_ = v___x_371_;
goto v___jp_295_;
}
else
{
lean_object* v___x_372_; 
lean_dec(v_doc_x3f_280_);
v___x_372_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__15));
v___y_296_ = v___y_360_;
v___y_297_ = v___x_368_;
v___y_298_ = v___x_367_;
v___y_299_ = v___x_366_;
v___y_300_ = v___x_365_;
v___y_301_ = v___y_361_;
v___y_302_ = v___y_362_;
v___y_303_ = v___x_369_;
v___y_304_ = v_a_364_;
v___y_305_ = v___y_363_;
v___y_306_ = v___x_372_;
goto v___jp_295_;
}
}
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_dec(v_k_284_);
lean_dec(v_attrKind_282_);
lean_dec(v_doc_x3f_280_);
v_a_428_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_290_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_290_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRulesAux___boxed(lean_object* v_doc_x3f_436_, lean_object* v_attrs_x3f_437_, lean_object* v_attrKind_438_, lean_object* v_tk_439_, lean_object* v_k_440_, lean_object* v_alts_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Elab_Command_elabMacroRulesAux(v_doc_x3f_436_, v_attrs_x3f_437_, v_attrKind_438_, v_tk_439_, v_k_440_, v_alts_441_, v_a_442_, v_a_443_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
lean_dec(v_tk_439_);
lean_dec(v_attrs_x3f_437_);
return v_res_445_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = lean_box(0);
v___x_447_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg(){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___closed__0);
v___x_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg___boxed(lean_object* v___y_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0(lean_object* v_00_u03b1_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___boxed(lean_object* v_00_u03b1_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0(v_00_u03b1_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0(lean_object* v___y_464_, uint8_t v_isExporting_465_, lean_object* v_a_x3f_466_){
_start:
{
lean_object* v___x_468_; lean_object* v_env_469_; lean_object* v_messages_470_; lean_object* v_scopes_471_; lean_object* v_usedQuotCtxts_472_; lean_object* v_nextMacroScope_473_; lean_object* v_maxRecDepth_474_; lean_object* v_ngen_475_; lean_object* v_auxDeclNGen_476_; lean_object* v_infoState_477_; lean_object* v_traceState_478_; lean_object* v_snapshotTasks_479_; lean_object* v_prevLinterStates_480_; lean_object* v_codeQualityEntryTasks_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_492_; 
v___x_468_ = lean_st_ref_take(v___y_464_);
v_env_469_ = lean_ctor_get(v___x_468_, 0);
v_messages_470_ = lean_ctor_get(v___x_468_, 1);
v_scopes_471_ = lean_ctor_get(v___x_468_, 2);
v_usedQuotCtxts_472_ = lean_ctor_get(v___x_468_, 3);
v_nextMacroScope_473_ = lean_ctor_get(v___x_468_, 4);
v_maxRecDepth_474_ = lean_ctor_get(v___x_468_, 5);
v_ngen_475_ = lean_ctor_get(v___x_468_, 6);
v_auxDeclNGen_476_ = lean_ctor_get(v___x_468_, 7);
v_infoState_477_ = lean_ctor_get(v___x_468_, 8);
v_traceState_478_ = lean_ctor_get(v___x_468_, 9);
v_snapshotTasks_479_ = lean_ctor_get(v___x_468_, 10);
v_prevLinterStates_480_ = lean_ctor_get(v___x_468_, 11);
v_codeQualityEntryTasks_481_ = lean_ctor_get(v___x_468_, 12);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_492_ == 0)
{
v___x_483_ = v___x_468_;
v_isShared_484_ = v_isSharedCheck_492_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_codeQualityEntryTasks_481_);
lean_inc(v_prevLinterStates_480_);
lean_inc(v_snapshotTasks_479_);
lean_inc(v_traceState_478_);
lean_inc(v_infoState_477_);
lean_inc(v_auxDeclNGen_476_);
lean_inc(v_ngen_475_);
lean_inc(v_maxRecDepth_474_);
lean_inc(v_nextMacroScope_473_);
lean_inc(v_usedQuotCtxts_472_);
lean_inc(v_scopes_471_);
lean_inc(v_messages_470_);
lean_inc(v_env_469_);
lean_dec(v___x_468_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_492_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_485_ = lean_box(0);
v___x_486_ = l_Lean_Environment_setExporting(v_env_469_, v_isExporting_465_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_486_);
v___x_488_ = v___x_483_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_messages_470_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v_scopes_471_);
lean_ctor_set(v_reuseFailAlloc_491_, 3, v_usedQuotCtxts_472_);
lean_ctor_set(v_reuseFailAlloc_491_, 4, v_nextMacroScope_473_);
lean_ctor_set(v_reuseFailAlloc_491_, 5, v_maxRecDepth_474_);
lean_ctor_set(v_reuseFailAlloc_491_, 6, v_ngen_475_);
lean_ctor_set(v_reuseFailAlloc_491_, 7, v_auxDeclNGen_476_);
lean_ctor_set(v_reuseFailAlloc_491_, 8, v_infoState_477_);
lean_ctor_set(v_reuseFailAlloc_491_, 9, v_traceState_478_);
lean_ctor_set(v_reuseFailAlloc_491_, 10, v_snapshotTasks_479_);
lean_ctor_set(v_reuseFailAlloc_491_, 11, v_prevLinterStates_480_);
lean_ctor_set(v_reuseFailAlloc_491_, 12, v_codeQualityEntryTasks_481_);
v___x_488_ = v_reuseFailAlloc_491_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_st_ref_put(v___y_464_, v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_485_);
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0___boxed(lean_object* v___y_493_, lean_object* v_isExporting_494_, lean_object* v_a_x3f_495_, lean_object* v___y_496_){
_start:
{
uint8_t v_isExporting_boxed_497_; lean_object* v_res_498_; 
v_isExporting_boxed_497_ = lean_unbox(v_isExporting_494_);
v_res_498_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0(v___y_493_, v_isExporting_boxed_497_, v_a_x3f_495_);
lean_dec(v_a_x3f_495_);
lean_dec(v___y_493_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(lean_object* v_x_499_, uint8_t v_isExporting_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v___x_504_; lean_object* v_env_505_; lean_object* v___x_506_; uint8_t v_isModule_507_; 
v___x_504_ = lean_st_ref_get(v___y_502_);
v_env_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc_ref(v_env_505_);
lean_dec(v___x_504_);
v___x_506_ = l_Lean_Environment_header(v_env_505_);
v_isModule_507_ = lean_ctor_get_uint8(v___x_506_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_506_);
if (v_isModule_507_ == 0)
{
lean_object* v___x_508_; 
lean_dec_ref(v_env_505_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
v___x_508_ = lean_apply_3(v_x_499_, v___y_501_, v___y_502_, lean_box(0));
return v___x_508_;
}
else
{
uint8_t v_isExporting_509_; 
v_isExporting_509_ = lean_ctor_get_uint8(v_env_505_, sizeof(void*)*13);
lean_dec_ref(v_env_505_);
if (v_isExporting_500_ == 0)
{
if (v_isExporting_509_ == 0)
{
lean_object* v___x_563_; 
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
v___x_563_ = lean_apply_3(v_x_499_, v___y_501_, v___y_502_, lean_box(0));
return v___x_563_;
}
else
{
goto v___jp_510_;
}
}
else
{
if (v_isExporting_509_ == 0)
{
goto v___jp_510_;
}
else
{
lean_object* v___x_564_; 
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
v___x_564_ = lean_apply_3(v_x_499_, v___y_501_, v___y_502_, lean_box(0));
return v___x_564_;
}
}
v___jp_510_:
{
lean_object* v___x_511_; lean_object* v_env_512_; lean_object* v_messages_513_; lean_object* v_scopes_514_; lean_object* v_usedQuotCtxts_515_; lean_object* v_nextMacroScope_516_; lean_object* v_maxRecDepth_517_; lean_object* v_ngen_518_; lean_object* v_auxDeclNGen_519_; lean_object* v_infoState_520_; lean_object* v_traceState_521_; lean_object* v_snapshotTasks_522_; lean_object* v_prevLinterStates_523_; lean_object* v_codeQualityEntryTasks_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_562_; 
v___x_511_ = lean_st_ref_take(v___y_502_);
v_env_512_ = lean_ctor_get(v___x_511_, 0);
v_messages_513_ = lean_ctor_get(v___x_511_, 1);
v_scopes_514_ = lean_ctor_get(v___x_511_, 2);
v_usedQuotCtxts_515_ = lean_ctor_get(v___x_511_, 3);
v_nextMacroScope_516_ = lean_ctor_get(v___x_511_, 4);
v_maxRecDepth_517_ = lean_ctor_get(v___x_511_, 5);
v_ngen_518_ = lean_ctor_get(v___x_511_, 6);
v_auxDeclNGen_519_ = lean_ctor_get(v___x_511_, 7);
v_infoState_520_ = lean_ctor_get(v___x_511_, 8);
v_traceState_521_ = lean_ctor_get(v___x_511_, 9);
v_snapshotTasks_522_ = lean_ctor_get(v___x_511_, 10);
v_prevLinterStates_523_ = lean_ctor_get(v___x_511_, 11);
v_codeQualityEntryTasks_524_ = lean_ctor_get(v___x_511_, 12);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_562_ == 0)
{
v___x_526_ = v___x_511_;
v_isShared_527_ = v_isSharedCheck_562_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_codeQualityEntryTasks_524_);
lean_inc(v_prevLinterStates_523_);
lean_inc(v_snapshotTasks_522_);
lean_inc(v_traceState_521_);
lean_inc(v_infoState_520_);
lean_inc(v_auxDeclNGen_519_);
lean_inc(v_ngen_518_);
lean_inc(v_maxRecDepth_517_);
lean_inc(v_nextMacroScope_516_);
lean_inc(v_usedQuotCtxts_515_);
lean_inc(v_scopes_514_);
lean_inc(v_messages_513_);
lean_inc(v_env_512_);
lean_dec(v___x_511_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_562_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = l_Lean_Environment_setExporting(v_env_512_, v_isExporting_500_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v_messages_513_);
lean_ctor_set(v_reuseFailAlloc_561_, 2, v_scopes_514_);
lean_ctor_set(v_reuseFailAlloc_561_, 3, v_usedQuotCtxts_515_);
lean_ctor_set(v_reuseFailAlloc_561_, 4, v_nextMacroScope_516_);
lean_ctor_set(v_reuseFailAlloc_561_, 5, v_maxRecDepth_517_);
lean_ctor_set(v_reuseFailAlloc_561_, 6, v_ngen_518_);
lean_ctor_set(v_reuseFailAlloc_561_, 7, v_auxDeclNGen_519_);
lean_ctor_set(v_reuseFailAlloc_561_, 8, v_infoState_520_);
lean_ctor_set(v_reuseFailAlloc_561_, 9, v_traceState_521_);
lean_ctor_set(v_reuseFailAlloc_561_, 10, v_snapshotTasks_522_);
lean_ctor_set(v_reuseFailAlloc_561_, 11, v_prevLinterStates_523_);
lean_ctor_set(v_reuseFailAlloc_561_, 12, v_codeQualityEntryTasks_524_);
v___x_530_ = v_reuseFailAlloc_561_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; lean_object* v_r_532_; 
v___x_531_ = lean_st_ref_put(v___y_502_, v___x_530_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
v_r_532_ = lean_apply_3(v_x_499_, v___y_501_, v___y_502_, lean_box(0));
if (lean_obj_tag(v_r_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_549_; 
v_a_533_ = lean_ctor_get(v_r_532_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v_r_532_);
if (v_isSharedCheck_549_ == 0)
{
v___x_535_ = v_r_532_;
v_isShared_536_ = v_isSharedCheck_549_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v_r_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_549_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
lean_inc(v_a_533_);
if (v_isShared_536_ == 0)
{
lean_ctor_set_tag(v___x_535_, 1);
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_548_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
v___x_539_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0(v___y_502_, v_isExporting_509_, v___x_538_);
lean_dec_ref(v___x_538_);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_546_ == 0)
{
lean_object* v_unused_547_; 
v_unused_547_ = lean_ctor_get(v___x_539_, 0);
lean_dec(v_unused_547_);
v___x_541_ = v___x_539_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_dec(v___x_539_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v_a_533_);
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_533_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_550_ = lean_ctor_get(v_r_532_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v_r_532_, 1);
v___x_551_ = lean_box(0);
v___x_552_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___lam__0(v___y_502_, v_isExporting_509_, v___x_551_);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_559_ == 0)
{
lean_object* v_unused_560_; 
v_unused_560_ = lean_ctor_get(v___x_552_, 0);
lean_dec(v_unused_560_);
v___x_554_ = v___x_552_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_dec(v___x_552_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
lean_ctor_set_tag(v___x_554_, 1);
lean_ctor_set(v___x_554_, 0, v_a_550_);
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_550_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg___boxed(lean_object* v_x_565_, lean_object* v_isExporting_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
uint8_t v_isExporting_boxed_570_; lean_object* v_res_571_; 
v_isExporting_boxed_570_ = lean_unbox(v_isExporting_566_);
v_res_571_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v_x_565_, v_isExporting_boxed_570_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1(lean_object* v_00_u03b1_572_, lean_object* v_x_573_, uint8_t v_isExporting_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v_x_573_, v_isExporting_574_, v___y_575_, v___y_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___boxed(lean_object* v_00_u03b1_579_, lean_object* v_x_580_, lean_object* v_isExporting_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
uint8_t v_isExporting_boxed_585_; lean_object* v_res_586_; 
v_isExporting_boxed_585_ = lean_unbox(v_isExporting_581_);
v_res_586_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1(v_00_u03b1_579_, v_x_580_, v_isExporting_boxed_585_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0(lean_object* v___x_587_, lean_object* v___x_588_, lean_object* v_doc_x3f_589_, lean_object* v_attrs_x3f_590_, lean_object* v_attrKind_591_, lean_object* v_tk_592_, lean_object* v_alts_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_Elab_Command_getRef___redArg(v___y_594_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v_fileName_599_; lean_object* v_fileMap_600_; lean_object* v_currRecDepth_601_; lean_object* v_cmdPos_602_; lean_object* v_macroStack_603_; lean_object* v_quotContext_x3f_604_; lean_object* v_currMacroScope_605_; lean_object* v_snap_x3f_606_; lean_object* v_cancelTk_x3f_607_; uint8_t v_suppressElabErrors_608_; uint8_t v_checkDeprecated_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_646_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_597_, 1);
v_fileName_599_ = lean_ctor_get(v___y_594_, 0);
v_fileMap_600_ = lean_ctor_get(v___y_594_, 1);
v_currRecDepth_601_ = lean_ctor_get(v___y_594_, 2);
v_cmdPos_602_ = lean_ctor_get(v___y_594_, 3);
v_macroStack_603_ = lean_ctor_get(v___y_594_, 4);
v_quotContext_x3f_604_ = lean_ctor_get(v___y_594_, 5);
v_currMacroScope_605_ = lean_ctor_get(v___y_594_, 6);
v_snap_x3f_606_ = lean_ctor_get(v___y_594_, 8);
v_cancelTk_x3f_607_ = lean_ctor_get(v___y_594_, 9);
v_suppressElabErrors_608_ = lean_ctor_get_uint8(v___y_594_, sizeof(void*)*10);
v_checkDeprecated_609_ = lean_ctor_get_uint8(v___y_594_, sizeof(void*)*10 + 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v___y_594_);
if (v_isSharedCheck_646_ == 0)
{
lean_object* v_unused_647_; 
v_unused_647_ = lean_ctor_get(v___y_594_, 7);
lean_dec(v_unused_647_);
v___x_611_ = v___y_594_;
v_isShared_612_ = v_isSharedCheck_646_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_cancelTk_x3f_607_);
lean_inc(v_snap_x3f_606_);
lean_inc(v_currMacroScope_605_);
lean_inc(v_quotContext_x3f_604_);
lean_inc(v_macroStack_603_);
lean_inc(v_cmdPos_602_);
lean_inc(v_currRecDepth_601_);
lean_inc(v_fileMap_600_);
lean_inc(v_fileName_599_);
lean_dec(v___y_594_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_646_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v_ref_613_; lean_object* v___x_615_; 
v_ref_613_ = l_Lean_replaceRef(v___x_587_, v_a_598_);
lean_dec(v_a_598_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 7, v_ref_613_);
v___x_615_ = v___x_611_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_fileName_599_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_fileMap_600_);
lean_ctor_set(v_reuseFailAlloc_645_, 2, v_currRecDepth_601_);
lean_ctor_set(v_reuseFailAlloc_645_, 3, v_cmdPos_602_);
lean_ctor_set(v_reuseFailAlloc_645_, 4, v_macroStack_603_);
lean_ctor_set(v_reuseFailAlloc_645_, 5, v_quotContext_x3f_604_);
lean_ctor_set(v_reuseFailAlloc_645_, 6, v_currMacroScope_605_);
lean_ctor_set(v_reuseFailAlloc_645_, 7, v_ref_613_);
lean_ctor_set(v_reuseFailAlloc_645_, 8, v_snap_x3f_606_);
lean_ctor_set(v_reuseFailAlloc_645_, 9, v_cancelTk_x3f_607_);
lean_ctor_set_uint8(v_reuseFailAlloc_645_, sizeof(void*)*10, v_suppressElabErrors_608_);
lean_ctor_set_uint8(v_reuseFailAlloc_645_, sizeof(void*)*10 + 1, v_checkDeprecated_609_);
v___x_615_ = v_reuseFailAlloc_645_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_Elab_Command_resolveSyntaxKind(v___x_588_, v___x_615_, v___y_595_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v___x_618_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc_n(v_a_617_, 2);
lean_dec_ref_known(v___x_616_, 1);
v___x_618_ = l_Lean_Elab_Command_elabMacroRulesAux(v_doc_x3f_589_, v_attrs_x3f_590_, v_attrKind_591_, v_tk_592_, v_a_617_, v_alts_593_, v___x_615_, v___y_595_);
lean_dec_ref(v___x_615_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_628_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_628_ == 0)
{
v___x_621_ = v___x_618_;
v_isShared_622_ = v_isSharedCheck_628_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_628_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v_a_617_);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v_a_619_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_624_);
v___x_626_ = v___x_621_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec(v_a_617_);
v_a_629_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_618_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_618_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v___x_615_);
lean_dec_ref(v_alts_593_);
lean_dec(v_attrKind_591_);
lean_dec(v_doc_x3f_589_);
v_a_637_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_616_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_616_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
lean_dec_ref(v___y_594_);
lean_dec_ref(v_alts_593_);
lean_dec(v_attrKind_591_);
lean_dec(v_doc_x3f_589_);
lean_dec(v___x_588_);
v_a_648_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_597_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_597_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__0___boxed(lean_object* v___x_656_, lean_object* v___x_657_, lean_object* v_doc_x3f_658_, lean_object* v_attrs_x3f_659_, lean_object* v_attrKind_660_, lean_object* v_tk_661_, lean_object* v_alts_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Elab_Command_elabMacroRules___lam__0(v___x_656_, v___x_657_, v_doc_x3f_658_, v_attrs_x3f_659_, v_attrKind_660_, v_tk_661_, v_alts_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec(v_tk_661_);
lean_dec(v_attrs_x3f_659_);
lean_dec(v___x_656_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5(lean_object* v___x_670_, lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v_attrKind_673_, lean_object* v___x_674_, lean_object* v___x_675_, lean_object* v_attrs_x3f_676_, lean_object* v___x_677_, lean_object* v___x_678_, lean_object* v___x_679_, lean_object* v_doc_x3f_680_, lean_object* v_kind_x3f_681_, lean_object* v_alts_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lean_Elab_Command_getRef___redArg(v___y_683_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_760_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_760_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_760_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_760_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_728_; lean_object* v___y_729_; lean_object* v___x_749_; 
v___x_691_ = 0;
v___x_692_ = l_Lean_SourceInfo_fromRef(v_a_687_, v___x_691_);
lean_dec(v_a_687_);
v___x_749_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_683_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_quotContext_x3f_750_; 
lean_dec_ref_known(v___x_749_, 1);
v_quotContext_x3f_750_ = lean_ctor_get(v___y_683_, 5);
if (lean_obj_tag(v_quotContext_x3f_750_) == 0)
{
lean_object* v___x_751_; 
v___x_751_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v___y_684_);
lean_dec_ref(v___x_751_);
goto v___jp_744_;
}
else
{
goto v___jp_744_;
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec(v___x_692_);
lean_del_object(v___x_689_);
lean_dec(v_kind_x3f_681_);
lean_dec(v_doc_x3f_680_);
lean_dec_ref(v___x_679_);
lean_dec_ref(v___x_678_);
lean_dec_ref(v___x_677_);
lean_dec_ref(v___x_674_);
lean_dec(v_attrKind_673_);
lean_dec(v___x_672_);
lean_dec(v___x_671_);
lean_dec(v___x_670_);
v_a_752_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_749_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_749_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
v___jp_693_:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_706_; 
lean_inc_ref_n(v___y_697_, 2);
v___x_699_ = l_Array_append___redArg(v___y_697_, v___y_698_);
lean_dec_ref(v___y_698_);
lean_inc(v___x_670_);
lean_inc_n(v___x_692_, 3);
v___x_700_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_700_, 0, v___x_692_);
lean_ctor_set(v___x_700_, 1, v___x_670_);
lean_ctor_set(v___x_700_, 2, v___x_699_);
v___x_701_ = l_Array_append___redArg(v___y_697_, v_alts_682_);
v___x_702_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_702_, 0, v___x_692_);
lean_ctor_set(v___x_702_, 1, v___x_670_);
lean_ctor_set(v___x_702_, 2, v___x_701_);
v___x_703_ = l_Lean_Syntax_node1(v___x_692_, v___x_671_, v___x_702_);
v___x_704_ = l_Lean_Syntax_node6(v___x_692_, v___x_672_, v___y_694_, v___y_696_, v_attrKind_673_, v___y_695_, v___x_700_, v___x_703_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_704_);
v___x_706_ = v___x_689_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
v___jp_708_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
lean_inc_ref(v___y_710_);
v___x_712_ = l_Array_append___redArg(v___y_710_, v___y_711_);
lean_dec_ref(v___y_711_);
lean_inc(v___x_670_);
lean_inc_n(v___x_692_, 2);
v___x_713_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_713_, 0, v___x_692_);
lean_ctor_set(v___x_713_, 1, v___x_670_);
lean_ctor_set(v___x_713_, 2, v___x_712_);
v___x_714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_692_);
lean_ctor_set(v___x_714_, 1, v___x_674_);
if (lean_obj_tag(v_kind_x3f_681_) == 0)
{
lean_object* v___x_715_; 
v___x_715_ = lean_mk_empty_array_with_capacity(v___x_675_);
v___y_694_ = v___y_709_;
v___y_695_ = v___x_714_;
v___y_696_ = v___x_713_;
v___y_697_ = v___y_710_;
v___y_698_ = v___x_715_;
goto v___jp_693_;
}
else
{
lean_object* v_val_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_val_716_ = lean_ctor_get(v_kind_x3f_681_, 0);
lean_inc(v_val_716_);
lean_dec_ref_known(v_kind_x3f_681_, 1);
v___x_717_ = l_Lean_mkIdent(v_val_716_);
v___x_718_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__5___closed__0));
lean_inc_n(v___x_692_, 4);
v___x_719_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_692_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__5___closed__1));
v___x_721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_692_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__10));
v___x_723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_692_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__5___closed__2));
v___x_725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_692_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = l_Array_mkArray5___redArg(v___x_719_, v___x_721_, v___x_723_, v___x_717_, v___x_725_);
v___y_694_ = v___y_709_;
v___y_695_ = v___x_714_;
v___y_696_ = v___x_713_;
v___y_697_ = v___y_710_;
v___y_698_ = v___x_726_;
goto v___jp_693_;
}
}
v___jp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_inc_ref(v___y_728_);
v___x_730_ = l_Array_append___redArg(v___y_728_, v___y_729_);
lean_dec_ref(v___y_729_);
lean_inc(v___x_670_);
lean_inc(v___x_692_);
v___x_731_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_731_, 0, v___x_692_);
lean_ctor_set(v___x_731_, 1, v___x_670_);
lean_ctor_set(v___x_731_, 2, v___x_730_);
if (lean_obj_tag(v_attrs_x3f_676_) == 1)
{
lean_object* v_val_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v_val_732_ = lean_ctor_get(v_attrs_x3f_676_, 0);
v___x_733_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__1));
v___x_734_ = l_Lean_Name_mkStr4(v___x_677_, v___x_678_, v___x_679_, v___x_733_);
v___x_735_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__2));
lean_inc_n(v___x_692_, 4);
v___x_736_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_692_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
lean_inc_ref(v___y_728_);
v___x_737_ = l_Array_append___redArg(v___y_728_, v_val_732_);
lean_inc(v___x_670_);
v___x_738_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_738_, 0, v___x_692_);
lean_ctor_set(v___x_738_, 1, v___x_670_);
lean_ctor_set(v___x_738_, 2, v___x_737_);
v___x_739_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__3));
v___x_740_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_692_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = l_Lean_Syntax_node3(v___x_692_, v___x_734_, v___x_736_, v___x_738_, v___x_740_);
v___x_742_ = l_Array_mkArray1___redArg(v___x_741_);
v___y_709_ = v___x_731_;
v___y_710_ = v___y_728_;
v___y_711_ = v___x_742_;
goto v___jp_708_;
}
else
{
lean_object* v___x_743_; 
lean_dec_ref(v___x_679_);
lean_dec_ref(v___x_678_);
lean_dec_ref(v___x_677_);
v___x_743_ = lean_mk_empty_array_with_capacity(v___x_675_);
v___y_709_ = v___x_731_;
v___y_710_ = v___y_728_;
v___y_711_ = v___x_743_;
goto v___jp_708_;
}
}
v___jp_744_:
{
lean_object* v___x_745_; 
v___x_745_ = lean_obj_once(&l_Lean_Elab_Command_mkMacroRulesFun___closed__9, &l_Lean_Elab_Command_mkMacroRulesFun___closed__9_once, _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__9);
if (lean_obj_tag(v_doc_x3f_680_) == 1)
{
lean_object* v_val_746_; lean_object* v___x_747_; 
v_val_746_ = lean_ctor_get(v_doc_x3f_680_, 0);
lean_inc(v_val_746_);
lean_dec_ref_known(v_doc_x3f_680_, 1);
v___x_747_ = l_Array_mkArray1___redArg(v_val_746_);
v___y_728_ = v___x_745_;
v___y_729_ = v___x_747_;
goto v___jp_727_;
}
else
{
lean_object* v___x_748_; 
lean_dec(v_doc_x3f_680_);
v___x_748_ = lean_mk_empty_array_with_capacity(v___x_675_);
v___y_728_ = v___x_745_;
v___y_729_ = v___x_748_;
goto v___jp_727_;
}
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_kind_x3f_681_);
lean_dec(v_doc_x3f_680_);
lean_dec_ref(v___x_679_);
lean_dec_ref(v___x_678_);
lean_dec_ref(v___x_677_);
lean_dec_ref(v___x_674_);
lean_dec(v_attrKind_673_);
lean_dec(v___x_672_);
lean_dec(v___x_671_);
lean_dec(v___x_670_);
v_a_761_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_686_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_686_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__5___boxed(lean_object* v___x_769_, lean_object* v___x_770_, lean_object* v___x_771_, lean_object* v_attrKind_772_, lean_object* v___x_773_, lean_object* v___x_774_, lean_object* v_attrs_x3f_775_, lean_object* v___x_776_, lean_object* v___x_777_, lean_object* v___x_778_, lean_object* v_doc_x3f_779_, lean_object* v_kind_x3f_780_, lean_object* v_alts_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_Elab_Command_elabMacroRules___lam__5(v___x_769_, v___x_770_, v___x_771_, v_attrKind_772_, v___x_773_, v___x_774_, v_attrs_x3f_775_, v___x_776_, v___x_777_, v___x_778_, v_doc_x3f_779_, v_kind_x3f_780_, v_alts_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec_ref(v_alts_781_);
lean_dec(v_attrs_x3f_775_);
lean_dec(v___x_774_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1(lean_object* v_stx_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___y_839_; lean_object* v___y_840_; uint8_t v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v___x_836_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__0));
v___x_837_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__1));
v___x_906_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__0));
v___x_907_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6));
lean_inc(v_stx_832_);
v___x_908_ = l_Lean_Syntax_isOfKind(v_stx_832_, v___x_907_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; 
lean_dec(v_stx_832_);
v___x_909_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_909_;
}
else
{
lean_object* v___x_910_; lean_object* v___y_912_; uint8_t v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v_a_926_; lean_object* v___y_934_; uint8_t v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; uint8_t v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v_a_949_; lean_object* v___y_976_; uint8_t v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; uint8_t v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_1006_; uint8_t v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; uint8_t v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v_attrs_x3f_1043_; lean_object* v_doc_x3f_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_1290_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_910_);
v___x_1291_ = l_Lean_Syntax_isNone(v___x_1290_);
if (v___x_1291_ == 0)
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1290_);
v___x_1293_ = l_Lean_Syntax_matchesNull(v___x_1290_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
lean_dec(v___x_1290_);
lean_dec(v_stx_832_);
v___x_1294_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1294_;
}
else
{
lean_object* v_doc_x3f_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v_doc_x3f_1295_ = l_Lean_Syntax_getArg(v___x_1290_, v___x_910_);
lean_dec(v___x_1290_);
v___x_1296_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__15));
lean_inc(v_doc_x3f_1295_);
v___x_1297_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1295_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; 
lean_dec(v_doc_x3f_1295_);
lean_dec(v_stx_832_);
v___x_1298_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1298_;
}
else
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1299_, 0, v_doc_x3f_1295_);
v_doc_x3f_1274_ = v___x_1299_;
v___y_1275_ = v___y_833_;
v___y_1276_ = v___y_834_;
goto v___jp_1273_;
}
}
}
else
{
lean_object* v___x_1300_; 
lean_dec(v___x_1290_);
v___x_1300_ = lean_box(0);
v_doc_x3f_1274_ = v___x_1300_;
v___y_1275_ = v___y_833_;
v___y_1276_ = v___y_834_;
goto v___jp_1273_;
}
v___jp_911_:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_927_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__13));
v___x_928_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__14));
v___x_929_ = lean_obj_once(&l_Lean_Elab_Command_mkMacroRulesFun___closed__9, &l_Lean_Elab_Command_mkMacroRulesFun___closed__9_once, _init_l_Lean_Elab_Command_mkMacroRulesFun___closed__9);
if (lean_obj_tag(v___y_918_) == 1)
{
lean_object* v_val_930_; lean_object* v___x_931_; 
v_val_930_ = lean_ctor_get(v___y_918_, 0);
lean_inc(v_val_930_);
lean_dec_ref_known(v___y_918_, 1);
v___x_931_ = l_Array_mkArray1___redArg(v_val_930_);
v___y_839_ = v___x_927_;
v___y_840_ = v___y_912_;
v___y_841_ = v___y_913_;
v___y_842_ = v___y_914_;
v___y_843_ = v___y_915_;
v___y_844_ = v___y_916_;
v___y_845_ = v___x_928_;
v___y_846_ = v___y_917_;
v___y_847_ = v___y_919_;
v___y_848_ = v___x_929_;
v___y_849_ = v___y_920_;
v___y_850_ = v___y_921_;
v___y_851_ = v___y_922_;
v___y_852_ = v___y_923_;
v___y_853_ = v_a_926_;
v___y_854_ = v___y_924_;
v___y_855_ = v___y_925_;
v___y_856_ = v___x_931_;
goto v___jp_838_;
}
else
{
lean_object* v___x_932_; 
lean_dec(v___y_918_);
v___x_932_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__15));
v___y_839_ = v___x_927_;
v___y_840_ = v___y_912_;
v___y_841_ = v___y_913_;
v___y_842_ = v___y_914_;
v___y_843_ = v___y_915_;
v___y_844_ = v___y_916_;
v___y_845_ = v___x_928_;
v___y_846_ = v___y_917_;
v___y_847_ = v___y_919_;
v___y_848_ = v___x_929_;
v___y_849_ = v___y_920_;
v___y_850_ = v___y_921_;
v___y_851_ = v___y_922_;
v___y_852_ = v___y_923_;
v___y_853_ = v_a_926_;
v___y_854_ = v___y_924_;
v___y_855_ = v___y_925_;
v___y_856_ = v___x_932_;
goto v___jp_838_;
}
}
v___jp_933_:
{
lean_object* v___x_950_; 
v___x_950_ = l_Lean_Elab_Command_getRef___redArg(v___y_944_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 1);
v___x_952_ = l_Lean_SourceInfo_fromRef(v_a_951_, v___y_943_);
lean_dec(v_a_951_);
v___x_953_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_944_);
lean_dec_ref(v___y_944_);
if (lean_obj_tag(v___x_953_) == 0)
{
if (lean_obj_tag(v___y_938_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; lean_object* v_a_956_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v___y_941_);
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref(v___x_955_);
v___y_912_ = v___y_934_;
v___y_913_ = v___y_935_;
v___y_914_ = v___y_936_;
v___y_915_ = v___y_937_;
v___y_916_ = v___y_939_;
v___y_917_ = v___y_940_;
v___y_918_ = v___y_942_;
v___y_919_ = v_a_949_;
v___y_920_ = v___y_945_;
v___y_921_ = v___x_952_;
v___y_922_ = v___y_946_;
v___y_923_ = v___y_947_;
v___y_924_ = v_a_954_;
v___y_925_ = v___y_948_;
v_a_926_ = v_a_956_;
goto v___jp_911_;
}
else
{
lean_object* v_a_957_; lean_object* v_val_958_; 
v_a_957_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_957_);
lean_dec_ref_known(v___x_953_, 1);
v_val_958_ = lean_ctor_get(v___y_938_, 0);
lean_inc(v_val_958_);
v___y_912_ = v___y_934_;
v___y_913_ = v___y_935_;
v___y_914_ = v___y_936_;
v___y_915_ = v___y_937_;
v___y_916_ = v___y_939_;
v___y_917_ = v___y_940_;
v___y_918_ = v___y_942_;
v___y_919_ = v_a_949_;
v___y_920_ = v___y_945_;
v___y_921_ = v___x_952_;
v___y_922_ = v___y_946_;
v___y_923_ = v___y_947_;
v___y_924_ = v_a_957_;
v___y_925_ = v___y_948_;
v_a_926_ = v_val_958_;
goto v___jp_911_;
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec(v___x_952_);
lean_dec(v_a_949_);
lean_dec(v___y_948_);
lean_dec(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_942_);
lean_dec(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_934_);
v_a_959_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_953_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_953_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec(v_a_949_);
lean_dec(v___y_948_);
lean_dec(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_942_);
lean_dec(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_934_);
v_a_967_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_950_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_950_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
v___jp_975_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_990_ = l_Lean_Parser_Command_visibility_ofAttrKind(v___y_981_);
v___x_991_ = l_Lean_TSyntax_getId(v___y_987_);
lean_inc(v___x_991_);
v___x_992_ = l_Lean_Elab_Command_resolveSyntaxKind(v___x_991_, v___y_985_, v___y_982_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_994_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_992_, 1);
v___x_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_994_, 0, v_a_993_);
v___y_934_ = v___y_976_;
v___y_935_ = v___y_977_;
v___y_936_ = v___y_989_;
v___y_937_ = v___y_978_;
v___y_938_ = v___y_979_;
v___y_939_ = v___y_980_;
v___y_940_ = v___x_990_;
v___y_941_ = v___y_982_;
v___y_942_ = v___y_983_;
v___y_943_ = v___y_984_;
v___y_944_ = v___y_985_;
v___y_945_ = v___y_986_;
v___y_946_ = v___x_991_;
v___y_947_ = v___y_987_;
v___y_948_ = v___y_988_;
v_a_949_ = v___x_994_;
goto v___jp_933_;
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1004_; 
v_a_995_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_997_ = v___x_992_;
v_isShared_998_ = v_isSharedCheck_1004_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_992_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1004_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
uint8_t v___x_999_; 
v___x_999_ = l_Lean_Exception_isInterrupt(v_a_995_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; 
lean_del_object(v___x_997_);
lean_dec(v_a_995_);
v___x_1000_ = lean_box(0);
v___y_934_ = v___y_976_;
v___y_935_ = v___y_977_;
v___y_936_ = v___y_989_;
v___y_937_ = v___y_978_;
v___y_938_ = v___y_979_;
v___y_939_ = v___y_980_;
v___y_940_ = v___x_990_;
v___y_941_ = v___y_982_;
v___y_942_ = v___y_983_;
v___y_943_ = v___y_984_;
v___y_944_ = v___y_985_;
v___y_945_ = v___y_986_;
v___y_946_ = v___x_991_;
v___y_947_ = v___y_987_;
v___y_948_ = v___y_988_;
v_a_949_ = v___x_1000_;
goto v___jp_933_;
}
else
{
lean_object* v___x_1002_; 
lean_dec(v___x_991_);
lean_dec(v___x_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_983_);
lean_dec(v___y_980_);
lean_dec(v___y_976_);
if (v_isShared_998_ == 0)
{
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_995_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
v___jp_1005_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1022_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__16));
lean_inc_ref(v___y_1017_);
v___x_1023_ = l_Lean_Name_mkStr4(v___x_836_, v___x_837_, v___y_1017_, v___x_1022_);
v___x_1024_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__19));
v___x_1025_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__20));
lean_inc_n(v___y_1016_, 2);
v___x_1026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___y_1016_);
lean_ctor_set(v___x_1026_, 1, v___x_1024_);
lean_inc(v___y_1020_);
v___x_1027_ = l_Lean_Syntax_node2(v___y_1016_, v___x_1025_, v___x_1026_, v___y_1020_);
lean_inc(v___y_1011_);
v___x_1028_ = l_Lean_Syntax_node2(v___y_1016_, v___x_1023_, v___y_1011_, v___x_1027_);
if (lean_obj_tag(v___y_1019_) == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1029_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__21));
v___x_1030_ = lean_mk_empty_array_with_capacity(v___y_1018_);
v___x_1031_ = lean_array_push(v___x_1030_, v___x_1028_);
v___x_1032_ = l_Lean_Syntax_SepArray_ofElems(v___x_1029_, v___x_1031_);
lean_dec_ref(v___x_1031_);
v___y_976_ = v___y_1006_;
v___y_977_ = v___y_1007_;
v___y_978_ = v___y_1008_;
v___y_979_ = v___y_1009_;
v___y_980_ = v___y_1010_;
v___y_981_ = v___y_1011_;
v___y_982_ = v___y_1012_;
v___y_983_ = v___y_1013_;
v___y_984_ = v___y_1014_;
v___y_985_ = v___y_1015_;
v___y_986_ = v___y_1017_;
v___y_987_ = v___y_1020_;
v___y_988_ = v___y_1021_;
v___y_989_ = v___x_1032_;
goto v___jp_975_;
}
else
{
lean_object* v_val_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v_val_1033_ = lean_ctor_get(v___y_1019_, 0);
lean_inc(v_val_1033_);
lean_dec_ref_known(v___y_1019_, 1);
v___x_1034_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__21));
v___x_1035_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_1033_);
lean_dec(v_val_1033_);
v___x_1036_ = lean_array_push(v___x_1035_, v___x_1028_);
v___x_1037_ = l_Lean_Syntax_SepArray_ofElems(v___x_1034_, v___x_1036_);
lean_dec_ref(v___x_1036_);
v___y_976_ = v___y_1006_;
v___y_977_ = v___y_1007_;
v___y_978_ = v___y_1008_;
v___y_979_ = v___y_1009_;
v___y_980_ = v___y_1010_;
v___y_981_ = v___y_1011_;
v___y_982_ = v___y_1012_;
v___y_983_ = v___y_1013_;
v___y_984_ = v___y_1014_;
v___y_985_ = v___y_1015_;
v___y_986_ = v___y_1017_;
v___y_987_ = v___y_1020_;
v___y_988_ = v___y_1021_;
v___y_989_ = v___x_1037_;
goto v___jp_975_;
}
}
v___jp_1038_:
{
lean_object* v___x_1044_; lean_object* v_attrKind_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v___x_1044_ = lean_unsigned_to_nat(2u);
v_attrKind_1045_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_1044_);
v___x_1046_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__2));
v___x_1047_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__8));
lean_inc(v_attrKind_1045_);
v___x_1048_ = l_Lean_Syntax_isOfKind(v_attrKind_1045_, v___x_1047_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; 
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
lean_dec(v_stx_832_);
v___x_1049_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v_tk_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1050_ = lean_unsigned_to_nat(3u);
v_tk_1051_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_1050_);
v___x_1052_ = lean_unsigned_to_nat(4u);
v___x_1053_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_1052_);
lean_inc(v___x_1053_);
v___x_1054_ = l_Lean_Syntax_matchesNull(v___x_1053_, v___x_910_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; uint8_t v___x_1056_; 
v___x_1055_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_1053_);
v___x_1056_ = l_Lean_Syntax_matchesNull(v___x_1053_, v___x_1055_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; 
lean_dec(v___x_1053_);
lean_dec(v_tk_1051_);
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
lean_dec(v_stx_832_);
v___x_1057_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1057_;
}
else
{
lean_object* v___x_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v___x_1058_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_1055_);
lean_dec(v_stx_832_);
v___x_1059_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__6));
lean_inc(v___x_1058_);
v___x_1060_ = l_Lean_Syntax_isOfKind(v___x_1058_, v___x_1059_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_dec(v___x_1058_);
lean_dec(v___x_1053_);
lean_dec(v_tk_1051_);
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
v___x_1061_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1061_;
}
else
{
lean_object* v_kind_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; 
v_kind_1062_ = l_Lean_Syntax_getArg(v___x_1053_, v___x_1050_);
lean_dec(v___x_1053_);
v___x_1063_ = l_Lean_Syntax_getArg(v___x_1058_, v___x_910_);
lean_dec(v___x_1058_);
lean_inc(v___x_1063_);
v___x_1064_ = l_Lean_Syntax_matchesNull(v___x_1063_, v___y_1042_);
if (v___x_1064_ == 0)
{
lean_object* v_alts_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___f_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; 
v_alts_1065_ = l_Lean_Syntax_getArgs(v___x_1063_);
lean_dec(v___x_1063_);
v___x_1066_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_1067_ = lean_box(2);
lean_inc_ref(v_alts_1065_);
v___x_1068_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
lean_ctor_set(v___x_1068_, 1, v___x_1066_);
lean_ctor_set(v___x_1068_, 2, v_alts_1065_);
v___x_1069_ = lean_mk_empty_array_with_capacity(v___x_1044_);
lean_inc(v_tk_1051_);
v___x_1070_ = lean_array_push(v___x_1069_, v_tk_1051_);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_1068_);
v___x_1072_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1067_);
lean_ctor_set(v___x_1072_, 1, v___x_1066_);
lean_ctor_set(v___x_1072_, 2, v___x_1071_);
v___x_1073_ = l_Lean_TSyntax_getId(v_kind_1062_);
lean_dec(v_kind_1062_);
lean_inc(v_attrKind_1045_);
v___f_1074_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1074_, 0, v___x_1072_);
lean_closure_set(v___f_1074_, 1, v___x_1073_);
lean_closure_set(v___f_1074_, 2, v___y_1040_);
lean_closure_set(v___f_1074_, 3, v_attrs_x3f_1043_);
lean_closure_set(v___f_1074_, 4, v_attrKind_1045_);
lean_closure_set(v___f_1074_, 5, v_tk_1051_);
lean_closure_set(v___f_1074_, 6, v_alts_1065_);
v___x_1075_ = l_Lean_Syntax_getArg(v_attrKind_1045_, v___x_910_);
lean_dec(v_attrKind_1045_);
lean_inc(v___x_1075_);
v___x_1076_ = l_Lean_Syntax_matchesNull(v___x_1075_, v___y_1042_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; 
lean_dec(v___x_1075_);
v___x_1077_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1074_, v___x_1060_, v___y_1039_, v___y_1041_);
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1078_ = l_Lean_Syntax_getArg(v___x_1075_, v___x_910_);
lean_dec(v___x_1075_);
v___x_1079_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
v___x_1080_ = l_Lean_Syntax_isOfKind(v___x_1078_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1074_, v___x_1060_, v___y_1039_, v___y_1041_);
return v___x_1081_;
}
else
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1074_, v___x_1064_, v___y_1039_, v___y_1041_);
return v___x_1082_;
}
}
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v___x_1083_ = l_Lean_Syntax_getArg(v___x_1063_, v___x_910_);
v___x_1084_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__11));
lean_inc(v___x_1083_);
v___x_1085_ = l_Lean_Syntax_isOfKind(v___x_1083_, v___x_1084_);
if (v___x_1085_ == 0)
{
lean_object* v_alts_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___f_1095_; lean_object* v___x_1096_; uint8_t v___x_1097_; 
lean_dec(v___x_1083_);
v_alts_1086_ = l_Lean_Syntax_getArgs(v___x_1063_);
lean_dec(v___x_1063_);
v___x_1087_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_1088_ = lean_box(2);
lean_inc_ref(v_alts_1086_);
v___x_1089_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v___x_1087_);
lean_ctor_set(v___x_1089_, 2, v_alts_1086_);
v___x_1090_ = lean_mk_empty_array_with_capacity(v___x_1044_);
lean_inc(v_tk_1051_);
v___x_1091_ = lean_array_push(v___x_1090_, v_tk_1051_);
v___x_1092_ = lean_array_push(v___x_1091_, v___x_1089_);
v___x_1093_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1088_);
lean_ctor_set(v___x_1093_, 1, v___x_1087_);
lean_ctor_set(v___x_1093_, 2, v___x_1092_);
v___x_1094_ = l_Lean_TSyntax_getId(v_kind_1062_);
lean_dec(v_kind_1062_);
lean_inc(v_attrKind_1045_);
v___f_1095_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1095_, 0, v___x_1093_);
lean_closure_set(v___f_1095_, 1, v___x_1094_);
lean_closure_set(v___f_1095_, 2, v___y_1040_);
lean_closure_set(v___f_1095_, 3, v_attrs_x3f_1043_);
lean_closure_set(v___f_1095_, 4, v_attrKind_1045_);
lean_closure_set(v___f_1095_, 5, v_tk_1051_);
lean_closure_set(v___f_1095_, 6, v_alts_1086_);
v___x_1096_ = l_Lean_Syntax_getArg(v_attrKind_1045_, v___x_910_);
lean_dec(v_attrKind_1045_);
lean_inc(v___x_1096_);
v___x_1097_ = l_Lean_Syntax_matchesNull(v___x_1096_, v___y_1042_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; 
lean_dec(v___x_1096_);
v___x_1098_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1095_, v___x_1064_, v___y_1039_, v___y_1041_);
return v___x_1098_;
}
else
{
lean_object* v___x_1099_; lean_object* v___x_1100_; uint8_t v___x_1101_; 
v___x_1099_ = l_Lean_Syntax_getArg(v___x_1096_, v___x_910_);
lean_dec(v___x_1096_);
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
v___x_1101_ = l_Lean_Syntax_isOfKind(v___x_1099_, v___x_1100_);
if (v___x_1101_ == 0)
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1095_, v___x_1064_, v___y_1039_, v___y_1041_);
return v___x_1102_;
}
else
{
lean_object* v___x_1103_; 
v___x_1103_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1095_, v___x_1085_, v___y_1039_, v___y_1041_);
return v___x_1103_;
}
}
}
else
{
lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1104_ = l_Lean_Syntax_getArg(v___x_1083_, v___y_1042_);
lean_inc(v___x_1104_);
v___x_1105_ = l_Lean_Syntax_matchesNull(v___x_1104_, v___y_1042_);
if (v___x_1105_ == 0)
{
lean_object* v_alts_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___f_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; 
lean_dec(v___x_1104_);
lean_dec(v___x_1083_);
v_alts_1106_ = l_Lean_Syntax_getArgs(v___x_1063_);
lean_dec(v___x_1063_);
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_1108_ = lean_box(2);
lean_inc_ref(v_alts_1106_);
v___x_1109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
lean_ctor_set(v___x_1109_, 1, v___x_1107_);
lean_ctor_set(v___x_1109_, 2, v_alts_1106_);
v___x_1110_ = lean_mk_empty_array_with_capacity(v___x_1044_);
lean_inc(v_tk_1051_);
v___x_1111_ = lean_array_push(v___x_1110_, v_tk_1051_);
v___x_1112_ = lean_array_push(v___x_1111_, v___x_1109_);
v___x_1113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1108_);
lean_ctor_set(v___x_1113_, 1, v___x_1107_);
lean_ctor_set(v___x_1113_, 2, v___x_1112_);
v___x_1114_ = l_Lean_TSyntax_getId(v_kind_1062_);
lean_dec(v_kind_1062_);
lean_inc(v_attrKind_1045_);
v___f_1115_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1115_, 0, v___x_1113_);
lean_closure_set(v___f_1115_, 1, v___x_1114_);
lean_closure_set(v___f_1115_, 2, v___y_1040_);
lean_closure_set(v___f_1115_, 3, v_attrs_x3f_1043_);
lean_closure_set(v___f_1115_, 4, v_attrKind_1045_);
lean_closure_set(v___f_1115_, 5, v_tk_1051_);
lean_closure_set(v___f_1115_, 6, v_alts_1106_);
v___x_1116_ = l_Lean_Syntax_getArg(v_attrKind_1045_, v___x_910_);
lean_dec(v_attrKind_1045_);
lean_inc(v___x_1116_);
v___x_1117_ = l_Lean_Syntax_matchesNull(v___x_1116_, v___y_1042_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; 
lean_dec(v___x_1116_);
v___x_1118_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1115_, v___x_1085_, v___y_1039_, v___y_1041_);
return v___x_1118_;
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1119_ = l_Lean_Syntax_getArg(v___x_1116_, v___x_910_);
lean_dec(v___x_1116_);
v___x_1120_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
v___x_1121_ = l_Lean_Syntax_isOfKind(v___x_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1115_, v___x_1085_, v___y_1039_, v___y_1041_);
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1115_, v___x_1105_, v___y_1039_, v___y_1041_);
return v___x_1123_;
}
}
}
else
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1124_ = l_Lean_Syntax_getArg(v___x_1104_, v___x_910_);
lean_dec(v___x_1104_);
lean_inc(v___x_1124_);
v___x_1125_ = l_Lean_Syntax_matchesNull(v___x_1124_, v___y_1042_);
if (v___x_1125_ == 0)
{
lean_object* v_alts_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___f_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; 
lean_dec(v___x_1124_);
lean_dec(v___x_1083_);
v_alts_1126_ = l_Lean_Syntax_getArgs(v___x_1063_);
lean_dec(v___x_1063_);
v___x_1127_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_1128_ = lean_box(2);
lean_inc_ref(v_alts_1126_);
v___x_1129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
lean_ctor_set(v___x_1129_, 1, v___x_1127_);
lean_ctor_set(v___x_1129_, 2, v_alts_1126_);
v___x_1130_ = lean_mk_empty_array_with_capacity(v___x_1044_);
lean_inc(v_tk_1051_);
v___x_1131_ = lean_array_push(v___x_1130_, v_tk_1051_);
v___x_1132_ = lean_array_push(v___x_1131_, v___x_1129_);
v___x_1133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1128_);
lean_ctor_set(v___x_1133_, 1, v___x_1127_);
lean_ctor_set(v___x_1133_, 2, v___x_1132_);
v___x_1134_ = l_Lean_TSyntax_getId(v_kind_1062_);
lean_dec(v_kind_1062_);
lean_inc(v_attrKind_1045_);
v___f_1135_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1135_, 0, v___x_1133_);
lean_closure_set(v___f_1135_, 1, v___x_1134_);
lean_closure_set(v___f_1135_, 2, v___y_1040_);
lean_closure_set(v___f_1135_, 3, v_attrs_x3f_1043_);
lean_closure_set(v___f_1135_, 4, v_attrKind_1045_);
lean_closure_set(v___f_1135_, 5, v_tk_1051_);
lean_closure_set(v___f_1135_, 6, v_alts_1126_);
v___x_1136_ = l_Lean_Syntax_getArg(v_attrKind_1045_, v___x_910_);
lean_dec(v_attrKind_1045_);
lean_inc(v___x_1136_);
v___x_1137_ = l_Lean_Syntax_matchesNull(v___x_1136_, v___y_1042_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; 
lean_dec(v___x_1136_);
v___x_1138_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1135_, v___x_1105_, v___y_1039_, v___y_1041_);
return v___x_1138_;
}
else
{
lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1139_ = l_Lean_Syntax_getArg(v___x_1136_, v___x_910_);
lean_dec(v___x_1136_);
v___x_1140_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
v___x_1141_ = l_Lean_Syntax_isOfKind(v___x_1139_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1135_, v___x_1105_, v___y_1039_, v___y_1041_);
return v___x_1142_;
}
else
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1135_, v___x_1125_, v___y_1039_, v___y_1041_);
return v___x_1143_;
}
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1144_ = l_Lean_Syntax_getArg(v___x_1124_, v___x_910_);
lean_dec(v___x_1124_);
v___x_1145_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__12));
lean_inc(v___x_1144_);
v___x_1146_ = l_Lean_Syntax_isOfKind(v___x_1144_, v___x_1145_);
if (v___x_1146_ == 0)
{
lean_object* v_alts_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___f_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; 
lean_dec(v___x_1144_);
lean_dec(v___x_1083_);
v_alts_1147_ = l_Lean_Syntax_getArgs(v___x_1063_);
lean_dec(v___x_1063_);
v___x_1148_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_1149_ = lean_box(2);
lean_inc_ref(v_alts_1147_);
v___x_1150_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v___x_1148_);
lean_ctor_set(v___x_1150_, 2, v_alts_1147_);
v___x_1151_ = lean_mk_empty_array_with_capacity(v___x_1044_);
lean_inc(v_tk_1051_);
v___x_1152_ = lean_array_push(v___x_1151_, v_tk_1051_);
v___x_1153_ = lean_array_push(v___x_1152_, v___x_1150_);
v___x_1154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1149_);
lean_ctor_set(v___x_1154_, 1, v___x_1148_);
lean_ctor_set(v___x_1154_, 2, v___x_1153_);
v___x_1155_ = l_Lean_TSyntax_getId(v_kind_1062_);
lean_dec(v_kind_1062_);
lean_inc(v_attrKind_1045_);
v___f_1156_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__0___boxed), 10, 7);
lean_closure_set(v___f_1156_, 0, v___x_1154_);
lean_closure_set(v___f_1156_, 1, v___x_1155_);
lean_closure_set(v___f_1156_, 2, v___y_1040_);
lean_closure_set(v___f_1156_, 3, v_attrs_x3f_1043_);
lean_closure_set(v___f_1156_, 4, v_attrKind_1045_);
lean_closure_set(v___f_1156_, 5, v_tk_1051_);
lean_closure_set(v___f_1156_, 6, v_alts_1147_);
v___x_1157_ = l_Lean_Syntax_getArg(v_attrKind_1045_, v___x_910_);
lean_dec(v_attrKind_1045_);
lean_inc(v___x_1157_);
v___x_1158_ = l_Lean_Syntax_matchesNull(v___x_1157_, v___y_1042_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; 
lean_dec(v___x_1157_);
v___x_1159_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1156_, v___x_1125_, v___y_1039_, v___y_1041_);
return v___x_1159_;
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1160_ = l_Lean_Syntax_getArg(v___x_1157_, v___x_910_);
lean_dec(v___x_1157_);
v___x_1161_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__10));
v___x_1162_ = l_Lean_Syntax_isOfKind(v___x_1160_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1156_, v___x_1125_, v___y_1039_, v___y_1041_);
return v___x_1163_;
}
else
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabMacroRules_spec__1___redArg(v___f_1156_, v___x_1146_, v___y_1039_, v___y_1041_);
return v___x_1164_;
}
}
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
lean_dec(v___x_1063_);
v___x_1165_ = l_Lean_Syntax_getArg(v___x_1083_, v___x_1050_);
lean_dec(v___x_1083_);
v___x_1166_ = lean_mk_empty_array_with_capacity(v___x_1044_);
lean_inc(v_tk_1051_);
v___x_1167_ = lean_array_push(v___x_1166_, v_tk_1051_);
lean_inc(v___x_1165_);
v___x_1168_ = lean_array_push(v___x_1167_, v___x_1165_);
v___x_1169_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___x_1170_ = lean_box(2);
v___x_1171_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v___x_1169_);
lean_ctor_set(v___x_1171_, 2, v___x_1168_);
v___x_1172_ = l_Lean_Elab_Command_getRef___redArg(v___y_1039_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v_fileName_1174_; lean_object* v_fileMap_1175_; lean_object* v_currRecDepth_1176_; lean_object* v_cmdPos_1177_; lean_object* v_macroStack_1178_; lean_object* v_quotContext_x3f_1179_; lean_object* v_currMacroScope_1180_; lean_object* v_snap_x3f_1181_; lean_object* v_cancelTk_x3f_1182_; uint8_t v_suppressElabErrors_1183_; uint8_t v_checkDeprecated_1184_; lean_object* v_ref_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v_fileName_1174_ = lean_ctor_get(v___y_1039_, 0);
v_fileMap_1175_ = lean_ctor_get(v___y_1039_, 1);
v_currRecDepth_1176_ = lean_ctor_get(v___y_1039_, 2);
v_cmdPos_1177_ = lean_ctor_get(v___y_1039_, 3);
v_macroStack_1178_ = lean_ctor_get(v___y_1039_, 4);
v_quotContext_x3f_1179_ = lean_ctor_get(v___y_1039_, 5);
v_currMacroScope_1180_ = lean_ctor_get(v___y_1039_, 6);
v_snap_x3f_1181_ = lean_ctor_get(v___y_1039_, 8);
v_cancelTk_x3f_1182_ = lean_ctor_get(v___y_1039_, 9);
v_suppressElabErrors_1183_ = lean_ctor_get_uint8(v___y_1039_, sizeof(void*)*10);
v_checkDeprecated_1184_ = lean_ctor_get_uint8(v___y_1039_, sizeof(void*)*10 + 1);
v_ref_1185_ = l_Lean_replaceRef(v___x_1171_, v_a_1173_);
lean_dec(v_a_1173_);
lean_dec_ref_known(v___x_1171_, 3);
lean_inc(v_cancelTk_x3f_1182_);
lean_inc(v_snap_x3f_1181_);
lean_inc(v_currMacroScope_1180_);
lean_inc(v_quotContext_x3f_1179_);
lean_inc(v_macroStack_1178_);
lean_inc(v_cmdPos_1177_);
lean_inc(v_currRecDepth_1176_);
lean_inc_ref(v_fileMap_1175_);
lean_inc_ref(v_fileName_1174_);
v___x_1186_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1186_, 0, v_fileName_1174_);
lean_ctor_set(v___x_1186_, 1, v_fileMap_1175_);
lean_ctor_set(v___x_1186_, 2, v_currRecDepth_1176_);
lean_ctor_set(v___x_1186_, 3, v_cmdPos_1177_);
lean_ctor_set(v___x_1186_, 4, v_macroStack_1178_);
lean_ctor_set(v___x_1186_, 5, v_quotContext_x3f_1179_);
lean_ctor_set(v___x_1186_, 6, v_currMacroScope_1180_);
lean_ctor_set(v___x_1186_, 7, v_ref_1185_);
lean_ctor_set(v___x_1186_, 8, v_snap_x3f_1181_);
lean_ctor_set(v___x_1186_, 9, v_cancelTk_x3f_1182_);
lean_ctor_set_uint8(v___x_1186_, sizeof(void*)*10, v_suppressElabErrors_1183_);
lean_ctor_set_uint8(v___x_1186_, sizeof(void*)*10 + 1, v_checkDeprecated_1184_);
v___x_1187_ = l_Lean_Elab_Command_getRef___redArg(v___x_1186_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v_a_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v_a_1188_ = lean_ctor_get(v___x_1187_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v___x_1187_, 1);
v___x_1189_ = l_Lean_SourceInfo_fromRef(v_a_1188_, v___x_1054_);
lean_dec(v_a_1188_);
v___x_1190_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___x_1186_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_dec_ref_known(v___x_1190_, 1);
if (lean_obj_tag(v_quotContext_x3f_1179_) == 0)
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkMacroRulesFun_spec__1___redArg(v___y_1041_);
lean_dec_ref(v___x_1191_);
v___y_1006_ = v_tk_1051_;
v___y_1007_ = v___x_1146_;
v___y_1008_ = v___x_1169_;
v___y_1009_ = v_quotContext_x3f_1179_;
v___y_1010_ = v___x_1144_;
v___y_1011_ = v_attrKind_1045_;
v___y_1012_ = v___y_1041_;
v___y_1013_ = v___y_1040_;
v___y_1014_ = v___x_1054_;
v___y_1015_ = v___x_1186_;
v___y_1016_ = v___x_1189_;
v___y_1017_ = v___x_1046_;
v___y_1018_ = v___y_1042_;
v___y_1019_ = v_attrs_x3f_1043_;
v___y_1020_ = v_kind_1062_;
v___y_1021_ = v___x_1165_;
goto v___jp_1005_;
}
else
{
v___y_1006_ = v_tk_1051_;
v___y_1007_ = v___x_1146_;
v___y_1008_ = v___x_1169_;
v___y_1009_ = v_quotContext_x3f_1179_;
v___y_1010_ = v___x_1144_;
v___y_1011_ = v_attrKind_1045_;
v___y_1012_ = v___y_1041_;
v___y_1013_ = v___y_1040_;
v___y_1014_ = v___x_1054_;
v___y_1015_ = v___x_1186_;
v___y_1016_ = v___x_1189_;
v___y_1017_ = v___x_1046_;
v___y_1018_ = v___y_1042_;
v___y_1019_ = v_attrs_x3f_1043_;
v___y_1020_ = v_kind_1062_;
v___y_1021_ = v___x_1165_;
goto v___jp_1005_;
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec(v___x_1189_);
lean_dec_ref_known(v___x_1186_, 10);
lean_dec(v___x_1165_);
lean_dec(v___x_1144_);
lean_dec(v_kind_1062_);
lean_dec(v_tk_1051_);
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
v_a_1192_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1190_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref_known(v___x_1186_, 10);
lean_dec(v___x_1165_);
lean_dec(v___x_1144_);
lean_dec(v_kind_1062_);
lean_dec(v_tk_1051_);
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
v_a_1200_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1187_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1187_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
else
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
lean_dec_ref_known(v___x_1171_, 3);
lean_dec(v___x_1165_);
lean_dec(v___x_1144_);
lean_dec(v_kind_1062_);
lean_dec(v_tk_1051_);
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
v_a_1208_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1172_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1172_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
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
else
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; 
lean_dec(v___x_1053_);
v___x_1216_ = lean_unsigned_to_nat(5u);
v___x_1217_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_1216_);
lean_dec(v_stx_832_);
v___x_1218_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__6));
lean_inc(v___x_1217_);
v___x_1219_ = l_Lean_Syntax_isOfKind(v___x_1217_, v___x_1218_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; 
lean_dec(v___x_1217_);
lean_dec(v_tk_1051_);
lean_dec(v_attrKind_1045_);
lean_dec(v_attrs_x3f_1043_);
lean_dec(v___y_1040_);
v___x_1220_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1220_;
}
else
{
lean_object* v___x_1221_; lean_object* v_alts_1222_; lean_object* v___x_1223_; lean_object* v___f_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1221_ = l_Lean_Syntax_getArg(v___x_1217_, v___x_910_);
lean_dec(v___x_1217_);
v_alts_1222_ = l_Lean_Syntax_getArgs(v___x_1221_);
lean_dec(v___x_1221_);
v___x_1223_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__8));
v___f_1224_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___lam__5___boxed), 16, 11);
lean_closure_set(v___f_1224_, 0, v___x_1223_);
lean_closure_set(v___f_1224_, 1, v___x_1218_);
lean_closure_set(v___f_1224_, 2, v___x_907_);
lean_closure_set(v___f_1224_, 3, v_attrKind_1045_);
lean_closure_set(v___f_1224_, 4, v___x_906_);
lean_closure_set(v___f_1224_, 5, v___x_910_);
lean_closure_set(v___f_1224_, 6, v_attrs_x3f_1043_);
lean_closure_set(v___f_1224_, 7, v___x_836_);
lean_closure_set(v___f_1224_, 8, v___x_837_);
lean_closure_set(v___f_1224_, 9, v___x_1046_);
lean_closure_set(v___f_1224_, 10, v___y_1040_);
v___x_1225_ = lean_box(2);
lean_inc_ref(v_alts_1222_);
v___x_1226_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v___x_1223_);
lean_ctor_set(v___x_1226_, 2, v_alts_1222_);
v___x_1227_ = lean_mk_empty_array_with_capacity(v___x_1044_);
v___x_1228_ = lean_array_push(v___x_1227_, v_tk_1051_);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1226_);
v___x_1230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1225_);
lean_ctor_set(v___x_1230_, 1, v___x_1223_);
lean_ctor_set(v___x_1230_, 2, v___x_1229_);
v___x_1231_ = l_Lean_Elab_Command_getRef___redArg(v___y_1039_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v_fileName_1233_; lean_object* v_fileMap_1234_; lean_object* v_currRecDepth_1235_; lean_object* v_cmdPos_1236_; lean_object* v_macroStack_1237_; lean_object* v_quotContext_x3f_1238_; lean_object* v_currMacroScope_1239_; lean_object* v_snap_x3f_1240_; lean_object* v_cancelTk_x3f_1241_; uint8_t v_suppressElabErrors_1242_; uint8_t v_checkDeprecated_1243_; lean_object* v_ref_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1231_, 1);
v_fileName_1233_ = lean_ctor_get(v___y_1039_, 0);
v_fileMap_1234_ = lean_ctor_get(v___y_1039_, 1);
v_currRecDepth_1235_ = lean_ctor_get(v___y_1039_, 2);
v_cmdPos_1236_ = lean_ctor_get(v___y_1039_, 3);
v_macroStack_1237_ = lean_ctor_get(v___y_1039_, 4);
v_quotContext_x3f_1238_ = lean_ctor_get(v___y_1039_, 5);
v_currMacroScope_1239_ = lean_ctor_get(v___y_1039_, 6);
v_snap_x3f_1240_ = lean_ctor_get(v___y_1039_, 8);
v_cancelTk_x3f_1241_ = lean_ctor_get(v___y_1039_, 9);
v_suppressElabErrors_1242_ = lean_ctor_get_uint8(v___y_1039_, sizeof(void*)*10);
v_checkDeprecated_1243_ = lean_ctor_get_uint8(v___y_1039_, sizeof(void*)*10 + 1);
v_ref_1244_ = l_Lean_replaceRef(v___x_1230_, v_a_1232_);
lean_dec(v_a_1232_);
lean_dec_ref_known(v___x_1230_, 3);
lean_inc(v_cancelTk_x3f_1241_);
lean_inc(v_snap_x3f_1240_);
lean_inc(v_currMacroScope_1239_);
lean_inc(v_quotContext_x3f_1238_);
lean_inc(v_macroStack_1237_);
lean_inc(v_cmdPos_1236_);
lean_inc(v_currRecDepth_1235_);
lean_inc_ref(v_fileMap_1234_);
lean_inc_ref(v_fileName_1233_);
v___x_1245_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1245_, 0, v_fileName_1233_);
lean_ctor_set(v___x_1245_, 1, v_fileMap_1234_);
lean_ctor_set(v___x_1245_, 2, v_currRecDepth_1235_);
lean_ctor_set(v___x_1245_, 3, v_cmdPos_1236_);
lean_ctor_set(v___x_1245_, 4, v_macroStack_1237_);
lean_ctor_set(v___x_1245_, 5, v_quotContext_x3f_1238_);
lean_ctor_set(v___x_1245_, 6, v_currMacroScope_1239_);
lean_ctor_set(v___x_1245_, 7, v_ref_1244_);
lean_ctor_set(v___x_1245_, 8, v_snap_x3f_1240_);
lean_ctor_set(v___x_1245_, 9, v_cancelTk_x3f_1241_);
lean_ctor_set_uint8(v___x_1245_, sizeof(void*)*10, v_suppressElabErrors_1242_);
lean_ctor_set_uint8(v___x_1245_, sizeof(void*)*10 + 1, v_checkDeprecated_1243_);
v___x_1246_ = l_Lean_Elab_Command_expandNoKindMacroRulesAux(v_alts_1222_, v___x_906_, v___f_1224_, v___x_1245_, v___y_1041_);
lean_dec_ref_known(v___x_1245_, 10);
lean_dec_ref(v_alts_1222_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1256_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1256_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1256_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1251_ = lean_box(0);
v___x_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
lean_ctor_set(v___x_1252_, 1, v_a_1247_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v___x_1252_);
v___x_1254_ = v___x_1249_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1252_);
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
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1246_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1246_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec_ref_known(v___x_1230_, 3);
lean_dec_ref(v___f_1224_);
lean_dec_ref(v_alts_1222_);
v_a_1265_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1231_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1231_);
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
}
}
}
v___jp_1273_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; 
v___x_1277_ = lean_unsigned_to_nat(1u);
v___x_1278_ = l_Lean_Syntax_getArg(v_stx_832_, v___x_1277_);
v___x_1279_ = l_Lean_Syntax_isNone(v___x_1278_);
if (v___x_1279_ == 0)
{
uint8_t v___x_1280_; 
lean_inc(v___x_1278_);
v___x_1280_ = l_Lean_Syntax_matchesNull(v___x_1278_, v___x_1277_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
lean_dec(v___x_1278_);
lean_dec(v_doc_x3f_1274_);
lean_dec(v_stx_832_);
v___x_1281_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1281_;
}
else
{
lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v___x_1282_ = l_Lean_Syntax_getArg(v___x_1278_, v___x_910_);
lean_dec(v___x_1278_);
v___x_1283_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__13));
lean_inc(v___x_1282_);
v___x_1284_ = l_Lean_Syntax_isOfKind(v___x_1282_, v___x_1283_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; 
lean_dec(v___x_1282_);
lean_dec(v_doc_x3f_1274_);
lean_dec(v_stx_832_);
v___x_1285_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabMacroRules_spec__0___redArg();
return v___x_1285_;
}
else
{
lean_object* v___x_1286_; lean_object* v_attrs_x3f_1287_; lean_object* v___x_1288_; 
v___x_1286_ = l_Lean_Syntax_getArg(v___x_1282_, v___x_1277_);
lean_dec(v___x_1282_);
v_attrs_x3f_1287_ = l_Lean_Syntax_getArgs(v___x_1286_);
lean_dec(v___x_1286_);
v___x_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1288_, 0, v_attrs_x3f_1287_);
v___y_1039_ = v___y_1275_;
v___y_1040_ = v_doc_x3f_1274_;
v___y_1041_ = v___y_1276_;
v___y_1042_ = v___x_1277_;
v_attrs_x3f_1043_ = v___x_1288_;
goto v___jp_1038_;
}
}
}
else
{
lean_object* v___x_1289_; 
lean_dec(v___x_1278_);
v___x_1289_ = lean_box(0);
v___y_1039_ = v___y_1275_;
v___y_1040_ = v_doc_x3f_1274_;
v___y_1041_ = v___y_1276_;
v___y_1042_ = v___x_1277_;
v_attrs_x3f_1043_ = v___x_1289_;
goto v___jp_1038_;
}
}
}
v___jp_838_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
lean_inc_ref_n(v___y_848_, 3);
v___x_857_ = l_Array_append___redArg(v___y_848_, v___y_856_);
lean_dec_ref(v___y_856_);
lean_inc_n(v___y_843_, 6);
lean_inc_n(v___y_850_, 17);
v___x_858_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_858_, 0, v___y_850_);
lean_ctor_set(v___x_858_, 1, v___y_843_);
lean_ctor_set(v___x_858_, 2, v___x_857_);
v___x_859_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__1));
lean_inc_ref_n(v___y_849_, 2);
v___x_860_ = l_Lean_Name_mkStr4(v___x_836_, v___x_837_, v___y_849_, v___x_859_);
v___x_861_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__2));
v___x_862_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_862_, 0, v___y_850_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = l_Array_append___redArg(v___y_848_, v___y_842_);
lean_dec_ref(v___y_842_);
v___x_864_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_864_, 0, v___y_850_);
lean_ctor_set(v___x_864_, 1, v___y_843_);
lean_ctor_set(v___x_864_, 2, v___x_863_);
v___x_865_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__3));
v___x_866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_866_, 0, v___y_850_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v___x_867_ = l_Lean_Syntax_node3(v___y_850_, v___x_860_, v___x_862_, v___x_864_, v___x_866_);
v___x_868_ = l_Lean_Syntax_node1(v___y_850_, v___y_843_, v___x_867_);
lean_inc_ref(v___y_839_);
v___x_869_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_869_, 0, v___y_850_);
lean_ctor_set(v___x_869_, 1, v___y_839_);
v___x_870_ = l_Lean_mkIdentFrom(v___y_840_, v___y_851_, v___y_841_);
lean_dec(v___y_840_);
v___x_871_ = l_Lean_Syntax_node2(v___y_850_, v___y_843_, v___x_870_, v___y_852_);
v___x_872_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__7));
v___x_873_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_873_, 0, v___y_850_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = lean_obj_once(&l_Lean_Elab_Command_elabMacroRulesAux___closed__8, &l_Lean_Elab_Command_elabMacroRulesAux___closed__8_once, _init_l_Lean_Elab_Command_elabMacroRulesAux___closed__8);
v___x_875_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__9));
v___x_876_ = l_Lean_addMacroScope(v___y_853_, v___x_875_, v___y_854_);
v___x_877_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__4));
v___x_878_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_878_, 0, v___y_850_);
lean_ctor_set(v___x_878_, 1, v___x_874_);
lean_ctor_set(v___x_878_, 2, v___x_876_);
lean_ctor_set(v___x_878_, 3, v___x_877_);
v___x_879_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRulesAux___closed__10));
v___x_880_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_880_, 0, v___y_850_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__3));
v___x_882_ = l_Lean_Name_mkStr4(v___x_836_, v___x_837_, v___y_849_, v___x_881_);
v___x_883_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_883_, 0, v___y_850_);
lean_ctor_set(v___x_883_, 1, v___x_881_);
v___x_884_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__5));
v___x_885_ = l_Lean_Name_mkStr4(v___x_836_, v___x_837_, v___y_849_, v___x_884_);
v___x_886_ = l_Lean_Syntax_node1(v___y_850_, v___y_843_, v___y_844_);
v___x_887_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_887_, 0, v___y_850_);
lean_ctor_set(v___x_887_, 1, v___y_843_);
lean_ctor_set(v___x_887_, 2, v___y_848_);
v___x_888_ = ((lean_object*)(l_Lean_Elab_Command_mkMacroRulesFun___closed__16));
v___x_889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_889_, 0, v___y_850_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = l_Lean_Syntax_node4(v___y_850_, v___x_885_, v___x_886_, v___x_887_, v___x_889_, v___y_855_);
v___x_891_ = l_Lean_Syntax_node2(v___y_850_, v___x_882_, v___x_883_, v___x_890_);
v___x_892_ = lean_unsigned_to_nat(9u);
v___x_893_ = lean_mk_empty_array_with_capacity(v___x_892_);
v___x_894_ = lean_array_push(v___x_893_, v___x_858_);
v___x_895_ = lean_array_push(v___x_894_, v___x_868_);
v___x_896_ = lean_array_push(v___x_895_, v___y_846_);
v___x_897_ = lean_array_push(v___x_896_, v___x_869_);
v___x_898_ = lean_array_push(v___x_897_, v___x_871_);
v___x_899_ = lean_array_push(v___x_898_, v___x_873_);
v___x_900_ = lean_array_push(v___x_899_, v___x_878_);
v___x_901_ = lean_array_push(v___x_900_, v___x_880_);
v___x_902_ = lean_array_push(v___x_901_, v___x_891_);
lean_inc(v___y_845_);
v___x_903_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_903_, 0, v___y_850_);
lean_ctor_set(v___x_903_, 1, v___y_845_);
lean_ctor_set(v___x_903_, 2, v___x_902_);
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v___y_847_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___lam__1___boxed(lean_object* v_stx_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_Elab_Command_elabMacroRules___lam__1(v_stx_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules(lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v___f_1311_; lean_object* v___x_1312_; 
v___f_1311_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___closed__0));
v___x_1312_ = l_Lean_Elab_Command_adaptRulesExpander(v___f_1311_, v_a_1307_, v_a_1308_, v_a_1309_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabMacroRules___boxed(lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_Elab_Command_elabMacroRules(v_a_1313_, v_a_1314_, v_a_1315_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1(){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1325_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1326_ = ((lean_object*)(l_Lean_Elab_Command_elabMacroRules___lam__1___closed__6));
v___x_1327_ = ((lean_object*)(l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1));
v___x_1328_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMacroRules___boxed), 4, 0);
v___x_1329_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1325_, v___x_1326_, v___x_1327_, v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___boxed(lean_object* v_a_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1();
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3(){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = ((lean_object*)(l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1___closed__1));
v___x_1359_ = ((lean_object*)(l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___closed__6));
v___x_1360_ = l_Lean_addBuiltinDeclarationRanges(v___x_1358_, v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3___boxed(lean_object* v_a_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3();
return v_res_1362_;
}
}
lean_object* runtime_initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_MacroRules(uint8_t builtin) {
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
res = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_MacroRules_0__Lean_Elab_Command_elabMacroRules___regBuiltin_Lean_Elab_Command_elabMacroRules_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_MacroRules(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_MacroRules(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_MacroRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_MacroRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_MacroRules(builtin);
}
#ifdef __cplusplus
}
#endif
