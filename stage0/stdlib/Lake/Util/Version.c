// Lean compiler output
// Module: Lake.Util.Version
// Imports: public import Lean.Data.Json public import Lake.Util.Date public import Init.Control.Do import Init.Data.String.TakeDrop import Lean.Data.Trie import Init.Data.String.Search import Init.Omega import Init.Data.String.Length
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Lean_Data_Trie_empty___redArg();
lean_object* l_Lean_Data_Trie_insert___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_matchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
lean_object* l_Lake_Date_toString(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Date_ofString_x3f(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lake_instReprDate_repr___redArg(lean_object*);
uint8_t l_Lake_instDecidableEqDate_decEq(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t l_String_decLE(lean_object*, lean_object*);
uint8_t l_Lake_instOrdDate_ord(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Util_Version_0__Lake_isWildVer(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_isWildVer___boxed(lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "invalid "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = " version: expected numeral or wildcard, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "invalid version: '-' suffix cannot be empty"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "unexpected characters at end of version: "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_instInhabitedSemVerCore_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedSemVerCore_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedSemVerCore_default = (const lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedSemVerCore = (const lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprSemVerCore_repr_spec__0(lean_object*);
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__0_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "major"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__2_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__3_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__4 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__4_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__3_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprSemVerCore_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__9_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "minor"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__10 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__10_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__11 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__11_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "patch"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__12 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__12_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__13 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__13_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__14 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lake_instReprSemVerCore_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__15;
static lean_once_cell_t l_Lake_instReprSemVerCore_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__16;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__17 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__14_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__18 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprSemVerCore_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprSemVerCore___closed__0 = (const lean_object*)&l_Lake_instReprSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprSemVerCore = (const lean_object*)&l_Lake_instReprSemVerCore___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdSemVerCore_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instOrdSemVerCore_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdSemVerCore_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdSemVerCore___closed__0 = (const lean_object*)&l_Lake_instOrdSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdSemVerCore = (const lean_object*)&l_Lake_instOrdSemVerCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instLT;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instLE;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instMin___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instMin = (const lean_object*)&l_Lake_SemVerCore_instMin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instMax___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instMax = (const lean_object*)&l_Lake_SemVerCore_instMax___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid version core: "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", expected 3"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid patch version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid minor version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid major version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SemVerCore_parse(lean_object*);
static const lean_string_object l_Lake_SemVerCore_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_SemVerCore_toString___closed__0 = (const lean_object*)&l_Lake_SemVerCore_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_toString(lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instToString___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instToString = (const lean_object*)&l_Lake_SemVerCore_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instToJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instToJson___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instToJson = (const lean_object*)&l_Lake_SemVerCore_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instFromJson___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instFromJson = (const lean_object*)&l_Lake_SemVerCore_instFromJson___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedStdVer_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value),((lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value)}};
static const lean_object* l_Lake_instInhabitedStdVer_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedStdVer_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedStdVer_default = (const lean_object*)&l_Lake_instInhabitedStdVer_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedStdVer = (const lean_object*)&l_Lake_instInhabitedStdVer_default___closed__0_value;
static const lean_string_object l_Lake_instReprStdVer_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toSemVerCore"};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprStdVer_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprStdVer_repr___redArg___closed__4;
static const lean_string_object l_Lake_instReprStdVer_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "specialDescr"};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprStdVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprStdVer_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprStdVer___closed__0 = (const lean_object*)&l_Lake_instReprStdVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprStdVer = (const lean_object*)&l_Lake_instReprStdVer___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_StdVer_instCoeSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instCoeSemVerCore___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instCoeSemVerCore___closed__0 = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instCoeSemVerCore = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_ofSemVerCore(lean_object*);
static const lean_closure_object l_Lake_StdVer_instCoeSemVerCore__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_ofSemVerCore, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instCoeSemVerCore__1___closed__0 = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instCoeSemVerCore__1 = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore__1___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_StdVer_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_compare___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_StdVer_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instOrd___closed__0 = (const lean_object*)&l_Lake_StdVer_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instOrd = (const lean_object*)&l_Lake_StdVer_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instLT;
LEAN_EXPORT lean_object* l_Lake_StdVer_instLE;
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_StdVer_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instMin___closed__0 = (const lean_object*)&l_Lake_StdVer_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instMin = (const lean_object*)&l_Lake_StdVer_instMin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_StdVer_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instMax___closed__0 = (const lean_object*)&l_Lake_StdVer_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instMax = (const lean_object*)&l_Lake_StdVer_instMax___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_parse(lean_object*);
static const lean_string_object l_Lake_StdVer_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lake_StdVer_toString___closed__0 = (const lean_object*)&l_Lake_StdVer_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_toString(lean_object*);
static const lean_closure_object l_Lake_StdVer_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instToString___closed__0 = (const lean_object*)&l_Lake_StdVer_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instToString = (const lean_object*)&l_Lake_StdVer_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instToJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_StdVer_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instToJson___closed__0 = (const lean_object*)&l_Lake_StdVer_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instToJson = (const lean_object*)&l_Lake_StdVer_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_StdVer_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instFromJson___closed__0 = (const lean_object*)&l_Lake_StdVer_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instFromJson = (const lean_object*)&l_Lake_StdVer_instFromJson___closed__0_value;
static const lean_string_object l_Lake_toolchainFileName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lean-toolchain"};
static const lean_object* l_Lake_toolchainFileName___closed__0 = (const lean_object*)&l_Lake_toolchainFileName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_toolchainFileName = (const lean_object*)&l_Lake_toolchainFileName___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_defaultOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "leanprover/lean4"};
static const lean_object* l_Lake_ToolchainVer_defaultOrigin___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_defaultOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_defaultOrigin = (const lean_object*)&l_Lake_ToolchainVer_defaultOrigin___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_prOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "leanprover/lean4-pr-releases"};
static const lean_object* l_Lake_ToolchainVer_prOrigin___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_prOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_prOrigin = (const lean_object*)&l_Lake_ToolchainVer_prOrigin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ToolchainVer_release___override___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "leanprover/lean4:v"};
static const lean_object* l_Lake_ToolchainVer_release___override___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_release___override___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release___override(lean_object*);
static const lean_string_object l_Lake_ToolchainVer_nightly___override___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "leanprover/lean4:nightly-"};
static const lean_object* l_Lake_ToolchainVer_nightly___override___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_nightly___override___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_nightly___override___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-rev"};
static const lean_object* l_Lake_ToolchainVer_nightly___override___closed__1 = (const lean_object*)&l_Lake_ToolchainVer_nightly___override___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly___override(lean_object*, lean_object*);
static const lean_string_object l_Lake_ToolchainVer_pr___override___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "leanprover/lean4-pr-releases:pr-release-"};
static const lean_object* l_Lake_ToolchainVer_pr___override___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_pr___override___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr___override(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other___override(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override___boxed(lean_object*);
static const lean_string_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lake.ToolchainVer.release"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__0 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__1 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__1_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__2 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__2_value;
static lean_once_cell_t l_Lake_instReprToolchainVer_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprToolchainVer_repr___closed__3;
static lean_once_cell_t l_Lake_instReprToolchainVer_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprToolchainVer_repr___closed__4;
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lake.ToolchainVer.nightly"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__5 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__5_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__5_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__6 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__7 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__7_value;
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ToolchainVer.pr"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__8 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__9 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__9_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__10 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__10_value;
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lake.ToolchainVer.other"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__11 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__11_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__11_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__12 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__12_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__13 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__13_value;
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprToolchainVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprToolchainVer_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprToolchainVer___closed__0 = (const lean_object*)&l_Lake_instReprToolchainVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprToolchainVer = (const lean_object*)&l_Lake_instReprToolchainVer___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instCoeLeanVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_release___override, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instCoeLeanVer___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instCoeLeanVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instCoeLeanVer = (const lean_object*)&l_Lake_ToolchainVer_instCoeLeanVer___closed__0_value;
static const lean_string_object l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "nightly-"};
static const lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pr-release-"};
static const lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ToolchainVer_ofString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "-nightly"};
static const lean_object* l_Lake_ToolchainVer_ofString___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_ofString___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_ofString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "v"};
static const lean_object* l_Lake_ToolchainVer_ofString___closed__1 = (const lean_object*)&l_Lake_ToolchainVer_ofString___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofString(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_toString___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instToString___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instToString = (const lean_object*)&l_Lake_ToolchainVer_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_instToJson___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instToJson___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instToJson = (const lean_object*)&l_Lake_ToolchainVer_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instFromJson___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instFromJson = (const lean_object*)&l_Lake_ToolchainVer_instFromJson___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_blt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instLT;
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ble___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instLE;
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_normalizeToolchain(lean_object*);
static const lean_closure_object l_Lake_instDecodeVersionSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instDecodeVersionSemVerCore___closed__0 = (const lean_object*)&l_Lake_instDecodeVersionSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instDecodeVersionSemVerCore = (const lean_object*)&l_Lake_instDecodeVersionSemVerCore___closed__0_value;
static const lean_closure_object l_Lake_instDecodeVersionStdVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instDecodeVersionStdVer___closed__0 = (const lean_object*)&l_Lake_instDecodeVersionStdVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instDecodeVersionStdVer = (const lean_object*)&l_Lake_instDecodeVersionStdVer___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instDecodeVersionToolchainVer___lam__0(lean_object*);
static const lean_closure_object l_Lake_instDecodeVersionToolchainVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instDecodeVersionToolchainVer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instDecodeVersionToolchainVer___closed__0 = (const lean_object*)&l_Lake_instDecodeVersionToolchainVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instDecodeVersionToolchainVer = (const lean_object*)&l_Lake_instDecodeVersionToolchainVer___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.lt"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__0 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__1 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__1_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.le"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__2 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__3 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__3_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.gt"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__4 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__5 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__5_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.ge"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__6 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__6_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__7 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__7_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.eq"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__8 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__9 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__9_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.ne"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__10 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__10_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__10_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__11 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprComparatorOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprComparatorOp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprComparatorOp___closed__0 = (const lean_object*)&l_Lake_instReprComparatorOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprComparatorOp = (const lean_object*)&l_Lake_instReprComparatorOp___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instInhabitedComparatorOp_default;
LEAN_EXPORT uint8_t l_Lake_instInhabitedComparatorOp;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≠"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≥"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≤"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8_value;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "(internal) comparison operator parse produced invalid position"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected comparison operator"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_ComparatorOp_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ComparatorOp_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ComparatorOp_instToString___closed__0 = (const lean_object*)&l_Lake_ComparatorOp_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ComparatorOp_instToString = (const lean_object*)&l_Lake_ComparatorOp_instToString___closed__0_value;
static const lean_string_object l_Lake_instReprVerComparator_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ver"};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprVerComparator_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__4;
static const lean_string_object l_Lake_instReprVerComparator_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "op"};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprVerComparator_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprVerComparator_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "includeSuffixes"};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lake_instReprVerComparator_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprVerComparator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprVerComparator_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprVerComparator___closed__0 = (const lean_object*)&l_Lake_instReprVerComparator___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprVerComparator = (const lean_object*)&l_Lake_instReprVerComparator___closed__0_value;
static const lean_ctor_object l_Lake_VerComparator_wild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value),((lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value)}};
static const lean_object* l_Lake_VerComparator_wild___closed__0 = (const lean_object*)&l_Lake_VerComparator_wild___closed__0_value;
static const lean_ctor_object l_Lake_VerComparator_wild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_VerComparator_wild___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_VerComparator_wild___closed__1 = (const lean_object*)&l_Lake_VerComparator_wild___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_VerComparator_wild = (const lean_object*)&l_Lake_VerComparator_wild___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_VerComparator_instInhabited = (const lean_object*)&l_Lake_VerComparator_wild___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "invalid comparison: expected version after `"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerComparator_parse(lean_object*);
LEAN_EXPORT uint8_t l_Lake_VerComparator_test(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerComparator_test___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerComparator_toString(lean_object*);
static const lean_closure_object l_Lake_VerComparator_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_VerComparator_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_VerComparator_instToString___closed__0 = (const lean_object*)&l_Lake_VerComparator_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_VerComparator_instToString = (const lean_object*)&l_Lake_VerComparator_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprVerRange_repr_spec__0(lean_object*);
static const lean_string_object l_Lake_instReprVerRange_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprVerRange_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerRange_repr___redArg___closed__4;
static const lean_string_object l_Lake_instReprVerRange_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clauses"};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprVerRange_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerRange_repr___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprVerRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprVerRange_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprVerRange___closed__0 = (const lean_object*)&l_Lake_instReprVerRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprVerRange = (const lean_object*)&l_Lake_instReprVerRange___closed__0_value;
static const lean_array_object l_Lake_instInhabitedVerRange_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedVerRange_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedVerRange_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value),((lean_object*)&l_Lake_instInhabitedVerRange_default___closed__0_value)}};
static const lean_object* l_Lake_instInhabitedVerRange_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedVerRange_default = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedVerRange = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_VerRange_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_VerRange_instToString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_VerRange_instToString___closed__0 = (const lean_object*)&l_Lake_VerRange_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_VerRange_instToString = (const lean_object*)&l_Lake_VerRange_instToString___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<empty>"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " || "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_ofClauses(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_appendRange(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "invalid tilde range: incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ", expected 1-3"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "invalid caret range: incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "invalid caret range: `^0.0.0` is degenerate; use `=0.0.0` instead"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "invalid patch version: components after a wildcard must be wildcards"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 183, .m_capacity = 183, .m_length = 180, .m_data = "invalid version range: bare versions are not supported; if you want to pin a specific version, use '=' before the full version; otherwise, use '≥' to support it and future versions"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "invalid minor version: components after a wildcard must be wildcards"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "invalid wildcard range: incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "invalid wildcard range: wildcard versions do not support suffixes"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "expected version range"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected '|' after first '|'"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1_value;
static const lean_array_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid tilde range: expected version after `~`"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid caret range: expected version after `^`"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_parse(lean_object*);
static const lean_closure_object l_Lake_VerRange_instDecodeVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_VerRange_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_VerRange_instDecodeVersion___closed__0 = (const lean_object*)&l_Lake_VerRange_instDecodeVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_VerRange_instDecodeVersion = (const lean_object*)&l_Lake_VerRange_instDecodeVersion___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_VerRange_test(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_test___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(lean_object* v_s_1_, lean_object* v_cs_2_, lean_object* v_iniPos_3_, lean_object* v_p_4_){
_start:
{
lean_object* v___x_8_; uint8_t v_decide_9_; 
v___x_8_ = lean_string_utf8_byte_size(v_s_1_);
v_decide_9_ = lean_nat_dec_eq(v_p_4_, v___x_8_);
if (v_decide_9_ == 0)
{
uint32_t v_c_10_; uint32_t v___x_27_; uint8_t v___x_28_; 
v_c_10_ = lean_string_utf8_get_fast(v_s_1_, v_p_4_);
v___x_27_ = 46;
v___x_28_ = lean_uint32_dec_eq(v_c_10_, v___x_27_);
if (v___x_28_ == 0)
{
uint32_t v___x_29_; uint8_t v___x_30_; 
v___x_29_ = 65;
v___x_30_ = lean_uint32_dec_le(v___x_29_, v_c_10_);
if (v___x_30_ == 0)
{
goto v___jp_22_;
}
else
{
uint32_t v___x_31_; uint8_t v___x_32_; 
v___x_31_ = 90;
v___x_32_ = lean_uint32_dec_le(v_c_10_, v___x_31_);
if (v___x_32_ == 0)
{
goto v___jp_22_;
}
else
{
goto v___jp_5_;
}
}
}
else
{
lean_object* v_c_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
lean_inc(v_p_4_);
lean_inc_ref(v_s_1_);
v_c_33_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_c_33_, 0, v_s_1_);
lean_ctor_set(v_c_33_, 1, v_iniPos_3_);
lean_ctor_set(v_c_33_, 2, v_p_4_);
v___x_34_ = lean_array_push(v_cs_2_, v_c_33_);
v___x_35_ = lean_string_utf8_next_fast(v_s_1_, v_p_4_);
lean_dec(v_p_4_);
v_cs_2_ = v___x_34_;
v_iniPos_3_ = v___x_35_;
v_p_4_ = v___x_35_;
goto _start;
}
v___jp_11_:
{
uint32_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 42;
v___x_13_ = lean_uint32_dec_eq(v_c_10_, v___x_12_);
if (v___x_13_ == 0)
{
lean_object* v_c_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
lean_inc(v_p_4_);
v_c_14_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_c_14_, 0, v_s_1_);
lean_ctor_set(v_c_14_, 1, v_iniPos_3_);
lean_ctor_set(v_c_14_, 2, v_p_4_);
v___x_15_ = lean_array_push(v_cs_2_, v_c_14_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v_p_4_);
return v___x_16_;
}
else
{
goto v___jp_5_;
}
}
v___jp_17_:
{
uint32_t v___x_18_; uint8_t v___x_19_; 
v___x_18_ = 48;
v___x_19_ = lean_uint32_dec_le(v___x_18_, v_c_10_);
if (v___x_19_ == 0)
{
goto v___jp_11_;
}
else
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 57;
v___x_21_ = lean_uint32_dec_le(v_c_10_, v___x_20_);
if (v___x_21_ == 0)
{
goto v___jp_11_;
}
else
{
goto v___jp_5_;
}
}
}
v___jp_22_:
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 97;
v___x_24_ = lean_uint32_dec_le(v___x_23_, v_c_10_);
if (v___x_24_ == 0)
{
goto v___jp_17_;
}
else
{
uint32_t v___x_25_; uint8_t v___x_26_; 
v___x_25_ = 122;
v___x_26_ = lean_uint32_dec_le(v_c_10_, v___x_25_);
if (v___x_26_ == 0)
{
goto v___jp_17_;
}
else
{
goto v___jp_5_;
}
}
}
}
else
{
lean_object* v_c_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
lean_inc(v_p_4_);
v_c_37_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_c_37_, 0, v_s_1_);
lean_ctor_set(v_c_37_, 1, v_iniPos_3_);
lean_ctor_set(v_c_37_, 2, v_p_4_);
v___x_38_ = lean_array_push(v_cs_2_, v_c_37_);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v_p_4_);
return v___x_39_;
}
v___jp_5_:
{
lean_object* v___x_6_; 
v___x_6_ = lean_string_utf8_next_fast(v_s_1_, v_p_4_);
lean_dec(v_p_4_);
v_p_4_ = v___x_6_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go(lean_object* v_s_40_, lean_object* v_cs_41_, lean_object* v_iniPos_42_, lean_object* v_p_43_, lean_object* v_iniPos__le_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_40_, v_cs_41_, v_iniPos_42_, v_p_43_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents(lean_object* v_s_48_, lean_object* v_p_49_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_p_49_);
v___x_51_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_48_, v___x_50_, v_p_49_, v_p_49_);
return v___x_51_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Util_Version_0__Lake_isWildVer(lean_object* v_s_52_){
_start:
{
lean_object* v_str_53_; lean_object* v_startInclusive_54_; lean_object* v_endExclusive_55_; lean_object* v_p_56_; lean_object* v___x_57_; uint8_t v_decide_58_; 
v_str_53_ = lean_ctor_get(v_s_52_, 0);
v_startInclusive_54_ = lean_ctor_get(v_s_52_, 1);
v_endExclusive_55_ = lean_ctor_get(v_s_52_, 2);
v_p_56_ = lean_unsigned_to_nat(0u);
v___x_57_ = lean_nat_sub(v_endExclusive_55_, v_startInclusive_54_);
v_decide_58_ = lean_nat_dec_eq(v_p_56_, v___x_57_);
if (v_decide_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v_decide_61_; 
v___x_59_ = lean_string_utf8_next_fast(v_str_53_, v_startInclusive_54_);
v___x_60_ = lean_nat_sub(v___x_59_, v_startInclusive_54_);
v_decide_61_ = lean_nat_dec_eq(v___x_60_, v___x_57_);
lean_dec(v___x_57_);
lean_dec(v___x_60_);
if (v_decide_61_ == 0)
{
return v_decide_61_;
}
else
{
uint32_t v_c_62_; uint32_t v___x_63_; uint8_t v___x_64_; 
v_c_62_ = lean_string_utf8_get_fast(v_str_53_, v_startInclusive_54_);
v___x_63_ = 120;
v___x_64_ = lean_uint32_dec_eq(v_c_62_, v___x_63_);
if (v___x_64_ == 0)
{
uint32_t v___x_65_; uint8_t v___x_66_; 
v___x_65_ = 88;
v___x_66_ = lean_uint32_dec_eq(v_c_62_, v___x_65_);
if (v___x_66_ == 0)
{
uint32_t v___x_67_; uint8_t v___x_68_; 
v___x_67_ = 42;
v___x_68_ = lean_uint32_dec_eq(v_c_62_, v___x_67_);
return v___x_68_;
}
else
{
return v_decide_61_;
}
}
else
{
return v_decide_61_;
}
}
}
else
{
uint8_t v___x_69_; 
lean_dec(v___x_57_);
v___x_69_ = 0;
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_isWildVer___boxed(lean_object* v_s_70_){
_start:
{
uint8_t v_res_71_; lean_object* v_r_72_; 
v_res_71_ = l___private_Lake_Util_Version_0__Lake_isWildVer(v_s_70_);
lean_dec_ref(v_s_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg(lean_object* v_what_76_, lean_object* v_s_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_String_Slice_toNat_x3f(v_s_77_);
if (lean_obj_tag(v___x_79_) == 1)
{
lean_object* v_val_80_; lean_object* v___x_81_; 
v_val_80_ = lean_ctor_get(v___x_79_, 0);
lean_inc(v_val_80_);
lean_dec_ref_known(v___x_79_, 1);
v___x_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_81_, 0, v_val_80_);
lean_ctor_set(v___x_81_, 1, v_a_78_);
return v___x_81_;
}
else
{
lean_object* v_str_82_; lean_object* v_startInclusive_83_; lean_object* v_endExclusive_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v___x_79_);
v_str_82_ = lean_ctor_get(v_s_77_, 0);
v_startInclusive_83_ = lean_ctor_get(v_s_77_, 1);
v_endExclusive_84_ = lean_ctor_get(v_s_77_, 2);
v___x_85_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0));
v___x_86_ = lean_string_append(v___x_85_, v_what_76_);
v___x_87_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1));
v___x_88_ = lean_string_append(v___x_86_, v___x_87_);
v___x_89_ = lean_string_utf8_extract_fast(v_str_82_, v_startInclusive_83_, v_endExclusive_84_);
v___x_90_ = lean_string_append(v___x_88_, v___x_89_);
lean_dec_ref(v___x_89_);
v___x_91_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_92_ = lean_string_append(v___x_90_, v___x_91_);
v___x_93_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v_a_78_);
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___boxed(lean_object* v_what_94_, lean_object* v_s_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg(v_what_94_, v_s_95_, v_a_96_);
lean_dec_ref(v_s_95_);
lean_dec_ref(v_what_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat(lean_object* v_00_u03c3_98_, lean_object* v_what_99_, lean_object* v_s_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_String_Slice_toNat_x3f(v_s_100_);
if (lean_obj_tag(v___x_102_) == 1)
{
lean_object* v_val_103_; lean_object* v___x_104_; 
v_val_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_val_103_);
lean_dec_ref_known(v___x_102_, 1);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v_val_103_);
lean_ctor_set(v___x_104_, 1, v_a_101_);
return v___x_104_;
}
else
{
lean_object* v_str_105_; lean_object* v_startInclusive_106_; lean_object* v_endExclusive_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
lean_dec(v___x_102_);
v_str_105_ = lean_ctor_get(v_s_100_, 0);
v_startInclusive_106_ = lean_ctor_get(v_s_100_, 1);
v_endExclusive_107_ = lean_ctor_get(v_s_100_, 2);
v___x_108_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0));
v___x_109_ = lean_string_append(v___x_108_, v_what_99_);
v___x_110_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1));
v___x_111_ = lean_string_append(v___x_109_, v___x_110_);
v___x_112_ = lean_string_utf8_extract_fast(v_str_105_, v_startInclusive_106_, v_endExclusive_107_);
v___x_113_ = lean_string_append(v___x_111_, v___x_112_);
lean_dec_ref(v___x_112_);
v___x_114_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
v___x_116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v_a_101_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___boxed(lean_object* v_00_u03c3_117_, lean_object* v_what_118_, lean_object* v_s_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lake_Util_Version_0__Lake_parseVerNat(v_00_u03c3_117_, v_what_118_, v_s_119_, v_a_120_);
lean_dec_ref(v_s_119_);
lean_dec_ref(v_what_118_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___impl(lean_object* v_x_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_tag_nat(v_x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___impl___boxed(lean_object* v_x_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___impl(v_x_124_);
lean_dec(v_x_124_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(lean_object* v_t_126_, lean_object* v_k_127_){
_start:
{
if (lean_obj_tag(v_t_126_) == 2)
{
lean_object* v_n_128_; lean_object* v___x_129_; 
v_n_128_ = lean_ctor_get(v_t_126_, 0);
lean_inc(v_n_128_);
lean_dec_ref_known(v_t_126_, 1);
v___x_129_ = lean_apply_1(v_k_127_, v_n_128_);
return v___x_129_;
}
else
{
lean_dec(v_t_126_);
return v_k_127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim(lean_object* v_motive_130_, lean_object* v_ctorIdx_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_k_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_132_, v_k_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___boxed(lean_object* v_motive_136_, lean_object* v_ctorIdx_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_k_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim(v_motive_136_, v_ctorIdx_137_, v_t_138_, v_h_139_, v_k_140_);
lean_dec(v_ctorIdx_137_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim___redArg(lean_object* v_t_142_, lean_object* v_none_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_142_, v_none_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim(lean_object* v_motive_145_, lean_object* v_t_146_, lean_object* v_h_147_, lean_object* v_none_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_146_, v_none_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim___redArg(lean_object* v_t_150_, lean_object* v_wild_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_150_, v_wild_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim(lean_object* v_motive_153_, lean_object* v_t_154_, lean_object* v_h_155_, lean_object* v_wild_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_154_, v_wild_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim___redArg(lean_object* v_t_158_, lean_object* v_nat_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_158_, v_nat_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim(lean_object* v_motive_161_, lean_object* v_t_162_, lean_object* v_h_163_, lean_object* v_nat_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_162_, v_nat_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(lean_object* v_what_167_, lean_object* v_s_x3f_168_, lean_object* v_a_169_){
_start:
{
if (lean_obj_tag(v_s_x3f_168_) == 1)
{
lean_object* v_val_170_; uint8_t v___x_171_; 
v_val_170_ = lean_ctor_get(v_s_x3f_168_, 0);
v___x_171_ = l___private_Lake_Util_Version_0__Lake_isWildVer(v_val_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = l_String_Slice_toNat_x3f(v_val_170_);
if (lean_obj_tag(v___x_172_) == 1)
{
lean_object* v_val_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_181_; 
v_val_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_181_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_181_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_val_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_181_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
lean_ctor_set_tag(v___x_175_, 2);
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_val_173_);
v___x_178_ = v_reuseFailAlloc_180_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_179_; 
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v_a_169_);
return v___x_179_;
}
}
}
else
{
lean_object* v_str_182_; lean_object* v_startInclusive_183_; lean_object* v_endExclusive_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec(v___x_172_);
v_str_182_ = lean_ctor_get(v_val_170_, 0);
v_startInclusive_183_ = lean_ctor_get(v_val_170_, 1);
v_endExclusive_184_ = lean_ctor_get(v_val_170_, 2);
v___x_185_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0));
v___x_186_ = lean_string_append(v___x_185_, v_what_167_);
v___x_187_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0));
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
v___x_189_ = lean_string_utf8_extract_fast(v_str_182_, v_startInclusive_183_, v_endExclusive_184_);
v___x_190_ = lean_string_append(v___x_188_, v___x_189_);
lean_dec_ref(v___x_189_);
v___x_191_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
v___x_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v_a_169_);
return v___x_193_;
}
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_box(1);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v_a_169_);
return v___x_195_;
}
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_box(0);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
lean_ctor_set(v___x_197_, 1, v_a_169_);
return v___x_197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___boxed(lean_object* v_what_198_, lean_object* v_s_x3f_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v_what_198_, v_s_x3f_199_, v_a_200_);
lean_dec(v_s_x3f_199_);
lean_dec_ref(v_what_198_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent(lean_object* v_00_u03c3_202_, lean_object* v_what_203_, lean_object* v_s_x3f_204_, lean_object* v_a_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v_what_203_, v_s_x3f_204_, v_a_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___boxed(lean_object* v_00_u03c3_207_, lean_object* v_what_208_, lean_object* v_s_x3f_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent(v_00_u03c3_207_, v_what_208_, v_s_x3f_209_, v_a_210_);
lean_dec(v_s_x3f_209_);
lean_dec_ref(v_what_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(lean_object* v_s_212_, lean_object* v_p_213_){
_start:
{
lean_object* v___x_214_; uint8_t v_decide_215_; 
v___x_214_ = lean_string_utf8_byte_size(v_s_212_);
v_decide_215_ = lean_nat_dec_eq(v_p_213_, v___x_214_);
if (v_decide_215_ == 0)
{
uint32_t v___x_216_; uint32_t v___x_217_; uint8_t v___x_218_; 
v___x_216_ = lean_string_utf8_get_fast(v_s_212_, v_p_213_);
v___x_217_ = 32;
v___x_218_ = lean_uint32_dec_eq(v___x_216_, v___x_217_);
if (v___x_218_ == 0)
{
uint32_t v___x_219_; uint8_t v___x_220_; 
v___x_219_ = 9;
v___x_220_ = lean_uint32_dec_eq(v___x_216_, v___x_219_);
if (v___x_220_ == 0)
{
uint32_t v___x_221_; uint8_t v___x_222_; 
v___x_221_ = 13;
v___x_222_ = lean_uint32_dec_eq(v___x_216_, v___x_221_);
if (v___x_222_ == 0)
{
uint32_t v___x_223_; uint8_t v___x_224_; 
v___x_223_ = 10;
v___x_224_ = lean_uint32_dec_eq(v___x_216_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; 
v___x_225_ = lean_string_utf8_next_fast(v_s_212_, v_p_213_);
lean_dec(v_p_213_);
v_p_213_ = v___x_225_;
goto _start;
}
else
{
return v_p_213_;
}
}
else
{
return v_p_213_;
}
}
else
{
return v_p_213_;
}
}
else
{
return v_p_213_;
}
}
else
{
return v_p_213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace___boxed(lean_object* v_s_227_, lean_object* v_p_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(v_s_227_, v_p_228_);
lean_dec_ref(v_s_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(lean_object* v_s_230_, lean_object* v_a_231_){
_start:
{
lean_object* v___x_232_; uint8_t v_decide_233_; 
v___x_232_ = lean_string_utf8_byte_size(v_s_230_);
v_decide_233_ = lean_nat_dec_eq(v_a_231_, v___x_232_);
if (v_decide_233_ == 0)
{
uint32_t v___x_234_; uint32_t v___x_235_; uint8_t v___x_236_; 
v___x_234_ = lean_string_utf8_get_fast(v_s_230_, v_a_231_);
v___x_235_ = 45;
v___x_236_ = lean_uint32_dec_eq(v___x_234_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_box(0);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_a_231_);
return v___x_238_;
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_239_ = lean_string_utf8_next_fast(v_s_230_, v_a_231_);
lean_dec(v_a_231_);
v___x_240_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(v_s_230_, v___x_239_);
v___x_241_ = lean_string_utf8_extract_fast(v_s_230_, v___x_239_, v___x_240_);
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v___x_240_);
return v___x_243_;
}
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_box(0);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v_a_231_);
return v___x_245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f___boxed(lean_object* v_s_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(v_s_246_, v_a_247_);
lean_dec_ref(v_s_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(lean_object* v_s_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_253_; lean_object* v_a_254_; 
v___x_253_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(v_s_251_, v_a_252_);
v_a_254_ = lean_ctor_get(v___x_253_, 0);
if (lean_obj_tag(v_a_254_) == 1)
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_270_; 
lean_inc_ref(v_a_254_);
v_a_255_ = lean_ctor_get(v___x_253_, 1);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; 
v_unused_271_ = lean_ctor_get(v___x_253_, 0);
lean_dec(v_unused_271_);
v___x_257_ = v___x_253_;
v_isShared_258_ = v_isSharedCheck_270_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_270_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v_val_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v_val_259_ = lean_ctor_get(v_a_254_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v_a_254_, 1);
v___x_260_ = lean_string_utf8_byte_size(v_val_259_);
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = lean_nat_dec_eq(v___x_260_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_264_; 
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v_val_259_);
v___x_264_ = v___x_257_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_val_259_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_a_255_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
else
{
lean_object* v___x_266_; lean_object* v___x_268_; 
lean_dec(v_val_259_);
v___x_266_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0));
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 1);
lean_ctor_set(v___x_257_, 0, v___x_266_);
v___x_268_ = v___x_257_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_a_255_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_280_; 
v_a_272_ = lean_ctor_get(v___x_253_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v___x_253_, 0);
lean_dec(v_unused_281_);
v___x_274_ = v___x_253_;
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_253_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_276_);
v___x_278_ = v___x_274_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_a_272_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___boxed(lean_object* v_s_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_282_, v_a_283_);
lean_dec_ref(v_s_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg(lean_object* v_s_286_, lean_object* v_x_287_, lean_object* v_startPos_288_, lean_object* v_endPos_289_){
_start:
{
lean_object* v___x_290_; 
lean_inc_ref(v_s_286_);
v___x_290_ = lean_apply_2(v_x_287_, v_s_286_, v_startPos_288_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v_a_292_; uint8_t v_decide_293_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
v_a_292_ = lean_ctor_get(v___x_290_, 1);
lean_inc(v_a_292_);
lean_dec_ref_known(v___x_290_, 2);
v_decide_293_ = lean_nat_dec_eq(v_a_292_, v_endPos_289_);
if (v_decide_293_ == 0)
{
lean_object* v_tail_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec(v_a_291_);
v_tail_294_ = lean_string_utf8_extract(v_s_286_, v_a_292_, v_endPos_289_);
lean_dec(v_a_292_);
lean_dec_ref(v_s_286_);
v___x_295_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_296_ = lean_string_append(v___x_295_, v_tail_294_);
lean_dec_ref(v_tail_294_);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
else
{
lean_object* v___x_298_; 
lean_dec(v_a_292_);
lean_dec_ref(v_s_286_);
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v_a_291_);
return v___x_298_;
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_300_; 
lean_dec_ref(v_s_286_);
v_a_299_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_299_);
lean_dec_ref_known(v___x_290_, 2);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v_a_299_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___boxed(lean_object* v_s_301_, lean_object* v_x_302_, lean_object* v_startPos_303_, lean_object* v_endPos_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lake_Util_Version_0__Lake_runVerParse___redArg(v_s_301_, v_x_302_, v_startPos_303_, v_endPos_304_);
lean_dec(v_endPos_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse(lean_object* v_00_u03b1_306_, lean_object* v_s_307_, lean_object* v_x_308_, lean_object* v_startPos_309_, lean_object* v_endPos_310_){
_start:
{
lean_object* v___x_311_; 
lean_inc_ref(v_s_307_);
v___x_311_ = lean_apply_2(v_x_308_, v_s_307_, v_startPos_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v_a_313_; uint8_t v_decide_314_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
v_a_313_ = lean_ctor_get(v___x_311_, 1);
lean_inc(v_a_313_);
lean_dec_ref_known(v___x_311_, 2);
v_decide_314_ = lean_nat_dec_eq(v_a_313_, v_endPos_310_);
if (v_decide_314_ == 0)
{
lean_object* v_tail_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
lean_dec(v_a_312_);
v_tail_315_ = lean_string_utf8_extract(v_s_307_, v_a_313_, v_endPos_310_);
lean_dec(v_a_313_);
lean_dec_ref(v_s_307_);
v___x_316_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_317_ = lean_string_append(v___x_316_, v_tail_315_);
lean_dec_ref(v_tail_315_);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
else
{
lean_object* v___x_319_; 
lean_dec(v_a_313_);
lean_dec_ref(v_s_307_);
v___x_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_319_, 0, v_a_312_);
return v___x_319_;
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_321_; 
lean_dec_ref(v_s_307_);
v_a_320_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_311_, 2);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v_a_320_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___boxed(lean_object* v_00_u03b1_322_, lean_object* v_s_323_, lean_object* v_x_324_, lean_object* v_startPos_325_, lean_object* v_endPos_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l___private_Lake_Util_Version_0__Lake_runVerParse(v_00_u03b1_322_, v_s_323_, v_x_324_, v_startPos_325_, v_endPos_326_);
lean_dec(v_endPos_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprSemVerCore_repr_spec__0(lean_object* v_a_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_nat_to_int(v_a_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lake_instReprSemVerCore_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(9u);
v___x_348_ = lean_nat_to_int(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_Lake_instReprSemVerCore_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__0));
v___x_360_ = lean_string_length(v___x_359_);
return v___x_360_;
}
}
static lean_object* _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__15, &l_Lake_instReprSemVerCore_repr___redArg___closed__15_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__15);
v___x_362_ = lean_nat_to_int(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___redArg(lean_object* v_x_367_){
_start:
{
lean_object* v_major_368_; lean_object* v_minor_369_; lean_object* v_patch_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_major_368_ = lean_ctor_get(v_x_367_, 0);
lean_inc(v_major_368_);
v_minor_369_ = lean_ctor_get(v_x_367_, 1);
lean_inc(v_minor_369_);
v_patch_370_ = lean_ctor_get(v_x_367_, 2);
lean_inc(v_patch_370_);
lean_dec_ref(v_x_367_);
v___x_371_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_372_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__6));
v___x_373_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__7, &l_Lake_instReprSemVerCore_repr___redArg___closed__7_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__7);
v___x_374_ = l_Nat_reprFast(v_major_368_);
v___x_375_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
v___x_376_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_373_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = 0;
v___x_378_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_378_, 0, v___x_376_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*1, v___x_377_);
v___x_379_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_372_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = lean_box(1);
v___x_383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__11));
v___x_385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_371_);
v___x_387_ = l_Nat_reprFast(v_minor_369_);
v___x_388_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
v___x_389_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_373_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_390_, 0, v___x_389_);
lean_ctor_set_uint8(v___x_390_, sizeof(void*)*1, v___x_377_);
v___x_391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_386_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_380_);
v___x_393_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___x_382_);
v___x_394_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__13));
v___x_395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_393_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v___x_371_);
v___x_397_ = l_Nat_reprFast(v_patch_370_);
v___x_398_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
v___x_399_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_373_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set_uint8(v___x_400_, sizeof(void*)*1, v___x_377_);
v___x_401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_396_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_403_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_404_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v___x_401_);
v___x_405_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_406_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_402_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set_uint8(v___x_408_, sizeof(void*)*1, v___x_377_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr(lean_object* v_x_409_, lean_object* v_prec_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lake_instReprSemVerCore_repr___redArg(v_x_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___boxed(lean_object* v_x_412_, lean_object* v_prec_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lake_instReprSemVerCore_repr(v_x_412_, v_prec_413_);
lean_dec(v_prec_413_);
return v_res_414_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore_decEq(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_major_419_; lean_object* v_minor_420_; lean_object* v_patch_421_; lean_object* v_major_422_; lean_object* v_minor_423_; lean_object* v_patch_424_; uint8_t v___x_425_; 
v_major_419_ = lean_ctor_get(v_x_417_, 0);
v_minor_420_ = lean_ctor_get(v_x_417_, 1);
v_patch_421_ = lean_ctor_get(v_x_417_, 2);
v_major_422_ = lean_ctor_get(v_x_418_, 0);
v_minor_423_ = lean_ctor_get(v_x_418_, 1);
v_patch_424_ = lean_ctor_get(v_x_418_, 2);
v___x_425_ = lean_nat_dec_eq(v_major_419_, v_major_422_);
if (v___x_425_ == 0)
{
return v___x_425_;
}
else
{
uint8_t v___x_426_; 
v___x_426_ = lean_nat_dec_eq(v_minor_420_, v_minor_423_);
if (v___x_426_ == 0)
{
return v___x_426_;
}
else
{
uint8_t v___x_427_; 
v___x_427_ = lean_nat_dec_eq(v_patch_421_, v_patch_424_);
return v___x_427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore_decEq___boxed(lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
uint8_t v_res_430_; lean_object* v_r_431_; 
v_res_430_ = l_Lake_instDecidableEqSemVerCore_decEq(v_x_428_, v_x_429_);
lean_dec_ref(v_x_429_);
lean_dec_ref(v_x_428_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore(lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
uint8_t v___x_434_; 
v___x_434_ = l_Lake_instDecidableEqSemVerCore_decEq(v_x_432_, v_x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore___boxed(lean_object* v_x_435_, lean_object* v_x_436_){
_start:
{
uint8_t v_res_437_; lean_object* v_r_438_; 
v_res_437_ = l_Lake_instDecidableEqSemVerCore(v_x_435_, v_x_436_);
lean_dec_ref(v_x_436_);
lean_dec_ref(v_x_435_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdSemVerCore_ord(lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_major_441_; lean_object* v_minor_442_; lean_object* v_patch_443_; lean_object* v_major_444_; lean_object* v_minor_445_; lean_object* v_patch_446_; uint8_t v___x_447_; 
v_major_441_ = lean_ctor_get(v_x_439_, 0);
v_minor_442_ = lean_ctor_get(v_x_439_, 1);
v_patch_443_ = lean_ctor_get(v_x_439_, 2);
v_major_444_ = lean_ctor_get(v_x_440_, 0);
v_minor_445_ = lean_ctor_get(v_x_440_, 1);
v_patch_446_ = lean_ctor_get(v_x_440_, 2);
v___x_447_ = lean_nat_dec_lt(v_major_441_, v_major_444_);
if (v___x_447_ == 0)
{
uint8_t v___x_448_; 
v___x_448_ = lean_nat_dec_eq(v_major_441_, v_major_444_);
if (v___x_448_ == 0)
{
uint8_t v___x_449_; 
v___x_449_ = 2;
return v___x_449_;
}
else
{
uint8_t v___x_450_; 
v___x_450_ = lean_nat_dec_lt(v_minor_442_, v_minor_445_);
if (v___x_450_ == 0)
{
uint8_t v___x_451_; 
v___x_451_ = lean_nat_dec_eq(v_minor_442_, v_minor_445_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = 2;
return v___x_452_;
}
else
{
uint8_t v___x_453_; 
v___x_453_ = lean_nat_dec_lt(v_patch_443_, v_patch_446_);
if (v___x_453_ == 0)
{
uint8_t v___x_454_; 
v___x_454_ = lean_nat_dec_eq(v_patch_443_, v_patch_446_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; 
v___x_455_ = 2;
return v___x_455_;
}
else
{
uint8_t v___x_456_; 
v___x_456_ = 1;
return v___x_456_;
}
}
else
{
uint8_t v___x_457_; 
v___x_457_ = 0;
return v___x_457_;
}
}
}
else
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
}
}
else
{
uint8_t v___x_459_; 
v___x_459_ = 0;
return v___x_459_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdSemVerCore_ord___boxed(lean_object* v_x_460_, lean_object* v_x_461_){
_start:
{
uint8_t v_res_462_; lean_object* v_r_463_; 
v_res_462_ = l_Lake_instOrdSemVerCore_ord(v_x_460_, v_x_461_);
lean_dec_ref(v_x_461_);
lean_dec_ref(v_x_460_);
v_r_463_ = lean_box(v_res_462_);
return v_r_463_;
}
}
static lean_object* _init_l_Lake_SemVerCore_instLT(void){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = lean_box(0);
return v___x_466_;
}
}
static lean_object* _init_l_Lake_SemVerCore_instLE(void){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = lean_box(0);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0(lean_object* v_x_468_, lean_object* v_y_469_){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = l_Lake_instOrdSemVerCore_ord(v_x_468_, v_y_469_);
if (v___x_470_ == 2)
{
lean_inc_ref(v_y_469_);
return v_y_469_;
}
else
{
lean_inc_ref(v_x_468_);
return v_x_468_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0___boxed(lean_object* v_x_471_, lean_object* v_y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lake_SemVerCore_instMin___lam__0(v_x_471_, v_y_472_);
lean_dec_ref(v_y_472_);
lean_dec_ref(v_x_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0(lean_object* v_x_476_, lean_object* v_y_477_){
_start:
{
uint8_t v___x_478_; 
v___x_478_ = l_Lake_instOrdSemVerCore_ord(v_x_476_, v_y_477_);
if (v___x_478_ == 2)
{
lean_inc_ref(v_x_476_);
return v_x_476_;
}
else
{
lean_inc_ref(v_y_477_);
return v_y_477_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0___boxed(lean_object* v_x_479_, lean_object* v_y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lake_SemVerCore_instMax___lam__0(v_x_479_, v_y_480_);
lean_dec_ref(v_y_480_);
lean_dec_ref(v_x_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(lean_object* v_s_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_a_493_; lean_object* v_a_494_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v_a_501_; lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_553_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_491_);
v___x_500_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_490_, v___x_499_, v_a_491_, v_a_491_);
v_a_501_ = lean_ctor_get(v___x_500_, 0);
v_a_502_ = lean_ctor_get(v___x_500_, 1);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_553_ == 0)
{
v___x_504_ = v___x_500_;
v_isShared_505_ = v_isSharedCheck_553_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_inc(v_a_501_);
lean_dec(v___x_500_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_553_;
goto v_resetjp_503_;
}
v___jp_492_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0));
v___x_496_ = lean_string_append(v___x_495_, v_a_493_);
lean_dec_ref(v_a_493_);
v___x_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v_a_494_);
return v___x_497_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_506_ = lean_array_get_size(v_a_501_);
v___x_507_ = lean_unsigned_to_nat(3u);
v___x_508_ = lean_nat_dec_eq(v___x_506_, v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_del_object(v___x_504_);
lean_dec(v_a_501_);
v___x_509_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1));
v___x_510_ = l_Nat_reprFast(v___x_506_);
v___x_511_ = lean_string_append(v___x_509_, v___x_510_);
lean_dec_ref(v___x_510_);
v___x_512_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2));
v___x_513_ = lean_string_append(v___x_511_, v___x_512_);
v_a_493_ = v___x_513_;
v_a_494_ = v_a_502_;
goto v___jp_492_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_array_fget_borrowed(v_a_501_, v___x_498_);
v___x_515_ = l_String_Slice_toNat_x3f(v___x_514_);
if (lean_obj_tag(v___x_515_) == 1)
{
lean_object* v_val_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_val_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_val_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_array_fget_borrowed(v_a_501_, v___x_517_);
v___x_519_ = l_String_Slice_toNat_x3f(v___x_518_);
if (lean_obj_tag(v___x_519_) == 1)
{
lean_object* v_val_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v_val_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_val_520_);
lean_dec_ref_known(v___x_519_, 1);
v___x_521_ = lean_unsigned_to_nat(2u);
v___x_522_ = lean_array_fget(v_a_501_, v___x_521_);
lean_dec(v_a_501_);
v___x_523_ = l_String_Slice_toNat_x3f(v___x_522_);
if (lean_obj_tag(v___x_523_) == 1)
{
lean_object* v_val_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
lean_dec(v___x_522_);
v_val_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_val_524_);
lean_dec_ref_known(v___x_523_, 1);
v___x_525_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_525_, 0, v_val_516_);
lean_ctor_set(v___x_525_, 1, v_val_520_);
lean_ctor_set(v___x_525_, 2, v_val_524_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_525_);
v___x_527_ = v___x_504_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_a_502_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
else
{
lean_object* v_str_529_; lean_object* v_startInclusive_530_; lean_object* v_endExclusive_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v___x_523_);
lean_dec(v_val_520_);
lean_dec(v_val_516_);
lean_del_object(v___x_504_);
v_str_529_ = lean_ctor_get(v___x_522_, 0);
lean_inc_ref(v_str_529_);
v_startInclusive_530_ = lean_ctor_get(v___x_522_, 1);
lean_inc(v_startInclusive_530_);
v_endExclusive_531_ = lean_ctor_get(v___x_522_, 2);
lean_inc(v_endExclusive_531_);
lean_dec(v___x_522_);
v___x_532_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3));
v___x_533_ = lean_string_utf8_extract_fast(v_str_529_, v_startInclusive_530_, v_endExclusive_531_);
lean_dec(v_endExclusive_531_);
lean_dec(v_startInclusive_530_);
lean_dec_ref(v_str_529_);
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
lean_dec_ref(v___x_533_);
v___x_535_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_536_ = lean_string_append(v___x_534_, v___x_535_);
v_a_493_ = v___x_536_;
v_a_494_ = v_a_502_;
goto v___jp_492_;
}
}
else
{
lean_object* v_str_537_; lean_object* v_startInclusive_538_; lean_object* v_endExclusive_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
lean_inc(v___x_518_);
lean_dec(v___x_519_);
lean_dec(v_val_516_);
lean_del_object(v___x_504_);
lean_dec(v_a_501_);
v_str_537_ = lean_ctor_get(v___x_518_, 0);
lean_inc_ref(v_str_537_);
v_startInclusive_538_ = lean_ctor_get(v___x_518_, 1);
lean_inc(v_startInclusive_538_);
v_endExclusive_539_ = lean_ctor_get(v___x_518_, 2);
lean_inc(v_endExclusive_539_);
lean_dec(v___x_518_);
v___x_540_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_541_ = lean_string_utf8_extract_fast(v_str_537_, v_startInclusive_538_, v_endExclusive_539_);
lean_dec(v_endExclusive_539_);
lean_dec(v_startInclusive_538_);
lean_dec_ref(v_str_537_);
v___x_542_ = lean_string_append(v___x_540_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v_a_493_ = v___x_544_;
v_a_494_ = v_a_502_;
goto v___jp_492_;
}
}
else
{
lean_object* v_str_545_; lean_object* v_startInclusive_546_; lean_object* v_endExclusive_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_inc(v___x_514_);
lean_dec(v___x_515_);
lean_del_object(v___x_504_);
lean_dec(v_a_501_);
v_str_545_ = lean_ctor_get(v___x_514_, 0);
lean_inc_ref(v_str_545_);
v_startInclusive_546_ = lean_ctor_get(v___x_514_, 1);
lean_inc(v_startInclusive_546_);
v_endExclusive_547_ = lean_ctor_get(v___x_514_, 2);
lean_inc(v_endExclusive_547_);
lean_dec(v___x_514_);
v___x_548_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_549_ = lean_string_utf8_extract_fast(v_str_545_, v_startInclusive_546_, v_endExclusive_547_);
lean_dec(v_endExclusive_547_);
lean_dec(v_startInclusive_546_);
lean_dec_ref(v_str_545_);
v___x_550_ = lean_string_append(v___x_548_, v___x_549_);
lean_dec_ref(v___x_549_);
v___x_551_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v_a_493_ = v___x_552_;
v_a_494_ = v_a_502_;
goto v___jp_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_parse(lean_object* v_s_554_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = lean_unsigned_to_nat(0u);
v___x_556_ = lean_string_utf8_byte_size(v_s_554_);
lean_inc_ref(v_s_554_);
v___x_557_ = l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(v_s_554_, v___x_555_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v_a_559_; uint8_t v_decide_560_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
v_a_559_ = lean_ctor_get(v___x_557_, 1);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_557_, 2);
v_decide_560_ = lean_nat_dec_eq(v_a_559_, v___x_556_);
if (v_decide_560_ == 0)
{
lean_object* v_tail_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
lean_dec(v_a_558_);
v_tail_561_ = lean_string_utf8_extract(v_s_554_, v_a_559_, v___x_556_);
lean_dec(v_a_559_);
lean_dec_ref(v_s_554_);
v___x_562_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_563_ = lean_string_append(v___x_562_, v_tail_561_);
lean_dec_ref(v_tail_561_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
else
{
lean_object* v___x_565_; 
lean_dec(v_a_559_);
lean_dec_ref(v_s_554_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_a_558_);
return v___x_565_;
}
}
else
{
lean_object* v_a_566_; lean_object* v___x_567_; 
lean_dec_ref(v_s_554_);
v_a_566_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_557_, 2);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v_a_566_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_toString(lean_object* v_ver_569_){
_start:
{
lean_object* v_major_570_; lean_object* v_minor_571_; lean_object* v_patch_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_major_570_ = lean_ctor_get(v_ver_569_, 0);
lean_inc(v_major_570_);
v_minor_571_ = lean_ctor_get(v_ver_569_, 1);
lean_inc(v_minor_571_);
v_patch_572_ = lean_ctor_get(v_ver_569_, 2);
lean_inc(v_patch_572_);
lean_dec_ref(v_ver_569_);
v___x_573_ = l_Nat_reprFast(v_major_570_);
v___x_574_ = ((lean_object*)(l_Lake_SemVerCore_toString___closed__0));
v___x_575_ = lean_string_append(v___x_573_, v___x_574_);
v___x_576_ = l_Nat_reprFast(v_minor_571_);
v___x_577_ = lean_string_append(v___x_575_, v___x_576_);
lean_dec_ref(v___x_576_);
v___x_578_ = lean_string_append(v___x_577_, v___x_574_);
v___x_579_ = l_Nat_reprFast(v_patch_572_);
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
lean_dec_ref(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instToJson___lam__0(lean_object* v_x_583_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = l_Lake_SemVerCore_toString(v_x_583_);
v___x_585_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instFromJson___lam__0(lean_object* v_x_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_Json_getStr_x3f(v_x_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
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
lean_object* v_a_598_; lean_object* v___x_599_; 
v_a_598_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_589_, 1);
v___x_599_ = l_Lake_SemVerCore_parse(v_a_598_);
return v___x_599_;
}
}
}
static lean_object* _init_l_Lake_instReprStdVer_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_unsigned_to_nat(16u);
v___x_617_ = lean_nat_to_int(v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___redArg(lean_object* v_x_621_){
_start:
{
lean_object* v_toSemVerCore_622_; lean_object* v_specialDescr_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_656_; 
v_toSemVerCore_622_ = lean_ctor_get(v_x_621_, 0);
v_specialDescr_623_ = lean_ctor_get(v_x_621_, 1);
v_isSharedCheck_656_ = !lean_is_exclusive(v_x_621_);
if (v_isSharedCheck_656_ == 0)
{
v___x_625_ = v_x_621_;
v_isShared_626_ = v_isSharedCheck_656_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_specialDescr_623_);
lean_inc(v_toSemVerCore_622_);
lean_dec(v_x_621_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_656_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_627_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_628_ = ((lean_object*)(l_Lake_instReprStdVer_repr___redArg___closed__3));
v___x_629_ = lean_obj_once(&l_Lake_instReprStdVer_repr___redArg___closed__4, &l_Lake_instReprStdVer_repr___redArg___closed__4_once, _init_l_Lake_instReprStdVer_repr___redArg___closed__4);
v___x_630_ = l_Lake_instReprSemVerCore_repr___redArg(v_toSemVerCore_622_);
if (v_isShared_626_ == 0)
{
lean_ctor_set_tag(v___x_625_, 4);
lean_ctor_set(v___x_625_, 1, v___x_630_);
lean_ctor_set(v___x_625_, 0, v___x_629_);
v___x_632_ = v___x_625_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_630_);
v___x_632_ = v_reuseFailAlloc_655_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
uint8_t v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_633_ = 0;
v___x_634_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set_uint8(v___x_634_, sizeof(void*)*1, v___x_633_);
v___x_635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_628_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_box(1);
v___x_639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = ((lean_object*)(l_Lake_instReprStdVer_repr___redArg___closed__6));
v___x_641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_627_);
v___x_643_ = l_String_quote(v_specialDescr_623_);
v___x_644_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
v___x_645_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_629_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set_uint8(v___x_646_, sizeof(void*)*1, v___x_633_);
v___x_647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_642_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_649_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v___x_647_);
v___x_651_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_650_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_648_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set_uint8(v___x_654_, sizeof(void*)*1, v___x_633_);
return v___x_654_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr(lean_object* v_x_657_, lean_object* v_prec_658_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Lake_instReprStdVer_repr___redArg(v_x_657_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___boxed(lean_object* v_x_660_, lean_object* v_prec_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lake_instReprStdVer_repr(v_x_660_, v_prec_661_);
lean_dec(v_prec_661_);
return v_res_662_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer_decEq(lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
lean_object* v_toSemVerCore_667_; lean_object* v_specialDescr_668_; lean_object* v_toSemVerCore_669_; lean_object* v_specialDescr_670_; uint8_t v___x_671_; 
v_toSemVerCore_667_ = lean_ctor_get(v_x_665_, 0);
v_specialDescr_668_ = lean_ctor_get(v_x_665_, 1);
v_toSemVerCore_669_ = lean_ctor_get(v_x_666_, 0);
v_specialDescr_670_ = lean_ctor_get(v_x_666_, 1);
v___x_671_ = l_Lake_instDecidableEqSemVerCore_decEq(v_toSemVerCore_667_, v_toSemVerCore_669_);
if (v___x_671_ == 0)
{
return v___x_671_;
}
else
{
uint8_t v___x_672_; 
v___x_672_ = lean_string_dec_eq(v_specialDescr_668_, v_specialDescr_670_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer_decEq___boxed(lean_object* v_x_673_, lean_object* v_x_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l_Lake_instDecidableEqStdVer_decEq(v_x_673_, v_x_674_);
lean_dec_ref(v_x_674_);
lean_dec_ref(v_x_673_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer(lean_object* v_x_677_, lean_object* v_x_678_){
_start:
{
uint8_t v___x_679_; 
v___x_679_ = l_Lake_instDecidableEqStdVer_decEq(v_x_677_, v_x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer___boxed(lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
uint8_t v_res_682_; lean_object* v_r_683_; 
v_res_682_ = l_Lake_instDecidableEqStdVer(v_x_680_, v_x_681_);
lean_dec_ref(v_x_681_);
lean_dec_ref(v_x_680_);
v_r_683_ = lean_box(v_res_682_);
return v_r_683_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0(lean_object* v_self_684_){
_start:
{
lean_object* v_toSemVerCore_685_; 
v_toSemVerCore_685_ = lean_ctor_get(v_self_684_, 0);
lean_inc_ref(v_toSemVerCore_685_);
return v_toSemVerCore_685_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0___boxed(lean_object* v_self_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lake_StdVer_instCoeSemVerCore___lam__0(v_self_686_);
lean_dec_ref(v_self_686_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_ofSemVerCore(lean_object* v_ver_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v_ver_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
return v___x_692_;
}
}
LEAN_EXPORT uint8_t l_Lake_StdVer_compare(lean_object* v_a_695_, lean_object* v_b_696_){
_start:
{
lean_object* v_toSemVerCore_697_; lean_object* v_specialDescr_698_; lean_object* v_toSemVerCore_699_; lean_object* v_specialDescr_700_; uint8_t v___x_701_; 
v_toSemVerCore_697_ = lean_ctor_get(v_a_695_, 0);
v_specialDescr_698_ = lean_ctor_get(v_a_695_, 1);
v_toSemVerCore_699_ = lean_ctor_get(v_b_696_, 0);
v_specialDescr_700_ = lean_ctor_get(v_b_696_, 1);
v___x_701_ = l_Lake_instOrdSemVerCore_ord(v_toSemVerCore_697_, v_toSemVerCore_699_);
if (v___x_701_ == 1)
{
lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_702_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_703_ = lean_string_dec_eq(v_specialDescr_698_, v___x_702_);
if (v___x_703_ == 0)
{
uint8_t v___x_704_; 
v___x_704_ = lean_string_dec_eq(v_specialDescr_700_, v___x_702_);
if (v___x_704_ == 0)
{
uint8_t v___x_705_; 
v___x_705_ = lean_string_compare(v_specialDescr_698_, v_specialDescr_700_);
return v___x_705_;
}
else
{
uint8_t v___x_706_; 
v___x_706_ = 0;
return v___x_706_;
}
}
else
{
uint8_t v___x_707_; 
v___x_707_ = lean_string_dec_eq(v_specialDescr_700_, v___x_702_);
if (v___x_707_ == 0)
{
uint8_t v___x_708_; 
v___x_708_ = 2;
return v___x_708_;
}
else
{
return v___x_701_;
}
}
}
else
{
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_compare___boxed(lean_object* v_a_709_, lean_object* v_b_710_){
_start:
{
uint8_t v_res_711_; lean_object* v_r_712_; 
v_res_711_ = l_Lake_StdVer_compare(v_a_709_, v_b_710_);
lean_dec_ref(v_b_710_);
lean_dec_ref(v_a_709_);
v_r_712_ = lean_box(v_res_711_);
return v_r_712_;
}
}
static lean_object* _init_l_Lake_StdVer_instLT(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_box(0);
return v___x_715_;
}
}
static lean_object* _init_l_Lake_StdVer_instLE(void){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = lean_box(0);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0(lean_object* v_x_717_, lean_object* v_y_718_){
_start:
{
uint8_t v___x_719_; 
v___x_719_ = l_Lake_StdVer_compare(v_x_717_, v_y_718_);
if (v___x_719_ == 2)
{
lean_inc_ref(v_y_718_);
return v_y_718_;
}
else
{
lean_inc_ref(v_x_717_);
return v_x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0___boxed(lean_object* v_x_720_, lean_object* v_y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lake_StdVer_instMin___lam__0(v_x_720_, v_y_721_);
lean_dec_ref(v_y_721_);
lean_dec_ref(v_x_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0(lean_object* v_x_725_, lean_object* v_y_726_){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = l_Lake_StdVer_compare(v_x_725_, v_y_726_);
if (v___x_727_ == 2)
{
lean_inc_ref(v_x_725_);
return v_x_725_;
}
else
{
lean_inc_ref(v_y_726_);
return v_y_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0___boxed(lean_object* v_x_728_, lean_object* v_y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lake_StdVer_instMax___lam__0(v_x_728_, v_y_729_);
lean_dec_ref(v_y_729_);
lean_dec_ref(v_x_728_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_parseM(lean_object* v_s_733_, lean_object* v_a_734_){
_start:
{
lean_object* v___x_735_; 
lean_inc_ref(v_s_733_);
v___x_735_ = l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(v_s_733_, v_a_734_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v_a_737_; lean_object* v___x_738_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_736_);
v_a_737_ = lean_ctor_get(v___x_735_, 1);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_735_, 2);
v___x_738_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_733_, v_a_737_);
lean_dec_ref(v_s_733_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_748_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
v_a_740_ = lean_ctor_get(v___x_738_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_748_ == 0)
{
v___x_742_ = v___x_738_;
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_inc(v_a_739_);
lean_dec(v___x_738_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_a_736_);
lean_ctor_set(v___x_744_, 1, v_a_739_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_744_);
v___x_746_ = v___x_742_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_a_740_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
else
{
lean_object* v_a_749_; lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec(v_a_736_);
v_a_749_ = lean_ctor_get(v___x_738_, 0);
v_a_750_ = lean_ctor_get(v___x_738_, 1);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_738_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_inc(v_a_749_);
lean_dec(v___x_738_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_749_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
else
{
lean_object* v_a_758_; lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
lean_dec_ref(v_s_733_);
v_a_758_ = lean_ctor_get(v___x_735_, 0);
v_a_759_ = lean_ctor_get(v___x_735_, 1);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_735_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_inc(v_a_758_);
lean_dec(v___x_735_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_758_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_parse(lean_object* v_s_767_){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = lean_string_utf8_byte_size(v_s_767_);
lean_inc_ref(v_s_767_);
v___x_770_ = l_Lake_StdVer_parseM(v_s_767_, v___x_768_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v_a_772_; uint8_t v_decide_773_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
v_a_772_ = lean_ctor_get(v___x_770_, 1);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_770_, 2);
v_decide_773_ = lean_nat_dec_eq(v_a_772_, v___x_769_);
if (v_decide_773_ == 0)
{
lean_object* v_tail_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
lean_dec(v_a_771_);
v_tail_774_ = lean_string_utf8_extract(v_s_767_, v_a_772_, v___x_769_);
lean_dec(v_a_772_);
lean_dec_ref(v_s_767_);
v___x_775_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_776_ = lean_string_append(v___x_775_, v_tail_774_);
lean_dec_ref(v_tail_774_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; 
lean_dec(v_a_772_);
lean_dec_ref(v_s_767_);
v___x_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_778_, 0, v_a_771_);
return v___x_778_;
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_780_; 
lean_dec_ref(v_s_767_);
v_a_779_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_770_, 2);
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v_a_779_);
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_toString(lean_object* v_ver_782_){
_start:
{
lean_object* v_toSemVerCore_783_; lean_object* v_specialDescr_784_; lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v_toSemVerCore_783_ = lean_ctor_get(v_ver_782_, 0);
lean_inc_ref(v_toSemVerCore_783_);
v_specialDescr_784_ = lean_ctor_get(v_ver_782_, 1);
lean_inc_ref(v_specialDescr_784_);
lean_dec_ref(v_ver_782_);
v___x_785_ = lean_string_utf8_byte_size(v_specialDescr_784_);
v___x_786_ = lean_unsigned_to_nat(0u);
v___x_787_ = lean_nat_dec_eq(v___x_785_, v___x_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_788_ = l_Lake_SemVerCore_toString(v_toSemVerCore_783_);
v___x_789_ = ((lean_object*)(l_Lake_StdVer_toString___closed__0));
v___x_790_ = lean_string_append(v___x_788_, v___x_789_);
v___x_791_ = lean_string_append(v___x_790_, v_specialDescr_784_);
lean_dec_ref(v_specialDescr_784_);
return v___x_791_;
}
else
{
lean_object* v___x_792_; 
lean_dec_ref(v_specialDescr_784_);
v___x_792_ = l_Lake_SemVerCore_toString(v_toSemVerCore_783_);
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instToJson___lam__0(lean_object* v_x_795_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = l_Lake_StdVer_toString(v_x_795_);
v___x_797_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instFromJson___lam__0(lean_object* v_x_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_Json_getStr_x3f(v_x_800_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_801_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_801_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_811_; 
v_a_810_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_810_);
lean_dec_ref_known(v___x_801_, 1);
v___x_811_ = l_Lake_StdVer_parse(v_a_810_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx___impl(lean_object* v_x_820_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = lean_obj_tag_nat(v_x_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx___impl___boxed(lean_object* v_x_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lake_ToolchainVer_ctorIdx___impl(v_x_822_);
lean_dec_ref(v_x_822_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___redArg(lean_object* v_t_824_, lean_object* v_k_825_){
_start:
{
switch(lean_obj_tag(v_t_824_))
{
case 1:
{
lean_object* v_date_826_; lean_object* v_rev_827_; lean_object* v___x_828_; 
v_date_826_ = lean_ctor_get(v_t_824_, 0);
lean_inc_ref(v_date_826_);
v_rev_827_ = lean_ctor_get(v_t_824_, 1);
lean_inc(v_rev_827_);
lean_dec_ref_known(v_t_824_, 2);
v___x_828_ = lean_apply_2(v_k_825_, v_date_826_, v_rev_827_);
return v___x_828_;
}
case 2:
{
lean_object* v_n_829_; lean_object* v___x_830_; 
v_n_829_ = lean_ctor_get(v_t_824_, 0);
lean_inc(v_n_829_);
lean_dec_ref_known(v_t_824_, 1);
v___x_830_ = lean_apply_1(v_k_825_, v_n_829_);
return v___x_830_;
}
default: 
{
lean_object* v_ver_831_; lean_object* v___x_832_; 
v_ver_831_ = lean_ctor_get(v_t_824_, 0);
lean_inc_ref(v_ver_831_);
lean_dec_ref(v_t_824_);
v___x_832_ = lean_apply_1(v_k_825_, v_ver_831_);
return v___x_832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim(lean_object* v_motive_833_, lean_object* v_ctorIdx_834_, lean_object* v_t_835_, lean_object* v_h_836_, lean_object* v_k_837_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_835_, v_k_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___boxed(lean_object* v_motive_839_, lean_object* v_ctorIdx_840_, lean_object* v_t_841_, lean_object* v_h_842_, lean_object* v_k_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lake_ToolchainVer_ctorElim(v_motive_839_, v_ctorIdx_840_, v_t_841_, v_h_842_, v_k_843_);
lean_dec(v_ctorIdx_840_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim___redArg(lean_object* v_t_845_, lean_object* v_release_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_845_, v_release_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim(lean_object* v_motive_848_, lean_object* v_t_849_, lean_object* v_h_850_, lean_object* v_release_851_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_849_, v_release_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim___redArg(lean_object* v_t_853_, lean_object* v_nightly_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_853_, v_nightly_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim(lean_object* v_motive_856_, lean_object* v_t_857_, lean_object* v_h_858_, lean_object* v_nightly_859_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_857_, v_nightly_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim___redArg(lean_object* v_t_861_, lean_object* v_pr_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_861_, v_pr_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim(lean_object* v_motive_864_, lean_object* v_t_865_, lean_object* v_h_866_, lean_object* v_pr_867_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_865_, v_pr_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim___redArg(lean_object* v_t_869_, lean_object* v_other_870_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_869_, v_other_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim(lean_object* v_motive_872_, lean_object* v_t_873_, lean_object* v_h_874_, lean_object* v_other_875_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_873_, v_other_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___redArg(lean_object* v_t_877_, lean_object* v_release_878_, lean_object* v_nightly_879_, lean_object* v_pr_880_, lean_object* v_other_881_){
_start:
{
switch(lean_obj_tag(v_t_877_))
{
case 0:
{
lean_object* v_ver_882_; lean_object* v___x_883_; 
lean_dec(v_other_881_);
lean_dec(v_pr_880_);
lean_dec(v_nightly_879_);
v_ver_882_ = lean_ctor_get(v_t_877_, 1);
lean_inc_ref(v_ver_882_);
lean_dec_ref_known(v_t_877_, 2);
v___x_883_ = lean_apply_1(v_release_878_, v_ver_882_);
return v___x_883_;
}
case 1:
{
lean_object* v_date_884_; lean_object* v_rev_885_; lean_object* v___x_886_; 
lean_dec(v_other_881_);
lean_dec(v_pr_880_);
lean_dec(v_release_878_);
v_date_884_ = lean_ctor_get(v_t_877_, 1);
lean_inc_ref(v_date_884_);
v_rev_885_ = lean_ctor_get(v_t_877_, 2);
lean_inc(v_rev_885_);
lean_dec_ref_known(v_t_877_, 3);
v___x_886_ = lean_apply_2(v_nightly_879_, v_date_884_, v_rev_885_);
return v___x_886_;
}
case 2:
{
lean_object* v_n_887_; lean_object* v___x_888_; 
lean_dec(v_other_881_);
lean_dec(v_nightly_879_);
lean_dec(v_release_878_);
v_n_887_ = lean_ctor_get(v_t_877_, 1);
lean_inc(v_n_887_);
lean_dec_ref_known(v_t_877_, 2);
v___x_888_ = lean_apply_1(v_pr_880_, v_n_887_);
return v___x_888_;
}
default: 
{
lean_object* v_v_889_; lean_object* v___x_890_; 
lean_dec(v_pr_880_);
lean_dec(v_nightly_879_);
lean_dec(v_release_878_);
v_v_889_ = lean_ctor_get(v_t_877_, 1);
lean_inc_ref(v_v_889_);
lean_dec_ref_known(v_t_877_, 2);
v___x_890_ = lean_apply_1(v_other_881_, v_v_889_);
return v___x_890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override(lean_object* v_motive_891_, lean_object* v_t_892_, lean_object* v_release_893_, lean_object* v_nightly_894_, lean_object* v_pr_895_, lean_object* v_other_896_){
_start:
{
switch(lean_obj_tag(v_t_892_))
{
case 0:
{
lean_object* v_ver_897_; lean_object* v___x_898_; 
lean_dec(v_other_896_);
lean_dec(v_pr_895_);
lean_dec(v_nightly_894_);
v_ver_897_ = lean_ctor_get(v_t_892_, 1);
lean_inc_ref(v_ver_897_);
lean_dec_ref_known(v_t_892_, 2);
v___x_898_ = lean_apply_1(v_release_893_, v_ver_897_);
return v___x_898_;
}
case 1:
{
lean_object* v_date_899_; lean_object* v_rev_900_; lean_object* v___x_901_; 
lean_dec(v_other_896_);
lean_dec(v_pr_895_);
lean_dec(v_release_893_);
v_date_899_ = lean_ctor_get(v_t_892_, 1);
lean_inc_ref(v_date_899_);
v_rev_900_ = lean_ctor_get(v_t_892_, 2);
lean_inc(v_rev_900_);
lean_dec_ref_known(v_t_892_, 3);
v___x_901_ = lean_apply_2(v_nightly_894_, v_date_899_, v_rev_900_);
return v___x_901_;
}
case 2:
{
lean_object* v_n_902_; lean_object* v___x_903_; 
lean_dec(v_other_896_);
lean_dec(v_nightly_894_);
lean_dec(v_release_893_);
v_n_902_ = lean_ctor_get(v_t_892_, 1);
lean_inc(v_n_902_);
lean_dec_ref_known(v_t_892_, 2);
v___x_903_ = lean_apply_1(v_pr_895_, v_n_902_);
return v___x_903_;
}
default: 
{
lean_object* v_v_904_; lean_object* v___x_905_; 
lean_dec(v_pr_895_);
lean_dec(v_nightly_894_);
lean_dec(v_release_893_);
v_v_904_ = lean_ctor_get(v_t_892_, 1);
lean_inc_ref(v_v_904_);
lean_dec_ref_known(v_t_892_, 2);
v___x_905_ = lean_apply_1(v_other_896_, v_v_904_);
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release___override(lean_object* v_ver_907_){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_908_ = ((lean_object*)(l_Lake_ToolchainVer_release___override___closed__0));
lean_inc_ref(v_ver_907_);
v___x_909_ = l_Lake_StdVer_toString(v_ver_907_);
v___x_910_ = lean_string_append(v___x_908_, v___x_909_);
lean_dec_ref(v___x_909_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
lean_ctor_set(v___x_911_, 1, v_ver_907_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly___override(lean_object* v_date_914_, lean_object* v_rev_915_){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___y_920_; 
v___x_916_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__0));
lean_inc_ref(v_date_914_);
v___x_917_ = l_Lake_Date_toString(v_date_914_);
v___x_918_ = lean_string_append(v___x_916_, v___x_917_);
lean_dec_ref(v___x_917_);
if (lean_obj_tag(v_rev_915_) == 0)
{
lean_object* v___x_923_; 
v___x_923_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___y_920_ = v___x_923_;
goto v___jp_919_;
}
else
{
lean_object* v_val_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_val_924_ = lean_ctor_get(v_rev_915_, 0);
v___x_925_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__1));
lean_inc(v_val_924_);
v___x_926_ = l_Nat_reprFast(v_val_924_);
v___x_927_ = lean_string_append(v___x_925_, v___x_926_);
lean_dec_ref(v___x_926_);
v___y_920_ = v___x_927_;
goto v___jp_919_;
}
v___jp_919_:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_string_append(v___x_918_, v___y_920_);
lean_dec_ref(v___y_920_);
v___x_922_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v_date_914_);
lean_ctor_set(v___x_922_, 2, v_rev_915_);
return v___x_922_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr___override(lean_object* v_n_929_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_930_ = ((lean_object*)(l_Lake_ToolchainVer_pr___override___closed__0));
lean_inc(v_n_929_);
v___x_931_ = l_Nat_reprFast(v_n_929_);
v___x_932_ = lean_string_append(v___x_930_, v___x_931_);
lean_dec_ref(v___x_931_);
v___x_933_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
lean_ctor_set(v___x_933_, 1, v_n_929_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other___override(lean_object* v_v_934_){
_start:
{
lean_object* v___x_935_; 
lean_inc_ref(v_v_934_);
v___x_935_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_935_, 0, v_v_934_);
lean_ctor_set(v___x_935_, 1, v_v_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override(lean_object* v_x_936_){
_start:
{
lean_object* v_toString_937_; 
v_toString_937_ = lean_ctor_get(v_x_936_, 0);
lean_inc_ref(v_toString_937_);
return v_toString_937_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override___boxed(lean_object* v_x_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lake_ToolchainVer_toString___override(v_x_938_);
lean_dec_ref(v_x_938_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(lean_object* v_x_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_946_) == 0)
{
lean_object* v___x_948_; 
v___x_948_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1));
return v___x_948_;
}
else
{
lean_object* v_val_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_960_; 
v_val_949_ = lean_ctor_get(v_x_946_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v_x_946_);
if (v_isSharedCheck_960_ == 0)
{
v___x_951_ = v_x_946_;
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_val_949_);
lean_dec(v_x_946_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_953_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3));
v___x_954_ = l_Nat_reprFast(v_val_949_);
if (v_isShared_952_ == 0)
{
lean_ctor_set_tag(v___x_951_, 3);
lean_ctor_set(v___x_951_, 0, v___x_954_);
v___x_956_ = v___x_951_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_959_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_953_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = l_Repr_addAppParen(v___x_957_, v_x_947_);
return v___x_958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___boxed(lean_object* v_x_961_, lean_object* v_x_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(v_x_961_, v_x_962_);
lean_dec(v_x_962_);
return v_res_963_;
}
}
static lean_object* _init_l_Lake_instReprToolchainVer_repr___closed__3(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_unsigned_to_nat(2u);
v___x_971_ = lean_nat_to_int(v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l_Lake_instReprToolchainVer_repr___closed__4(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_nat_to_int(v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr(lean_object* v_x_992_, lean_object* v_prec_993_){
_start:
{
switch(lean_obj_tag(v_x_992_))
{
case 0:
{
lean_object* v_ver_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1013_; 
v_ver_994_ = lean_ctor_get(v_x_992_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_x_992_);
if (v_isSharedCheck_1013_ == 0)
{
lean_object* v_unused_1014_; 
v_unused_1014_ = lean_ctor_get(v_x_992_, 0);
lean_dec(v_unused_1014_);
v___x_996_ = v_x_992_;
v_isShared_997_ = v_isSharedCheck_1013_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_ver_994_);
lean_dec(v_x_992_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1013_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___y_999_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = lean_unsigned_to_nat(1024u);
v___x_1010_ = lean_nat_dec_le(v___x_1009_, v_prec_993_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_999_ = v___x_1011_;
goto v___jp_998_;
}
else
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_999_ = v___x_1012_;
goto v___jp_998_;
}
v___jp_998_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_1000_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__2));
v___x_1001_ = l_Lake_instReprStdVer_repr___redArg(v_ver_994_);
if (v_isShared_997_ == 0)
{
lean_ctor_set_tag(v___x_996_, 5);
lean_ctor_set(v___x_996_, 1, v___x_1001_);
lean_ctor_set(v___x_996_, 0, v___x_1000_);
v___x_1003_ = v___x_996_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_inc(v___y_999_);
v___x_1004_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___y_999_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = 0;
v___x_1006_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*1, v___x_1005_);
v___x_1007_ = l_Repr_addAppParen(v___x_1006_, v_prec_993_);
return v___x_1007_;
}
}
}
}
case 1:
{
lean_object* v_date_1015_; lean_object* v_rev_1016_; lean_object* v___y_1018_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v_date_1015_ = lean_ctor_get(v_x_992_, 1);
lean_inc_ref(v_date_1015_);
v_rev_1016_ = lean_ctor_get(v_x_992_, 2);
lean_inc(v_rev_1016_);
lean_dec_ref_known(v_x_992_, 3);
v___x_1031_ = lean_unsigned_to_nat(1024u);
v___x_1032_ = lean_nat_dec_le(v___x_1031_, v_prec_993_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1018_ = v___x_1033_;
goto v___jp_1017_;
}
else
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1018_ = v___x_1034_;
goto v___jp_1017_;
}
v___jp_1017_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1019_ = lean_box(1);
v___x_1020_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__7));
v___x_1021_ = lean_unsigned_to_nat(1024u);
v___x_1022_ = l_Lake_instReprDate_repr___redArg(v_date_1015_);
v___x_1023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1020_);
lean_ctor_set(v___x_1023_, 1, v___x_1022_);
v___x_1024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
lean_ctor_set(v___x_1024_, 1, v___x_1019_);
v___x_1025_ = l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(v_rev_1016_, v___x_1021_);
v___x_1026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
lean_inc(v___y_1018_);
v___x_1027_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___y_1018_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = 0;
v___x_1029_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*1, v___x_1028_);
v___x_1030_ = l_Repr_addAppParen(v___x_1029_, v_prec_993_);
return v___x_1030_;
}
}
case 2:
{
lean_object* v_n_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1055_; 
v_n_1035_ = lean_ctor_get(v_x_992_, 1);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_x_992_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; 
v_unused_1056_ = lean_ctor_get(v_x_992_, 0);
lean_dec(v_unused_1056_);
v___x_1037_ = v_x_992_;
v_isShared_1038_ = v_isSharedCheck_1055_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_n_1035_);
lean_dec(v_x_992_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1055_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___y_1040_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1051_ = lean_unsigned_to_nat(1024u);
v___x_1052_ = lean_nat_dec_le(v___x_1051_, v_prec_993_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1040_ = v___x_1053_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1054_; 
v___x_1054_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1040_ = v___x_1054_;
goto v___jp_1039_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1041_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__10));
v___x_1042_ = l_Nat_reprFast(v_n_1035_);
v___x_1043_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set_tag(v___x_1037_, 5);
lean_ctor_set(v___x_1037_, 1, v___x_1043_);
lean_ctor_set(v___x_1037_, 0, v___x_1041_);
v___x_1045_ = v___x_1037_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v___x_1043_);
v___x_1045_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; uint8_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_inc(v___y_1040_);
v___x_1046_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___y_1040_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = 0;
v___x_1048_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set_uint8(v___x_1048_, sizeof(void*)*1, v___x_1047_);
v___x_1049_ = l_Repr_addAppParen(v___x_1048_, v_prec_993_);
return v___x_1049_;
}
}
}
}
default: 
{
lean_object* v_v_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1077_; 
v_v_1057_ = lean_ctor_get(v_x_992_, 1);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_x_992_);
if (v_isSharedCheck_1077_ == 0)
{
lean_object* v_unused_1078_; 
v_unused_1078_ = lean_ctor_get(v_x_992_, 0);
lean_dec(v_unused_1078_);
v___x_1059_ = v_x_992_;
v_isShared_1060_ = v_isSharedCheck_1077_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_v_1057_);
lean_dec(v_x_992_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1077_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___y_1062_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = lean_unsigned_to_nat(1024u);
v___x_1074_ = lean_nat_dec_le(v___x_1073_, v_prec_993_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1062_ = v___x_1075_;
goto v___jp_1061_;
}
else
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1062_ = v___x_1076_;
goto v___jp_1061_;
}
v___jp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
v___x_1063_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__13));
v___x_1064_ = l_String_quote(v_v_1057_);
v___x_1065_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set_tag(v___x_1059_, 5);
lean_ctor_set(v___x_1059_, 1, v___x_1065_);
lean_ctor_set(v___x_1059_, 0, v___x_1063_);
v___x_1067_ = v___x_1059_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; uint8_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
lean_inc(v___y_1062_);
v___x_1068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___y_1062_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = 0;
v___x_1070_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set_uint8(v___x_1070_, sizeof(void*)*1, v___x_1069_);
v___x_1071_ = l_Repr_addAppParen(v___x_1070_, v_prec_993_);
return v___x_1071_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr___boxed(lean_object* v_x_1079_, lean_object* v_prec_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lake_instReprToolchainVer_repr(v_x_1079_, v_prec_1080_);
lean_dec(v_prec_1080_);
return v_res_1081_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object* v_x_1084_, lean_object* v_x_1085_){
_start:
{
switch(lean_obj_tag(v_x_1084_))
{
case 0:
{
if (lean_obj_tag(v_x_1085_) == 0)
{
lean_object* v_ver_1086_; lean_object* v_ver_1087_; uint8_t v___x_1088_; 
v_ver_1086_ = lean_ctor_get(v_x_1084_, 1);
lean_inc_ref(v_ver_1086_);
lean_dec_ref_known(v_x_1084_, 2);
v_ver_1087_ = lean_ctor_get(v_x_1085_, 1);
lean_inc_ref(v_ver_1087_);
lean_dec_ref_known(v_x_1085_, 2);
v___x_1088_ = l_Lake_instDecidableEqStdVer_decEq(v_ver_1086_, v_ver_1087_);
lean_dec_ref(v_ver_1087_);
lean_dec_ref(v_ver_1086_);
return v___x_1088_;
}
else
{
uint8_t v___x_1089_; 
lean_dec_ref_known(v_x_1084_, 2);
lean_dec_ref(v_x_1085_);
v___x_1089_ = 0;
return v___x_1089_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1085_) == 1)
{
lean_object* v_date_1090_; lean_object* v_rev_1091_; lean_object* v_date_1092_; lean_object* v_rev_1093_; uint8_t v___x_1094_; 
v_date_1090_ = lean_ctor_get(v_x_1084_, 1);
lean_inc_ref(v_date_1090_);
v_rev_1091_ = lean_ctor_get(v_x_1084_, 2);
lean_inc(v_rev_1091_);
lean_dec_ref_known(v_x_1084_, 3);
v_date_1092_ = lean_ctor_get(v_x_1085_, 1);
lean_inc_ref(v_date_1092_);
v_rev_1093_ = lean_ctor_get(v_x_1085_, 2);
lean_inc(v_rev_1093_);
lean_dec_ref_known(v_x_1085_, 3);
v___x_1094_ = l_Lake_instDecidableEqDate_decEq(v_date_1090_, v_date_1092_);
lean_dec_ref(v_date_1092_);
lean_dec_ref(v_date_1090_);
if (v___x_1094_ == 0)
{
lean_dec(v_rev_1093_);
lean_dec(v_rev_1091_);
return v___x_1094_;
}
else
{
lean_object* v___x_1095_; uint8_t v___x_1096_; 
v___x_1095_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_1096_ = l_Option_instDecidableEq___redArg(v___x_1095_, v_rev_1091_, v_rev_1093_);
return v___x_1096_;
}
}
else
{
uint8_t v___x_1097_; 
lean_dec_ref_known(v_x_1084_, 3);
lean_dec_ref(v_x_1085_);
v___x_1097_ = 0;
return v___x_1097_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1085_) == 2)
{
lean_object* v_n_1098_; lean_object* v_n_1099_; uint8_t v___x_1100_; 
v_n_1098_ = lean_ctor_get(v_x_1084_, 1);
lean_inc(v_n_1098_);
lean_dec_ref_known(v_x_1084_, 2);
v_n_1099_ = lean_ctor_get(v_x_1085_, 1);
lean_inc(v_n_1099_);
lean_dec_ref_known(v_x_1085_, 2);
v___x_1100_ = lean_nat_dec_eq(v_n_1098_, v_n_1099_);
lean_dec(v_n_1099_);
lean_dec(v_n_1098_);
return v___x_1100_;
}
else
{
uint8_t v___x_1101_; 
lean_dec_ref_known(v_x_1084_, 2);
lean_dec_ref(v_x_1085_);
v___x_1101_ = 0;
return v___x_1101_;
}
}
default: 
{
if (lean_obj_tag(v_x_1085_) == 3)
{
lean_object* v_v_1102_; lean_object* v_v_1103_; uint8_t v___x_1104_; 
v_v_1102_ = lean_ctor_get(v_x_1084_, 1);
lean_inc_ref(v_v_1102_);
lean_dec_ref_known(v_x_1084_, 2);
v_v_1103_ = lean_ctor_get(v_x_1085_, 1);
lean_inc_ref(v_v_1103_);
lean_dec_ref_known(v_x_1085_, 2);
v___x_1104_ = lean_string_dec_eq(v_v_1102_, v_v_1103_);
lean_dec_ref(v_v_1103_);
lean_dec_ref(v_v_1102_);
return v___x_1104_;
}
else
{
uint8_t v___x_1105_; 
lean_dec_ref_known(v_x_1084_, 2);
lean_dec_ref(v_x_1085_);
v___x_1105_ = 0;
return v___x_1105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer_decEq___boxed(lean_object* v_x_1106_, lean_object* v_x_1107_){
_start:
{
uint8_t v_res_1108_; lean_object* v_r_1109_; 
v_res_1108_ = l_Lake_instDecidableEqToolchainVer_decEq(v_x_1106_, v_x_1107_);
v_r_1109_ = lean_box(v_res_1108_);
return v_r_1109_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer(lean_object* v_x_1110_, lean_object* v_x_1111_){
_start:
{
uint8_t v___x_1112_; 
v___x_1112_ = l_Lake_instDecidableEqToolchainVer_decEq(v_x_1110_, v_x_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer___boxed(lean_object* v_x_1113_, lean_object* v_x_1114_){
_start:
{
uint8_t v_res_1115_; lean_object* v_r_1116_; 
v_res_1115_ = l_Lake_instDecidableEqToolchainVer(v_x_1113_, v_x_1114_);
v_r_1116_ = lean_box(v_res_1115_);
return v_r_1116_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(lean_object* v_s_1120_){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v___x_1121_ = lean_string_utf8_byte_size(v_s_1120_);
v___x_1122_ = lean_unsigned_to_nat(8u);
v___x_1123_ = lean_nat_dec_le(v___x_1122_, v___x_1121_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; 
lean_dec_ref(v_s_1120_);
v___x_1124_ = lean_box(0);
return v___x_1124_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1125_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0));
v___x_1126_ = lean_unsigned_to_nat(0u);
v___x_1127_ = lean_string_memcmp(v_s_1120_, v___x_1125_, v___x_1126_, v___x_1126_, v___x_1122_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; 
lean_dec_ref(v_s_1120_);
v___x_1128_ = lean_box(0);
return v___x_1128_;
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
lean_inc_ref(v_s_1120_);
v___x_1129_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1129_, 0, v_s_1120_);
lean_ctor_set(v___x_1129_, 1, v___x_1126_);
lean_ctor_set(v___x_1129_, 2, v___x_1121_);
v___x_1130_ = l_String_Slice_pos_x21(v___x_1129_, v___x_1122_);
lean_dec_ref_known(v___x_1129_, 3);
v___x_1131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1131_, 0, v_s_1120_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
lean_ctor_set(v___x_1131_, 2, v___x_1121_);
v___x_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
return v___x_1132_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0(lean_object* v_s_1133_, lean_object* v_pat_1134_){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(v_s_1133_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___boxed(lean_object* v_s_1136_, lean_object* v_pat_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0(v_s_1136_, v_pat_1137_);
lean_dec_ref(v_pat_1137_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(lean_object* v_s_1139_){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; 
v___x_1140_ = lean_string_utf8_byte_size(v_s_1139_);
v___x_1141_ = lean_unsigned_to_nat(16u);
v___x_1142_ = lean_nat_dec_le(v___x_1141_, v___x_1140_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
lean_dec_ref(v_s_1139_);
v___x_1143_ = lean_box(0);
return v___x_1143_;
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1144_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = lean_string_memcmp(v_s_1139_, v___x_1144_, v___x_1145_, v___x_1145_, v___x_1141_);
if (v___x_1146_ == 0)
{
lean_object* v___x_1147_; 
lean_dec_ref(v_s_1139_);
v___x_1147_ = lean_box(0);
return v___x_1147_;
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_inc_ref(v_s_1139_);
v___x_1148_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1148_, 0, v_s_1139_);
lean_ctor_set(v___x_1148_, 1, v___x_1145_);
lean_ctor_set(v___x_1148_, 2, v___x_1140_);
v___x_1149_ = l_String_Slice_pos_x21(v___x_1148_, v___x_1141_);
lean_dec_ref_known(v___x_1148_, 3);
v___x_1150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1150_, 0, v_s_1139_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
lean_ctor_set(v___x_1150_, 2, v___x_1140_);
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1(lean_object* v_s_1152_, lean_object* v_pat_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(v_s_1152_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___boxed(lean_object* v_s_1155_, lean_object* v_pat_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1(v_s_1155_, v_pat_1156_);
lean_dec_ref(v_pat_1156_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(lean_object* v_s_1159_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1160_ = lean_string_utf8_byte_size(v_s_1159_);
v___x_1161_ = lean_unsigned_to_nat(11u);
v___x_1162_ = lean_nat_dec_le(v___x_1161_, v___x_1160_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; 
lean_dec_ref(v_s_1159_);
v___x_1163_ = lean_box(0);
return v___x_1163_;
}
else
{
lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1164_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0));
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_string_memcmp(v_s_1159_, v___x_1164_, v___x_1165_, v___x_1165_, v___x_1161_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; 
lean_dec_ref(v_s_1159_);
v___x_1167_ = lean_box(0);
return v___x_1167_;
}
else
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_inc_ref(v_s_1159_);
v___x_1168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1168_, 0, v_s_1159_);
lean_ctor_set(v___x_1168_, 1, v___x_1165_);
lean_ctor_set(v___x_1168_, 2, v___x_1160_);
v___x_1169_ = l_String_Slice_pos_x21(v___x_1168_, v___x_1161_);
lean_dec_ref_known(v___x_1168_, 3);
v___x_1170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1170_, 0, v_s_1159_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
lean_ctor_set(v___x_1170_, 2, v___x_1160_);
v___x_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
return v___x_1171_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3(lean_object* v_s_1172_, lean_object* v_pat_1173_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(v_s_1172_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___boxed(lean_object* v_s_1175_, lean_object* v_pat_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3(v_s_1175_, v_pat_1176_);
lean_dec_ref(v_pat_1176_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(lean_object* v___x_1178_, lean_object* v_ver_1179_, lean_object* v_a_1180_, lean_object* v_b_1181_){
_start:
{
uint8_t v_decide_1182_; 
v_decide_1182_ = lean_nat_dec_eq(v_a_1180_, v___x_1178_);
if (v_decide_1182_ == 0)
{
uint32_t v___x_1183_; uint32_t v___x_1184_; uint8_t v___x_1185_; 
v___x_1183_ = lean_string_utf8_get_fast(v_ver_1179_, v_a_1180_);
v___x_1184_ = 58;
v___x_1185_ = lean_uint32_dec_eq(v___x_1183_, v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_string_utf8_next_fast(v_ver_1179_, v_a_1180_);
lean_dec(v_a_1180_);
v_a_1180_ = v___x_1187_;
v_b_1181_ = v___x_1186_;
goto _start;
}
else
{
lean_object* v___x_1189_; 
v___x_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1189_, 0, v_a_1180_);
return v___x_1189_;
}
}
else
{
lean_dec(v_a_1180_);
lean_inc(v_b_1181_);
return v_b_1181_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg___boxed(lean_object* v___x_1190_, lean_object* v_ver_1191_, lean_object* v_a_1192_, lean_object* v_b_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(v___x_1190_, v_ver_1191_, v_a_1192_, v_b_1193_);
lean_dec(v_b_1193_);
lean_dec_ref(v_ver_1191_);
lean_dec(v___x_1190_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(lean_object* v___x_1195_, lean_object* v_rest_1196_, lean_object* v_a_1197_, lean_object* v_b_1198_){
_start:
{
uint8_t v_decide_1199_; 
v_decide_1199_ = lean_nat_dec_eq(v_a_1197_, v___x_1195_);
if (v_decide_1199_ == 0)
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1200_ = lean_string_utf8_next_fast(v_rest_1196_, v_a_1197_);
lean_dec(v_a_1197_);
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1202_ = lean_nat_add(v_b_1198_, v___x_1201_);
lean_dec(v_b_1198_);
v_a_1197_ = v___x_1200_;
v_b_1198_ = v___x_1202_;
goto _start;
}
else
{
lean_dec(v_a_1197_);
return v_b_1198_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg___boxed(lean_object* v___x_1204_, lean_object* v_rest_1205_, lean_object* v_a_1206_, lean_object* v_b_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(v___x_1204_, v_rest_1205_, v_a_1206_, v_b_1207_);
lean_dec_ref(v_rest_1205_);
lean_dec(v___x_1204_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofString(lean_object* v_ver_1211_){
_start:
{
lean_object* v___y_1213_; lean_object* v___y_1214_; uint8_t v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; uint8_t v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1248_; uint8_t v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1258_; uint8_t v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v_fst_1308_; lean_object* v_snd_1309_; lean_object* v___y_1331_; lean_object* v_searcher_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v_searcher_1339_ = lean_unsigned_to_nat(0u);
v___x_1340_ = lean_string_utf8_byte_size(v_ver_1211_);
v___x_1341_ = lean_box(0);
v___x_1342_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(v___x_1340_, v_ver_1211_, v_searcher_1339_, v___x_1341_);
if (lean_obj_tag(v___x_1342_) == 0)
{
v___y_1331_ = v___x_1340_;
goto v___jp_1330_;
}
else
{
lean_object* v_val_1343_; 
v_val_1343_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_val_1343_);
lean_dec_ref_known(v___x_1342_, 1);
v___y_1331_ = v_val_1343_;
goto v___jp_1330_;
}
v___jp_1212_:
{
if (v___y_1215_ == 0)
{
lean_object* v___x_1218_; 
v___x_1218_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(v___y_1217_);
if (lean_obj_tag(v___x_1218_) == 1)
{
lean_object* v_val_1219_; lean_object* v_startInclusive_1220_; lean_object* v_endExclusive_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v_val_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_val_1219_);
lean_dec_ref_known(v___x_1218_, 1);
v_startInclusive_1220_ = lean_ctor_get(v_val_1219_, 1);
v_endExclusive_1221_ = lean_ctor_get(v_val_1219_, 2);
v___x_1222_ = lean_nat_sub(v_endExclusive_1221_, v_startInclusive_1220_);
v___x_1223_ = lean_nat_dec_eq(v___x_1222_, v___y_1216_);
lean_dec(v___x_1222_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1224_ = ((lean_object*)(l_Lake_ToolchainVer_ofString___closed__0));
v___x_1225_ = lean_unsigned_to_nat(8u);
v___x_1226_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set(v___x_1226_, 1, v___y_1216_);
lean_ctor_set(v___x_1226_, 2, v___x_1225_);
v___x_1227_ = l_String_Slice_beq(v_val_1219_, v___x_1226_);
lean_dec_ref_known(v___x_1226_, 3);
lean_dec(v_val_1219_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; 
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_inc_ref(v_ver_1211_);
v___x_1228_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1228_, 0, v_ver_1211_);
lean_ctor_set(v___x_1228_, 1, v_ver_1211_);
return v___x_1228_;
}
else
{
lean_object* v___x_1229_; 
lean_dec_ref(v_ver_1211_);
v___x_1229_ = l_Lake_ToolchainVer_nightly___override(v___y_1214_, v___y_1213_);
return v___x_1229_;
}
}
else
{
lean_object* v___x_1230_; 
lean_dec(v_val_1219_);
lean_dec(v___y_1216_);
lean_dec_ref(v_ver_1211_);
v___x_1230_ = l_Lake_ToolchainVer_nightly___override(v___y_1214_, v___y_1213_);
return v___x_1230_;
}
}
else
{
lean_object* v___x_1231_; 
lean_dec(v___x_1218_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_inc_ref(v_ver_1211_);
v___x_1231_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1231_, 0, v_ver_1211_);
lean_ctor_set(v___x_1231_, 1, v_ver_1211_);
return v___x_1231_;
}
}
else
{
lean_object* v___x_1232_; 
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v_ver_1211_);
v___x_1232_ = l_Lake_ToolchainVer_nightly___override(v___y_1214_, v___y_1213_);
return v___x_1232_;
}
}
v___jp_1233_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
lean_dec_ref(v___y_1240_);
v___x_1243_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_1238_);
v___x_1244_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(v___y_1241_, v___y_1237_, v___x_1243_, v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1241_);
v___x_1245_ = lean_nat_dec_le(v___x_1244_, v___y_1236_);
lean_dec(v___y_1236_);
lean_dec(v___x_1244_);
if (v___x_1245_ == 0)
{
if (lean_obj_tag(v___y_1242_) == 0)
{
lean_object* v___x_1246_; 
lean_dec_ref(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1235_);
lean_inc_ref(v_ver_1211_);
v___x_1246_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1246_, 0, v_ver_1211_);
lean_ctor_set(v___x_1246_, 1, v_ver_1211_);
return v___x_1246_;
}
else
{
v___y_1213_ = v___y_1242_;
v___y_1214_ = v___y_1235_;
v___y_1215_ = v___y_1234_;
v___y_1216_ = v___y_1238_;
v___y_1217_ = v___y_1239_;
goto v___jp_1212_;
}
}
else
{
v___y_1213_ = v___y_1242_;
v___y_1214_ = v___y_1235_;
v___y_1215_ = v___y_1234_;
v___y_1216_ = v___y_1238_;
v___y_1217_ = v___y_1239_;
goto v___jp_1212_;
}
}
v___jp_1247_:
{
lean_object* v___x_1256_; 
v___x_1256_ = lean_box(0);
v___y_1234_ = v___y_1249_;
v___y_1235_ = v___y_1248_;
v___y_1236_ = v___y_1250_;
v___y_1237_ = v___y_1252_;
v___y_1238_ = v___y_1251_;
v___y_1239_ = v___y_1253_;
v___y_1240_ = v___y_1254_;
v___y_1241_ = v___y_1255_;
v___y_1242_ = v___x_1256_;
goto v___jp_1233_;
}
v___jp_1257_:
{
lean_object* v___x_1262_; 
lean_inc_ref(v___y_1258_);
v___x_1262_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(v___y_1258_);
if (lean_obj_tag(v___x_1262_) == 1)
{
lean_object* v_val_1263_; lean_object* v_rest_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec_ref(v___y_1258_);
v_val_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_val_1263_);
lean_dec_ref_known(v___x_1262_, 1);
v_rest_1264_ = l_String_Slice_toString(v_val_1263_);
lean_dec(v_val_1263_);
v___x_1265_ = lean_unsigned_to_nat(10u);
v___x_1266_ = lean_string_utf8_byte_size(v_rest_1264_);
lean_inc_n(v___y_1260_, 3);
lean_inc_ref_n(v_rest_1264_, 2);
v___x_1267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1267_, 0, v_rest_1264_);
lean_ctor_set(v___x_1267_, 1, v___y_1260_);
lean_ctor_set(v___x_1267_, 2, v___x_1266_);
v___x_1268_ = l_String_Slice_Pos_nextn(v___x_1267_, v___y_1260_, v___x_1265_);
lean_inc(v___x_1268_);
v___x_1269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1269_, 0, v_rest_1264_);
lean_ctor_set(v___x_1269_, 1, v___y_1260_);
lean_ctor_set(v___x_1269_, 2, v___x_1268_);
v___x_1270_ = l_String_Slice_toString(v___x_1269_);
lean_dec_ref_known(v___x_1269_, 3);
v___x_1271_ = l_Lake_Date_ofString_x3f(v___x_1270_);
if (lean_obj_tag(v___x_1271_) == 1)
{
lean_object* v_val_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v_val_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_val_1272_);
lean_dec_ref_known(v___x_1271_, 1);
v___x_1273_ = lean_unsigned_to_nat(4u);
v___x_1274_ = lean_nat_sub(v___x_1266_, v___x_1268_);
v___x_1275_ = lean_nat_dec_le(v___x_1273_, v___x_1274_);
lean_dec(v___x_1274_);
if (v___x_1275_ == 0)
{
lean_dec(v___x_1268_);
v___y_1248_ = v_val_1272_;
v___y_1249_ = v___y_1259_;
v___y_1250_ = v___x_1265_;
v___y_1251_ = v___y_1260_;
v___y_1252_ = v_rest_1264_;
v___y_1253_ = v___y_1261_;
v___y_1254_ = v___x_1267_;
v___y_1255_ = v___x_1266_;
goto v___jp_1247_;
}
else
{
lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__1));
v___x_1277_ = lean_string_memcmp(v_rest_1264_, v___x_1276_, v___x_1268_, v___y_1260_, v___x_1273_);
if (v___x_1277_ == 0)
{
lean_dec(v___x_1268_);
v___y_1248_ = v_val_1272_;
v___y_1249_ = v___y_1259_;
v___y_1250_ = v___x_1265_;
v___y_1251_ = v___y_1260_;
v___y_1252_ = v_rest_1264_;
v___y_1253_ = v___y_1261_;
v___y_1254_ = v___x_1267_;
v___y_1255_ = v___x_1266_;
goto v___jp_1247_;
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_inc(v___x_1268_);
lean_inc_ref_n(v_rest_1264_, 2);
v___x_1278_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1278_, 0, v_rest_1264_);
lean_ctor_set(v___x_1278_, 1, v___x_1268_);
lean_ctor_set(v___x_1278_, 2, v___x_1266_);
v___x_1279_ = l_String_Slice_pos_x21(v___x_1278_, v___x_1273_);
lean_dec_ref_known(v___x_1278_, 3);
v___x_1280_ = lean_nat_add(v___x_1268_, v___x_1279_);
lean_dec(v___x_1279_);
lean_dec(v___x_1268_);
v___x_1281_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1281_, 0, v_rest_1264_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
lean_ctor_set(v___x_1281_, 2, v___x_1266_);
v___x_1282_ = l_String_Slice_toString(v___x_1281_);
lean_dec_ref_known(v___x_1281_, 3);
v___x_1283_ = lean_string_utf8_byte_size(v___x_1282_);
lean_inc(v___y_1260_);
v___x_1284_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1282_);
lean_ctor_set(v___x_1284_, 1, v___y_1260_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
v___x_1285_ = l_String_Slice_toNat_x3f(v___x_1284_);
lean_dec_ref_known(v___x_1284_, 3);
v___y_1234_ = v___y_1259_;
v___y_1235_ = v_val_1272_;
v___y_1236_ = v___x_1265_;
v___y_1237_ = v_rest_1264_;
v___y_1238_ = v___y_1260_;
v___y_1239_ = v___y_1261_;
v___y_1240_ = v___x_1267_;
v___y_1241_ = v___x_1266_;
v___y_1242_ = v___x_1285_;
goto v___jp_1233_;
}
}
}
else
{
lean_object* v___x_1286_; 
lean_dec(v___x_1271_);
lean_dec(v___x_1268_);
lean_dec_ref_known(v___x_1267_, 3);
lean_dec_ref(v_rest_1264_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_inc_ref(v_ver_1211_);
v___x_1286_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1286_, 0, v_ver_1211_);
lean_ctor_set(v___x_1286_, 1, v_ver_1211_);
return v___x_1286_;
}
}
else
{
lean_object* v___x_1287_; 
lean_dec(v___x_1262_);
lean_dec(v___y_1260_);
v___x_1287_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(v___y_1258_);
if (lean_obj_tag(v___x_1287_) == 1)
{
lean_object* v_val_1288_; lean_object* v___x_1289_; 
v_val_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_val_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1289_ = l_String_Slice_toNat_x3f(v_val_1288_);
lean_dec(v_val_1288_);
if (lean_obj_tag(v___x_1289_) == 1)
{
if (v___y_1259_ == 0)
{
lean_object* v_val_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v_val_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_val_1290_);
lean_dec_ref_known(v___x_1289_, 1);
v___x_1291_ = ((lean_object*)(l_Lake_ToolchainVer_prOrigin___closed__0));
v___x_1292_ = lean_string_dec_eq(v___y_1261_, v___x_1291_);
lean_dec_ref(v___y_1261_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1293_; 
lean_dec(v_val_1290_);
lean_inc_ref(v_ver_1211_);
v___x_1293_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1293_, 0, v_ver_1211_);
lean_ctor_set(v___x_1293_, 1, v_ver_1211_);
return v___x_1293_;
}
else
{
lean_object* v___x_1294_; 
lean_dec_ref(v_ver_1211_);
v___x_1294_ = l_Lake_ToolchainVer_pr___override(v_val_1290_);
return v___x_1294_;
}
}
else
{
lean_object* v_val_1295_; lean_object* v___x_1296_; 
lean_dec_ref(v___y_1261_);
lean_dec_ref(v_ver_1211_);
v_val_1295_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_val_1295_);
lean_dec_ref_known(v___x_1289_, 1);
v___x_1296_ = l_Lake_ToolchainVer_pr___override(v_val_1295_);
return v___x_1296_;
}
}
else
{
lean_object* v___x_1297_; 
lean_dec(v___x_1289_);
lean_dec_ref(v___y_1261_);
lean_inc_ref(v_ver_1211_);
v___x_1297_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1297_, 0, v_ver_1211_);
lean_ctor_set(v___x_1297_, 1, v_ver_1211_);
return v___x_1297_;
}
}
else
{
lean_object* v___x_1298_; 
lean_dec(v___x_1287_);
lean_inc_ref(v_ver_1211_);
v___x_1298_ = l_Lake_StdVer_parse(v_ver_1211_);
if (lean_obj_tag(v___x_1298_) == 1)
{
if (v___y_1259_ == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v___x_1300_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1301_ = lean_string_dec_eq(v___y_1261_, v___x_1300_);
lean_dec_ref(v___y_1261_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; 
lean_dec(v_a_1299_);
lean_inc_ref(v_ver_1211_);
v___x_1302_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1302_, 0, v_ver_1211_);
lean_ctor_set(v___x_1302_, 1, v_ver_1211_);
return v___x_1302_;
}
else
{
lean_object* v___x_1303_; 
lean_dec_ref(v_ver_1211_);
v___x_1303_ = l_Lake_ToolchainVer_release___override(v_a_1299_);
return v___x_1303_;
}
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1305_; 
lean_dec_ref(v___y_1261_);
lean_dec_ref(v_ver_1211_);
v_a_1304_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1298_, 1);
v___x_1305_ = l_Lake_ToolchainVer_release___override(v_a_1304_);
return v___x_1305_;
}
}
else
{
lean_object* v___x_1306_; 
lean_dec_ref(v___x_1298_);
lean_dec_ref(v___y_1261_);
lean_inc_ref(v_ver_1211_);
v___x_1306_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1306_, 0, v_ver_1211_);
lean_ctor_set(v___x_1306_, 1, v_ver_1211_);
return v___x_1306_;
}
}
}
}
v___jp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; uint8_t v_noOrigin_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; 
v___x_1310_ = lean_string_utf8_byte_size(v_fst_1308_);
v___x_1311_ = lean_unsigned_to_nat(0u);
v_noOrigin_1312_ = lean_nat_dec_eq(v___x_1310_, v___x_1311_);
v___x_1313_ = lean_string_utf8_byte_size(v_snd_1309_);
v___x_1314_ = lean_unsigned_to_nat(1u);
v___x_1315_ = lean_nat_dec_le(v___x_1314_, v___x_1313_);
if (v___x_1315_ == 0)
{
v___y_1258_ = v_snd_1309_;
v___y_1259_ = v_noOrigin_1312_;
v___y_1260_ = v___x_1311_;
v___y_1261_ = v_fst_1308_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = ((lean_object*)(l_Lake_ToolchainVer_ofString___closed__1));
v___x_1317_ = lean_string_memcmp(v_snd_1309_, v___x_1316_, v___x_1311_, v___x_1311_, v___x_1314_);
if (v___x_1317_ == 0)
{
v___y_1258_ = v_snd_1309_;
v___y_1259_ = v_noOrigin_1312_;
v___y_1260_ = v___x_1311_;
v___y_1261_ = v_fst_1308_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_inc_ref(v_snd_1309_);
v___x_1318_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1318_, 0, v_snd_1309_);
lean_ctor_set(v___x_1318_, 1, v___x_1311_);
lean_ctor_set(v___x_1318_, 2, v___x_1313_);
v___x_1319_ = l_String_Slice_Pos_nextn(v___x_1318_, v___x_1311_, v___x_1314_);
lean_dec_ref_known(v___x_1318_, 3);
v___x_1320_ = lean_string_utf8_extract_fast(v_snd_1309_, v___x_1319_, v___x_1313_);
lean_dec(v___x_1319_);
lean_dec_ref(v_snd_1309_);
v___x_1321_ = l_Lake_StdVer_parse(v___x_1320_);
if (lean_obj_tag(v___x_1321_) == 1)
{
if (v_noOrigin_1312_ == 0)
{
lean_object* v_a_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
lean_dec_ref_known(v___x_1321_, 1);
v___x_1323_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1324_ = lean_string_dec_eq(v_fst_1308_, v___x_1323_);
lean_dec_ref(v_fst_1308_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; 
lean_dec(v_a_1322_);
lean_inc_ref(v_ver_1211_);
v___x_1325_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1325_, 0, v_ver_1211_);
lean_ctor_set(v___x_1325_, 1, v_ver_1211_);
return v___x_1325_;
}
else
{
lean_object* v___x_1326_; 
lean_dec_ref(v_ver_1211_);
v___x_1326_ = l_Lake_ToolchainVer_release___override(v_a_1322_);
return v___x_1326_;
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v_fst_1308_);
lean_dec_ref(v_ver_1211_);
v_a_1327_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1321_, 1);
v___x_1328_ = l_Lake_ToolchainVer_release___override(v_a_1327_);
return v___x_1328_;
}
}
else
{
lean_object* v___x_1329_; 
lean_dec_ref(v___x_1321_);
lean_dec_ref(v_fst_1308_);
lean_inc_ref(v_ver_1211_);
v___x_1329_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1329_, 0, v_ver_1211_);
lean_ctor_set(v___x_1329_, 1, v_ver_1211_);
return v___x_1329_;
}
}
}
}
v___jp_1330_:
{
lean_object* v___x_1332_; uint8_t v_decide_1333_; 
v___x_1332_ = lean_string_utf8_byte_size(v_ver_1211_);
v_decide_1333_ = lean_nat_dec_eq(v___y_1331_, v___x_1332_);
if (v_decide_1333_ == 0)
{
lean_object* v_pos_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_pos_1334_ = lean_string_utf8_next_fast(v_ver_1211_, v___y_1331_);
v___x_1335_ = lean_unsigned_to_nat(0u);
v___x_1336_ = lean_string_utf8_extract_fast(v_ver_1211_, v___x_1335_, v___y_1331_);
lean_dec(v___y_1331_);
v___x_1337_ = lean_string_utf8_extract_fast(v_ver_1211_, v_pos_1334_, v___x_1332_);
v_fst_1308_ = v___x_1336_;
v_snd_1309_ = v___x_1337_;
goto v___jp_1307_;
}
else
{
lean_object* v___x_1338_; 
lean_dec(v___y_1331_);
v___x_1338_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
lean_inc_ref(v_ver_1211_);
v_fst_1308_ = v___x_1338_;
v_snd_1309_ = v_ver_1211_;
goto v___jp_1307_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2(lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v_rest_1346_, lean_object* v_inst_1347_, lean_object* v_R_1348_, lean_object* v_a_1349_, lean_object* v_b_1350_, lean_object* v_c_1351_){
_start:
{
lean_object* v___x_1352_; 
v___x_1352_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(v___x_1344_, v_rest_1346_, v_a_1349_, v_b_1350_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___boxed(lean_object* v___x_1353_, lean_object* v___x_1354_, lean_object* v_rest_1355_, lean_object* v_inst_1356_, lean_object* v_R_1357_, lean_object* v_a_1358_, lean_object* v_b_1359_, lean_object* v_c_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2(v___x_1353_, v___x_1354_, v_rest_1355_, v_inst_1356_, v_R_1357_, v_a_1358_, v_b_1359_, v_c_1360_);
lean_dec_ref(v_rest_1355_);
lean_dec_ref(v___x_1354_);
lean_dec(v___x_1353_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4(lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v_ver_1364_, lean_object* v_inst_1365_, lean_object* v_R_1366_, lean_object* v_a_1367_, lean_object* v_b_1368_, lean_object* v_c_1369_){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(v___x_1362_, v_ver_1364_, v_a_1367_, v_b_1368_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___boxed(lean_object* v___x_1371_, lean_object* v___x_1372_, lean_object* v_ver_1373_, lean_object* v_inst_1374_, lean_object* v_R_1375_, lean_object* v_a_1376_, lean_object* v_b_1377_, lean_object* v_c_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4(v___x_1371_, v___x_1372_, v_ver_1373_, v_inst_1374_, v_R_1375_, v_a_1376_, v_b_1377_, v_c_1378_);
lean_dec(v_b_1377_);
lean_dec_ref(v_ver_1373_);
lean_dec_ref(v___x_1372_);
lean_dec(v___x_1371_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object* v_toolchainFile_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_IO_FS_readFile(v_toolchainFile_1380_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1400_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1385_ = v___x_1382_;
v_isShared_1386_ = v_isSharedCheck_1400_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1382_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1400_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v_str_1391_; lean_object* v_startInclusive_1392_; lean_object* v_endExclusive_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_string_utf8_byte_size(v_a_1383_);
v___x_1389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1389_, 0, v_a_1383_);
lean_ctor_set(v___x_1389_, 1, v___x_1387_);
lean_ctor_set(v___x_1389_, 2, v___x_1388_);
v___x_1390_ = l_String_Slice_trimAscii(v___x_1389_);
v_str_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc_ref(v_str_1391_);
v_startInclusive_1392_ = lean_ctor_get(v___x_1390_, 1);
lean_inc(v_startInclusive_1392_);
v_endExclusive_1393_ = lean_ctor_get(v___x_1390_, 2);
lean_inc(v_endExclusive_1393_);
lean_dec_ref(v___x_1390_);
v___x_1394_ = lean_string_utf8_extract_fast(v_str_1391_, v_startInclusive_1392_, v_endExclusive_1393_);
lean_dec(v_endExclusive_1393_);
lean_dec(v_startInclusive_1392_);
lean_dec_ref(v_str_1391_);
v___x_1395_ = l_Lake_ToolchainVer_ofString(v___x_1394_);
v___x_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1396_);
v___x_1398_ = v___x_1385_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1412_; 
v_a_1401_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1403_ = v___x_1382_;
v_isShared_1404_ = v_isSharedCheck_1412_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1382_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1412_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
if (lean_obj_tag(v_a_1401_) == 11)
{
lean_object* v___x_1405_; lean_object* v___x_1407_; 
lean_dec_ref_known(v_a_1401_, 2);
v___x_1405_ = lean_box(0);
if (v_isShared_1404_ == 0)
{
lean_ctor_set_tag(v___x_1403_, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1405_);
v___x_1407_ = v___x_1403_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
else
{
lean_object* v___x_1410_; 
if (v_isShared_1404_ == 0)
{
v___x_1410_ = v___x_1403_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1401_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f___boxed(lean_object* v_toolchainFile_1413_, lean_object* v_a_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lake_ToolchainVer_ofFile_x3f(v_toolchainFile_1413_);
lean_dec_ref(v_toolchainFile_1413_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f(lean_object* v_dir_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1418_ = ((lean_object*)(l_Lake_toolchainFileName___closed__0));
v___x_1419_ = l_System_FilePath_join(v_dir_1416_, v___x_1418_);
v___x_1420_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_1419_);
lean_dec_ref(v___x_1419_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f___boxed(lean_object* v_dir_1421_, lean_object* v_a_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_Lake_ToolchainVer_ofDir_x3f(v_dir_1421_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0(lean_object* v_x_1426_){
_start:
{
lean_object* v_toString_1427_; lean_object* v___x_1428_; 
v_toString_1427_ = lean_ctor_get(v_x_1426_, 0);
lean_inc_ref(v_toString_1427_);
v___x_1428_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1428_, 0, v_toString_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0___boxed(lean_object* v_x_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lake_ToolchainVer_instToJson___lam__0(v_x_1429_);
lean_dec_ref(v_x_1429_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instFromJson___lam__0(lean_object* v_x_1433_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_Json_getStr_x3f(v_x_1433_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1451_; 
v_a_1443_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1445_ = v___x_1434_;
v_isShared_1446_ = v_isSharedCheck_1451_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1434_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1451_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1447_ = l_Lake_ToolchainVer_ofString(v_a_1443_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 0, v___x_1447_);
v___x_1449_ = v___x_1445_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_blt(lean_object* v_a_1454_, lean_object* v_b_1455_){
_start:
{
switch(lean_obj_tag(v_a_1454_))
{
case 0:
{
if (lean_obj_tag(v_b_1455_) == 0)
{
lean_object* v_ver_1456_; lean_object* v_ver_1457_; uint8_t v___x_1458_; 
v_ver_1456_ = lean_ctor_get(v_a_1454_, 1);
v_ver_1457_ = lean_ctor_get(v_b_1455_, 1);
v___x_1458_ = l_Lake_StdVer_compare(v_ver_1456_, v_ver_1457_);
if (v___x_1458_ == 0)
{
uint8_t v___x_1459_; 
v___x_1459_ = 1;
return v___x_1459_;
}
else
{
uint8_t v___x_1460_; 
v___x_1460_ = 0;
return v___x_1460_;
}
}
else
{
uint8_t v___x_1461_; 
v___x_1461_ = 0;
return v___x_1461_;
}
}
case 1:
{
if (lean_obj_tag(v_b_1455_) == 1)
{
lean_object* v_date_1462_; lean_object* v_rev_1463_; lean_object* v_date_1464_; lean_object* v_rev_1465_; lean_object* v___y_1467_; uint8_t v___x_1472_; 
v_date_1462_ = lean_ctor_get(v_a_1454_, 1);
v_rev_1463_ = lean_ctor_get(v_a_1454_, 2);
v_date_1464_ = lean_ctor_get(v_b_1455_, 1);
v_rev_1465_ = lean_ctor_get(v_b_1455_, 2);
v___x_1472_ = l_Lake_instOrdDate_ord(v_date_1462_, v_date_1464_);
if (v___x_1472_ == 0)
{
uint8_t v___x_1473_; 
v___x_1473_ = 1;
return v___x_1473_;
}
else
{
uint8_t v___x_1474_; 
v___x_1474_ = l_Lake_instDecidableEqDate_decEq(v_date_1462_, v_date_1464_);
if (v___x_1474_ == 0)
{
return v___x_1474_;
}
else
{
if (lean_obj_tag(v_rev_1463_) == 0)
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_unsigned_to_nat(0u);
v___y_1467_ = v___x_1475_;
goto v___jp_1466_;
}
else
{
lean_object* v_val_1476_; 
v_val_1476_ = lean_ctor_get(v_rev_1463_, 0);
v___y_1467_ = v_val_1476_;
goto v___jp_1466_;
}
}
}
v___jp_1466_:
{
if (lean_obj_tag(v_rev_1465_) == 0)
{
lean_object* v___x_1468_; uint8_t v___x_1469_; 
v___x_1468_ = lean_unsigned_to_nat(0u);
v___x_1469_ = lean_nat_dec_lt(v___y_1467_, v___x_1468_);
return v___x_1469_;
}
else
{
lean_object* v_val_1470_; uint8_t v___x_1471_; 
v_val_1470_ = lean_ctor_get(v_rev_1465_, 0);
v___x_1471_ = lean_nat_dec_lt(v___y_1467_, v_val_1470_);
return v___x_1471_;
}
}
}
else
{
uint8_t v___x_1477_; 
v___x_1477_ = 0;
return v___x_1477_;
}
}
default: 
{
uint8_t v___x_1478_; 
v___x_1478_ = 0;
return v___x_1478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_blt___boxed(lean_object* v_a_1479_, lean_object* v_b_1480_){
_start:
{
uint8_t v_res_1481_; lean_object* v_r_1482_; 
v_res_1481_ = l_Lake_ToolchainVer_blt(v_a_1479_, v_b_1480_);
lean_dec_ref(v_b_1480_);
lean_dec_ref(v_a_1479_);
v_r_1482_ = lean_box(v_res_1481_);
return v_r_1482_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_instLT(void){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_box(0);
return v___x_1483_;
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLt(lean_object* v_a_1484_, lean_object* v_b_1485_){
_start:
{
uint8_t v___x_1486_; 
v___x_1486_ = l_Lake_ToolchainVer_blt(v_a_1484_, v_b_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLt___boxed(lean_object* v_a_1487_, lean_object* v_b_1488_){
_start:
{
uint8_t v_res_1489_; lean_object* v_r_1490_; 
v_res_1489_ = l_Lake_ToolchainVer_decLt(v_a_1487_, v_b_1488_);
lean_dec_ref(v_b_1488_);
lean_dec_ref(v_a_1487_);
v_r_1490_ = lean_box(v_res_1489_);
return v_r_1490_;
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_ble(lean_object* v_a_1491_, lean_object* v_b_1492_){
_start:
{
switch(lean_obj_tag(v_a_1491_))
{
case 0:
{
if (lean_obj_tag(v_b_1492_) == 0)
{
lean_object* v_ver_1493_; lean_object* v_ver_1494_; uint8_t v___x_1495_; 
v_ver_1493_ = lean_ctor_get(v_a_1491_, 1);
v_ver_1494_ = lean_ctor_get(v_b_1492_, 1);
v___x_1495_ = l_Lake_StdVer_compare(v_ver_1493_, v_ver_1494_);
if (v___x_1495_ == 2)
{
uint8_t v___x_1496_; 
v___x_1496_ = 0;
return v___x_1496_;
}
else
{
uint8_t v___x_1497_; 
v___x_1497_ = 1;
return v___x_1497_;
}
}
else
{
uint8_t v___x_1498_; 
v___x_1498_ = 0;
return v___x_1498_;
}
}
case 1:
{
if (lean_obj_tag(v_b_1492_) == 1)
{
lean_object* v_date_1499_; lean_object* v_rev_1500_; lean_object* v_date_1501_; lean_object* v_rev_1502_; lean_object* v___y_1504_; uint8_t v___x_1509_; 
v_date_1499_ = lean_ctor_get(v_a_1491_, 1);
v_rev_1500_ = lean_ctor_get(v_a_1491_, 2);
v_date_1501_ = lean_ctor_get(v_b_1492_, 1);
v_rev_1502_ = lean_ctor_get(v_b_1492_, 2);
v___x_1509_ = l_Lake_instOrdDate_ord(v_date_1499_, v_date_1501_);
if (v___x_1509_ == 0)
{
uint8_t v___x_1510_; 
v___x_1510_ = 1;
return v___x_1510_;
}
else
{
uint8_t v___x_1511_; 
v___x_1511_ = l_Lake_instDecidableEqDate_decEq(v_date_1499_, v_date_1501_);
if (v___x_1511_ == 0)
{
return v___x_1511_;
}
else
{
if (lean_obj_tag(v_rev_1500_) == 0)
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_unsigned_to_nat(0u);
v___y_1504_ = v___x_1512_;
goto v___jp_1503_;
}
else
{
lean_object* v_val_1513_; 
v_val_1513_ = lean_ctor_get(v_rev_1500_, 0);
v___y_1504_ = v_val_1513_;
goto v___jp_1503_;
}
}
}
v___jp_1503_:
{
if (lean_obj_tag(v_rev_1502_) == 0)
{
lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1505_ = lean_unsigned_to_nat(0u);
v___x_1506_ = lean_nat_dec_le(v___y_1504_, v___x_1505_);
return v___x_1506_;
}
else
{
lean_object* v_val_1507_; uint8_t v___x_1508_; 
v_val_1507_ = lean_ctor_get(v_rev_1502_, 0);
v___x_1508_ = lean_nat_dec_le(v___y_1504_, v_val_1507_);
return v___x_1508_;
}
}
}
else
{
uint8_t v___x_1514_; 
v___x_1514_ = 0;
return v___x_1514_;
}
}
case 2:
{
if (lean_obj_tag(v_b_1492_) == 2)
{
lean_object* v_n_1515_; lean_object* v_n_1516_; uint8_t v___x_1517_; 
v_n_1515_ = lean_ctor_get(v_a_1491_, 1);
v_n_1516_ = lean_ctor_get(v_b_1492_, 1);
v___x_1517_ = lean_nat_dec_eq(v_n_1515_, v_n_1516_);
return v___x_1517_;
}
else
{
uint8_t v___x_1518_; 
v___x_1518_ = 0;
return v___x_1518_;
}
}
default: 
{
if (lean_obj_tag(v_b_1492_) == 3)
{
lean_object* v_v_1519_; lean_object* v_v_1520_; uint8_t v___x_1521_; 
v_v_1519_ = lean_ctor_get(v_a_1491_, 1);
v_v_1520_ = lean_ctor_get(v_b_1492_, 1);
v___x_1521_ = lean_string_dec_eq(v_v_1519_, v_v_1520_);
return v___x_1521_;
}
else
{
uint8_t v___x_1522_; 
v___x_1522_ = 0;
return v___x_1522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ble___boxed(lean_object* v_a_1523_, lean_object* v_b_1524_){
_start:
{
uint8_t v_res_1525_; lean_object* v_r_1526_; 
v_res_1525_ = l_Lake_ToolchainVer_ble(v_a_1523_, v_b_1524_);
lean_dec_ref(v_b_1524_);
lean_dec_ref(v_a_1523_);
v_r_1526_ = lean_box(v_res_1525_);
return v_r_1526_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_instLE(void){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_box(0);
return v___x_1527_;
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLe(lean_object* v_a_1528_, lean_object* v_b_1529_){
_start:
{
uint8_t v___x_1530_; 
v___x_1530_ = l_Lake_ToolchainVer_ble(v_a_1528_, v_b_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLe___boxed(lean_object* v_a_1531_, lean_object* v_b_1532_){
_start:
{
uint8_t v_res_1533_; lean_object* v_r_1534_; 
v_res_1533_ = l_Lake_ToolchainVer_decLe(v_a_1531_, v_b_1532_);
lean_dec_ref(v_b_1532_);
lean_dec_ref(v_a_1531_);
v_r_1534_ = lean_box(v_res_1533_);
return v_r_1534_;
}
}
LEAN_EXPORT lean_object* l_Lake_normalizeToolchain(lean_object* v_s_1535_){
_start:
{
lean_object* v___x_1536_; lean_object* v_toString_1537_; 
v___x_1536_ = l_Lake_ToolchainVer_ofString(v_s_1535_);
v_toString_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc_ref(v_toString_1537_);
lean_dec_ref(v___x_1536_);
return v_toString_1537_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecodeVersionToolchainVer___lam__0(lean_object* v_x_1542_){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = l_Lake_ToolchainVer_ofString(v_x_1542_);
v___x_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx___impl(uint8_t v_x_1547_){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_box(v_x_1547_);
v___x_1549_ = lean_obj_tag_nat(v___x_1548_);
lean_dec(v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx___impl___boxed(lean_object* v_x_1550_){
_start:
{
uint8_t v_x_4__boxed_1551_; lean_object* v_res_1552_; 
v_x_4__boxed_1551_ = lean_unbox(v_x_1550_);
v_res_1552_ = l_Lake_ComparatorOp_ctorIdx___impl(v_x_4__boxed_1551_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg(lean_object* v_k_1553_){
_start:
{
lean_inc(v_k_1553_);
return v_k_1553_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg___boxed(lean_object* v_k_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lake_ComparatorOp_ctorElim___redArg(v_k_1554_);
lean_dec(v_k_1554_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim(lean_object* v_motive_1556_, lean_object* v_ctorIdx_1557_, uint8_t v_t_1558_, lean_object* v_h_1559_, lean_object* v_k_1560_){
_start:
{
lean_inc(v_k_1560_);
return v_k_1560_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___boxed(lean_object* v_motive_1561_, lean_object* v_ctorIdx_1562_, lean_object* v_t_1563_, lean_object* v_h_1564_, lean_object* v_k_1565_){
_start:
{
uint8_t v_t_boxed_1566_; lean_object* v_res_1567_; 
v_t_boxed_1566_ = lean_unbox(v_t_1563_);
v_res_1567_ = l_Lake_ComparatorOp_ctorElim(v_motive_1561_, v_ctorIdx_1562_, v_t_boxed_1566_, v_h_1564_, v_k_1565_);
lean_dec(v_k_1565_);
lean_dec(v_ctorIdx_1562_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg(lean_object* v_lt_1568_){
_start:
{
lean_inc(v_lt_1568_);
return v_lt_1568_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg___boxed(lean_object* v_lt_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lake_ComparatorOp_lt_elim___redArg(v_lt_1569_);
lean_dec(v_lt_1569_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim(lean_object* v_motive_1571_, uint8_t v_t_1572_, lean_object* v_h_1573_, lean_object* v_lt_1574_){
_start:
{
lean_inc(v_lt_1574_);
return v_lt_1574_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___boxed(lean_object* v_motive_1575_, lean_object* v_t_1576_, lean_object* v_h_1577_, lean_object* v_lt_1578_){
_start:
{
uint8_t v_t_boxed_1579_; lean_object* v_res_1580_; 
v_t_boxed_1579_ = lean_unbox(v_t_1576_);
v_res_1580_ = l_Lake_ComparatorOp_lt_elim(v_motive_1575_, v_t_boxed_1579_, v_h_1577_, v_lt_1578_);
lean_dec(v_lt_1578_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg(lean_object* v_le_1581_){
_start:
{
lean_inc(v_le_1581_);
return v_le_1581_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg___boxed(lean_object* v_le_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lake_ComparatorOp_le_elim___redArg(v_le_1582_);
lean_dec(v_le_1582_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim(lean_object* v_motive_1584_, uint8_t v_t_1585_, lean_object* v_h_1586_, lean_object* v_le_1587_){
_start:
{
lean_inc(v_le_1587_);
return v_le_1587_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___boxed(lean_object* v_motive_1588_, lean_object* v_t_1589_, lean_object* v_h_1590_, lean_object* v_le_1591_){
_start:
{
uint8_t v_t_boxed_1592_; lean_object* v_res_1593_; 
v_t_boxed_1592_ = lean_unbox(v_t_1589_);
v_res_1593_ = l_Lake_ComparatorOp_le_elim(v_motive_1588_, v_t_boxed_1592_, v_h_1590_, v_le_1591_);
lean_dec(v_le_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg(lean_object* v_gt_1594_){
_start:
{
lean_inc(v_gt_1594_);
return v_gt_1594_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg___boxed(lean_object* v_gt_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Lake_ComparatorOp_gt_elim___redArg(v_gt_1595_);
lean_dec(v_gt_1595_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim(lean_object* v_motive_1597_, uint8_t v_t_1598_, lean_object* v_h_1599_, lean_object* v_gt_1600_){
_start:
{
lean_inc(v_gt_1600_);
return v_gt_1600_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___boxed(lean_object* v_motive_1601_, lean_object* v_t_1602_, lean_object* v_h_1603_, lean_object* v_gt_1604_){
_start:
{
uint8_t v_t_boxed_1605_; lean_object* v_res_1606_; 
v_t_boxed_1605_ = lean_unbox(v_t_1602_);
v_res_1606_ = l_Lake_ComparatorOp_gt_elim(v_motive_1601_, v_t_boxed_1605_, v_h_1603_, v_gt_1604_);
lean_dec(v_gt_1604_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg(lean_object* v_ge_1607_){
_start:
{
lean_inc(v_ge_1607_);
return v_ge_1607_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg___boxed(lean_object* v_ge_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lake_ComparatorOp_ge_elim___redArg(v_ge_1608_);
lean_dec(v_ge_1608_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim(lean_object* v_motive_1610_, uint8_t v_t_1611_, lean_object* v_h_1612_, lean_object* v_ge_1613_){
_start:
{
lean_inc(v_ge_1613_);
return v_ge_1613_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___boxed(lean_object* v_motive_1614_, lean_object* v_t_1615_, lean_object* v_h_1616_, lean_object* v_ge_1617_){
_start:
{
uint8_t v_t_boxed_1618_; lean_object* v_res_1619_; 
v_t_boxed_1618_ = lean_unbox(v_t_1615_);
v_res_1619_ = l_Lake_ComparatorOp_ge_elim(v_motive_1614_, v_t_boxed_1618_, v_h_1616_, v_ge_1617_);
lean_dec(v_ge_1617_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg(lean_object* v_eq_1620_){
_start:
{
lean_inc(v_eq_1620_);
return v_eq_1620_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg___boxed(lean_object* v_eq_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lake_ComparatorOp_eq_elim___redArg(v_eq_1621_);
lean_dec(v_eq_1621_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim(lean_object* v_motive_1623_, uint8_t v_t_1624_, lean_object* v_h_1625_, lean_object* v_eq_1626_){
_start:
{
lean_inc(v_eq_1626_);
return v_eq_1626_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___boxed(lean_object* v_motive_1627_, lean_object* v_t_1628_, lean_object* v_h_1629_, lean_object* v_eq_1630_){
_start:
{
uint8_t v_t_boxed_1631_; lean_object* v_res_1632_; 
v_t_boxed_1631_ = lean_unbox(v_t_1628_);
v_res_1632_ = l_Lake_ComparatorOp_eq_elim(v_motive_1627_, v_t_boxed_1631_, v_h_1629_, v_eq_1630_);
lean_dec(v_eq_1630_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg(lean_object* v_ne_1633_){
_start:
{
lean_inc(v_ne_1633_);
return v_ne_1633_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg___boxed(lean_object* v_ne_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lake_ComparatorOp_ne_elim___redArg(v_ne_1634_);
lean_dec(v_ne_1634_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim(lean_object* v_motive_1636_, uint8_t v_t_1637_, lean_object* v_h_1638_, lean_object* v_ne_1639_){
_start:
{
lean_inc(v_ne_1639_);
return v_ne_1639_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___boxed(lean_object* v_motive_1640_, lean_object* v_t_1641_, lean_object* v_h_1642_, lean_object* v_ne_1643_){
_start:
{
uint8_t v_t_boxed_1644_; lean_object* v_res_1645_; 
v_t_boxed_1644_ = lean_unbox(v_t_1641_);
v_res_1645_ = l_Lake_ComparatorOp_ne_elim(v_motive_1640_, v_t_boxed_1644_, v_h_1642_, v_ne_1643_);
lean_dec(v_ne_1643_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr(uint8_t v_x_1664_, lean_object* v_prec_1665_){
_start:
{
lean_object* v___y_1667_; lean_object* v___y_1674_; lean_object* v___y_1681_; lean_object* v___y_1688_; lean_object* v___y_1695_; lean_object* v___y_1702_; 
switch(v_x_1664_)
{
case 0:
{
lean_object* v___x_1708_; uint8_t v___x_1709_; 
v___x_1708_ = lean_unsigned_to_nat(1024u);
v___x_1709_ = lean_nat_dec_le(v___x_1708_, v_prec_1665_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; 
v___x_1710_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1667_ = v___x_1710_;
goto v___jp_1666_;
}
else
{
lean_object* v___x_1711_; 
v___x_1711_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1667_ = v___x_1711_;
goto v___jp_1666_;
}
}
case 1:
{
lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = lean_unsigned_to_nat(1024u);
v___x_1713_ = lean_nat_dec_le(v___x_1712_, v_prec_1665_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1674_ = v___x_1714_;
goto v___jp_1673_;
}
else
{
lean_object* v___x_1715_; 
v___x_1715_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1674_ = v___x_1715_;
goto v___jp_1673_;
}
}
case 2:
{
lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1716_ = lean_unsigned_to_nat(1024u);
v___x_1717_ = lean_nat_dec_le(v___x_1716_, v_prec_1665_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1681_ = v___x_1718_;
goto v___jp_1680_;
}
else
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1681_ = v___x_1719_;
goto v___jp_1680_;
}
}
case 3:
{
lean_object* v___x_1720_; uint8_t v___x_1721_; 
v___x_1720_ = lean_unsigned_to_nat(1024u);
v___x_1721_ = lean_nat_dec_le(v___x_1720_, v_prec_1665_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1722_; 
v___x_1722_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1688_ = v___x_1722_;
goto v___jp_1687_;
}
else
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1688_ = v___x_1723_;
goto v___jp_1687_;
}
}
case 4:
{
lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1724_ = lean_unsigned_to_nat(1024u);
v___x_1725_ = lean_nat_dec_le(v___x_1724_, v_prec_1665_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1695_ = v___x_1726_;
goto v___jp_1694_;
}
else
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1695_ = v___x_1727_;
goto v___jp_1694_;
}
}
default: 
{
lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1728_ = lean_unsigned_to_nat(1024u);
v___x_1729_ = lean_nat_dec_le(v___x_1728_, v_prec_1665_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1702_ = v___x_1730_;
goto v___jp_1701_;
}
else
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1702_ = v___x_1731_;
goto v___jp_1701_;
}
}
}
v___jp_1666_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1668_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__1));
lean_inc(v___y_1667_);
v___x_1669_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___y_1667_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = 0;
v___x_1671_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set_uint8(v___x_1671_, sizeof(void*)*1, v___x_1670_);
v___x_1672_ = l_Repr_addAppParen(v___x_1671_, v_prec_1665_);
return v___x_1672_;
}
v___jp_1673_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1675_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__3));
lean_inc(v___y_1674_);
v___x_1676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___y_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = 0;
v___x_1678_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1678_, 0, v___x_1676_);
lean_ctor_set_uint8(v___x_1678_, sizeof(void*)*1, v___x_1677_);
v___x_1679_ = l_Repr_addAppParen(v___x_1678_, v_prec_1665_);
return v___x_1679_;
}
v___jp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; uint8_t v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1682_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__5));
lean_inc(v___y_1681_);
v___x_1683_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___y_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = 0;
v___x_1685_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1685_, 0, v___x_1683_);
lean_ctor_set_uint8(v___x_1685_, sizeof(void*)*1, v___x_1684_);
v___x_1686_ = l_Repr_addAppParen(v___x_1685_, v_prec_1665_);
return v___x_1686_;
}
v___jp_1687_:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1689_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__7));
lean_inc(v___y_1688_);
v___x_1690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___y_1688_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
v___x_1691_ = 0;
v___x_1692_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*1, v___x_1691_);
v___x_1693_ = l_Repr_addAppParen(v___x_1692_, v_prec_1665_);
return v___x_1693_;
}
v___jp_1694_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1696_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__9));
lean_inc(v___y_1695_);
v___x_1697_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___y_1695_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
v___x_1698_ = 0;
v___x_1699_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1699_, 0, v___x_1697_);
lean_ctor_set_uint8(v___x_1699_, sizeof(void*)*1, v___x_1698_);
v___x_1700_ = l_Repr_addAppParen(v___x_1699_, v_prec_1665_);
return v___x_1700_;
}
v___jp_1701_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1703_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__11));
lean_inc(v___y_1702_);
v___x_1704_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___y_1702_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = 0;
v___x_1706_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1706_, 0, v___x_1704_);
lean_ctor_set_uint8(v___x_1706_, sizeof(void*)*1, v___x_1705_);
v___x_1707_ = l_Repr_addAppParen(v___x_1706_, v_prec_1665_);
return v___x_1707_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr___boxed(lean_object* v_x_1732_, lean_object* v_prec_1733_){
_start:
{
uint8_t v_x_497__boxed_1734_; lean_object* v_res_1735_; 
v_x_497__boxed_1734_ = lean_unbox(v_x_1732_);
v_res_1735_ = l_Lake_instReprComparatorOp_repr(v_x_497__boxed_1734_, v_prec_1733_);
lean_dec(v_prec_1733_);
return v_res_1735_;
}
}
static uint8_t _init_l_Lake_instInhabitedComparatorOp_default(void){
_start:
{
uint8_t v___x_1738_; 
v___x_1738_ = 0;
return v___x_1738_;
}
}
static uint8_t _init_l_Lake_instInhabitedComparatorOp(void){
_start:
{
uint8_t v___x_1739_; 
v___x_1739_ = 0;
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(lean_object* v_sym_1740_, uint8_t v_cmp_1741_, lean_object* v_t_1742_){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1743_ = lean_box(v_cmp_1741_);
lean_inc_ref(v_sym_1740_);
v___x_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1744_, 0, v_sym_1740_);
lean_ctor_set(v___x_1744_, 1, v___x_1743_);
v___x_1745_ = l_Lean_Data_Trie_insert___redArg(v_t_1742_, v_sym_1740_, v___x_1744_);
lean_dec_ref(v_sym_1740_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0___boxed(lean_object* v_sym_1746_, lean_object* v_cmp_1747_, lean_object* v_t_1748_){
_start:
{
uint8_t v_cmp_boxed_1749_; lean_object* v_res_1750_; 
v_cmp_boxed_1749_ = lean_unbox(v_cmp_1747_);
v_res_1750_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v_sym_1746_, v_cmp_boxed_1749_, v_t_1748_);
return v_res_1750_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9(void){
_start:
{
lean_object* v___x_1760_; 
v___x_1760_ = l_Lean_Data_Trie_empty___redArg();
return v___x_1760_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10(void){
_start:
{
lean_object* v___x_1761_; uint8_t v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1761_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9);
v___x_1762_ = 0;
v___x_1763_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8));
v___x_1764_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1763_, v___x_1762_, v___x_1761_);
return v___x_1764_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11(void){
_start:
{
lean_object* v___x_1765_; uint8_t v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1765_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10);
v___x_1766_ = 1;
v___x_1767_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7));
v___x_1768_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1767_, v___x_1766_, v___x_1765_);
return v___x_1768_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12(void){
_start:
{
lean_object* v___x_1769_; uint8_t v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1769_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11);
v___x_1770_ = 1;
v___x_1771_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6));
v___x_1772_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1771_, v___x_1770_, v___x_1769_);
return v___x_1772_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13(void){
_start:
{
lean_object* v___x_1773_; uint8_t v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1773_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12);
v___x_1774_ = 2;
v___x_1775_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5));
v___x_1776_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1775_, v___x_1774_, v___x_1773_);
return v___x_1776_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14(void){
_start:
{
lean_object* v___x_1777_; uint8_t v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1777_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13);
v___x_1778_ = 3;
v___x_1779_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4));
v___x_1780_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1779_, v___x_1778_, v___x_1777_);
return v___x_1780_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15(void){
_start:
{
lean_object* v___x_1781_; uint8_t v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1781_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14);
v___x_1782_ = 3;
v___x_1783_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3));
v___x_1784_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1783_, v___x_1782_, v___x_1781_);
return v___x_1784_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16(void){
_start:
{
lean_object* v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1785_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15);
v___x_1786_ = 4;
v___x_1787_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2));
v___x_1788_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1787_, v___x_1786_, v___x_1785_);
return v___x_1788_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17(void){
_start:
{
lean_object* v___x_1789_; uint8_t v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1789_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16);
v___x_1790_ = 5;
v___x_1791_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1));
v___x_1792_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1791_, v___x_1790_, v___x_1789_);
return v___x_1792_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18(void){
_start:
{
lean_object* v___x_1793_; uint8_t v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1793_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17);
v___x_1794_ = 5;
v___x_1795_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0));
v___x_1796_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1795_, v___x_1794_, v___x_1793_);
return v___x_1796_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie(void){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(lean_object* v_s_1800_, lean_object* v_p_1801_){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie;
v___x_1803_ = lean_string_utf8_byte_size(v_s_1800_);
lean_inc(v_p_1801_);
v___x_1804_ = l_Lean_Data_Trie_matchPrefix___redArg(v_s_1800_, v___x_1802_, v_p_1801_, v___x_1803_);
if (lean_obj_tag(v___x_1804_) == 1)
{
lean_object* v_val_1805_; lean_object* v_fst_1806_; lean_object* v_snd_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1821_; 
v_val_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_val_1805_);
lean_dec_ref_known(v___x_1804_, 1);
v_fst_1806_ = lean_ctor_get(v_val_1805_, 0);
v_snd_1807_ = lean_ctor_get(v_val_1805_, 1);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_val_1805_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1809_ = v_val_1805_;
v_isShared_1810_ = v_isSharedCheck_1821_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_snd_1807_);
lean_inc(v_fst_1806_);
lean_dec(v_val_1805_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1821_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1811_; lean_object* v_p_x27_1812_; uint8_t v___x_1813_; 
v___x_1811_ = lean_string_utf8_byte_size(v_fst_1806_);
lean_dec(v_fst_1806_);
v_p_x27_1812_ = lean_nat_add(v_p_1801_, v___x_1811_);
v___x_1813_ = lean_string_is_valid_pos(v_s_1800_, v_p_x27_1812_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1816_; 
lean_dec(v_p_x27_1812_);
lean_dec(v_snd_1807_);
v___x_1814_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0));
if (v_isShared_1810_ == 0)
{
lean_ctor_set_tag(v___x_1809_, 1);
lean_ctor_set(v___x_1809_, 1, v_p_1801_);
lean_ctor_set(v___x_1809_, 0, v___x_1814_);
v___x_1816_ = v___x_1809_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v_p_1801_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
else
{
lean_object* v___x_1819_; 
lean_dec(v_p_1801_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 1, v_p_x27_1812_);
lean_ctor_set(v___x_1809_, 0, v_snd_1807_);
v___x_1819_ = v___x_1809_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_snd_1807_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v_p_x27_1812_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
lean_dec(v___x_1804_);
v___x_1822_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1));
v___x_1823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
lean_ctor_set(v___x_1823_, 1, v_p_1801_);
return v___x_1823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___boxed(lean_object* v_s_1824_, lean_object* v_p_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(v_s_1824_, v_p_1825_);
lean_dec_ref(v_s_1824_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f(lean_object* v_s_1827_){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1828_ = lean_unsigned_to_nat(0u);
v___x_1829_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(v_s_1827_, v___x_1828_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v_a_1831_; lean_object* v___x_1832_; uint8_t v_decide_1833_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc(v_a_1830_);
v_a_1831_ = lean_ctor_get(v___x_1829_, 1);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1829_, 2);
v___x_1832_ = lean_string_utf8_byte_size(v_s_1827_);
v_decide_1833_ = lean_nat_dec_eq(v_a_1831_, v___x_1832_);
lean_dec(v_a_1831_);
if (v_decide_1833_ == 0)
{
lean_object* v___x_1834_; 
lean_dec(v_a_1830_);
v___x_1834_ = lean_box(0);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1835_, 0, v_a_1830_);
return v___x_1835_;
}
}
else
{
lean_object* v___x_1836_; 
lean_dec_ref_known(v___x_1829_, 2);
v___x_1836_ = lean_box(0);
return v___x_1836_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f___boxed(lean_object* v_s_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lake_ComparatorOp_ofString_x3f(v_s_1837_);
lean_dec_ref(v_s_1837_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString(uint8_t v_self_1839_){
_start:
{
switch(v_self_1839_)
{
case 0:
{
lean_object* v___x_1840_; 
v___x_1840_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8));
return v___x_1840_;
}
case 1:
{
lean_object* v___x_1841_; 
v___x_1841_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6));
return v___x_1841_;
}
case 2:
{
lean_object* v___x_1842_; 
v___x_1842_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5));
return v___x_1842_;
}
case 3:
{
lean_object* v___x_1843_; 
v___x_1843_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3));
return v___x_1843_;
}
case 4:
{
lean_object* v___x_1844_; 
v___x_1844_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2));
return v___x_1844_;
}
default: 
{
lean_object* v___x_1845_; 
v___x_1845_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0));
return v___x_1845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString___boxed(lean_object* v_self_1846_){
_start:
{
uint8_t v_self_boxed_1847_; lean_object* v_res_1848_; 
v_self_boxed_1847_ = lean_unbox(v_self_1846_);
v_res_1848_ = l_Lake_ComparatorOp_toString(v_self_boxed_1847_);
return v_res_1848_;
}
}
static lean_object* _init_l_Lake_instReprVerComparator_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_unsigned_to_nat(7u);
v___x_1861_ = lean_nat_to_int(v___x_1860_);
return v___x_1861_;
}
}
static lean_object* _init_l_Lake_instReprVerComparator_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lean_unsigned_to_nat(6u);
v___x_1866_ = lean_nat_to_int(v___x_1865_);
return v___x_1866_;
}
}
static lean_object* _init_l_Lake_instReprVerComparator_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1870_ = lean_unsigned_to_nat(19u);
v___x_1871_ = lean_nat_to_int(v___x_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___redArg(lean_object* v_x_1872_){
_start:
{
lean_object* v_ver_1873_; uint8_t v_op_1874_; uint8_t v_includeSuffixes_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; uint8_t v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v_ver_1873_ = lean_ctor_get(v_x_1872_, 0);
lean_inc_ref(v_ver_1873_);
v_op_1874_ = lean_ctor_get_uint8(v_x_1872_, sizeof(void*)*1);
v_includeSuffixes_1875_ = lean_ctor_get_uint8(v_x_1872_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_1872_);
v___x_1876_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_1877_ = ((lean_object*)(l_Lake_instReprVerComparator_repr___redArg___closed__3));
v___x_1878_ = lean_obj_once(&l_Lake_instReprVerComparator_repr___redArg___closed__4, &l_Lake_instReprVerComparator_repr___redArg___closed__4_once, _init_l_Lake_instReprVerComparator_repr___redArg___closed__4);
v___x_1879_ = lean_unsigned_to_nat(0u);
v___x_1880_ = l_Lake_instReprStdVer_repr___redArg(v_ver_1873_);
v___x_1881_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1878_);
lean_ctor_set(v___x_1881_, 1, v___x_1880_);
v___x_1882_ = 0;
v___x_1883_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1883_, 0, v___x_1881_);
lean_ctor_set_uint8(v___x_1883_, sizeof(void*)*1, v___x_1882_);
v___x_1884_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1877_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
v___x_1885_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_1886_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1884_);
lean_ctor_set(v___x_1886_, 1, v___x_1885_);
v___x_1887_ = lean_box(1);
v___x_1888_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1886_);
lean_ctor_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = ((lean_object*)(l_Lake_instReprVerComparator_repr___redArg___closed__6));
v___x_1890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1888_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
v___x_1891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
lean_ctor_set(v___x_1891_, 1, v___x_1876_);
v___x_1892_ = lean_obj_once(&l_Lake_instReprVerComparator_repr___redArg___closed__7, &l_Lake_instReprVerComparator_repr___redArg___closed__7_once, _init_l_Lake_instReprVerComparator_repr___redArg___closed__7);
v___x_1893_ = l_Lake_instReprComparatorOp_repr(v_op_1874_, v___x_1879_);
v___x_1894_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
lean_ctor_set_uint8(v___x_1895_, sizeof(void*)*1, v___x_1882_);
v___x_1896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1891_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1896_);
lean_ctor_set(v___x_1897_, 1, v___x_1885_);
v___x_1898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
lean_ctor_set(v___x_1898_, 1, v___x_1887_);
v___x_1899_ = ((lean_object*)(l_Lake_instReprVerComparator_repr___redArg___closed__9));
v___x_1900_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
lean_ctor_set(v___x_1901_, 1, v___x_1876_);
v___x_1902_ = lean_obj_once(&l_Lake_instReprVerComparator_repr___redArg___closed__10, &l_Lake_instReprVerComparator_repr___redArg___closed__10_once, _init_l_Lake_instReprVerComparator_repr___redArg___closed__10);
v___x_1903_ = l_Bool_repr___redArg(v_includeSuffixes_1875_);
v___x_1904_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1902_);
lean_ctor_set(v___x_1904_, 1, v___x_1903_);
v___x_1905_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
lean_ctor_set_uint8(v___x_1905_, sizeof(void*)*1, v___x_1882_);
v___x_1906_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1901_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
v___x_1907_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_1908_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_1909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
lean_ctor_set(v___x_1909_, 1, v___x_1906_);
v___x_1910_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_1911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1909_);
lean_ctor_set(v___x_1911_, 1, v___x_1910_);
v___x_1912_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1907_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
lean_ctor_set_uint8(v___x_1913_, sizeof(void*)*1, v___x_1882_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr(lean_object* v_x_1914_, lean_object* v_prec_1915_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lake_instReprVerComparator_repr___redArg(v_x_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___boxed(lean_object* v_x_1917_, lean_object* v_prec_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lake_instReprVerComparator_repr(v_x_1917_, v_prec_1918_);
lean_dec(v_prec_1918_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(lean_object* v_s_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v___x_1935_; 
lean_inc(v_a_1934_);
v___x_1935_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(v_s_1933_, v_a_1934_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_2002_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_a_1937_ = lean_ctor_get(v___x_1935_, 1);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1939_ = v___x_1935_;
v_isShared_1940_ = v_isSharedCheck_2002_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_2002_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1941_; uint8_t v_decide_1942_; 
v___x_1941_ = lean_string_utf8_byte_size(v_s_1933_);
v_decide_1942_ = lean_nat_dec_eq(v_a_1937_, v___x_1941_);
if (v_decide_1942_ == 0)
{
lean_object* v___x_1943_; 
lean_del_object(v___x_1939_);
lean_dec(v_a_1934_);
lean_inc_ref(v_s_1933_);
v___x_1943_ = l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(v_s_1933_, v_a_1937_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v_a_1945_; lean_object* v___x_1946_; lean_object* v_a_1947_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
v_a_1945_ = lean_ctor_get(v___x_1943_, 1);
lean_inc(v_a_1945_);
lean_dec_ref_known(v___x_1943_, 2);
v___x_1946_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(v_s_1933_, v_a_1945_);
lean_dec_ref(v_s_1933_);
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
if (lean_obj_tag(v_a_1947_) == 1)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1969_; 
lean_inc_ref(v_a_1947_);
v_a_1948_ = lean_ctor_get(v___x_1946_, 1);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1969_ == 0)
{
lean_object* v_unused_1970_; 
v_unused_1970_ = lean_ctor_get(v___x_1946_, 0);
lean_dec(v_unused_1970_);
v___x_1950_ = v___x_1946_;
v_isShared_1951_ = v_isSharedCheck_1969_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1946_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1969_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v_val_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; 
v_val_1952_ = lean_ctor_get(v_a_1947_, 0);
lean_inc(v_val_1952_);
lean_dec_ref_known(v_a_1947_, 1);
v___x_1953_ = lean_string_utf8_byte_size(v_val_1952_);
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = lean_nat_dec_eq(v___x_1953_, v___x_1954_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; lean_object* v___x_1960_; 
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v_a_1944_);
lean_ctor_set(v___x_1956_, 1, v_val_1952_);
v___x_1957_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
v___x_1958_ = lean_unbox(v_a_1936_);
lean_dec(v_a_1936_);
lean_ctor_set_uint8(v___x_1957_, sizeof(void*)*1, v___x_1958_);
lean_ctor_set_uint8(v___x_1957_, sizeof(void*)*1 + 1, v___x_1955_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1957_);
v___x_1960_ = v___x_1950_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1961_, 1, v_a_1948_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
else
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; uint8_t v___x_1965_; lean_object* v___x_1967_; 
lean_dec(v_val_1952_);
v___x_1962_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v_a_1944_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
v___x_1965_ = lean_unbox(v_a_1936_);
lean_dec(v_a_1936_);
lean_ctor_set_uint8(v___x_1964_, sizeof(void*)*1, v___x_1965_);
lean_ctor_set_uint8(v___x_1964_, sizeof(void*)*1 + 1, v___x_1955_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1964_);
v___x_1967_ = v___x_1950_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_a_1948_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1982_; 
v_a_1971_ = lean_ctor_get(v___x_1946_, 1);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; 
v_unused_1983_ = lean_ctor_get(v___x_1946_, 0);
lean_dec(v_unused_1983_);
v___x_1973_ = v___x_1946_;
v_isShared_1974_ = v_isSharedCheck_1982_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1946_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1982_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1980_; 
v___x_1975_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_1976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1976_, 0, v_a_1944_);
lean_ctor_set(v___x_1976_, 1, v___x_1975_);
v___x_1977_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
v___x_1978_ = lean_unbox(v_a_1936_);
lean_dec(v_a_1936_);
lean_ctor_set_uint8(v___x_1977_, sizeof(void*)*1, v___x_1978_);
lean_ctor_set_uint8(v___x_1977_, sizeof(void*)*1 + 1, v_decide_1942_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v___x_1977_);
v___x_1980_ = v___x_1973_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1977_);
lean_ctor_set(v_reuseFailAlloc_1981_, 1, v_a_1971_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec(v_a_1936_);
lean_dec_ref(v_s_1933_);
v_a_1984_ = lean_ctor_get(v___x_1943_, 0);
v_a_1985_ = lean_ctor_get(v___x_1943_, 1);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1943_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_inc(v_a_1984_);
lean_dec(v___x_1943_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1984_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_2000_; 
lean_dec(v_a_1936_);
v___x_1993_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0));
v___x_1994_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1994_, 0, v_s_1933_);
lean_ctor_set(v___x_1994_, 1, v_a_1934_);
lean_ctor_set(v___x_1994_, 2, v___x_1941_);
v___x_1995_ = l_String_Slice_toString(v___x_1994_);
lean_dec_ref_known(v___x_1994_, 3);
v___x_1996_ = lean_string_append(v___x_1993_, v___x_1995_);
lean_dec_ref(v___x_1995_);
v___x_1997_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1));
v___x_1998_ = lean_string_append(v___x_1996_, v___x_1997_);
if (v_isShared_1940_ == 0)
{
lean_ctor_set_tag(v___x_1939_, 1);
lean_ctor_set(v___x_1939_, 0, v___x_1998_);
v___x_2000_ = v___x_1939_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_a_1937_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec(v_a_1934_);
lean_dec_ref(v_s_1933_);
v_a_2003_ = lean_ctor_get(v___x_1935_, 0);
v_a_2004_ = lean_ctor_get(v___x_1935_, 1);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1935_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_inc(v_a_2003_);
lean_dec(v___x_1935_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2003_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerComparator_parse(lean_object* v_s_2012_){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2013_ = lean_unsigned_to_nat(0u);
v___x_2014_ = lean_string_utf8_byte_size(v_s_2012_);
lean_inc_ref(v_s_2012_);
v___x_2015_ = l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(v_s_2012_, v___x_2013_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v_a_2017_; uint8_t v_decide_2018_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
v_a_2017_ = lean_ctor_get(v___x_2015_, 1);
lean_inc(v_a_2017_);
lean_dec_ref_known(v___x_2015_, 2);
v_decide_2018_ = lean_nat_dec_eq(v_a_2017_, v___x_2014_);
if (v_decide_2018_ == 0)
{
lean_object* v_tail_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
lean_dec(v_a_2016_);
v_tail_2019_ = lean_string_utf8_extract(v_s_2012_, v_a_2017_, v___x_2014_);
lean_dec(v_a_2017_);
lean_dec_ref(v_s_2012_);
v___x_2020_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_2021_ = lean_string_append(v___x_2020_, v_tail_2019_);
lean_dec_ref(v_tail_2019_);
v___x_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
return v___x_2022_;
}
else
{
lean_object* v___x_2023_; 
lean_dec(v_a_2017_);
lean_dec_ref(v_s_2012_);
v___x_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_a_2016_);
return v___x_2023_;
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2025_; 
lean_dec_ref(v_s_2012_);
v_a_2024_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2024_);
lean_dec_ref_known(v___x_2015_, 2);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_a_2024_);
return v___x_2025_;
}
}
}
LEAN_EXPORT uint8_t l_Lake_VerComparator_test(lean_object* v_self_2026_, lean_object* v_ver_2027_){
_start:
{
lean_object* v_ver_2028_; uint8_t v_op_2029_; uint8_t v_includeSuffixes_2030_; lean_object* v_ver_2032_; 
v_ver_2028_ = lean_ctor_get(v_self_2026_, 0);
v_op_2029_ = lean_ctor_get_uint8(v_self_2026_, sizeof(void*)*1);
v_includeSuffixes_2030_ = lean_ctor_get_uint8(v_self_2026_, sizeof(void*)*1 + 1);
if (v_includeSuffixes_2030_ == 0)
{
lean_object* v_toSemVerCore_2049_; lean_object* v_specialDescr_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; 
v_toSemVerCore_2049_ = lean_ctor_get(v_ver_2027_, 0);
v_specialDescr_2050_ = lean_ctor_get(v_ver_2027_, 1);
v___x_2051_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_2052_ = lean_string_dec_eq(v_specialDescr_2050_, v___x_2051_);
if (v___x_2052_ == 0)
{
lean_object* v_toSemVerCore_2053_; lean_object* v_specialDescr_2054_; uint8_t v___x_2055_; 
v_toSemVerCore_2053_ = lean_ctor_get(v_ver_2028_, 0);
v_specialDescr_2054_ = lean_ctor_get(v_ver_2028_, 1);
v___x_2055_ = lean_string_dec_eq(v_specialDescr_2054_, v___x_2051_);
if (v___x_2055_ == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = l_Lake_instDecidableEqSemVerCore_decEq(v_toSemVerCore_2053_, v_toSemVerCore_2049_);
if (v___x_2056_ == 0)
{
return v___x_2056_;
}
else
{
switch(v_op_2029_)
{
case 0:
{
uint8_t v___x_2057_; 
v___x_2057_ = lean_string_dec_lt(v_specialDescr_2050_, v_specialDescr_2054_);
return v___x_2057_;
}
case 1:
{
uint8_t v___x_2058_; 
v___x_2058_ = l_String_decLE(v_specialDescr_2050_, v_specialDescr_2054_);
return v___x_2058_;
}
case 2:
{
uint8_t v___x_2059_; 
v___x_2059_ = lean_string_dec_lt(v_specialDescr_2054_, v_specialDescr_2050_);
return v___x_2059_;
}
case 3:
{
uint8_t v___x_2060_; 
v___x_2060_ = l_String_decLE(v_specialDescr_2054_, v_specialDescr_2050_);
return v___x_2060_;
}
case 4:
{
uint8_t v___x_2061_; 
v___x_2061_ = lean_string_dec_eq(v_specialDescr_2050_, v_specialDescr_2054_);
return v___x_2061_;
}
default: 
{
uint8_t v___x_2062_; 
v___x_2062_ = lean_string_dec_eq(v_specialDescr_2050_, v_specialDescr_2054_);
if (v___x_2062_ == 0)
{
return v___x_2056_;
}
else
{
return v___x_2055_;
}
}
}
}
}
else
{
return v___x_2052_;
}
}
else
{
v_ver_2032_ = v_ver_2027_;
goto v___jp_2031_;
}
}
else
{
v_ver_2032_ = v_ver_2027_;
goto v___jp_2031_;
}
v___jp_2031_:
{
switch(v_op_2029_)
{
case 0:
{
uint8_t v___x_2033_; 
v___x_2033_ = l_Lake_StdVer_compare(v_ver_2032_, v_ver_2028_);
if (v___x_2033_ == 0)
{
uint8_t v___x_2034_; 
v___x_2034_ = 1;
return v___x_2034_;
}
else
{
uint8_t v___x_2035_; 
v___x_2035_ = 0;
return v___x_2035_;
}
}
case 1:
{
uint8_t v___x_2036_; 
v___x_2036_ = l_Lake_StdVer_compare(v_ver_2032_, v_ver_2028_);
if (v___x_2036_ == 2)
{
uint8_t v___x_2037_; 
v___x_2037_ = 0;
return v___x_2037_;
}
else
{
uint8_t v___x_2038_; 
v___x_2038_ = 1;
return v___x_2038_;
}
}
case 2:
{
uint8_t v___x_2039_; 
v___x_2039_ = l_Lake_StdVer_compare(v_ver_2028_, v_ver_2032_);
if (v___x_2039_ == 0)
{
uint8_t v___x_2040_; 
v___x_2040_ = 1;
return v___x_2040_;
}
else
{
uint8_t v___x_2041_; 
v___x_2041_ = 0;
return v___x_2041_;
}
}
case 3:
{
uint8_t v___x_2042_; 
v___x_2042_ = l_Lake_StdVer_compare(v_ver_2028_, v_ver_2032_);
if (v___x_2042_ == 2)
{
uint8_t v___x_2043_; 
v___x_2043_ = 0;
return v___x_2043_;
}
else
{
uint8_t v___x_2044_; 
v___x_2044_ = 1;
return v___x_2044_;
}
}
case 4:
{
uint8_t v___x_2045_; 
v___x_2045_ = l_Lake_instDecidableEqStdVer_decEq(v_ver_2032_, v_ver_2028_);
return v___x_2045_;
}
default: 
{
uint8_t v___x_2046_; 
v___x_2046_ = l_Lake_instDecidableEqStdVer_decEq(v_ver_2032_, v_ver_2028_);
if (v___x_2046_ == 0)
{
uint8_t v___x_2047_; 
v___x_2047_ = 1;
return v___x_2047_;
}
else
{
uint8_t v___x_2048_; 
v___x_2048_ = 0;
return v___x_2048_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerComparator_test___boxed(lean_object* v_self_2063_, lean_object* v_ver_2064_){
_start:
{
uint8_t v_res_2065_; lean_object* v_r_2066_; 
v_res_2065_ = l_Lake_VerComparator_test(v_self_2063_, v_ver_2064_);
lean_dec_ref(v_ver_2064_);
lean_dec_ref(v_self_2063_);
v_r_2066_ = lean_box(v_res_2065_);
return v_r_2066_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerComparator_toString(lean_object* v_self_2067_){
_start:
{
lean_object* v_ver_2068_; uint8_t v_op_2069_; uint8_t v_includeSuffixes_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v_ver_2068_ = lean_ctor_get(v_self_2067_, 0);
lean_inc_ref(v_ver_2068_);
v_op_2069_ = lean_ctor_get_uint8(v_self_2067_, sizeof(void*)*1);
v_includeSuffixes_2070_ = lean_ctor_get_uint8(v_self_2067_, sizeof(void*)*1 + 1);
lean_dec_ref(v_self_2067_);
v___x_2071_ = l_Lake_ComparatorOp_toString(v_op_2069_);
v___x_2072_ = l_Lake_StdVer_toString(v_ver_2068_);
v___x_2073_ = lean_string_append(v___x_2071_, v___x_2072_);
lean_dec_ref(v___x_2072_);
if (v_includeSuffixes_2070_ == 0)
{
return v___x_2073_;
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = ((lean_object*)(l_Lake_StdVer_toString___closed__0));
v___x_2075_ = lean_string_append(v___x_2073_, v___x_2074_);
return v___x_2075_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_x_2078_, lean_object* v_x_2079_, lean_object* v_x_2080_){
_start:
{
if (lean_obj_tag(v_x_2080_) == 0)
{
lean_dec(v_x_2078_);
return v_x_2079_;
}
else
{
lean_object* v_head_2081_; lean_object* v_tail_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2092_; 
v_head_2081_ = lean_ctor_get(v_x_2080_, 0);
v_tail_2082_ = lean_ctor_get(v_x_2080_, 1);
v_isSharedCheck_2092_ = !lean_is_exclusive(v_x_2080_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2084_ = v_x_2080_;
v_isShared_2085_ = v_isSharedCheck_2092_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_tail_2082_);
lean_inc(v_head_2081_);
lean_dec(v_x_2080_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2092_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
lean_inc(v_x_2078_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set_tag(v___x_2084_, 5);
lean_ctor_set(v___x_2084_, 1, v_x_2078_);
lean_ctor_set(v___x_2084_, 0, v_x_2079_);
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_x_2079_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_x_2078_);
v___x_2087_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2081_);
v___x_2089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2087_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
v_x_2079_ = v___x_2089_;
v_x_2080_ = v_tail_2082_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2093_, lean_object* v_x_2094_, lean_object* v_x_2095_){
_start:
{
if (lean_obj_tag(v_x_2095_) == 0)
{
lean_dec(v_x_2093_);
return v_x_2094_;
}
else
{
lean_object* v_head_2096_; lean_object* v_tail_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2107_; 
v_head_2096_ = lean_ctor_get(v_x_2095_, 0);
v_tail_2097_ = lean_ctor_get(v_x_2095_, 1);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_x_2095_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2099_ = v_x_2095_;
v_isShared_2100_ = v_isSharedCheck_2107_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_tail_2097_);
lean_inc(v_head_2096_);
lean_dec(v_x_2095_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2107_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
lean_inc(v_x_2093_);
if (v_isShared_2100_ == 0)
{
lean_ctor_set_tag(v___x_2099_, 5);
lean_ctor_set(v___x_2099_, 1, v_x_2093_);
lean_ctor_set(v___x_2099_, 0, v_x_2094_);
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_x_2094_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v_x_2093_);
v___x_2102_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2103_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2096_);
v___x_2104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2102_);
lean_ctor_set(v___x_2104_, 1, v___x_2103_);
v___x_2105_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2_spec__4(v_x_2093_, v___x_2104_, v_tail_2097_);
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1(lean_object* v_x_2108_, lean_object* v_x_2109_){
_start:
{
if (lean_obj_tag(v_x_2108_) == 0)
{
lean_object* v___x_2110_; 
lean_dec(v_x_2109_);
v___x_2110_ = lean_box(0);
return v___x_2110_;
}
else
{
lean_object* v_tail_2111_; 
v_tail_2111_ = lean_ctor_get(v_x_2108_, 1);
if (lean_obj_tag(v_tail_2111_) == 0)
{
lean_object* v_head_2112_; lean_object* v___x_2113_; 
lean_dec(v_x_2109_);
v_head_2112_ = lean_ctor_get(v_x_2108_, 0);
lean_inc(v_head_2112_);
lean_dec_ref_known(v_x_2108_, 2);
v___x_2113_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2112_);
return v___x_2113_;
}
else
{
lean_object* v_head_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
lean_inc(v_tail_2111_);
v_head_2114_ = lean_ctor_get(v_x_2108_, 0);
lean_inc(v_head_2114_);
lean_dec_ref_known(v_x_2108_, 2);
v___x_2115_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2114_);
v___x_2116_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2(v_x_2109_, v___x_2115_, v_tail_2111_);
return v___x_2116_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2122_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0));
v___x_2123_ = lean_string_length(v___x_2122_);
return v___x_2123_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3, &l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3);
v___x_2125_ = lean_nat_to_int(v___x_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(lean_object* v_xs_2133_){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; 
v___x_2134_ = lean_array_get_size(v_xs_2133_);
v___x_2135_ = lean_unsigned_to_nat(0u);
v___x_2136_ = lean_nat_dec_eq(v___x_2134_, v___x_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2137_ = lean_array_to_list(v_xs_2133_);
v___x_2138_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1));
v___x_2139_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1(v___x_2137_, v___x_2138_);
v___x_2140_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4);
v___x_2141_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5));
v___x_2142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
lean_ctor_set(v___x_2142_, 1, v___x_2139_);
v___x_2143_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6));
v___x_2144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2140_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = l_Std_Format_fill(v___x_2145_);
return v___x_2146_;
}
else
{
lean_object* v___x_2147_; 
lean_dec_ref(v_xs_2133_);
v___x_2147_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8));
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1_spec__3(lean_object* v_x_2148_, lean_object* v_x_2149_, lean_object* v_x_2150_){
_start:
{
if (lean_obj_tag(v_x_2150_) == 0)
{
lean_dec(v_x_2148_);
return v_x_2149_;
}
else
{
lean_object* v_head_2151_; lean_object* v_tail_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2162_; 
v_head_2151_ = lean_ctor_get(v_x_2150_, 0);
v_tail_2152_ = lean_ctor_get(v_x_2150_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_x_2150_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2154_ = v_x_2150_;
v_isShared_2155_ = v_isSharedCheck_2162_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_tail_2152_);
lean_inc(v_head_2151_);
lean_dec(v_x_2150_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2162_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
lean_inc(v_x_2148_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set_tag(v___x_2154_, 5);
lean_ctor_set(v___x_2154_, 1, v_x_2148_);
lean_ctor_set(v___x_2154_, 0, v_x_2149_);
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_x_2149_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v_x_2148_);
v___x_2157_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(v_head_2151_);
v___x_2159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2157_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v_x_2149_ = v___x_2159_;
v_x_2150_ = v_tail_2152_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1(lean_object* v_x_2163_, lean_object* v_x_2164_){
_start:
{
if (lean_obj_tag(v_x_2163_) == 0)
{
lean_object* v___x_2165_; 
lean_dec(v_x_2164_);
v___x_2165_ = lean_box(0);
return v___x_2165_;
}
else
{
lean_object* v_tail_2166_; 
v_tail_2166_ = lean_ctor_get(v_x_2163_, 1);
if (lean_obj_tag(v_tail_2166_) == 0)
{
lean_object* v_head_2167_; lean_object* v___x_2168_; 
lean_dec(v_x_2164_);
v_head_2167_ = lean_ctor_get(v_x_2163_, 0);
lean_inc(v_head_2167_);
lean_dec_ref_known(v_x_2163_, 2);
v___x_2168_ = l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(v_head_2167_);
return v___x_2168_;
}
else
{
lean_object* v_head_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
lean_inc(v_tail_2166_);
v_head_2169_ = lean_ctor_get(v_x_2163_, 0);
lean_inc(v_head_2169_);
lean_dec_ref_known(v_x_2163_, 2);
v___x_2170_ = l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(v_head_2169_);
v___x_2171_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1_spec__3(v_x_2164_, v___x_2170_, v_tail_2166_);
return v___x_2171_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprVerRange_repr_spec__0(lean_object* v_xs_2172_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2173_ = lean_array_get_size(v_xs_2172_);
v___x_2174_ = lean_unsigned_to_nat(0u);
v___x_2175_ = lean_nat_dec_eq(v___x_2173_, v___x_2174_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2176_ = lean_array_to_list(v_xs_2172_);
v___x_2177_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1));
v___x_2178_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1(v___x_2176_, v___x_2177_);
v___x_2179_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4);
v___x_2180_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5));
v___x_2181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
lean_ctor_set(v___x_2181_, 1, v___x_2178_);
v___x_2182_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6));
v___x_2183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2181_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
v___x_2184_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2179_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = l_Std_Format_fill(v___x_2184_);
return v___x_2185_;
}
else
{
lean_object* v___x_2186_; 
lean_dec_ref(v_xs_2172_);
v___x_2186_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8));
return v___x_2186_;
}
}
}
static lean_object* _init_l_Lake_instReprVerRange_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = lean_unsigned_to_nat(12u);
v___x_2197_ = lean_nat_to_int(v___x_2196_);
return v___x_2197_;
}
}
static lean_object* _init_l_Lake_instReprVerRange_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_unsigned_to_nat(11u);
v___x_2202_ = lean_nat_to_int(v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___redArg(lean_object* v_x_2203_){
_start:
{
lean_object* v_toString_2204_; lean_object* v_clauses_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2239_; 
v_toString_2204_ = lean_ctor_get(v_x_2203_, 0);
v_clauses_2205_ = lean_ctor_get(v_x_2203_, 1);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_x_2203_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2207_ = v_x_2203_;
v_isShared_2208_ = v_isSharedCheck_2239_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_clauses_2205_);
lean_inc(v_toString_2204_);
lean_dec(v_x_2203_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2239_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2215_; 
v___x_2209_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_2210_ = ((lean_object*)(l_Lake_instReprVerRange_repr___redArg___closed__3));
v___x_2211_ = lean_obj_once(&l_Lake_instReprVerRange_repr___redArg___closed__4, &l_Lake_instReprVerRange_repr___redArg___closed__4_once, _init_l_Lake_instReprVerRange_repr___redArg___closed__4);
v___x_2212_ = l_String_quote(v_toString_2204_);
v___x_2213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set_tag(v___x_2207_, 4);
lean_ctor_set(v___x_2207_, 1, v___x_2213_);
lean_ctor_set(v___x_2207_, 0, v___x_2211_);
v___x_2215_ = v___x_2207_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2211_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v___x_2213_);
v___x_2215_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
uint8_t v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2216_ = 0;
v___x_2217_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2217_, 0, v___x_2215_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*1, v___x_2216_);
v___x_2218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2210_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_2220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2218_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_box(1);
v___x_2222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2220_);
lean_ctor_set(v___x_2222_, 1, v___x_2221_);
v___x_2223_ = ((lean_object*)(l_Lake_instReprVerRange_repr___redArg___closed__6));
v___x_2224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2222_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
v___x_2225_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
lean_ctor_set(v___x_2225_, 1, v___x_2209_);
v___x_2226_ = lean_obj_once(&l_Lake_instReprVerRange_repr___redArg___closed__7, &l_Lake_instReprVerRange_repr___redArg___closed__7_once, _init_l_Lake_instReprVerRange_repr___redArg___closed__7);
v___x_2227_ = l_Array_repr___at___00Lake_instReprVerRange_repr_spec__0(v_clauses_2205_);
v___x_2228_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2229_, 0, v___x_2228_);
lean_ctor_set_uint8(v___x_2229_, sizeof(void*)*1, v___x_2216_);
v___x_2230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2225_);
lean_ctor_set(v___x_2230_, 1, v___x_2229_);
v___x_2231_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_2232_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_2233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
lean_ctor_set(v___x_2233_, 1, v___x_2230_);
v___x_2234_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_2235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2233_);
lean_ctor_set(v___x_2235_, 1, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2231_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
v___x_2237_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set_uint8(v___x_2237_, sizeof(void*)*1, v___x_2216_);
return v___x_2237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr(lean_object* v_x_2240_, lean_object* v_prec_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lake_instReprVerRange_repr___redArg(v_x_2240_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___boxed(lean_object* v_x_2243_, lean_object* v_prec_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lake_instReprVerRange_repr(v_x_2243_, v_prec_2244_);
lean_dec(v_prec_2244_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0(lean_object* v_self_2255_){
_start:
{
lean_object* v_toString_2256_; 
v_toString_2256_ = lean_ctor_get(v_self_2255_, 0);
lean_inc_ref(v_toString_2256_);
return v_toString_2256_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0___boxed(lean_object* v_self_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lake_VerRange_instToString___lam__0(v_self_2257_);
lean_dec_ref(v_self_2257_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(lean_object* v_as_2262_, size_t v_i_2263_, size_t v_stop_2264_, lean_object* v_b_2265_){
_start:
{
uint8_t v___x_2266_; 
v___x_2266_ = lean_usize_dec_eq(v_i_2263_, v_stop_2264_);
if (v___x_2266_ == 0)
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; size_t v___x_2272_; size_t v___x_2273_; 
v___x_2267_ = lean_array_uget_borrowed(v_as_2262_, v_i_2263_);
v___x_2268_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0));
v___x_2269_ = lean_string_append(v_b_2265_, v___x_2268_);
lean_inc(v___x_2267_);
v___x_2270_ = l_Lake_VerComparator_toString(v___x_2267_);
v___x_2271_ = lean_string_append(v___x_2269_, v___x_2270_);
lean_dec_ref(v___x_2270_);
v___x_2272_ = ((size_t)1ULL);
v___x_2273_ = lean_usize_add(v_i_2263_, v___x_2272_);
v_i_2263_ = v___x_2273_;
v_b_2265_ = v___x_2271_;
goto _start;
}
else
{
return v_b_2265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___boxed(lean_object* v_as_2275_, lean_object* v_i_2276_, lean_object* v_stop_2277_, lean_object* v_b_2278_){
_start:
{
size_t v_i_boxed_2279_; size_t v_stop_boxed_2280_; lean_object* v_res_2281_; 
v_i_boxed_2279_ = lean_unbox_usize(v_i_2276_);
lean_dec(v_i_2276_);
v_stop_boxed_2280_ = lean_unbox_usize(v_stop_2277_);
lean_dec(v_stop_2277_);
v_res_2281_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(v_as_2275_, v_i_boxed_2279_, v_stop_boxed_2280_, v_b_2278_);
lean_dec_ref(v_as_2275_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(lean_object* v_ands_2283_){
_start:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; uint8_t v___x_2286_; 
v___x_2284_ = lean_array_get_size(v_ands_2283_);
v___x_2285_ = lean_unsigned_to_nat(0u);
v___x_2286_ = lean_nat_dec_eq(v___x_2284_, v___x_2285_);
if (v___x_2286_ == 0)
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; uint8_t v___x_2290_; 
v___x_2287_ = lean_array_fget_borrowed(v_ands_2283_, v___x_2285_);
lean_inc(v___x_2287_);
v___x_2288_ = l_Lake_VerComparator_toString(v___x_2287_);
v___x_2289_ = lean_unsigned_to_nat(1u);
v___x_2290_ = lean_nat_dec_lt(v___x_2289_, v___x_2284_);
if (v___x_2290_ == 0)
{
return v___x_2288_;
}
else
{
size_t v___x_2291_; size_t v___x_2292_; lean_object* v___x_2293_; 
v___x_2291_ = ((size_t)1ULL);
v___x_2292_ = lean_usize_of_nat(v___x_2284_);
v___x_2293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(v_ands_2283_, v___x_2291_, v___x_2292_, v___x_2288_);
return v___x_2293_;
}
}
else
{
lean_object* v___x_2294_; 
v___x_2294_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0));
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___boxed(lean_object* v_ands_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(v_ands_2295_);
lean_dec_ref(v_ands_2295_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(lean_object* v_as_2298_, size_t v_i_2299_, size_t v_stop_2300_, lean_object* v_b_2301_){
_start:
{
uint8_t v___x_2302_; 
v___x_2302_ = lean_usize_dec_eq(v_i_2299_, v_stop_2300_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; size_t v___x_2308_; size_t v___x_2309_; 
v___x_2303_ = lean_array_uget_borrowed(v_as_2298_, v_i_2299_);
v___x_2304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0));
v___x_2305_ = lean_string_append(v_b_2301_, v___x_2304_);
v___x_2306_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(v___x_2303_);
v___x_2307_ = lean_string_append(v___x_2305_, v___x_2306_);
lean_dec_ref(v___x_2306_);
v___x_2308_ = ((size_t)1ULL);
v___x_2309_ = lean_usize_add(v_i_2299_, v___x_2308_);
v_i_2299_ = v___x_2309_;
v_b_2301_ = v___x_2307_;
goto _start;
}
else
{
return v_b_2301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___boxed(lean_object* v_as_2311_, lean_object* v_i_2312_, lean_object* v_stop_2313_, lean_object* v_b_2314_){
_start:
{
size_t v_i_boxed_2315_; size_t v_stop_boxed_2316_; lean_object* v_res_2317_; 
v_i_boxed_2315_ = lean_unbox_usize(v_i_2312_);
lean_dec(v_i_2312_);
v_stop_boxed_2316_ = lean_unbox_usize(v_stop_2313_);
lean_dec(v_stop_2313_);
v_res_2317_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(v_as_2311_, v_i_boxed_2315_, v_stop_boxed_2316_, v_b_2314_);
lean_dec_ref(v_as_2311_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(lean_object* v_ors_2318_){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2319_ = lean_array_get_size(v_ors_2318_);
v___x_2320_ = lean_unsigned_to_nat(0u);
v___x_2321_ = lean_nat_dec_eq(v___x_2319_, v___x_2320_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2322_ = lean_array_fget_borrowed(v_ors_2318_, v___x_2320_);
v___x_2323_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(v___x_2322_);
v___x_2324_ = lean_unsigned_to_nat(1u);
v___x_2325_ = lean_nat_dec_lt(v___x_2324_, v___x_2319_);
if (v___x_2325_ == 0)
{
return v___x_2323_;
}
else
{
size_t v___x_2326_; size_t v___x_2327_; lean_object* v___x_2328_; 
v___x_2326_ = ((size_t)1ULL);
v___x_2327_ = lean_usize_of_nat(v___x_2319_);
v___x_2328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(v_ors_2318_, v___x_2326_, v___x_2327_, v___x_2323_);
return v___x_2328_;
}
}
else
{
lean_object* v___x_2329_; 
v___x_2329_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
return v___x_2329_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs___boxed(lean_object* v_ors_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(v_ors_2330_);
lean_dec_ref(v_ors_2330_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_ofClauses(lean_object* v_clauses_2332_){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(v_clauses_2332_);
v___x_2334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2333_);
lean_ctor_set(v___x_2334_, 1, v_clauses_2332_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_appendRange(lean_object* v_ands_2335_, lean_object* v_minVer_2336_, lean_object* v_maxVer_2337_, lean_object* v_specialDescr_2338_){
_start:
{
lean_object* v_minVer_2339_; lean_object* v___x_2340_; lean_object* v_maxVer_2341_; uint8_t v___x_2342_; uint8_t v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; uint8_t v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_minVer_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2339_, 0, v_minVer_2336_);
lean_ctor_set(v_minVer_2339_, 1, v_specialDescr_2338_);
v___x_2340_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2341_, 0, v_maxVer_2337_);
lean_ctor_set(v_maxVer_2341_, 1, v___x_2340_);
v___x_2342_ = 3;
v___x_2343_ = 0;
v___x_2344_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2344_, 0, v_minVer_2339_);
lean_ctor_set_uint8(v___x_2344_, sizeof(void*)*1, v___x_2342_);
lean_ctor_set_uint8(v___x_2344_, sizeof(void*)*1 + 1, v___x_2343_);
v___x_2345_ = lean_array_push(v_ands_2335_, v___x_2344_);
v___x_2346_ = 0;
v___x_2347_ = 1;
v___x_2348_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2348_, 0, v_maxVer_2341_);
lean_ctor_set_uint8(v___x_2348_, sizeof(void*)*1, v___x_2346_);
lean_ctor_set_uint8(v___x_2348_, sizeof(void*)*1 + 1, v___x_2347_);
v___x_2349_ = lean_array_push(v___x_2345_, v___x_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde(lean_object* v_s_2352_, lean_object* v_ands_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v_a_2358_; lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2530_; 
v___x_2355_ = lean_unsigned_to_nat(0u);
v___x_2356_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_2354_);
lean_inc_ref(v_s_2352_);
v___x_2357_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_2352_, v___x_2356_, v_a_2354_, v_a_2354_);
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
v_a_2359_ = lean_ctor_get(v___x_2357_, 1);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2357_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2361_ = v___x_2357_;
v_isShared_2362_ = v_isSharedCheck_2530_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_inc(v_a_2358_);
lean_dec(v___x_2357_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2530_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; 
v___x_2363_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_2352_, v_a_2359_);
lean_dec_ref(v_s_2352_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2520_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
v_a_2365_ = lean_ctor_get(v___x_2363_, 1);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2367_ = v___x_2363_;
v_isShared_2368_ = v_isSharedCheck_2520_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_inc(v_a_2364_);
lean_dec(v___x_2363_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2520_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; uint8_t v___x_2371_; 
v___x_2369_ = lean_array_get_size(v_a_2358_);
v___x_2370_ = lean_unsigned_to_nat(1u);
v___x_2371_ = lean_nat_dec_eq(v___x_2369_, v___x_2370_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; uint8_t v___x_2373_; 
v___x_2372_ = lean_unsigned_to_nat(2u);
v___x_2373_ = lean_nat_dec_eq(v___x_2369_, v___x_2372_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; uint8_t v___x_2375_; 
v___x_2374_ = lean_unsigned_to_nat(3u);
v___x_2375_ = lean_nat_dec_eq(v___x_2369_, v___x_2374_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec(v_a_2358_);
lean_dec_ref(v_ands_2353_);
v___x_2376_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0));
v___x_2377_ = l_Nat_reprFast(v___x_2369_);
v___x_2378_ = lean_string_append(v___x_2376_, v___x_2377_);
lean_dec_ref(v___x_2377_);
v___x_2379_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1));
v___x_2380_ = lean_string_append(v___x_2378_, v___x_2379_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2380_);
v___x_2382_ = v___x_2367_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v___x_2380_);
lean_ctor_set(v_reuseFailAlloc_2383_, 1, v_a_2365_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
else
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2384_ = lean_array_fget_borrowed(v_a_2358_, v___x_2355_);
v___x_2385_ = l_String_Slice_toNat_x3f(v___x_2384_);
if (lean_obj_tag(v___x_2385_) == 1)
{
lean_object* v_val_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v_val_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_val_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = lean_array_fget_borrowed(v_a_2358_, v___x_2370_);
v___x_2388_ = l_String_Slice_toNat_x3f(v___x_2387_);
if (lean_obj_tag(v___x_2388_) == 1)
{
lean_object* v_val_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v_val_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_val_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v___x_2390_ = lean_array_fget(v_a_2358_, v___x_2372_);
lean_dec(v_a_2358_);
v___x_2391_ = l_String_Slice_toNat_x3f(v___x_2390_);
if (lean_obj_tag(v___x_2391_) == 1)
{
lean_object* v_val_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v_minVer_2397_; 
lean_dec(v___x_2390_);
v_val_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_val_2392_);
lean_dec_ref_known(v___x_2391_, 1);
lean_inc(v_val_2389_);
lean_inc(v_val_2386_);
v___x_2393_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2393_, 0, v_val_2386_);
lean_ctor_set(v___x_2393_, 1, v_val_2389_);
lean_ctor_set(v___x_2393_, 2, v_val_2392_);
v___x_2394_ = lean_nat_add(v_val_2389_, v___x_2370_);
lean_dec(v_val_2389_);
v___x_2395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2395_, 0, v_val_2386_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
lean_ctor_set(v___x_2395_, 2, v___x_2355_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 1, v_a_2364_);
lean_ctor_set(v___x_2361_, 0, v___x_2393_);
v_minVer_2397_ = v___x_2361_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2393_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_a_2364_);
v_minVer_2397_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
lean_object* v___x_2398_; lean_object* v_maxVer_2399_; uint8_t v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; uint8_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2407_; 
v___x_2398_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2399_, 0, v___x_2395_);
lean_ctor_set(v_maxVer_2399_, 1, v___x_2398_);
v___x_2400_ = 3;
v___x_2401_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2401_, 0, v_minVer_2397_);
lean_ctor_set_uint8(v___x_2401_, sizeof(void*)*1, v___x_2400_);
lean_ctor_set_uint8(v___x_2401_, sizeof(void*)*1 + 1, v___x_2373_);
v___x_2402_ = lean_array_push(v_ands_2353_, v___x_2401_);
v___x_2403_ = 0;
v___x_2404_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2404_, 0, v_maxVer_2399_);
lean_ctor_set_uint8(v___x_2404_, sizeof(void*)*1, v___x_2403_);
lean_ctor_set_uint8(v___x_2404_, sizeof(void*)*1 + 1, v___x_2375_);
v___x_2405_ = lean_array_push(v___x_2402_, v___x_2404_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2405_);
v___x_2407_ = v___x_2367_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v___x_2405_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v_a_2365_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
else
{
lean_object* v_str_2410_; lean_object* v_startInclusive_2411_; lean_object* v_endExclusive_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2419_; 
lean_dec(v___x_2391_);
lean_dec(v_val_2389_);
lean_dec(v_val_2386_);
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec_ref(v_ands_2353_);
v_str_2410_ = lean_ctor_get(v___x_2390_, 0);
lean_inc_ref(v_str_2410_);
v_startInclusive_2411_ = lean_ctor_get(v___x_2390_, 1);
lean_inc(v_startInclusive_2411_);
v_endExclusive_2412_ = lean_ctor_get(v___x_2390_, 2);
lean_inc(v_endExclusive_2412_);
lean_dec(v___x_2390_);
v___x_2413_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3));
v___x_2414_ = lean_string_utf8_extract_fast(v_str_2410_, v_startInclusive_2411_, v_endExclusive_2412_);
lean_dec(v_endExclusive_2412_);
lean_dec(v_startInclusive_2411_);
lean_dec_ref(v_str_2410_);
v___x_2415_ = lean_string_append(v___x_2413_, v___x_2414_);
lean_dec_ref(v___x_2414_);
v___x_2416_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2417_ = lean_string_append(v___x_2415_, v___x_2416_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2417_);
v___x_2419_ = v___x_2367_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2417_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_a_2365_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
else
{
lean_object* v_str_2421_; lean_object* v_startInclusive_2422_; lean_object* v_endExclusive_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2430_; 
lean_inc(v___x_2387_);
lean_dec(v___x_2388_);
lean_dec(v_val_2386_);
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec(v_a_2358_);
lean_dec_ref(v_ands_2353_);
v_str_2421_ = lean_ctor_get(v___x_2387_, 0);
lean_inc_ref(v_str_2421_);
v_startInclusive_2422_ = lean_ctor_get(v___x_2387_, 1);
lean_inc(v_startInclusive_2422_);
v_endExclusive_2423_ = lean_ctor_get(v___x_2387_, 2);
lean_inc(v_endExclusive_2423_);
lean_dec(v___x_2387_);
v___x_2424_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2425_ = lean_string_utf8_extract_fast(v_str_2421_, v_startInclusive_2422_, v_endExclusive_2423_);
lean_dec(v_endExclusive_2423_);
lean_dec(v_startInclusive_2422_);
lean_dec_ref(v_str_2421_);
v___x_2426_ = lean_string_append(v___x_2424_, v___x_2425_);
lean_dec_ref(v___x_2425_);
v___x_2427_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2428_ = lean_string_append(v___x_2426_, v___x_2427_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2428_);
v___x_2430_ = v___x_2367_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v___x_2428_);
lean_ctor_set(v_reuseFailAlloc_2431_, 1, v_a_2365_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
else
{
lean_object* v_str_2432_; lean_object* v_startInclusive_2433_; lean_object* v_endExclusive_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2441_; 
lean_inc(v___x_2384_);
lean_dec(v___x_2385_);
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec(v_a_2358_);
lean_dec_ref(v_ands_2353_);
v_str_2432_ = lean_ctor_get(v___x_2384_, 0);
lean_inc_ref(v_str_2432_);
v_startInclusive_2433_ = lean_ctor_get(v___x_2384_, 1);
lean_inc(v_startInclusive_2433_);
v_endExclusive_2434_ = lean_ctor_get(v___x_2384_, 2);
lean_inc(v_endExclusive_2434_);
lean_dec(v___x_2384_);
v___x_2435_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2436_ = lean_string_utf8_extract_fast(v_str_2432_, v_startInclusive_2433_, v_endExclusive_2434_);
lean_dec(v_endExclusive_2434_);
lean_dec(v_startInclusive_2433_);
lean_dec_ref(v_str_2432_);
v___x_2437_ = lean_string_append(v___x_2435_, v___x_2436_);
lean_dec_ref(v___x_2436_);
v___x_2438_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2439_ = lean_string_append(v___x_2437_, v___x_2438_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2439_);
v___x_2441_ = v___x_2367_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_a_2365_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
else
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_array_fget_borrowed(v_a_2358_, v___x_2355_);
v___x_2444_ = l_String_Slice_toNat_x3f(v___x_2443_);
if (lean_obj_tag(v___x_2444_) == 1)
{
lean_object* v_val_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_val_2445_ = lean_ctor_get(v___x_2444_, 0);
lean_inc(v_val_2445_);
lean_dec_ref_known(v___x_2444_, 1);
v___x_2446_ = lean_array_fget(v_a_2358_, v___x_2370_);
lean_dec(v_a_2358_);
v___x_2447_ = l_String_Slice_toNat_x3f(v___x_2446_);
if (lean_obj_tag(v___x_2447_) == 1)
{
lean_object* v_val_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v_minVer_2453_; 
lean_dec(v___x_2446_);
v_val_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc_n(v_val_2448_, 2);
lean_dec_ref_known(v___x_2447_, 1);
lean_inc(v_val_2445_);
v___x_2449_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2449_, 0, v_val_2445_);
lean_ctor_set(v___x_2449_, 1, v_val_2448_);
lean_ctor_set(v___x_2449_, 2, v___x_2355_);
v___x_2450_ = lean_nat_add(v_val_2448_, v___x_2370_);
lean_dec(v_val_2448_);
v___x_2451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2451_, 0, v_val_2445_);
lean_ctor_set(v___x_2451_, 1, v___x_2450_);
lean_ctor_set(v___x_2451_, 2, v___x_2355_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 1, v_a_2364_);
lean_ctor_set(v___x_2361_, 0, v___x_2449_);
v_minVer_2453_ = v___x_2361_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2449_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v_a_2364_);
v_minVer_2453_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
lean_object* v___x_2454_; lean_object* v_maxVer_2455_; uint8_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; uint8_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2454_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2455_, 0, v___x_2451_);
lean_ctor_set(v_maxVer_2455_, 1, v___x_2454_);
v___x_2456_ = 3;
v___x_2457_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2457_, 0, v_minVer_2453_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*1, v___x_2456_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*1 + 1, v___x_2371_);
v___x_2458_ = lean_array_push(v_ands_2353_, v___x_2457_);
v___x_2459_ = 0;
v___x_2460_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2460_, 0, v_maxVer_2455_);
lean_ctor_set_uint8(v___x_2460_, sizeof(void*)*1, v___x_2459_);
lean_ctor_set_uint8(v___x_2460_, sizeof(void*)*1 + 1, v___x_2373_);
v___x_2461_ = lean_array_push(v___x_2458_, v___x_2460_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2461_);
v___x_2463_ = v___x_2367_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2461_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_a_2365_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
else
{
lean_object* v_str_2466_; lean_object* v_startInclusive_2467_; lean_object* v_endExclusive_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2475_; 
lean_dec(v___x_2447_);
lean_dec(v_val_2445_);
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec_ref(v_ands_2353_);
v_str_2466_ = lean_ctor_get(v___x_2446_, 0);
lean_inc_ref(v_str_2466_);
v_startInclusive_2467_ = lean_ctor_get(v___x_2446_, 1);
lean_inc(v_startInclusive_2467_);
v_endExclusive_2468_ = lean_ctor_get(v___x_2446_, 2);
lean_inc(v_endExclusive_2468_);
lean_dec(v___x_2446_);
v___x_2469_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2470_ = lean_string_utf8_extract_fast(v_str_2466_, v_startInclusive_2467_, v_endExclusive_2468_);
lean_dec(v_endExclusive_2468_);
lean_dec(v_startInclusive_2467_);
lean_dec_ref(v_str_2466_);
v___x_2471_ = lean_string_append(v___x_2469_, v___x_2470_);
lean_dec_ref(v___x_2470_);
v___x_2472_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2473_ = lean_string_append(v___x_2471_, v___x_2472_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2473_);
v___x_2475_ = v___x_2367_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2473_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v_a_2365_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
else
{
lean_object* v_str_2477_; lean_object* v_startInclusive_2478_; lean_object* v_endExclusive_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
lean_inc(v___x_2443_);
lean_dec(v___x_2444_);
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec(v_a_2358_);
lean_dec_ref(v_ands_2353_);
v_str_2477_ = lean_ctor_get(v___x_2443_, 0);
lean_inc_ref(v_str_2477_);
v_startInclusive_2478_ = lean_ctor_get(v___x_2443_, 1);
lean_inc(v_startInclusive_2478_);
v_endExclusive_2479_ = lean_ctor_get(v___x_2443_, 2);
lean_inc(v_endExclusive_2479_);
lean_dec(v___x_2443_);
v___x_2480_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2481_ = lean_string_utf8_extract_fast(v_str_2477_, v_startInclusive_2478_, v_endExclusive_2479_);
lean_dec(v_endExclusive_2479_);
lean_dec(v_startInclusive_2478_);
lean_dec_ref(v_str_2477_);
v___x_2482_ = lean_string_append(v___x_2480_, v___x_2481_);
lean_dec_ref(v___x_2481_);
v___x_2483_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2484_ = lean_string_append(v___x_2482_, v___x_2483_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2484_);
v___x_2486_ = v___x_2367_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v_a_2365_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
else
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = lean_array_fget(v_a_2358_, v___x_2355_);
lean_dec(v_a_2358_);
v___x_2489_ = l_String_Slice_toNat_x3f(v___x_2488_);
if (lean_obj_tag(v___x_2489_) == 1)
{
lean_object* v_val_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v_minVer_2495_; 
lean_dec(v___x_2488_);
v_val_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc_n(v_val_2490_, 2);
lean_dec_ref_known(v___x_2489_, 1);
v___x_2491_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2491_, 0, v_val_2490_);
lean_ctor_set(v___x_2491_, 1, v___x_2355_);
lean_ctor_set(v___x_2491_, 2, v___x_2355_);
v___x_2492_ = lean_nat_add(v_val_2490_, v___x_2370_);
lean_dec(v_val_2490_);
v___x_2493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
lean_ctor_set(v___x_2493_, 1, v___x_2355_);
lean_ctor_set(v___x_2493_, 2, v___x_2355_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 1, v_a_2364_);
lean_ctor_set(v___x_2361_, 0, v___x_2491_);
v_minVer_2495_ = v___x_2361_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v___x_2491_);
lean_ctor_set(v_reuseFailAlloc_2508_, 1, v_a_2364_);
v_minVer_2495_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
lean_object* v___x_2496_; lean_object* v_maxVer_2497_; uint8_t v___x_2498_; uint8_t v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2506_; 
v___x_2496_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2497_, 0, v___x_2493_);
lean_ctor_set(v_maxVer_2497_, 1, v___x_2496_);
v___x_2498_ = 3;
v___x_2499_ = 0;
v___x_2500_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2500_, 0, v_minVer_2495_);
lean_ctor_set_uint8(v___x_2500_, sizeof(void*)*1, v___x_2498_);
lean_ctor_set_uint8(v___x_2500_, sizeof(void*)*1 + 1, v___x_2499_);
v___x_2501_ = lean_array_push(v_ands_2353_, v___x_2500_);
v___x_2502_ = 0;
v___x_2503_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2503_, 0, v_maxVer_2497_);
lean_ctor_set_uint8(v___x_2503_, sizeof(void*)*1, v___x_2502_);
lean_ctor_set_uint8(v___x_2503_, sizeof(void*)*1 + 1, v___x_2371_);
v___x_2504_ = lean_array_push(v___x_2501_, v___x_2503_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2504_);
v___x_2506_ = v___x_2367_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2504_);
lean_ctor_set(v_reuseFailAlloc_2507_, 1, v_a_2365_);
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
lean_object* v_str_2509_; lean_object* v_startInclusive_2510_; lean_object* v_endExclusive_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2518_; 
lean_dec(v___x_2489_);
lean_dec(v_a_2364_);
lean_del_object(v___x_2361_);
lean_dec_ref(v_ands_2353_);
v_str_2509_ = lean_ctor_get(v___x_2488_, 0);
lean_inc_ref(v_str_2509_);
v_startInclusive_2510_ = lean_ctor_get(v___x_2488_, 1);
lean_inc(v_startInclusive_2510_);
v_endExclusive_2511_ = lean_ctor_get(v___x_2488_, 2);
lean_inc(v_endExclusive_2511_);
lean_dec(v___x_2488_);
v___x_2512_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2513_ = lean_string_utf8_extract_fast(v_str_2509_, v_startInclusive_2510_, v_endExclusive_2511_);
lean_dec(v_endExclusive_2511_);
lean_dec(v_startInclusive_2510_);
lean_dec_ref(v_str_2509_);
v___x_2514_ = lean_string_append(v___x_2512_, v___x_2513_);
lean_dec_ref(v___x_2513_);
v___x_2515_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2516_ = lean_string_append(v___x_2514_, v___x_2515_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
lean_ctor_set(v___x_2367_, 0, v___x_2516_);
v___x_2518_ = v___x_2367_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v___x_2516_);
lean_ctor_set(v_reuseFailAlloc_2519_, 1, v_a_2365_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
}
else
{
lean_object* v_a_2521_; lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_del_object(v___x_2361_);
lean_dec(v_a_2358_);
lean_dec_ref(v_ands_2353_);
v_a_2521_ = lean_ctor_get(v___x_2363_, 0);
v_a_2522_ = lean_ctor_get(v___x_2363_, 1);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2363_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_inc(v_a_2521_);
lean_dec(v___x_2363_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2521_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret(lean_object* v_s_2533_, lean_object* v_ands_2534_, lean_object* v_a_2535_){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v_a_2539_; lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2761_; 
v___x_2536_ = lean_unsigned_to_nat(0u);
v___x_2537_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_2535_);
lean_inc_ref(v_s_2533_);
v___x_2538_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_2533_, v___x_2537_, v_a_2535_, v_a_2535_);
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_a_2540_ = lean_ctor_get(v___x_2538_, 1);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2542_ = v___x_2538_;
v_isShared_2543_ = v_isSharedCheck_2761_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2761_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2544_; 
v___x_2544_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_2533_, v_a_2540_);
lean_dec_ref(v_s_2533_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2751_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
v_a_2546_ = lean_ctor_get(v___x_2544_, 1);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2548_ = v___x_2544_;
v_isShared_2549_ = v_isSharedCheck_2751_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_inc(v_a_2545_);
lean_dec(v___x_2544_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2751_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; 
v___x_2550_ = lean_array_get_size(v_a_2539_);
v___x_2551_ = lean_unsigned_to_nat(1u);
v___x_2552_ = lean_nat_dec_eq(v___x_2550_, v___x_2551_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; uint8_t v___x_2554_; 
v___x_2553_ = lean_unsigned_to_nat(2u);
v___x_2554_ = lean_nat_dec_eq(v___x_2550_, v___x_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; uint8_t v___x_2556_; 
v___x_2555_ = lean_unsigned_to_nat(3u);
v___x_2556_ = lean_nat_dec_eq(v___x_2550_, v___x_2555_);
if (v___x_2556_ == 0)
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2563_; 
lean_dec(v_a_2545_);
lean_del_object(v___x_2542_);
lean_dec(v_a_2539_);
lean_dec_ref(v_ands_2534_);
v___x_2557_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0));
v___x_2558_ = l_Nat_reprFast(v___x_2550_);
v___x_2559_ = lean_string_append(v___x_2557_, v___x_2558_);
lean_dec_ref(v___x_2558_);
v___x_2560_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1));
v___x_2561_ = lean_string_append(v___x_2559_, v___x_2560_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2561_);
v___x_2563_ = v___x_2548_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v___x_2561_);
lean_ctor_set(v_reuseFailAlloc_2564_, 1, v_a_2546_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
else
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = lean_array_fget_borrowed(v_a_2539_, v___x_2536_);
v___x_2566_ = l_String_Slice_toNat_x3f(v___x_2565_);
if (lean_obj_tag(v___x_2566_) == 1)
{
lean_object* v_val_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v_val_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_val_2567_);
lean_dec_ref_known(v___x_2566_, 1);
v___x_2568_ = lean_array_fget_borrowed(v_a_2539_, v___x_2551_);
v___x_2569_ = l_String_Slice_toNat_x3f(v___x_2568_);
if (lean_obj_tag(v___x_2569_) == 1)
{
lean_object* v_val_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v_val_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_val_2570_);
lean_dec_ref_known(v___x_2569_, 1);
v___x_2571_ = lean_array_fget(v_a_2539_, v___x_2553_);
lean_dec(v_a_2539_);
v___x_2572_ = l_String_Slice_toNat_x3f(v___x_2571_);
if (lean_obj_tag(v___x_2572_) == 1)
{
lean_object* v_val_2573_; uint8_t v___x_2590_; 
lean_dec(v___x_2571_);
v_val_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_val_2573_);
lean_dec_ref_known(v___x_2572_, 1);
v___x_2590_ = lean_nat_dec_eq(v_val_2567_, v___x_2536_);
if (v___x_2590_ == 0)
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v_minVer_2594_; lean_object* v___x_2595_; lean_object* v_maxVer_2596_; uint8_t v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2604_; 
lean_del_object(v___x_2548_);
lean_inc(v_val_2567_);
v___x_2591_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2591_, 0, v_val_2567_);
lean_ctor_set(v___x_2591_, 1, v_val_2570_);
lean_ctor_set(v___x_2591_, 2, v_val_2573_);
v___x_2592_ = lean_nat_add(v_val_2567_, v___x_2551_);
lean_dec(v_val_2567_);
v___x_2593_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2592_);
lean_ctor_set(v___x_2593_, 1, v___x_2536_);
lean_ctor_set(v___x_2593_, 2, v___x_2536_);
v_minVer_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2594_, 0, v___x_2591_);
lean_ctor_set(v_minVer_2594_, 1, v_a_2545_);
v___x_2595_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2596_, 0, v___x_2593_);
lean_ctor_set(v_maxVer_2596_, 1, v___x_2595_);
v___x_2597_ = 3;
v___x_2598_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2598_, 0, v_minVer_2594_);
lean_ctor_set_uint8(v___x_2598_, sizeof(void*)*1, v___x_2597_);
lean_ctor_set_uint8(v___x_2598_, sizeof(void*)*1 + 1, v___x_2554_);
v___x_2599_ = lean_array_push(v_ands_2534_, v___x_2598_);
v___x_2600_ = 0;
v___x_2601_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2601_, 0, v_maxVer_2596_);
lean_ctor_set_uint8(v___x_2601_, sizeof(void*)*1, v___x_2600_);
lean_ctor_set_uint8(v___x_2601_, sizeof(void*)*1 + 1, v___x_2556_);
v___x_2602_ = lean_array_push(v___x_2599_, v___x_2601_);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 1, v_a_2546_);
lean_ctor_set(v___x_2542_, 0, v___x_2602_);
v___x_2604_ = v___x_2542_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v___x_2602_);
lean_ctor_set(v_reuseFailAlloc_2605_, 1, v_a_2546_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
else
{
uint8_t v___x_2606_; 
v___x_2606_ = lean_nat_dec_eq(v_val_2570_, v___x_2536_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v_minVer_2610_; lean_object* v___x_2611_; lean_object* v_maxVer_2612_; uint8_t v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2620_; 
lean_del_object(v___x_2548_);
lean_inc(v_val_2570_);
lean_inc(v_val_2567_);
v___x_2607_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2607_, 0, v_val_2567_);
lean_ctor_set(v___x_2607_, 1, v_val_2570_);
lean_ctor_set(v___x_2607_, 2, v_val_2573_);
v___x_2608_ = lean_nat_add(v_val_2570_, v___x_2551_);
lean_dec(v_val_2570_);
v___x_2609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2609_, 0, v_val_2567_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
lean_ctor_set(v___x_2609_, 2, v___x_2536_);
v_minVer_2610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2610_, 0, v___x_2607_);
lean_ctor_set(v_minVer_2610_, 1, v_a_2545_);
v___x_2611_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2612_, 0, v___x_2609_);
lean_ctor_set(v_maxVer_2612_, 1, v___x_2611_);
v___x_2613_ = 3;
v___x_2614_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2614_, 0, v_minVer_2610_);
lean_ctor_set_uint8(v___x_2614_, sizeof(void*)*1, v___x_2613_);
lean_ctor_set_uint8(v___x_2614_, sizeof(void*)*1 + 1, v___x_2554_);
v___x_2615_ = lean_array_push(v_ands_2534_, v___x_2614_);
v___x_2616_ = 0;
v___x_2617_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2617_, 0, v_maxVer_2612_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*1, v___x_2616_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*1 + 1, v___x_2556_);
v___x_2618_ = lean_array_push(v___x_2615_, v___x_2617_);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 1, v_a_2546_);
lean_ctor_set(v___x_2542_, 0, v___x_2618_);
v___x_2620_ = v___x_2542_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2618_);
lean_ctor_set(v_reuseFailAlloc_2621_, 1, v_a_2546_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
else
{
uint8_t v___x_2622_; 
v___x_2622_ = lean_nat_dec_eq(v_val_2573_, v___x_2536_);
if (v___x_2622_ == 0)
{
lean_del_object(v___x_2542_);
goto v___jp_2574_;
}
else
{
lean_object* v___x_2623_; uint8_t v___x_2624_; 
v___x_2623_ = lean_string_utf8_byte_size(v_a_2545_);
v___x_2624_ = lean_nat_dec_eq(v___x_2623_, v___x_2536_);
if (v___x_2624_ == 0)
{
lean_del_object(v___x_2542_);
goto v___jp_2574_;
}
else
{
lean_object* v___x_2625_; lean_object* v___x_2627_; 
lean_dec(v_val_2573_);
lean_dec(v_val_2570_);
lean_dec(v_val_2567_);
lean_del_object(v___x_2548_);
lean_dec(v_a_2545_);
lean_dec_ref(v_ands_2534_);
v___x_2625_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1));
if (v_isShared_2543_ == 0)
{
lean_ctor_set_tag(v___x_2542_, 1);
lean_ctor_set(v___x_2542_, 1, v_a_2546_);
lean_ctor_set(v___x_2542_, 0, v___x_2625_);
v___x_2627_ = v___x_2542_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v___x_2625_);
lean_ctor_set(v_reuseFailAlloc_2628_, 1, v_a_2546_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
}
v___jp_2574_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v_minVer_2578_; lean_object* v___x_2579_; lean_object* v_maxVer_2580_; uint8_t v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2588_; 
lean_inc(v_val_2573_);
lean_inc(v_val_2570_);
lean_inc(v_val_2567_);
v___x_2575_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2575_, 0, v_val_2567_);
lean_ctor_set(v___x_2575_, 1, v_val_2570_);
lean_ctor_set(v___x_2575_, 2, v_val_2573_);
v___x_2576_ = lean_nat_add(v_val_2573_, v___x_2551_);
lean_dec(v_val_2573_);
v___x_2577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2577_, 0, v_val_2567_);
lean_ctor_set(v___x_2577_, 1, v_val_2570_);
lean_ctor_set(v___x_2577_, 2, v___x_2576_);
v_minVer_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2578_, 0, v___x_2575_);
lean_ctor_set(v_minVer_2578_, 1, v_a_2545_);
v___x_2579_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2580_, 0, v___x_2577_);
lean_ctor_set(v_maxVer_2580_, 1, v___x_2579_);
v___x_2581_ = 3;
v___x_2582_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2582_, 0, v_minVer_2578_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*1, v___x_2581_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*1 + 1, v___x_2554_);
v___x_2583_ = lean_array_push(v_ands_2534_, v___x_2582_);
v___x_2584_ = 0;
v___x_2585_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2585_, 0, v_maxVer_2580_);
lean_ctor_set_uint8(v___x_2585_, sizeof(void*)*1, v___x_2584_);
lean_ctor_set_uint8(v___x_2585_, sizeof(void*)*1 + 1, v___x_2556_);
v___x_2586_ = lean_array_push(v___x_2583_, v___x_2585_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2586_);
v___x_2588_ = v___x_2548_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
lean_ctor_set(v_reuseFailAlloc_2589_, 1, v_a_2546_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
else
{
lean_object* v_str_2629_; lean_object* v_startInclusive_2630_; lean_object* v_endExclusive_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2638_; 
lean_dec(v___x_2572_);
lean_dec(v_val_2570_);
lean_dec(v_val_2567_);
lean_dec(v_a_2545_);
lean_del_object(v___x_2542_);
lean_dec_ref(v_ands_2534_);
v_str_2629_ = lean_ctor_get(v___x_2571_, 0);
lean_inc_ref(v_str_2629_);
v_startInclusive_2630_ = lean_ctor_get(v___x_2571_, 1);
lean_inc(v_startInclusive_2630_);
v_endExclusive_2631_ = lean_ctor_get(v___x_2571_, 2);
lean_inc(v_endExclusive_2631_);
lean_dec(v___x_2571_);
v___x_2632_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3));
v___x_2633_ = lean_string_utf8_extract_fast(v_str_2629_, v_startInclusive_2630_, v_endExclusive_2631_);
lean_dec(v_endExclusive_2631_);
lean_dec(v_startInclusive_2630_);
lean_dec_ref(v_str_2629_);
v___x_2634_ = lean_string_append(v___x_2632_, v___x_2633_);
lean_dec_ref(v___x_2633_);
v___x_2635_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2636_ = lean_string_append(v___x_2634_, v___x_2635_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2636_);
v___x_2638_ = v___x_2548_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2636_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v_a_2546_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
else
{
lean_object* v_str_2640_; lean_object* v_startInclusive_2641_; lean_object* v_endExclusive_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2649_; 
lean_inc(v___x_2568_);
lean_dec(v___x_2569_);
lean_dec(v_val_2567_);
lean_dec(v_a_2545_);
lean_del_object(v___x_2542_);
lean_dec(v_a_2539_);
lean_dec_ref(v_ands_2534_);
v_str_2640_ = lean_ctor_get(v___x_2568_, 0);
lean_inc_ref(v_str_2640_);
v_startInclusive_2641_ = lean_ctor_get(v___x_2568_, 1);
lean_inc(v_startInclusive_2641_);
v_endExclusive_2642_ = lean_ctor_get(v___x_2568_, 2);
lean_inc(v_endExclusive_2642_);
lean_dec(v___x_2568_);
v___x_2643_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2644_ = lean_string_utf8_extract_fast(v_str_2640_, v_startInclusive_2641_, v_endExclusive_2642_);
lean_dec(v_endExclusive_2642_);
lean_dec(v_startInclusive_2641_);
lean_dec_ref(v_str_2640_);
v___x_2645_ = lean_string_append(v___x_2643_, v___x_2644_);
lean_dec_ref(v___x_2644_);
v___x_2646_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2647_ = lean_string_append(v___x_2645_, v___x_2646_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2647_);
v___x_2649_ = v___x_2548_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2647_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_a_2546_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
else
{
lean_object* v_str_2651_; lean_object* v_startInclusive_2652_; lean_object* v_endExclusive_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2660_; 
lean_inc(v___x_2565_);
lean_dec(v___x_2566_);
lean_dec(v_a_2545_);
lean_del_object(v___x_2542_);
lean_dec(v_a_2539_);
lean_dec_ref(v_ands_2534_);
v_str_2651_ = lean_ctor_get(v___x_2565_, 0);
lean_inc_ref(v_str_2651_);
v_startInclusive_2652_ = lean_ctor_get(v___x_2565_, 1);
lean_inc(v_startInclusive_2652_);
v_endExclusive_2653_ = lean_ctor_get(v___x_2565_, 2);
lean_inc(v_endExclusive_2653_);
lean_dec(v___x_2565_);
v___x_2654_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2655_ = lean_string_utf8_extract_fast(v_str_2651_, v_startInclusive_2652_, v_endExclusive_2653_);
lean_dec(v_endExclusive_2653_);
lean_dec(v_startInclusive_2652_);
lean_dec_ref(v_str_2651_);
v___x_2656_ = lean_string_append(v___x_2654_, v___x_2655_);
lean_dec_ref(v___x_2655_);
v___x_2657_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2658_ = lean_string_append(v___x_2656_, v___x_2657_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2658_);
v___x_2660_ = v___x_2548_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v___x_2658_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v_a_2546_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
return v___x_2660_;
}
}
}
}
else
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_del_object(v___x_2542_);
v___x_2662_ = lean_array_fget_borrowed(v_a_2539_, v___x_2536_);
v___x_2663_ = l_String_Slice_toNat_x3f(v___x_2662_);
if (lean_obj_tag(v___x_2663_) == 1)
{
lean_object* v_val_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v_val_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_val_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = lean_array_fget(v_a_2539_, v___x_2551_);
lean_dec(v_a_2539_);
v___x_2666_ = l_String_Slice_toNat_x3f(v___x_2665_);
if (lean_obj_tag(v___x_2666_) == 1)
{
lean_object* v_val_2667_; uint8_t v___x_2668_; 
lean_dec(v___x_2665_);
v_val_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_val_2667_);
lean_dec_ref_known(v___x_2666_, 1);
v___x_2668_ = lean_nat_dec_eq(v_val_2664_, v___x_2536_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v_minVer_2672_; lean_object* v___x_2673_; lean_object* v_maxVer_2674_; uint8_t v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; uint8_t v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
lean_inc(v_val_2664_);
v___x_2669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2669_, 0, v_val_2664_);
lean_ctor_set(v___x_2669_, 1, v_val_2667_);
lean_ctor_set(v___x_2669_, 2, v___x_2536_);
v___x_2670_ = lean_nat_add(v_val_2664_, v___x_2551_);
lean_dec(v_val_2664_);
v___x_2671_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set(v___x_2671_, 1, v___x_2536_);
lean_ctor_set(v___x_2671_, 2, v___x_2536_);
v_minVer_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2672_, 0, v___x_2669_);
lean_ctor_set(v_minVer_2672_, 1, v_a_2545_);
v___x_2673_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2674_, 0, v___x_2671_);
lean_ctor_set(v_maxVer_2674_, 1, v___x_2673_);
v___x_2675_ = 3;
v___x_2676_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2676_, 0, v_minVer_2672_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*1, v___x_2675_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*1 + 1, v___x_2552_);
v___x_2677_ = lean_array_push(v_ands_2534_, v___x_2676_);
v___x_2678_ = 0;
v___x_2679_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2679_, 0, v_maxVer_2674_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*1, v___x_2678_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*1 + 1, v___x_2554_);
v___x_2680_ = lean_array_push(v___x_2677_, v___x_2679_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2680_);
v___x_2682_ = v___x_2548_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v_a_2546_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v_minVer_2687_; lean_object* v___x_2688_; lean_object* v_maxVer_2689_; uint8_t v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; uint8_t v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2697_; 
lean_inc(v_val_2667_);
lean_inc(v_val_2664_);
v___x_2684_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2684_, 0, v_val_2664_);
lean_ctor_set(v___x_2684_, 1, v_val_2667_);
lean_ctor_set(v___x_2684_, 2, v___x_2536_);
v___x_2685_ = lean_nat_add(v_val_2667_, v___x_2551_);
lean_dec(v_val_2667_);
v___x_2686_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2686_, 0, v_val_2664_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
lean_ctor_set(v___x_2686_, 2, v___x_2536_);
v_minVer_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2687_, 0, v___x_2684_);
lean_ctor_set(v_minVer_2687_, 1, v_a_2545_);
v___x_2688_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2689_, 0, v___x_2686_);
lean_ctor_set(v_maxVer_2689_, 1, v___x_2688_);
v___x_2690_ = 3;
v___x_2691_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2691_, 0, v_minVer_2687_);
lean_ctor_set_uint8(v___x_2691_, sizeof(void*)*1, v___x_2690_);
lean_ctor_set_uint8(v___x_2691_, sizeof(void*)*1 + 1, v___x_2552_);
v___x_2692_ = lean_array_push(v_ands_2534_, v___x_2691_);
v___x_2693_ = 0;
v___x_2694_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2694_, 0, v_maxVer_2689_);
lean_ctor_set_uint8(v___x_2694_, sizeof(void*)*1, v___x_2693_);
lean_ctor_set_uint8(v___x_2694_, sizeof(void*)*1 + 1, v___x_2554_);
v___x_2695_ = lean_array_push(v___x_2692_, v___x_2694_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2695_);
v___x_2697_ = v___x_2548_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2695_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v_a_2546_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
else
{
lean_object* v_str_2699_; lean_object* v_startInclusive_2700_; lean_object* v_endExclusive_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
lean_dec(v___x_2666_);
lean_dec(v_val_2664_);
lean_dec(v_a_2545_);
lean_dec_ref(v_ands_2534_);
v_str_2699_ = lean_ctor_get(v___x_2665_, 0);
lean_inc_ref(v_str_2699_);
v_startInclusive_2700_ = lean_ctor_get(v___x_2665_, 1);
lean_inc(v_startInclusive_2700_);
v_endExclusive_2701_ = lean_ctor_get(v___x_2665_, 2);
lean_inc(v_endExclusive_2701_);
lean_dec(v___x_2665_);
v___x_2702_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2703_ = lean_string_utf8_extract_fast(v_str_2699_, v_startInclusive_2700_, v_endExclusive_2701_);
lean_dec(v_endExclusive_2701_);
lean_dec(v_startInclusive_2700_);
lean_dec_ref(v_str_2699_);
v___x_2704_ = lean_string_append(v___x_2702_, v___x_2703_);
lean_dec_ref(v___x_2703_);
v___x_2705_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2706_ = lean_string_append(v___x_2704_, v___x_2705_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2706_);
v___x_2708_ = v___x_2548_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2706_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v_a_2546_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
else
{
lean_object* v_str_2710_; lean_object* v_startInclusive_2711_; lean_object* v_endExclusive_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
lean_inc(v___x_2662_);
lean_dec(v___x_2663_);
lean_dec(v_a_2545_);
lean_dec(v_a_2539_);
lean_dec_ref(v_ands_2534_);
v_str_2710_ = lean_ctor_get(v___x_2662_, 0);
lean_inc_ref(v_str_2710_);
v_startInclusive_2711_ = lean_ctor_get(v___x_2662_, 1);
lean_inc(v_startInclusive_2711_);
v_endExclusive_2712_ = lean_ctor_get(v___x_2662_, 2);
lean_inc(v_endExclusive_2712_);
lean_dec(v___x_2662_);
v___x_2713_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2714_ = lean_string_utf8_extract_fast(v_str_2710_, v_startInclusive_2711_, v_endExclusive_2712_);
lean_dec(v_endExclusive_2712_);
lean_dec(v_startInclusive_2711_);
lean_dec_ref(v_str_2710_);
v___x_2715_ = lean_string_append(v___x_2713_, v___x_2714_);
lean_dec_ref(v___x_2714_);
v___x_2716_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2717_ = lean_string_append(v___x_2715_, v___x_2716_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2717_);
v___x_2719_ = v___x_2548_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_a_2546_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
else
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_del_object(v___x_2542_);
v___x_2721_ = lean_array_fget(v_a_2539_, v___x_2536_);
lean_dec(v_a_2539_);
v___x_2722_ = l_String_Slice_toNat_x3f(v___x_2721_);
if (lean_obj_tag(v___x_2722_) == 1)
{
lean_object* v_val_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v_minVer_2727_; lean_object* v___x_2728_; lean_object* v_maxVer_2729_; uint8_t v___x_2730_; uint8_t v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; uint8_t v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2738_; 
lean_dec(v___x_2721_);
v_val_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc_n(v_val_2723_, 2);
lean_dec_ref_known(v___x_2722_, 1);
v___x_2724_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2724_, 0, v_val_2723_);
lean_ctor_set(v___x_2724_, 1, v___x_2536_);
lean_ctor_set(v___x_2724_, 2, v___x_2536_);
v___x_2725_ = lean_nat_add(v_val_2723_, v___x_2551_);
lean_dec(v_val_2723_);
v___x_2726_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
lean_ctor_set(v___x_2726_, 1, v___x_2536_);
lean_ctor_set(v___x_2726_, 2, v___x_2536_);
v_minVer_2727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2727_, 0, v___x_2724_);
lean_ctor_set(v_minVer_2727_, 1, v_a_2545_);
v___x_2728_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2729_, 0, v___x_2726_);
lean_ctor_set(v_maxVer_2729_, 1, v___x_2728_);
v___x_2730_ = 3;
v___x_2731_ = 0;
v___x_2732_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2732_, 0, v_minVer_2727_);
lean_ctor_set_uint8(v___x_2732_, sizeof(void*)*1, v___x_2730_);
lean_ctor_set_uint8(v___x_2732_, sizeof(void*)*1 + 1, v___x_2731_);
v___x_2733_ = lean_array_push(v_ands_2534_, v___x_2732_);
v___x_2734_ = 0;
v___x_2735_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2735_, 0, v_maxVer_2729_);
lean_ctor_set_uint8(v___x_2735_, sizeof(void*)*1, v___x_2734_);
lean_ctor_set_uint8(v___x_2735_, sizeof(void*)*1 + 1, v___x_2552_);
v___x_2736_ = lean_array_push(v___x_2733_, v___x_2735_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2736_);
v___x_2738_ = v___x_2548_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2736_);
lean_ctor_set(v_reuseFailAlloc_2739_, 1, v_a_2546_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
else
{
lean_object* v_str_2740_; lean_object* v_startInclusive_2741_; lean_object* v_endExclusive_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
lean_dec(v___x_2722_);
lean_dec(v_a_2545_);
lean_dec_ref(v_ands_2534_);
v_str_2740_ = lean_ctor_get(v___x_2721_, 0);
lean_inc_ref(v_str_2740_);
v_startInclusive_2741_ = lean_ctor_get(v___x_2721_, 1);
lean_inc(v_startInclusive_2741_);
v_endExclusive_2742_ = lean_ctor_get(v___x_2721_, 2);
lean_inc(v_endExclusive_2742_);
lean_dec(v___x_2721_);
v___x_2743_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2744_ = lean_string_utf8_extract_fast(v_str_2740_, v_startInclusive_2741_, v_endExclusive_2742_);
lean_dec(v_endExclusive_2742_);
lean_dec(v_startInclusive_2741_);
lean_dec_ref(v_str_2740_);
v___x_2745_ = lean_string_append(v___x_2743_, v___x_2744_);
lean_dec_ref(v___x_2744_);
v___x_2746_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2747_ = lean_string_append(v___x_2745_, v___x_2746_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 1);
lean_ctor_set(v___x_2548_, 0, v___x_2747_);
v___x_2749_ = v___x_2548_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v___x_2747_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v_a_2546_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_del_object(v___x_2542_);
lean_dec(v_a_2539_);
lean_dec_ref(v_ands_2534_);
v_a_2752_ = lean_ctor_get(v___x_2544_, 0);
v_a_2753_ = lean_ctor_get(v___x_2544_, 1);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2544_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_inc(v_a_2752_);
lean_dec(v___x_2544_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2752_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild(lean_object* v_s_2767_, lean_object* v_ands_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v___y_2771_; lean_object* v___y_2775_; lean_object* v___y_2780_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v_a_2786_; lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2933_; 
v___x_2783_ = lean_unsigned_to_nat(0u);
v___x_2784_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_2769_);
lean_inc_ref(v_s_2767_);
v___x_2785_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_2767_, v___x_2784_, v_a_2769_, v_a_2769_);
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
v_a_2787_ = lean_ctor_get(v___x_2785_, 1);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2789_ = v___x_2785_;
v_isShared_2790_ = v_isSharedCheck_2933_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_inc(v_a_2786_);
lean_dec(v___x_2785_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2933_;
goto v_resetjp_2788_;
}
v___jp_2770_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0));
v___x_2773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
lean_ctor_set(v___x_2773_, 1, v___y_2771_);
return v___x_2773_;
}
v___jp_2774_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2776_ = ((lean_object*)(l_Lake_VerComparator_wild));
v___x_2777_ = lean_array_push(v_ands_2768_, v___x_2776_);
v___x_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v___y_2775_);
return v___x_2778_;
}
v___jp_2779_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1));
v___x_2782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
lean_ctor_set(v___x_2782_, 1, v___y_2780_);
return v___x_2782_;
}
v_resetjp_2788_:
{
lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___x_2906_; lean_object* v___y_2908_; lean_object* v___x_2928_; uint8_t v___x_2929_; 
v___x_2906_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__1));
v___x_2928_ = lean_array_get_size(v_a_2786_);
v___x_2929_ = lean_nat_dec_lt(v___x_2783_, v___x_2928_);
if (v___x_2929_ == 0)
{
lean_object* v___x_2930_; 
v___x_2930_ = lean_box(0);
v___y_2908_ = v___x_2930_;
goto v___jp_2907_;
}
else
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_array_fget_borrowed(v_a_2786_, v___x_2783_);
lean_inc(v___x_2931_);
v___x_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
v___y_2908_ = v___x_2932_;
goto v___jp_2907_;
}
v___jp_2791_:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; 
v___x_2797_ = lean_unsigned_to_nat(3u);
v___x_2798_ = lean_array_get_size(v_a_2786_);
lean_dec(v_a_2786_);
v___x_2799_ = lean_nat_dec_lt(v___x_2797_, v___x_2798_);
if (v___x_2799_ == 0)
{
switch(lean_obj_tag(v___y_2796_))
{
case 2:
{
switch(lean_obj_tag(v___y_2793_))
{
case 2:
{
if (lean_obj_tag(v___y_2792_) == 1)
{
lean_object* v_n_2800_; lean_object* v_n_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v_minVer_2806_; lean_object* v_maxVer_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; uint8_t v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2816_; 
v_n_2800_ = lean_ctor_get(v___y_2796_, 0);
lean_inc_n(v_n_2800_, 2);
lean_dec_ref_known(v___y_2796_, 1);
v_n_2801_ = lean_ctor_get(v___y_2793_, 0);
lean_inc_n(v_n_2801_, 2);
lean_dec_ref_known(v___y_2793_, 1);
v___x_2802_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2802_, 0, v_n_2800_);
lean_ctor_set(v___x_2802_, 1, v_n_2801_);
lean_ctor_set(v___x_2802_, 2, v___x_2783_);
v___x_2803_ = lean_nat_add(v_n_2801_, v___y_2795_);
lean_dec(v_n_2801_);
v___x_2804_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2804_, 0, v_n_2800_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
lean_ctor_set(v___x_2804_, 2, v___x_2783_);
v___x_2805_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_minVer_2806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2806_, 0, v___x_2802_);
lean_ctor_set(v_minVer_2806_, 1, v___x_2805_);
v_maxVer_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2807_, 0, v___x_2804_);
lean_ctor_set(v_maxVer_2807_, 1, v___x_2805_);
v___x_2808_ = 3;
v___x_2809_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2809_, 0, v_minVer_2806_);
lean_ctor_set_uint8(v___x_2809_, sizeof(void*)*1, v___x_2808_);
lean_ctor_set_uint8(v___x_2809_, sizeof(void*)*1 + 1, v___x_2799_);
v___x_2810_ = lean_array_push(v_ands_2768_, v___x_2809_);
v___x_2811_ = 0;
v___x_2812_ = 1;
v___x_2813_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2813_, 0, v_maxVer_2807_);
lean_ctor_set_uint8(v___x_2813_, sizeof(void*)*1, v___x_2811_);
lean_ctor_set_uint8(v___x_2813_, sizeof(void*)*1 + 1, v___x_2812_);
v___x_2814_ = lean_array_push(v___x_2810_, v___x_2813_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 1, v___y_2794_);
lean_ctor_set(v___x_2789_, 0, v___x_2814_);
v___x_2816_ = v___x_2789_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v___y_2794_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
else
{
lean_dec_ref_known(v___y_2793_, 1);
lean_dec_ref_known(v___y_2796_, 1);
lean_dec(v___y_2792_);
lean_del_object(v___x_2789_);
lean_dec_ref(v_ands_2768_);
v___y_2780_ = v___y_2794_;
goto v___jp_2779_;
}
}
case 1:
{
if (lean_obj_tag(v___y_2792_) == 2)
{
lean_dec_ref_known(v___y_2792_, 1);
lean_dec_ref_known(v___y_2796_, 1);
lean_del_object(v___x_2789_);
lean_dec_ref(v_ands_2768_);
v___y_2771_ = v___y_2794_;
goto v___jp_2770_;
}
else
{
lean_object* v_n_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v_minVer_2823_; lean_object* v_maxVer_2824_; uint8_t v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; uint8_t v___x_2828_; uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2833_; 
lean_dec(v___y_2792_);
v_n_2818_ = lean_ctor_get(v___y_2796_, 0);
lean_inc_n(v_n_2818_, 2);
lean_dec_ref_known(v___y_2796_, 1);
v___x_2819_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2819_, 0, v_n_2818_);
lean_ctor_set(v___x_2819_, 1, v___x_2783_);
lean_ctor_set(v___x_2819_, 2, v___x_2783_);
v___x_2820_ = lean_nat_add(v_n_2818_, v___y_2795_);
lean_dec(v_n_2818_);
v___x_2821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
lean_ctor_set(v___x_2821_, 1, v___x_2783_);
lean_ctor_set(v___x_2821_, 2, v___x_2783_);
v___x_2822_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_minVer_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2823_, 0, v___x_2819_);
lean_ctor_set(v_minVer_2823_, 1, v___x_2822_);
v_maxVer_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2824_, 0, v___x_2821_);
lean_ctor_set(v_maxVer_2824_, 1, v___x_2822_);
v___x_2825_ = 3;
v___x_2826_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2826_, 0, v_minVer_2823_);
lean_ctor_set_uint8(v___x_2826_, sizeof(void*)*1, v___x_2825_);
lean_ctor_set_uint8(v___x_2826_, sizeof(void*)*1 + 1, v___x_2799_);
v___x_2827_ = lean_array_push(v_ands_2768_, v___x_2826_);
v___x_2828_ = 0;
v___x_2829_ = 1;
v___x_2830_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2830_, 0, v_maxVer_2824_);
lean_ctor_set_uint8(v___x_2830_, sizeof(void*)*1, v___x_2828_);
lean_ctor_set_uint8(v___x_2830_, sizeof(void*)*1 + 1, v___x_2829_);
v___x_2831_ = lean_array_push(v___x_2827_, v___x_2830_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 1, v___y_2794_);
lean_ctor_set(v___x_2789_, 0, v___x_2831_);
v___x_2833_ = v___x_2789_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2831_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v___y_2794_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
default: 
{
lean_dec_ref_known(v___y_2796_, 1);
lean_dec(v___y_2793_);
lean_dec(v___y_2792_);
lean_del_object(v___x_2789_);
lean_dec_ref(v_ands_2768_);
v___y_2780_ = v___y_2794_;
goto v___jp_2779_;
}
}
}
case 1:
{
if (lean_obj_tag(v___y_2792_) == 2)
{
lean_dec_ref_known(v___y_2792_, 1);
lean_dec(v___y_2793_);
lean_del_object(v___x_2789_);
lean_dec_ref(v_ands_2768_);
v___y_2771_ = v___y_2794_;
goto v___jp_2770_;
}
else
{
lean_dec(v___y_2792_);
if (lean_obj_tag(v___y_2793_) == 2)
{
lean_object* v___x_2835_; lean_object* v___x_2837_; 
lean_dec_ref_known(v___y_2793_, 1);
lean_dec_ref(v_ands_2768_);
v___x_2835_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2));
if (v_isShared_2790_ == 0)
{
lean_ctor_set_tag(v___x_2789_, 1);
lean_ctor_set(v___x_2789_, 1, v___y_2794_);
lean_ctor_set(v___x_2789_, 0, v___x_2835_);
v___x_2837_ = v___x_2789_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2835_);
lean_ctor_set(v_reuseFailAlloc_2838_, 1, v___y_2794_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
else
{
lean_dec(v___y_2793_);
lean_del_object(v___x_2789_);
v___y_2775_ = v___y_2794_;
goto v___jp_2774_;
}
}
}
default: 
{
lean_dec(v___y_2796_);
lean_del_object(v___x_2789_);
if (lean_obj_tag(v___y_2793_) == 1)
{
if (lean_obj_tag(v___y_2792_) == 2)
{
lean_dec_ref_known(v___y_2792_, 1);
lean_dec_ref(v_ands_2768_);
v___y_2771_ = v___y_2794_;
goto v___jp_2770_;
}
else
{
lean_dec(v___y_2792_);
v___y_2775_ = v___y_2794_;
goto v___jp_2774_;
}
}
else
{
lean_dec(v___y_2793_);
lean_dec(v___y_2792_);
v___y_2775_ = v___y_2794_;
goto v___jp_2774_;
}
}
}
}
else
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2845_; 
lean_dec(v___y_2796_);
lean_dec(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v_ands_2768_);
v___x_2839_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3));
v___x_2840_ = l_Nat_reprFast(v___x_2798_);
v___x_2841_ = lean_string_append(v___x_2839_, v___x_2840_);
lean_dec_ref(v___x_2840_);
v___x_2842_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1));
v___x_2843_ = lean_string_append(v___x_2841_, v___x_2842_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set_tag(v___x_2789_, 1);
lean_ctor_set(v___x_2789_, 1, v___y_2794_);
lean_ctor_set(v___x_2789_, 0, v___x_2843_);
v___x_2845_ = v___x_2789_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2843_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v___y_2794_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
v___jp_2847_:
{
lean_object* v___x_2854_; 
v___x_2854_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v___y_2848_, v___y_2853_, v___y_2849_);
lean_dec(v___y_2853_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v_a_2855_; lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2871_; 
v_a_2855_ = lean_ctor_get(v___x_2854_, 0);
v_a_2856_ = lean_ctor_get(v___x_2854_, 1);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2858_ = v___x_2854_;
v_isShared_2859_ = v_isSharedCheck_2871_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_inc(v_a_2855_);
lean_dec(v___x_2854_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2871_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2860_ = lean_string_utf8_byte_size(v_s_2767_);
v___x_2861_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2861_, 0, v_s_2767_);
lean_ctor_set(v___x_2861_, 1, v___x_2783_);
lean_ctor_set(v___x_2861_, 2, v___x_2860_);
v___x_2862_ = l_String_Slice_Pos_get_x3f(v___x_2861_, v_a_2856_);
lean_dec_ref_known(v___x_2861_, 3);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_del_object(v___x_2858_);
v___y_2792_ = v_a_2855_;
v___y_2793_ = v___y_2850_;
v___y_2794_ = v_a_2856_;
v___y_2795_ = v___y_2851_;
v___y_2796_ = v___y_2852_;
goto v___jp_2791_;
}
else
{
lean_object* v_val_2863_; uint32_t v___x_2864_; uint32_t v___x_2865_; uint8_t v___x_2866_; 
v_val_2863_ = lean_ctor_get(v___x_2862_, 0);
lean_inc(v_val_2863_);
lean_dec_ref_known(v___x_2862_, 1);
v___x_2864_ = 45;
v___x_2865_ = lean_unbox_uint32(v_val_2863_);
lean_dec(v_val_2863_);
v___x_2866_ = lean_uint32_dec_eq(v___x_2865_, v___x_2864_);
if (v___x_2866_ == 0)
{
lean_del_object(v___x_2858_);
v___y_2792_ = v_a_2855_;
v___y_2793_ = v___y_2850_;
v___y_2794_ = v_a_2856_;
v___y_2795_ = v___y_2851_;
v___y_2796_ = v___y_2852_;
goto v___jp_2791_;
}
else
{
lean_object* v___x_2867_; lean_object* v___x_2869_; 
lean_dec(v_a_2855_);
lean_dec(v___y_2852_);
lean_dec(v___y_2850_);
lean_del_object(v___x_2789_);
lean_dec(v_a_2786_);
lean_dec_ref(v_ands_2768_);
v___x_2867_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4));
if (v_isShared_2859_ == 0)
{
lean_ctor_set_tag(v___x_2858_, 1);
lean_ctor_set(v___x_2858_, 0, v___x_2867_);
v___x_2869_ = v___x_2858_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2867_);
lean_ctor_set(v_reuseFailAlloc_2870_, 1, v_a_2856_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v___y_2852_);
lean_dec(v___y_2850_);
lean_del_object(v___x_2789_);
lean_dec(v_a_2786_);
lean_dec_ref(v_ands_2768_);
lean_dec_ref(v_s_2767_);
v_a_2872_ = lean_ctor_get(v___x_2854_, 0);
v_a_2873_ = lean_ctor_get(v___x_2854_, 1);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2854_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_inc(v_a_2872_);
lean_dec(v___x_2854_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2872_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
v___jp_2881_:
{
lean_object* v___x_2887_; 
v___x_2887_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v___y_2884_, v___y_2886_, v___y_2883_);
lean_dec(v___y_2886_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; lean_object* v_a_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; uint8_t v___x_2893_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2888_);
v_a_2889_ = lean_ctor_get(v___x_2887_, 1);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2887_, 2);
v___x_2890_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__12));
v___x_2891_ = lean_unsigned_to_nat(2u);
v___x_2892_ = lean_array_get_size(v_a_2786_);
v___x_2893_ = lean_nat_dec_lt(v___x_2891_, v___x_2892_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2894_; 
v___x_2894_ = lean_box(0);
v___y_2848_ = v___x_2890_;
v___y_2849_ = v_a_2889_;
v___y_2850_ = v_a_2888_;
v___y_2851_ = v___y_2882_;
v___y_2852_ = v___y_2885_;
v___y_2853_ = v___x_2894_;
goto v___jp_2847_;
}
else
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2895_ = lean_array_fget_borrowed(v_a_2786_, v___x_2891_);
lean_inc(v___x_2895_);
v___x_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
v___y_2848_ = v___x_2890_;
v___y_2849_ = v_a_2889_;
v___y_2850_ = v_a_2888_;
v___y_2851_ = v___y_2882_;
v___y_2852_ = v___y_2885_;
v___y_2853_ = v___x_2896_;
goto v___jp_2847_;
}
}
else
{
lean_object* v_a_2897_; lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2905_; 
lean_dec(v___y_2885_);
lean_del_object(v___x_2789_);
lean_dec(v_a_2786_);
lean_dec_ref(v_ands_2768_);
lean_dec_ref(v_s_2767_);
v_a_2897_ = lean_ctor_get(v___x_2887_, 0);
v_a_2898_ = lean_ctor_get(v___x_2887_, 1);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2900_ = v___x_2887_;
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_inc(v_a_2897_);
lean_dec(v___x_2887_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v_a_2897_);
lean_ctor_set(v_reuseFailAlloc_2904_, 1, v_a_2898_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
v___jp_2907_:
{
lean_object* v___x_2909_; 
v___x_2909_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v___x_2906_, v___y_2908_, v_a_2787_);
lean_dec(v___y_2908_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; lean_object* v_a_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
v_a_2911_ = lean_ctor_get(v___x_2909_, 1);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2909_, 2);
v___x_2912_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__10));
v___x_2913_ = lean_unsigned_to_nat(1u);
v___x_2914_ = lean_array_get_size(v_a_2786_);
v___x_2915_ = lean_nat_dec_lt(v___x_2913_, v___x_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_box(0);
v___y_2882_ = v___x_2913_;
v___y_2883_ = v_a_2911_;
v___y_2884_ = v___x_2912_;
v___y_2885_ = v_a_2910_;
v___y_2886_ = v___x_2916_;
goto v___jp_2881_;
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = lean_array_fget_borrowed(v_a_2786_, v___x_2913_);
lean_inc(v___x_2917_);
v___x_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2917_);
v___y_2882_ = v___x_2913_;
v___y_2883_ = v_a_2911_;
v___y_2884_ = v___x_2912_;
v___y_2885_ = v_a_2910_;
v___y_2886_ = v___x_2918_;
goto v___jp_2881_;
}
}
else
{
lean_object* v_a_2919_; lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_del_object(v___x_2789_);
lean_dec(v_a_2786_);
lean_dec_ref(v_ands_2768_);
lean_dec_ref(v_s_2767_);
v_a_2919_ = lean_ctor_get(v___x_2909_, 0);
v_a_2920_ = lean_ctor_get(v___x_2909_, 1);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2909_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_inc(v_a_2919_);
lean_dec(v___x_2909_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2919_);
lean_ctor_set(v_reuseFailAlloc_2926_, 1, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(lean_object* v_s_2940_, uint8_t v_needsRange_2941_, lean_object* v_ors_2942_, lean_object* v_ands_2943_, lean_object* v_p_2944_){
_start:
{
lean_object* v___x_2951_; uint8_t v_decide_2952_; 
v___x_2951_ = lean_string_utf8_byte_size(v_s_2940_);
v_decide_2952_ = lean_nat_dec_eq(v_p_2944_, v___x_2951_);
if (v_decide_2952_ == 0)
{
uint32_t v_c_2967_; uint32_t v___x_3066_; uint8_t v___x_3067_; 
v_c_2967_ = lean_string_utf8_get_fast(v_s_2940_, v_p_2944_);
v___x_3066_ = 65;
v___x_3067_ = lean_uint32_dec_le(v___x_3066_, v_c_2967_);
if (v___x_3067_ == 0)
{
goto v___jp_3061_;
}
else
{
uint32_t v___x_3068_; uint8_t v___x_3069_; 
v___x_3068_ = 90;
v___x_3069_ = lean_uint32_dec_le(v_c_2967_, v___x_3068_);
if (v___x_3069_ == 0)
{
goto v___jp_3061_;
}
else
{
goto v___jp_2953_;
}
}
v___jp_2968_:
{
uint32_t v___x_2969_; uint8_t v___x_2970_; 
v___x_2969_ = 42;
v___x_2970_ = lean_uint32_dec_eq(v_c_2967_, v___x_2969_);
if (v___x_2970_ == 0)
{
uint32_t v___x_2971_; uint8_t v___x_2972_; 
v___x_2971_ = 94;
v___x_2972_ = lean_uint32_dec_eq(v_c_2967_, v___x_2971_);
if (v___x_2972_ == 0)
{
uint32_t v___x_2973_; uint8_t v___x_2974_; 
v___x_2973_ = 126;
v___x_2974_ = lean_uint32_dec_eq(v_c_2967_, v___x_2973_);
if (v___x_2974_ == 0)
{
uint32_t v___x_2975_; uint8_t v___x_2976_; 
v___x_2975_ = 32;
v___x_2976_ = lean_uint32_dec_eq(v_c_2967_, v___x_2975_);
if (v___x_2976_ == 0)
{
uint32_t v___x_2977_; uint8_t v___x_2978_; 
v___x_2977_ = 9;
v___x_2978_ = lean_uint32_dec_eq(v_c_2967_, v___x_2977_);
if (v___x_2978_ == 0)
{
uint32_t v___x_2979_; uint8_t v___x_2980_; 
v___x_2979_ = 13;
v___x_2980_ = lean_uint32_dec_eq(v_c_2967_, v___x_2979_);
if (v___x_2980_ == 0)
{
uint32_t v___x_2981_; uint8_t v___x_2982_; 
v___x_2981_ = 10;
v___x_2982_ = lean_uint32_dec_eq(v_c_2967_, v___x_2981_);
if (v___x_2982_ == 0)
{
uint32_t v___x_2983_; uint8_t v___x_2984_; 
v___x_2983_ = 44;
v___x_2984_ = lean_uint32_dec_eq(v_c_2967_, v___x_2983_);
if (v___x_2984_ == 0)
{
uint32_t v___x_2985_; uint8_t v___x_2986_; 
v___x_2985_ = 124;
v___x_2986_ = lean_uint32_dec_eq(v_c_2967_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; 
lean_inc_ref(v_s_2940_);
v___x_2987_ = l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(v_s_2940_, v_p_2944_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v_a_2989_; lean_object* v___x_2990_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
v_a_2989_ = lean_ctor_get(v___x_2987_, 1);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2987_, 2);
v___x_2990_ = lean_array_push(v_ands_2943_, v_a_2988_);
v_needsRange_2941_ = v_decide_2952_;
v_ands_2943_ = v___x_2990_;
v_p_2944_ = v_a_2989_;
goto _start;
}
else
{
lean_object* v_a_2992_; lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v_a_2992_ = lean_ctor_get(v___x_2987_, 0);
v_a_2993_ = lean_ctor_get(v___x_2987_, 1);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2987_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_inc(v_a_2992_);
lean_dec(v___x_2987_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2992_);
lean_ctor_set(v_reuseFailAlloc_2999_, 1, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
else
{
lean_object* v_p_3001_; uint8_t v_decide_3002_; 
v_p_3001_ = lean_string_utf8_next_fast(v_s_2940_, v_p_2944_);
lean_dec(v_p_2944_);
v_decide_3002_ = lean_nat_dec_eq(v_p_3001_, v___x_2951_);
if (v_decide_3002_ == 0)
{
uint32_t v___x_3003_; uint8_t v___x_3004_; 
v___x_3003_ = lean_string_utf8_get_fast(v_s_2940_, v_p_3001_);
v___x_3004_ = lean_uint32_dec_eq(v___x_3003_, v___x_2985_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v___x_3005_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1));
v___x_3006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
lean_ctor_set(v___x_3006_, 1, v_p_3001_);
return v___x_3006_;
}
else
{
lean_object* v___x_3007_; lean_object* v___x_3008_; uint8_t v___x_3009_; 
v___x_3007_ = lean_array_get_size(v_ands_2943_);
v___x_3008_ = lean_unsigned_to_nat(0u);
v___x_3009_ = lean_nat_dec_eq(v___x_3007_, v___x_3008_);
if (v___x_3009_ == 0)
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3010_ = lean_array_push(v_ors_2942_, v_ands_2943_);
v___x_3011_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2));
v___x_3012_ = lean_string_utf8_next_fast(v_s_2940_, v_p_3001_);
v_needsRange_2941_ = v___x_3004_;
v_ors_2942_ = v___x_3010_;
v_ands_2943_ = v___x_3011_;
v_p_2944_ = v___x_3012_;
goto _start;
}
else
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v___x_3014_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0));
v___x_3015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3015_, 0, v___x_3014_);
lean_ctor_set(v___x_3015_, 1, v_p_3001_);
return v___x_3015_;
}
}
}
else
{
lean_object* v___x_3016_; lean_object* v___x_3017_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v___x_3016_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1));
v___x_3017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
lean_ctor_set(v___x_3017_, 1, v_p_3001_);
return v___x_3017_;
}
}
}
else
{
if (v_needsRange_2941_ == 0)
{
lean_object* v___x_3018_; 
v___x_3018_ = lean_string_utf8_next_fast(v_s_2940_, v_p_2944_);
lean_dec(v_p_2944_);
v_needsRange_2941_ = v___x_2984_;
v_p_2944_ = v___x_3018_;
goto _start;
}
else
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v___x_3020_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0));
v___x_3021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
lean_ctor_set(v___x_3021_, 1, v_p_2944_);
return v___x_3021_;
}
}
}
else
{
goto v___jp_2948_;
}
}
else
{
goto v___jp_2948_;
}
}
else
{
goto v___jp_2948_;
}
}
else
{
goto v___jp_2948_;
}
}
else
{
lean_object* v_p_3022_; uint8_t v_decide_3023_; 
v_p_3022_ = lean_string_utf8_next_fast(v_s_2940_, v_p_2944_);
lean_dec(v_p_2944_);
v_decide_3023_ = lean_nat_dec_eq(v_p_3022_, v___x_2951_);
if (v_decide_3023_ == 0)
{
lean_object* v___x_3024_; 
lean_inc_ref(v_s_2940_);
v___x_3024_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde(v_s_2940_, v_ands_2943_, v_p_3022_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v_a_3026_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
v_a_3026_ = lean_ctor_get(v___x_3024_, 1);
lean_inc(v_a_3026_);
lean_dec_ref_known(v___x_3024_, 2);
v_needsRange_2941_ = v_decide_2952_;
v_ands_2943_ = v_a_3025_;
v_p_2944_ = v_a_3026_;
goto _start;
}
else
{
lean_object* v_a_3028_; lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3036_; 
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v_a_3028_ = lean_ctor_get(v___x_3024_, 0);
v_a_3029_ = lean_ctor_get(v___x_3024_, 1);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_3031_ = v___x_3024_;
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_inc(v_a_3028_);
lean_dec(v___x_3024_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3034_; 
if (v_isShared_3032_ == 0)
{
v___x_3034_ = v___x_3031_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v_a_3028_);
lean_ctor_set(v_reuseFailAlloc_3035_, 1, v_a_3029_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
}
}
else
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v___x_3037_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3));
v___x_3038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
lean_ctor_set(v___x_3038_, 1, v_p_3022_);
return v___x_3038_;
}
}
}
else
{
lean_object* v_p_3039_; uint8_t v_decide_3040_; 
v_p_3039_ = lean_string_utf8_next_fast(v_s_2940_, v_p_2944_);
lean_dec(v_p_2944_);
v_decide_3040_ = lean_nat_dec_eq(v_p_3039_, v___x_2951_);
if (v_decide_3040_ == 0)
{
lean_object* v___x_3041_; 
lean_inc_ref(v_s_2940_);
v___x_3041_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret(v_s_2940_, v_ands_2943_, v_p_3039_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v_a_3042_; lean_object* v_a_3043_; 
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3042_);
v_a_3043_ = lean_ctor_get(v___x_3041_, 1);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3041_, 2);
v_needsRange_2941_ = v_decide_2952_;
v_ands_2943_ = v_a_3042_;
v_p_2944_ = v_a_3043_;
goto _start;
}
else
{
lean_object* v_a_3045_; lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v_a_3045_ = lean_ctor_get(v___x_3041_, 0);
v_a_3046_ = lean_ctor_get(v___x_3041_, 1);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3041_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_inc(v_a_3045_);
lean_dec(v___x_3041_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3045_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
else
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v___x_3054_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4));
v___x_3055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
lean_ctor_set(v___x_3055_, 1, v_p_3039_);
return v___x_3055_;
}
}
}
else
{
goto v___jp_2953_;
}
}
v___jp_3056_:
{
uint32_t v___x_3057_; uint8_t v___x_3058_; 
v___x_3057_ = 48;
v___x_3058_ = lean_uint32_dec_le(v___x_3057_, v_c_2967_);
if (v___x_3058_ == 0)
{
goto v___jp_2968_;
}
else
{
uint32_t v___x_3059_; uint8_t v___x_3060_; 
v___x_3059_ = 57;
v___x_3060_ = lean_uint32_dec_le(v_c_2967_, v___x_3059_);
if (v___x_3060_ == 0)
{
goto v___jp_2968_;
}
else
{
goto v___jp_2953_;
}
}
}
v___jp_3061_:
{
uint32_t v___x_3062_; uint8_t v___x_3063_; 
v___x_3062_ = 97;
v___x_3063_ = lean_uint32_dec_le(v___x_3062_, v_c_2967_);
if (v___x_3063_ == 0)
{
goto v___jp_3056_;
}
else
{
uint32_t v___x_3064_; uint8_t v___x_3065_; 
v___x_3064_ = 122;
v___x_3065_ = lean_uint32_dec_le(v_c_2967_, v___x_3064_);
if (v___x_3065_ == 0)
{
goto v___jp_3056_;
}
else
{
goto v___jp_2953_;
}
}
}
}
else
{
lean_dec_ref(v_s_2940_);
if (v_needsRange_2941_ == 0)
{
lean_object* v___x_3070_; lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3070_ = lean_array_get_size(v_ands_2943_);
v___x_3071_ = lean_unsigned_to_nat(0u);
v___x_3072_ = lean_nat_dec_eq(v___x_3070_, v___x_3071_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3073_ = lean_array_push(v_ors_2942_, v_ands_2943_);
v___x_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
lean_ctor_set(v___x_3074_, 1, v_p_2944_);
return v___x_3074_;
}
else
{
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
goto v___jp_2945_;
}
}
else
{
lean_dec_ref(v_ands_2943_);
lean_dec_ref(v_ors_2942_);
goto v___jp_2945_;
}
}
v___jp_2945_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0));
v___x_2947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set(v___x_2947_, 1, v_p_2944_);
return v___x_2947_;
}
v___jp_2948_:
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_string_utf8_next_fast(v_s_2940_, v_p_2944_);
lean_dec(v_p_2944_);
v_p_2944_ = v___x_2949_;
goto _start;
}
v___jp_2953_:
{
lean_object* v___x_2954_; 
lean_inc_ref(v_s_2940_);
v___x_2954_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild(v_s_2940_, v_ands_2943_, v_p_2944_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v_a_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
v_a_2956_ = lean_ctor_get(v___x_2954_, 1);
lean_inc(v_a_2956_);
lean_dec_ref_known(v___x_2954_, 2);
v_needsRange_2941_ = v_decide_2952_;
v_ands_2943_ = v_a_2955_;
v_p_2944_ = v_a_2956_;
goto _start;
}
else
{
lean_object* v_a_2958_; lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
lean_dec_ref(v_ors_2942_);
lean_dec_ref(v_s_2940_);
v_a_2958_ = lean_ctor_get(v___x_2954_, 0);
v_a_2959_ = lean_ctor_get(v___x_2954_, 1);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2954_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_inc(v_a_2958_);
lean_dec(v___x_2954_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2958_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___boxed(lean_object* v_s_3075_, lean_object* v_needsRange_3076_, lean_object* v_ors_3077_, lean_object* v_ands_3078_, lean_object* v_p_3079_){
_start:
{
uint8_t v_needsRange_boxed_3080_; lean_object* v_res_3081_; 
v_needsRange_boxed_3080_ = lean_unbox(v_needsRange_3076_);
v_res_3081_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(v_s_3075_, v_needsRange_boxed_3080_, v_ors_3077_, v_ands_3078_, v_p_3079_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM(lean_object* v_s_3084_, lean_object* v_a_3085_){
_start:
{
uint8_t v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3086_ = 1;
v___x_3087_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0));
lean_inc_ref(v_s_3084_);
v___x_3088_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(v_s_3084_, v___x_3086_, v___x_3087_, v___x_3087_, v_a_3085_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3098_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
v_a_3090_ = lean_ctor_get(v___x_3088_, 1);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3092_ = v___x_3088_;
v_isShared_3093_ = v_isSharedCheck_3098_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_inc(v_a_3089_);
lean_dec(v___x_3088_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3098_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3094_; lean_object* v___x_3096_; 
v___x_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3094_, 0, v_s_3084_);
lean_ctor_set(v___x_3094_, 1, v_a_3089_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 0, v___x_3094_);
v___x_3096_ = v___x_3092_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3094_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v_a_3090_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
else
{
lean_object* v_a_3099_; lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v_s_3084_);
v_a_3099_ = lean_ctor_get(v___x_3088_, 0);
v_a_3100_ = lean_ctor_get(v___x_3088_, 1);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3088_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_inc(v_a_3099_);
lean_dec(v___x_3088_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3099_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_parse(lean_object* v_s_3108_){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3109_ = lean_unsigned_to_nat(0u);
v___x_3110_ = lean_string_utf8_byte_size(v_s_3108_);
v___x_3111_ = 1;
v___x_3112_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0));
lean_inc_ref(v_s_3108_);
v___x_3113_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(v_s_3108_, v___x_3111_, v___x_3112_, v___x_3112_, v___x_3109_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3128_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
v_a_3115_ = lean_ctor_get(v___x_3113_, 1);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3117_ = v___x_3113_;
v_isShared_3118_ = v_isSharedCheck_3128_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_inc(v_a_3114_);
lean_dec(v___x_3113_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3128_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
uint8_t v_decide_3119_; 
v_decide_3119_ = lean_nat_dec_eq(v_a_3115_, v___x_3110_);
if (v_decide_3119_ == 0)
{
lean_object* v_tail_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
lean_del_object(v___x_3117_);
lean_dec(v_a_3114_);
v_tail_3120_ = lean_string_utf8_extract(v_s_3108_, v_a_3115_, v___x_3110_);
lean_dec(v_a_3115_);
lean_dec_ref(v_s_3108_);
v___x_3121_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_3122_ = lean_string_append(v___x_3121_, v_tail_3120_);
lean_dec_ref(v_tail_3120_);
v___x_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
return v___x_3123_;
}
else
{
lean_object* v___x_3125_; 
lean_dec(v_a_3115_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 1, v_a_3114_);
lean_ctor_set(v___x_3117_, 0, v_s_3108_);
v___x_3125_ = v___x_3117_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_s_3108_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v_a_3114_);
v___x_3125_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
lean_object* v___x_3126_; 
v___x_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
return v___x_3126_;
}
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3130_; 
lean_dec_ref(v_s_3108_);
v_a_3129_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3129_);
lean_dec_ref_known(v___x_3113_, 2);
v___x_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3130_, 0, v_a_3129_);
return v___x_3130_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(lean_object* v_ver_3133_, lean_object* v_as_3134_, size_t v_i_3135_, size_t v_stop_3136_){
_start:
{
uint8_t v___x_3137_; 
v___x_3137_ = lean_usize_dec_eq(v_i_3135_, v_stop_3136_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3138_; uint8_t v___x_3139_; 
v___x_3138_ = lean_array_uget_borrowed(v_as_3134_, v_i_3135_);
v___x_3139_ = l_Lake_VerComparator_test(v___x_3138_, v_ver_3133_);
if (v___x_3139_ == 0)
{
uint8_t v___x_3140_; 
v___x_3140_ = 1;
return v___x_3140_;
}
else
{
size_t v___x_3141_; size_t v___x_3142_; 
v___x_3141_ = ((size_t)1ULL);
v___x_3142_ = lean_usize_add(v_i_3135_, v___x_3141_);
v_i_3135_ = v___x_3142_;
goto _start;
}
}
else
{
uint8_t v___x_3144_; 
v___x_3144_ = 0;
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0___boxed(lean_object* v_ver_3145_, lean_object* v_as_3146_, lean_object* v_i_3147_, lean_object* v_stop_3148_){
_start:
{
size_t v_i_boxed_3149_; size_t v_stop_boxed_3150_; uint8_t v_res_3151_; lean_object* v_r_3152_; 
v_i_boxed_3149_ = lean_unbox_usize(v_i_3147_);
lean_dec(v_i_3147_);
v_stop_boxed_3150_ = lean_unbox_usize(v_stop_3148_);
lean_dec(v_stop_3148_);
v_res_3151_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(v_ver_3145_, v_as_3146_, v_i_boxed_3149_, v_stop_boxed_3150_);
lean_dec_ref(v_as_3146_);
lean_dec_ref(v_ver_3145_);
v_r_3152_ = lean_box(v_res_3151_);
return v_r_3152_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(lean_object* v_ver_3153_, lean_object* v_as_3154_, size_t v_i_3155_, size_t v_stop_3156_){
_start:
{
uint8_t v___x_3157_; 
v___x_3157_ = lean_usize_dec_eq(v_i_3155_, v_stop_3156_);
if (v___x_3157_ == 0)
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; uint8_t v___x_3161_; 
v___x_3158_ = lean_array_uget_borrowed(v_as_3154_, v_i_3155_);
v___x_3159_ = lean_unsigned_to_nat(0u);
v___x_3160_ = lean_array_get_size(v___x_3158_);
v___x_3161_ = lean_nat_dec_lt(v___x_3159_, v___x_3160_);
if (v___x_3161_ == 0)
{
uint8_t v___x_3162_; 
v___x_3162_ = 1;
return v___x_3162_;
}
else
{
if (v___x_3161_ == 0)
{
return v___x_3161_;
}
else
{
size_t v___x_3163_; size_t v___x_3164_; uint8_t v___x_3165_; 
v___x_3163_ = ((size_t)0ULL);
v___x_3164_ = lean_usize_of_nat(v___x_3160_);
v___x_3165_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(v_ver_3153_, v___x_3158_, v___x_3163_, v___x_3164_);
if (v___x_3165_ == 0)
{
return v___x_3161_;
}
else
{
size_t v___x_3166_; size_t v___x_3167_; 
v___x_3166_ = ((size_t)1ULL);
v___x_3167_ = lean_usize_add(v_i_3155_, v___x_3166_);
v_i_3155_ = v___x_3167_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_3169_; 
v___x_3169_ = 0;
return v___x_3169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1___boxed(lean_object* v_ver_3170_, lean_object* v_as_3171_, lean_object* v_i_3172_, lean_object* v_stop_3173_){
_start:
{
size_t v_i_boxed_3174_; size_t v_stop_boxed_3175_; uint8_t v_res_3176_; lean_object* v_r_3177_; 
v_i_boxed_3174_ = lean_unbox_usize(v_i_3172_);
lean_dec(v_i_3172_);
v_stop_boxed_3175_ = lean_unbox_usize(v_stop_3173_);
lean_dec(v_stop_3173_);
v_res_3176_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(v_ver_3170_, v_as_3171_, v_i_boxed_3174_, v_stop_boxed_3175_);
lean_dec_ref(v_as_3171_);
lean_dec_ref(v_ver_3170_);
v_r_3177_ = lean_box(v_res_3176_);
return v_r_3177_;
}
}
LEAN_EXPORT uint8_t l_Lake_VerRange_test(lean_object* v_self_3178_, lean_object* v_ver_3179_){
_start:
{
lean_object* v_clauses_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; uint8_t v___x_3183_; 
v_clauses_3180_ = lean_ctor_get(v_self_3178_, 1);
v___x_3181_ = lean_unsigned_to_nat(0u);
v___x_3182_ = lean_array_get_size(v_clauses_3180_);
v___x_3183_ = lean_nat_dec_lt(v___x_3181_, v___x_3182_);
if (v___x_3183_ == 0)
{
return v___x_3183_;
}
else
{
if (v___x_3183_ == 0)
{
return v___x_3183_;
}
else
{
size_t v___x_3184_; size_t v___x_3185_; uint8_t v___x_3186_; 
v___x_3184_ = ((size_t)0ULL);
v___x_3185_ = lean_usize_of_nat(v___x_3182_);
v___x_3186_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(v_ver_3179_, v_clauses_3180_, v___x_3184_, v___x_3185_);
return v___x_3186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_test___boxed(lean_object* v_self_3187_, lean_object* v_ver_3188_){
_start:
{
uint8_t v_res_3189_; lean_object* v_r_3190_; 
v_res_3189_ = l_Lake_VerRange_test(v_self_3187_, v_ver_3188_);
lean_dec_ref(v_ver_3188_);
lean_dec_ref(v_self_3187_);
v_r_3190_ = lean_box(v_res_3189_);
return v_r_3190_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Date(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_SemVerCore_instLT = _init_l_Lake_SemVerCore_instLT();
lean_mark_persistent(l_Lake_SemVerCore_instLT);
l_Lake_SemVerCore_instLE = _init_l_Lake_SemVerCore_instLE();
lean_mark_persistent(l_Lake_SemVerCore_instLE);
l_Lake_StdVer_instLT = _init_l_Lake_StdVer_instLT();
lean_mark_persistent(l_Lake_StdVer_instLT);
l_Lake_StdVer_instLE = _init_l_Lake_StdVer_instLE();
lean_mark_persistent(l_Lake_StdVer_instLE);
l_Lake_ToolchainVer_instLT = _init_l_Lake_ToolchainVer_instLT();
lean_mark_persistent(l_Lake_ToolchainVer_instLT);
l_Lake_ToolchainVer_instLE = _init_l_Lake_ToolchainVer_instLE();
lean_mark_persistent(l_Lake_ToolchainVer_instLE);
l_Lake_instInhabitedComparatorOp_default = _init_l_Lake_instInhabitedComparatorOp_default();
l_Lake_instInhabitedComparatorOp = _init_l_Lake_instInhabitedComparatorOp();
l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie = _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie();
lean_mark_persistent(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Version(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lake_Util_Date(uint8_t builtin);
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Version(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Version(builtin);
}
#ifdef __cplusplus
}
#endif
