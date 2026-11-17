// Lean compiler output
// Module: Lean.DocString.Formatter
// Imports: public import Lean.PrettyPrinter.Formatter public import Lean.DocString.Syntax import Init.Data.Range.Polymorphic.Iterators meta import Init.Data.Range.Polymorphic.GetElemTactic import Lean.DocString.View
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Doc_InlineView_of(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getVersoLinkUrl(lean_object*);
lean_object* l_Lean_Doc_escapeVersoLinkUrl(lean_object*);
lean_object* l_Lean_TSyntax_getVersoRefName(lean_object*);
lean_object* l_String_Slice_lines_lineMap(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_LinebreakView_of(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Doc_BlockView_of(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Doc_ArgValView_of(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Doc_ArgView_of(lean_object*);
lean_object* l_Lean_Doc_LinkTargetView_of(lean_object*);
lean_object* l_Lean_Doc_TextView_getVersoText(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Doc_CodeView_getVersoCode(lean_object*);
lean_object* l_Lean_Doc_longestBacktickRun(lean_object*);
uint8_t l_Lean_Doc_versoCodeBoundarySpaces(lean_object*);
lean_object* l_Lean_Doc_MathView_getVersoCode(lean_object*);
lean_object* l_Lean_Doc_ImageView_getAlt(lean_object*);
lean_object* l_Lean_Doc_escapeVersoImageAlt(lean_object*);
lean_object* l_Lean_Doc_FootnoteView_getName(lean_object*);
lean_object* l_Lean_Doc_TextView_of(lean_object*);
lean_object* l_Lean_Doc_TextView_getVersoTextSource(lean_object*);
lean_object* l_Lean_Doc_CodeBlockView_getVersoCodeBlock(lean_object*);
lean_object* l_Lean_Doc_LinkRefView_getName(lean_object*);
lean_object* l_Lean_Doc_LinkRefView_getUrl(lean_object*);
lean_object* l_Lean_Doc_FootnoteRefView_getName(lean_object*);
lean_object* l_String_lines(lean_object*);
lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Syntax_reprint(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Doc_RoleView_of(lean_object*);
lean_object* l_Lean_Doc_ParaView_of(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_TSyntax_getVersoBlocks(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_concat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "NON-ATOM "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "NON-IDENT "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "​"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_trailingLineEndings(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_isSpecial(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_isSpecial___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "%%%"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__2 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__2_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ":::"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__3 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__3_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__4 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__4_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__5 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__5_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "+ "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__6 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__6_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__7 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__7_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "- "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__8 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__9 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__9_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__10 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__10_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\t"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__11 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__11_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12_value;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\\"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth_spec__0(uint32_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_printsBlank(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_printsBlank___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_needsLineStart(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_needsLineStart___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_isLinebreak(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_isLinebreak___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_runsInto(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_runsInto___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_mergesInto(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_mergesInto___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__15(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__16___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0;
static const lean_array_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike(uint32_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$$"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!["};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[^"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "* "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ") "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__9(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "> "};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "%%%\n"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoSyntaxToString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoSyntaxToString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_Parser_versoDocumentToString_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_Parser_versoDocumentToString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_versoDocumentToString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoDocumentToString___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoDocumentToString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoDocumentToString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_document_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document_formatter___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_document_formatter___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_document_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__1 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__2 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__2_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "document"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__3 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__3_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(234, 113, 152, 229, 184, 253, 250, 127)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4_value;
static const lean_string_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__5 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__5_value;
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_0),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_1),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_2),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(234, 113, 152, 229, 184, 253, 250, 127)}};
static const lean_ctor_object l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value_aux_3),((lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(163, 42, 193, 184, 186, 47, 31, 255)}};
static const lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6 = (const lean_object*)&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(lean_object* v_x_2_){
_start:
{
lean_object* v_stx_4_; 
switch(lean_obj_tag(v_x_2_))
{
case 1:
{
lean_object* v_args_13_; lean_object* v___x_14_; lean_object* v___x_15_; uint8_t v___x_16_; 
v_args_13_ = lean_ctor_get(v_x_2_, 2);
v___x_14_ = lean_array_get_size(v_args_13_);
v___x_15_ = lean_unsigned_to_nat(1u);
v___x_16_ = lean_nat_dec_eq(v___x_14_, v___x_15_);
if (v___x_16_ == 0)
{
v_stx_4_ = v_x_2_;
goto v___jp_3_;
}
else
{
lean_object* v___x_17_; lean_object* v___x_18_; 
lean_inc_ref(v_args_13_);
lean_dec_ref_known(v_x_2_, 3);
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_array_fget(v_args_13_, v___x_17_);
lean_dec_ref(v_args_13_);
v_x_2_ = v___x_18_;
goto _start;
}
}
case 2:
{
lean_object* v_val_20_; 
v_val_20_ = lean_ctor_get(v_x_2_, 1);
lean_inc_ref(v_val_20_);
lean_dec_ref_known(v_x_2_, 2);
return v_val_20_;
}
default: 
{
v_stx_4_ = v_x_2_;
goto v___jp_3_;
}
}
v___jp_3_:
{
lean_object* v___x_5_; lean_object* v___x_6_; uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_5_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString___closed__0));
v___x_6_ = lean_box(0);
v___x_7_ = 0;
v___x_8_ = l_Lean_Syntax_formatStx(v_stx_4_, v___x_6_, v___x_7_);
v___x_9_ = l_Std_Format_defWidth;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = l_Std_Format_pretty(v___x_8_, v___x_9_, v___x_10_, v___x_10_);
v___x_12_ = lean_string_append(v___x_5_, v___x_11_);
lean_dec_ref(v___x_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(lean_object* v_x_22_){
_start:
{
lean_object* v_stx_24_; 
switch(lean_obj_tag(v_x_22_))
{
case 1:
{
lean_object* v_args_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_args_33_ = lean_ctor_get(v_x_22_, 2);
v___x_34_ = lean_array_get_size(v_args_33_);
v___x_35_ = lean_unsigned_to_nat(1u);
v___x_36_ = lean_nat_dec_eq(v___x_34_, v___x_35_);
if (v___x_36_ == 0)
{
v_stx_24_ = v_x_22_;
goto v___jp_23_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; 
lean_inc_ref(v_args_33_);
lean_dec_ref_known(v_x_22_, 3);
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_array_fget(v_args_33_, v___x_37_);
lean_dec_ref(v_args_33_);
v_x_22_ = v___x_38_;
goto _start;
}
}
case 3:
{
lean_object* v_val_40_; lean_object* v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; 
v_val_40_ = lean_ctor_get(v_x_22_, 2);
lean_inc(v_val_40_);
lean_dec_ref_known(v_x_22_, 4);
v___x_41_ = l_Lean_Name_eraseMacroScopes(v_val_40_);
lean_dec(v_val_40_);
v___x_42_ = 1;
v___x_43_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_41_, v___x_42_);
return v___x_43_;
}
default: 
{
v_stx_24_ = v_x_22_;
goto v___jp_23_;
}
}
v___jp_23_:
{
lean_object* v___x_25_; lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_25_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString___closed__0));
v___x_26_ = lean_box(0);
v___x_27_ = 0;
v___x_28_ = l_Lean_Syntax_formatStx(v_stx_24_, v___x_26_, v___x_27_);
v___x_29_ = l_Std_Format_defWidth;
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = l_Std_Format_pretty(v___x_28_, v___x_29_, v___x_30_, v___x_30_);
v___x_32_ = lean_string_append(v___x_25_, v___x_31_);
lean_dec_ref(v___x_31_);
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorIdx___impl(uint8_t v_x_46_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_box(v_x_46_);
v___x_48_ = lean_obj_tag_nat(v___x_47_);
lean_dec(v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorIdx___impl___boxed(lean_object* v_x_49_){
_start:
{
uint8_t v_x_4__boxed_50_; lean_object* v_res_51_; 
v_x_4__boxed_50_ = lean_unbox(v_x_49_);
v_res_51_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorIdx___impl(v_x_4__boxed_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___redArg(lean_object* v_k_52_){
_start:
{
lean_inc(v_k_52_);
return v_k_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___redArg___boxed(lean_object* v_k_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___redArg(v_k_53_);
lean_dec(v_k_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim(lean_object* v_motive_55_, lean_object* v_ctorIdx_56_, uint8_t v_t_57_, lean_object* v_h_58_, lean_object* v_k_59_){
_start:
{
lean_inc(v_k_59_);
return v_k_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim___boxed(lean_object* v_motive_60_, lean_object* v_ctorIdx_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_k_64_){
_start:
{
uint8_t v_t_boxed_65_; lean_object* v_res_66_; 
v_t_boxed_65_ = lean_unbox(v_t_62_);
v_res_66_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ctorElim(v_motive_60_, v_ctorIdx_61_, v_t_boxed_65_, v_h_63_, v_k_64_);
lean_dec(v_k_64_);
lean_dec(v_ctorIdx_61_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___redArg(lean_object* v_ordered_67_){
_start:
{
lean_inc(v_ordered_67_);
return v_ordered_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___redArg___boxed(lean_object* v_ordered_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___redArg(v_ordered_68_);
lean_dec(v_ordered_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim(lean_object* v_motive_70_, uint8_t v_t_71_, lean_object* v_h_72_, lean_object* v_ordered_73_){
_start:
{
lean_inc(v_ordered_73_);
return v_ordered_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim___boxed(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_ordered_77_){
_start:
{
uint8_t v_t_boxed_78_; lean_object* v_res_79_; 
v_t_boxed_78_ = lean_unbox(v_t_75_);
v_res_79_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_ordered_elim(v_motive_74_, v_t_boxed_78_, v_h_76_, v_ordered_77_);
lean_dec(v_ordered_77_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___redArg(lean_object* v_unordered_80_){
_start:
{
lean_inc(v_unordered_80_);
return v_unordered_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___redArg___boxed(lean_object* v_unordered_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___redArg(v_unordered_81_);
lean_dec(v_unordered_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim(lean_object* v_motive_83_, uint8_t v_t_84_, lean_object* v_h_85_, lean_object* v_unordered_86_){
_start:
{
lean_inc(v_unordered_86_);
return v_unordered_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim___boxed(lean_object* v_motive_87_, lean_object* v_t_88_, lean_object* v_h_89_, lean_object* v_unordered_90_){
_start:
{
uint8_t v_t_boxed_91_; lean_object* v_res_92_; 
v_t_boxed_91_ = lean_unbox(v_t_88_);
v_res_92_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_ListKind_unordered_elim(v_motive_87_, v_t_boxed_91_, v_h_89_, v_unordered_90_);
lean_dec(v_unordered_90_);
return v_res_92_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq(uint8_t v_x_93_, uint8_t v_y_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_95_ = lean_box(v_x_93_);
v___x_96_ = lean_obj_tag_nat(v___x_95_);
lean_dec(v___x_95_);
v___x_97_ = lean_box(v_y_94_);
v___x_98_ = lean_obj_tag_nat(v___x_97_);
lean_dec(v___x_97_);
v___x_99_ = lean_nat_dec_eq(v___x_96_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq___boxed(lean_object* v_x_100_, lean_object* v_y_101_){
_start:
{
uint8_t v_x_24__boxed_102_; uint8_t v_y_25__boxed_103_; uint8_t v_res_104_; lean_object* v_r_105_; 
v_x_24__boxed_102_ = lean_unbox(v_x_100_);
v_y_25__boxed_103_ = lean_unbox(v_y_101_);
v_res_104_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq(v_x_24__boxed_102_, v_y_25__boxed_103_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f(lean_object* v_stx_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Doc_BlockView_of(v_stx_114_);
if (lean_obj_tag(v___x_115_) == 1)
{
lean_object* v_val_116_; 
v_val_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_val_116_);
lean_dec_ref_known(v___x_115_, 1);
switch(lean_obj_tag(v_val_116_))
{
case 1:
{
lean_object* v___x_117_; 
lean_dec_ref_known(v_val_116_, 1);
v___x_117_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__0));
return v___x_117_;
}
case 2:
{
lean_object* v___x_118_; 
lean_dec_ref_known(v_val_116_, 1);
v___x_118_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f___closed__1));
return v___x_118_;
}
default: 
{
lean_object* v___x_119_; 
lean_dec(v_val_116_);
v___x_119_ = lean_box(0);
return v___x_119_;
}
}
}
else
{
lean_object* v___x_120_; 
lean_dec(v___x_115_);
v___x_120_ = lean_box(0);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor(lean_object* v_prev_x3f_121_, lean_object* v_stx_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_listKind_x3f(v_stx_122_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v___x_124_; 
v___x_124_ = lean_box(0);
return v___x_124_;
}
else
{
lean_object* v_val_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_143_; 
v_val_125_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_143_ == 0)
{
v___x_127_ = v___x_123_;
v_isShared_128_ = v_isSharedCheck_143_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_val_125_);
lean_dec(v___x_123_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_143_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
uint8_t v___y_130_; 
if (lean_obj_tag(v_prev_x3f_121_) == 0)
{
uint8_t v___x_136_; 
v___x_136_ = 0;
v___y_130_ = v___x_136_;
goto v___jp_129_;
}
else
{
lean_object* v_val_137_; uint8_t v_kind_138_; uint8_t v_alternate_139_; uint8_t v___x_140_; uint8_t v___x_141_; 
v_val_137_ = lean_ctor_get(v_prev_x3f_121_, 0);
v_kind_138_ = lean_ctor_get_uint8(v_val_137_, 0);
v_alternate_139_ = lean_ctor_get_uint8(v_val_137_, 1);
v___x_140_ = lean_unbox(v_val_125_);
v___x_141_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_instBEqListKind_beq(v___x_140_, v_kind_138_);
if (v___x_141_ == 0)
{
v___y_130_ = v___x_141_;
goto v___jp_129_;
}
else
{
if (v_alternate_139_ == 0)
{
v___y_130_ = v___x_141_;
goto v___jp_129_;
}
else
{
uint8_t v___x_142_; 
v___x_142_ = 0;
v___y_130_ = v___x_142_;
goto v___jp_129_;
}
}
}
v___jp_129_:
{
lean_object* v___x_131_; uint8_t v___x_132_; lean_object* v___x_134_; 
v___x_131_ = lean_alloc_ctor(0, 0, 2);
v___x_132_ = lean_unbox(v_val_125_);
lean_dec(v_val_125_);
lean_ctor_set_uint8(v___x_131_, 0, v___x_132_);
lean_ctor_set_uint8(v___x_131_, 1, v___y_130_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_131_);
v___x_134_ = v___x_127_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_131_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor___boxed(lean_object* v_prev_x3f_144_, lean_object* v_stx_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor(v_prev_x3f_144_, v_stx_145_);
lean_dec(v_prev_x3f_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(lean_object* v_s_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_box(0);
v___x_150_ = lean_string_append(v_a_148_, v_s_147_);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg___boxed(lean_object* v_s_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v_s_152_, v_a_153_);
lean_dec_ref(v_s_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out(lean_object* v_s_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v_s_155_, v_a_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___boxed(lean_object* v_s_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out(v_s_159_, v_a_160_, v_a_161_);
lean_dec(v_a_160_);
lean_dec_ref(v_s_159_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(lean_object* v_x_163_, lean_object* v_x_164_){
_start:
{
lean_object* v_zero_165_; uint8_t v_isZero_166_; 
v_zero_165_ = lean_unsigned_to_nat(0u);
v_isZero_166_ = lean_nat_dec_eq(v_x_163_, v_zero_165_);
if (v_isZero_166_ == 1)
{
lean_dec(v_x_163_);
return v_x_164_;
}
else
{
uint32_t v___x_167_; lean_object* v_one_168_; lean_object* v_n_169_; lean_object* v___x_170_; 
v___x_167_ = 32;
v_one_168_ = lean_unsigned_to_nat(1u);
v_n_169_ = lean_nat_sub(v_x_163_, v_one_168_);
lean_dec(v_x_163_);
v___x_170_ = lean_string_push(v_x_164_, v___x_167_);
v_x_163_ = v_n_169_;
v_x_164_ = v___x_170_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_179_ = lean_string_utf8_byte_size(v_a_175_);
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_dec_le(v___x_180_, v___x_179_);
if (v___x_181_ == 0)
{
goto v___jp_176_;
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_182_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = lean_nat_sub(v___x_179_, v___x_180_);
v___x_185_ = lean_string_memcmp(v_a_175_, v___x_182_, v___x_184_, v___x_183_, v___x_180_);
lean_dec(v___x_184_);
if (v___x_185_ == 0)
{
goto v___jp_176_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
lean_inc(v_a_174_);
v___x_187_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(v_a_174_, v___x_186_);
v___x_188_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_187_, v_a_175_);
lean_dec_ref(v___x_187_);
return v___x_188_;
}
}
v___jp_176_:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_box(0);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v_a_175_);
return v___x_178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___boxed(lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_189_, v_a_190_);
lean_dec(v_a_189_);
return v_res_191_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg(uint8_t v___x_192_, lean_object* v___x_193_, lean_object* v___x_194_, lean_object* v___x_195_, lean_object* v_a_196_, uint8_t v_b_197_){
_start:
{
lean_object* v___x_198_; uint8_t v_decide_199_; 
v___x_198_ = lean_nat_sub(v___x_193_, v___x_194_);
v_decide_199_ = lean_nat_dec_eq(v_a_196_, v___x_198_);
lean_dec(v___x_198_);
if (v_decide_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_nat_add(v___x_194_, v_a_196_);
lean_dec(v_a_196_);
v___x_201_ = lean_string_utf8_next_fast(v___x_195_, v___x_200_);
lean_dec(v___x_200_);
v___x_202_ = lean_nat_sub(v___x_201_, v___x_194_);
if (v_b_197_ == 0)
{
{
lean_object* _tmp_4 = v___x_202_;
uint8_t _tmp_5 = v___x_192_;
v_a_196_ = _tmp_4;
v_b_197_ = _tmp_5;
}
goto _start;
}
else
{
v_a_196_ = v___x_202_;
v_b_197_ = v_decide_199_;
goto _start;
}
}
else
{
lean_dec(v_a_196_);
return v_b_197_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg___boxed(lean_object* v___x_205_, lean_object* v___x_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v_a_209_, lean_object* v_b_210_){
_start:
{
uint8_t v___x_1742__boxed_211_; uint8_t v_b_boxed_212_; uint8_t v_res_213_; lean_object* v_r_214_; 
v___x_1742__boxed_211_ = lean_unbox(v___x_205_);
v_b_boxed_212_ = lean_unbox(v_b_210_);
v_res_213_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg(v___x_1742__boxed_211_, v___x_206_, v___x_207_, v___x_208_, v_a_209_, v_b_boxed_212_);
lean_dec_ref(v___x_208_);
lean_dec(v___x_207_);
lean_dec(v___x_206_);
v_r_214_ = lean_box(v_res_213_);
return v_r_214_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__0(lean_object* v_s_215_, lean_object* v_pos_216_){
_start:
{
lean_object* v_str_217_; lean_object* v_startInclusive_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v_decide_222_; 
v_str_217_ = lean_ctor_get(v_s_215_, 0);
v_startInclusive_218_ = lean_ctor_get(v_s_215_, 1);
v___x_219_ = lean_nat_add(v_startInclusive_218_, v_pos_216_);
v___x_220_ = lean_nat_sub(v___x_219_, v_startInclusive_218_);
v___x_221_ = lean_unsigned_to_nat(0u);
v_decide_222_ = lean_nat_dec_eq(v___x_220_, v___x_221_);
if (v_decide_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint32_t v___x_228_; uint32_t v___x_229_; uint8_t v___x_230_; 
lean_inc(v_startInclusive_218_);
lean_inc_ref(v_str_217_);
v___x_223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_223_, 0, v_str_217_);
lean_ctor_set(v___x_223_, 1, v_startInclusive_218_);
lean_ctor_set(v___x_223_, 2, v___x_219_);
v___x_224_ = lean_unsigned_to_nat(1u);
v___x_225_ = lean_nat_sub(v___x_220_, v___x_224_);
lean_dec(v___x_220_);
v___x_226_ = l_String_Slice_posLE(v___x_223_, v___x_225_);
lean_dec_ref_known(v___x_223_, 3);
v___x_227_ = lean_nat_add(v_startInclusive_218_, v___x_226_);
v___x_228_ = lean_string_utf8_get_fast(v_str_217_, v___x_227_);
lean_dec(v___x_227_);
v___x_229_ = 92;
v___x_230_ = lean_uint32_dec_eq(v___x_228_, v___x_229_);
if (v___x_230_ == 0)
{
lean_dec(v___x_226_);
return v_pos_216_;
}
else
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_nat_add(v___x_226_, v___x_224_);
v___x_232_ = lean_nat_dec_le(v___x_231_, v_pos_216_);
lean_dec(v___x_231_);
if (v___x_232_ == 0)
{
lean_dec(v___x_226_);
return v_pos_216_;
}
else
{
lean_dec(v_pos_216_);
v_pos_216_ = v___x_226_;
goto _start;
}
}
}
else
{
lean_dec(v___x_220_);
lean_dec(v___x_219_);
return v_pos_216_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__0___boxed(lean_object* v_s_234_, lean_object* v_pos_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__0(v_s_234_, v_pos_235_);
lean_dec_ref(v_s_234_);
return v_res_236_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline(lean_object* v_s_237_){
_start:
{
lean_object* v_str_238_; lean_object* v_startInclusive_239_; lean_object* v_endExclusive_240_; lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v_str_238_ = lean_ctor_get(v_s_237_, 0);
lean_inc_ref(v_str_238_);
v_startInclusive_239_ = lean_ctor_get(v_s_237_, 1);
lean_inc(v_startInclusive_239_);
v_endExclusive_240_ = lean_ctor_get(v_s_237_, 2);
v___x_241_ = lean_unsigned_to_nat(1u);
v___x_242_ = lean_nat_sub(v_endExclusive_240_, v_startInclusive_239_);
v___x_243_ = lean_nat_dec_le(v___x_241_, v___x_242_);
if (v___x_243_ == 0)
{
lean_dec(v___x_242_);
lean_dec(v_startInclusive_239_);
lean_dec_ref(v_str_238_);
lean_dec_ref(v_s_237_);
return v___x_243_;
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_244_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = lean_nat_sub(v___x_242_, v___x_241_);
v___x_247_ = lean_nat_add(v_startInclusive_239_, v___x_246_);
lean_dec(v___x_246_);
v___x_248_ = lean_string_memcmp(v_str_238_, v___x_244_, v___x_247_, v___x_245_, v___x_241_);
lean_dec(v___x_247_);
if (v___x_248_ == 0)
{
lean_dec(v___x_242_);
lean_dec(v_startInclusive_239_);
lean_dec_ref(v_str_238_);
lean_dec_ref(v_s_237_);
return v___x_248_;
}
else
{
lean_object* v___x_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_262_; 
v___x_249_ = l_String_Slice_Pos_prevn(v_s_237_, v___x_242_, v___x_241_);
v_isSharedCheck_262_ = !lean_is_exclusive(v_s_237_);
if (v_isSharedCheck_262_ == 0)
{
lean_object* v_unused_263_; lean_object* v_unused_264_; lean_object* v_unused_265_; 
v_unused_263_ = lean_ctor_get(v_s_237_, 2);
lean_dec(v_unused_263_);
v_unused_264_ = lean_ctor_get(v_s_237_, 1);
lean_dec(v_unused_264_);
v_unused_265_ = lean_ctor_get(v_s_237_, 0);
lean_dec(v_unused_265_);
v___x_251_ = v_s_237_;
v_isShared_252_ = v_isSharedCheck_262_;
goto v_resetjp_250_;
}
else
{
lean_dec(v_s_237_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_262_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = lean_nat_add(v_startInclusive_239_, v___x_249_);
lean_dec(v___x_249_);
lean_inc(v___x_253_);
lean_inc(v_startInclusive_239_);
lean_inc_ref(v_str_238_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 2, v___x_253_);
v___x_255_ = v___x_251_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_str_238_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_startInclusive_239_);
lean_ctor_set(v_reuseFailAlloc_261_, 2, v___x_253_);
v___x_255_ = v_reuseFailAlloc_261_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; uint8_t v___x_260_; 
v___x_256_ = lean_nat_sub(v___x_253_, v_startInclusive_239_);
v___x_257_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__0(v___x_255_, v___x_256_);
lean_dec_ref(v___x_255_);
v___x_258_ = lean_nat_add(v_startInclusive_239_, v___x_257_);
lean_dec(v___x_257_);
lean_dec(v_startInclusive_239_);
v___x_259_ = 0;
v___x_260_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg(v___x_248_, v___x_253_, v___x_258_, v_str_238_, v___x_245_, v___x_259_);
lean_dec_ref(v_str_238_);
lean_dec(v___x_258_);
lean_dec(v___x_253_);
return v___x_260_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline___boxed(lean_object* v_s_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline(v_s_266_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1(uint8_t v___x_269_, lean_object* v___x_270_, lean_object* v___x_271_, lean_object* v___x_272_, lean_object* v___x_273_, lean_object* v_inst_274_, lean_object* v_R_275_, lean_object* v_a_276_, uint8_t v_b_277_, lean_object* v_c_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___redArg(v___x_269_, v___x_270_, v___x_271_, v___x_273_, v_a_276_, v_b_277_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1___boxed(lean_object* v___x_280_, lean_object* v___x_281_, lean_object* v___x_282_, lean_object* v___x_283_, lean_object* v___x_284_, lean_object* v_inst_285_, lean_object* v_R_286_, lean_object* v_a_287_, lean_object* v_b_288_, lean_object* v_c_289_){
_start:
{
uint8_t v___x_1849__boxed_290_; uint8_t v_b_boxed_291_; uint8_t v_res_292_; lean_object* v_r_293_; 
v___x_1849__boxed_290_ = lean_unbox(v___x_280_);
v_b_boxed_291_ = lean_unbox(v_b_288_);
v_res_292_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline_spec__1(v___x_1849__boxed_290_, v___x_281_, v___x_282_, v___x_283_, v___x_284_, v_inst_285_, v_R_286_, v_a_287_, v_b_boxed_291_, v_c_289_);
lean_dec_ref(v___x_284_);
lean_dec_ref(v___x_283_);
lean_dec(v___x_282_);
lean_dec(v___x_281_);
v_r_293_ = lean_box(v_res_292_);
return v_r_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_trailingLineEndings(lean_object* v_s_294_){
_start:
{
lean_object* v_str_295_; lean_object* v_startInclusive_296_; lean_object* v_endExclusive_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v_str_295_ = lean_ctor_get(v_s_294_, 0);
lean_inc_ref(v_str_295_);
v_startInclusive_296_ = lean_ctor_get(v_s_294_, 1);
lean_inc(v_startInclusive_296_);
v_endExclusive_297_ = lean_ctor_get(v_s_294_, 2);
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_sub(v_endExclusive_297_, v_startInclusive_296_);
v___x_300_ = lean_nat_dec_le(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
lean_dec(v___x_299_);
lean_dec(v_startInclusive_296_);
lean_dec_ref(v_str_295_);
lean_dec_ref(v_s_294_);
v___x_301_ = lean_unsigned_to_nat(0u);
return v___x_301_;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_302_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = lean_nat_sub(v___x_299_, v___x_298_);
v___x_305_ = lean_nat_add(v_startInclusive_296_, v___x_304_);
lean_dec(v___x_304_);
v___x_306_ = lean_string_memcmp(v_str_295_, v___x_302_, v___x_305_, v___x_303_, v___x_298_);
lean_dec(v___x_305_);
if (v___x_306_ == 0)
{
lean_dec(v___x_299_);
lean_dec(v_startInclusive_296_);
lean_dec_ref(v_str_295_);
lean_dec_ref(v_s_294_);
return v___x_303_;
}
else
{
uint8_t v___x_307_; 
lean_inc_ref(v_s_294_);
v___x_307_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline(v_s_294_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_323_; 
v___x_308_ = l_String_Slice_Pos_prevn(v_s_294_, v___x_299_, v___x_298_);
v_isSharedCheck_323_ = !lean_is_exclusive(v_s_294_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; lean_object* v_unused_325_; lean_object* v_unused_326_; 
v_unused_324_ = lean_ctor_get(v_s_294_, 2);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_s_294_, 1);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v_s_294_, 0);
lean_dec(v_unused_326_);
v___x_310_ = v_s_294_;
v_isShared_311_ = v_isSharedCheck_323_;
goto v_resetjp_309_;
}
else
{
lean_dec(v_s_294_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_323_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_312_ = lean_nat_add(v_startInclusive_296_, v___x_308_);
lean_dec(v___x_308_);
v___x_313_ = lean_nat_sub(v___x_312_, v_startInclusive_296_);
v___x_314_ = lean_nat_dec_le(v___x_298_, v___x_313_);
if (v___x_314_ == 0)
{
lean_dec(v___x_313_);
lean_dec(v___x_312_);
lean_del_object(v___x_310_);
lean_dec(v_startInclusive_296_);
lean_dec_ref(v_str_295_);
return v___x_298_;
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_315_ = lean_nat_sub(v___x_313_, v___x_298_);
lean_dec(v___x_313_);
v___x_316_ = lean_nat_add(v_startInclusive_296_, v___x_315_);
lean_dec(v___x_315_);
v___x_317_ = lean_string_memcmp(v_str_295_, v___x_302_, v___x_316_, v___x_303_, v___x_298_);
lean_dec(v___x_316_);
if (v___x_317_ == 0)
{
lean_dec(v___x_312_);
lean_del_object(v___x_310_);
lean_dec(v_startInclusive_296_);
lean_dec_ref(v_str_295_);
return v___x_298_;
}
else
{
lean_object* v_s_319_; 
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 2, v___x_312_);
v_s_319_ = v___x_310_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_str_295_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_startInclusive_296_);
lean_ctor_set(v_reuseFailAlloc_322_, 2, v___x_312_);
v_s_319_ = v_reuseFailAlloc_322_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
uint8_t v___x_320_; 
v___x_320_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endsWithEscapedNewline(v_s_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
v___x_321_ = lean_unsigned_to_nat(2u);
return v___x_321_;
}
else
{
return v___x_298_;
}
}
}
}
}
}
else
{
lean_dec(v___x_299_);
lean_dec(v_startInclusive_296_);
lean_dec_ref(v_str_295_);
lean_dec_ref(v_s_294_);
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock_spec__0(lean_object* v_x_327_, lean_object* v_x_328_){
_start:
{
lean_object* v_zero_329_; uint8_t v_isZero_330_; 
v_zero_329_ = lean_unsigned_to_nat(0u);
v_isZero_330_ = lean_nat_dec_eq(v_x_327_, v_zero_329_);
if (v_isZero_330_ == 1)
{
lean_dec(v_x_327_);
return v_x_328_;
}
else
{
uint32_t v___x_331_; lean_object* v_one_332_; lean_object* v_n_333_; lean_object* v___x_334_; 
v___x_331_ = 10;
v_one_332_ = lean_unsigned_to_nat(1u);
v_n_333_ = lean_nat_sub(v_x_327_, v_one_332_);
lean_dec(v_x_327_);
v___x_334_ = lean_string_push(v_x_328_, v___x_331_);
v_x_327_ = v_n_333_;
v_x_328_ = v___x_334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(lean_object* v_a_336_){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_337_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_338_ = lean_unsigned_to_nat(2u);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_string_utf8_byte_size(v_a_336_);
lean_inc_ref(v_a_336_);
v___x_341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_341_, 0, v_a_336_);
lean_ctor_set(v___x_341_, 1, v___x_339_);
lean_ctor_set(v___x_341_, 2, v___x_340_);
v___x_342_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_trailingLineEndings(v___x_341_);
v___x_343_ = lean_nat_sub(v___x_338_, v___x_342_);
lean_dec(v___x_342_);
v___x_344_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock_spec__0(v___x_343_, v___x_337_);
v___x_345_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_344_, v_a_336_);
lean_dec_ref(v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock(lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_a_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___boxed(lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock(v_a_349_, v_a_350_);
lean_dec(v_a_349_);
return v_res_351_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_isSpecial(uint32_t v_a_352_){
_start:
{
uint32_t v___x_353_; uint8_t v___x_354_; 
v___x_353_ = 92;
v___x_354_ = lean_uint32_dec_eq(v_a_352_, v___x_353_);
if (v___x_354_ == 0)
{
uint32_t v___x_355_; uint8_t v___x_356_; 
v___x_355_ = 42;
v___x_356_ = lean_uint32_dec_eq(v_a_352_, v___x_355_);
if (v___x_356_ == 0)
{
uint32_t v___x_357_; uint8_t v___x_358_; 
v___x_357_ = 95;
v___x_358_ = lean_uint32_dec_eq(v_a_352_, v___x_357_);
if (v___x_358_ == 0)
{
uint32_t v___x_359_; uint8_t v___x_360_; 
v___x_359_ = 91;
v___x_360_ = lean_uint32_dec_eq(v_a_352_, v___x_359_);
if (v___x_360_ == 0)
{
uint32_t v___x_361_; uint8_t v___x_362_; 
v___x_361_ = 93;
v___x_362_ = lean_uint32_dec_eq(v_a_352_, v___x_361_);
if (v___x_362_ == 0)
{
uint32_t v___x_363_; uint8_t v___x_364_; 
v___x_363_ = 123;
v___x_364_ = lean_uint32_dec_eq(v_a_352_, v___x_363_);
if (v___x_364_ == 0)
{
uint32_t v___x_365_; uint8_t v___x_366_; 
v___x_365_ = 125;
v___x_366_ = lean_uint32_dec_eq(v_a_352_, v___x_365_);
if (v___x_366_ == 0)
{
uint32_t v___x_367_; uint8_t v___x_368_; 
v___x_367_ = 96;
v___x_368_ = lean_uint32_dec_eq(v_a_352_, v___x_367_);
if (v___x_368_ == 0)
{
uint32_t v___x_369_; uint8_t v___x_370_; 
v___x_369_ = 33;
v___x_370_ = lean_uint32_dec_eq(v_a_352_, v___x_369_);
if (v___x_370_ == 0)
{
uint32_t v___x_371_; uint8_t v___x_372_; 
v___x_371_ = 36;
v___x_372_ = lean_uint32_dec_eq(v_a_352_, v___x_371_);
if (v___x_372_ == 0)
{
uint32_t v___x_373_; uint8_t v___x_374_; 
v___x_373_ = 10;
v___x_374_ = lean_uint32_dec_eq(v_a_352_, v___x_373_);
return v___x_374_;
}
else
{
return v___x_372_;
}
}
else
{
return v___x_370_;
}
}
else
{
return v___x_368_;
}
}
else
{
return v___x_366_;
}
}
else
{
return v___x_364_;
}
}
else
{
return v___x_362_;
}
}
else
{
return v___x_360_;
}
}
else
{
return v___x_358_;
}
}
else
{
return v___x_356_;
}
}
else
{
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_isSpecial___boxed(lean_object* v_a_375_){
_start:
{
uint32_t v_a_242__boxed_376_; uint8_t v_res_377_; lean_object* v_r_378_; 
v_a_242__boxed_376_ = lean_unbox_uint32(v_a_375_);
lean_dec(v_a_375_);
v_res_377_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_isSpecial(v_a_242__boxed_376_);
v_r_378_ = lean_box(v_res_377_);
return v_r_378_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg(lean_object* v___x_379_, lean_object* v_value_380_, lean_object* v_a_381_, lean_object* v_b_382_){
_start:
{
uint8_t v_decide_383_; 
v_decide_383_ = lean_nat_dec_eq(v_a_381_, v___x_379_);
if (v_decide_383_ == 0)
{
uint32_t v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
v___x_384_ = lean_string_utf8_get_fast(v_value_380_, v_a_381_);
v___x_385_ = lean_string_utf8_next_fast(v_value_380_, v_a_381_);
lean_dec(v_a_381_);
v___x_386_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_isSpecial(v___x_384_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; 
v___x_387_ = lean_string_push(v_b_382_, v___x_384_);
v_a_381_ = v___x_385_;
v_b_382_ = v___x_387_;
goto _start;
}
else
{
uint32_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = 92;
v___x_390_ = lean_string_push(v_b_382_, v___x_389_);
v___x_391_ = lean_string_push(v___x_390_, v___x_384_);
v_a_381_ = v___x_385_;
v_b_382_ = v___x_391_;
goto _start;
}
}
else
{
lean_dec(v_a_381_);
return v_b_382_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg___boxed(lean_object* v___x_393_, lean_object* v_value_394_, lean_object* v_a_395_, lean_object* v_b_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg(v___x_393_, v_value_394_, v_a_395_, v_b_396_);
lean_dec_ref(v_value_394_);
lean_dec(v___x_393_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped(lean_object* v_value_398_){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_399_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_400_ = lean_string_utf8_byte_size(v_value_398_);
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg(v___x_400_, v_value_398_, v___x_401_, v___x_399_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped___boxed(lean_object* v_value_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped(v_value_403_);
lean_dec_ref(v_value_403_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0(lean_object* v___x_405_, lean_object* v___x_406_, lean_object* v_value_407_, lean_object* v_inst_408_, lean_object* v_R_409_, lean_object* v_a_410_, lean_object* v_b_411_, lean_object* v_c_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___redArg(v___x_406_, v_value_407_, v_a_410_, v_b_411_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0___boxed(lean_object* v___x_414_, lean_object* v___x_415_, lean_object* v_value_416_, lean_object* v_inst_417_, lean_object* v_R_418_, lean_object* v_a_419_, lean_object* v_b_420_, lean_object* v_c_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped_spec__0(v___x_414_, v___x_415_, v_value_416_, v_inst_417_, v_R_418_, v_a_419_, v_b_420_, v_c_421_);
lean_dec_ref(v_value_416_);
lean_dec(v___x_415_);
lean_dec_ref(v___x_414_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape_spec__0(lean_object* v_s_423_, lean_object* v_pos_424_){
_start:
{
lean_object* v_str_425_; lean_object* v_startInclusive_426_; lean_object* v_endExclusive_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v_decide_431_; 
v_str_425_ = lean_ctor_get(v_s_423_, 0);
v_startInclusive_426_ = lean_ctor_get(v_s_423_, 1);
v_endExclusive_427_ = lean_ctor_get(v_s_423_, 2);
v___x_428_ = lean_nat_add(v_startInclusive_426_, v_pos_424_);
v___x_429_ = lean_unsigned_to_nat(0u);
v___x_430_ = lean_nat_sub(v_endExclusive_427_, v___x_428_);
v_decide_431_ = lean_nat_dec_eq(v___x_429_, v___x_430_);
lean_dec(v___x_430_);
if (v_decide_431_ == 0)
{
uint32_t v___x_432_; uint32_t v___x_433_; uint8_t v___x_434_; 
v___x_432_ = lean_string_utf8_get_fast(v_str_425_, v___x_428_);
v___x_433_ = 48;
v___x_434_ = lean_uint32_dec_le(v___x_433_, v___x_432_);
if (v___x_434_ == 0)
{
lean_dec(v___x_428_);
return v_pos_424_;
}
else
{
uint32_t v___x_435_; uint8_t v___x_436_; 
v___x_435_ = 57;
v___x_436_ = lean_uint32_dec_le(v___x_432_, v___x_435_);
if (v___x_436_ == 0)
{
lean_dec(v___x_428_);
return v_pos_424_;
}
else
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_437_ = lean_string_utf8_next_fast(v_str_425_, v___x_428_);
v___x_438_ = lean_nat_sub(v___x_437_, v___x_428_);
lean_dec(v___x_428_);
v___x_439_ = lean_nat_add(v_pos_424_, v___x_438_);
lean_dec(v___x_438_);
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_441_ = lean_nat_add(v_pos_424_, v___x_440_);
v___x_442_ = lean_nat_dec_le(v___x_441_, v___x_439_);
lean_dec(v___x_441_);
if (v___x_442_ == 0)
{
lean_dec(v___x_439_);
return v_pos_424_;
}
else
{
lean_dec(v_pos_424_);
v_pos_424_ = v___x_439_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_428_);
return v_pos_424_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape_spec__0___boxed(lean_object* v_s_444_, lean_object* v_pos_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape_spec__0(v_s_444_, v_pos_445_);
lean_dec_ref(v_s_444_);
return v_res_446_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape(lean_object* v_text_460_){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v_afterDigits_465_; uint8_t v___y_467_; uint8_t v___y_478_; lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_string_utf8_byte_size(v_text_460_);
lean_inc_ref_n(v_text_460_, 2);
v___x_463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_463_, 0, v_text_460_);
lean_ctor_set(v___x_463_, 1, v___x_461_);
lean_ctor_set(v___x_463_, 2, v___x_462_);
v___x_464_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape_spec__0(v___x_463_, v___x_461_);
lean_inc(v___x_464_);
v_afterDigits_465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_afterDigits_465_, 0, v_text_460_);
lean_ctor_set(v_afterDigits_465_, 1, v___x_464_);
lean_ctor_set(v_afterDigits_465_, 2, v___x_462_);
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_dec_le(v___x_543_, v___x_462_);
if (v___x_544_ == 0)
{
goto v___jp_538_;
}
else
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_546_ = lean_string_memcmp(v_text_460_, v___x_545_, v___x_461_, v___x_461_, v___x_543_);
if (v___x_546_ == 0)
{
goto v___jp_538_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_546_;
}
}
v___jp_466_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = l_String_Slice_Pos_nextn(v_afterDigits_465_, v___x_461_, v___x_468_);
lean_dec_ref_known(v_afterDigits_465_, 3);
v___x_470_ = lean_nat_add(v___x_464_, v___x_469_);
lean_dec(v___x_469_);
lean_dec(v___x_464_);
v___x_471_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_471_, 0, v_text_460_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
lean_ctor_set(v___x_471_, 2, v___x_462_);
v___x_472_ = l_String_Slice_Pos_get_x3f(v___x_471_, v___x_461_);
lean_dec_ref_known(v___x_471_, 3);
if (lean_obj_tag(v___x_472_) == 0)
{
return v___y_467_;
}
else
{
lean_object* v_val_473_; uint32_t v___x_474_; uint32_t v___x_475_; uint8_t v___x_476_; 
v_val_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_val_473_);
lean_dec_ref_known(v___x_472_, 1);
v___x_474_ = 32;
v___x_475_ = lean_unbox_uint32(v_val_473_);
lean_dec(v_val_473_);
v___x_476_ = lean_uint32_dec_eq(v___x_475_, v___x_474_);
return v___x_476_;
}
}
v___jp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = lean_nat_sub(v___x_462_, v___x_464_);
v___x_481_ = lean_nat_dec_le(v___x_479_, v___x_480_);
lean_dec(v___x_480_);
if (v___x_481_ == 0)
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref(v_text_460_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__0));
v___x_483_ = lean_string_memcmp(v_text_460_, v___x_482_, v___x_464_, v___x_461_, v___x_479_);
if (v___x_483_ == 0)
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref(v_text_460_);
return v___x_483_;
}
else
{
v___y_467_ = v___y_478_;
goto v___jp_466_;
}
}
}
v___jp_484_:
{
lean_object* v___x_485_; 
v___x_485_ = l_String_Slice_Pos_get_x3f(v___x_463_, v___x_461_);
lean_dec_ref_known(v___x_463_, 3);
if (lean_obj_tag(v___x_485_) == 0)
{
uint8_t v___x_486_; 
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref(v_text_460_);
v___x_486_ = 0;
return v___x_486_;
}
else
{
lean_object* v_val_487_; uint32_t v___x_488_; uint32_t v___x_489_; uint8_t v___x_490_; 
v_val_487_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_val_487_);
lean_dec_ref_known(v___x_485_, 1);
v___x_488_ = 48;
v___x_489_ = lean_unbox_uint32(v_val_487_);
v___x_490_ = lean_uint32_dec_le(v___x_488_, v___x_489_);
if (v___x_490_ == 0)
{
lean_dec(v_val_487_);
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref(v_text_460_);
return v___x_490_;
}
else
{
uint32_t v___x_491_; uint32_t v___x_492_; uint8_t v___x_493_; 
v___x_491_ = 57;
v___x_492_ = lean_unbox_uint32(v_val_487_);
lean_dec(v_val_487_);
v___x_493_ = lean_uint32_dec_le(v___x_492_, v___x_491_);
if (v___x_493_ == 0)
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref(v_text_460_);
return v___x_493_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = lean_nat_sub(v___x_462_, v___x_464_);
v___x_496_ = lean_nat_dec_le(v___x_494_, v___x_495_);
lean_dec(v___x_495_);
if (v___x_496_ == 0)
{
v___y_478_ = v___x_493_;
goto v___jp_477_;
}
else
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__1));
v___x_498_ = lean_string_memcmp(v_text_460_, v___x_497_, v___x_464_, v___x_461_, v___x_494_);
if (v___x_498_ == 0)
{
v___y_478_ = v___x_493_;
goto v___jp_477_;
}
else
{
v___y_467_ = v___x_493_;
goto v___jp_466_;
}
}
}
}
}
}
v___jp_499_:
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = lean_unsigned_to_nat(3u);
v___x_501_ = lean_nat_dec_le(v___x_500_, v___x_462_);
if (v___x_501_ == 0)
{
goto v___jp_484_;
}
else
{
lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_502_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__2));
v___x_503_ = lean_string_memcmp(v_text_460_, v___x_502_, v___x_461_, v___x_461_, v___x_500_);
if (v___x_503_ == 0)
{
goto v___jp_484_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_503_;
}
}
}
v___jp_504_:
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(3u);
v___x_506_ = lean_nat_dec_le(v___x_505_, v___x_462_);
if (v___x_506_ == 0)
{
goto v___jp_499_;
}
else
{
lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_507_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__3));
v___x_508_ = lean_string_memcmp(v_text_460_, v___x_507_, v___x_461_, v___x_461_, v___x_505_);
if (v___x_508_ == 0)
{
goto v___jp_499_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_508_;
}
}
}
v___jp_509_:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(2u);
v___x_511_ = lean_nat_dec_le(v___x_510_, v___x_462_);
if (v___x_511_ == 0)
{
goto v___jp_504_;
}
else
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__4));
v___x_513_ = lean_string_memcmp(v_text_460_, v___x_512_, v___x_461_, v___x_461_, v___x_510_);
if (v___x_513_ == 0)
{
goto v___jp_504_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_513_;
}
}
}
v___jp_514_:
{
lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_515_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__5));
v___x_516_ = lean_string_dec_eq(v_text_460_, v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = lean_unsigned_to_nat(2u);
v___x_518_ = lean_nat_dec_le(v___x_517_, v___x_462_);
if (v___x_518_ == 0)
{
goto v___jp_509_;
}
else
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__6));
v___x_520_ = lean_string_memcmp(v_text_460_, v___x_519_, v___x_461_, v___x_461_, v___x_517_);
if (v___x_520_ == 0)
{
goto v___jp_509_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_520_;
}
}
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_516_;
}
}
v___jp_521_:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__7));
v___x_523_ = lean_string_dec_eq(v_text_460_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_unsigned_to_nat(2u);
v___x_525_ = lean_nat_dec_le(v___x_524_, v___x_462_);
if (v___x_525_ == 0)
{
goto v___jp_514_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__8));
v___x_527_ = lean_string_memcmp(v_text_460_, v___x_526_, v___x_461_, v___x_461_, v___x_524_);
if (v___x_527_ == 0)
{
goto v___jp_514_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_527_;
}
}
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_523_;
}
}
v___jp_528_:
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_nat_dec_le(v___x_529_, v___x_462_);
if (v___x_530_ == 0)
{
goto v___jp_521_;
}
else
{
lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_531_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__9));
v___x_532_ = lean_string_memcmp(v_text_460_, v___x_531_, v___x_461_, v___x_461_, v___x_529_);
if (v___x_532_ == 0)
{
goto v___jp_521_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_532_;
}
}
}
v___jp_533_:
{
lean_object* v___x_534_; uint8_t v___x_535_; 
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_nat_dec_le(v___x_534_, v___x_462_);
if (v___x_535_ == 0)
{
goto v___jp_528_;
}
else
{
lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_536_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__10));
v___x_537_ = lean_string_memcmp(v_text_460_, v___x_536_, v___x_461_, v___x_461_, v___x_534_);
if (v___x_537_ == 0)
{
goto v___jp_528_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_537_;
}
}
}
v___jp_538_:
{
lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_539_ = lean_unsigned_to_nat(1u);
v___x_540_ = lean_nat_dec_le(v___x_539_, v___x_462_);
if (v___x_540_ == 0)
{
goto v___jp_533_;
}
else
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__11));
v___x_542_ = lean_string_memcmp(v_text_460_, v___x_541_, v___x_461_, v___x_461_, v___x_539_);
if (v___x_542_ == 0)
{
goto v___jp_533_;
}
else
{
lean_dec_ref_known(v_afterDigits_465_, 3);
lean_dec(v___x_464_);
lean_dec_ref_known(v___x_463_, 3);
lean_dec_ref(v_text_460_);
return v___x_542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___boxed(lean_object* v_text_547_){
_start:
{
uint8_t v_res_548_; lean_object* v_r_549_; 
v_res_548_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape(v_text_547_);
v_r_549_ = lean_box(v_res_548_);
return v_r_549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString(uint8_t v_atLineStart_551_, lean_object* v_value_552_){
_start:
{
lean_object* v_text_553_; 
v_text_553_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_escaped(v_value_552_);
if (v_atLineStart_551_ == 0)
{
lean_dec_ref(v_value_552_);
return v_text_553_;
}
else
{
uint8_t v___x_554_; 
v___x_554_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape(v_value_552_);
if (v___x_554_ == 0)
{
return v_text_553_;
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0));
v___x_556_ = lean_string_append(v___x_555_, v_text_553_);
lean_dec_ref(v_text_553_);
return v___x_556_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___boxed(lean_object* v_atLineStart_557_, lean_object* v_value_558_){
_start:
{
uint8_t v_atLineStart_boxed_559_; lean_object* v_res_560_; 
v_atLineStart_boxed_559_ = lean_unbox(v_atLineStart_557_);
v_res_560_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString(v_atLineStart_boxed_559_, v_value_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0(lean_object* v_s_561_, lean_object* v_pos_562_){
_start:
{
lean_object* v_str_563_; lean_object* v_startInclusive_564_; lean_object* v_endExclusive_565_; lean_object* v___x_566_; lean_object* v___x_575_; lean_object* v___x_576_; uint8_t v_decide_577_; 
v_str_563_ = lean_ctor_get(v_s_561_, 0);
v_startInclusive_564_ = lean_ctor_get(v_s_561_, 1);
v_endExclusive_565_ = lean_ctor_get(v_s_561_, 2);
v___x_566_ = lean_nat_add(v_startInclusive_564_, v_pos_562_);
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_576_ = lean_nat_sub(v_endExclusive_565_, v___x_566_);
v_decide_577_ = lean_nat_dec_eq(v___x_575_, v___x_576_);
lean_dec(v___x_576_);
if (v_decide_577_ == 0)
{
uint32_t v___x_578_; uint32_t v___x_579_; uint8_t v___x_580_; 
v___x_578_ = lean_string_utf8_get_fast(v_str_563_, v___x_566_);
v___x_579_ = 32;
v___x_580_ = lean_uint32_dec_eq(v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
uint32_t v___x_581_; uint8_t v___x_582_; 
v___x_581_ = 9;
v___x_582_ = lean_uint32_dec_eq(v___x_578_, v___x_581_);
if (v___x_582_ == 0)
{
uint32_t v___x_583_; uint8_t v___x_584_; 
v___x_583_ = 13;
v___x_584_ = lean_uint32_dec_eq(v___x_578_, v___x_583_);
if (v___x_584_ == 0)
{
uint32_t v___x_585_; uint8_t v___x_586_; 
v___x_585_ = 10;
v___x_586_ = lean_uint32_dec_eq(v___x_578_, v___x_585_);
if (v___x_586_ == 0)
{
lean_dec(v___x_566_);
return v_pos_562_;
}
else
{
goto v___jp_567_;
}
}
else
{
goto v___jp_567_;
}
}
else
{
goto v___jp_567_;
}
}
else
{
goto v___jp_567_;
}
}
else
{
lean_dec(v___x_566_);
return v_pos_562_;
}
v___jp_567_:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_568_ = lean_string_utf8_next_fast(v_str_563_, v___x_566_);
v___x_569_ = lean_nat_sub(v___x_568_, v___x_566_);
lean_dec(v___x_566_);
v___x_570_ = lean_nat_add(v_pos_562_, v___x_569_);
lean_dec(v___x_569_);
v___x_571_ = lean_unsigned_to_nat(1u);
v___x_572_ = lean_nat_add(v_pos_562_, v___x_571_);
v___x_573_ = lean_nat_dec_le(v___x_572_, v___x_570_);
lean_dec(v___x_572_);
if (v___x_573_ == 0)
{
lean_dec(v___x_570_);
return v_pos_562_;
}
else
{
lean_dec(v_pos_562_);
v_pos_562_ = v___x_570_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0___boxed(lean_object* v_s_587_, lean_object* v_pos_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0(v_s_587_, v_pos_588_);
lean_dec_ref(v_s_587_);
return v_res_589_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(lean_object* v_s_590_){
_start:
{
lean_object* v_startInclusive_591_; lean_object* v_endExclusive_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v_decide_596_; 
v_startInclusive_591_ = lean_ctor_get(v_s_590_, 1);
v_endExclusive_592_ = lean_ctor_get(v_s_590_, 2);
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0(v_s_590_, v___x_593_);
v___x_595_ = lean_nat_sub(v_endExclusive_592_, v_startInclusive_591_);
v_decide_596_ = lean_nat_dec_eq(v___x_594_, v___x_595_);
lean_dec(v___x_595_);
lean_dec(v___x_594_);
return v_decide_596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank___boxed(lean_object* v_s_597_){
_start:
{
uint8_t v_res_598_; lean_object* v_r_599_; 
v_res_598_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(v_s_597_);
lean_dec_ref(v_s_597_);
v_r_599_ = lean_box(v_res_598_);
return v_r_599_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg(lean_object* v_s_600_, lean_object* v_a_601_, lean_object* v_b_602_){
_start:
{
lean_object* v_str_603_; lean_object* v_startInclusive_604_; lean_object* v_endExclusive_605_; lean_object* v___x_606_; uint8_t v_decide_607_; 
v_str_603_ = lean_ctor_get(v_s_600_, 0);
v_startInclusive_604_ = lean_ctor_get(v_s_600_, 1);
v_endExclusive_605_ = lean_ctor_get(v_s_600_, 2);
v___x_606_ = lean_nat_sub(v_endExclusive_605_, v_startInclusive_604_);
v_decide_607_ = lean_nat_dec_eq(v_a_601_, v___x_606_);
lean_dec(v___x_606_);
if (v_decide_607_ == 0)
{
lean_object* v___x_608_; uint32_t v___x_609_; uint32_t v___x_610_; uint8_t v___x_611_; 
v___x_608_ = lean_nat_add(v_startInclusive_604_, v_a_601_);
lean_dec(v_a_601_);
v___x_609_ = lean_string_utf8_get_fast(v_str_603_, v___x_608_);
v___x_610_ = 32;
v___x_611_ = lean_uint32_dec_eq(v___x_609_, v___x_610_);
if (v___x_611_ == 0)
{
lean_dec(v___x_608_);
return v_b_602_;
}
else
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_612_ = lean_string_utf8_next_fast(v_str_603_, v___x_608_);
lean_dec(v___x_608_);
v___x_613_ = lean_nat_sub(v___x_612_, v_startInclusive_604_);
v___x_614_ = lean_unsigned_to_nat(1u);
v___x_615_ = lean_nat_add(v_b_602_, v___x_614_);
lean_dec(v_b_602_);
v_a_601_ = v___x_613_;
v_b_602_ = v___x_615_;
goto _start;
}
}
else
{
lean_dec(v_a_601_);
return v_b_602_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg___boxed(lean_object* v_s_617_, lean_object* v_a_618_, lean_object* v_b_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg(v_s_617_, v_a_618_, v_b_619_);
lean_dec_ref(v_s_617_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation(lean_object* v_s_621_){
_start:
{
lean_object* v_n_622_; lean_object* v___x_623_; 
v_n_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg(v_s_621_, v_n_622_, v_n_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation___boxed(lean_object* v_s_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation(v_s_624_);
lean_dec_ref(v_s_624_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0(lean_object* v_s_626_, lean_object* v_inst_627_, lean_object* v_R_628_, lean_object* v_a_629_, lean_object* v_b_630_, lean_object* v_c_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___redArg(v_s_626_, v_a_629_, v_b_630_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0___boxed(lean_object* v_s_633_, lean_object* v_inst_634_, lean_object* v_R_635_, lean_object* v_a_636_, lean_object* v_b_637_, lean_object* v_c_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation_spec__0(v_s_633_, v_inst_634_, v_R_635_, v_a_636_, v_b_637_, v_c_638_);
lean_dec_ref(v_s_633_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(lean_object* v___x_640_, lean_object* v___x_641_, lean_object* v_src_642_, lean_object* v___x_643_, lean_object* v_a_644_, lean_object* v_b_645_){
_start:
{
lean_object* v_it_647_; lean_object* v_out_648_; 
if (lean_obj_tag(v_a_644_) == 0)
{
lean_object* v_currPos_667_; lean_object* v_searcher_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_697_; 
v_currPos_667_ = lean_ctor_get(v_a_644_, 0);
v_searcher_668_ = lean_ctor_get(v_a_644_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v_a_644_);
if (v_isSharedCheck_697_ == 0)
{
v___x_670_ = v_a_644_;
v_isShared_671_ = v_isSharedCheck_697_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_searcher_668_);
lean_inc(v_currPos_667_);
lean_dec(v_a_644_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_697_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_str_672_; lean_object* v_startInclusive_673_; lean_object* v_endExclusive_674_; lean_object* v___x_675_; uint8_t v_decide_676_; 
v_str_672_ = lean_ctor_get(v___x_640_, 0);
v_startInclusive_673_ = lean_ctor_get(v___x_640_, 1);
v_endExclusive_674_ = lean_ctor_get(v___x_640_, 2);
v___x_675_ = lean_nat_sub(v_endExclusive_674_, v_startInclusive_673_);
v_decide_676_ = lean_nat_dec_eq(v_searcher_668_, v___x_675_);
lean_dec(v___x_675_);
if (v_decide_676_ == 0)
{
uint32_t v___x_677_; lean_object* v___x_678_; uint32_t v___x_679_; uint8_t v___x_680_; 
v___x_677_ = 10;
v___x_678_ = lean_nat_add(v_startInclusive_673_, v_searcher_668_);
v___x_679_ = lean_string_utf8_get_fast(v_str_672_, v___x_678_);
v___x_680_ = lean_uint32_dec_eq(v___x_679_, v___x_677_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
lean_dec(v_searcher_668_);
v___x_681_ = lean_string_utf8_next_fast(v_str_672_, v___x_678_);
lean_dec(v___x_678_);
v___x_682_ = lean_nat_sub(v___x_681_, v_startInclusive_673_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_682_);
v___x_684_ = v___x_670_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_currPos_667_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_682_);
v___x_684_ = v_reuseFailAlloc_686_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
v_a_644_ = v___x_684_;
goto _start;
}
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v_slice_690_; lean_object* v_nextIt_692_; 
v___x_687_ = lean_string_utf8_next_fast(v_str_672_, v___x_678_);
v___x_688_ = lean_nat_sub(v___x_687_, v___x_678_);
lean_dec(v___x_678_);
v___x_689_ = lean_nat_add(v_searcher_668_, v___x_688_);
lean_dec(v___x_688_);
lean_dec(v_searcher_668_);
lean_inc_ref(v___x_640_);
v_slice_690_ = l_String_Slice_slice_x21(v___x_640_, v_currPos_667_, v___x_689_);
lean_dec(v_currPos_667_);
lean_inc(v___x_689_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_689_);
lean_ctor_set(v___x_670_, 0, v___x_689_);
v_nextIt_692_ = v___x_670_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v___x_689_);
v_nextIt_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
v_it_647_ = v_nextIt_692_;
v_out_648_ = v_slice_690_;
goto v___jp_646_;
}
}
}
else
{
uint8_t v_decide_694_; 
lean_del_object(v___x_670_);
lean_dec(v_searcher_668_);
v_decide_694_ = lean_nat_dec_eq(v_currPos_667_, v___x_641_);
if (v_decide_694_ == 0)
{
lean_object* v_slice_695_; lean_object* v___x_696_; 
lean_inc(v___x_643_);
lean_inc_ref(v_src_642_);
v_slice_695_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_slice_695_, 0, v_src_642_);
lean_ctor_set(v_slice_695_, 1, v_currPos_667_);
lean_ctor_set(v_slice_695_, 2, v___x_643_);
v___x_696_ = lean_box(1);
v_it_647_ = v___x_696_;
v_out_648_ = v_slice_695_;
goto v___jp_646_;
}
else
{
lean_dec(v_currPos_667_);
lean_dec(v___x_643_);
lean_dec_ref(v_src_642_);
lean_dec_ref(v___x_640_);
return v_b_645_;
}
}
}
}
else
{
lean_dec(v___x_643_);
lean_dec_ref(v_src_642_);
lean_dec_ref(v___x_640_);
return v_b_645_;
}
v___jp_646_:
{
lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_649_ = l_String_Slice_lines_lineMap(v_out_648_);
v___x_650_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation(v___x_649_);
lean_dec_ref(v___x_649_);
if (lean_obj_tag(v_b_645_) == 0)
{
lean_object* v___x_652_; 
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
v_a_644_ = v_it_647_;
v_b_645_ = v___x_652_;
goto _start;
}
else
{
lean_object* v_val_654_; uint8_t v___x_655_; 
v_val_654_ = lean_ctor_get(v_b_645_, 0);
v___x_655_ = lean_nat_dec_le(v___x_651_, v_val_654_);
if (v___x_655_ == 0)
{
lean_dec(v___x_651_);
v_a_644_ = v_it_647_;
goto _start;
}
else
{
lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_664_; 
v_isSharedCheck_664_ = !lean_is_exclusive(v_b_645_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v_b_645_, 0);
lean_dec(v_unused_665_);
v___x_658_ = v_b_645_;
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
else
{
lean_dec(v_b_645_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 0, v___x_651_);
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_651_);
v___x_661_ = v_reuseFailAlloc_663_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
v_a_644_ = v_it_647_;
v_b_645_ = v___x_661_;
goto _start;
}
}
}
}
}
else
{
lean_dec_ref(v___x_649_);
v_a_644_ = v_it_647_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg___boxed(lean_object* v___x_698_, lean_object* v___x_699_, lean_object* v_src_700_, lean_object* v___x_701_, lean_object* v_a_702_, lean_object* v_b_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_698_, v___x_699_, v_src_700_, v___x_701_, v_a_702_, v_b_703_);
lean_dec(v___x_699_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg(lean_object* v___x_705_, lean_object* v___x_706_, lean_object* v_src_707_, lean_object* v___x_708_, lean_object* v_a_709_, lean_object* v_b_710_){
_start:
{
lean_object* v_it_712_; lean_object* v_out_713_; 
if (lean_obj_tag(v_a_709_) == 0)
{
lean_object* v_currPos_732_; lean_object* v_searcher_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_762_; 
v_currPos_732_ = lean_ctor_get(v_a_709_, 0);
v_searcher_733_ = lean_ctor_get(v_a_709_, 1);
v_isSharedCheck_762_ = !lean_is_exclusive(v_a_709_);
if (v_isSharedCheck_762_ == 0)
{
v___x_735_ = v_a_709_;
v_isShared_736_ = v_isSharedCheck_762_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_searcher_733_);
lean_inc(v_currPos_732_);
lean_dec(v_a_709_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_762_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_str_737_; lean_object* v_startInclusive_738_; lean_object* v_endExclusive_739_; lean_object* v___x_740_; uint8_t v_decide_741_; 
v_str_737_ = lean_ctor_get(v___x_705_, 0);
v_startInclusive_738_ = lean_ctor_get(v___x_705_, 1);
v_endExclusive_739_ = lean_ctor_get(v___x_705_, 2);
v___x_740_ = lean_nat_sub(v_endExclusive_739_, v_startInclusive_738_);
v_decide_741_ = lean_nat_dec_eq(v_searcher_733_, v___x_740_);
lean_dec(v___x_740_);
if (v_decide_741_ == 0)
{
lean_object* v___x_742_; uint32_t v___x_743_; uint32_t v___x_744_; uint8_t v___x_745_; 
v___x_742_ = lean_nat_add(v_startInclusive_738_, v_searcher_733_);
v___x_743_ = lean_string_utf8_get_fast(v_str_737_, v___x_742_);
v___x_744_ = 10;
v___x_745_ = lean_uint32_dec_eq(v___x_743_, v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
lean_dec(v_searcher_733_);
v___x_746_ = lean_string_utf8_next_fast(v_str_737_, v___x_742_);
lean_dec(v___x_742_);
v___x_747_ = lean_nat_sub(v___x_746_, v_startInclusive_738_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 1, v___x_747_);
v___x_749_ = v___x_735_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_currPos_732_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v___x_747_);
v___x_749_ = v_reuseFailAlloc_751_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_750_; 
v___x_750_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_705_, v___x_706_, v_src_707_, v___x_708_, v___x_749_, v_b_710_);
return v___x_750_;
}
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v_slice_755_; lean_object* v_nextIt_757_; 
v___x_752_ = lean_string_utf8_next_fast(v_str_737_, v___x_742_);
v___x_753_ = lean_nat_sub(v___x_752_, v___x_742_);
lean_dec(v___x_742_);
v___x_754_ = lean_nat_add(v_searcher_733_, v___x_753_);
lean_dec(v___x_753_);
lean_dec(v_searcher_733_);
lean_inc_ref(v___x_705_);
v_slice_755_ = l_String_Slice_slice_x21(v___x_705_, v_currPos_732_, v___x_754_);
lean_dec(v_currPos_732_);
lean_inc(v___x_754_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 1, v___x_754_);
lean_ctor_set(v___x_735_, 0, v___x_754_);
v_nextIt_757_ = v___x_735_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v___x_754_);
v_nextIt_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
v_it_712_ = v_nextIt_757_;
v_out_713_ = v_slice_755_;
goto v___jp_711_;
}
}
}
else
{
uint8_t v_decide_759_; 
lean_del_object(v___x_735_);
lean_dec(v_searcher_733_);
v_decide_759_ = lean_nat_dec_eq(v_currPos_732_, v___x_706_);
if (v_decide_759_ == 0)
{
lean_object* v_slice_760_; lean_object* v___x_761_; 
lean_inc(v___x_708_);
lean_inc_ref(v_src_707_);
v_slice_760_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_slice_760_, 0, v_src_707_);
lean_ctor_set(v_slice_760_, 1, v_currPos_732_);
lean_ctor_set(v_slice_760_, 2, v___x_708_);
v___x_761_ = lean_box(1);
v_it_712_ = v___x_761_;
v_out_713_ = v_slice_760_;
goto v___jp_711_;
}
else
{
lean_dec(v_currPos_732_);
lean_dec(v___x_708_);
lean_dec_ref(v_src_707_);
lean_dec_ref(v___x_705_);
return v_b_710_;
}
}
}
}
else
{
lean_dec(v___x_708_);
lean_dec_ref(v_src_707_);
lean_dec_ref(v___x_705_);
return v_b_710_;
}
v___jp_711_:
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = l_String_Slice_lines_lineMap(v_out_713_);
v___x_715_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; 
v___x_716_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_indentation(v___x_714_);
lean_dec_ref(v___x_714_);
if (lean_obj_tag(v_b_710_) == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
v___x_718_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_705_, v___x_706_, v_src_707_, v___x_708_, v_it_712_, v___x_717_);
return v___x_718_;
}
else
{
lean_object* v_val_719_; uint8_t v___x_720_; 
v_val_719_ = lean_ctor_get(v_b_710_, 0);
v___x_720_ = lean_nat_dec_le(v___x_716_, v_val_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
lean_dec(v___x_716_);
v___x_721_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_705_, v___x_706_, v_src_707_, v___x_708_, v_it_712_, v_b_710_);
return v___x_721_;
}
else
{
lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_729_; 
v_isSharedCheck_729_ = !lean_is_exclusive(v_b_710_);
if (v_isSharedCheck_729_ == 0)
{
lean_object* v_unused_730_; 
v_unused_730_ = lean_ctor_get(v_b_710_, 0);
lean_dec(v_unused_730_);
v___x_723_ = v_b_710_;
v_isShared_724_ = v_isSharedCheck_729_;
goto v_resetjp_722_;
}
else
{
lean_dec(v_b_710_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_729_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 0, v___x_716_);
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_716_);
v___x_726_ = v_reuseFailAlloc_728_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; 
v___x_727_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_705_, v___x_706_, v_src_707_, v___x_708_, v_it_712_, v___x_726_);
return v___x_727_;
}
}
}
}
}
else
{
lean_object* v___x_731_; 
lean_dec_ref(v___x_714_);
v___x_731_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_705_, v___x_706_, v_src_707_, v___x_708_, v_it_712_, v_b_710_);
return v___x_731_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg___boxed(lean_object* v___x_763_, lean_object* v___x_764_, lean_object* v_src_765_, lean_object* v___x_766_, lean_object* v_a_767_, lean_object* v_b_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg(v___x_763_, v___x_764_, v_src_765_, v___x_766_, v_a_767_, v_b_768_);
lean_dec(v___x_764_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(lean_object* v___x_770_, lean_object* v_i_771_, lean_object* v_out_772_, lean_object* v_pending_773_, lean_object* v___y_774_, lean_object* v_____r_775_, lean_object* v_out_776_){
_start:
{
lean_object* v_str_777_; lean_object* v_startInclusive_778_; lean_object* v_endExclusive_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_str_777_ = lean_ctor_get(v___x_770_, 0);
v_startInclusive_778_ = lean_ctor_get(v___x_770_, 1);
v_endExclusive_779_ = lean_ctor_get(v___x_770_, 2);
v___x_780_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(v_i_771_, v_out_772_);
v___x_781_ = lean_string_append(v_out_776_, v___x_780_);
lean_dec_ref(v___x_780_);
lean_inc(v_pending_773_);
v___x_782_ = l_String_Slice_Pos_nextn(v___x_770_, v_pending_773_, v___y_774_);
v___x_783_ = lean_nat_add(v_startInclusive_778_, v___x_782_);
lean_dec(v___x_782_);
v___x_784_ = lean_string_utf8_extract_fast(v_str_777_, v___x_783_, v_endExclusive_779_);
lean_dec(v___x_783_);
v___x_785_ = lean_string_append(v___x_781_, v___x_784_);
lean_dec_ref(v___x_784_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v_pending_773_);
v___x_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0___boxed(lean_object* v___x_788_, lean_object* v_i_789_, lean_object* v_out_790_, lean_object* v_pending_791_, lean_object* v___y_792_, lean_object* v_____r_793_, lean_object* v_out_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(v___x_788_, v_i_789_, v_out_790_, v_pending_791_, v___y_792_, v_____r_793_, v_out_794_);
lean_dec_ref(v___x_788_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(lean_object* v_i_796_, lean_object* v___y_797_, lean_object* v___x_798_, lean_object* v___x_799_, lean_object* v_src_800_, lean_object* v___x_801_, lean_object* v_a_802_, lean_object* v_b_803_){
_start:
{
lean_object* v___y_805_; lean_object* v_val_806_; 
if (lean_obj_tag(v_a_802_) == 0)
{
lean_object* v_currPos_810_; lean_object* v_searcher_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_874_; 
v_currPos_810_ = lean_ctor_get(v_a_802_, 0);
v_searcher_811_ = lean_ctor_get(v_a_802_, 1);
v_isSharedCheck_874_ = !lean_is_exclusive(v_a_802_);
if (v_isSharedCheck_874_ == 0)
{
v___x_813_ = v_a_802_;
v_isShared_814_ = v_isSharedCheck_874_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_searcher_811_);
lean_inc(v_currPos_810_);
lean_dec(v_a_802_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_874_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_str_815_; lean_object* v_startInclusive_816_; lean_object* v_endExclusive_817_; lean_object* v_out_818_; lean_object* v_pending_819_; lean_object* v_it_821_; lean_object* v_out_822_; lean_object* v___x_852_; uint8_t v_decide_853_; 
v_str_815_ = lean_ctor_get(v___x_798_, 0);
v_startInclusive_816_ = lean_ctor_get(v___x_798_, 1);
v_endExclusive_817_ = lean_ctor_get(v___x_798_, 2);
v_out_818_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v_pending_819_ = lean_unsigned_to_nat(0u);
v___x_852_ = lean_nat_sub(v_endExclusive_817_, v_startInclusive_816_);
v_decide_853_ = lean_nat_dec_eq(v_searcher_811_, v___x_852_);
lean_dec(v___x_852_);
if (v_decide_853_ == 0)
{
uint32_t v___x_854_; lean_object* v___x_855_; uint32_t v___x_856_; uint8_t v___x_857_; 
v___x_854_ = 10;
v___x_855_ = lean_nat_add(v_startInclusive_816_, v_searcher_811_);
v___x_856_ = lean_string_utf8_get_fast(v_str_815_, v___x_855_);
v___x_857_ = lean_uint32_dec_eq(v___x_856_, v___x_854_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
lean_dec(v_searcher_811_);
v___x_858_ = lean_string_utf8_next_fast(v_str_815_, v___x_855_);
lean_dec(v___x_855_);
v___x_859_ = lean_nat_sub(v___x_858_, v_startInclusive_816_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 1, v___x_859_);
v___x_861_ = v___x_813_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_currPos_810_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v___x_859_);
v___x_861_ = v_reuseFailAlloc_863_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
v_a_802_ = v___x_861_;
goto _start;
}
}
else
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v_slice_867_; lean_object* v_nextIt_869_; 
v___x_864_ = lean_string_utf8_next_fast(v_str_815_, v___x_855_);
v___x_865_ = lean_nat_sub(v___x_864_, v___x_855_);
lean_dec(v___x_855_);
v___x_866_ = lean_nat_add(v_searcher_811_, v___x_865_);
lean_dec(v___x_865_);
lean_dec(v_searcher_811_);
lean_inc_ref(v___x_798_);
v_slice_867_ = l_String_Slice_slice_x21(v___x_798_, v_currPos_810_, v___x_866_);
lean_dec(v_currPos_810_);
lean_inc(v___x_866_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 1, v___x_866_);
lean_ctor_set(v___x_813_, 0, v___x_866_);
v_nextIt_869_ = v___x_813_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v___x_866_);
v_nextIt_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
v_it_821_ = v_nextIt_869_;
v_out_822_ = v_slice_867_;
goto v___jp_820_;
}
}
}
else
{
uint8_t v_decide_871_; 
lean_del_object(v___x_813_);
lean_dec(v_searcher_811_);
v_decide_871_ = lean_nat_dec_eq(v_currPos_810_, v___x_799_);
if (v_decide_871_ == 0)
{
lean_object* v_slice_872_; lean_object* v___x_873_; 
lean_inc(v___x_801_);
lean_inc_ref(v_src_800_);
v_slice_872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_slice_872_, 0, v_src_800_);
lean_ctor_set(v_slice_872_, 1, v_currPos_810_);
lean_ctor_set(v_slice_872_, 2, v___x_801_);
v___x_873_ = lean_box(1);
v_it_821_ = v___x_873_;
v_out_822_ = v_slice_872_;
goto v___jp_820_;
}
else
{
lean_dec(v_currPos_810_);
lean_dec(v___x_801_);
lean_dec_ref(v_src_800_);
lean_dec_ref(v___x_798_);
lean_dec(v___y_797_);
lean_dec(v_i_796_);
return v_b_803_;
}
}
v___jp_820_:
{
lean_object* v_fst_823_; lean_object* v_snd_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_851_; 
v_fst_823_ = lean_ctor_get(v_b_803_, 0);
v_snd_824_ = lean_ctor_get(v_b_803_, 1);
v_isSharedCheck_851_ = !lean_is_exclusive(v_b_803_);
if (v_isSharedCheck_851_ == 0)
{
v___x_826_ = v_b_803_;
v_isShared_827_ = v_isSharedCheck_851_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_snd_824_);
lean_inc(v_fst_823_);
lean_dec(v_b_803_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_851_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = l_String_Slice_lines_lineMap(v_out_822_);
v___x_829_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; uint8_t v___x_831_; 
lean_del_object(v___x_826_);
v___x_830_ = lean_string_utf8_byte_size(v_fst_823_);
v___x_831_ = lean_nat_dec_eq(v___x_830_, v_pending_819_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_832_ = lean_unsigned_to_nat(1u);
v___x_833_ = lean_nat_add(v_snd_824_, v___x_832_);
lean_dec(v_snd_824_);
v___x_834_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock_spec__0(v___x_833_, v_fst_823_);
v___x_835_ = lean_box(0);
lean_inc(v___y_797_);
lean_inc(v_i_796_);
v___x_836_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(v___x_828_, v_i_796_, v_out_818_, v_pending_819_, v___y_797_, v___x_835_, v___x_834_);
lean_dec_ref(v___x_828_);
v___y_805_ = v_it_821_;
v_val_806_ = v___x_836_;
goto v___jp_804_;
}
else
{
lean_object* v___x_837_; lean_object* v___x_838_; 
lean_dec(v_snd_824_);
v___x_837_ = lean_box(0);
lean_inc(v___y_797_);
lean_inc(v_i_796_);
v___x_838_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(v___x_828_, v_i_796_, v_out_818_, v_pending_819_, v___y_797_, v___x_837_, v_fst_823_);
lean_dec_ref(v___x_828_);
v___y_805_ = v_it_821_;
v_val_806_ = v___x_838_;
goto v___jp_804_;
}
}
else
{
lean_object* v___x_839_; uint8_t v___x_840_; 
lean_dec_ref(v___x_828_);
v___x_839_ = lean_string_utf8_byte_size(v_fst_823_);
v___x_840_ = lean_nat_dec_eq(v___x_839_, v_pending_819_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_841_ = lean_unsigned_to_nat(1u);
v___x_842_ = lean_nat_add(v_snd_824_, v___x_841_);
lean_dec(v_snd_824_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 1, v___x_842_);
v___x_844_ = v___x_826_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_fst_823_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___x_842_);
v___x_844_ = v_reuseFailAlloc_846_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
v_a_802_ = v_it_821_;
v_b_803_ = v___x_844_;
goto _start;
}
}
else
{
lean_object* v___x_848_; 
if (v_isShared_827_ == 0)
{
v___x_848_ = v___x_826_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_fst_823_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v_snd_824_);
v___x_848_ = v_reuseFailAlloc_850_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
v_a_802_ = v_it_821_;
v_b_803_ = v___x_848_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_801_);
lean_dec_ref(v_src_800_);
lean_dec_ref(v___x_798_);
lean_dec(v___y_797_);
lean_dec(v_i_796_);
return v_b_803_;
}
v___jp_804_:
{
if (lean_obj_tag(v_val_806_) == 0)
{
lean_object* v_a_807_; 
lean_dec(v___y_805_);
lean_dec(v___x_801_);
lean_dec_ref(v_src_800_);
lean_dec_ref(v___x_798_);
lean_dec(v___y_797_);
lean_dec(v_i_796_);
v_a_807_ = lean_ctor_get(v_val_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v_val_806_, 1);
return v_a_807_;
}
else
{
lean_object* v_a_808_; 
v_a_808_ = lean_ctor_get(v_val_806_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v_val_806_, 1);
v_a_802_ = v___y_805_;
v_b_803_ = v_a_808_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg___boxed(lean_object* v_i_875_, lean_object* v___y_876_, lean_object* v___x_877_, lean_object* v___x_878_, lean_object* v_src_879_, lean_object* v___x_880_, lean_object* v_a_881_, lean_object* v_b_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(v_i_875_, v___y_876_, v___x_877_, v___x_878_, v_src_879_, v___x_880_, v_a_881_, v_b_882_);
lean_dec(v___x_878_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg(lean_object* v_i_884_, lean_object* v___y_885_, lean_object* v___x_886_, lean_object* v___x_887_, lean_object* v_src_888_, lean_object* v___x_889_, lean_object* v_a_890_, lean_object* v_b_891_){
_start:
{
lean_object* v___y_893_; lean_object* v_val_894_; 
if (lean_obj_tag(v_a_890_) == 0)
{
lean_object* v_currPos_898_; lean_object* v_searcher_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_962_; 
v_currPos_898_ = lean_ctor_get(v_a_890_, 0);
v_searcher_899_ = lean_ctor_get(v_a_890_, 1);
v_isSharedCheck_962_ = !lean_is_exclusive(v_a_890_);
if (v_isSharedCheck_962_ == 0)
{
v___x_901_ = v_a_890_;
v_isShared_902_ = v_isSharedCheck_962_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_searcher_899_);
lean_inc(v_currPos_898_);
lean_dec(v_a_890_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_962_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v_str_903_; lean_object* v_startInclusive_904_; lean_object* v_endExclusive_905_; lean_object* v_out_906_; lean_object* v_pending_907_; lean_object* v_it_909_; lean_object* v_out_910_; lean_object* v___x_940_; uint8_t v_decide_941_; 
v_str_903_ = lean_ctor_get(v___x_886_, 0);
v_startInclusive_904_ = lean_ctor_get(v___x_886_, 1);
v_endExclusive_905_ = lean_ctor_get(v___x_886_, 2);
v_out_906_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v_pending_907_ = lean_unsigned_to_nat(0u);
v___x_940_ = lean_nat_sub(v_endExclusive_905_, v_startInclusive_904_);
v_decide_941_ = lean_nat_dec_eq(v_searcher_899_, v___x_940_);
lean_dec(v___x_940_);
if (v_decide_941_ == 0)
{
lean_object* v___x_942_; uint32_t v___x_943_; uint32_t v___x_944_; uint8_t v___x_945_; 
v___x_942_ = lean_nat_add(v_startInclusive_904_, v_searcher_899_);
v___x_943_ = lean_string_utf8_get_fast(v_str_903_, v___x_942_);
v___x_944_ = 10;
v___x_945_ = lean_uint32_dec_eq(v___x_943_, v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_949_; 
lean_dec(v_searcher_899_);
v___x_946_ = lean_string_utf8_next_fast(v_str_903_, v___x_942_);
lean_dec(v___x_942_);
v___x_947_ = lean_nat_sub(v___x_946_, v_startInclusive_904_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 1, v___x_947_);
v___x_949_ = v___x_901_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_currPos_898_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_947_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
v___x_950_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(v_i_884_, v___y_885_, v___x_886_, v___x_887_, v_src_888_, v___x_889_, v___x_949_, v_b_891_);
return v___x_950_;
}
}
else
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v_slice_955_; lean_object* v_nextIt_957_; 
v___x_952_ = lean_string_utf8_next_fast(v_str_903_, v___x_942_);
v___x_953_ = lean_nat_sub(v___x_952_, v___x_942_);
lean_dec(v___x_942_);
v___x_954_ = lean_nat_add(v_searcher_899_, v___x_953_);
lean_dec(v___x_953_);
lean_dec(v_searcher_899_);
lean_inc_ref(v___x_886_);
v_slice_955_ = l_String_Slice_slice_x21(v___x_886_, v_currPos_898_, v___x_954_);
lean_dec(v_currPos_898_);
lean_inc(v___x_954_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 1, v___x_954_);
lean_ctor_set(v___x_901_, 0, v___x_954_);
v_nextIt_957_ = v___x_901_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v___x_954_);
v_nextIt_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
v_it_909_ = v_nextIt_957_;
v_out_910_ = v_slice_955_;
goto v___jp_908_;
}
}
}
else
{
uint8_t v_decide_959_; 
lean_del_object(v___x_901_);
lean_dec(v_searcher_899_);
v_decide_959_ = lean_nat_dec_eq(v_currPos_898_, v___x_887_);
if (v_decide_959_ == 0)
{
lean_object* v_slice_960_; lean_object* v___x_961_; 
lean_inc(v___x_889_);
lean_inc_ref(v_src_888_);
v_slice_960_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_slice_960_, 0, v_src_888_);
lean_ctor_set(v_slice_960_, 1, v_currPos_898_);
lean_ctor_set(v_slice_960_, 2, v___x_889_);
v___x_961_ = lean_box(1);
v_it_909_ = v___x_961_;
v_out_910_ = v_slice_960_;
goto v___jp_908_;
}
else
{
lean_dec(v_currPos_898_);
lean_dec(v___x_889_);
lean_dec_ref(v_src_888_);
lean_dec_ref(v___x_886_);
lean_dec(v___y_885_);
lean_dec(v_i_884_);
return v_b_891_;
}
}
v___jp_908_:
{
lean_object* v_fst_911_; lean_object* v_snd_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_939_; 
v_fst_911_ = lean_ctor_get(v_b_891_, 0);
v_snd_912_ = lean_ctor_get(v_b_891_, 1);
v_isSharedCheck_939_ = !lean_is_exclusive(v_b_891_);
if (v_isSharedCheck_939_ == 0)
{
v___x_914_ = v_b_891_;
v_isShared_915_ = v_isSharedCheck_939_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_snd_912_);
lean_inc(v_fst_911_);
lean_dec(v_b_891_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_939_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; uint8_t v___x_917_; 
v___x_916_ = l_String_Slice_lines_lineMap(v_out_910_);
v___x_917_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank(v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; uint8_t v___x_919_; 
lean_del_object(v___x_914_);
v___x_918_ = lean_string_utf8_byte_size(v_fst_911_);
v___x_919_ = lean_nat_dec_eq(v___x_918_, v_pending_907_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = lean_nat_add(v_snd_912_, v___x_920_);
lean_dec(v_snd_912_);
v___x_922_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock_spec__0(v___x_921_, v_fst_911_);
v___x_923_ = lean_box(0);
lean_inc(v___y_885_);
lean_inc(v_i_884_);
v___x_924_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(v___x_916_, v_i_884_, v_out_906_, v_pending_907_, v___y_885_, v___x_923_, v___x_922_);
lean_dec_ref(v___x_916_);
v___y_893_ = v_it_909_;
v_val_894_ = v___x_924_;
goto v___jp_892_;
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v_snd_912_);
v___x_925_ = lean_box(0);
lean_inc(v___y_885_);
lean_inc(v_i_884_);
v___x_926_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___lam__0(v___x_916_, v_i_884_, v_out_906_, v_pending_907_, v___y_885_, v___x_925_, v_fst_911_);
lean_dec_ref(v___x_916_);
v___y_893_ = v_it_909_;
v_val_894_ = v___x_926_;
goto v___jp_892_;
}
}
else
{
lean_object* v___x_927_; uint8_t v___x_928_; 
lean_dec_ref(v___x_916_);
v___x_927_ = lean_string_utf8_byte_size(v_fst_911_);
v___x_928_ = lean_nat_dec_eq(v___x_927_, v_pending_907_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_929_ = lean_unsigned_to_nat(1u);
v___x_930_ = lean_nat_add(v_snd_912_, v___x_929_);
lean_dec(v_snd_912_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 1, v___x_930_);
v___x_932_ = v___x_914_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_fst_911_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v___x_930_);
v___x_932_ = v_reuseFailAlloc_934_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; 
v___x_933_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(v_i_884_, v___y_885_, v___x_886_, v___x_887_, v_src_888_, v___x_889_, v_it_909_, v___x_932_);
return v___x_933_;
}
}
else
{
lean_object* v___x_936_; 
if (v_isShared_915_ == 0)
{
v___x_936_ = v___x_914_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_fst_911_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_snd_912_);
v___x_936_ = v_reuseFailAlloc_938_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
lean_object* v___x_937_; 
v___x_937_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(v_i_884_, v___y_885_, v___x_886_, v___x_887_, v_src_888_, v___x_889_, v_it_909_, v___x_936_);
return v___x_937_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_889_);
lean_dec_ref(v_src_888_);
lean_dec_ref(v___x_886_);
lean_dec(v___y_885_);
lean_dec(v_i_884_);
return v_b_891_;
}
v___jp_892_:
{
if (lean_obj_tag(v_val_894_) == 0)
{
lean_object* v_a_895_; 
lean_dec(v___y_893_);
lean_dec(v___x_889_);
lean_dec_ref(v_src_888_);
lean_dec_ref(v___x_886_);
lean_dec(v___y_885_);
lean_dec(v_i_884_);
v_a_895_ = lean_ctor_get(v_val_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v_val_894_, 1);
return v_a_895_;
}
else
{
lean_object* v_a_896_; lean_object* v___x_897_; 
v_a_896_ = lean_ctor_get(v_val_894_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v_val_894_, 1);
v___x_897_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(v_i_884_, v___y_885_, v___x_886_, v___x_887_, v_src_888_, v___x_889_, v___y_893_, v_a_896_);
return v___x_897_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg___boxed(lean_object* v_i_963_, lean_object* v___y_964_, lean_object* v___x_965_, lean_object* v___x_966_, lean_object* v_src_967_, lean_object* v___x_968_, lean_object* v_a_969_, lean_object* v_b_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg(v_i_963_, v___y_964_, v___x_965_, v___x_966_, v_src_967_, v___x_968_, v_a_969_, v_b_970_);
lean_dec(v___x_966_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented(lean_object* v_i_975_, lean_object* v_src_976_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___y_983_; lean_object* v___x_987_; 
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_string_utf8_byte_size(v_src_976_);
lean_inc_ref_n(v_src_976_, 3);
v___x_979_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_979_, 0, v_src_976_);
lean_ctor_set(v___x_979_, 1, v___x_977_);
lean_ctor_set(v___x_979_, 2, v___x_978_);
v___x_980_ = lean_box(0);
v___x_981_ = l_String_lines(v_src_976_);
lean_inc(v___x_981_);
lean_inc_ref(v___x_979_);
v___x_987_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg(v___x_979_, v___x_978_, v_src_976_, v___x_978_, v___x_981_, v___x_980_);
if (lean_obj_tag(v___x_987_) == 0)
{
v___y_983_ = v___x_977_;
goto v___jp_982_;
}
else
{
lean_object* v_val_988_; 
v_val_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_val_988_);
lean_dec_ref_known(v___x_987_, 1);
v___y_983_ = v_val_988_;
goto v___jp_982_;
}
v___jp_982_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v_fst_986_; 
v___x_984_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented___closed__0));
v___x_985_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg(v_i_975_, v___y_983_, v___x_979_, v___x_978_, v_src_976_, v___x_978_, v___x_981_, v___x_984_);
v_fst_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_fst_986_);
lean_dec_ref(v___x_985_);
return v_fst_986_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0(lean_object* v_i_989_, lean_object* v___y_990_, lean_object* v___x_991_, lean_object* v___x_992_, lean_object* v_src_993_, lean_object* v___x_994_, lean_object* v_inst_995_, lean_object* v_R_996_, lean_object* v_a_997_, lean_object* v_b_998_, lean_object* v_c_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___redArg(v_i_989_, v___y_990_, v___x_991_, v___x_992_, v_src_993_, v___x_994_, v_a_997_, v_b_998_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0___boxed(lean_object* v_i_1001_, lean_object* v___y_1002_, lean_object* v___x_1003_, lean_object* v___x_1004_, lean_object* v_src_1005_, lean_object* v___x_1006_, lean_object* v_inst_1007_, lean_object* v_R_1008_, lean_object* v_a_1009_, lean_object* v_b_1010_, lean_object* v_c_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0(v_i_1001_, v___y_1002_, v___x_1003_, v___x_1004_, v_src_1005_, v___x_1006_, v_inst_1007_, v_R_1008_, v_a_1009_, v_b_1010_, v_c_1011_);
lean_dec(v___x_1004_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1(lean_object* v___x_1013_, lean_object* v___x_1014_, lean_object* v_src_1015_, lean_object* v___x_1016_, lean_object* v_inst_1017_, lean_object* v_R_1018_, lean_object* v_a_1019_, lean_object* v_b_1020_, lean_object* v_c_1021_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___redArg(v___x_1013_, v___x_1014_, v_src_1015_, v___x_1016_, v_a_1019_, v_b_1020_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1___boxed(lean_object* v___x_1023_, lean_object* v___x_1024_, lean_object* v_src_1025_, lean_object* v___x_1026_, lean_object* v_inst_1027_, lean_object* v_R_1028_, lean_object* v_a_1029_, lean_object* v_b_1030_, lean_object* v_c_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1(v___x_1023_, v___x_1024_, v_src_1025_, v___x_1026_, v_inst_1027_, v_R_1028_, v_a_1029_, v_b_1030_, v_c_1031_);
lean_dec(v___x_1024_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0(lean_object* v_i_1033_, lean_object* v___y_1034_, lean_object* v___x_1035_, lean_object* v___x_1036_, lean_object* v_src_1037_, lean_object* v___x_1038_, lean_object* v_inst_1039_, lean_object* v_R_1040_, lean_object* v_a_1041_, lean_object* v_b_1042_, lean_object* v_c_1043_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___redArg(v_i_1033_, v___y_1034_, v___x_1035_, v___x_1036_, v_src_1037_, v___x_1038_, v_a_1041_, v_b_1042_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0___boxed(lean_object* v_i_1045_, lean_object* v___y_1046_, lean_object* v___x_1047_, lean_object* v___x_1048_, lean_object* v_src_1049_, lean_object* v___x_1050_, lean_object* v_inst_1051_, lean_object* v_R_1052_, lean_object* v_a_1053_, lean_object* v_b_1054_, lean_object* v_c_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__0_spec__0(v_i_1045_, v___y_1046_, v___x_1047_, v___x_1048_, v_src_1049_, v___x_1050_, v_inst_1051_, v_R_1052_, v_a_1053_, v_b_1054_, v_c_1055_);
lean_dec(v___x_1048_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2(lean_object* v___x_1057_, lean_object* v___x_1058_, lean_object* v_src_1059_, lean_object* v___x_1060_, lean_object* v_inst_1061_, lean_object* v_R_1062_, lean_object* v_a_1063_, lean_object* v_b_1064_, lean_object* v_c_1065_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___redArg(v___x_1057_, v___x_1058_, v_src_1059_, v___x_1060_, v_a_1063_, v_b_1064_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2___boxed(lean_object* v___x_1067_, lean_object* v___x_1068_, lean_object* v_src_1069_, lean_object* v___x_1070_, lean_object* v_inst_1071_, lean_object* v_R_1072_, lean_object* v_a_1073_, lean_object* v_b_1074_, lean_object* v_c_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented_spec__1_spec__2(v___x_1067_, v___x_1068_, v_src_1069_, v___x_1070_, v_inst_1071_, v_R_1072_, v_a_1073_, v_b_1074_, v_c_1075_);
lean_dec(v___x_1068_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString_spec__0(lean_object* v_x_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v_zero_1079_; uint8_t v_isZero_1080_; 
v_zero_1079_ = lean_unsigned_to_nat(0u);
v_isZero_1080_ = lean_nat_dec_eq(v_x_1077_, v_zero_1079_);
if (v_isZero_1080_ == 1)
{
lean_dec(v_x_1077_);
return v_x_1078_;
}
else
{
uint32_t v___x_1081_; lean_object* v_one_1082_; lean_object* v_n_1083_; lean_object* v___x_1084_; 
v___x_1081_ = 96;
v_one_1082_ = lean_unsigned_to_nat(1u);
v_n_1083_ = lean_nat_sub(v_x_1077_, v_one_1082_);
lean_dec(v_x_1077_);
v___x_1084_ = lean_string_push(v_x_1078_, v___x_1081_);
v_x_1077_ = v_n_1083_;
v_x_1078_ = v___x_1084_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString(lean_object* v_value_1087_){
_start:
{
lean_object* v___y_1089_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1111_ = lean_string_utf8_byte_size(v_value_1087_);
v___x_1112_ = lean_unsigned_to_nat(0u);
v___x_1113_ = lean_nat_dec_eq(v___x_1111_, v___x_1112_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; uint8_t v___x_1115_; 
v___x_1114_ = lean_unsigned_to_nat(1u);
v___x_1115_ = lean_nat_dec_le(v___x_1114_, v___x_1111_);
if (v___x_1115_ == 0)
{
goto v___jp_1103_;
}
else
{
lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1116_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString___closed__0));
v___x_1117_ = lean_string_memcmp(v_value_1087_, v___x_1116_, v___x_1112_, v___x_1112_, v___x_1114_);
if (v___x_1117_ == 0)
{
goto v___jp_1103_;
}
else
{
goto v___jp_1097_;
}
}
}
else
{
lean_object* v___x_1118_; 
lean_dec_ref(v_value_1087_);
v___x_1118_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___y_1089_ = v___x_1118_;
goto v___jp_1088_;
}
v___jp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v_delim_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1090_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_1091_ = l_Lean_Doc_longestBacktickRun(v___y_1089_);
v___x_1092_ = lean_unsigned_to_nat(1u);
v___x_1093_ = lean_nat_add(v___x_1091_, v___x_1092_);
lean_dec(v___x_1091_);
v_delim_1094_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString_spec__0(v___x_1093_, v___x_1090_);
lean_inc_ref(v_delim_1094_);
v___x_1095_ = lean_string_append(v_delim_1094_, v___y_1089_);
lean_dec_ref(v___y_1089_);
v___x_1096_ = lean_string_append(v___x_1095_, v_delim_1094_);
lean_dec_ref(v_delim_1094_);
return v___x_1096_;
}
v___jp_1097_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1098_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_1099_ = lean_string_append(v___x_1098_, v_value_1087_);
lean_dec_ref(v_value_1087_);
v___x_1100_ = lean_string_append(v___x_1099_, v___x_1098_);
v___y_1089_ = v___x_1100_;
goto v___jp_1088_;
}
v___jp_1101_:
{
uint8_t v___x_1102_; 
lean_inc_ref(v_value_1087_);
v___x_1102_ = l_Lean_Doc_versoCodeBoundarySpaces(v_value_1087_);
if (v___x_1102_ == 0)
{
v___y_1089_ = v_value_1087_;
goto v___jp_1088_;
}
else
{
goto v___jp_1097_;
}
}
v___jp_1103_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1104_ = lean_string_utf8_byte_size(v_value_1087_);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_dec_le(v___x_1105_, v___x_1104_);
if (v___x_1106_ == 0)
{
goto v___jp_1101_;
}
else
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1107_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString___closed__0));
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lean_nat_sub(v___x_1104_, v___x_1105_);
v___x_1110_ = lean_string_memcmp(v_value_1087_, v___x_1107_, v___x_1109_, v___x_1108_, v___x_1105_);
lean_dec(v___x_1109_);
if (v___x_1110_ == 0)
{
goto v___jp_1101_;
}
else
{
goto v___jp_1097_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth_spec__0(uint32_t v_char_1119_, lean_object* v_as_1120_, size_t v_i_1121_, size_t v_stop_1122_, lean_object* v_b_1123_){
_start:
{
lean_object* v___y_1125_; uint8_t v___x_1129_; 
v___x_1129_ = lean_usize_dec_eq(v_i_1121_, v_stop_1122_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = lean_array_uget_borrowed(v_as_1120_, v_i_1121_);
lean_inc(v___x_1130_);
v___x_1131_ = l_Lean_Doc_InlineView_of(v___x_1130_);
if (lean_obj_tag(v___x_1131_) == 1)
{
lean_object* v_val_1132_; 
v_val_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_val_1132_);
lean_dec_ref_known(v___x_1131_, 1);
switch(lean_obj_tag(v_val_1132_))
{
case 1:
{
lean_object* v_view_1133_; lean_object* v___y_1135_; uint32_t v___x_1140_; uint8_t v___x_1141_; 
v_view_1133_ = lean_ctor_get(v_val_1132_, 0);
lean_inc_ref(v_view_1133_);
lean_dec_ref_known(v_val_1132_, 1);
v___x_1140_ = 95;
v___x_1141_ = lean_uint32_dec_eq(v_char_1119_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_unsigned_to_nat(0u);
v___y_1135_ = v___x_1142_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_unsigned_to_nat(1u);
v___y_1135_ = v___x_1143_;
goto v___jp_1134_;
}
v___jp_1134_:
{
lean_object* v_content_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v_content_1136_ = lean_ctor_get(v_view_1133_, 2);
lean_inc_ref(v_content_1136_);
lean_dec_ref(v_view_1133_);
v___x_1137_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(v_char_1119_, v_content_1136_);
lean_dec_ref(v_content_1136_);
v___x_1138_ = lean_nat_add(v___y_1135_, v___x_1137_);
lean_dec(v___x_1137_);
v___x_1139_ = lean_nat_dec_le(v_b_1123_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_dec(v___x_1138_);
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
else
{
lean_dec(v_b_1123_);
v___y_1125_ = v___x_1138_;
goto v___jp_1124_;
}
}
}
case 2:
{
lean_object* v_view_1144_; lean_object* v___y_1146_; uint32_t v___x_1151_; uint8_t v___x_1152_; 
v_view_1144_ = lean_ctor_get(v_val_1132_, 0);
lean_inc_ref(v_view_1144_);
lean_dec_ref_known(v_val_1132_, 1);
v___x_1151_ = 42;
v___x_1152_ = lean_uint32_dec_eq(v_char_1119_, v___x_1151_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_unsigned_to_nat(0u);
v___y_1146_ = v___x_1153_;
goto v___jp_1145_;
}
else
{
lean_object* v___x_1154_; 
v___x_1154_ = lean_unsigned_to_nat(1u);
v___y_1146_ = v___x_1154_;
goto v___jp_1145_;
}
v___jp_1145_:
{
lean_object* v_content_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v_content_1147_ = lean_ctor_get(v_view_1144_, 2);
lean_inc_ref(v_content_1147_);
lean_dec_ref(v_view_1144_);
v___x_1148_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(v_char_1119_, v_content_1147_);
lean_dec_ref(v_content_1147_);
v___x_1149_ = lean_nat_add(v___y_1146_, v___x_1148_);
lean_dec(v___x_1148_);
v___x_1150_ = lean_nat_dec_le(v_b_1123_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_dec(v___x_1149_);
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
else
{
lean_dec(v_b_1123_);
v___y_1125_ = v___x_1149_;
goto v___jp_1124_;
}
}
}
case 5:
{
lean_object* v_view_1155_; lean_object* v_content_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; 
v_view_1155_ = lean_ctor_get(v_val_1132_, 0);
lean_inc_ref(v_view_1155_);
lean_dec_ref_known(v_val_1132_, 1);
v_content_1156_ = lean_ctor_get(v_view_1155_, 2);
lean_inc_ref(v_content_1156_);
lean_dec_ref(v_view_1155_);
v___x_1157_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(v_char_1119_, v_content_1156_);
lean_dec_ref(v_content_1156_);
v___x_1158_ = lean_nat_dec_le(v_b_1123_, v___x_1157_);
if (v___x_1158_ == 0)
{
lean_dec(v___x_1157_);
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
else
{
lean_dec(v_b_1123_);
v___y_1125_ = v___x_1157_;
goto v___jp_1124_;
}
}
case 9:
{
lean_object* v_view_1159_; lean_object* v_content_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v_view_1159_ = lean_ctor_get(v_val_1132_, 0);
lean_inc_ref(v_view_1159_);
lean_dec_ref_known(v_val_1132_, 1);
v_content_1160_ = lean_ctor_get(v_view_1159_, 6);
lean_inc_ref(v_content_1160_);
lean_dec_ref(v_view_1159_);
v___x_1161_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(v_char_1119_, v_content_1160_);
lean_dec_ref(v_content_1160_);
v___x_1162_ = lean_nat_dec_le(v_b_1123_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_dec(v___x_1161_);
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
else
{
lean_dec(v_b_1123_);
v___y_1125_ = v___x_1161_;
goto v___jp_1124_;
}
}
default: 
{
lean_dec(v_val_1132_);
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
}
}
else
{
lean_dec(v___x_1131_);
v___y_1125_ = v_b_1123_;
goto v___jp_1124_;
}
}
else
{
return v_b_1123_;
}
v___jp_1124_:
{
size_t v___x_1126_; size_t v___x_1127_; 
v___x_1126_ = ((size_t)1ULL);
v___x_1127_ = lean_usize_add(v_i_1121_, v___x_1126_);
v_i_1121_ = v___x_1127_;
v_b_1123_ = v___y_1125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(uint32_t v_char_1163_, lean_object* v_inls_1164_){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_array_get_size(v_inls_1164_);
v___x_1167_ = lean_nat_dec_lt(v___x_1165_, v___x_1166_);
if (v___x_1167_ == 0)
{
return v___x_1165_;
}
else
{
size_t v___x_1168_; size_t v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = ((size_t)0ULL);
v___x_1169_ = lean_usize_of_nat(v___x_1166_);
v___x_1170_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth_spec__0(v_char_1163_, v_inls_1164_, v___x_1168_, v___x_1169_, v___x_1165_);
return v___x_1170_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth___boxed(lean_object* v_char_1171_, lean_object* v_inls_1172_){
_start:
{
uint32_t v_char_boxed_1173_; lean_object* v_res_1174_; 
v_char_boxed_1173_ = lean_unbox_uint32(v_char_1171_);
lean_dec(v_char_1171_);
v_res_1174_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(v_char_boxed_1173_, v_inls_1172_);
lean_dec_ref(v_inls_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth_spec__0___boxed(lean_object* v_char_1175_, lean_object* v_as_1176_, lean_object* v_i_1177_, lean_object* v_stop_1178_, lean_object* v_b_1179_){
_start:
{
uint32_t v_char_boxed_1180_; size_t v_i_boxed_1181_; size_t v_stop_boxed_1182_; lean_object* v_res_1183_; 
v_char_boxed_1180_ = lean_unbox_uint32(v_char_1175_);
lean_dec(v_char_1175_);
v_i_boxed_1181_ = lean_unbox_usize(v_i_1177_);
lean_dec(v_i_1177_);
v_stop_boxed_1182_ = lean_unbox_usize(v_stop_1178_);
lean_dec(v_stop_1178_);
v_res_1183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth_spec__0(v_char_boxed_1180_, v_as_1176_, v_i_boxed_1181_, v_stop_boxed_1182_, v_b_1179_);
lean_dec_ref(v_as_1176_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun(uint32_t v_char_1184_, lean_object* v_inls_1185_){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1186_ = lean_unsigned_to_nat(1u);
v___x_1187_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun_depth(v_char_1184_, v_inls_1185_);
v___x_1188_ = lean_nat_add(v___x_1186_, v___x_1187_);
lean_dec(v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun___boxed(lean_object* v_char_1189_, lean_object* v_inls_1190_){
_start:
{
uint32_t v_char_boxed_1191_; lean_object* v_res_1192_; 
v_char_boxed_1191_ = lean_unbox_uint32(v_char_1189_);
lean_dec(v_char_1189_);
v_res_1192_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun(v_char_boxed_1191_, v_inls_1190_);
lean_dec_ref(v_inls_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__0(lean_object* v_as_1193_, size_t v_i_1194_, size_t v_stop_1195_, lean_object* v_b_1196_){
_start:
{
lean_object* v___y_1198_; uint8_t v___x_1202_; 
v___x_1202_ = lean_usize_dec_eq(v_i_1194_, v_stop_1195_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1203_; lean_object* v_contents_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1203_ = lean_array_uget_borrowed(v_as_1193_, v_i_1194_);
v_contents_1204_ = lean_ctor_get(v___x_1203_, 2);
v___x_1205_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_contents_1204_);
v___x_1206_ = lean_nat_dec_le(v_b_1196_, v___x_1205_);
if (v___x_1206_ == 0)
{
lean_dec(v___x_1205_);
v___y_1198_ = v_b_1196_;
goto v___jp_1197_;
}
else
{
lean_dec(v_b_1196_);
v___y_1198_ = v___x_1205_;
goto v___jp_1197_;
}
}
else
{
return v_b_1196_;
}
v___jp_1197_:
{
size_t v___x_1199_; size_t v___x_1200_; 
v___x_1199_ = ((size_t)1ULL);
v___x_1200_ = lean_usize_add(v_i_1194_, v___x_1199_);
v_i_1194_ = v___x_1200_;
v_b_1196_ = v___y_1198_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__1(lean_object* v_as_1207_, size_t v_i_1208_, size_t v_stop_1209_, lean_object* v_b_1210_){
_start:
{
lean_object* v___y_1212_; uint8_t v___x_1216_; 
v___x_1216_ = lean_usize_dec_eq(v_i_1208_, v_stop_1209_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; lean_object* v_contents_1218_; lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1217_ = lean_array_uget_borrowed(v_as_1207_, v_i_1208_);
v_contents_1218_ = lean_ctor_get(v___x_1217_, 2);
v___x_1219_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_contents_1218_);
v___x_1220_ = lean_nat_dec_le(v_b_1210_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_dec(v___x_1219_);
v___y_1212_ = v_b_1210_;
goto v___jp_1211_;
}
else
{
lean_dec(v_b_1210_);
v___y_1212_ = v___x_1219_;
goto v___jp_1211_;
}
}
else
{
return v_b_1210_;
}
v___jp_1211_:
{
size_t v___x_1213_; size_t v___x_1214_; 
v___x_1213_ = ((size_t)1ULL);
v___x_1214_ = lean_usize_add(v_i_1208_, v___x_1213_);
v_i_1208_ = v___x_1214_;
v_b_1210_ = v___y_1212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__2(lean_object* v_as_1221_, size_t v_i_1222_, size_t v_stop_1223_, lean_object* v_b_1224_){
_start:
{
lean_object* v___y_1226_; uint8_t v___x_1230_; 
v___x_1230_ = lean_usize_dec_eq(v_i_1222_, v_stop_1223_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; lean_object* v_desc_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1231_ = lean_array_uget_borrowed(v_as_1221_, v_i_1222_);
v_desc_1232_ = lean_ctor_get(v___x_1231_, 3);
v___x_1233_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_desc_1232_);
v___x_1234_ = lean_nat_dec_le(v_b_1224_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_dec(v___x_1233_);
v___y_1226_ = v_b_1224_;
goto v___jp_1225_;
}
else
{
lean_dec(v_b_1224_);
v___y_1226_ = v___x_1233_;
goto v___jp_1225_;
}
}
else
{
return v_b_1224_;
}
v___jp_1225_:
{
size_t v___x_1227_; size_t v___x_1228_; 
v___x_1227_ = ((size_t)1ULL);
v___x_1228_ = lean_usize_add(v_i_1222_, v___x_1227_);
v_i_1222_ = v___x_1228_;
v_b_1224_ = v___y_1226_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__3(lean_object* v_as_1235_, size_t v_i_1236_, size_t v_stop_1237_, lean_object* v_b_1238_){
_start:
{
lean_object* v___y_1240_; lean_object* v___y_1245_; uint8_t v___x_1249_; 
v___x_1249_ = lean_usize_dec_eq(v_i_1236_, v_stop_1237_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_array_uget_borrowed(v_as_1235_, v_i_1236_);
lean_inc(v___x_1250_);
v___x_1251_ = l_Lean_Doc_BlockView_of(v___x_1250_);
if (lean_obj_tag(v___x_1251_) == 1)
{
lean_object* v_val_1252_; 
v_val_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_val_1252_);
lean_dec_ref_known(v___x_1251_, 1);
switch(lean_obj_tag(v_val_1252_))
{
case 6:
{
lean_object* v_view_1253_; lean_object* v_content_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
v_view_1253_ = lean_ctor_get(v_val_1252_, 0);
lean_inc_ref(v_view_1253_);
lean_dec_ref_known(v_val_1252_, 1);
v_content_1254_ = lean_ctor_get(v_view_1253_, 4);
lean_inc_ref(v_content_1254_);
lean_dec_ref(v_view_1253_);
v___x_1255_ = lean_unsigned_to_nat(3u);
v___x_1256_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_content_1254_);
lean_dec_ref(v_content_1254_);
v___x_1257_ = lean_nat_dec_le(v___x_1255_, v___x_1256_);
if (v___x_1257_ == 0)
{
lean_dec(v___x_1256_);
v___y_1245_ = v___x_1255_;
goto v___jp_1244_;
}
else
{
v___y_1245_ = v___x_1256_;
goto v___jp_1244_;
}
}
case 4:
{
lean_object* v_view_1258_; lean_object* v_content_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v_view_1258_ = lean_ctor_get(v_val_1252_, 0);
lean_inc_ref(v_view_1258_);
lean_dec_ref_known(v_val_1252_, 1);
v_content_1259_ = lean_ctor_get(v_view_1258_, 2);
lean_inc_ref(v_content_1259_);
lean_dec_ref(v_view_1258_);
v___x_1260_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_content_1259_);
lean_dec_ref(v_content_1259_);
v___x_1261_ = lean_nat_dec_le(v_b_1238_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_dec(v___x_1260_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
else
{
lean_dec(v_b_1238_);
v___y_1240_ = v___x_1260_;
goto v___jp_1239_;
}
}
case 1:
{
lean_object* v_view_1262_; lean_object* v_items_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v_view_1262_ = lean_ctor_get(v_val_1252_, 0);
lean_inc_ref(v_view_1262_);
lean_dec_ref_known(v_val_1252_, 1);
v_items_1263_ = lean_ctor_get(v_view_1262_, 1);
lean_inc_ref(v_items_1263_);
lean_dec_ref(v_view_1262_);
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = lean_array_get_size(v_items_1263_);
v___x_1266_ = lean_nat_dec_lt(v___x_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
lean_dec_ref(v_items_1263_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
else
{
size_t v___x_1267_; size_t v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = ((size_t)0ULL);
v___x_1268_ = lean_usize_of_nat(v___x_1265_);
v___x_1269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__0(v_items_1263_, v___x_1267_, v___x_1268_, v_b_1238_);
lean_dec_ref(v_items_1263_);
v___y_1240_ = v___x_1269_;
goto v___jp_1239_;
}
}
case 2:
{
lean_object* v_view_1270_; lean_object* v_items_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v_view_1270_ = lean_ctor_get(v_val_1252_, 0);
lean_inc_ref(v_view_1270_);
lean_dec_ref_known(v_val_1252_, 1);
v_items_1271_ = lean_ctor_get(v_view_1270_, 2);
lean_inc_ref(v_items_1271_);
lean_dec_ref(v_view_1270_);
v___x_1272_ = lean_unsigned_to_nat(0u);
v___x_1273_ = lean_array_get_size(v_items_1271_);
v___x_1274_ = lean_nat_dec_lt(v___x_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_dec_ref(v_items_1271_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
else
{
size_t v___x_1275_; size_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1275_ = ((size_t)0ULL);
v___x_1276_ = lean_usize_of_nat(v___x_1273_);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__1(v_items_1271_, v___x_1275_, v___x_1276_, v_b_1238_);
lean_dec_ref(v_items_1271_);
v___y_1240_ = v___x_1277_;
goto v___jp_1239_;
}
}
case 3:
{
lean_object* v_view_1278_; lean_object* v_items_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; 
v_view_1278_ = lean_ctor_get(v_val_1252_, 0);
lean_inc_ref(v_view_1278_);
lean_dec_ref_known(v_val_1252_, 1);
v_items_1279_ = lean_ctor_get(v_view_1278_, 1);
lean_inc_ref(v_items_1279_);
lean_dec_ref(v_view_1278_);
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = lean_array_get_size(v_items_1279_);
v___x_1282_ = lean_nat_dec_lt(v___x_1280_, v___x_1281_);
if (v___x_1282_ == 0)
{
lean_dec_ref(v_items_1279_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
else
{
size_t v___x_1283_; size_t v___x_1284_; lean_object* v___x_1285_; 
v___x_1283_ = ((size_t)0ULL);
v___x_1284_ = lean_usize_of_nat(v___x_1281_);
v___x_1285_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__2(v_items_1279_, v___x_1283_, v___x_1284_, v_b_1238_);
lean_dec_ref(v_items_1279_);
v___y_1240_ = v___x_1285_;
goto v___jp_1239_;
}
}
default: 
{
lean_dec(v_val_1252_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
}
}
else
{
lean_dec(v___x_1251_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
}
else
{
return v_b_1238_;
}
v___jp_1239_:
{
size_t v___x_1241_; size_t v___x_1242_; 
v___x_1241_ = ((size_t)1ULL);
v___x_1242_ = lean_usize_add(v_i_1236_, v___x_1241_);
v_i_1236_ = v___x_1242_;
v_b_1238_ = v___y_1240_;
goto _start;
}
v___jp_1244_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1246_ = lean_unsigned_to_nat(1u);
v___x_1247_ = lean_nat_add(v___y_1245_, v___x_1246_);
lean_dec(v___y_1245_);
v___x_1248_ = lean_nat_dec_le(v_b_1238_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_dec(v___x_1247_);
v___y_1240_ = v_b_1238_;
goto v___jp_1239_;
}
else
{
lean_dec(v_b_1238_);
v___y_1240_ = v___x_1247_;
goto v___jp_1239_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(lean_object* v_blks_1286_){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_array_get_size(v_blks_1286_);
v___x_1289_ = lean_nat_dec_lt(v___x_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
return v___x_1287_;
}
else
{
size_t v___x_1290_; size_t v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = ((size_t)0ULL);
v___x_1291_ = lean_usize_of_nat(v___x_1288_);
v___x_1292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__3(v_blks_1286_, v___x_1290_, v___x_1291_, v___x_1287_);
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest___boxed(lean_object* v_blks_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_blks_1293_);
lean_dec_ref(v_blks_1293_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__0___boxed(lean_object* v_as_1295_, lean_object* v_i_1296_, lean_object* v_stop_1297_, lean_object* v_b_1298_){
_start:
{
size_t v_i_boxed_1299_; size_t v_stop_boxed_1300_; lean_object* v_res_1301_; 
v_i_boxed_1299_ = lean_unbox_usize(v_i_1296_);
lean_dec(v_i_1296_);
v_stop_boxed_1300_ = lean_unbox_usize(v_stop_1297_);
lean_dec(v_stop_1297_);
v_res_1301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__0(v_as_1295_, v_i_boxed_1299_, v_stop_boxed_1300_, v_b_1298_);
lean_dec_ref(v_as_1295_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__1___boxed(lean_object* v_as_1302_, lean_object* v_i_1303_, lean_object* v_stop_1304_, lean_object* v_b_1305_){
_start:
{
size_t v_i_boxed_1306_; size_t v_stop_boxed_1307_; lean_object* v_res_1308_; 
v_i_boxed_1306_ = lean_unbox_usize(v_i_1303_);
lean_dec(v_i_1303_);
v_stop_boxed_1307_ = lean_unbox_usize(v_stop_1304_);
lean_dec(v_stop_1304_);
v_res_1308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__1(v_as_1302_, v_i_boxed_1306_, v_stop_boxed_1307_, v_b_1305_);
lean_dec_ref(v_as_1302_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__2___boxed(lean_object* v_as_1309_, lean_object* v_i_1310_, lean_object* v_stop_1311_, lean_object* v_b_1312_){
_start:
{
size_t v_i_boxed_1313_; size_t v_stop_boxed_1314_; lean_object* v_res_1315_; 
v_i_boxed_1313_ = lean_unbox_usize(v_i_1310_);
lean_dec(v_i_1310_);
v_stop_boxed_1314_ = lean_unbox_usize(v_stop_1311_);
lean_dec(v_stop_1311_);
v_res_1315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__2(v_as_1309_, v_i_boxed_1313_, v_stop_boxed_1314_, v_b_1312_);
lean_dec_ref(v_as_1309_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__3___boxed(lean_object* v_as_1316_, lean_object* v_i_1317_, lean_object* v_stop_1318_, lean_object* v_b_1319_){
_start:
{
size_t v_i_boxed_1320_; size_t v_stop_boxed_1321_; lean_object* v_res_1322_; 
v_i_boxed_1320_ = lean_unbox_usize(v_i_1317_);
lean_dec(v_i_1317_);
v_stop_boxed_1321_ = lean_unbox_usize(v_stop_1318_);
lean_dec(v_stop_1318_);
v_res_1322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest_spec__3(v_as_1316_, v_i_boxed_1320_, v_stop_boxed_1321_, v_b_1319_);
lean_dec_ref(v_as_1316_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun(lean_object* v_blks_1323_){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v___x_1324_ = lean_unsigned_to_nat(3u);
v___x_1325_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun_deepest(v_blks_1323_);
v___x_1326_ = lean_nat_dec_le(v___x_1324_, v___x_1325_);
if (v___x_1326_ == 0)
{
lean_dec(v___x_1325_);
return v___x_1324_;
}
else
{
return v___x_1325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun___boxed(lean_object* v_blks_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun(v_blks_1327_);
lean_dec_ref(v_blks_1327_);
return v_res_1328_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_printsBlank(lean_object* v_inl_1329_){
_start:
{
lean_object* v___x_1330_; 
lean_inc(v_inl_1329_);
v___x_1330_ = l_Lean_Doc_LinebreakView_of(v_inl_1329_);
if (lean_obj_tag(v___x_1330_) == 1)
{
uint8_t v___x_1331_; 
lean_dec_ref_known(v___x_1330_, 1);
lean_dec(v_inl_1329_);
v___x_1331_ = 1;
return v___x_1331_;
}
else
{
lean_object* v___x_1332_; 
lean_dec(v___x_1330_);
v___x_1332_ = l_Lean_Doc_TextView_of(v_inl_1329_);
if (lean_obj_tag(v___x_1332_) == 1)
{
lean_object* v_val_1333_; uint8_t v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v_decide_1341_; 
v_val_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_val_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v___x_1334_ = 1;
v___x_1335_ = l_Lean_Doc_TextView_getVersoText(v_val_1333_);
lean_dec(v_val_1333_);
v___x_1336_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString(v___x_1334_, v___x_1335_);
v___x_1337_ = lean_unsigned_to_nat(0u);
v___x_1338_ = lean_string_utf8_byte_size(v___x_1336_);
v___x_1339_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1336_);
lean_ctor_set(v___x_1339_, 1, v___x_1337_);
lean_ctor_set(v___x_1339_, 2, v___x_1338_);
v___x_1340_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0(v___x_1339_, v___x_1337_);
lean_dec_ref_known(v___x_1339_, 3);
v_decide_1341_ = lean_nat_dec_eq(v___x_1340_, v___x_1338_);
lean_dec(v___x_1340_);
return v_decide_1341_;
}
else
{
uint8_t v___x_1342_; 
lean_dec(v___x_1332_);
v___x_1342_ = 0;
return v___x_1342_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_printsBlank___boxed(lean_object* v_inl_1343_){
_start:
{
uint8_t v_res_1344_; lean_object* v_r_1345_; 
v_res_1344_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_printsBlank(v_inl_1343_);
v_r_1345_ = lean_box(v_res_1344_);
return v_r_1345_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_needsLineStart(lean_object* v_stx_1346_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_Doc_BlockView_of(v_stx_1346_);
if (lean_obj_tag(v___x_1347_) == 1)
{
lean_object* v_val_1348_; 
v_val_1348_ = lean_ctor_get(v___x_1347_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v___x_1347_, 1);
switch(lean_obj_tag(v_val_1348_))
{
case 8:
{
uint8_t v___x_1349_; 
lean_dec_ref_known(v_val_1348_, 1);
v___x_1349_ = 1;
return v___x_1349_;
}
case 9:
{
uint8_t v___x_1350_; 
lean_dec_ref_known(v_val_1348_, 1);
v___x_1350_ = 1;
return v___x_1350_;
}
case 10:
{
uint8_t v___x_1351_; 
lean_dec_ref_known(v_val_1348_, 1);
v___x_1351_ = 1;
return v___x_1351_;
}
case 11:
{
uint8_t v___x_1352_; 
lean_dec_ref_known(v_val_1348_, 1);
v___x_1352_ = 1;
return v___x_1352_;
}
default: 
{
uint8_t v___x_1353_; 
lean_dec(v_val_1348_);
v___x_1353_ = 0;
return v___x_1353_;
}
}
}
else
{
uint8_t v___x_1354_; 
lean_dec(v___x_1347_);
v___x_1354_ = 0;
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_needsLineStart___boxed(lean_object* v_stx_1355_){
_start:
{
uint8_t v_res_1356_; lean_object* v_r_1357_; 
v_res_1356_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_needsLineStart(v_stx_1355_);
v_r_1357_ = lean_box(v_res_1356_);
return v_r_1357_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline(lean_object* v_inl_1358_){
_start:
{
lean_object* v___x_1359_; 
lean_inc(v_inl_1358_);
v___x_1359_ = l_Lean_Doc_LinebreakView_of(v_inl_1358_);
if (lean_obj_tag(v___x_1359_) == 1)
{
uint8_t v___x_1360_; 
lean_dec_ref_known(v___x_1359_, 1);
lean_dec(v_inl_1358_);
v___x_1360_ = 1;
return v___x_1360_;
}
else
{
lean_object* v___x_1361_; 
lean_dec(v___x_1359_);
v___x_1361_ = l_Lean_Doc_TextView_of(v_inl_1358_);
if (lean_obj_tag(v___x_1361_) == 1)
{
lean_object* v_val_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; uint8_t v_decide_1368_; 
v_val_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_val_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = l_Lean_Doc_TextView_getVersoTextSource(v_val_1362_);
lean_dec(v_val_1362_);
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = lean_string_utf8_byte_size(v___x_1363_);
v___x_1366_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1363_);
lean_ctor_set(v___x_1366_, 1, v___x_1364_);
lean_ctor_set(v___x_1366_, 2, v___x_1365_);
v___x_1367_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blank_spec__0(v___x_1366_, v___x_1364_);
lean_dec_ref_known(v___x_1366_, 3);
v_decide_1368_ = lean_nat_dec_eq(v___x_1367_, v___x_1365_);
lean_dec(v___x_1367_);
return v_decide_1368_;
}
else
{
uint8_t v___x_1369_; 
lean_dec(v___x_1361_);
v___x_1369_ = 0;
return v___x_1369_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline___boxed(lean_object* v_inl_1370_){
_start:
{
uint8_t v_res_1371_; lean_object* v_r_1372_; 
v_res_1371_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline(v_inl_1370_);
v_r_1372_ = lean_box(v_res_1371_);
return v_r_1372_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph_spec__0(lean_object* v_as_1373_, size_t v_i_1374_, size_t v_stop_1375_){
_start:
{
uint8_t v___x_1376_; 
v___x_1376_ = lean_usize_dec_eq(v_i_1374_, v_stop_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = lean_array_uget_borrowed(v_as_1373_, v_i_1374_);
lean_inc(v___x_1377_);
v___x_1378_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline(v___x_1377_);
if (v___x_1378_ == 0)
{
uint8_t v___x_1379_; 
v___x_1379_ = 1;
return v___x_1379_;
}
else
{
size_t v___x_1380_; size_t v___x_1381_; 
v___x_1380_ = ((size_t)1ULL);
v___x_1381_ = lean_usize_add(v_i_1374_, v___x_1380_);
v_i_1374_ = v___x_1381_;
goto _start;
}
}
else
{
uint8_t v___x_1383_; 
v___x_1383_ = 0;
return v___x_1383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph_spec__0___boxed(lean_object* v_as_1384_, lean_object* v_i_1385_, lean_object* v_stop_1386_){
_start:
{
size_t v_i_boxed_1387_; size_t v_stop_boxed_1388_; uint8_t v_res_1389_; lean_object* v_r_1390_; 
v_i_boxed_1387_ = lean_unbox_usize(v_i_1385_);
lean_dec(v_i_1385_);
v_stop_boxed_1388_ = lean_unbox_usize(v_stop_1386_);
lean_dec(v_stop_1386_);
v_res_1389_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph_spec__0(v_as_1384_, v_i_boxed_1387_, v_stop_boxed_1388_);
lean_dec_ref(v_as_1384_);
v_r_1390_ = lean_box(v_res_1389_);
return v_r_1390_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph(lean_object* v_stx_1391_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Lean_Doc_ParaView_of(v_stx_1391_);
if (lean_obj_tag(v___x_1392_) == 1)
{
lean_object* v_val_1393_; lean_object* v_content_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v_val_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_val_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v_content_1394_ = lean_ctor_get(v_val_1393_, 1);
lean_inc_ref(v_content_1394_);
lean_dec(v_val_1393_);
v___x_1395_ = lean_unsigned_to_nat(0u);
v___x_1396_ = lean_array_get_size(v_content_1394_);
v___x_1397_ = lean_nat_dec_lt(v___x_1395_, v___x_1396_);
if (v___x_1397_ == 0)
{
uint8_t v___x_1398_; 
lean_dec_ref(v_content_1394_);
v___x_1398_ = 1;
return v___x_1398_;
}
else
{
if (v___x_1397_ == 0)
{
lean_dec_ref(v_content_1394_);
return v___x_1397_;
}
else
{
size_t v___x_1399_; size_t v___x_1400_; uint8_t v___x_1401_; 
v___x_1399_ = ((size_t)0ULL);
v___x_1400_ = lean_usize_of_nat(v___x_1396_);
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph_spec__0(v_content_1394_, v___x_1399_, v___x_1400_);
lean_dec_ref(v_content_1394_);
if (v___x_1401_ == 0)
{
return v___x_1397_;
}
else
{
uint8_t v___x_1402_; 
v___x_1402_ = 0;
return v___x_1402_;
}
}
}
}
else
{
uint8_t v___x_1403_; 
lean_dec(v___x_1392_);
v___x_1403_ = 0;
return v___x_1403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph___boxed(lean_object* v_stx_1404_){
_start:
{
uint8_t v_res_1405_; lean_object* v_r_1406_; 
v_res_1405_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph(v_stx_1404_);
v_r_1406_ = lean_box(v_res_1405_);
return v_r_1406_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_isLinebreak(lean_object* v_stx_1407_){
_start:
{
lean_object* v___x_1408_; 
v___x_1408_ = l_Lean_Doc_LinebreakView_of(v_stx_1407_);
if (lean_obj_tag(v___x_1408_) == 1)
{
uint8_t v___x_1409_; 
lean_dec_ref_known(v___x_1408_, 1);
v___x_1409_ = 1;
return v___x_1409_;
}
else
{
uint8_t v___x_1410_; 
lean_dec(v___x_1408_);
v___x_1410_ = 0;
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_isLinebreak___boxed(lean_object* v_stx_1411_){
_start:
{
uint8_t v_res_1412_; lean_object* v_r_1413_; 
v_res_1412_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_isLinebreak(v_stx_1411_);
v_r_1413_ = lean_box(v_res_1412_);
return v_r_1413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f(lean_object* v_inls_1414_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = lean_array_get_size(v_inls_1414_);
v___x_1416_ = lean_unsigned_to_nat(1u);
v___x_1417_ = lean_nat_dec_eq(v___x_1415_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_box(0);
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; lean_object* v_inl_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_unsigned_to_nat(0u);
v_inl_1420_ = lean_array_fget_borrowed(v_inls_1414_, v___x_1419_);
lean_inc(v_inl_1420_);
v___x_1421_ = l_Lean_Doc_InlineView_of(v_inl_1420_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_box(0);
return v___x_1422_;
}
else
{
lean_object* v_val_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1446_; 
v_val_1423_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1425_ = v___x_1421_;
v_isShared_1426_ = v_isSharedCheck_1446_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_val_1423_);
lean_dec(v___x_1421_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1446_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
switch(lean_obj_tag(v_val_1423_))
{
case 1:
{
lean_object* v___x_1428_; 
lean_dec_ref_known(v_val_1423_, 1);
lean_inc(v_inl_1420_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_inl_1420_);
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_inl_1420_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
case 2:
{
lean_object* v___x_1431_; 
lean_dec_ref_known(v_val_1423_, 1);
lean_inc(v_inl_1420_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_inl_1420_);
v___x_1431_ = v___x_1425_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_inl_1420_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
case 3:
{
lean_object* v___x_1434_; 
lean_dec_ref_known(v_val_1423_, 1);
lean_inc(v_inl_1420_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_inl_1420_);
v___x_1434_ = v___x_1425_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_inl_1420_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
case 4:
{
lean_object* v___x_1437_; 
lean_dec_ref_known(v_val_1423_, 1);
lean_inc(v_inl_1420_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_inl_1420_);
v___x_1437_ = v___x_1425_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_inl_1420_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
case 6:
{
lean_object* v___x_1440_; 
lean_dec_ref_known(v_val_1423_, 1);
lean_inc(v_inl_1420_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_inl_1420_);
v___x_1440_ = v___x_1425_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_inl_1420_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
case 9:
{
lean_object* v___x_1443_; 
lean_dec_ref_known(v_val_1423_, 1);
lean_inc(v_inl_1420_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v_inl_1420_);
v___x_1443_ = v___x_1425_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_inl_1420_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
default: 
{
lean_object* v___x_1445_; 
lean_del_object(v___x_1425_);
lean_dec(v_val_1423_);
v___x_1445_ = lean_box(0);
return v___x_1445_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f___boxed(lean_object* v_inls_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f(v_inls_1447_);
lean_dec_ref(v_inls_1447_);
return v_res_1448_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = 41;
v___x_1450_ = lean_box_uint32(v___x_1449_);
return v___x_1450_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0___boxed__const__1;
v___x_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = 93;
v___x_1454_ = lean_box_uint32(v___x_1453_);
return v___x_1454_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1(void){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1___boxed__const__1;
v___x_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser(lean_object* v_a_1457_){
_start:
{
if (lean_obj_tag(v_a_1457_) == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0);
return v___x_1458_;
}
else
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1);
return v___x_1459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___boxed(lean_object* v_a_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser(v_a_1460_);
lean_dec_ref(v_a_1460_);
return v_res_1461_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = 95;
v___x_1463_ = lean_box_uint32(v___x_1462_);
return v___x_1463_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0(void){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0___boxed__const__1;
v___x_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
return v___x_1465_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = 42;
v___x_1467_ = lean_box_uint32(v___x_1466_);
return v___x_1467_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1___boxed__const__1;
v___x_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = 96;
v___x_1471_ = lean_box_uint32(v___x_1470_);
return v___x_1471_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2___boxed__const__1;
v___x_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar(lean_object* v_inl_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_Doc_InlineView_of(v_inl_1474_);
if (lean_obj_tag(v___x_1475_) == 1)
{
lean_object* v_val_1476_; 
v_val_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_val_1476_);
lean_dec_ref_known(v___x_1475_, 1);
switch(lean_obj_tag(v_val_1476_))
{
case 1:
{
lean_object* v___x_1477_; 
lean_dec_ref_known(v_val_1476_, 1);
v___x_1477_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0);
return v___x_1477_;
}
case 2:
{
lean_object* v___x_1478_; 
lean_dec_ref_known(v_val_1476_, 1);
v___x_1478_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1);
return v___x_1478_;
}
case 3:
{
lean_object* v___x_1479_; 
lean_dec_ref_known(v_val_1476_, 1);
v___x_1479_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2);
return v___x_1479_;
}
case 4:
{
lean_object* v___x_1480_; 
lean_dec_ref_known(v_val_1476_, 1);
v___x_1480_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2);
return v___x_1480_;
}
case 5:
{
lean_object* v_view_1481_; lean_object* v_target_1482_; lean_object* v___x_1483_; 
v_view_1481_ = lean_ctor_get(v_val_1476_, 0);
lean_inc_ref(v_view_1481_);
lean_dec_ref_known(v_val_1476_, 1);
v_target_1482_ = lean_ctor_get(v_view_1481_, 4);
lean_inc_ref(v_target_1482_);
lean_dec_ref(v_view_1481_);
v___x_1483_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser(v_target_1482_);
lean_dec_ref(v_target_1482_);
return v___x_1483_;
}
case 6:
{
lean_object* v_view_1484_; lean_object* v_target_1485_; lean_object* v___x_1486_; 
v_view_1484_ = lean_ctor_get(v_val_1476_, 0);
lean_inc_ref(v_view_1484_);
lean_dec_ref_known(v_val_1476_, 1);
v_target_1485_ = lean_ctor_get(v_view_1484_, 4);
lean_inc_ref(v_target_1485_);
lean_dec_ref(v_view_1484_);
v___x_1486_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser(v_target_1485_);
lean_dec_ref(v_target_1485_);
return v___x_1486_;
}
case 7:
{
lean_object* v___x_1487_; 
lean_dec_ref_known(v_val_1476_, 1);
v___x_1487_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1);
return v___x_1487_;
}
case 9:
{
lean_object* v_view_1488_; lean_object* v_content_1489_; lean_object* v___x_1490_; 
v_view_1488_ = lean_ctor_get(v_val_1476_, 0);
lean_inc_ref(v_view_1488_);
lean_dec_ref_known(v_val_1476_, 1);
v_content_1489_ = lean_ctor_get(v_view_1488_, 6);
lean_inc_ref(v_content_1489_);
lean_dec_ref(v_view_1488_);
v___x_1490_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f(v_content_1489_);
lean_dec_ref(v_content_1489_);
if (lean_obj_tag(v___x_1490_) == 1)
{
lean_object* v_val_1491_; 
v_val_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_val_1491_);
lean_dec_ref_known(v___x_1490_, 1);
v_inl_1474_ = v_val_1491_;
goto _start;
}
else
{
lean_object* v___x_1493_; 
lean_dec(v___x_1490_);
v___x_1493_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1);
return v___x_1493_;
}
}
default: 
{
lean_object* v___x_1494_; 
lean_dec(v_val_1476_);
v___x_1494_ = lean_box(0);
return v___x_1494_;
}
}
}
else
{
lean_object* v___x_1495_; 
lean_dec(v___x_1475_);
v___x_1495_ = lean_box(0);
return v___x_1495_;
}
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = 36;
v___x_1497_ = lean_box_uint32(v___x_1496_);
return v___x_1497_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0___boxed__const__1;
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar(lean_object* v_stx_1500_){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = l_Lean_Doc_InlineView_of(v_stx_1500_);
if (lean_obj_tag(v___x_1501_) == 1)
{
lean_object* v_val_1502_; 
v_val_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_val_1502_);
lean_dec_ref_known(v___x_1501_, 1);
switch(lean_obj_tag(v_val_1502_))
{
case 1:
{
lean_object* v___x_1503_; 
lean_dec_ref_known(v_val_1502_, 1);
v___x_1503_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0);
return v___x_1503_;
}
case 2:
{
lean_object* v___x_1504_; 
lean_dec_ref_known(v_val_1502_, 1);
v___x_1504_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1);
return v___x_1504_;
}
case 3:
{
lean_object* v___x_1505_; 
lean_dec_ref_known(v_val_1502_, 1);
v___x_1505_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2);
return v___x_1505_;
}
case 4:
{
lean_object* v___x_1506_; 
lean_dec_ref_known(v_val_1502_, 1);
v___x_1506_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0);
return v___x_1506_;
}
default: 
{
lean_object* v___x_1507_; 
lean_dec(v_val_1502_);
v___x_1507_ = lean_box(0);
return v___x_1507_;
}
}
}
else
{
lean_object* v___x_1508_; 
lean_dec(v___x_1501_);
v___x_1508_ = lean_box(0);
return v___x_1508_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_runsInto(lean_object* v_inl_1509_, lean_object* v_next_x3f_1510_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar(v_inl_1509_);
if (lean_obj_tag(v___x_1511_) == 1)
{
if (lean_obj_tag(v_next_x3f_1510_) == 0)
{
uint8_t v___x_1512_; 
lean_dec_ref_known(v___x_1511_, 1);
v___x_1512_ = 0;
return v___x_1512_;
}
else
{
lean_object* v_val_1513_; lean_object* v_val_1514_; lean_object* v___x_1515_; 
v_val_1513_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_val_1513_);
lean_dec_ref_known(v___x_1511_, 1);
v_val_1514_ = lean_ctor_get(v_next_x3f_1510_, 0);
lean_inc(v_val_1514_);
lean_dec_ref_known(v_next_x3f_1510_, 1);
v___x_1515_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar(v_val_1514_);
if (lean_obj_tag(v___x_1515_) == 1)
{
lean_object* v_val_1516_; uint32_t v___x_1517_; uint32_t v___x_1518_; uint8_t v___x_1519_; 
v_val_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_val_1516_);
lean_dec_ref_known(v___x_1515_, 1);
v___x_1517_ = lean_unbox_uint32(v_val_1513_);
lean_dec(v_val_1513_);
v___x_1518_ = lean_unbox_uint32(v_val_1516_);
lean_dec(v_val_1516_);
v___x_1519_ = lean_uint32_dec_eq(v___x_1517_, v___x_1518_);
return v___x_1519_;
}
else
{
uint8_t v___x_1520_; 
lean_dec(v___x_1515_);
lean_dec(v_val_1513_);
v___x_1520_ = 0;
return v___x_1520_;
}
}
}
else
{
uint8_t v___x_1521_; 
lean_dec(v___x_1511_);
lean_dec(v_next_x3f_1510_);
v___x_1521_ = 0;
return v___x_1521_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_runsInto___boxed(lean_object* v_inl_1522_, lean_object* v_next_x3f_1523_){
_start:
{
uint8_t v_res_1524_; lean_object* v_r_1525_; 
v_res_1524_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_runsInto(v_inl_1522_, v_next_x3f_1523_);
v_r_1525_ = lean_box(v_res_1524_);
return v_r_1525_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_mergesInto(lean_object* v_inl_1526_, lean_object* v_next_x3f_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar(v_inl_1526_);
if (lean_obj_tag(v___x_1528_) == 1)
{
lean_object* v_val_1529_; uint32_t v___x_1530_; uint32_t v___x_1531_; uint8_t v___x_1532_; 
v_val_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_val_1529_);
lean_dec_ref_known(v___x_1528_, 1);
v___x_1530_ = 96;
v___x_1531_ = lean_unbox_uint32(v_val_1529_);
lean_dec(v_val_1529_);
v___x_1532_ = lean_uint32_dec_eq(v___x_1531_, v___x_1530_);
if (v___x_1532_ == 0)
{
lean_dec(v_next_x3f_1527_);
return v___x_1532_;
}
else
{
if (lean_obj_tag(v_next_x3f_1527_) == 0)
{
uint8_t v___x_1533_; 
v___x_1533_ = 0;
return v___x_1533_;
}
else
{
lean_object* v_val_1534_; lean_object* v___x_1535_; 
v_val_1534_ = lean_ctor_get(v_next_x3f_1527_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v_next_x3f_1527_, 1);
v___x_1535_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar(v_val_1534_);
if (lean_obj_tag(v___x_1535_) == 1)
{
lean_object* v_val_1536_; uint32_t v___x_1537_; uint8_t v___x_1538_; 
v_val_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_val_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1537_ = lean_unbox_uint32(v_val_1536_);
lean_dec(v_val_1536_);
v___x_1538_ = lean_uint32_dec_eq(v___x_1537_, v___x_1530_);
return v___x_1538_;
}
else
{
uint8_t v___x_1539_; 
lean_dec(v___x_1535_);
v___x_1539_ = 0;
return v___x_1539_;
}
}
}
}
else
{
uint8_t v___x_1540_; 
lean_dec(v___x_1528_);
lean_dec(v_next_x3f_1527_);
v___x_1540_ = 0;
return v___x_1540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_mergesInto___boxed(lean_object* v_inl_1541_, lean_object* v_next_x3f_1542_){
_start:
{
uint8_t v_res_1543_; lean_object* v_r_1544_; 
v_res_1543_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_mergesInto(v_inl_1541_, v_next_x3f_1542_);
v_r_1544_ = lean_box(v_res_1543_);
return v_r_1544_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace(lean_object* v_inls_1545_){
_start:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1546_ = lean_unsigned_to_nat(0u);
v___x_1547_ = lean_array_get_size(v_inls_1545_);
v___x_1548_ = lean_nat_dec_lt(v___x_1546_, v___x_1547_);
if (v___x_1548_ == 0)
{
return v___x_1548_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = lean_array_fget_borrowed(v_inls_1545_, v___x_1546_);
lean_inc(v___x_1549_);
v___x_1550_ = l_Lean_Doc_TextView_of(v___x_1549_);
if (lean_obj_tag(v___x_1550_) == 1)
{
lean_object* v_val_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v_val_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_val_1551_);
lean_dec_ref_known(v___x_1550_, 1);
v___x_1552_ = l_Lean_Doc_TextView_getVersoText(v_val_1551_);
lean_dec(v_val_1551_);
v___x_1553_ = lean_string_utf8_byte_size(v___x_1552_);
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_dec_le(v___x_1554_, v___x_1553_);
if (v___x_1555_ == 0)
{
lean_dec_ref(v___x_1552_);
return v___x_1555_;
}
else
{
lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1556_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_1557_ = lean_string_memcmp(v___x_1552_, v___x_1556_, v___x_1546_, v___x_1546_, v___x_1554_);
lean_dec_ref(v___x_1552_);
return v___x_1557_;
}
}
else
{
uint8_t v___x_1558_; 
lean_dec(v___x_1550_);
v___x_1558_ = 0;
return v___x_1558_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace___boxed(lean_object* v_inls_1559_){
_start:
{
uint8_t v_res_1560_; lean_object* v_r_1561_; 
v_res_1560_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace(v_inls_1559_);
lean_dec_ref(v_inls_1559_);
v_r_1561_ = lean_box(v_res_1560_);
return v_r_1561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(lean_object* v_x_1565_, lean_object* v_a_1566_){
_start:
{
if (lean_obj_tag(v_x_1565_) == 0)
{
lean_object* v_url_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v_snd_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_snd_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v_url_1567_ = lean_ctor_get(v_x_1565_, 2);
v___x_1568_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__0));
v___x_1569_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1568_, v_a_1566_);
v_snd_1570_ = lean_ctor_get(v___x_1569_, 1);
lean_inc(v_snd_1570_);
lean_dec_ref(v___x_1569_);
v___x_1571_ = l_Lean_TSyntax_getVersoLinkUrl(v_url_1567_);
v___x_1572_ = l_Lean_Doc_escapeVersoLinkUrl(v___x_1571_);
lean_dec_ref(v___x_1571_);
v___x_1573_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1572_, v_snd_1570_);
lean_dec_ref(v___x_1572_);
v_snd_1574_ = lean_ctor_get(v___x_1573_, 1);
lean_inc(v_snd_1574_);
lean_dec_ref(v___x_1573_);
v___x_1575_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__0));
v___x_1576_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1575_, v_snd_1574_);
return v___x_1576_;
}
else
{
lean_object* v_name_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v_snd_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v_snd_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v_name_1577_ = lean_ctor_get(v_x_1565_, 2);
v___x_1578_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1));
v___x_1579_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1578_, v_a_1566_);
v_snd_1580_ = lean_ctor_get(v___x_1579_, 1);
lean_inc(v_snd_1580_);
lean_dec_ref(v___x_1579_);
v___x_1581_ = l_Lean_TSyntax_getVersoRefName(v_name_1577_);
v___x_1582_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1581_, v_snd_1580_);
lean_dec_ref(v___x_1581_);
v_snd_1583_ = lean_ctor_get(v___x_1582_, 1);
lean_inc(v_snd_1583_);
lean_dec_ref(v___x_1582_);
v___x_1584_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2));
v___x_1585_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1584_, v_snd_1583_);
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___boxed(lean_object* v_x_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(v_x_1586_, v_a_1587_);
lean_dec_ref(v_x_1586_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString(lean_object* v_x_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(v_x_1589_, v_a_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___boxed(lean_object* v_x_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString(v_x_1593_, v_a_1594_, v_a_1595_);
lean_dec(v_a_1594_);
lean_dec_ref(v_x_1593_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart_spec__0(lean_object* v_s_1597_, lean_object* v_pos_1598_){
_start:
{
lean_object* v_str_1599_; lean_object* v_startInclusive_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; uint8_t v_decide_1604_; 
v_str_1599_ = lean_ctor_get(v_s_1597_, 0);
v_startInclusive_1600_ = lean_ctor_get(v_s_1597_, 1);
v___x_1601_ = lean_nat_add(v_startInclusive_1600_, v_pos_1598_);
v___x_1602_ = lean_nat_sub(v___x_1601_, v_startInclusive_1600_);
v___x_1603_ = lean_unsigned_to_nat(0u);
v_decide_1604_ = lean_nat_dec_eq(v___x_1602_, v___x_1603_);
if (v_decide_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; uint32_t v___x_1610_; uint32_t v___x_1611_; uint8_t v___x_1612_; 
lean_inc(v_startInclusive_1600_);
lean_inc_ref(v_str_1599_);
v___x_1605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1605_, 0, v_str_1599_);
lean_ctor_set(v___x_1605_, 1, v_startInclusive_1600_);
lean_ctor_set(v___x_1605_, 2, v___x_1601_);
v___x_1606_ = lean_unsigned_to_nat(1u);
v___x_1607_ = lean_nat_sub(v___x_1602_, v___x_1606_);
lean_dec(v___x_1602_);
v___x_1608_ = l_String_Slice_posLE(v___x_1605_, v___x_1607_);
lean_dec_ref_known(v___x_1605_, 3);
v___x_1609_ = lean_nat_add(v_startInclusive_1600_, v___x_1608_);
v___x_1610_ = lean_string_utf8_get_fast(v_str_1599_, v___x_1609_);
lean_dec(v___x_1609_);
v___x_1611_ = 32;
v___x_1612_ = lean_uint32_dec_eq(v___x_1610_, v___x_1611_);
if (v___x_1612_ == 0)
{
lean_dec(v___x_1608_);
return v_pos_1598_;
}
else
{
lean_object* v___x_1613_; uint8_t v___x_1614_; 
v___x_1613_ = lean_nat_add(v___x_1608_, v___x_1606_);
v___x_1614_ = lean_nat_dec_le(v___x_1613_, v_pos_1598_);
lean_dec(v___x_1613_);
if (v___x_1614_ == 0)
{
lean_dec(v___x_1608_);
return v_pos_1598_;
}
else
{
lean_dec(v_pos_1598_);
v_pos_1598_ = v___x_1608_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1602_);
lean_dec(v___x_1601_);
return v_pos_1598_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart_spec__0___boxed(lean_object* v_s_1616_, lean_object* v_pos_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart_spec__0(v_s_1616_, v_pos_1617_);
lean_dec_ref(v_s_1616_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg(lean_object* v_marker_1619_, lean_object* v_contents_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v_alone_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1622_ = lean_unsigned_to_nat(0u);
v___x_1623_ = lean_string_utf8_byte_size(v_marker_1619_);
lean_inc_ref(v_marker_1619_);
v___x_1624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1624_, 0, v_marker_1619_);
lean_ctor_set(v___x_1624_, 1, v___x_1622_);
lean_ctor_set(v___x_1624_, 2, v___x_1623_);
v___x_1625_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart_spec__0(v___x_1624_, v___x_1623_);
lean_dec_ref_known(v___x_1624_, 3);
v_alone_1626_ = lean_string_utf8_extract_fast(v_marker_1619_, v___x_1622_, v___x_1625_);
lean_dec(v___x_1625_);
v___x_1627_ = lean_array_get_size(v_contents_1620_);
v___x_1628_ = lean_nat_dec_lt(v___x_1622_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; 
lean_dec_ref(v_marker_1619_);
v___x_1629_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v_alone_1626_, v_a_1621_);
lean_dec_ref(v_alone_1626_);
return v___x_1629_;
}
else
{
lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1630_ = lean_array_fget_borrowed(v_contents_1620_, v___x_1622_);
lean_inc(v___x_1630_);
v___x_1631_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_needsLineStart(v___x_1630_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; 
lean_dec_ref(v_alone_1626_);
v___x_1632_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v_marker_1619_, v_a_1621_);
lean_dec_ref(v_marker_1619_);
return v___x_1632_;
}
else
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
lean_dec_ref(v_marker_1619_);
v___x_1633_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_1634_ = lean_string_append(v_alone_1626_, v___x_1633_);
v___x_1635_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1634_, v_a_1621_);
lean_dec_ref(v___x_1634_);
return v___x_1635_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg___boxed(lean_object* v_marker_1636_, lean_object* v_contents_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg(v_marker_1636_, v_contents_1637_, v_a_1638_);
lean_dec_ref(v_contents_1637_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart(lean_object* v_marker_1640_, lean_object* v_contents_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg(v_marker_1640_, v_contents_1641_, v_a_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___boxed(lean_object* v_marker_1645_, lean_object* v_contents_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart(v_marker_1645_, v_contents_1646_, v_a_1647_, v_a_1648_);
lean_dec(v_a_1647_);
lean_dec_ref(v_contents_1646_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__1(lean_object* v_as_1650_, size_t v_i_1651_, size_t v_stop_1652_, lean_object* v_b_1653_){
_start:
{
lean_object* v___y_1655_; uint8_t v___x_1659_; 
v___x_1659_ = lean_usize_dec_eq(v_i_1651_, v_stop_1652_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; uint8_t v___x_1661_; 
v___x_1660_ = lean_array_uget_borrowed(v_as_1650_, v_i_1651_);
lean_inc(v___x_1660_);
v___x_1661_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph(v___x_1660_);
if (v___x_1661_ == 0)
{
lean_object* v___x_1662_; 
lean_inc(v___x_1660_);
v___x_1662_ = lean_array_push(v_b_1653_, v___x_1660_);
v___y_1655_ = v___x_1662_;
goto v___jp_1654_;
}
else
{
v___y_1655_ = v_b_1653_;
goto v___jp_1654_;
}
}
else
{
return v_b_1653_;
}
v___jp_1654_:
{
size_t v___x_1656_; size_t v___x_1657_; 
v___x_1656_ = ((size_t)1ULL);
v___x_1657_ = lean_usize_add(v_i_1651_, v___x_1656_);
v_i_1651_ = v___x_1657_;
v_b_1653_ = v___y_1655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__1___boxed(lean_object* v_as_1663_, lean_object* v_i_1664_, lean_object* v_stop_1665_, lean_object* v_b_1666_){
_start:
{
size_t v_i_boxed_1667_; size_t v_stop_boxed_1668_; lean_object* v_res_1669_; 
v_i_boxed_1667_ = lean_unbox_usize(v_i_1664_);
lean_dec(v_i_1664_);
v_stop_boxed_1668_ = lean_unbox_usize(v_stop_1665_);
lean_dec(v_stop_1665_);
v_res_1669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__1(v_as_1663_, v_i_boxed_1667_, v_stop_boxed_1668_, v_b_1666_);
lean_dec_ref(v_as_1663_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(size_t v_sz_1670_, size_t v_i_1671_, lean_object* v_bs_1672_){
_start:
{
uint8_t v___x_1673_; 
v___x_1673_ = lean_usize_dec_lt(v_i_1671_, v_sz_1670_);
if (v___x_1673_ == 0)
{
return v_bs_1672_;
}
else
{
lean_object* v_v_1674_; lean_object* v___x_1675_; lean_object* v_bs_x27_1676_; size_t v___x_1677_; size_t v___x_1678_; lean_object* v___x_1679_; 
v_v_1674_ = lean_array_uget(v_bs_1672_, v_i_1671_);
v___x_1675_ = lean_unsigned_to_nat(0u);
v_bs_x27_1676_ = lean_array_uset(v_bs_1672_, v_i_1671_, v___x_1675_);
v___x_1677_ = ((size_t)1ULL);
v___x_1678_ = lean_usize_add(v_i_1671_, v___x_1677_);
v___x_1679_ = lean_array_uset(v_bs_x27_1676_, v_i_1671_, v_v_1674_);
v_i_1671_ = v___x_1678_;
v_bs_1672_ = v___x_1679_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3___boxed(lean_object* v_sz_1681_, lean_object* v_i_1682_, lean_object* v_bs_1683_){
_start:
{
size_t v_sz_boxed_1684_; size_t v_i_boxed_1685_; lean_object* v_res_1686_; 
v_sz_boxed_1684_ = lean_unbox_usize(v_sz_1681_);
lean_dec(v_sz_1681_);
v_i_boxed_1685_ = lean_unbox_usize(v_i_1682_);
lean_dec(v_i_1682_);
v_res_1686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_boxed_1684_, v_i_boxed_1685_, v_bs_1683_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__13(lean_object* v_x_1687_, lean_object* v_x_1688_){
_start:
{
lean_object* v_zero_1689_; uint8_t v_isZero_1690_; 
v_zero_1689_ = lean_unsigned_to_nat(0u);
v_isZero_1690_ = lean_nat_dec_eq(v_x_1687_, v_zero_1689_);
if (v_isZero_1690_ == 1)
{
lean_dec(v_x_1687_);
return v_x_1688_;
}
else
{
uint32_t v___x_1691_; lean_object* v_one_1692_; lean_object* v_n_1693_; lean_object* v___x_1694_; 
v___x_1691_ = 35;
v_one_1692_ = lean_unsigned_to_nat(1u);
v_n_1693_ = lean_nat_sub(v_x_1687_, v_one_1692_);
lean_dec(v_x_1687_);
v___x_1694_ = lean_string_push(v_x_1688_, v___x_1691_);
v_x_1687_ = v_n_1693_;
v_x_1688_ = v___x_1694_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__12(lean_object* v_x_1696_, lean_object* v_x_1697_){
_start:
{
lean_object* v_zero_1698_; uint8_t v_isZero_1699_; 
v_zero_1698_ = lean_unsigned_to_nat(0u);
v_isZero_1699_ = lean_nat_dec_eq(v_x_1696_, v_zero_1698_);
if (v_isZero_1699_ == 1)
{
lean_dec(v_x_1696_);
return v_x_1697_;
}
else
{
uint32_t v___x_1700_; lean_object* v_one_1701_; lean_object* v_n_1702_; lean_object* v___x_1703_; 
v___x_1700_ = 58;
v_one_1701_ = lean_unsigned_to_nat(1u);
v_n_1702_ = lean_nat_sub(v_x_1696_, v_one_1701_);
lean_dec(v_x_1696_);
v___x_1703_ = lean_string_push(v_x_1697_, v___x_1700_);
v_x_1696_ = v_n_1702_;
v_x_1697_ = v___x_1703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__15(uint32_t v_char_1705_, lean_object* v_x_1706_, lean_object* v_x_1707_){
_start:
{
lean_object* v_zero_1708_; uint8_t v_isZero_1709_; 
v_zero_1708_ = lean_unsigned_to_nat(0u);
v_isZero_1709_ = lean_nat_dec_eq(v_x_1706_, v_zero_1708_);
if (v_isZero_1709_ == 1)
{
lean_dec(v_x_1706_);
return v_x_1707_;
}
else
{
lean_object* v_one_1710_; lean_object* v_n_1711_; lean_object* v___x_1712_; 
v_one_1710_ = lean_unsigned_to_nat(1u);
v_n_1711_ = lean_nat_sub(v_x_1706_, v_one_1710_);
lean_dec(v_x_1706_);
v___x_1712_ = lean_string_push(v_x_1707_, v_char_1705_);
v_x_1706_ = v_n_1711_;
v_x_1707_ = v___x_1712_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__15___boxed(lean_object* v_char_1714_, lean_object* v_x_1715_, lean_object* v_x_1716_){
_start:
{
uint32_t v_char_boxed_1717_; lean_object* v_res_1718_; 
v_char_boxed_1717_ = lean_unbox_uint32(v_char_1714_);
lean_dec(v_char_1714_);
v_res_1718_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__15(v_char_boxed_1717_, v_x_1715_, v_x_1716_);
return v_res_1718_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__16(lean_object* v_x_1719_, lean_object* v_x_1720_){
_start:
{
if (lean_obj_tag(v_x_1719_) == 0)
{
if (lean_obj_tag(v_x_1720_) == 0)
{
uint8_t v___x_1721_; 
v___x_1721_ = 1;
return v___x_1721_;
}
else
{
uint8_t v___x_1722_; 
v___x_1722_ = 0;
return v___x_1722_;
}
}
else
{
if (lean_obj_tag(v_x_1720_) == 0)
{
uint8_t v___x_1723_; 
v___x_1723_ = 0;
return v___x_1723_;
}
else
{
lean_object* v_val_1724_; lean_object* v_val_1725_; uint32_t v___x_1726_; uint32_t v___x_1727_; uint8_t v___x_1728_; 
v_val_1724_ = lean_ctor_get(v_x_1719_, 0);
v_val_1725_ = lean_ctor_get(v_x_1720_, 0);
v___x_1726_ = lean_unbox_uint32(v_val_1724_);
v___x_1727_ = lean_unbox_uint32(v_val_1725_);
v___x_1728_ = lean_uint32_dec_eq(v___x_1726_, v___x_1727_);
return v___x_1728_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__16___boxed(lean_object* v_x_1729_, lean_object* v_x_1730_){
_start:
{
uint8_t v_res_1731_; lean_object* v_r_1732_; 
v_res_1731_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__16(v_x_1729_, v_x_1730_);
lean_dec(v_x_1730_);
lean_dec(v_x_1729_);
v_r_1732_ = lean_box(v_res_1731_);
return v_r_1732_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg(){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg___closed__0));
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg___boxed(lean_object* v___dummy_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg();
return v_res_1738_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(uint8_t v___x_1739_, lean_object* v_as_1740_, size_t v_i_1741_, size_t v_stop_1742_){
_start:
{
uint8_t v___x_1743_; 
v___x_1743_ = lean_usize_dec_eq(v_i_1741_, v_stop_1742_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = lean_array_uget_borrowed(v_as_1740_, v_i_1741_);
lean_inc(v___x_1744_);
v___x_1745_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankInline(v___x_1744_);
if (v___x_1745_ == 0)
{
uint8_t v___x_1746_; 
v___x_1746_ = 1;
return v___x_1746_;
}
else
{
if (v___x_1739_ == 0)
{
size_t v___x_1747_; size_t v___x_1748_; 
v___x_1747_ = ((size_t)1ULL);
v___x_1748_ = lean_usize_add(v_i_1741_, v___x_1747_);
v_i_1741_ = v___x_1748_;
goto _start;
}
else
{
return v___x_1739_;
}
}
}
else
{
uint8_t v___x_1750_; 
v___x_1750_ = 0;
return v___x_1750_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5___boxed(lean_object* v___x_1751_, lean_object* v_as_1752_, lean_object* v_i_1753_, lean_object* v_stop_1754_){
_start:
{
uint8_t v___x_64134__boxed_1755_; size_t v_i_boxed_1756_; size_t v_stop_boxed_1757_; uint8_t v_res_1758_; lean_object* v_r_1759_; 
v___x_64134__boxed_1755_ = lean_unbox(v___x_1751_);
v_i_boxed_1756_ = lean_unbox_usize(v_i_1753_);
lean_dec(v_i_1753_);
v_stop_boxed_1757_ = lean_unbox_usize(v_stop_1754_);
lean_dec(v_stop_1754_);
v_res_1758_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(v___x_64134__boxed_1755_, v_as_1752_, v_i_boxed_1756_, v_stop_boxed_1757_);
lean_dec_ref(v_as_1752_);
v_r_1759_ = lean_box(v_res_1758_);
return v_r_1759_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(uint8_t v___x_1760_, uint8_t v___x_1761_, lean_object* v_as_1762_, size_t v_i_1763_, size_t v_stop_1764_){
_start:
{
uint8_t v___y_1766_; uint8_t v___x_1770_; 
v___x_1770_ = lean_usize_dec_eq(v_i_1763_, v_stop_1764_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = lean_array_uget_borrowed(v_as_1762_, v_i_1763_);
lean_inc(v___x_1771_);
v___x_1772_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_printsBlank(v___x_1771_);
if (v___x_1772_ == 0)
{
v___y_1766_ = v___x_1760_;
goto v___jp_1765_;
}
else
{
v___y_1766_ = v___x_1761_;
goto v___jp_1765_;
}
}
else
{
uint8_t v___x_1773_; 
v___x_1773_ = 0;
return v___x_1773_;
}
v___jp_1765_:
{
if (v___y_1766_ == 0)
{
size_t v___x_1767_; size_t v___x_1768_; 
v___x_1767_ = ((size_t)1ULL);
v___x_1768_ = lean_usize_add(v_i_1763_, v___x_1767_);
v_i_1763_ = v___x_1768_;
goto _start;
}
else
{
return v___y_1766_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6___boxed(lean_object* v___x_1774_, lean_object* v___x_1775_, lean_object* v_as_1776_, lean_object* v_i_1777_, lean_object* v_stop_1778_){
_start:
{
uint8_t v___x_64153__boxed_1779_; uint8_t v___x_64154__boxed_1780_; size_t v_i_boxed_1781_; size_t v_stop_boxed_1782_; uint8_t v_res_1783_; lean_object* v_r_1784_; 
v___x_64153__boxed_1779_ = lean_unbox(v___x_1774_);
v___x_64154__boxed_1780_ = lean_unbox(v___x_1775_);
v_i_boxed_1781_ = lean_unbox_usize(v_i_1777_);
lean_dec(v_i_1777_);
v_stop_boxed_1782_ = lean_unbox_usize(v_stop_1778_);
lean_dec(v_stop_1778_);
v_res_1783_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(v___x_64153__boxed_1779_, v___x_64154__boxed_1780_, v_as_1776_, v_i_boxed_1781_, v_stop_boxed_1782_);
lean_dec_ref(v_as_1776_);
v_r_1784_ = lean_box(v_res_1783_);
return v_r_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg(lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___x_1787_, lean_object* v___x_1788_, lean_object* v_a_1789_, lean_object* v_b_1790_){
_start:
{
if (lean_obj_tag(v_a_1789_) == 0)
{
lean_object* v_currPos_1791_; lean_object* v_searcher_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1825_; 
v_currPos_1791_ = lean_ctor_get(v_a_1789_, 0);
v_searcher_1792_ = lean_ctor_get(v_a_1789_, 1);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_a_1789_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1794_ = v_a_1789_;
v_isShared_1795_ = v_isSharedCheck_1825_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_searcher_1792_);
lean_inc(v_currPos_1791_);
lean_dec(v_a_1789_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1825_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v_it_1798_; lean_object* v_startInclusive_1799_; lean_object* v_endExclusive_1800_; uint8_t v_decide_1806_; 
v___x_1796_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v_decide_1806_ = lean_nat_dec_eq(v_searcher_1792_, v___x_1788_);
if (v_decide_1806_ == 0)
{
uint32_t v___x_1807_; uint32_t v___x_1808_; uint8_t v___x_1809_; 
v___x_1807_ = 10;
v___x_1808_ = lean_string_utf8_get_fast(v___y_1786_, v_searcher_1792_);
v___x_1809_ = lean_uint32_dec_eq(v___x_1808_, v___x_1807_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1812_; 
v___x_1810_ = lean_string_utf8_next_fast(v___y_1786_, v_searcher_1792_);
lean_dec(v_searcher_1792_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 1, v___x_1810_);
v___x_1812_ = v___x_1794_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_currPos_1791_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
v_a_1789_ = v___x_1812_;
goto _start;
}
}
else
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v_slice_1818_; lean_object* v_nextIt_1820_; 
v___x_1815_ = lean_string_utf8_next_fast(v___y_1786_, v_searcher_1792_);
v___x_1816_ = lean_nat_sub(v___x_1815_, v_searcher_1792_);
v___x_1817_ = lean_nat_add(v_searcher_1792_, v___x_1816_);
lean_dec(v___x_1816_);
v_slice_1818_ = l_String_Slice_subslice_x21(v___x_1787_, v_currPos_1791_, v_searcher_1792_);
lean_inc(v___x_1817_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 1, v___x_1817_);
lean_ctor_set(v___x_1794_, 0, v___x_1817_);
v_nextIt_1820_ = v___x_1794_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1817_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v___x_1817_);
v_nextIt_1820_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v_startInclusive_1821_; lean_object* v_endExclusive_1822_; 
v_startInclusive_1821_ = lean_ctor_get(v_slice_1818_, 0);
lean_inc(v_startInclusive_1821_);
v_endExclusive_1822_ = lean_ctor_get(v_slice_1818_, 1);
lean_inc(v_endExclusive_1822_);
lean_dec_ref(v_slice_1818_);
v_it_1798_ = v_nextIt_1820_;
v_startInclusive_1799_ = v_startInclusive_1821_;
v_endExclusive_1800_ = v_endExclusive_1822_;
goto v___jp_1797_;
}
}
}
else
{
lean_object* v___x_1824_; 
lean_del_object(v___x_1794_);
lean_dec(v_searcher_1792_);
v___x_1824_ = lean_box(1);
lean_inc(v___x_1788_);
v_it_1798_ = v___x_1824_;
v_startInclusive_1799_ = v_currPos_1791_;
v_endExclusive_1800_ = v___x_1788_;
goto v___jp_1797_;
}
v___jp_1797_:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_inc(v___y_1785_);
v___x_1801_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(v___y_1785_, v___x_1796_);
v___x_1802_ = lean_string_utf8_extract_fast(v___y_1786_, v_startInclusive_1799_, v_endExclusive_1800_);
lean_dec(v_endExclusive_1800_);
lean_dec(v_startInclusive_1799_);
v___x_1803_ = lean_string_append(v___x_1801_, v___x_1802_);
lean_dec_ref(v___x_1802_);
v___x_1804_ = lean_array_push(v_b_1790_, v___x_1803_);
v_a_1789_ = v_it_1798_;
v_b_1790_ = v___x_1804_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1788_);
return v_b_1790_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg___boxed(lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___x_1828_, lean_object* v___x_1829_, lean_object* v_a_1830_, lean_object* v_b_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg(v___y_1826_, v___y_1827_, v___x_1828_, v___x_1829_, v_a_1830_, v_b_1831_);
lean_dec_ref(v___x_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0(lean_object* v___x_1833_, lean_object* v___x_1834_, lean_object* v_____r_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
uint8_t v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1838_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_isLinebreak(v___x_1833_);
v___x_1839_ = lean_box(v___x_1838_);
v___x_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v___x_1834_);
v___x_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1840_);
v___x_1842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
lean_ctor_set(v___x_1842_, 1, v___y_1837_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0___boxed(lean_object* v___x_1843_, lean_object* v___x_1844_, lean_object* v_____r_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0(v___x_1843_, v___x_1844_, v_____r_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1846_);
return v_res_1848_;
}
}
static lean_object* _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0(void){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___redArg();
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg(lean_object* v_upperBound_1856_, lean_object* v___y_1857_, lean_object* v_a_1858_, lean_object* v_b_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v___y_1863_; uint8_t v___x_1880_; 
v___x_1880_ = lean_nat_dec_lt(v_a_1858_, v_upperBound_1856_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
lean_dec(v_a_1858_);
v___x_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1881_, 0, v_b_1859_);
lean_ctor_set(v___x_1881_, 1, v___y_1861_);
return v___x_1881_;
}
else
{
lean_object* v_fst_1882_; lean_object* v_snd_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___y_1887_; lean_object* v___y_1891_; uint8_t v___y_1892_; lean_object* v___y_1907_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
v_fst_1882_ = lean_ctor_get(v_b_1859_, 0);
lean_inc(v_fst_1882_);
v_snd_1883_ = lean_ctor_get(v_b_1859_, 1);
lean_inc(v_snd_1883_);
lean_dec_ref(v_b_1859_);
v___x_1884_ = lean_array_fget_borrowed(v___y_1857_, v_a_1858_);
lean_inc(v___x_1884_);
v___x_1885_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor(v_snd_1883_, v___x_1884_);
lean_dec(v_snd_1883_);
v___x_1911_ = lean_unsigned_to_nat(1u);
v___x_1912_ = lean_nat_add(v_a_1858_, v___x_1911_);
v___x_1913_ = lean_array_get_size(v___y_1857_);
v___x_1914_ = lean_nat_dec_lt(v___x_1912_, v___x_1913_);
if (v___x_1914_ == 0)
{
lean_object* v___x_1915_; 
lean_dec(v___x_1912_);
v___x_1915_ = lean_box(0);
v___y_1907_ = v___x_1915_;
goto v___jp_1906_;
}
else
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_array_fget_borrowed(v___y_1857_, v___x_1912_);
lean_dec(v___x_1912_);
lean_inc(v___x_1916_);
v___x_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
v___y_1907_ = v___x_1917_;
goto v___jp_1906_;
}
v___jp_1886_:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = lean_box(0);
lean_inc(v___x_1884_);
v___x_1889_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0(v___x_1884_, v___x_1885_, v___x_1888_, v___y_1860_, v___y_1887_);
v___y_1863_ = v___x_1889_;
goto v___jp_1862_;
}
v___jp_1890_:
{
uint8_t v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = lean_unbox(v_fst_1882_);
lean_dec(v_fst_1882_);
lean_inc(v___y_1891_);
lean_inc(v___x_1884_);
v___x_1894_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v___x_1884_, v___y_1891_, v___x_1893_, v___y_1892_, v___y_1860_, v___y_1861_);
if (lean_obj_tag(v___y_1891_) == 1)
{
lean_object* v_snd_1895_; lean_object* v___x_1896_; 
v_snd_1895_ = lean_ctor_get(v___x_1894_, 1);
lean_inc(v_snd_1895_);
lean_dec_ref(v___x_1894_);
lean_inc(v___x_1884_);
v___x_1896_ = l_Lean_Doc_RoleView_of(v___x_1884_);
if (lean_obj_tag(v___x_1896_) == 1)
{
lean_dec_ref_known(v___x_1896_, 1);
lean_dec_ref_known(v___y_1891_, 1);
v___y_1887_ = v_snd_1895_;
goto v___jp_1886_;
}
else
{
uint8_t v___x_1897_; 
lean_dec(v___x_1896_);
lean_inc(v___x_1884_);
v___x_1897_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_mergesInto(v___x_1884_, v___y_1891_);
if (v___x_1897_ == 0)
{
v___y_1887_ = v_snd_1895_;
goto v___jp_1886_;
}
else
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v_fst_1900_; lean_object* v_snd_1901_; lean_object* v___x_1902_; 
v___x_1898_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp___closed__0));
v___x_1899_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1898_, v_snd_1895_);
v_fst_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_fst_1900_);
v_snd_1901_ = lean_ctor_get(v___x_1899_, 1);
lean_inc(v_snd_1901_);
lean_dec_ref(v___x_1899_);
lean_inc(v___x_1884_);
v___x_1902_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0(v___x_1884_, v___x_1885_, v_fst_1900_, v___y_1860_, v_snd_1901_);
v___y_1863_ = v___x_1902_;
goto v___jp_1862_;
}
}
}
else
{
lean_object* v_snd_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
lean_dec(v___y_1891_);
v_snd_1903_ = lean_ctor_get(v___x_1894_, 1);
lean_inc(v_snd_1903_);
lean_dec_ref(v___x_1894_);
v___x_1904_ = lean_box(0);
lean_inc(v___x_1884_);
v___x_1905_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___lam__0(v___x_1884_, v___x_1885_, v___x_1904_, v___y_1860_, v_snd_1903_);
v___y_1863_ = v___x_1905_;
goto v___jp_1862_;
}
}
v___jp_1906_:
{
if (lean_obj_tag(v___x_1885_) == 0)
{
uint8_t v___x_1908_; 
v___x_1908_ = 0;
v___y_1891_ = v___y_1907_;
v___y_1892_ = v___x_1908_;
goto v___jp_1890_;
}
else
{
lean_object* v_val_1909_; uint8_t v_alternate_1910_; 
v_val_1909_ = lean_ctor_get(v___x_1885_, 0);
v_alternate_1910_ = lean_ctor_get_uint8(v_val_1909_, 1);
v___y_1891_ = v___y_1907_;
v___y_1892_ = v_alternate_1910_;
goto v___jp_1890_;
}
}
}
v___jp_1862_:
{
lean_object* v_fst_1864_; 
v_fst_1864_ = lean_ctor_get(v___y_1863_, 0);
lean_inc(v_fst_1864_);
if (lean_obj_tag(v_fst_1864_) == 0)
{
lean_object* v_snd_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1873_; 
lean_dec(v_a_1858_);
v_snd_1865_ = lean_ctor_get(v___y_1863_, 1);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___y_1863_);
if (v_isSharedCheck_1873_ == 0)
{
lean_object* v_unused_1874_; 
v_unused_1874_ = lean_ctor_get(v___y_1863_, 0);
lean_dec(v_unused_1874_);
v___x_1867_ = v___y_1863_;
v_isShared_1868_ = v_isSharedCheck_1873_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_snd_1865_);
lean_dec(v___y_1863_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1873_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v_a_1869_; lean_object* v___x_1871_; 
v_a_1869_ = lean_ctor_get(v_fst_1864_, 0);
lean_inc(v_a_1869_);
lean_dec_ref_known(v_fst_1864_, 1);
if (v_isShared_1868_ == 0)
{
lean_ctor_set(v___x_1867_, 0, v_a_1869_);
v___x_1871_ = v___x_1867_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1869_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v_snd_1865_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
else
{
lean_object* v_snd_1875_; lean_object* v_a_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v_snd_1875_ = lean_ctor_get(v___y_1863_, 1);
lean_inc(v_snd_1875_);
lean_dec_ref(v___y_1863_);
v_a_1876_ = lean_ctor_get(v_fst_1864_, 0);
lean_inc(v_a_1876_);
lean_dec_ref_known(v_fst_1864_, 1);
v___x_1877_ = lean_unsigned_to_nat(1u);
v___x_1878_ = lean_nat_add(v_a_1858_, v___x_1877_);
lean_dec(v_a_1858_);
v_a_1858_ = v___x_1878_;
v_b_1859_ = v_a_1876_;
v___y_1861_ = v_snd_1875_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(lean_object* v_stxs_1920_, uint8_t v_lineStart_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v___x_1924_; lean_object* v___y_1926_; lean_object* v___x_1942_; lean_object* v___x_1943_; uint8_t v___x_1944_; 
v___x_1924_ = lean_unsigned_to_nat(0u);
v___x_1942_ = lean_array_get_size(v_stxs_1920_);
v___x_1943_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq___closed__0));
v___x_1944_ = lean_nat_dec_lt(v___x_1924_, v___x_1942_);
if (v___x_1944_ == 0)
{
v___y_1926_ = v___x_1943_;
goto v___jp_1925_;
}
else
{
size_t v___x_1945_; size_t v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = ((size_t)0ULL);
v___x_1946_ = lean_usize_of_nat(v___x_1942_);
v___x_1947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__1(v_stxs_1920_, v___x_1945_, v___x_1946_, v___x_1943_);
v___y_1926_ = v___x_1947_;
goto v___jp_1925_;
}
v___jp_1925_:
{
lean_object* v___x_1927_; lean_object* v_prev_x3f_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v_snd_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1940_; 
v___x_1927_ = lean_array_get_size(v___y_1926_);
v_prev_x3f_1928_ = lean_box(0);
v___x_1929_ = lean_box(v_lineStart_1921_);
v___x_1930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
lean_ctor_set(v___x_1930_, 1, v_prev_x3f_1928_);
v___x_1931_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg(v___x_1927_, v___y_1926_, v___x_1924_, v___x_1930_, v_a_1922_, v_a_1923_);
lean_dec_ref(v___y_1926_);
v_snd_1932_ = lean_ctor_get(v___x_1931_, 1);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1940_ == 0)
{
lean_object* v_unused_1941_; 
v_unused_1941_ = lean_ctor_get(v___x_1931_, 0);
lean_dec(v_unused_1941_);
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1940_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_snd_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1940_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1936_; lean_object* v___x_1938_; 
v___x_1936_ = lean_box(0);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1936_);
v___x_1938_ = v___x_1934_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1936_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_snd_1932_);
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
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike(uint32_t v_char_1948_, lean_object* v_inls_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v_delim_1954_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___x_1965_; lean_object* v_snd_1966_; lean_object* v___y_1968_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___x_1952_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_1953_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_emphRun(v_char_1948_, v_inls_1949_);
v_delim_1954_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__15(v_char_1948_, v___x_1953_, v___x_1952_);
v___x_1965_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v_delim_1954_, v_a_1951_);
v_snd_1966_ = lean_ctor_get(v___x_1965_, 1);
lean_inc(v_snd_1966_);
lean_dec_ref(v___x_1965_);
v___x_1975_ = lean_unsigned_to_nat(0u);
v___x_1976_ = lean_array_get_size(v_inls_1949_);
v___x_1977_ = lean_nat_dec_lt(v___x_1975_, v___x_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_box(0);
v___y_1968_ = v___x_1978_;
goto v___jp_1967_;
}
else
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = lean_array_fget_borrowed(v_inls_1949_, v___x_1975_);
lean_inc(v___x_1979_);
v___x_1980_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar(v___x_1979_);
v___y_1968_ = v___x_1980_;
goto v___jp_1967_;
}
v___jp_1955_:
{
size_t v_sz_1958_; size_t v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; lean_object* v___x_1962_; lean_object* v_snd_1963_; lean_object* v___x_1964_; 
v_sz_1958_ = lean_array_size(v_inls_1949_);
v___x_1959_ = ((size_t)0ULL);
v___x_1960_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_1958_, v___x_1959_, v_inls_1949_);
v___x_1961_ = 0;
v___x_1962_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_1960_, v___x_1961_, v___y_1956_, v___y_1957_);
lean_dec_ref(v___x_1960_);
v_snd_1963_ = lean_ctor_get(v___x_1962_, 1);
lean_inc(v_snd_1963_);
lean_dec_ref(v___x_1962_);
v___x_1964_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v_delim_1954_, v_snd_1963_);
lean_dec_ref(v_delim_1954_);
return v___x_1964_;
}
v___jp_1967_:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1969_ = lean_box_uint32(v_char_1948_);
v___x_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
v___x_1971_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike_spec__16(v___y_1968_, v___x_1970_);
lean_dec_ref_known(v___x_1970_, 1);
lean_dec(v___y_1968_);
if (v___x_1971_ == 0)
{
v___y_1956_ = v_a_1950_;
v___y_1957_ = v_snd_1966_;
goto v___jp_1955_;
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v_snd_1974_; 
v___x_1972_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_zwsp___closed__0));
v___x_1973_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_1972_, v_snd_1966_);
v_snd_1974_ = lean_ctor_get(v___x_1973_, 1);
lean_inc(v_snd_1974_);
lean_dec_ref(v___x_1973_);
v___y_1956_ = v_a_1950_;
v___y_1957_ = v_snd_1974_;
goto v___jp_1955_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(lean_object* v___y_1987_, uint8_t v___x_1988_, lean_object* v_as_1989_, size_t v_sz_1990_, size_t v_i_1991_, lean_object* v_b_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
uint8_t v___x_1995_; 
v___x_1995_ = lean_usize_dec_lt(v_i_1991_, v_sz_1990_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; 
lean_dec_ref(v___y_1987_);
v___x_1996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1996_, 0, v_b_1992_);
lean_ctor_set(v___x_1996_, 1, v___y_1994_);
return v___x_1996_;
}
else
{
lean_object* v___x_1997_; lean_object* v_snd_1998_; lean_object* v_a_1999_; lean_object* v_contents_2000_; lean_object* v___x_2001_; lean_object* v_snd_2002_; size_t v_sz_2003_; size_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v_snd_2009_; lean_object* v___x_2010_; lean_object* v_snd_2011_; lean_object* v___x_2012_; size_t v___x_2013_; size_t v___x_2014_; 
v___x_1997_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v___y_1993_, v___y_1994_);
v_snd_1998_ = lean_ctor_get(v___x_1997_, 1);
lean_inc(v_snd_1998_);
lean_dec_ref(v___x_1997_);
v_a_1999_ = lean_array_uget_borrowed(v_as_1989_, v_i_1991_);
v_contents_2000_ = lean_ctor_get(v_a_1999_, 2);
lean_inc_ref(v___y_1987_);
v___x_2001_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg(v___y_1987_, v_contents_2000_, v_snd_1998_);
v_snd_2002_ = lean_ctor_get(v___x_2001_, 1);
lean_inc(v_snd_2002_);
lean_dec_ref(v___x_2001_);
v_sz_2003_ = lean_array_size(v_contents_2000_);
v___x_2004_ = ((size_t)0ULL);
lean_inc_ref(v_contents_2000_);
v___x_2005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2003_, v___x_2004_, v_contents_2000_);
v___x_2006_ = lean_string_length(v___y_1987_);
v___x_2007_ = lean_nat_add(v___y_1993_, v___x_2006_);
v___x_2008_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2005_, v___x_1988_, v___x_2007_, v_snd_2002_);
lean_dec(v___x_2007_);
lean_dec_ref(v___x_2005_);
v_snd_2009_ = lean_ctor_get(v___x_2008_, 1);
lean_inc(v_snd_2009_);
lean_dec_ref(v___x_2008_);
v___x_2010_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2009_);
v_snd_2011_ = lean_ctor_get(v___x_2010_, 1);
lean_inc(v_snd_2011_);
lean_dec_ref(v___x_2010_);
v___x_2012_ = lean_box(0);
v___x_2013_ = ((size_t)1ULL);
v___x_2014_ = lean_usize_add(v_i_1991_, v___x_2013_);
v_i_1991_ = v___x_2014_;
v_b_1992_ = v___x_2012_;
v___y_1994_ = v_snd_2011_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8(uint8_t v___x_2019_, uint8_t v_alternate_2020_, lean_object* v_as_2021_, size_t v_sz_2022_, size_t v_i_2023_, lean_object* v_b_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v___x_2027_; 
v___x_2027_ = lean_usize_dec_lt(v_i_2023_, v_sz_2022_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; 
v___x_2028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2028_, 0, v_b_2024_);
lean_ctor_set(v___x_2028_, 1, v___y_2026_);
return v___x_2028_;
}
else
{
lean_object* v___x_2029_; lean_object* v_snd_2030_; lean_object* v_a_2031_; lean_object* v___y_2033_; 
v___x_2029_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v___y_2025_, v___y_2026_);
v_snd_2030_ = lean_ctor_get(v___x_2029_, 1);
lean_inc(v_snd_2030_);
lean_dec_ref(v___x_2029_);
v_a_2031_ = lean_array_uget_borrowed(v_as_2021_, v_i_2023_);
if (v_alternate_2020_ == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
lean_inc(v_b_2024_);
v___x_2051_ = l_Nat_reprFast(v_b_2024_);
v___x_2052_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__0));
v___x_2053_ = lean_string_append(v___x_2051_, v___x_2052_);
v___y_2033_ = v___x_2053_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_inc(v_b_2024_);
v___x_2054_ = l_Nat_reprFast(v_b_2024_);
v___x_2055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___closed__1));
v___x_2056_ = lean_string_append(v___x_2054_, v___x_2055_);
v___y_2033_ = v___x_2056_;
goto v___jp_2032_;
}
v___jp_2032_:
{
lean_object* v_contents_2034_; lean_object* v___x_2035_; lean_object* v_snd_2036_; size_t v_sz_2037_; size_t v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v_snd_2043_; lean_object* v___x_2044_; lean_object* v_snd_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; size_t v___x_2048_; size_t v___x_2049_; 
v_contents_2034_ = lean_ctor_get(v_a_2031_, 2);
lean_inc_ref(v___y_2033_);
v___x_2035_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_itemStart___redArg(v___y_2033_, v_contents_2034_, v_snd_2030_);
v_snd_2036_ = lean_ctor_get(v___x_2035_, 1);
lean_inc(v_snd_2036_);
lean_dec_ref(v___x_2035_);
v_sz_2037_ = lean_array_size(v_contents_2034_);
v___x_2038_ = ((size_t)0ULL);
lean_inc_ref(v_contents_2034_);
v___x_2039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2037_, v___x_2038_, v_contents_2034_);
v___x_2040_ = lean_string_length(v___y_2033_);
lean_dec_ref(v___y_2033_);
v___x_2041_ = lean_nat_add(v___y_2025_, v___x_2040_);
v___x_2042_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2039_, v___x_2019_, v___x_2041_, v_snd_2036_);
lean_dec(v___x_2041_);
lean_dec_ref(v___x_2039_);
v_snd_2043_ = lean_ctor_get(v___x_2042_, 1);
lean_inc(v_snd_2043_);
lean_dec_ref(v___x_2042_);
v___x_2044_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2043_);
v_snd_2045_ = lean_ctor_get(v___x_2044_, 1);
lean_inc(v_snd_2045_);
lean_dec_ref(v___x_2044_);
v___x_2046_ = lean_unsigned_to_nat(1u);
v___x_2047_ = lean_nat_add(v_b_2024_, v___x_2046_);
lean_dec(v_b_2024_);
v___x_2048_ = ((size_t)1ULL);
v___x_2049_ = lean_usize_add(v_i_2023_, v___x_2048_);
v_i_2023_ = v___x_2049_;
v_b_2024_ = v___x_2047_;
v___y_2026_ = v_snd_2045_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__9(uint8_t v___x_2057_, lean_object* v_as_2058_, size_t v_sz_2059_, size_t v_i_2060_, lean_object* v_b_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
uint8_t v___x_2064_; 
v___x_2064_ = lean_usize_dec_lt(v_i_2060_, v_sz_2059_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2065_, 0, v_b_2061_);
lean_ctor_set(v___x_2065_, 1, v___y_2063_);
return v___x_2065_;
}
else
{
lean_object* v___x_2066_; lean_object* v_snd_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v_snd_2070_; lean_object* v_a_2071_; lean_object* v_term_2072_; lean_object* v_desc_2073_; lean_object* v___x_2074_; lean_object* v___y_2076_; lean_object* v___y_2077_; uint8_t v___x_2096_; 
v___x_2066_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v___y_2062_, v___y_2063_);
v_snd_2067_ = lean_ctor_get(v___x_2066_, 1);
lean_inc(v_snd_2067_);
lean_dec_ref(v___x_2066_);
v___x_2068_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__4));
v___x_2069_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2068_, v_snd_2067_);
v_snd_2070_ = lean_ctor_get(v___x_2069_, 1);
lean_inc(v_snd_2070_);
lean_dec_ref(v___x_2069_);
v_a_2071_ = lean_array_uget_borrowed(v_as_2058_, v_i_2060_);
v_term_2072_ = lean_ctor_get(v_a_2071_, 2);
v_desc_2073_ = lean_ctor_get(v_a_2071_, 3);
v___x_2074_ = lean_box(0);
v___x_2096_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace(v_term_2072_);
if (v___x_2096_ == 0)
{
v___y_2076_ = v___y_2062_;
v___y_2077_ = v_snd_2070_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v_snd_2099_; 
v___x_2097_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0));
v___x_2098_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2097_, v_snd_2070_);
v_snd_2099_ = lean_ctor_get(v___x_2098_, 1);
lean_inc(v_snd_2099_);
lean_dec_ref(v___x_2098_);
v___y_2076_ = v___y_2062_;
v___y_2077_ = v_snd_2099_;
goto v___jp_2075_;
}
v___jp_2075_:
{
size_t v_sz_2078_; size_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v_snd_2082_; lean_object* v___x_2083_; lean_object* v_snd_2084_; size_t v_sz_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v_snd_2090_; lean_object* v___x_2091_; lean_object* v_snd_2092_; size_t v___x_2093_; size_t v___x_2094_; 
v_sz_2078_ = lean_array_size(v_term_2072_);
v___x_2079_ = ((size_t)0ULL);
lean_inc_ref(v_term_2072_);
v___x_2080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2078_, v___x_2079_, v_term_2072_);
v___x_2081_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2080_, v___x_2057_, v___y_2076_, v___y_2077_);
lean_dec_ref(v___x_2080_);
v_snd_2082_ = lean_ctor_get(v___x_2081_, 1);
lean_inc(v_snd_2082_);
lean_dec_ref(v___x_2081_);
v___x_2083_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2082_);
v_snd_2084_ = lean_ctor_get(v___x_2083_, 1);
lean_inc(v_snd_2084_);
lean_dec_ref(v___x_2083_);
v_sz_2085_ = lean_array_size(v_desc_2073_);
lean_inc_ref(v_desc_2073_);
v___x_2086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2085_, v___x_2079_, v_desc_2073_);
v___x_2087_ = lean_unsigned_to_nat(2u);
v___x_2088_ = lean_nat_add(v___y_2076_, v___x_2087_);
v___x_2089_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2086_, v___x_2057_, v___x_2088_, v_snd_2084_);
lean_dec(v___x_2088_);
lean_dec_ref(v___x_2086_);
v_snd_2090_ = lean_ctor_get(v___x_2089_, 1);
lean_inc(v_snd_2090_);
lean_dec_ref(v___x_2089_);
v___x_2091_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2090_);
v_snd_2092_ = lean_ctor_get(v___x_2091_, 1);
lean_inc(v_snd_2092_);
lean_dec_ref(v___x_2091_);
v___x_2093_ = ((size_t)1ULL);
v___x_2094_ = lean_usize_add(v_i_2060_, v___x_2093_);
v_i_2060_ = v___x_2094_;
v_b_2061_ = v___x_2074_;
v___y_2063_ = v_snd_2092_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(lean_object* v_stx_2103_, lean_object* v_next_x3f_2104_, uint8_t v_atLineStart_2105_, uint8_t v_alternate_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_){
_start:
{
lean_object* v___y_2110_; lean_object* v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v___y_2123_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
lean_inc(v_stx_2103_);
v___x_2140_ = l_Lean_Syntax_getKind(v_stx_2103_);
v___x_2141_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__3));
v___x_2142_ = lean_name_eq(v___x_2140_, v___x_2141_);
lean_dec(v___x_2140_);
if (v___x_2142_ == 0)
{
lean_object* v___x_2143_; 
lean_inc(v_stx_2103_);
v___x_2143_ = l_Lean_Doc_ArgValView_of(v_stx_2103_);
if (lean_obj_tag(v___x_2143_) == 1)
{
lean_object* v_val_2144_; 
lean_dec(v_next_x3f_2104_);
lean_dec(v_stx_2103_);
v_val_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_val_2144_);
lean_dec_ref_known(v___x_2143_, 1);
if (lean_obj_tag(v_val_2144_) == 1)
{
lean_object* v_x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v_x_2145_ = lean_ctor_get(v_val_2144_, 0);
lean_inc(v_x_2145_);
lean_dec_ref_known(v_val_2144_, 1);
v___x_2146_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_x_2145_);
v___x_2147_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2146_, v_a_2108_);
lean_dec_ref(v___x_2146_);
return v___x_2147_;
}
else
{
lean_object* v_lit_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v_lit_2148_ = lean_ctor_get(v_val_2144_, 0);
lean_inc(v_lit_2148_);
lean_dec(v_val_2144_);
v___x_2149_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_atomString(v_lit_2148_);
v___x_2150_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2149_, v_a_2108_);
lean_dec_ref(v___x_2149_);
return v___x_2150_;
}
}
else
{
lean_object* v___x_2151_; 
lean_dec(v___x_2143_);
lean_inc(v_stx_2103_);
v___x_2151_ = l_Lean_Doc_ArgView_of(v_stx_2103_);
if (lean_obj_tag(v___x_2151_) == 1)
{
lean_object* v_val_2152_; 
lean_dec(v_next_x3f_2104_);
lean_dec(v_stx_2103_);
v_val_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_val_2152_);
lean_dec_ref_known(v___x_2151_, 1);
switch(lean_obj_tag(v_val_2152_))
{
case 0:
{
lean_object* v_val_2153_; lean_object* v___x_2154_; 
v_val_2153_ = lean_ctor_get(v_val_2152_, 1);
lean_inc(v_val_2153_);
lean_dec_ref_known(v_val_2152_, 2);
v___x_2154_ = lean_box(0);
v_stx_2103_ = v_val_2153_;
v_next_x3f_2104_ = v___x_2154_;
v_atLineStart_2105_ = v___x_2142_;
v_alternate_2106_ = v___x_2142_;
goto _start;
}
case 1:
{
lean_object* v_name_2156_; lean_object* v_val_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v_snd_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v_snd_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v_snd_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v_snd_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v_name_2156_ = lean_ctor_get(v_val_2152_, 2);
lean_inc(v_name_2156_);
v_val_2157_ = lean_ctor_get(v_val_2152_, 4);
lean_inc(v_val_2157_);
lean_dec_ref_known(v_val_2152_, 5);
v___x_2158_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__0));
v___x_2159_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2158_, v_a_2108_);
v_snd_2160_ = lean_ctor_get(v___x_2159_, 1);
lean_inc(v_snd_2160_);
lean_dec_ref(v___x_2159_);
v___x_2161_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_name_2156_);
v___x_2162_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2161_, v_snd_2160_);
lean_dec_ref(v___x_2161_);
v_snd_2163_ = lean_ctor_get(v___x_2162_, 1);
lean_inc(v_snd_2163_);
lean_dec_ref(v___x_2162_);
v___x_2164_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__4));
v___x_2165_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2164_, v_snd_2163_);
v_snd_2166_ = lean_ctor_get(v___x_2165_, 1);
lean_inc(v_snd_2166_);
lean_dec_ref(v___x_2165_);
v___x_2167_ = lean_box(0);
v___x_2168_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_val_2157_, v___x_2167_, v___x_2142_, v___x_2142_, v_a_2107_, v_snd_2166_);
v_snd_2169_ = lean_ctor_get(v___x_2168_, 1);
lean_inc(v_snd_2169_);
lean_dec_ref(v___x_2168_);
v___x_2170_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__0));
v___x_2171_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2170_, v_snd_2169_);
return v___x_2171_;
}
default: 
{
lean_object* v_name_2172_; uint8_t v_isOn_2173_; lean_object* v___y_2175_; 
v_name_2172_ = lean_ctor_get(v_val_2152_, 2);
lean_inc(v_name_2172_);
v_isOn_2173_ = lean_ctor_get_uint8(v_val_2152_, sizeof(void*)*3);
lean_dec_ref_known(v_val_2152_, 3);
if (v_isOn_2173_ == 0)
{
lean_object* v___x_2180_; 
v___x_2180_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__7));
v___y_2175_ = v___x_2180_;
goto v___jp_2174_;
}
else
{
lean_object* v___x_2181_; 
v___x_2181_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__5));
v___y_2175_ = v___x_2181_;
goto v___jp_2174_;
}
v___jp_2174_:
{
lean_object* v___x_2176_; lean_object* v_snd_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2176_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___y_2175_, v_a_2108_);
v_snd_2177_ = lean_ctor_get(v___x_2176_, 1);
lean_inc(v_snd_2177_);
lean_dec_ref(v___x_2176_);
v___x_2178_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_name_2172_);
v___x_2179_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2178_, v_snd_2177_);
lean_dec_ref(v___x_2178_);
return v___x_2179_;
}
}
}
}
else
{
lean_object* v___x_2182_; 
lean_dec(v___x_2151_);
lean_inc(v_stx_2103_);
v___x_2182_ = l_Lean_Doc_LinkTargetView_of(v_stx_2103_);
if (lean_obj_tag(v___x_2182_) == 1)
{
lean_object* v_val_2183_; lean_object* v___x_2184_; 
lean_dec(v_next_x3f_2104_);
lean_dec(v_stx_2103_);
v_val_2183_ = lean_ctor_get(v___x_2182_, 0);
lean_inc(v_val_2183_);
lean_dec_ref_known(v___x_2182_, 1);
v___x_2184_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(v_val_2183_, v_a_2108_);
lean_dec(v_val_2183_);
return v___x_2184_;
}
else
{
lean_object* v___x_2185_; 
lean_dec(v___x_2182_);
lean_inc(v_stx_2103_);
v___x_2185_ = l_Lean_Doc_InlineView_of(v_stx_2103_);
if (lean_obj_tag(v___x_2185_) == 1)
{
lean_object* v_val_2186_; 
lean_dec(v_stx_2103_);
v_val_2186_ = lean_ctor_get(v___x_2185_, 0);
lean_inc(v_val_2186_);
lean_dec_ref_known(v___x_2185_, 1);
switch(lean_obj_tag(v_val_2186_))
{
case 0:
{
lean_object* v_view_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
lean_dec(v_next_x3f_2104_);
v_view_2187_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2187_);
lean_dec_ref_known(v_val_2186_, 1);
v___x_2188_ = l_Lean_Doc_TextView_getVersoText(v_view_2187_);
lean_dec_ref(v_view_2187_);
v___x_2189_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString(v_atLineStart_2105_, v___x_2188_);
v___x_2190_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2189_, v_a_2108_);
lean_dec_ref(v___x_2189_);
return v___x_2190_;
}
case 1:
{
lean_object* v_view_2191_; lean_object* v_content_2192_; uint32_t v___x_2193_; lean_object* v___x_2194_; 
lean_dec(v_next_x3f_2104_);
v_view_2191_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2191_);
lean_dec_ref_known(v_val_2186_, 1);
v_content_2192_ = lean_ctor_get(v_view_2191_, 2);
lean_inc_ref(v_content_2192_);
lean_dec_ref(v_view_2191_);
v___x_2193_ = 95;
v___x_2194_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike(v___x_2193_, v_content_2192_, v_a_2107_, v_a_2108_);
return v___x_2194_;
}
case 2:
{
lean_object* v_view_2195_; lean_object* v_content_2196_; uint32_t v___x_2197_; lean_object* v___x_2198_; 
lean_dec(v_next_x3f_2104_);
v_view_2195_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2195_);
lean_dec_ref_known(v_val_2186_, 1);
v_content_2196_ = lean_ctor_get(v_view_2195_, 2);
lean_inc_ref(v_content_2196_);
lean_dec_ref(v_view_2195_);
v___x_2197_ = 42;
v___x_2198_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike(v___x_2197_, v_content_2196_, v_a_2107_, v_a_2108_);
return v___x_2198_;
}
case 3:
{
lean_object* v_view_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
lean_dec(v_next_x3f_2104_);
v_view_2199_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2199_);
lean_dec_ref_known(v_val_2186_, 1);
v___x_2200_ = l_Lean_Doc_CodeView_getVersoCode(v_view_2199_);
lean_dec_ref(v_view_2199_);
v___x_2201_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString(v___x_2200_);
v___x_2202_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2201_, v_a_2108_);
lean_dec_ref(v___x_2201_);
return v___x_2202_;
}
case 4:
{
lean_object* v_view_2203_; lean_object* v___y_2205_; uint8_t v_mode_2211_; 
lean_dec(v_next_x3f_2104_);
v_view_2203_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2203_);
lean_dec_ref_known(v_val_2186_, 1);
v_mode_2211_ = lean_ctor_get_uint8(v_view_2203_, sizeof(void*)*3);
if (v_mode_2211_ == 0)
{
lean_object* v___x_2212_; 
v___x_2212_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__5));
v___y_2205_ = v___x_2212_;
goto v___jp_2204_;
}
else
{
lean_object* v___x_2213_; 
v___x_2213_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__6));
v___y_2205_ = v___x_2213_;
goto v___jp_2204_;
}
v___jp_2204_:
{
lean_object* v___x_2206_; lean_object* v_snd_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2206_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___y_2205_, v_a_2108_);
v_snd_2207_ = lean_ctor_get(v___x_2206_, 1);
lean_inc(v_snd_2207_);
lean_dec_ref(v___x_2206_);
v___x_2208_ = l_Lean_Doc_MathView_getVersoCode(v_view_2203_);
lean_dec_ref(v_view_2203_);
v___x_2209_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString(v___x_2208_);
v___x_2210_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2209_, v_snd_2207_);
lean_dec_ref(v___x_2209_);
return v___x_2210_;
}
}
case 5:
{
lean_object* v_view_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v_snd_2217_; lean_object* v_content_2218_; lean_object* v_target_2219_; size_t v_sz_2220_; size_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v_snd_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v_snd_2227_; lean_object* v___x_2228_; 
lean_dec(v_next_x3f_2104_);
v_view_2214_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2214_);
lean_dec_ref_known(v_val_2186_, 1);
v___x_2215_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1));
v___x_2216_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2215_, v_a_2108_);
v_snd_2217_ = lean_ctor_get(v___x_2216_, 1);
lean_inc(v_snd_2217_);
lean_dec_ref(v___x_2216_);
v_content_2218_ = lean_ctor_get(v_view_2214_, 2);
lean_inc_ref(v_content_2218_);
v_target_2219_ = lean_ctor_get(v_view_2214_, 4);
lean_inc_ref(v_target_2219_);
lean_dec_ref(v_view_2214_);
v_sz_2220_ = lean_array_size(v_content_2218_);
v___x_2221_ = ((size_t)0ULL);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2220_, v___x_2221_, v_content_2218_);
v___x_2223_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2222_, v___x_2142_, v_a_2107_, v_snd_2217_);
lean_dec_ref(v___x_2222_);
v_snd_2224_ = lean_ctor_get(v___x_2223_, 1);
lean_inc(v_snd_2224_);
lean_dec_ref(v___x_2223_);
v___x_2225_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2));
v___x_2226_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2225_, v_snd_2224_);
v_snd_2227_ = lean_ctor_get(v___x_2226_, 1);
lean_inc(v_snd_2227_);
lean_dec_ref(v___x_2226_);
v___x_2228_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(v_target_2219_, v_snd_2227_);
lean_dec_ref(v_target_2219_);
return v___x_2228_;
}
case 6:
{
lean_object* v_view_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v_snd_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v_snd_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v_snd_2239_; lean_object* v_target_2240_; lean_object* v___x_2241_; 
lean_dec(v_next_x3f_2104_);
v_view_2229_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2229_);
lean_dec_ref_known(v_val_2186_, 1);
v___x_2230_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__7));
v___x_2231_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2230_, v_a_2108_);
v_snd_2232_ = lean_ctor_get(v___x_2231_, 1);
lean_inc(v_snd_2232_);
lean_dec_ref(v___x_2231_);
v___x_2233_ = l_Lean_Doc_ImageView_getAlt(v_view_2229_);
v___x_2234_ = l_Lean_Doc_escapeVersoImageAlt(v___x_2233_);
lean_dec_ref(v___x_2233_);
v___x_2235_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2234_, v_snd_2232_);
lean_dec_ref(v___x_2234_);
v_snd_2236_ = lean_ctor_get(v___x_2235_, 1);
lean_inc(v_snd_2236_);
lean_dec_ref(v___x_2235_);
v___x_2237_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2));
v___x_2238_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2237_, v_snd_2236_);
v_snd_2239_ = lean_ctor_get(v___x_2238_, 1);
lean_inc(v_snd_2239_);
lean_dec_ref(v___x_2238_);
v_target_2240_ = lean_ctor_get(v_view_2229_, 4);
lean_inc_ref(v_target_2240_);
lean_dec_ref(v_view_2229_);
v___x_2241_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg(v_target_2240_, v_snd_2239_);
lean_dec_ref(v_target_2240_);
return v___x_2241_;
}
case 7:
{
lean_object* v_view_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v_snd_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v_snd_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
lean_dec(v_next_x3f_2104_);
v_view_2242_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2242_);
lean_dec_ref_known(v_val_2186_, 1);
v___x_2243_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8));
v___x_2244_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2243_, v_a_2108_);
v_snd_2245_ = lean_ctor_get(v___x_2244_, 1);
lean_inc(v_snd_2245_);
lean_dec_ref(v___x_2244_);
v___x_2246_ = l_Lean_Doc_FootnoteView_getName(v_view_2242_);
lean_dec_ref(v_view_2242_);
v___x_2247_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2246_, v_snd_2245_);
lean_dec_ref(v___x_2246_);
v_snd_2248_ = lean_ctor_get(v___x_2247_, 1);
lean_inc(v_snd_2248_);
lean_dec_ref(v___x_2247_);
v___x_2249_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2));
v___x_2250_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2249_, v_snd_2248_);
return v___x_2250_;
}
case 8:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec_ref_known(v_val_2186_, 1);
lean_dec(v_next_x3f_2104_);
v___x_2251_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_2252_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2251_, v_a_2108_);
return v___x_2252_;
}
default: 
{
lean_object* v_view_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v_snd_2256_; lean_object* v_name_2257_; lean_object* v_args_2258_; lean_object* v_content_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v_snd_2262_; lean_object* v___x_2263_; size_t v_sz_2264_; size_t v___x_2265_; lean_object* v___x_2266_; lean_object* v_snd_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v_snd_2270_; lean_object* v___x_2281_; 
v_view_2253_ = lean_ctor_get(v_val_2186_, 0);
lean_inc_ref(v_view_2253_);
lean_dec_ref_known(v_val_2186_, 1);
v___x_2254_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9));
v___x_2255_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2254_, v_a_2108_);
v_snd_2256_ = lean_ctor_get(v___x_2255_, 1);
lean_inc(v_snd_2256_);
lean_dec_ref(v___x_2255_);
v_name_2257_ = lean_ctor_get(v_view_2253_, 2);
lean_inc(v_name_2257_);
v_args_2258_ = lean_ctor_get(v_view_2253_, 3);
lean_inc_ref(v_args_2258_);
v_content_2259_ = lean_ctor_get(v_view_2253_, 6);
lean_inc_ref(v_content_2259_);
lean_dec_ref(v_view_2253_);
v___x_2260_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_name_2257_);
v___x_2261_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2260_, v_snd_2256_);
lean_dec_ref(v___x_2260_);
v_snd_2262_ = lean_ctor_get(v___x_2261_, 1);
lean_inc(v_snd_2262_);
lean_dec_ref(v___x_2261_);
v___x_2263_ = lean_box(0);
v_sz_2264_ = lean_array_size(v_args_2258_);
v___x_2265_ = ((size_t)0ULL);
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(v___x_2142_, v_args_2258_, v_sz_2264_, v___x_2265_, v___x_2263_, v_a_2107_, v_snd_2262_);
lean_dec_ref(v_args_2258_);
v_snd_2267_ = lean_ctor_get(v___x_2266_, 1);
lean_inc(v_snd_2267_);
lean_dec_ref(v___x_2266_);
v___x_2268_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10));
v___x_2269_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2268_, v_snd_2267_);
v_snd_2270_ = lean_ctor_get(v___x_2269_, 1);
lean_inc(v_snd_2270_);
lean_dec_ref(v___x_2269_);
v___x_2281_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_selfDelimiting_x3f(v_content_2259_);
if (lean_obj_tag(v___x_2281_) == 1)
{
lean_object* v_val_2282_; uint8_t v___x_2283_; 
v_val_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_val_2282_);
lean_dec_ref_known(v___x_2281_, 1);
v___x_2283_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_runsInto(v_val_2282_, v_next_x3f_2104_);
if (v___x_2283_ == 0)
{
size_t v_sz_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v_sz_2284_ = lean_array_size(v_content_2259_);
v___x_2285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2284_, v___x_2265_, v_content_2259_);
v___x_2286_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2285_, v___x_2283_, v_a_2107_, v_snd_2270_);
lean_dec_ref(v___x_2285_);
return v___x_2286_;
}
else
{
goto v___jp_2271_;
}
}
else
{
lean_dec(v___x_2281_);
lean_dec(v_next_x3f_2104_);
goto v___jp_2271_;
}
v___jp_2271_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v_snd_2274_; size_t v_sz_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v_snd_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2272_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1));
v___x_2273_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2272_, v_snd_2270_);
v_snd_2274_ = lean_ctor_get(v___x_2273_, 1);
lean_inc(v_snd_2274_);
lean_dec_ref(v___x_2273_);
v_sz_2275_ = lean_array_size(v_content_2259_);
v___x_2276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2275_, v___x_2265_, v_content_2259_);
v___x_2277_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2276_, v___x_2142_, v_a_2107_, v_snd_2274_);
lean_dec_ref(v___x_2276_);
v_snd_2278_ = lean_ctor_get(v___x_2277_, 1);
lean_inc(v_snd_2278_);
lean_dec_ref(v___x_2277_);
v___x_2279_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__2));
v___x_2280_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2279_, v_snd_2278_);
return v___x_2280_;
}
}
}
}
else
{
lean_object* v___x_2287_; 
lean_dec(v___x_2185_);
lean_dec(v_next_x3f_2104_);
lean_inc(v_stx_2103_);
v___x_2287_ = l_Lean_Doc_BlockView_of(v_stx_2103_);
if (lean_obj_tag(v___x_2287_) == 1)
{
lean_object* v_val_2288_; 
v_val_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_val_2288_);
lean_dec_ref_known(v___x_2287_, 1);
switch(lean_obj_tag(v_val_2288_))
{
case 0:
{
lean_object* v_view_2289_; lean_object* v_content_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; 
lean_dec(v_stx_2103_);
v_view_2289_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2289_);
lean_dec_ref_known(v_val_2288_, 1);
v_content_2290_ = lean_ctor_get(v_view_2289_, 1);
lean_inc_ref(v_content_2290_);
lean_dec_ref(v_view_2289_);
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = lean_array_get_size(v_content_2290_);
v___x_2293_ = lean_nat_dec_lt(v___x_2291_, v___x_2292_);
if (v___x_2293_ == 0)
{
lean_dec_ref(v_content_2290_);
goto v___jp_2137_;
}
else
{
if (v___x_2293_ == 0)
{
lean_dec_ref(v_content_2290_);
goto v___jp_2137_;
}
else
{
size_t v___x_2294_; size_t v___x_2295_; uint8_t v___x_2296_; lean_object* v___y_2298_; lean_object* v___y_2299_; 
v___x_2294_ = ((size_t)0ULL);
v___x_2295_ = lean_usize_of_nat(v___x_2292_);
v___x_2296_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__5(v___x_2142_, v_content_2290_, v___x_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_dec_ref(v_content_2290_);
goto v___jp_2137_;
}
else
{
lean_object* v___x_2305_; lean_object* v_snd_2306_; 
v___x_2305_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2306_ = lean_ctor_get(v___x_2305_, 1);
lean_inc(v_snd_2306_);
lean_dec_ref(v___x_2305_);
if (v___x_2293_ == 0)
{
goto v___jp_2307_;
}
else
{
if (v___x_2293_ == 0)
{
goto v___jp_2307_;
}
else
{
uint8_t v___x_2311_; 
v___x_2311_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__6(v___x_2296_, v___x_2142_, v_content_2290_, v___x_2294_, v___x_2295_);
if (v___x_2311_ == 0)
{
goto v___jp_2307_;
}
else
{
v___y_2298_ = v_a_2107_;
v___y_2299_ = v_snd_2306_;
goto v___jp_2297_;
}
}
}
v___jp_2307_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v_snd_2310_; 
v___x_2308_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0));
v___x_2309_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2308_, v_snd_2306_);
v_snd_2310_ = lean_ctor_get(v___x_2309_, 1);
lean_inc(v_snd_2310_);
lean_dec_ref(v___x_2309_);
v___y_2298_ = v_a_2107_;
v___y_2299_ = v_snd_2310_;
goto v___jp_2297_;
}
}
v___jp_2297_:
{
size_t v_sz_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v_snd_2303_; lean_object* v___x_2304_; 
v_sz_2300_ = lean_array_size(v_content_2290_);
v___x_2301_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2300_, v___x_2294_, v_content_2290_);
v___x_2302_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2301_, v___x_2296_, v___y_2298_, v___y_2299_);
lean_dec_ref(v___x_2301_);
v_snd_2303_ = lean_ctor_get(v___x_2302_, 1);
lean_inc(v_snd_2303_);
lean_dec_ref(v___x_2302_);
v___x_2304_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2303_);
return v___x_2304_;
}
}
}
}
case 1:
{
lean_object* v_view_2312_; lean_object* v___y_2314_; 
lean_dec(v_stx_2103_);
v_view_2312_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2312_);
lean_dec_ref_known(v_val_2288_, 1);
if (v_alternate_2106_ == 0)
{
lean_object* v___x_2322_; 
v___x_2322_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__11));
v___y_2314_ = v___x_2322_;
goto v___jp_2313_;
}
else
{
lean_object* v___x_2323_; 
v___x_2323_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__8));
v___y_2314_ = v___x_2323_;
goto v___jp_2313_;
}
v___jp_2313_:
{
lean_object* v_items_2315_; lean_object* v___x_2316_; size_t v_sz_2317_; size_t v___x_2318_; lean_object* v___x_2319_; lean_object* v_snd_2320_; lean_object* v___x_2321_; 
v_items_2315_ = lean_ctor_get(v_view_2312_, 1);
lean_inc_ref(v_items_2315_);
lean_dec_ref(v_view_2312_);
v___x_2316_ = lean_box(0);
v_sz_2317_ = lean_array_size(v_items_2315_);
v___x_2318_ = ((size_t)0ULL);
lean_inc_ref(v___y_2314_);
v___x_2319_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(v___y_2314_, v___x_2142_, v_items_2315_, v_sz_2317_, v___x_2318_, v___x_2316_, v_a_2107_, v_a_2108_);
lean_dec_ref(v_items_2315_);
v_snd_2320_ = lean_ctor_get(v___x_2319_, 1);
lean_inc(v_snd_2320_);
lean_dec_ref(v___x_2319_);
v___x_2321_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2320_);
return v___x_2321_;
}
}
case 2:
{
lean_object* v_view_2324_; lean_object* v_start_2325_; lean_object* v_items_2326_; size_t v_sz_2327_; size_t v___x_2328_; lean_object* v___x_2329_; lean_object* v_snd_2330_; lean_object* v___x_2331_; 
lean_dec(v_stx_2103_);
v_view_2324_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2324_);
lean_dec_ref_known(v_val_2288_, 1);
v_start_2325_ = lean_ctor_get(v_view_2324_, 1);
lean_inc(v_start_2325_);
v_items_2326_ = lean_ctor_get(v_view_2324_, 2);
lean_inc_ref(v_items_2326_);
lean_dec_ref(v_view_2324_);
v_sz_2327_ = lean_array_size(v_items_2326_);
v___x_2328_ = ((size_t)0ULL);
v___x_2329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8(v___x_2142_, v_alternate_2106_, v_items_2326_, v_sz_2327_, v___x_2328_, v_start_2325_, v_a_2107_, v_a_2108_);
lean_dec_ref(v_items_2326_);
v_snd_2330_ = lean_ctor_get(v___x_2329_, 1);
lean_inc(v_snd_2330_);
lean_dec_ref(v___x_2329_);
v___x_2331_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2330_);
return v___x_2331_;
}
case 3:
{
lean_object* v_view_2332_; lean_object* v_items_2333_; lean_object* v___x_2334_; size_t v_sz_2335_; size_t v___x_2336_; lean_object* v___x_2337_; lean_object* v_snd_2338_; lean_object* v___x_2339_; 
lean_dec(v_stx_2103_);
v_view_2332_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2332_);
lean_dec_ref_known(v_val_2288_, 1);
v_items_2333_ = lean_ctor_get(v_view_2332_, 1);
lean_inc_ref(v_items_2333_);
lean_dec_ref(v_view_2332_);
v___x_2334_ = lean_box(0);
v_sz_2335_ = lean_array_size(v_items_2333_);
v___x_2336_ = ((size_t)0ULL);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__9(v___x_2142_, v_items_2333_, v_sz_2335_, v___x_2336_, v___x_2334_, v_a_2107_, v_a_2108_);
lean_dec_ref(v_items_2333_);
v_snd_2338_ = lean_ctor_get(v___x_2337_, 1);
lean_inc(v_snd_2338_);
lean_dec_ref(v___x_2337_);
v___x_2339_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2338_);
return v___x_2339_;
}
case 4:
{
lean_object* v_view_2340_; lean_object* v___x_2341_; lean_object* v_snd_2342_; lean_object* v_content_2343_; lean_object* v___y_2345_; lean_object* v___x_2356_; lean_object* v___x_2357_; uint8_t v___x_2358_; 
lean_dec(v_stx_2103_);
v_view_2340_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2340_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2341_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2342_ = lean_ctor_get(v___x_2341_, 1);
lean_inc(v_snd_2342_);
lean_dec_ref(v___x_2341_);
v_content_2343_ = lean_ctor_get(v_view_2340_, 2);
lean_inc_ref(v_content_2343_);
lean_dec_ref(v_view_2340_);
v___x_2356_ = lean_array_get_size(v_content_2343_);
v___x_2357_ = lean_unsigned_to_nat(0u);
v___x_2358_ = lean_nat_dec_eq(v___x_2356_, v___x_2357_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; 
v___x_2359_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__12));
v___y_2345_ = v___x_2359_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2360_; 
v___x_2360_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__9));
v___y_2345_ = v___x_2360_;
goto v___jp_2344_;
}
v___jp_2344_:
{
lean_object* v___x_2346_; lean_object* v_snd_2347_; size_t v_sz_2348_; size_t v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v_snd_2354_; lean_object* v___x_2355_; 
v___x_2346_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___y_2345_, v_snd_2342_);
v_snd_2347_ = lean_ctor_get(v___x_2346_, 1);
lean_inc(v_snd_2347_);
lean_dec_ref(v___x_2346_);
v_sz_2348_ = lean_array_size(v_content_2343_);
v___x_2349_ = ((size_t)0ULL);
v___x_2350_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2348_, v___x_2349_, v_content_2343_);
v___x_2351_ = lean_unsigned_to_nat(2u);
v___x_2352_ = lean_nat_add(v_a_2107_, v___x_2351_);
v___x_2353_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2350_, v___x_2142_, v___x_2352_, v_snd_2347_);
lean_dec(v___x_2352_);
lean_dec_ref(v___x_2350_);
v_snd_2354_ = lean_ctor_get(v___x_2353_, 1);
lean_inc(v_snd_2354_);
lean_dec_ref(v___x_2353_);
v___x_2355_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2354_);
return v___x_2355_;
}
}
case 5:
{
lean_object* v_view_2361_; lean_object* v___x_2362_; lean_object* v_snd_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; lean_object* v___y_2371_; lean_object* v___y_2374_; lean_object* v___y_2375_; lean_object* v___y_2376_; lean_object* v___y_2388_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; uint8_t v___x_2407_; 
lean_dec(v_stx_2103_);
v_view_2361_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2361_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2362_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2363_ = lean_ctor_get(v___x_2362_, 1);
lean_inc(v_snd_2363_);
lean_dec_ref(v___x_2362_);
v___x_2364_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_2365_ = lean_unsigned_to_nat(3u);
v___x_2366_ = l_Lean_Doc_CodeBlockView_getVersoCodeBlock(v_view_2361_);
v___x_2404_ = l_Lean_Doc_longestBacktickRun(v___x_2366_);
v___x_2405_ = lean_unsigned_to_nat(1u);
v___x_2406_ = lean_nat_add(v___x_2404_, v___x_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_nat_dec_le(v___x_2365_, v___x_2406_);
if (v___x_2407_ == 0)
{
lean_dec(v___x_2406_);
v___y_2388_ = v___x_2365_;
goto v___jp_2387_;
}
else
{
v___y_2388_ = v___x_2406_;
goto v___jp_2387_;
}
v___jp_2367_:
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_string_append(v___x_2366_, v___y_2368_);
v___y_2119_ = v___y_2368_;
v___y_2120_ = v___y_2369_;
v___y_2121_ = v___y_2370_;
v___y_2122_ = v___y_2371_;
v___y_2123_ = v___x_2372_;
goto v___jp_2118_;
}
v___jp_2373_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v_snd_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; uint8_t v___x_2382_; 
v___x_2377_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_2378_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2377_, v___y_2376_);
v_snd_2379_ = lean_ctor_get(v___x_2378_, 1);
lean_inc(v_snd_2379_);
lean_dec_ref(v___x_2378_);
v___x_2380_ = lean_string_utf8_byte_size(v___x_2366_);
v___x_2381_ = lean_unsigned_to_nat(0u);
v___x_2382_ = lean_nat_dec_eq(v___x_2380_, v___x_2381_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2383_ = lean_unsigned_to_nat(1u);
v___x_2384_ = lean_nat_dec_le(v___x_2383_, v___x_2380_);
if (v___x_2384_ == 0)
{
v___y_2368_ = v___x_2377_;
v___y_2369_ = v_snd_2379_;
v___y_2370_ = v___y_2375_;
v___y_2371_ = v___y_2374_;
goto v___jp_2367_;
}
else
{
lean_object* v___x_2385_; uint8_t v___x_2386_; 
v___x_2385_ = lean_nat_sub(v___x_2380_, v___x_2383_);
v___x_2386_ = lean_string_memcmp(v___x_2366_, v___x_2377_, v___x_2385_, v___x_2381_, v___x_2383_);
lean_dec(v___x_2385_);
if (v___x_2386_ == 0)
{
v___y_2368_ = v___x_2377_;
v___y_2369_ = v_snd_2379_;
v___y_2370_ = v___y_2375_;
v___y_2371_ = v___y_2374_;
goto v___jp_2367_;
}
else
{
v___y_2119_ = v___x_2377_;
v___y_2120_ = v_snd_2379_;
v___y_2121_ = v___y_2375_;
v___y_2122_ = v___y_2374_;
v___y_2123_ = v___x_2366_;
goto v___jp_2118_;
}
}
}
else
{
v___y_2119_ = v___x_2377_;
v___y_2120_ = v_snd_2379_;
v___y_2121_ = v___y_2375_;
v___y_2122_ = v___y_2374_;
v___y_2123_ = v___x_2366_;
goto v___jp_2118_;
}
}
v___jp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v_name_x3f_2391_; 
v___x_2389_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_codeString_spec__0(v___y_2388_, v___x_2364_);
v___x_2390_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2389_, v_snd_2363_);
v_name_x3f_2391_ = lean_ctor_get(v_view_2361_, 2);
lean_inc(v_name_x3f_2391_);
if (lean_obj_tag(v_name_x3f_2391_) == 1)
{
lean_object* v_snd_2392_; lean_object* v_args_2393_; lean_object* v_val_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v_snd_2397_; lean_object* v___x_2398_; size_t v_sz_2399_; size_t v___x_2400_; lean_object* v___x_2401_; lean_object* v_snd_2402_; 
v_snd_2392_ = lean_ctor_get(v___x_2390_, 1);
lean_inc(v_snd_2392_);
lean_dec_ref(v___x_2390_);
v_args_2393_ = lean_ctor_get(v_view_2361_, 3);
lean_inc_ref(v_args_2393_);
lean_dec_ref(v_view_2361_);
v_val_2394_ = lean_ctor_get(v_name_x3f_2391_, 0);
lean_inc(v_val_2394_);
lean_dec_ref_known(v_name_x3f_2391_, 1);
v___x_2395_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_val_2394_);
v___x_2396_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2395_, v_snd_2392_);
lean_dec_ref(v___x_2395_);
v_snd_2397_ = lean_ctor_get(v___x_2396_, 1);
lean_inc(v_snd_2397_);
lean_dec_ref(v___x_2396_);
v___x_2398_ = lean_box(0);
v_sz_2399_ = lean_array_size(v_args_2393_);
v___x_2400_ = ((size_t)0ULL);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(v___x_2142_, v_args_2393_, v_sz_2399_, v___x_2400_, v___x_2398_, v_a_2107_, v_snd_2397_);
lean_dec_ref(v_args_2393_);
v_snd_2402_ = lean_ctor_get(v___x_2401_, 1);
lean_inc(v_snd_2402_);
lean_dec_ref(v___x_2401_);
v___y_2374_ = v___x_2389_;
v___y_2375_ = v_a_2107_;
v___y_2376_ = v_snd_2402_;
goto v___jp_2373_;
}
else
{
lean_object* v_snd_2403_; 
lean_dec(v_name_x3f_2391_);
lean_dec_ref(v_view_2361_);
v_snd_2403_ = lean_ctor_get(v___x_2390_, 1);
lean_inc(v_snd_2403_);
lean_dec_ref(v___x_2390_);
v___y_2374_ = v___x_2389_;
v___y_2375_ = v_a_2107_;
v___y_2376_ = v_snd_2403_;
goto v___jp_2373_;
}
}
}
case 6:
{
lean_object* v_view_2408_; lean_object* v___x_2409_; lean_object* v_snd_2410_; lean_object* v_name_2411_; lean_object* v_args_2412_; lean_object* v_content_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v_snd_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v_snd_2421_; lean_object* v___x_2422_; size_t v_sz_2423_; size_t v___x_2424_; lean_object* v___x_2425_; lean_object* v_snd_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v_snd_2429_; size_t v_sz_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v_snd_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v_snd_2436_; lean_object* v___x_2437_; lean_object* v_snd_2438_; lean_object* v___x_2439_; 
lean_dec(v_stx_2103_);
v_view_2408_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2408_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2409_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2410_ = lean_ctor_get(v___x_2409_, 1);
lean_inc(v_snd_2410_);
lean_dec_ref(v___x_2409_);
v_name_2411_ = lean_ctor_get(v_view_2408_, 2);
lean_inc(v_name_2411_);
v_args_2412_ = lean_ctor_get(v_view_2408_, 3);
lean_inc_ref(v_args_2412_);
v_content_2413_ = lean_ctor_get(v_view_2408_, 4);
lean_inc_ref(v_content_2413_);
lean_dec_ref(v_view_2408_);
v___x_2414_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_2415_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_directiveRun(v_content_2413_);
v___x_2416_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__12(v___x_2415_, v___x_2414_);
v___x_2417_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2416_, v_snd_2410_);
v_snd_2418_ = lean_ctor_get(v___x_2417_, 1);
lean_inc(v_snd_2418_);
lean_dec_ref(v___x_2417_);
v___x_2419_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_name_2411_);
v___x_2420_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2419_, v_snd_2418_);
lean_dec_ref(v___x_2419_);
v_snd_2421_ = lean_ctor_get(v___x_2420_, 1);
lean_inc(v_snd_2421_);
lean_dec_ref(v___x_2420_);
v___x_2422_ = lean_box(0);
v_sz_2423_ = lean_array_size(v_args_2412_);
v___x_2424_ = ((size_t)0ULL);
v___x_2425_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(v___x_2142_, v_args_2412_, v_sz_2423_, v___x_2424_, v___x_2422_, v_a_2107_, v_snd_2421_);
lean_dec_ref(v_args_2412_);
v_snd_2426_ = lean_ctor_get(v___x_2425_, 1);
lean_inc(v_snd_2426_);
lean_dec_ref(v___x_2425_);
v___x_2427_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_2428_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2427_, v_snd_2426_);
v_snd_2429_ = lean_ctor_get(v___x_2428_, 1);
lean_inc(v_snd_2429_);
lean_dec_ref(v___x_2428_);
v_sz_2430_ = lean_array_size(v_content_2413_);
v___x_2431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2430_, v___x_2424_, v_content_2413_);
v___x_2432_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2431_, v___x_2142_, v_a_2107_, v_snd_2429_);
lean_dec_ref(v___x_2431_);
v_snd_2433_ = lean_ctor_get(v___x_2432_, 1);
lean_inc(v_snd_2433_);
lean_dec_ref(v___x_2432_);
lean_inc(v_a_2107_);
v___x_2434_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(v_a_2107_, v___x_2414_);
v___x_2435_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2434_, v_snd_2433_);
lean_dec_ref(v___x_2434_);
v_snd_2436_ = lean_ctor_get(v___x_2435_, 1);
lean_inc(v_snd_2436_);
lean_dec_ref(v___x_2435_);
v___x_2437_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2416_, v_snd_2436_);
lean_dec_ref(v___x_2416_);
v_snd_2438_ = lean_ctor_get(v___x_2437_, 1);
lean_inc(v_snd_2438_);
lean_dec_ref(v___x_2437_);
v___x_2439_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2438_);
return v___x_2439_;
}
case 7:
{
lean_object* v_view_2440_; lean_object* v___x_2441_; lean_object* v_snd_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v_snd_2445_; lean_object* v_name_2446_; lean_object* v_args_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v_snd_2450_; lean_object* v___x_2451_; size_t v_sz_2452_; size_t v___x_2453_; lean_object* v___x_2454_; lean_object* v_snd_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v_snd_2458_; lean_object* v___x_2459_; 
lean_dec(v_stx_2103_);
v_view_2440_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2440_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2441_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2442_ = lean_ctor_get(v___x_2441_, 1);
lean_inc(v_snd_2442_);
lean_dec_ref(v___x_2441_);
v___x_2443_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__9));
v___x_2444_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2443_, v_snd_2442_);
v_snd_2445_ = lean_ctor_get(v___x_2444_, 1);
lean_inc(v_snd_2445_);
lean_dec_ref(v___x_2444_);
v_name_2446_ = lean_ctor_get(v_view_2440_, 2);
lean_inc(v_name_2446_);
v_args_2447_ = lean_ctor_get(v_view_2440_, 3);
lean_inc_ref(v_args_2447_);
lean_dec_ref(v_view_2440_);
v___x_2448_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_identString(v_name_2446_);
v___x_2449_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2448_, v_snd_2445_);
lean_dec_ref(v___x_2448_);
v_snd_2450_ = lean_ctor_get(v___x_2449_, 1);
lean_inc(v_snd_2450_);
lean_dec_ref(v___x_2449_);
v___x_2451_ = lean_box(0);
v_sz_2452_ = lean_array_size(v_args_2447_);
v___x_2453_ = ((size_t)0ULL);
v___x_2454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(v___x_2142_, v_args_2447_, v_sz_2452_, v___x_2453_, v___x_2451_, v_a_2107_, v_snd_2450_);
lean_dec_ref(v_args_2447_);
v_snd_2455_ = lean_ctor_get(v___x_2454_, 1);
lean_inc(v_snd_2455_);
lean_dec_ref(v___x_2454_);
v___x_2456_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__10));
v___x_2457_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2456_, v_snd_2455_);
v_snd_2458_ = lean_ctor_get(v___x_2457_, 1);
lean_inc(v_snd_2458_);
lean_dec_ref(v___x_2457_);
v___x_2459_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2458_);
return v___x_2459_;
}
case 8:
{
lean_object* v_view_2460_; lean_object* v___x_2461_; lean_object* v_snd_2462_; lean_object* v_level_2463_; lean_object* v_content_2464_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v_snd_2479_; uint8_t v___x_2480_; 
lean_dec(v_stx_2103_);
v_view_2460_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2460_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2461_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2462_ = lean_ctor_get(v___x_2461_, 1);
lean_inc(v_snd_2462_);
lean_dec_ref(v___x_2461_);
v_level_2463_ = lean_ctor_get(v_view_2460_, 2);
lean_inc(v_level_2463_);
v_content_2464_ = lean_ctor_get(v_view_2460_, 3);
lean_inc_ref(v_content_2464_);
lean_dec_ref(v_view_2460_);
v___x_2474_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__10));
v___x_2475_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__13(v_level_2463_, v___x_2474_);
v___x_2476_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_2477_ = lean_string_append(v___x_2475_, v___x_2476_);
v___x_2478_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2477_, v_snd_2462_);
lean_dec_ref(v___x_2477_);
v_snd_2479_ = lean_ctor_get(v___x_2478_, 1);
lean_inc(v_snd_2479_);
lean_dec_ref(v___x_2478_);
v___x_2480_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace(v_content_2464_);
if (v___x_2480_ == 0)
{
v___y_2466_ = v_a_2107_;
v___y_2467_ = v_snd_2479_;
goto v___jp_2465_;
}
else
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v_snd_2483_; 
v___x_2481_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0));
v___x_2482_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2481_, v_snd_2479_);
v_snd_2483_ = lean_ctor_get(v___x_2482_, 1);
lean_inc(v_snd_2483_);
lean_dec_ref(v___x_2482_);
v___y_2466_ = v_a_2107_;
v___y_2467_ = v_snd_2483_;
goto v___jp_2465_;
}
v___jp_2465_:
{
size_t v_sz_2468_; size_t v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v_snd_2472_; lean_object* v___x_2473_; 
v_sz_2468_ = lean_array_size(v_content_2464_);
v___x_2469_ = ((size_t)0ULL);
v___x_2470_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2468_, v___x_2469_, v_content_2464_);
v___x_2471_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2470_, v___x_2142_, v___y_2466_, v___y_2467_);
lean_dec_ref(v___x_2470_);
v_snd_2472_ = lean_ctor_get(v___x_2471_, 1);
lean_inc(v_snd_2472_);
lean_dec_ref(v___x_2471_);
v___x_2473_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2472_);
return v___x_2473_;
}
}
case 9:
{
lean_object* v_view_2484_; lean_object* v___x_2485_; lean_object* v_snd_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v_snd_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v_snd_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v_snd_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v_snd_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v_snd_2501_; lean_object* v___x_2502_; 
lean_dec(v_stx_2103_);
v_view_2484_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2484_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2485_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2486_ = lean_ctor_get(v___x_2485_, 1);
lean_inc(v_snd_2486_);
lean_dec_ref(v___x_2485_);
v___x_2487_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_linkTargetToString___redArg___closed__1));
v___x_2488_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2487_, v_snd_2486_);
v_snd_2489_ = lean_ctor_get(v___x_2488_, 1);
lean_inc(v_snd_2489_);
lean_dec_ref(v___x_2488_);
v___x_2490_ = l_Lean_Doc_LinkRefView_getName(v_view_2484_);
v___x_2491_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2490_, v_snd_2489_);
lean_dec_ref(v___x_2490_);
v_snd_2492_ = lean_ctor_get(v___x_2491_, 1);
lean_inc(v_snd_2492_);
lean_dec_ref(v___x_2491_);
v___x_2493_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13));
v___x_2494_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2493_, v_snd_2492_);
v_snd_2495_ = lean_ctor_get(v___x_2494_, 1);
lean_inc(v_snd_2495_);
lean_dec_ref(v___x_2494_);
v___x_2496_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_2497_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2496_, v_snd_2495_);
v_snd_2498_ = lean_ctor_get(v___x_2497_, 1);
lean_inc(v_snd_2498_);
lean_dec_ref(v___x_2497_);
v___x_2499_ = l_Lean_Doc_LinkRefView_getUrl(v_view_2484_);
lean_dec_ref(v_view_2484_);
v___x_2500_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2499_, v_snd_2498_);
lean_dec_ref(v___x_2499_);
v_snd_2501_ = lean_ctor_get(v___x_2500_, 1);
lean_inc(v_snd_2501_);
lean_dec_ref(v___x_2500_);
v___x_2502_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2501_);
return v___x_2502_;
}
case 10:
{
lean_object* v_view_2503_; lean_object* v___x_2504_; lean_object* v_snd_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v_snd_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v_snd_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v_snd_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v_snd_2517_; lean_object* v_content_2518_; lean_object* v___y_2520_; lean_object* v___y_2521_; uint8_t v___x_2528_; 
lean_dec(v_stx_2103_);
v_view_2503_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2503_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2504_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2505_ = lean_ctor_get(v___x_2504_, 1);
lean_inc(v_snd_2505_);
lean_dec_ref(v___x_2504_);
v___x_2506_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__8));
v___x_2507_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2506_, v_snd_2505_);
v_snd_2508_ = lean_ctor_get(v___x_2507_, 1);
lean_inc(v_snd_2508_);
lean_dec_ref(v___x_2507_);
v___x_2509_ = l_Lean_Doc_FootnoteRefView_getName(v_view_2503_);
v___x_2510_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2509_, v_snd_2508_);
lean_dec_ref(v___x_2509_);
v_snd_2511_ = lean_ctor_get(v___x_2510_, 1);
lean_inc(v_snd_2511_);
lean_dec_ref(v___x_2510_);
v___x_2512_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__13));
v___x_2513_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2512_, v_snd_2511_);
v_snd_2514_ = lean_ctor_get(v___x_2513_, 1);
lean_inc(v_snd_2514_);
lean_dec_ref(v___x_2513_);
v___x_2515_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_2516_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2515_, v_snd_2514_);
v_snd_2517_ = lean_ctor_get(v___x_2516_, 1);
lean_inc(v_snd_2517_);
lean_dec_ref(v___x_2516_);
v_content_2518_ = lean_ctor_get(v_view_2503_, 4);
lean_inc_ref(v_content_2518_);
lean_dec_ref(v_view_2503_);
v___x_2528_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_leadingSpace(v_content_2518_);
if (v___x_2528_ == 0)
{
v___y_2520_ = v_a_2107_;
v___y_2521_ = v_snd_2517_;
goto v___jp_2519_;
}
else
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v_snd_2531_; 
v___x_2529_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString___closed__0));
v___x_2530_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2529_, v_snd_2517_);
v_snd_2531_ = lean_ctor_get(v___x_2530_, 1);
lean_inc(v_snd_2531_);
lean_dec_ref(v___x_2530_);
v___y_2520_ = v_a_2107_;
v___y_2521_ = v_snd_2531_;
goto v___jp_2519_;
}
v___jp_2519_:
{
size_t v_sz_2522_; size_t v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v_snd_2526_; lean_object* v___x_2527_; 
v_sz_2522_ = lean_array_size(v_content_2518_);
v___x_2523_ = ((size_t)0ULL);
v___x_2524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__3(v_sz_2522_, v___x_2523_, v_content_2518_);
v___x_2525_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2524_, v___x_2142_, v___y_2520_, v___y_2521_);
lean_dec_ref(v___x_2524_);
v_snd_2526_ = lean_ctor_get(v___x_2525_, 1);
lean_inc(v_snd_2526_);
lean_dec_ref(v___x_2525_);
v___x_2527_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2526_);
return v___x_2527_;
}
}
default: 
{
lean_object* v_view_2532_; lean_object* v___x_2533_; lean_object* v_snd_2534_; lean_object* v___y_2536_; lean_object* v___x_2549_; 
v_view_2532_ = lean_ctor_get(v_val_2288_, 0);
lean_inc_ref(v_view_2532_);
lean_dec_ref_known(v_val_2288_, 1);
v___x_2533_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock(v_a_2107_, v_a_2108_);
v_snd_2534_ = lean_ctor_get(v___x_2533_, 1);
lean_inc(v_snd_2534_);
lean_dec_ref(v___x_2533_);
v___x_2549_ = l_Lean_Syntax_getSubstring_x3f(v_stx_2103_, v___x_2142_, v___x_2142_);
lean_dec(v_stx_2103_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_contents_2550_; lean_object* v___x_2551_; 
v_contents_2550_ = lean_ctor_get(v_view_2532_, 2);
lean_inc(v_contents_2550_);
lean_dec_ref(v_view_2532_);
v___x_2551_ = l_Lean_Syntax_reprint(v_contents_2550_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___y_2536_ = v___x_2552_;
goto v___jp_2535_;
}
else
{
lean_object* v_val_2553_; 
v_val_2553_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_val_2553_);
lean_dec_ref_known(v___x_2551_, 1);
v___y_2536_ = v_val_2553_;
goto v___jp_2535_;
}
}
else
{
lean_object* v_val_2554_; lean_object* v_str_2555_; lean_object* v_startPos_2556_; lean_object* v_stopPos_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v_snd_2561_; lean_object* v___x_2562_; 
lean_dec_ref(v_view_2532_);
v_val_2554_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_val_2554_);
lean_dec_ref_known(v___x_2549_, 1);
v_str_2555_ = lean_ctor_get(v_val_2554_, 0);
lean_inc_ref(v_str_2555_);
v_startPos_2556_ = lean_ctor_get(v_val_2554_, 1);
lean_inc(v_startPos_2556_);
v_stopPos_2557_ = lean_ctor_get(v_val_2554_, 2);
lean_inc(v_stopPos_2557_);
lean_dec(v_val_2554_);
v___x_2558_ = lean_string_utf8_extract(v_str_2555_, v_startPos_2556_, v_stopPos_2557_);
lean_dec(v_stopPos_2557_);
lean_dec(v_startPos_2556_);
lean_dec_ref(v_str_2555_);
lean_inc(v_a_2107_);
v___x_2559_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented(v_a_2107_, v___x_2558_);
v___x_2560_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2559_, v_snd_2534_);
lean_dec_ref(v___x_2559_);
v_snd_2561_ = lean_ctor_get(v___x_2560_, 1);
lean_inc(v_snd_2561_);
lean_dec_ref(v___x_2560_);
v___x_2562_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2561_);
return v___x_2562_;
}
v___jp_2535_:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v_snd_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; uint8_t v___x_2543_; 
v___x_2537_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__14));
v___x_2538_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2537_, v_snd_2534_);
v_snd_2539_ = lean_ctor_get(v___x_2538_, 1);
lean_inc(v_snd_2539_);
lean_dec_ref(v___x_2538_);
lean_inc(v_a_2107_);
v___x_2540_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_reindented(v_a_2107_, v___y_2536_);
v___x_2541_ = lean_string_utf8_byte_size(v___x_2540_);
v___x_2542_ = lean_unsigned_to_nat(0u);
v___x_2543_ = lean_nat_dec_eq(v___x_2541_, v___x_2542_);
if (v___x_2543_ == 0)
{
lean_object* v___x_2544_; lean_object* v_snd_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v_snd_2548_; 
v___x_2544_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2540_, v_snd_2539_);
lean_dec_ref(v___x_2540_);
v_snd_2545_ = lean_ctor_get(v___x_2544_, 1);
lean_inc(v_snd_2545_);
lean_dec_ref(v___x_2544_);
v___x_2546_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_2547_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2546_, v_snd_2545_);
v_snd_2548_ = lean_ctor_get(v___x_2547_, 1);
lean_inc(v_snd_2548_);
lean_dec_ref(v___x_2547_);
v___y_2110_ = v_snd_2548_;
goto v___jp_2109_;
}
else
{
lean_dec_ref(v___x_2540_);
v___y_2110_ = v_snd_2539_;
goto v___jp_2109_;
}
}
}
}
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
lean_dec(v___x_2287_);
v___x_2563_ = lean_box(0);
v___x_2564_ = l_Lean_Syntax_formatStx(v_stx_2103_, v___x_2563_, v___x_2142_);
v___x_2565_ = l_Std_Format_defWidth;
v___x_2566_ = lean_unsigned_to_nat(0u);
v___x_2567_ = l_Std_Format_pretty(v___x_2564_, v___x_2565_, v___x_2566_, v___x_2566_);
v___x_2568_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2567_, v_a_2108_);
lean_dec_ref(v___x_2567_);
return v___x_2568_;
}
}
}
}
}
}
else
{
lean_object* v___x_2569_; uint8_t v___x_2570_; lean_object* v___x_2571_; 
lean_dec(v_next_x3f_2104_);
v___x_2569_ = l_Lean_Syntax_getArgs(v_stx_2103_);
lean_dec(v_stx_2103_);
v___x_2570_ = 0;
v___x_2571_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v___x_2569_, v___x_2570_, v_a_2107_, v_a_2108_);
lean_dec_ref(v___x_2569_);
return v___x_2571_;
}
v___jp_2109_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v_snd_2116_; lean_object* v___x_2117_; 
v___x_2111_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
lean_inc(v_a_2107_);
v___x_2112_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock_spec__0(v_a_2107_, v___x_2111_);
v___x_2113_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__2));
v___x_2114_ = lean_string_append(v___x_2112_, v___x_2113_);
v___x_2115_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2114_, v___y_2110_);
lean_dec_ref(v___x_2114_);
v_snd_2116_ = lean_ctor_get(v___x_2115_, 1);
lean_inc(v_snd_2116_);
lean_dec_ref(v___x_2115_);
v___x_2117_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2116_);
return v___x_2117_;
}
v___jp_2118_:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v_snd_2133_; lean_object* v___x_2134_; lean_object* v_snd_2135_; lean_object* v___x_2136_; 
v___x_2124_ = lean_unsigned_to_nat(0u);
v___x_2125_ = lean_string_utf8_byte_size(v___y_2123_);
lean_inc_ref(v___y_2123_);
v___x_2126_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2126_, 0, v___y_2123_);
lean_ctor_set(v___x_2126_, 1, v___x_2124_);
lean_ctor_set(v___x_2126_, 2, v___x_2125_);
v___x_2127_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0);
v___x_2128_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1));
v___x_2129_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg(v___y_2121_, v___y_2123_, v___x_2126_, v___x_2125_, v___x_2127_, v___x_2128_);
lean_dec_ref_known(v___x_2126_, 3);
lean_dec_ref(v___y_2123_);
v___x_2130_ = lean_array_to_list(v___x_2129_);
v___x_2131_ = l_String_intercalate(v___y_2119_, v___x_2130_);
v___x_2132_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2131_, v___y_2120_);
lean_dec_ref(v___x_2131_);
v_snd_2133_ = lean_ctor_get(v___x_2132_, 1);
lean_inc(v_snd_2133_);
lean_dec_ref(v___x_2132_);
v___x_2134_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___y_2122_, v_snd_2133_);
lean_dec_ref(v___y_2122_);
v_snd_2135_ = lean_ctor_get(v___x_2134_, 1);
lean_inc(v_snd_2135_);
lean_dec_ref(v___x_2134_);
v___x_2136_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_endBlock___redArg(v_snd_2135_);
return v___x_2136_;
}
v___jp_2137_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_box(0);
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v_a_2108_);
return v___x_2139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(uint8_t v___x_2572_, lean_object* v_as_2573_, size_t v_sz_2574_, size_t v_i_2575_, lean_object* v_b_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
uint8_t v___x_2579_; 
v___x_2579_ = lean_usize_dec_lt(v_i_2575_, v_sz_2574_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v_b_2576_);
lean_ctor_set(v___x_2580_, 1, v___y_2578_);
return v___x_2580_;
}
else
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v_snd_2583_; lean_object* v_a_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v_snd_2587_; lean_object* v___x_2588_; size_t v___x_2589_; size_t v___x_2590_; 
v___x_2581_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_textString_needsEscape___closed__12));
v___x_2582_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_out___redArg(v___x_2581_, v___y_2578_);
v_snd_2583_ = lean_ctor_get(v___x_2582_, 1);
lean_inc(v_snd_2583_);
lean_dec_ref(v___x_2582_);
v_a_2584_ = lean_array_uget_borrowed(v_as_2573_, v_i_2575_);
v___x_2585_ = lean_box(0);
lean_inc(v_a_2584_);
v___x_2586_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_a_2584_, v___x_2585_, v___x_2572_, v___x_2572_, v___y_2577_, v_snd_2583_);
v_snd_2587_ = lean_ctor_get(v___x_2586_, 1);
lean_inc(v_snd_2587_);
lean_dec_ref(v___x_2586_);
v___x_2588_ = lean_box(0);
v___x_2589_ = ((size_t)1ULL);
v___x_2590_ = lean_usize_add(v_i_2575_, v___x_2589_);
v_i_2575_ = v___x_2590_;
v_b_2576_ = v___x_2588_;
v___y_2578_ = v_snd_2587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4___boxed(lean_object* v___x_2592_, lean_object* v_as_2593_, lean_object* v_sz_2594_, lean_object* v_i_2595_, lean_object* v_b_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
uint8_t v___x_64333__boxed_2599_; size_t v_sz_boxed_2600_; size_t v_i_boxed_2601_; lean_object* v_res_2602_; 
v___x_64333__boxed_2599_ = lean_unbox(v___x_2592_);
v_sz_boxed_2600_ = lean_unbox_usize(v_sz_2594_);
lean_dec(v_sz_2594_);
v_i_boxed_2601_ = lean_unbox_usize(v_i_2595_);
lean_dec(v_i_2595_);
v_res_2602_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__4(v___x_64333__boxed_2599_, v_as_2593_, v_sz_boxed_2600_, v_i_boxed_2601_, v_b_2596_, v___y_2597_, v___y_2598_);
lean_dec(v___y_2597_);
lean_dec_ref(v_as_2593_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq___boxed(lean_object* v_stxs_2603_, lean_object* v_lineStart_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_){
_start:
{
uint8_t v_lineStart_boxed_2607_; lean_object* v_res_2608_; 
v_lineStart_boxed_2607_ = lean_unbox(v_lineStart_2604_);
v_res_2608_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq(v_stxs_2603_, v_lineStart_boxed_2607_, v_a_2605_, v_a_2606_);
lean_dec(v_a_2605_);
lean_dec_ref(v_stxs_2603_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7___boxed(lean_object* v___y_2609_, lean_object* v___x_2610_, lean_object* v_as_2611_, lean_object* v_sz_2612_, lean_object* v_i_2613_, lean_object* v_b_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
uint8_t v___x_64370__boxed_2617_; size_t v_sz_boxed_2618_; size_t v_i_boxed_2619_; lean_object* v_res_2620_; 
v___x_64370__boxed_2617_ = lean_unbox(v___x_2610_);
v_sz_boxed_2618_ = lean_unbox_usize(v_sz_2612_);
lean_dec(v_sz_2612_);
v_i_boxed_2619_ = lean_unbox_usize(v_i_2613_);
lean_dec(v_i_2613_);
v_res_2620_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__7(v___y_2609_, v___x_64370__boxed_2617_, v_as_2611_, v_sz_boxed_2618_, v_i_boxed_2619_, v_b_2614_, v___y_2615_, v___y_2616_);
lean_dec(v___y_2615_);
lean_dec_ref(v_as_2611_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike___boxed(lean_object* v_char_2621_, lean_object* v_inls_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_){
_start:
{
uint32_t v_char_boxed_2625_; lean_object* v_res_2626_; 
v_char_boxed_2625_ = lean_unbox_uint32(v_char_2621_);
lean_dec(v_char_2621_);
v_res_2626_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_emphLike(v_char_boxed_2625_, v_inls_2622_, v_a_2623_, v_a_2624_);
lean_dec(v_a_2623_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8___boxed(lean_object* v___x_2627_, lean_object* v_alternate_2628_, lean_object* v_as_2629_, lean_object* v_sz_2630_, lean_object* v_i_2631_, lean_object* v_b_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
uint8_t v___x_64427__boxed_2635_; uint8_t v_alternate_boxed_2636_; size_t v_sz_boxed_2637_; size_t v_i_boxed_2638_; lean_object* v_res_2639_; 
v___x_64427__boxed_2635_ = lean_unbox(v___x_2627_);
v_alternate_boxed_2636_ = lean_unbox(v_alternate_2628_);
v_sz_boxed_2637_ = lean_unbox_usize(v_sz_2630_);
lean_dec(v_sz_2630_);
v_i_boxed_2638_ = lean_unbox_usize(v_i_2631_);
lean_dec(v_i_2631_);
v_res_2639_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__8(v___x_64427__boxed_2635_, v_alternate_boxed_2636_, v_as_2629_, v_sz_boxed_2637_, v_i_boxed_2638_, v_b_2632_, v___y_2633_, v___y_2634_);
lean_dec(v___y_2633_);
lean_dec_ref(v_as_2629_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__9___boxed(lean_object* v___x_2640_, lean_object* v_as_2641_, lean_object* v_sz_2642_, lean_object* v_i_2643_, lean_object* v_b_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
uint8_t v___x_64461__boxed_2647_; size_t v_sz_boxed_2648_; size_t v_i_boxed_2649_; lean_object* v_res_2650_; 
v___x_64461__boxed_2647_ = lean_unbox(v___x_2640_);
v_sz_boxed_2648_ = lean_unbox_usize(v_sz_2642_);
lean_dec(v_sz_2642_);
v_i_boxed_2649_ = lean_unbox_usize(v_i_2643_);
lean_dec(v_i_2643_);
v_res_2650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__9(v___x_64461__boxed_2647_, v_as_2641_, v_sz_boxed_2648_, v_i_boxed_2649_, v_b_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v_as_2641_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg___boxed(lean_object* v_upperBound_2651_, lean_object* v___y_2652_, lean_object* v_a_2653_, lean_object* v_b_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg(v_upperBound_2651_, v___y_2652_, v_a_2653_, v_b_2654_, v___y_2655_, v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2652_);
lean_dec(v_upperBound_2651_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___boxed(lean_object* v_stx_2658_, lean_object* v_next_x3f_2659_, lean_object* v_atLineStart_2660_, lean_object* v_alternate_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
uint8_t v_atLineStart_boxed_2664_; uint8_t v_alternate_boxed_2665_; lean_object* v_res_2666_; 
v_atLineStart_boxed_2664_ = lean_unbox(v_atLineStart_2660_);
v_alternate_boxed_2665_ = lean_unbox(v_alternate_2661_);
v_res_2666_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_stx_2658_, v_next_x3f_2659_, v_atLineStart_boxed_2664_, v_alternate_boxed_2665_, v_a_2662_, v_a_2663_);
lean_dec(v_a_2662_);
return v_res_2666_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10(lean_object* v_s_2667_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_obj_once(&l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0, &l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0_once, _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__0);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10___boxed(lean_object* v_s_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__10(v_s_2669_);
lean_dec_ref(v_s_2669_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0(lean_object* v_upperBound_2671_, lean_object* v___y_2672_, lean_object* v_inst_2673_, lean_object* v_R_2674_, lean_object* v_a_2675_, lean_object* v_b_2676_, lean_object* v_c_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___redArg(v_upperBound_2671_, v___y_2672_, v_a_2675_, v_b_2676_, v___y_2678_, v___y_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0___boxed(lean_object* v_upperBound_2681_, lean_object* v___y_2682_, lean_object* v_inst_2683_, lean_object* v_R_2684_, lean_object* v_a_2685_, lean_object* v_b_2686_, lean_object* v_c_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_seq_spec__0(v_upperBound_2681_, v___y_2682_, v_inst_2683_, v_R_2684_, v_a_2685_, v_b_2686_, v_c_2687_, v___y_2688_, v___y_2689_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2682_);
lean_dec(v_upperBound_2681_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11(lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___x_2693_, lean_object* v___x_2694_, lean_object* v_inst_2695_, lean_object* v_R_2696_, lean_object* v_a_2697_, lean_object* v_b_2698_){
_start:
{
lean_object* v___x_2699_; 
v___x_2699_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___redArg(v___y_2691_, v___y_2692_, v___x_2693_, v___x_2694_, v_a_2697_, v_b_2698_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11___boxed(lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___x_2702_, lean_object* v___x_2703_, lean_object* v_inst_2704_, lean_object* v_R_2705_, lean_object* v_a_2706_, lean_object* v_b_2707_){
_start:
{
lean_object* v_res_2708_; 
v_res_2708_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27_spec__11(v___y_2700_, v___y_2701_, v___x_2702_, v___x_2703_, v_inst_2704_, v_R_2705_, v_a_2706_, v_b_2707_);
lean_dec_ref(v___x_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline_spec__0(lean_object* v_s_2709_, lean_object* v_pos_2710_){
_start:
{
lean_object* v_str_2711_; lean_object* v_startInclusive_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; uint8_t v_decide_2716_; 
v_str_2711_ = lean_ctor_get(v_s_2709_, 0);
v_startInclusive_2712_ = lean_ctor_get(v_s_2709_, 1);
v___x_2713_ = lean_nat_add(v_startInclusive_2712_, v_pos_2710_);
v___x_2714_ = lean_nat_sub(v___x_2713_, v_startInclusive_2712_);
v___x_2715_ = lean_unsigned_to_nat(0u);
v_decide_2716_ = lean_nat_dec_eq(v___x_2714_, v___x_2715_);
if (v_decide_2716_ == 0)
{
uint32_t v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; uint32_t v___x_2723_; uint8_t v___x_2724_; 
v___x_2717_ = 10;
lean_inc(v_startInclusive_2712_);
lean_inc_ref(v_str_2711_);
v___x_2718_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2718_, 0, v_str_2711_);
lean_ctor_set(v___x_2718_, 1, v_startInclusive_2712_);
lean_ctor_set(v___x_2718_, 2, v___x_2713_);
v___x_2719_ = lean_unsigned_to_nat(1u);
v___x_2720_ = lean_nat_sub(v___x_2714_, v___x_2719_);
lean_dec(v___x_2714_);
v___x_2721_ = l_String_Slice_posLE(v___x_2718_, v___x_2720_);
lean_dec_ref_known(v___x_2718_, 3);
v___x_2722_ = lean_nat_add(v_startInclusive_2712_, v___x_2721_);
v___x_2723_ = lean_string_utf8_get_fast(v_str_2711_, v___x_2722_);
lean_dec(v___x_2722_);
v___x_2724_ = lean_uint32_dec_eq(v___x_2723_, v___x_2717_);
if (v___x_2724_ == 0)
{
lean_dec(v___x_2721_);
return v_pos_2710_;
}
else
{
lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2725_ = lean_nat_add(v___x_2721_, v___x_2719_);
v___x_2726_ = lean_nat_dec_le(v___x_2725_, v_pos_2710_);
lean_dec(v___x_2725_);
if (v___x_2726_ == 0)
{
lean_dec(v___x_2721_);
return v_pos_2710_;
}
else
{
lean_dec(v_pos_2710_);
v_pos_2710_ = v___x_2721_;
goto _start;
}
}
}
else
{
lean_dec(v___x_2714_);
lean_dec(v___x_2713_);
return v_pos_2710_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline_spec__0___boxed(lean_object* v_s_2728_, lean_object* v_pos_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline_spec__0(v_s_2728_, v_pos_2729_);
lean_dec_ref(v_s_2728_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline(lean_object* v_s_2731_){
_start:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; uint8_t v___x_2734_; 
v___x_2732_ = lean_string_utf8_byte_size(v_s_2731_);
v___x_2733_ = lean_unsigned_to_nat(1u);
v___x_2734_ = lean_nat_dec_le(v___x_2733_, v___x_2732_);
if (v___x_2734_ == 0)
{
return v_s_2731_;
}
else
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2735_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__0));
v___x_2736_ = lean_unsigned_to_nat(0u);
v___x_2737_ = lean_nat_sub(v___x_2732_, v___x_2733_);
v___x_2738_ = lean_string_memcmp(v_s_2731_, v___x_2735_, v___x_2737_, v___x_2736_, v___x_2733_);
lean_dec(v___x_2737_);
if (v___x_2738_ == 0)
{
return v_s_2731_;
}
else
{
uint32_t v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2739_ = 10;
lean_inc_ref(v_s_2731_);
v___x_2740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2740_, 0, v_s_2731_);
lean_ctor_set(v___x_2740_, 1, v___x_2736_);
lean_ctor_set(v___x_2740_, 2, v___x_2732_);
v___x_2741_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline_spec__0(v___x_2740_, v___x_2732_);
lean_dec_ref_known(v___x_2740_, 3);
v___x_2742_ = lean_string_utf8_extract_fast(v_s_2731_, v___x_2736_, v___x_2741_);
lean_dec(v___x_2741_);
lean_dec_ref(v_s_2731_);
v___x_2743_ = lean_string_push(v___x_2742_, v___x_2739_);
return v___x_2743_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString(lean_object* v_stx_2744_, uint8_t v_alternate_2745_){
_start:
{
lean_object* v___x_2746_; uint8_t v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v_snd_2751_; 
v___x_2746_ = lean_box(0);
v___x_2747_ = 0;
v___x_2748_ = lean_unsigned_to_nat(0u);
v___x_2749_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_2750_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27(v_stx_2744_, v___x_2746_, v___x_2747_, v_alternate_2745_, v___x_2748_, v___x_2749_);
v_snd_2751_ = lean_ctor_get(v___x_2750_, 1);
lean_inc(v_snd_2751_);
lean_dec_ref(v___x_2750_);
return v_snd_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString___boxed(lean_object* v_stx_2752_, lean_object* v_alternate_2753_){
_start:
{
uint8_t v_alternate_boxed_2754_; lean_object* v_res_2755_; 
v_alternate_boxed_2754_ = lean_unbox(v_alternate_2753_);
v_res_2755_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString(v_stx_2752_, v_alternate_boxed_2754_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoSyntaxToString(lean_object* v_stx_2756_, uint8_t v_alternate_2757_){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2758_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString(v_stx_2756_, v_alternate_2757_);
v___x_2759_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline(v___x_2758_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoSyntaxToString___boxed(lean_object* v_stx_2760_, lean_object* v_alternate_2761_){
_start:
{
uint8_t v_alternate_boxed_2762_; lean_object* v_res_2763_; 
v_alternate_boxed_2762_ = lean_unbox(v_alternate_2761_);
v_res_2763_ = l_Lean_Doc_Parser_versoSyntaxToString(v_stx_2760_, v_alternate_boxed_2762_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___lam__0(lean_object* v_b_2764_, lean_object* v___y_2765_){
_start:
{
uint8_t v___x_2766_; 
lean_inc(v_b_2764_);
v___x_2766_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_blankParagraph(v_b_2764_);
if (v___x_2766_ == 0)
{
lean_object* v___x_2767_; uint8_t v___y_2769_; 
lean_inc(v_b_2764_);
v___x_2767_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_markerFor(v___y_2765_, v_b_2764_);
lean_dec(v___y_2765_);
if (lean_obj_tag(v___x_2767_) == 0)
{
v___y_2769_ = v___x_2766_;
goto v___jp_2768_;
}
else
{
lean_object* v_val_2772_; uint8_t v_alternate_2773_; 
v_val_2772_ = lean_ctor_get(v___x_2767_, 0);
v_alternate_2773_ = lean_ctor_get_uint8(v_val_2772_, 1);
v___y_2769_ = v_alternate_2773_;
goto v___jp_2768_;
}
v___jp_2768_:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_separatedToString(v_b_2764_, v___y_2769_);
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2770_);
lean_ctor_set(v___x_2771_, 1, v___x_2767_);
return v___x_2771_;
}
}
else
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
lean_dec(v_b_2764_);
v___x_2774_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
lean_ctor_set(v___x_2775_, 1, v___y_2765_);
return v___x_2775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg(lean_object* v_n_2776_, lean_object* v_f_2777_, lean_object* v_xs_2778_, lean_object* v_k_2779_, lean_object* v_acc_2780_, lean_object* v___y_2781_){
_start:
{
uint8_t v___x_2782_; 
v___x_2782_ = lean_nat_dec_lt(v_k_2779_, v_n_2776_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; 
lean_dec(v_k_2779_);
lean_dec_ref(v_f_2777_);
v___x_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2783_, 0, v_acc_2780_);
lean_ctor_set(v___x_2783_, 1, v___y_2781_);
return v___x_2783_;
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v_fst_2786_; lean_object* v_snd_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2784_ = lean_array_fget_borrowed(v_xs_2778_, v_k_2779_);
lean_inc_ref(v_f_2777_);
lean_inc(v___x_2784_);
v___x_2785_ = lean_apply_2(v_f_2777_, v___x_2784_, v___y_2781_);
v_fst_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_fst_2786_);
v_snd_2787_ = lean_ctor_get(v___x_2785_, 1);
lean_inc(v_snd_2787_);
lean_dec_ref(v___x_2785_);
v___x_2788_ = lean_unsigned_to_nat(1u);
v___x_2789_ = lean_nat_add(v_k_2779_, v___x_2788_);
lean_dec(v_k_2779_);
v___x_2790_ = lean_array_push(v_acc_2780_, v_fst_2786_);
v_k_2779_ = v___x_2789_;
v_acc_2780_ = v___x_2790_;
v___y_2781_ = v_snd_2787_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg___boxed(lean_object* v_n_2792_, lean_object* v_f_2793_, lean_object* v_xs_2794_, lean_object* v_k_2795_, lean_object* v_acc_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg(v_n_2792_, v_f_2793_, v_xs_2794_, v_k_2795_, v_acc_2796_, v___y_2797_);
lean_dec_ref(v_xs_2794_);
lean_dec(v_n_2792_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString(lean_object* v_blocks_2800_){
_start:
{
lean_object* v___f_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v_fst_2807_; 
v___f_2801_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___closed__0));
v___x_2802_ = lean_array_get_size(v_blocks_2800_);
v___x_2803_ = lean_unsigned_to_nat(0u);
v___x_2804_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoSyntaxToString_x27___closed__1));
v___x_2805_ = lean_box(0);
v___x_2806_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg(v___x_2802_, v___f_2801_, v_blocks_2800_, v___x_2803_, v___x_2804_, v___x_2805_);
v_fst_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_fst_2807_);
lean_dec_ref(v___x_2806_);
return v_fst_2807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString___boxed(lean_object* v_blocks_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString(v_blocks_2808_);
lean_dec_ref(v_blocks_2808_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0(lean_object* v_00_u03b1_2810_, lean_object* v_00_u03b2_2811_, lean_object* v_n_2812_, lean_object* v_f_2813_, lean_object* v_xs_2814_, lean_object* v_k_2815_, lean_object* v_h_2816_, lean_object* v_acc_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___redArg(v_n_2812_, v_f_2813_, v_xs_2814_, v_k_2815_, v_acc_2817_, v___y_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0___boxed(lean_object* v_00_u03b1_2820_, lean_object* v_00_u03b2_2821_, lean_object* v_n_2822_, lean_object* v_f_2823_, lean_object* v_xs_2824_, lean_object* v_k_2825_, lean_object* v_h_2826_, lean_object* v_acc_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString_spec__0(v_00_u03b1_2820_, v_00_u03b2_2821_, v_n_2822_, v_f_2823_, v_xs_2824_, v_k_2825_, v_h_2826_, v_acc_2827_, v___y_2828_);
lean_dec_ref(v_xs_2824_);
lean_dec(v_n_2822_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_Parser_versoDocumentToString_spec__0(lean_object* v_as_2830_, size_t v_i_2831_, size_t v_stop_2832_, lean_object* v_b_2833_){
_start:
{
uint8_t v___x_2834_; 
v___x_2834_ = lean_usize_dec_eq(v_i_2831_, v_stop_2832_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; lean_object* v___x_2836_; size_t v___x_2837_; size_t v___x_2838_; 
v___x_2835_ = lean_array_uget_borrowed(v_as_2830_, v_i_2831_);
v___x_2836_ = lean_string_append(v_b_2833_, v___x_2835_);
v___x_2837_ = ((size_t)1ULL);
v___x_2838_ = lean_usize_add(v_i_2831_, v___x_2837_);
v_i_2831_ = v___x_2838_;
v_b_2833_ = v___x_2836_;
goto _start;
}
else
{
return v_b_2833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_Parser_versoDocumentToString_spec__0___boxed(lean_object* v_as_2840_, lean_object* v_i_2841_, lean_object* v_stop_2842_, lean_object* v_b_2843_){
_start:
{
size_t v_i_boxed_2844_; size_t v_stop_boxed_2845_; lean_object* v_res_2846_; 
v_i_boxed_2844_ = lean_unbox_usize(v_i_2841_);
lean_dec(v_i_2841_);
v_stop_boxed_2845_ = lean_unbox_usize(v_stop_2842_);
lean_dec(v_stop_2842_);
v_res_2846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_Parser_versoDocumentToString_spec__0(v_as_2840_, v_i_boxed_2844_, v_stop_boxed_2845_, v_b_2843_);
lean_dec_ref(v_as_2840_);
return v_res_2846_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoDocumentToString___closed__0(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_2848_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline(v___x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoDocumentToString(lean_object* v_blocks_2849_){
_start:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; uint8_t v___x_2854_; 
v___x_2850_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_startBlock___closed__1));
v___x_2851_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString(v_blocks_2849_);
v___x_2852_ = lean_unsigned_to_nat(0u);
v___x_2853_ = lean_array_get_size(v___x_2851_);
v___x_2854_ = lean_nat_dec_lt(v___x_2852_, v___x_2853_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_dec_ref(v___x_2851_);
v___x_2855_ = lean_obj_once(&l_Lean_Doc_Parser_versoDocumentToString___closed__0, &l_Lean_Doc_Parser_versoDocumentToString___closed__0_once, _init_l_Lean_Doc_Parser_versoDocumentToString___closed__0);
return v___x_2855_;
}
else
{
size_t v___x_2856_; size_t v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2856_ = ((size_t)0ULL);
v___x_2857_ = lean_usize_of_nat(v___x_2853_);
v___x_2858_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_Parser_versoDocumentToString_spec__0(v___x_2851_, v___x_2856_, v___x_2857_, v___x_2850_);
lean_dec_ref(v___x_2851_);
v___x_2859_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline(v___x_2858_);
return v___x_2859_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoDocumentToString___boxed(lean_object* v_blocks_2860_){
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l_Lean_Doc_Parser_versoDocumentToString(v_blocks_2860_);
lean_dec_ref(v_blocks_2860_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(lean_object* v___y_2862_){
_start:
{
lean_object* v___x_2864_; lean_object* v_stxTrav_2865_; lean_object* v_cur_2866_; lean_object* v___x_2867_; 
v___x_2864_ = lean_st_ref_get(v___y_2862_);
v_stxTrav_2865_ = lean_ctor_get(v___x_2864_, 0);
lean_inc_ref(v_stxTrav_2865_);
lean_dec(v___x_2864_);
v_cur_2866_ = lean_ctor_get(v_stxTrav_2865_, 0);
lean_inc(v_cur_2866_);
lean_dec_ref(v_stxTrav_2865_);
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v_cur_2866_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg___boxed(lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(v___y_2868_);
lean_dec(v___y_2868_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0(lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(v___y_2872_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___boxed(lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
lean_object* v_res_2882_; 
v_res_2882_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0(v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
return v_res_2882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg(lean_object* v___y_2883_){
_start:
{
lean_object* v___x_2885_; lean_object* v_stxTrav_2886_; lean_object* v_leadWord_2887_; uint8_t v_leadWordIdent_2888_; uint8_t v_isUngrouped_2889_; uint8_t v_mustBeGrouped_2890_; lean_object* v_stack_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2902_; 
v___x_2885_ = lean_st_ref_take(v___y_2883_);
v_stxTrav_2886_ = lean_ctor_get(v___x_2885_, 0);
v_leadWord_2887_ = lean_ctor_get(v___x_2885_, 1);
v_leadWordIdent_2888_ = lean_ctor_get_uint8(v___x_2885_, sizeof(void*)*3);
v_isUngrouped_2889_ = lean_ctor_get_uint8(v___x_2885_, sizeof(void*)*3 + 1);
v_mustBeGrouped_2890_ = lean_ctor_get_uint8(v___x_2885_, sizeof(void*)*3 + 2);
v_stack_2891_ = lean_ctor_get(v___x_2885_, 2);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2893_ = v___x_2885_;
v_isShared_2894_ = v_isSharedCheck_2902_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_stack_2891_);
lean_inc(v_leadWord_2887_);
lean_inc(v_stxTrav_2886_);
lean_dec(v___x_2885_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2902_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2898_; 
v___x_2895_ = lean_box(0);
v___x_2896_ = l_Lean_Syntax_Traverser_left(v_stxTrav_2886_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2896_);
v___x_2898_ = v___x_2893_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2896_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v_leadWord_2887_);
lean_ctor_set(v_reuseFailAlloc_2901_, 2, v_stack_2891_);
lean_ctor_set_uint8(v_reuseFailAlloc_2901_, sizeof(void*)*3, v_leadWordIdent_2888_);
lean_ctor_set_uint8(v_reuseFailAlloc_2901_, sizeof(void*)*3 + 1, v_isUngrouped_2889_);
lean_ctor_set_uint8(v_reuseFailAlloc_2901_, sizeof(void*)*3 + 2, v_mustBeGrouped_2890_);
v___x_2898_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_st_ref_put(v___y_2883_, v___x_2898_);
v___x_2900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2895_);
return v___x_2900_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg___boxed(lean_object* v___y_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v_res_2905_; 
v_res_2905_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg(v___y_2903_);
lean_dec(v___y_2903_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1(lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v___x_2911_; 
v___x_2911_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg(v___y_2907_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___boxed(lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1(v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg(lean_object* v_upperBound_2918_, lean_object* v___x_2919_, lean_object* v_rendered_2920_, lean_object* v_a_2921_, lean_object* v_b_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
uint8_t v___x_2928_; 
v___x_2928_ = lean_nat_dec_lt(v_a_2921_, v_upperBound_2918_);
if (v___x_2928_ == 0)
{
lean_object* v___x_2929_; 
lean_dec(v_a_2921_);
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v_b_2922_);
return v___x_2929_;
}
else
{
lean_object* v___x_2930_; lean_object* v___y_2932_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2930_ = lean_box(0);
v___x_2938_ = lean_unsigned_to_nat(0u);
v___x_2939_ = lean_unsigned_to_nat(1u);
v___x_2940_ = lean_nat_sub(v___x_2919_, v___x_2939_);
v___x_2941_ = lean_nat_sub(v___x_2940_, v_a_2921_);
lean_dec(v___x_2940_);
v___x_2942_ = lean_array_fget_borrowed(v_rendered_2920_, v___x_2941_);
lean_dec(v___x_2941_);
v___x_2943_ = lean_nat_dec_eq(v_a_2921_, v___x_2938_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; 
lean_inc(v___x_2942_);
v___x_2944_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2942_);
v___y_2932_ = v___x_2944_;
goto v___jp_2931_;
}
else
{
lean_object* v___x_2945_; lean_object* v___x_2946_; 
lean_inc(v___x_2942_);
v___x_2945_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_oneTrailingNewline(v___x_2942_);
v___x_2946_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
v___y_2932_ = v___x_2946_;
goto v___jp_2931_;
}
v___jp_2931_:
{
lean_object* v___x_2933_; 
v___x_2933_ = l_Lean_PrettyPrinter_Formatter_push___redArg(v___y_2932_, v___y_2924_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v___x_2934_; 
lean_dec_ref_known(v___x_2933_, 1);
v___x_2934_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Doc_Parser_document_formatter_spec__1___redArg(v___y_2924_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
lean_dec_ref_known(v___x_2934_, 1);
v___x_2935_ = lean_unsigned_to_nat(1u);
v___x_2936_ = lean_nat_add(v_a_2921_, v___x_2935_);
lean_dec(v_a_2921_);
v_a_2921_ = v___x_2936_;
v_b_2922_ = v___x_2930_;
goto _start;
}
else
{
lean_dec(v_a_2921_);
return v___x_2934_;
}
}
else
{
lean_dec(v_a_2921_);
return v___x_2933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg___boxed(lean_object* v_upperBound_2947_, lean_object* v___x_2948_, lean_object* v_rendered_2949_, lean_object* v_a_2950_, lean_object* v_b_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg(v_upperBound_2947_, v___x_2948_, v_rendered_2949_, v_a_2950_, v_b_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec_ref(v_rendered_2949_);
lean_dec(v___x_2948_);
lean_dec(v_upperBound_2947_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0(lean_object* v___x_2958_, lean_object* v_rendered_2959_, lean_object* v___x_2960_, lean_object* v___x_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_){
_start:
{
lean_object* v___x_2967_; 
v___x_2967_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg(v___x_2958_, v___x_2958_, v_rendered_2959_, v___x_2960_, v___x_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2974_ == 0)
{
lean_object* v_unused_2975_; 
v_unused_2975_ = lean_ctor_get(v___x_2967_, 0);
lean_dec(v_unused_2975_);
v___x_2969_ = v___x_2967_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_dec(v___x_2967_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
lean_ctor_set(v___x_2969_, 0, v___x_2961_);
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v___x_2961_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
else
{
return v___x_2967_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__0___boxed(lean_object* v___x_2976_, lean_object* v_rendered_2977_, lean_object* v___x_2978_, lean_object* v___x_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_Lean_Doc_Parser_document_formatter___lam__0(v___x_2976_, v_rendered_2977_, v___x_2978_, v___x_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec_ref(v_rendered_2977_);
lean_dec(v___x_2976_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1(lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v___x_2991_; lean_object* v_a_2992_; lean_object* v_blocks_2993_; lean_object* v_rendered_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___f_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2991_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Doc_Parser_document_formatter_spec__0___redArg(v___y_2987_);
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref(v___x_2991_);
v_blocks_2993_ = l_Lean_TSyntax_getVersoBlocks(v_a_2992_);
lean_dec(v_a_2992_);
v_rendered_2994_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_versoBlocksToString(v_blocks_2993_);
v___x_2995_ = lean_unsigned_to_nat(0u);
v___x_2996_ = lean_array_get_size(v_blocks_2993_);
lean_dec_ref(v_blocks_2993_);
v___x_2997_ = lean_box(0);
v___f_2998_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document_formatter___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2998_, 0, v___x_2996_);
lean_closure_set(v___f_2998_, 1, v_rendered_2994_);
lean_closure_set(v___f_2998_, 2, v___x_2995_);
lean_closure_set(v___f_2998_, 3, v___x_2997_);
v___x_2999_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_visitArgs___boxed), 6, 1);
lean_closure_set(v___x_2999_, 0, v___f_2998_);
v___x_3000_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___x_2999_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
return v___x_3000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___lam__1___boxed(lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l_Lean_Doc_Parser_document_formatter___lam__1(v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter(lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_){
_start:
{
lean_object* v___f_3013_; lean_object* v___x_3014_; 
v___f_3013_ = ((lean_object*)(l_Lean_Doc_Parser_document_formatter___closed__0));
v___x_3014_ = l_Lean_PrettyPrinter_Formatter_concat(v___f_3013_, v_a_3008_, v_a_3009_, v_a_3010_, v_a_3011_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document_formatter___boxed(lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Lean_Doc_Parser_document_formatter(v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
lean_dec(v_a_3018_);
lean_dec_ref(v_a_3017_);
lean_dec(v_a_3016_);
lean_dec_ref(v_a_3015_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2(lean_object* v_upperBound_3021_, lean_object* v___x_3022_, lean_object* v_rendered_3023_, lean_object* v_inst_3024_, lean_object* v_R_3025_, lean_object* v_a_3026_, lean_object* v_b_3027_, lean_object* v_c_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v___x_3034_; 
v___x_3034_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___redArg(v_upperBound_3021_, v___x_3022_, v_rendered_3023_, v_a_3026_, v_b_3027_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2___boxed(lean_object* v_upperBound_3035_, lean_object* v___x_3036_, lean_object* v_rendered_3037_, lean_object* v_inst_3038_, lean_object* v_R_3039_, lean_object* v_a_3040_, lean_object* v_b_3041_, lean_object* v_c_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_Parser_document_formatter_spec__2(v_upperBound_3035_, v___x_3036_, v_rendered_3037_, v_inst_3038_, v_R_3039_, v_a_3040_, v_b_3041_, v_c_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec_ref(v_rendered_3037_);
lean_dec(v___x_3036_);
lean_dec(v_upperBound_3035_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1(){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3066_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_3067_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__4));
v___x_3068_ = ((lean_object*)(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___closed__6));
v___x_3069_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document_formatter___boxed), 5, 0);
v___x_3070_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3066_, v___x_3067_, v___x_3068_, v___x_3069_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1___boxed(lean_object* v_a_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1();
return v_res_3072_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_View(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Formatter(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_View(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0___boxed__const__1 = _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__0___boxed__const__1);
l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1___boxed__const__1 = _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar_targetCloser___closed__1___boxed__const__1);
l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0___boxed__const__1 = _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__0___boxed__const__1);
l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1___boxed__const__1 = _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__1___boxed__const__1);
l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2___boxed__const__1 = _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_closerChar___closed__2___boxed__const__1);
l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0___boxed__const__1 = _init_l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_openerChar___closed__0___boxed__const__1);
res = l___private_Lean_DocString_Formatter_0__Lean_Doc_Parser_document_formatter___regBuiltin_Lean_Doc_Parser_document_formatter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_GetElemTactic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Formatter(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Range_Polymorphic_GetElemTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_DocString_Syntax(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_GetElemTactic(uint8_t builtin);
lean_object* initialize_Lean_DocString_View(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Formatter(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_GetElemTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_View(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Formatter(builtin);
}
#ifdef __cplusplus
}
#endif
