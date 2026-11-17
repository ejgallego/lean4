// Lean compiler output
// Module: Lean.Elab.DeprecatedSyntax.FormatReplacement
// Imports: public import Lean.CoreM import Lean.Meta.TryThis import Lean.PrettyPrinter.Formatter import Lean.PrettyPrinter.Parenthesizer
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_parseTokenCore(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_needsTokenSeparator(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizeCategoryCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences___closed__0 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_bindsAsTightly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_bindsAsTightly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__0 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__1 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__4 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__4_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__5 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__5_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__7 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__7_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__8 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__10 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__10_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__12 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__13 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__13_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__14 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__14_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__15 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__15_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__17 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__15_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__19 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__19_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__20 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__20_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__21 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__21_value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__22;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__23 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__23_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "DeprecatedSyntax"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__24 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__23_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__24_value),LEAN_SCALAR_PTR_LITERAL(10, 222, 164, 70, 82, 80, 248, 201)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__25_value)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__26 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__27 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__27_value;
static const lean_string_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__28 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__28_value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__28_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__29 = (const lean_object*)&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__29_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__0 = (const lean_object*)&l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__0_value;
static const lean_string_object l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__1 = (const lean_object*)&l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DeprecatedSyntax_formatReplacement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DeprecatedSyntax_formatReplacement___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences(lean_object* v_cat_4_, lean_object* v_stx_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = lean_box(0);
v___x_11_ = 0;
v___x_12_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences___closed__0));
v___x_13_ = l_Lean_Syntax_Traverser_fromSyntax(v_stx_5_);
v___x_14_ = lean_box(0);
v___x_15_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_15_, 0, v___x_13_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
lean_ctor_set(v___x_15_, 2, v___x_10_);
lean_ctor_set(v___x_15_, 3, v___x_14_);
lean_ctor_set(v___x_15_, 4, v___x_14_);
lean_ctor_set(v___x_15_, 5, v___x_10_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*6, v___x_11_);
v___x_16_ = lean_st_mk_ref(v___x_15_);
v___x_17_ = l_Lean_PrettyPrinter_Parenthesizer_parenthesizeCategoryCore(v_cat_4_, v___x_9_, v___x_12_, v___x_16_, v_a_6_, v_a_7_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_30_; 
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_30_ == 0)
{
lean_object* v_unused_31_; 
v_unused_31_ = lean_ctor_get(v___x_17_, 0);
lean_dec(v_unused_31_);
v___x_19_ = v___x_17_;
v_isShared_20_ = v_isSharedCheck_30_;
goto v_resetjp_18_;
}
else
{
lean_dec(v___x_17_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_30_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v_minPrec_22_; lean_object* v_trailPrec_23_; lean_object* v_trailCat_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_21_ = lean_st_ref_get(v___x_16_);
lean_dec(v___x_16_);
v_minPrec_22_ = lean_ctor_get(v___x_21_, 3);
lean_inc(v_minPrec_22_);
v_trailPrec_23_ = lean_ctor_get(v___x_21_, 4);
lean_inc(v_trailPrec_23_);
v_trailCat_24_ = lean_ctor_get(v___x_21_, 5);
lean_inc(v_trailCat_24_);
lean_dec(v___x_21_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v_trailPrec_23_);
lean_ctor_set(v___x_25_, 1, v_trailCat_24_);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v_minPrec_22_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 0, v___x_26_);
v___x_28_ = v___x_19_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
lean_dec(v___x_16_);
v_a_32_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_17_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_17_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_32_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences___boxed(lean_object* v_cat_40_, lean_object* v_stx_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences(v_cat_40_, v_stx_41_, v_a_42_, v_a_43_);
lean_dec(v_a_43_);
lean_dec_ref(v_a_42_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_bindsAsTightly(lean_object* v_cat_46_, lean_object* v_stx_47_, lean_object* v_newStx_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_52_; 
lean_inc(v_cat_46_);
v___x_52_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences(v_cat_46_, v_stx_47_, v_a_49_, v_a_50_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v_snd_54_; lean_object* v_fst_55_; lean_object* v_fst_56_; lean_object* v_snd_57_; lean_object* v___x_58_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc(v_a_53_);
lean_dec_ref_known(v___x_52_, 1);
v_snd_54_ = lean_ctor_get(v_a_53_, 1);
lean_inc(v_snd_54_);
v_fst_55_ = lean_ctor_get(v_a_53_, 0);
lean_inc(v_fst_55_);
lean_dec(v_a_53_);
v_fst_56_ = lean_ctor_get(v_snd_54_, 0);
lean_inc(v_fst_56_);
v_snd_57_ = lean_ctor_get(v_snd_54_, 1);
lean_inc(v_snd_57_);
lean_dec(v_snd_54_);
v___x_58_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_syntaxPrecedences(v_cat_46_, v_newStx_48_, v_a_49_, v_a_50_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v_a_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_95_; 
v_a_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_95_ == 0)
{
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_95_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_a_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_95_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
uint8_t v___y_64_; lean_object* v___y_65_; lean_object* v___y_66_; lean_object* v_fst_76_; lean_object* v_snd_77_; uint8_t v___y_79_; lean_object* v___y_80_; uint8_t v___y_84_; lean_object* v_fst_87_; 
v_fst_76_ = lean_ctor_get(v_a_59_, 0);
lean_inc(v_fst_76_);
v_snd_77_ = lean_ctor_get(v_a_59_, 1);
lean_inc(v_snd_77_);
lean_dec(v_a_59_);
v_fst_87_ = lean_ctor_get(v_snd_77_, 0);
lean_inc(v_fst_87_);
if (lean_obj_tag(v_fst_87_) == 0)
{
uint8_t v___x_88_; 
lean_dec(v_snd_77_);
lean_dec(v_snd_57_);
lean_dec(v_fst_56_);
v___x_88_ = 1;
v___y_84_ = v___x_88_;
goto v___jp_83_;
}
else
{
if (lean_obj_tag(v_fst_56_) == 0)
{
uint8_t v___x_89_; 
lean_dec_ref_known(v_fst_87_, 1);
lean_dec(v_snd_77_);
lean_dec(v_snd_57_);
v___x_89_ = 0;
v___y_84_ = v___x_89_;
goto v___jp_83_;
}
else
{
lean_object* v_snd_90_; lean_object* v_val_91_; lean_object* v_val_92_; uint8_t v___x_93_; 
v_snd_90_ = lean_ctor_get(v_snd_77_, 1);
lean_inc(v_snd_90_);
lean_dec(v_snd_77_);
v_val_91_ = lean_ctor_get(v_fst_87_, 0);
lean_inc(v_val_91_);
lean_dec_ref_known(v_fst_87_, 1);
v_val_92_ = lean_ctor_get(v_fst_56_, 0);
lean_inc(v_val_92_);
lean_dec_ref_known(v_fst_56_, 1);
v___x_93_ = lean_name_eq(v_snd_90_, v_snd_57_);
lean_dec(v_snd_57_);
lean_dec(v_snd_90_);
if (v___x_93_ == 0)
{
lean_dec(v_val_92_);
lean_dec(v_val_91_);
v___y_84_ = v___x_93_;
goto v___jp_83_;
}
else
{
uint8_t v___x_94_; 
v___x_94_ = lean_nat_dec_le(v_val_92_, v_val_91_);
lean_dec(v_val_91_);
lean_dec(v_val_92_);
v___y_84_ = v___x_94_;
goto v___jp_83_;
}
}
}
v___jp_63_:
{
uint8_t v___x_67_; 
v___x_67_ = lean_nat_dec_le(v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec(v___y_65_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_box(v___x_67_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 0, v___x_68_);
v___x_70_ = v___x_61_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
else
{
lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_72_ = lean_box(v___y_64_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 0, v___x_72_);
v___x_74_ = v___x_61_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
v___jp_78_:
{
if (lean_obj_tag(v_fst_76_) == 0)
{
lean_object* v___x_81_; 
v___x_81_ = lean_unsigned_to_nat(0u);
v___y_64_ = v___y_79_;
v___y_65_ = v___y_80_;
v___y_66_ = v___x_81_;
goto v___jp_63_;
}
else
{
lean_object* v_val_82_; 
v_val_82_ = lean_ctor_get(v_fst_76_, 0);
lean_inc(v_val_82_);
lean_dec_ref_known(v_fst_76_, 1);
v___y_64_ = v___y_79_;
v___y_65_ = v___y_80_;
v___y_66_ = v_val_82_;
goto v___jp_63_;
}
}
v___jp_83_:
{
if (lean_obj_tag(v_fst_55_) == 0)
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_Parser_maxPrec;
v___y_79_ = v___y_84_;
v___y_80_ = v___x_85_;
goto v___jp_78_;
}
else
{
lean_object* v_val_86_; 
v_val_86_ = lean_ctor_get(v_fst_55_, 0);
lean_inc(v_val_86_);
lean_dec_ref_known(v_fst_55_, 1);
v___y_79_ = v___y_84_;
v___y_80_ = v_val_86_;
goto v___jp_78_;
}
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
lean_dec(v_snd_57_);
lean_dec(v_fst_56_);
lean_dec(v_fst_55_);
v_a_96_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_58_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_58_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v_newStx_48_);
lean_dec(v_cat_46_);
v_a_104_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_52_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_52_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_bindsAsTightly___boxed(lean_object* v_cat_112_, lean_object* v_stx_113_, lean_object* v_newStx_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_bindsAsTightly(v_cat_112_, v_stx_113_, v_newStx_114_, v_a_115_, v_a_116_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
return v_res_118_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__22(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__21));
v___x_165_ = l_String_toRawSubstring_x27(v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement(lean_object* v_cat_180_, lean_object* v_stx_181_, lean_object* v_newStx_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
uint8_t v_a_187_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__1));
v___x_252_ = lean_name_eq(v_cat_180_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__29));
v___x_254_ = lean_name_eq(v_cat_180_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec(v_stx_181_);
lean_dec(v_cat_180_);
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v_newStx_182_);
return v___x_255_;
}
else
{
goto v___jp_226_;
}
}
else
{
goto v___jp_226_;
}
v___jp_186_:
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__1));
v___x_189_ = lean_name_eq(v_cat_180_, v___x_188_);
lean_dec(v_cat_180_);
if (v___x_189_ == 0)
{
lean_object* v_ref_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_ref_190_ = lean_ctor_get(v_a_183_, 2);
v___x_191_ = l_Lean_SourceInfo_fromRef(v_ref_190_, v___x_189_);
v___x_192_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__6));
v___x_193_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__7));
lean_inc_n(v___x_191_, 5);
v___x_194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_191_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__9));
v___x_196_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__11));
v___x_197_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__13));
v___x_198_ = l_Lean_Syntax_node1(v___x_191_, v___x_197_, v_newStx_182_);
v___x_199_ = l_Lean_Syntax_node1(v___x_191_, v___x_196_, v___x_198_);
v___x_200_ = l_Lean_Syntax_node1(v___x_191_, v___x_195_, v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__14));
v___x_202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_191_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = l_Lean_Syntax_node3(v___x_191_, v___x_192_, v___x_194_, v___x_200_, v___x_202_);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
else
{
lean_object* v_toCold_205_; lean_object* v_ref_206_; lean_object* v_quotContext_207_; lean_object* v_currMacroScope_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v_toCold_205_ = lean_ctor_get(v_a_183_, 0);
v_ref_206_ = lean_ctor_get(v_a_183_, 2);
v_quotContext_207_ = lean_ctor_get(v_toCold_205_, 8);
v_currMacroScope_208_ = lean_ctor_get(v_toCold_205_, 9);
v___x_209_ = l_Lean_SourceInfo_fromRef(v_ref_206_, v_a_187_);
v___x_210_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__16));
v___x_211_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__18));
v___x_212_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__7));
lean_inc_n(v___x_209_, 5);
v___x_213_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_209_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__20));
v___x_215_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__22, &l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__22_once, _init_l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__22);
v___x_216_ = lean_box(0);
lean_inc(v_currMacroScope_208_);
lean_inc(v_quotContext_207_);
v___x_217_ = l_Lean_addMacroScope(v_quotContext_207_, v___x_216_, v_currMacroScope_208_);
v___x_218_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__27));
v___x_219_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_219_, 0, v___x_209_);
lean_ctor_set(v___x_219_, 1, v___x_215_);
lean_ctor_set(v___x_219_, 2, v___x_217_);
lean_ctor_set(v___x_219_, 3, v___x_218_);
v___x_220_ = l_Lean_Syntax_node1(v___x_209_, v___x_214_, v___x_219_);
v___x_221_ = l_Lean_Syntax_node2(v___x_209_, v___x_211_, v___x_213_, v___x_220_);
v___x_222_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__14));
v___x_223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_209_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = l_Lean_Syntax_node3(v___x_209_, v___x_210_, v___x_221_, v_newStx_182_, v___x_223_);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
v___jp_226_:
{
lean_object* v___x_227_; 
lean_inc(v_newStx_182_);
lean_inc(v_cat_180_);
v___x_227_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_bindsAsTightly(v_cat_180_, v_stx_181_, v_newStx_182_, v_a_183_, v_a_184_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_237_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_237_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_237_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_237_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
uint8_t v___x_232_; 
v___x_232_ = lean_unbox(v_a_228_);
if (v___x_232_ == 0)
{
uint8_t v___x_233_; 
lean_del_object(v___x_230_);
v___x_233_ = lean_unbox(v_a_228_);
lean_dec(v_a_228_);
v_a_187_ = v___x_233_;
goto v___jp_186_;
}
else
{
lean_object* v___x_235_; 
lean_dec(v_a_228_);
lean_dec(v_cat_180_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v_newStx_182_);
v___x_235_ = v___x_230_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_newStx_182_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_250_; 
v_a_238_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_250_ == 0)
{
v___x_240_ = v___x_227_;
v_isShared_241_ = v_isSharedCheck_250_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_227_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_250_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
uint8_t v___x_242_; 
v___x_242_ = l_Lean_Exception_isInterrupt(v_a_238_);
if (v___x_242_ == 0)
{
uint8_t v___x_243_; 
lean_inc(v_a_238_);
v___x_243_ = l_Lean_Exception_isRuntime(v_a_238_);
if (v___x_243_ == 0)
{
lean_del_object(v___x_240_);
lean_dec(v_a_238_);
v_a_187_ = v___x_243_;
goto v___jp_186_;
}
else
{
lean_object* v___x_245_; 
lean_dec(v_newStx_182_);
lean_dec(v_cat_180_);
if (v_isShared_241_ == 0)
{
v___x_245_ = v___x_240_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_238_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
else
{
lean_object* v___x_248_; 
lean_dec(v_newStx_182_);
lean_dec(v_cat_180_);
if (v_isShared_241_ == 0)
{
v___x_248_ = v___x_240_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_238_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___boxed(lean_object* v_cat_256_, lean_object* v_stx_257_, lean_object* v_newStx_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement(v_cat_256_, v_stx_257_, v_newStx_258_, v_a_259_, v_a_260_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
return v_res_262_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2(lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
if (lean_obj_tag(v_x_264_) == 0)
{
uint8_t v___x_265_; 
v___x_265_ = 1;
return v___x_265_;
}
else
{
uint8_t v___x_266_; 
v___x_266_ = 0;
return v___x_266_;
}
}
else
{
if (lean_obj_tag(v_x_264_) == 0)
{
uint8_t v___x_267_; 
v___x_267_ = 0;
return v___x_267_;
}
else
{
lean_object* v_val_268_; lean_object* v_val_269_; uint8_t v___x_270_; 
v_val_268_ = lean_ctor_get(v_x_263_, 0);
v_val_269_ = lean_ctor_get(v_x_264_, 0);
v___x_270_ = l_Lean_Parser_instBEqError_beq(v_val_268_, v_val_269_);
return v___x_270_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2___boxed(lean_object* v_x_271_, lean_object* v_x_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2(v_x_271_, v_x_272_);
lean_dec(v_x_272_);
lean_dec(v_x_271_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg(lean_object* v___x_275_, lean_object* v_right_276_, lean_object* v_a_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_snd_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_361_; 
v_snd_281_ = lean_ctor_get(v_a_277_, 1);
v_isSharedCheck_361_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_361_ == 0)
{
lean_object* v_unused_362_; 
v_unused_362_ = lean_ctor_get(v_a_277_, 0);
lean_dec(v_unused_362_);
v___x_283_ = v_a_277_;
v_isShared_284_ = v_isSharedCheck_361_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_snd_281_);
lean_dec(v_a_277_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_361_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_285_ = lean_box(0);
v___x_286_ = lean_string_utf8_byte_size(v_snd_281_);
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = lean_nat_dec_eq(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
lean_inc_ref(v___x_275_);
lean_inc(v_snd_281_);
v___x_289_ = l_Lean_PrettyPrinter_Formatter_parseTokenCore(v_snd_281_, v___x_275_, v___y_278_, v___y_279_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v_stxStack_300_; lean_object* v_pos_301_; lean_object* v_errorMsg_302_; uint8_t v___x_303_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref_known(v___x_289_, 1);
v_stxStack_300_ = lean_ctor_get(v_a_290_, 0);
lean_inc_ref(v_stxStack_300_);
v_pos_301_ = lean_ctor_get(v_a_290_, 2);
lean_inc(v_pos_301_);
v_errorMsg_302_ = lean_ctor_get(v_a_290_, 4);
lean_inc(v_errorMsg_302_);
lean_dec(v_a_290_);
v___x_303_ = l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2(v_errorMsg_302_, v___x_285_);
lean_dec(v_errorMsg_302_);
if (v___x_303_ == 0)
{
lean_dec(v_pos_301_);
lean_dec_ref(v_stxStack_300_);
goto v___jp_291_;
}
else
{
uint8_t v_decide_304_; 
v_decide_304_ = lean_nat_dec_eq(v_pos_301_, v___x_287_);
if (v_decide_304_ == 0)
{
uint8_t v_decide_305_; 
lean_del_object(v___x_283_);
v_decide_305_ = lean_nat_dec_eq(v_pos_301_, v___x_286_);
if (v_decide_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec_ref(v_stxStack_300_);
lean_inc(v_snd_281_);
v___x_306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_306_, 0, v_snd_281_);
lean_ctor_set(v___x_306_, 1, v___x_287_);
lean_ctor_set(v___x_306_, 2, v___x_286_);
v___x_307_ = l_String_Slice_pos_x21(v___x_306_, v_pos_301_);
lean_dec(v_pos_301_);
lean_dec_ref_known(v___x_306_, 3);
v___x_308_ = lean_string_utf8_extract_fast(v_snd_281_, v___x_307_, v___x_286_);
lean_dec(v___x_307_);
lean_dec(v_snd_281_);
v___x_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_285_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v_a_277_ = v___x_309_;
goto _start;
}
else
{
lean_object* v___x_311_; 
lean_dec(v_pos_301_);
lean_inc_ref(v___x_275_);
lean_inc_ref(v_right_276_);
v___x_311_ = l_Lean_PrettyPrinter_Formatter_parseTokenCore(v_right_276_, v___x_275_, v___y_278_, v___y_279_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; uint8_t v___y_314_; lean_object* v_stxStack_336_; lean_object* v_errorMsg_337_; uint8_t v___x_338_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v_stxStack_336_ = lean_ctor_get(v_a_312_, 0);
lean_inc_ref(v_stxStack_336_);
v_errorMsg_337_ = lean_ctor_get(v_a_312_, 4);
lean_inc(v_errorMsg_337_);
lean_dec(v_a_312_);
v___x_338_ = l_instBEqOption_beq___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__2(v_errorMsg_337_, v___x_285_);
lean_dec(v_errorMsg_337_);
if (v___x_338_ == 0)
{
lean_dec_ref(v_stxStack_336_);
v___y_314_ = v_decide_304_;
goto v___jp_313_;
}
else
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_336_);
lean_dec_ref(v_stxStack_336_);
v___x_340_ = l_Lean_Syntax_isIdent(v___x_339_);
lean_dec(v___x_339_);
v___y_314_ = v___x_340_;
goto v___jp_313_;
}
v___jp_313_:
{
lean_object* v___x_315_; uint8_t v___x_316_; lean_object* v___x_317_; 
v___x_315_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_300_);
lean_dec_ref(v_stxStack_300_);
v___x_316_ = l_Lean_Syntax_isIdent(v___x_315_);
lean_dec(v___x_315_);
lean_inc(v_snd_281_);
v___x_317_ = l_Lean_PrettyPrinter_Formatter_needsTokenSeparator(v_snd_281_, v_right_276_, v___x_316_, v___y_314_, v___x_275_, v___y_278_, v___y_279_);
lean_dec_ref(v_right_276_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_327_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_327_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_327_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_327_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_322_, 0, v_a_318_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v_snd_281_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_323_);
v___x_325_ = v___x_320_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_snd_281_);
v_a_328_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_317_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_317_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec_ref(v_stxStack_300_);
lean_dec(v_snd_281_);
lean_dec_ref(v_right_276_);
lean_dec_ref(v___x_275_);
v_a_341_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_311_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_311_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
else
{
lean_dec(v_pos_301_);
lean_dec_ref(v_stxStack_300_);
goto v___jp_291_;
}
}
v___jp_291_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_292_ = lean_unsigned_to_nat(1u);
lean_inc(v_snd_281_);
v___x_293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_293_, 0, v_snd_281_);
lean_ctor_set(v___x_293_, 1, v___x_287_);
lean_ctor_set(v___x_293_, 2, v___x_286_);
v___x_294_ = l_String_Slice_Pos_nextn(v___x_293_, v___x_287_, v___x_292_);
lean_dec_ref_known(v___x_293_, 3);
v___x_295_ = lean_string_utf8_extract_fast(v_snd_281_, v___x_294_, v___x_286_);
lean_dec(v___x_294_);
lean_dec(v_snd_281_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_295_);
lean_ctor_set(v___x_283_, 0, v___x_285_);
v___x_297_ = v___x_283_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_295_);
v___x_297_ = v_reuseFailAlloc_299_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
v_a_277_ = v___x_297_;
goto _start;
}
}
}
else
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_356_; 
lean_del_object(v___x_283_);
lean_dec(v_snd_281_);
lean_dec_ref(v_right_276_);
lean_dec_ref(v___x_275_);
v_a_349_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_356_ == 0)
{
v___x_351_ = v___x_289_;
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_289_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_a_349_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
else
{
lean_object* v___x_358_; 
lean_dec_ref(v_right_276_);
lean_dec_ref(v___x_275_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_285_);
v___x_358_ = v___x_283_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_snd_281_);
v___x_358_ = v_reuseFailAlloc_360_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_359_; 
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg___boxed(lean_object* v___x_363_, lean_object* v_right_364_, lean_object* v_a_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg(v___x_363_, v_right_364_, v_a_365_, v___y_366_, v___y_367_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__1(lean_object* v_s_370_, lean_object* v_pos_371_){
_start:
{
lean_object* v_str_372_; lean_object* v_startInclusive_373_; lean_object* v_endExclusive_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v_decide_378_; 
v_str_372_ = lean_ctor_get(v_s_370_, 0);
v_startInclusive_373_ = lean_ctor_get(v_s_370_, 1);
v_endExclusive_374_ = lean_ctor_get(v_s_370_, 2);
v___x_375_ = lean_nat_add(v_startInclusive_373_, v_pos_371_);
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = lean_nat_sub(v_endExclusive_374_, v___x_375_);
v_decide_378_ = lean_nat_dec_eq(v___x_376_, v___x_377_);
lean_dec(v___x_377_);
if (v_decide_378_ == 0)
{
uint32_t v___x_379_; uint32_t v___x_380_; uint8_t v___x_381_; 
v___x_379_ = lean_string_utf8_get_fast(v_str_372_, v___x_375_);
v___x_380_ = 32;
v___x_381_ = lean_uint32_dec_eq(v___x_379_, v___x_380_);
if (v___x_381_ == 0)
{
uint32_t v___x_382_; uint8_t v___x_383_; 
v___x_382_ = 9;
v___x_383_ = lean_uint32_dec_eq(v___x_379_, v___x_382_);
if (v___x_383_ == 0)
{
uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 13;
v___x_385_ = lean_uint32_dec_eq(v___x_379_, v___x_384_);
if (v___x_385_ == 0)
{
uint32_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 10;
v___x_387_ = lean_uint32_dec_eq(v___x_379_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_388_ = lean_string_utf8_next_fast(v_str_372_, v___x_375_);
v___x_389_ = lean_nat_sub(v___x_388_, v___x_375_);
lean_dec(v___x_375_);
v___x_390_ = lean_nat_add(v_pos_371_, v___x_389_);
lean_dec(v___x_389_);
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = lean_nat_add(v_pos_371_, v___x_391_);
v___x_393_ = lean_nat_dec_le(v___x_392_, v___x_390_);
lean_dec(v___x_392_);
if (v___x_393_ == 0)
{
lean_dec(v___x_390_);
return v_pos_371_;
}
else
{
lean_dec(v_pos_371_);
v_pos_371_ = v___x_390_;
goto _start;
}
}
else
{
lean_dec(v___x_375_);
return v_pos_371_;
}
}
else
{
lean_dec(v___x_375_);
return v_pos_371_;
}
}
else
{
lean_dec(v___x_375_);
return v_pos_371_;
}
}
else
{
lean_dec(v___x_375_);
return v_pos_371_;
}
}
else
{
lean_dec(v___x_375_);
return v_pos_371_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__1___boxed(lean_object* v_s_395_, lean_object* v_pos_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__1(v_s_395_, v_pos_396_);
lean_dec_ref(v_s_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__0(lean_object* v_s_398_, lean_object* v_pos_399_){
_start:
{
lean_object* v_str_400_; lean_object* v_startInclusive_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v_decide_405_; 
v_str_400_ = lean_ctor_get(v_s_398_, 0);
v_startInclusive_401_ = lean_ctor_get(v_s_398_, 1);
v___x_402_ = lean_nat_add(v_startInclusive_401_, v_pos_399_);
v___x_403_ = lean_nat_sub(v___x_402_, v_startInclusive_401_);
v___x_404_ = lean_unsigned_to_nat(0u);
v_decide_405_ = lean_nat_dec_eq(v___x_403_, v___x_404_);
if (v_decide_405_ == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; uint32_t v___x_411_; uint32_t v___x_412_; uint8_t v___x_413_; 
lean_inc(v_startInclusive_401_);
lean_inc_ref(v_str_400_);
v___x_406_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_406_, 0, v_str_400_);
lean_ctor_set(v___x_406_, 1, v_startInclusive_401_);
lean_ctor_set(v___x_406_, 2, v___x_402_);
v___x_407_ = lean_unsigned_to_nat(1u);
v___x_408_ = lean_nat_sub(v___x_403_, v___x_407_);
lean_dec(v___x_403_);
v___x_409_ = l_String_Slice_posLE(v___x_406_, v___x_408_);
lean_dec_ref_known(v___x_406_, 3);
v___x_410_ = lean_nat_add(v_startInclusive_401_, v___x_409_);
v___x_411_ = lean_string_utf8_get_fast(v_str_400_, v___x_410_);
lean_dec(v___x_410_);
v___x_412_ = 32;
v___x_413_ = lean_uint32_dec_eq(v___x_411_, v___x_412_);
if (v___x_413_ == 0)
{
uint32_t v___x_414_; uint8_t v___x_415_; 
v___x_414_ = 9;
v___x_415_ = lean_uint32_dec_eq(v___x_411_, v___x_414_);
if (v___x_415_ == 0)
{
uint32_t v___x_416_; uint8_t v___x_417_; 
v___x_416_ = 13;
v___x_417_ = lean_uint32_dec_eq(v___x_411_, v___x_416_);
if (v___x_417_ == 0)
{
uint32_t v___x_418_; uint8_t v___x_419_; 
v___x_418_ = 10;
v___x_419_ = lean_uint32_dec_eq(v___x_411_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = lean_nat_add(v___x_409_, v___x_407_);
v___x_421_ = lean_nat_dec_le(v___x_420_, v_pos_399_);
lean_dec(v___x_420_);
if (v___x_421_ == 0)
{
lean_dec(v___x_409_);
return v_pos_399_;
}
else
{
lean_dec(v_pos_399_);
v_pos_399_ = v___x_409_;
goto _start;
}
}
else
{
lean_dec(v___x_409_);
return v_pos_399_;
}
}
else
{
lean_dec(v___x_409_);
return v_pos_399_;
}
}
else
{
lean_dec(v___x_409_);
return v_pos_399_;
}
}
else
{
lean_dec(v___x_409_);
return v_pos_399_;
}
}
else
{
lean_dec(v___x_403_);
lean_dec(v___x_402_);
return v_pos_399_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__0___boxed(lean_object* v_s_423_, lean_object* v_pos_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__0(v_s_423_, v_pos_424_);
lean_dec_ref(v_s_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween(lean_object* v_left_426_, lean_object* v_right_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_str_435_; lean_object* v_startInclusive_436_; lean_object* v_endExclusive_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v_left_441_; lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
v_str_435_ = lean_ctor_get(v_left_426_, 0);
v_startInclusive_436_ = lean_ctor_get(v_left_426_, 1);
v_endExclusive_437_ = lean_ctor_get(v_left_426_, 2);
v___x_438_ = lean_nat_sub(v_endExclusive_437_, v_startInclusive_436_);
v___x_439_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__0(v_left_426_, v___x_438_);
v___x_440_ = lean_nat_add(v_startInclusive_436_, v___x_439_);
lean_dec(v___x_439_);
v_left_441_ = lean_string_utf8_extract_fast(v_str_435_, v___x_440_, v_endExclusive_437_);
lean_dec(v___x_440_);
v___x_442_ = lean_string_utf8_byte_size(v_left_441_);
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_nat_dec_eq(v___x_442_, v___x_443_);
if (v___x_444_ == 0)
{
lean_object* v_str_445_; lean_object* v_startInclusive_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_right_449_; lean_object* v___x_450_; uint8_t v___x_451_; 
v_str_445_ = lean_ctor_get(v_right_427_, 0);
v_startInclusive_446_ = lean_ctor_get(v_right_427_, 1);
v___x_447_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__1(v_right_427_, v___x_443_);
v___x_448_ = lean_nat_add(v_startInclusive_446_, v___x_447_);
lean_dec(v___x_447_);
v_right_449_ = lean_string_utf8_extract_fast(v_str_445_, v_startInclusive_446_, v___x_448_);
lean_dec(v___x_448_);
v___x_450_ = lean_string_utf8_byte_size(v_right_449_);
v___x_451_ = lean_nat_dec_eq(v___x_450_, v___x_443_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v_env_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_452_ = lean_st_ref_get(v_a_429_);
v_env_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc_ref(v_env_453_);
lean_dec(v___x_452_);
v___x_454_ = l_Lean_Parser_getTokenTable(v_env_453_);
v___x_455_ = lean_box(0);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v_left_441_);
v___x_457_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg(v___x_454_, v_right_449_, v___x_456_, v_a_428_, v_a_429_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_467_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_467_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_467_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_467_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v_fst_462_; 
v_fst_462_ = lean_ctor_get(v_a_458_, 0);
lean_inc(v_fst_462_);
lean_dec(v_a_458_);
if (lean_obj_tag(v_fst_462_) == 0)
{
lean_del_object(v___x_460_);
goto v___jp_431_;
}
else
{
lean_object* v_val_463_; lean_object* v___x_465_; 
v_val_463_ = lean_ctor_get(v_fst_462_, 0);
lean_inc(v_val_463_);
lean_dec_ref_known(v_fst_462_, 1);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v_val_463_);
v___x_465_ = v___x_460_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_val_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_a_468_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_457_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_457_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
else
{
lean_dec_ref(v_right_449_);
lean_dec_ref(v_left_441_);
goto v___jp_431_;
}
}
else
{
lean_dec_ref(v_left_441_);
goto v___jp_431_;
}
v___jp_431_:
{
uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = 0;
v___x_433_ = lean_box(v___x_432_);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween___boxed(lean_object* v_left_476_, lean_object* v_right_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween(v_left_476_, v_right_477_, v_a_478_, v_a_479_);
lean_dec(v_a_479_);
lean_dec_ref(v_a_478_);
lean_dec_ref(v_right_477_);
lean_dec_ref(v_left_476_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3(lean_object* v___x_482_, lean_object* v_right_483_, lean_object* v_inst_484_, lean_object* v_a_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___redArg(v___x_482_, v_right_483_, v_a_485_, v___y_486_, v___y_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3___boxed(lean_object* v___x_490_, lean_object* v_right_491_, lean_object* v_inst_492_, lean_object* v_a_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween_spec__3(v___x_490_, v_right_491_, v_inst_492_, v_a_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DeprecatedSyntax_formatReplacement(lean_object* v_cat_500_, lean_object* v_stx_501_, lean_object* v_newStx_502_, lean_object* v_range_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___x_538_; 
lean_inc(v_stx_501_);
lean_inc(v_cat_500_);
v___x_538_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement(v_cat_500_, v_stx_501_, v_newStx_502_, v_a_504_, v_a_505_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_toCold_539_; lean_object* v_a_540_; lean_object* v_fileMap_541_; lean_object* v___x_542_; lean_object* v_fst_543_; lean_object* v_snd_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_606_; 
v_toCold_539_ = lean_ctor_get(v_a_504_, 0);
v_a_540_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v___x_538_, 1);
v_fileMap_541_ = lean_ctor_get(v_toCold_539_, 1);
lean_inc_ref(v_range_503_);
lean_inc_ref(v_fileMap_541_);
v___x_542_ = l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(v_fileMap_541_, v_range_503_);
v_fst_543_ = lean_ctor_get(v___x_542_, 0);
v_snd_544_ = lean_ctor_get(v___x_542_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_606_ == 0)
{
v___x_546_ = v___x_542_;
v_isShared_547_ = v_isSharedCheck_606_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_snd_544_);
lean_inc(v_fst_543_);
lean_dec(v___x_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_606_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
lean_inc(v_a_540_);
lean_inc(v_cat_500_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 1, v_a_540_);
lean_ctor_set(v___x_546_, 0, v_cat_500_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_cat_500_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_a_540_);
v___x_549_ = v_reuseFailAlloc_605_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_box(0);
v___x_551_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(v___x_549_, v___x_550_, v_fst_543_, v_snd_544_, v_a_504_, v_a_505_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_604_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_604_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_604_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_604_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v_source_556_; lean_object* v_start_557_; lean_object* v_stop_558_; lean_object* v_text_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v_source_556_ = lean_ctor_get(v_fileMap_541_, 0);
v_start_557_ = lean_ctor_get(v_range_503_, 0);
lean_inc(v_start_557_);
v_stop_558_ = lean_ctor_get(v_range_503_, 1);
lean_inc(v_stop_558_);
lean_dec_ref(v_range_503_);
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = lean_string_utf8_byte_size(v_source_556_);
lean_inc_ref_n(v_source_556_, 2);
v___x_586_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_586_, 0, v_source_556_);
lean_ctor_set(v___x_586_, 1, v___x_584_);
lean_ctor_set(v___x_586_, 2, v___x_585_);
v___x_587_ = l_String_Slice_pos_x21(v___x_586_, v_start_557_);
lean_dec(v_start_557_);
lean_dec_ref_known(v___x_586_, 3);
v___x_588_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_588_, 0, v_source_556_);
lean_ctor_set(v___x_588_, 1, v___x_584_);
lean_ctor_set(v___x_588_, 2, v___x_587_);
v___x_589_ = lean_string_utf8_byte_size(v_a_552_);
lean_inc(v_a_552_);
v___x_590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_590_, 0, v_a_552_);
lean_ctor_set(v___x_590_, 1, v___x_584_);
lean_ctor_set(v___x_590_, 2, v___x_589_);
v___x_591_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween(v___x_588_, v___x_590_, v_a_504_, v_a_505_);
lean_dec_ref_known(v___x_590_, 3);
lean_dec_ref_known(v___x_588_, 3);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; uint8_t v___x_593_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v___x_593_ = lean_unbox(v_a_592_);
lean_dec(v_a_592_);
if (v___x_593_ == 0)
{
v_text_560_ = v_a_552_;
v___y_561_ = v_a_504_;
v___y_562_ = v_a_505_;
goto v___jp_559_;
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__0));
v___x_595_ = lean_string_append(v___x_594_, v_a_552_);
lean_dec(v_a_552_);
v_text_560_ = v___x_595_;
v___y_561_ = v_a_504_;
v___y_562_ = v_a_505_;
goto v___jp_559_;
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec(v_stop_558_);
lean_del_object(v___x_554_);
lean_dec(v_a_552_);
lean_dec(v_a_540_);
lean_dec(v_stx_501_);
lean_dec(v_cat_500_);
v_a_596_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_591_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_591_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
v___jp_559_:
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = lean_unsigned_to_nat(0u);
v___x_564_ = l_Lean_Syntax_getTrailingSize(v_stx_501_);
lean_dec(v_stx_501_);
v___x_565_ = lean_nat_dec_lt(v___x_563_, v___x_564_);
lean_dec(v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_566_ = lean_string_utf8_byte_size(v_source_556_);
lean_inc_ref_n(v_source_556_, 2);
v___x_567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_567_, 0, v_source_556_);
lean_ctor_set(v___x_567_, 1, v___x_563_);
lean_ctor_set(v___x_567_, 2, v___x_566_);
v___x_568_ = l_String_Slice_pos_x21(v___x_567_, v_stop_558_);
lean_dec(v_stop_558_);
lean_dec_ref_known(v___x_567_, 3);
lean_inc(v___x_568_);
v___x_569_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_569_, 0, v_source_556_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
lean_ctor_set(v___x_569_, 2, v___x_566_);
v___x_570_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_parenthesizeReplacement___closed__1));
v___x_571_ = lean_name_eq(v_cat_500_, v___x_570_);
lean_dec(v_cat_500_);
if (v___x_571_ == 0)
{
lean_dec(v___x_568_);
lean_del_object(v___x_554_);
lean_dec(v_a_540_);
v___y_508_ = v_text_560_;
v___y_509_ = v___y_561_;
v___y_510_ = v___x_569_;
v___y_511_ = v___y_562_;
v___y_512_ = v___x_563_;
goto v___jp_507_;
}
else
{
uint8_t v___x_572_; 
v___x_572_ = l_Lean_Syntax_isIdent(v_a_540_);
lean_dec(v_a_540_);
if (v___x_572_ == 0)
{
lean_dec(v___x_568_);
lean_del_object(v___x_554_);
v___y_508_ = v_text_560_;
v___y_509_ = v___y_561_;
v___y_510_ = v___x_569_;
v___y_511_ = v___y_562_;
v___y_512_ = v___x_563_;
goto v___jp_507_;
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = lean_nat_sub(v___x_566_, v___x_568_);
v___x_575_ = lean_nat_dec_le(v___x_573_, v___x_574_);
lean_dec(v___x_574_);
if (v___x_575_ == 0)
{
lean_dec(v___x_568_);
lean_del_object(v___x_554_);
v___y_508_ = v_text_560_;
v___y_509_ = v___y_561_;
v___y_510_ = v___x_569_;
v___y_511_ = v___y_562_;
v___y_512_ = v___x_563_;
goto v___jp_507_;
}
else
{
lean_object* v___x_576_; uint8_t v___x_577_; 
v___x_576_ = ((lean_object*)(l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__1));
v___x_577_ = lean_string_memcmp(v_source_556_, v___x_576_, v___x_568_, v___x_563_, v___x_573_);
lean_dec(v___x_568_);
if (v___x_577_ == 0)
{
lean_del_object(v___x_554_);
v___y_508_ = v_text_560_;
v___y_509_ = v___y_561_;
v___y_510_ = v___x_569_;
v___y_511_ = v___y_562_;
v___y_512_ = v___x_563_;
goto v___jp_507_;
}
else
{
lean_object* v___x_579_; 
lean_dec_ref_known(v___x_569_, 3);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_text_560_);
v___x_579_ = v___x_554_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_text_560_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
}
else
{
lean_object* v___x_582_; 
lean_dec(v_stop_558_);
lean_dec(v_a_540_);
lean_dec(v_cat_500_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_text_560_);
v___x_582_ = v___x_554_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_text_560_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
else
{
lean_dec(v_a_540_);
lean_dec_ref(v_range_503_);
lean_dec(v_stx_501_);
lean_dec(v_cat_500_);
return v___x_551_;
}
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v_range_503_);
lean_dec(v_stx_501_);
lean_dec(v_cat_500_);
v_a_607_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_538_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_538_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
v___jp_507_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_513_ = lean_string_utf8_byte_size(v___y_508_);
lean_inc_ref(v___y_508_);
v___x_514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_514_, 0, v___y_508_);
lean_ctor_set(v___x_514_, 1, v___y_512_);
lean_ctor_set(v___x_514_, 2, v___x_513_);
v___x_515_ = l___private_Lean_Elab_DeprecatedSyntax_FormatReplacement_0__Lean_Elab_DeprecatedSyntax_needsSpaceBetween(v___x_514_, v___y_510_, v___y_509_, v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec_ref_known(v___x_514_, 3);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_529_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_529_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_529_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_529_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
uint8_t v___x_520_; 
v___x_520_ = lean_unbox(v_a_516_);
lean_dec(v_a_516_);
if (v___x_520_ == 0)
{
lean_object* v___x_522_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___y_508_);
v___x_522_ = v___x_518_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___y_508_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_524_ = ((lean_object*)(l_Lean_Elab_DeprecatedSyntax_formatReplacement___closed__0));
v___x_525_ = lean_string_append(v___y_508_, v___x_524_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_525_);
v___x_527_ = v___x_518_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec_ref(v___y_508_);
v_a_530_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_515_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_515_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DeprecatedSyntax_formatReplacement___boxed(lean_object* v_cat_615_, lean_object* v_stx_616_, lean_object* v_newStx_617_, lean_object* v_range_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_Elab_DeprecatedSyntax_formatReplacement(v_cat_615_, v_stx_616_, v_newStx_617_, v_range_618_, v_a_619_, v_a_620_);
lean_dec(v_a_620_);
lean_dec_ref(v_a_619_);
return v_res_622_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DeprecatedSyntax_FormatReplacement(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DeprecatedSyntax_FormatReplacement(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Meta_TryThis(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DeprecatedSyntax_FormatReplacement(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeprecatedSyntax_FormatReplacement(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DeprecatedSyntax_FormatReplacement(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DeprecatedSyntax_FormatReplacement(builtin);
}
#ifdef __cplusplus
}
#endif
