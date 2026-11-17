// Lean compiler output
// Module: Std.Time.Notation
// Imports: public import Std.Time.Format public meta import Std.Time.Format meta import Init.Data.String.TakeDrop
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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Std_Time_PlainDateTime_fromLeanDateTimeString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Std_Time_DateTime_fromLeanDateTimeWithZoneString(lean_object*);
lean_object* l_Std_Time_DateTime_fromLeanDateTimeWithIdentifierString(lean_object*);
extern lean_object* l_Std_Time_TimeZone_GMT;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_Offset_fromOffset(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_fromTimeZone(lean_object*);
lean_object* l_Std_Time_PlainDate_fromSQLDateString(lean_object*);
lean_object* l_Std_Time_PlainTime_fromLeanTime24Hour(lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__1 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxNat___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxString___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__0;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Int.ofNat"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__6_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__7;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__8_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__9_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__8_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__9_value),LEAN_SCALAR_PTR_LITERAL(192, 66, 133, 102, 95, 170, 134, 92)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__11_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__13_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__14_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__15_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Int.negSucc"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__17_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__18;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__19_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__8_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__19_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__23_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__21_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__23_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__24 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__24_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Time.Internal.Bounded.LE.ofNatWrapping"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Time"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__4_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bounded"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__5_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__6_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ofNatWrapping"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 45, 195, 84, 32, 84, 134, 39)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__5_value),LEAN_SCALAR_PTR_LITERAL(172, 131, 129, 250, 206, 85, 214, 6)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_3),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__6_value),LEAN_SCALAR_PTR_LITERAL(155, 200, 6, 67, 20, 25, 4, 138)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value_aux_4),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__7_value),LEAN_SCALAR_PTR_LITERAL(108, 206, 216, 211, 87, 12, 88, 244)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__9_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__10_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__11_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__13_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__15_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__16_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__16_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__17_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__18 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__18_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__20_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__20_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__20_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__21 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__21_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__22_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__23_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__24 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__24_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__24_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__25_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__26 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__26_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__27_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__27 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__27_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__27_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__28 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__28_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__29 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__29_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__29_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__30 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__30_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__31 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__31_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__28_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__31_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__32 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__32_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__26_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__32_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__33 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__33_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__23_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__33_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__34 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__34_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__21_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__34_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__35 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__35_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__36 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__36_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__36_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__38 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__38_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__40 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__40_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__40_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__42 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__42_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__42_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__44 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__44_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__44_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__46 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__46_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__39_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__46_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__48;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__49 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__49_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Time.Internal.UnitVal.ofInt"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "UnitVal"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofInt"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 45, 195, 84, 32, 84, 134, 39)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 149, 70, 30, 194, 59, 16, 80)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value_aux_3),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__3_value),LEAN_SCALAR_PTR_LITERAL(234, 59, 78, 118, 124, 253, 180, 45)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__5_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__7_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__8_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Std.Time.TimeZone.Offset.ofSeconds"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TimeZone"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Offset"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__3_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ofSeconds"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__2_value),LEAN_SCALAR_PTR_LITERAL(123, 220, 54, 93, 124, 163, 52, 156)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 32, 243, 92, 92, 213, 85, 25)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value_aux_3),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(220, 173, 173, 169, 141, 114, 200, 158)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__7_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__8_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__6_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__8_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__9_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Std.Time.TimeZone.mk"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__2_value),LEAN_SCALAR_PTR_LITERAL(123, 220, 54, 93, 124, 163, 52, 156)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 131, 60, 228, 243, 16, 51, 226)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__4_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__7_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__8 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__8_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__9;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 196, 140, 104, 187, 164, 111)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__10_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__11_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__12_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__14_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Std.Time.PlainDate.ofYearMonthDayClip"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PlainDate"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ofYearMonthDayClip"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 218, 205, 117, 186, 101, 64, 32)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 3, 2, 67, 252, 152, 4, 161)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__6_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.PlainTime.mk"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PlainTime"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 230, 186, 32, 252, 226, 250, 0)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 160, 32, 2, 118, 10, 124, 19)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__4_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Std.Time.PlainDateTime.mk"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PlainDateTime"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__2_value),LEAN_SCALAR_PTR_LITERAL(244, 181, 115, 111, 151, 225, 244, 191)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 55, 41, 90, 210, 196, 100, 220)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__4_value),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__6_value)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Time.DateTime.ofPlainDateTime"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DateTime"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__2 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__2_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ofPlainDateTime"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__3 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__2_value),LEAN_SCALAR_PTR_LITERAL(105, 115, 26, 239, 209, 16, 240, 145)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 182, 24, 109, 104, 29, 3, 191)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__5 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__6 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__6_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Std.Time.TimeZone.ZoneRules.ofTimeZone"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__7 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__7_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__8;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ZoneRules"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__9 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__9_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ofTimeZone"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__10 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__10_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__2_value),LEAN_SCALAR_PTR_LITERAL(123, 220, 54, 93, 124, 163, 52, 156)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__9_value),LEAN_SCALAR_PTR_LITERAL(195, 137, 30, 162, 40, 87, 69, 227)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value_aux_3),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__10_value),LEAN_SCALAR_PTR_LITERAL(63, 246, 142, 47, 38, 113, 110, 12)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__12 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__12_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__13 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__13_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<$>"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__14 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__14_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Database"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__15 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__15_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "defaultGetZoneRules"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__16 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__16_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value_aux_1),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__15_value),LEAN_SCALAR_PTR_LITERAL(52, 29, 11, 135, 198, 98, 142, 215)}};
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value_aux_2),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__16_value),LEAN_SCALAR_PTR_LITERAL(195, 204, 158, 115, 111, 241, 211, 242)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<$>_"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__18 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__18_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__18_value),LEAN_SCALAR_PTR_LITERAL(128, 74, 67, 119, 243, 145, 72, 28)}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__19 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__19_value;
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Std.Time.Database.defaultGetZoneRules"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__20 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__20_value;
static lean_once_cell_t l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__21;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__22 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__23 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__23_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GMT"};
static const lean_object* l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId___closed__0 = (const lean_object*)&l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId___boxed(lean_object*);
static const lean_string_object l_Std_Time_termZoned_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "termZoned(_)"};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 93, 126, 244, 143, 80, 158, 136)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termZoned_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value;
static const lean_string_object l_Std_Time_termZoned_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "zoned("};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__4_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__5_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__7 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__7_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__49_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__8 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__7_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__9 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__9_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x29___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__9_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x29___closed__10 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__10_value;
LEAN_EXPORT const lean_object* l_Std_Time_termZoned_x28___x29 = (const lean_object*)&l_Std_Time_termZoned_x28___x29___closed__10_value;
static const lean_string_object l_Std_Time_termZoned_x28___x2c___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termZoned(_,_)"};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__0 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 198, 165, 221, 166, 80, 106, 244)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__1 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__1_value;
static const lean_string_object l_Std_Time_termZoned_x28___x2c___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__2 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__3 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__7_value),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__3_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__4 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__4_value;
static const lean_string_object l_Std_Time_termZoned_x28___x2c___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__5 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__5_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__6 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__6_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__7 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__7_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__4_value),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__7_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__8 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__8_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__8_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__9 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__9_value;
static const lean_ctor_object l_Std_Time_termZoned_x28___x2c___x29___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__9_value)}};
static const lean_object* l_Std_Time_termZoned_x28___x2c___x29___closed__10 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__10_value;
LEAN_EXPORT const lean_object* l_Std_Time_termZoned_x28___x2c___x29 = (const lean_object*)&l_Std_Time_termZoned_x28___x2c___x29___closed__10_value;
static const lean_string_object l_Std_Time_termDatetime_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "termDatetime(_)"};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 97, 38, 153, 227, 76, 238, 149)}};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termDatetime_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "datetime("};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__4_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termDatetime_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__5_value)}};
static const lean_object* l_Std_Time_termDatetime_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Time_termDatetime_x28___x29 = (const lean_object*)&l_Std_Time_termDatetime_x28___x29___closed__6_value;
static const lean_string_object l_Std_Time_termDate_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "termDate(_)"};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDate_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termDate_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termDate_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 19, 6, 45, 102, 199, 247, 82)}};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termDate_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "date("};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termDate_x28___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDate_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termDate_x28___x29___closed__4_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termDate_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termDate_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termDate_x28___x29___closed__5_value)}};
static const lean_object* l_Std_Time_termDate_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Time_termDate_x28___x29 = (const lean_object*)&l_Std_Time_termDate_x28___x29___closed__6_value;
static const lean_string_object l_Std_Time_termTime_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "termTime(_)"};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termTime_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termTime_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termTime_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 133, 123, 15, 138, 216, 108, 236)}};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termTime_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "time("};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termTime_x28___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termTime_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termTime_x28___x29___closed__4_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termTime_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termTime_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termTime_x28___x29___closed__5_value)}};
static const lean_object* l_Std_Time_termTime_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Time_termTime_x28___x29 = (const lean_object*)&l_Std_Time_termTime_x28___x29___closed__6_value;
static const lean_string_object l_Std_Time_termOffset_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "termOffset(_)"};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 188, 135, 138, 129, 64, 205, 196)}};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termOffset_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offset("};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__4_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termOffset_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termOffset_x28___x29___closed__5_value)}};
static const lean_object* l_Std_Time_termOffset_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Time_termOffset_x28___x29 = (const lean_object*)&l_Std_Time_termOffset_x28___x29___closed__6_value;
static const lean_string_object l_Std_Time_termTimezone_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "termTimezone(_)"};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__0 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__0_value;
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__1_value_aux_0),((lean_object*)&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__3_value),LEAN_SCALAR_PTR_LITERAL(64, 230, 28, 41, 157, 98, 229, 68)}};
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 93, 67, 49, 253, 69, 174, 185)}};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__1 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__1_value;
static const lean_string_object l_Std_Time_termTimezone_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timezone("};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__2 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__2_value;
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__2_value)}};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__3 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__3_value;
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__6_value)}};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__4 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__4_value;
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__3_value),((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__4_value),((lean_object*)&l_Std_Time_termZoned_x28___x29___closed__8_value)}};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__5 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__5_value;
static const lean_ctor_object l_Std_Time_termTimezone_x28___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__5_value)}};
static const lean_object* l_Std_Time_termTimezone_x28___x29___closed__6 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Time_termTimezone_x28___x29 = (const lean_object*)&l_Std_Time_termTimezone_x28___x29___closed__6_value;
static const lean_string_object l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0 = (const lean_object*)&l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x2c___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x2c___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDatetime_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDatetime_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDate_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDate_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTime_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTime_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termOffset_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termOffset_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTimezone_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTimezone_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxNat(lean_object* v_n_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_ref_7_; uint8_t v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_ref_7_ = lean_ctor_get(v_a_5_, 5);
v___x_8_ = 0;
v___x_9_ = l_Lean_SourceInfo_fromRef(v_ref_7_, v___x_8_);
v___x_10_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxNat___closed__1));
v___x_11_ = l_Nat_reprFast(v_n_4_);
lean_inc(v___x_9_);
v___x_12_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_9_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
v___x_13_ = l_Lean_Syntax_node1(v___x_9_, v___x_10_, v___x_12_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v_a_6_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxNat___boxed(lean_object* v_n_15_, lean_object* v_a_16_, lean_object* v_a_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l___private_Std_Time_Notation_0__Std_Time_syntaxNat(v_n_15_, v_a_16_, v_a_17_);
lean_dec_ref(v_a_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxString(lean_object* v_n_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v_ref_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_ref_25_ = lean_ctor_get(v_a_23_, 5);
v___x_26_ = 0;
v___x_27_ = l_Lean_SourceInfo_fromRef(v_ref_25_, v___x_26_);
v___x_28_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v___x_27_);
v___x_29_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_27_);
lean_ctor_set(v___x_29_, 1, v_n_22_);
v___x_30_ = l_Lean_Syntax_node1(v___x_27_, v___x_28_, v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v_a_24_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxString___boxed(lean_object* v_n_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l___private_Std_Time_Notation_0__Std_Time_syntaxString(v_n_32_, v_a_33_, v_a_34_);
lean_dec_ref(v_a_33_);
return v_res_35_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__0(void){
_start:
{
lean_object* v_natZero_36_; lean_object* v_intZero_37_; 
v_natZero_36_ = lean_unsigned_to_nat(0u);
v_intZero_37_ = lean_nat_to_int(v_natZero_36_);
return v_intZero_37_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__7(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__6));
v___x_49_ = l_String_toRawSubstring_x27(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__18(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__17));
v___x_71_ = l_String_toRawSubstring_x27(v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt(lean_object* v_n_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_intZero_90_; uint8_t v_isNeg_91_; 
v_intZero_90_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__0, &l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__0_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__0);
v_isNeg_91_ = lean_int_dec_lt(v_n_87_, v_intZero_90_);
if (v_isNeg_91_ == 0)
{
lean_object* v_quotContext_92_; lean_object* v_currMacroScope_93_; lean_object* v_ref_94_; lean_object* v_a_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_quotContext_92_ = lean_ctor_get(v_a_88_, 1);
v_currMacroScope_93_ = lean_ctor_get(v_a_88_, 2);
v_ref_94_ = lean_ctor_get(v_a_88_, 5);
v_a_95_ = lean_nat_abs(v_n_87_);
v___x_96_ = l_Lean_SourceInfo_fromRef(v_ref_94_, v_isNeg_91_);
v___x_97_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_98_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__7, &l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__7_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__7);
v___x_99_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__10));
lean_inc(v_currMacroScope_93_);
lean_inc(v_quotContext_92_);
v___x_100_ = l_Lean_addMacroScope(v_quotContext_92_, v___x_99_, v_currMacroScope_93_);
v___x_101_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__14));
lean_inc_n(v___x_96_, 2);
v___x_102_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_102_, 0, v___x_96_);
lean_ctor_set(v___x_102_, 1, v___x_98_);
lean_ctor_set(v___x_102_, 2, v___x_100_);
lean_ctor_set(v___x_102_, 3, v___x_101_);
v___x_103_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_104_ = l_Nat_reprFast(v_a_95_);
v___x_105_ = lean_box(2);
v___x_106_ = l_Lean_Syntax_mkNumLit(v___x_104_, v___x_105_);
v___x_107_ = l_Lean_Syntax_node1(v___x_96_, v___x_103_, v___x_106_);
v___x_108_ = l_Lean_Syntax_node2(v___x_96_, v___x_97_, v___x_102_, v___x_107_);
v___x_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v_a_89_);
return v___x_109_;
}
else
{
lean_object* v_quotContext_110_; lean_object* v_currMacroScope_111_; lean_object* v_ref_112_; lean_object* v_abs_113_; lean_object* v_one_114_; lean_object* v_a_115_; uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_quotContext_110_ = lean_ctor_get(v_a_88_, 1);
v_currMacroScope_111_ = lean_ctor_get(v_a_88_, 2);
v_ref_112_ = lean_ctor_get(v_a_88_, 5);
v_abs_113_ = lean_nat_abs(v_n_87_);
v_one_114_ = lean_unsigned_to_nat(1u);
v_a_115_ = lean_nat_sub(v_abs_113_, v_one_114_);
lean_dec(v_abs_113_);
v___x_116_ = 0;
v___x_117_ = l_Lean_SourceInfo_fromRef(v_ref_112_, v___x_116_);
v___x_118_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_119_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__18, &l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__18_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__18);
v___x_120_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__20));
lean_inc(v_currMacroScope_111_);
lean_inc(v_quotContext_110_);
v___x_121_ = l_Lean_addMacroScope(v_quotContext_110_, v___x_120_, v_currMacroScope_111_);
v___x_122_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__24));
lean_inc_n(v___x_117_, 2);
v___x_123_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_123_, 0, v___x_117_);
lean_ctor_set(v___x_123_, 1, v___x_119_);
lean_ctor_set(v___x_123_, 2, v___x_121_);
lean_ctor_set(v___x_123_, 3, v___x_122_);
v___x_124_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_125_ = l_Nat_reprFast(v_a_115_);
v___x_126_ = lean_box(2);
v___x_127_ = l_Lean_Syntax_mkNumLit(v___x_125_, v___x_126_);
v___x_128_ = l_Lean_Syntax_node1(v___x_117_, v___x_124_, v___x_127_);
v___x_129_ = l_Lean_Syntax_node2(v___x_117_, v___x_118_, v___x_123_, v___x_128_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v_a_89_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxInt___boxed(lean_object* v_n_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Std_Time_Notation_0__Std_Time_syntaxInt(v_n_131_, v_a_132_, v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_n_131_);
return v_res_134_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__1(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__0));
v___x_137_ = l_String_toRawSubstring_x27(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__18));
v___x_175_ = l_String_toRawSubstring_x27(v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__48(void){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Array_mkArray0___redArg();
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(lean_object* v_n_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_253_; lean_object* v_a_254_; lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_308_; 
v___x_253_ = l___private_Std_Time_Notation_0__Std_Time_syntaxInt(v_n_250_, v_a_251_, v_a_252_);
v_a_254_ = lean_ctor_get(v___x_253_, 0);
v_a_255_ = lean_ctor_get(v___x_253_, 1);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_308_ == 0)
{
v___x_257_ = v___x_253_;
v_isShared_258_ = v_isSharedCheck_308_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_inc(v_a_254_);
lean_dec(v___x_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_308_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v_quotContext_259_; lean_object* v_currMacroScope_260_; lean_object* v_ref_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v_quotContext_259_ = lean_ctor_get(v_a_251_, 1);
v_currMacroScope_260_ = lean_ctor_get(v_a_251_, 2);
v_ref_261_ = lean_ctor_get(v_a_251_, 5);
v___x_262_ = 0;
v___x_263_ = l_Lean_SourceInfo_fromRef(v_ref_261_, v___x_262_);
v___x_264_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_265_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__1, &l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__1);
v___x_266_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__8));
lean_inc_n(v_currMacroScope_260_, 2);
lean_inc_n(v_quotContext_259_, 2);
v___x_267_ = l_Lean_addMacroScope(v_quotContext_259_, v___x_266_, v_currMacroScope_260_);
v___x_268_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__10));
lean_inc_n(v___x_263_, 17);
v___x_269_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_269_, 0, v___x_263_);
lean_ctor_set(v___x_269_, 1, v___x_265_);
lean_ctor_set(v___x_269_, 2, v___x_267_);
lean_ctor_set(v___x_269_, 3, v___x_268_);
v___x_270_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_271_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12));
v___x_272_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14));
v___x_273_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__15));
v___x_274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_263_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__17));
v___x_276_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19, &l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19);
v___x_277_ = lean_box(0);
v___x_278_ = l_Lean_addMacroScope(v_quotContext_259_, v___x_277_, v_currMacroScope_260_);
v___x_279_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__35));
v___x_280_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_280_, 0, v___x_263_);
lean_ctor_set(v___x_280_, 1, v___x_276_);
lean_ctor_set(v___x_280_, 2, v___x_278_);
lean_ctor_set(v___x_280_, 3, v___x_279_);
v___x_281_ = l_Lean_Syntax_node1(v___x_263_, v___x_275_, v___x_280_);
v___x_282_ = l_Lean_Syntax_node2(v___x_263_, v___x_272_, v___x_274_, v___x_281_);
v___x_283_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__37));
v___x_284_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__38));
v___x_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_263_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__41));
v___x_287_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__43));
v___x_288_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__44));
v___x_289_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__45));
v___x_290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_263_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
v___x_291_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__47));
v___x_292_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__48, &l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__48_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__48);
v___x_293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_293_, 0, v___x_263_);
lean_ctor_set(v___x_293_, 1, v___x_270_);
lean_ctor_set(v___x_293_, 2, v___x_292_);
v___x_294_ = l_Lean_Syntax_node1(v___x_263_, v___x_291_, v___x_293_);
v___x_295_ = l_Lean_Syntax_node2(v___x_263_, v___x_289_, v___x_290_, v___x_294_);
v___x_296_ = l_Lean_Syntax_node1(v___x_263_, v___x_270_, v___x_295_);
v___x_297_ = l_Lean_Syntax_node1(v___x_263_, v___x_287_, v___x_296_);
v___x_298_ = l_Lean_Syntax_node1(v___x_263_, v___x_286_, v___x_297_);
v___x_299_ = l_Lean_Syntax_node2(v___x_263_, v___x_283_, v___x_285_, v___x_298_);
v___x_300_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__49));
v___x_301_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_263_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = l_Lean_Syntax_node3(v___x_263_, v___x_271_, v___x_282_, v___x_299_, v___x_301_);
v___x_303_ = l_Lean_Syntax_node2(v___x_263_, v___x_270_, v_a_254_, v___x_302_);
v___x_304_ = l_Lean_Syntax_node2(v___x_263_, v___x_264_, v___x_269_, v___x_303_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_304_);
v___x_306_ = v___x_257_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v_a_255_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___boxed(lean_object* v_n_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_n_309_, v_a_310_, v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_n_309_);
return v_res_312_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__1(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__0));
v___x_315_ = l_String_toRawSubstring_x27(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal(lean_object* v_n_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_338_; lean_object* v_a_339_; lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_361_; 
v___x_338_ = l___private_Std_Time_Notation_0__Std_Time_syntaxInt(v_n_335_, v_a_336_, v_a_337_);
v_a_339_ = lean_ctor_get(v___x_338_, 0);
v_a_340_ = lean_ctor_get(v___x_338_, 1);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_361_ == 0)
{
v___x_342_ = v___x_338_;
v_isShared_343_ = v_isSharedCheck_361_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_inc(v_a_339_);
lean_dec(v___x_338_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_361_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v_quotContext_344_; lean_object* v_currMacroScope_345_; lean_object* v_ref_346_; uint8_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
v_quotContext_344_ = lean_ctor_get(v_a_336_, 1);
v_currMacroScope_345_ = lean_ctor_get(v_a_336_, 2);
v_ref_346_ = lean_ctor_get(v_a_336_, 5);
v___x_347_ = 0;
v___x_348_ = l_Lean_SourceInfo_fromRef(v_ref_346_, v___x_347_);
v___x_349_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_350_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__1, &l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__1);
v___x_351_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__4));
lean_inc(v_currMacroScope_345_);
lean_inc(v_quotContext_344_);
v___x_352_ = l_Lean_addMacroScope(v_quotContext_344_, v___x_351_, v_currMacroScope_345_);
v___x_353_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxVal___closed__8));
lean_inc_n(v___x_348_, 2);
v___x_354_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_354_, 0, v___x_348_);
lean_ctor_set(v___x_354_, 1, v___x_350_);
lean_ctor_set(v___x_354_, 2, v___x_352_);
lean_ctor_set(v___x_354_, 3, v___x_353_);
v___x_355_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_356_ = l_Lean_Syntax_node1(v___x_348_, v___x_355_, v_a_339_);
v___x_357_ = l_Lean_Syntax_node2(v___x_348_, v___x_349_, v___x_354_, v___x_356_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___x_357_);
v___x_359_ = v___x_342_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_a_340_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_syntaxVal___boxed(lean_object* v_n_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l___private_Std_Time_Notation_0__Std_Time_syntaxVal(v_n_362_, v_a_363_, v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_n_362_);
return v_res_365_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__1(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__0));
v___x_368_ = l_String_toRawSubstring_x27(v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset(lean_object* v_offset_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
lean_object* v___x_392_; lean_object* v_a_393_; lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_415_; 
v___x_392_ = l___private_Std_Time_Notation_0__Std_Time_syntaxVal(v_offset_389_, v_a_390_, v_a_391_);
v_a_393_ = lean_ctor_get(v___x_392_, 0);
v_a_394_ = lean_ctor_get(v___x_392_, 1);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_415_ == 0)
{
v___x_396_ = v___x_392_;
v_isShared_397_ = v_isSharedCheck_415_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_inc(v_a_393_);
lean_dec(v___x_392_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_415_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v_quotContext_398_; lean_object* v_currMacroScope_399_; lean_object* v_ref_400_; uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
v_quotContext_398_ = lean_ctor_get(v_a_390_, 1);
v_currMacroScope_399_ = lean_ctor_get(v_a_390_, 2);
v_ref_400_ = lean_ctor_get(v_a_390_, 5);
v___x_401_ = 0;
v___x_402_ = l_Lean_SourceInfo_fromRef(v_ref_400_, v___x_401_);
v___x_403_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_404_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__1);
v___x_405_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__5));
lean_inc(v_currMacroScope_399_);
lean_inc(v_quotContext_398_);
v___x_406_ = l_Lean_addMacroScope(v_quotContext_398_, v___x_405_, v_currMacroScope_399_);
v___x_407_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertOffset___closed__9));
lean_inc_n(v___x_402_, 2);
v___x_408_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_408_, 0, v___x_402_);
lean_ctor_set(v___x_408_, 1, v___x_404_);
lean_ctor_set(v___x_408_, 2, v___x_406_);
lean_ctor_set(v___x_408_, 3, v___x_407_);
v___x_409_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_410_ = l_Lean_Syntax_node1(v___x_402_, v___x_409_, v_a_393_);
v___x_411_ = l_Lean_Syntax_node2(v___x_402_, v___x_403_, v___x_408_, v___x_410_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_411_);
v___x_413_ = v___x_396_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v_a_394_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertOffset___boxed(lean_object* v_offset_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l___private_Std_Time_Notation_0__Std_Time_convertOffset(v_offset_416_, v_a_417_, v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec(v_offset_416_);
return v_res_419_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__1(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__0));
v___x_422_ = l_String_toRawSubstring_x27(v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__9(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__8));
v___x_442_ = l_String_toRawSubstring_x27(v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone(lean_object* v_tz_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_offset_458_; lean_object* v_name_459_; lean_object* v_abbreviation_460_; lean_object* v___x_461_; lean_object* v_a_462_; lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_492_; 
v_offset_458_ = lean_ctor_get(v_tz_455_, 0);
lean_inc(v_offset_458_);
v_name_459_ = lean_ctor_get(v_tz_455_, 1);
lean_inc_ref(v_name_459_);
v_abbreviation_460_ = lean_ctor_get(v_tz_455_, 2);
lean_inc_ref(v_abbreviation_460_);
lean_dec_ref(v_tz_455_);
v___x_461_ = l___private_Std_Time_Notation_0__Std_Time_convertOffset(v_offset_458_, v_a_456_, v_a_457_);
lean_dec(v_offset_458_);
v_a_462_ = lean_ctor_get(v___x_461_, 0);
v_a_463_ = lean_ctor_get(v___x_461_, 1);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_492_ == 0)
{
v___x_465_ = v___x_461_;
v_isShared_466_ = v_isSharedCheck_492_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_inc(v_a_462_);
lean_dec(v___x_461_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_492_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v_quotContext_467_; lean_object* v_currMacroScope_468_; lean_object* v_ref_469_; uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_490_; 
v_quotContext_467_ = lean_ctor_get(v_a_456_, 1);
v_currMacroScope_468_ = lean_ctor_get(v_a_456_, 2);
v_ref_469_ = lean_ctor_get(v_a_456_, 5);
v___x_470_ = 0;
v___x_471_ = l_Lean_SourceInfo_fromRef(v_ref_469_, v___x_470_);
v___x_472_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_473_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__1);
v___x_474_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__3));
lean_inc_n(v_currMacroScope_468_, 2);
lean_inc_n(v_quotContext_467_, 2);
v___x_475_ = l_Lean_addMacroScope(v_quotContext_467_, v___x_474_, v_currMacroScope_468_);
v___x_476_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__7));
lean_inc_n(v___x_471_, 3);
v___x_477_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_477_, 0, v___x_471_);
lean_ctor_set(v___x_477_, 1, v___x_473_);
lean_ctor_set(v___x_477_, 2, v___x_475_);
lean_ctor_set(v___x_477_, 3, v___x_476_);
v___x_478_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_479_ = lean_box(2);
v___x_480_ = l_Lean_Syntax_mkStrLit(v_name_459_, v___x_479_);
v___x_481_ = l_Lean_Syntax_mkStrLit(v_abbreviation_460_, v___x_479_);
v___x_482_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__9, &l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__9_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__9);
v___x_483_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__10));
v___x_484_ = l_Lean_addMacroScope(v_quotContext_467_, v___x_483_, v_currMacroScope_468_);
v___x_485_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertTimezone___closed__14));
v___x_486_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_486_, 0, v___x_471_);
lean_ctor_set(v___x_486_, 1, v___x_482_);
lean_ctor_set(v___x_486_, 2, v___x_484_);
lean_ctor_set(v___x_486_, 3, v___x_485_);
v___x_487_ = l_Lean_Syntax_node4(v___x_471_, v___x_478_, v_a_462_, v___x_480_, v___x_481_, v___x_486_);
v___x_488_ = l_Lean_Syntax_node2(v___x_471_, v___x_472_, v___x_477_, v___x_487_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 0, v___x_488_);
v___x_490_ = v___x_465_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_a_463_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertTimezone___boxed(lean_object* v_tz_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Std_Time_Notation_0__Std_Time_convertTimezone(v_tz_493_, v_a_494_, v_a_495_);
lean_dec_ref(v_a_494_);
return v_res_496_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__1(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__0));
v___x_499_ = l_String_toRawSubstring_x27(v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate(lean_object* v_d_513_, lean_object* v_a_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_year_516_; lean_object* v_month_517_; lean_object* v_day_518_; lean_object* v___x_519_; lean_object* v_a_520_; lean_object* v_a_521_; lean_object* v___x_522_; lean_object* v_a_523_; lean_object* v_a_524_; lean_object* v___x_525_; lean_object* v_a_526_; lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_548_; 
v_year_516_ = lean_ctor_get(v_d_513_, 0);
v_month_517_ = lean_ctor_get(v_d_513_, 1);
v_day_518_ = lean_ctor_get(v_d_513_, 2);
v___x_519_ = l___private_Std_Time_Notation_0__Std_Time_syntaxInt(v_year_516_, v_a_514_, v_a_515_);
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
v_a_521_ = lean_ctor_get(v___x_519_, 1);
lean_inc(v_a_521_);
lean_dec_ref(v___x_519_);
v___x_522_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_month_517_, v_a_514_, v_a_521_);
v_a_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_523_);
v_a_524_ = lean_ctor_get(v___x_522_, 1);
lean_inc(v_a_524_);
lean_dec_ref(v___x_522_);
v___x_525_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_day_518_, v_a_514_, v_a_524_);
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_a_527_ = lean_ctor_get(v___x_525_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_548_ == 0)
{
v___x_529_ = v___x_525_;
v_isShared_530_ = v_isSharedCheck_548_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_548_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_quotContext_531_; lean_object* v_currMacroScope_532_; lean_object* v_ref_533_; uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v_quotContext_531_ = lean_ctor_get(v_a_514_, 1);
v_currMacroScope_532_ = lean_ctor_get(v_a_514_, 2);
v_ref_533_ = lean_ctor_get(v_a_514_, 5);
v___x_534_ = 0;
v___x_535_ = l_Lean_SourceInfo_fromRef(v_ref_533_, v___x_534_);
v___x_536_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_537_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__1);
v___x_538_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__4));
lean_inc(v_currMacroScope_532_);
lean_inc(v_quotContext_531_);
v___x_539_ = l_Lean_addMacroScope(v_quotContext_531_, v___x_538_, v_currMacroScope_532_);
v___x_540_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___closed__6));
lean_inc_n(v___x_535_, 2);
v___x_541_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_541_, 0, v___x_535_);
lean_ctor_set(v___x_541_, 1, v___x_537_);
lean_ctor_set(v___x_541_, 2, v___x_539_);
lean_ctor_set(v___x_541_, 3, v___x_540_);
v___x_542_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_543_ = l_Lean_Syntax_node3(v___x_535_, v___x_542_, v_a_520_, v_a_523_, v_a_526_);
v___x_544_ = l_Lean_Syntax_node2(v___x_535_, v___x_536_, v___x_541_, v___x_543_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_544_);
v___x_546_ = v___x_529_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_a_527_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDate___boxed(lean_object* v_d_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDate(v_d_549_, v_a_550_, v_a_551_);
lean_dec_ref(v_a_550_);
lean_dec_ref(v_d_549_);
return v_res_552_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__1(void){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__0));
v___x_555_ = l_String_toRawSubstring_x27(v___x_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime(lean_object* v_d_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_hour_576_; lean_object* v_minute_577_; lean_object* v_second_578_; lean_object* v_nanosecond_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_618_; 
v_hour_576_ = lean_ctor_get(v_d_573_, 0);
v_minute_577_ = lean_ctor_get(v_d_573_, 1);
v_second_578_ = lean_ctor_get(v_d_573_, 2);
v_nanosecond_579_ = lean_ctor_get(v_d_573_, 3);
v_isSharedCheck_618_ = !lean_is_exclusive(v_d_573_);
if (v_isSharedCheck_618_ == 0)
{
v___x_581_ = v_d_573_;
v_isShared_582_ = v_isSharedCheck_618_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_nanosecond_579_);
lean_inc(v_second_578_);
lean_inc(v_minute_577_);
lean_inc(v_hour_576_);
lean_dec(v_d_573_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_618_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; lean_object* v_a_584_; lean_object* v_a_585_; lean_object* v___x_586_; lean_object* v_a_587_; lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v_a_590_; lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v_a_593_; lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_617_; 
v___x_583_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_hour_576_, v_a_574_, v_a_575_);
lean_dec(v_hour_576_);
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
v_a_585_ = lean_ctor_get(v___x_583_, 1);
lean_inc(v_a_585_);
lean_dec_ref(v___x_583_);
v___x_586_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_minute_577_, v_a_574_, v_a_585_);
lean_dec(v_minute_577_);
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
v_a_588_ = lean_ctor_get(v___x_586_, 1);
lean_inc(v_a_588_);
lean_dec_ref(v___x_586_);
v___x_589_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_second_578_, v_a_574_, v_a_588_);
lean_dec(v_second_578_);
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
v_a_591_ = lean_ctor_get(v___x_589_, 1);
lean_inc(v_a_591_);
lean_dec_ref(v___x_589_);
v___x_592_ = l___private_Std_Time_Notation_0__Std_Time_syntaxBounded(v_nanosecond_579_, v_a_574_, v_a_591_);
lean_dec(v_nanosecond_579_);
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_a_594_ = lean_ctor_get(v___x_592_, 1);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_617_ == 0)
{
v___x_596_ = v___x_592_;
v_isShared_597_ = v_isSharedCheck_617_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_617_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v_quotContext_598_; lean_object* v_currMacroScope_599_; lean_object* v_ref_600_; uint8_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
v_quotContext_598_ = lean_ctor_get(v_a_574_, 1);
v_currMacroScope_599_ = lean_ctor_get(v_a_574_, 2);
v_ref_600_ = lean_ctor_get(v_a_574_, 5);
v___x_601_ = 0;
v___x_602_ = l_Lean_SourceInfo_fromRef(v_ref_600_, v___x_601_);
v___x_603_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_604_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__1);
v___x_605_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__3));
lean_inc(v_currMacroScope_599_);
lean_inc(v_quotContext_598_);
v___x_606_ = l_Lean_addMacroScope(v_quotContext_598_, v___x_605_, v_currMacroScope_599_);
v___x_607_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___closed__7));
lean_inc(v___x_602_);
if (v_isShared_582_ == 0)
{
lean_ctor_set_tag(v___x_581_, 3);
lean_ctor_set(v___x_581_, 3, v___x_607_);
lean_ctor_set(v___x_581_, 2, v___x_606_);
lean_ctor_set(v___x_581_, 1, v___x_604_);
lean_ctor_set(v___x_581_, 0, v___x_602_);
v___x_609_ = v___x_581_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_616_, 2, v___x_606_);
lean_ctor_set(v_reuseFailAlloc_616_, 3, v___x_607_);
v___x_609_ = v_reuseFailAlloc_616_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_610_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
lean_inc(v___x_602_);
v___x_611_ = l_Lean_Syntax_node4(v___x_602_, v___x_610_, v_a_584_, v_a_587_, v_a_590_, v_a_593_);
v___x_612_ = l_Lean_Syntax_node2(v___x_602_, v___x_603_, v___x_609_, v___x_611_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_612_);
v___x_614_ = v___x_596_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v_a_594_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainTime___boxed(lean_object* v_d_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainTime(v_d_619_, v_a_620_, v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_622_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__1(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__0));
v___x_625_ = l_String_toRawSubstring_x27(v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime(lean_object* v_d_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_date_646_; lean_object* v_time_647_; lean_object* v___x_648_; lean_object* v_a_649_; lean_object* v_a_650_; lean_object* v___x_651_; lean_object* v_a_652_; lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_674_; 
v_date_646_ = lean_ctor_get(v_d_643_, 0);
lean_inc_ref(v_date_646_);
v_time_647_ = lean_ctor_get(v_d_643_, 1);
lean_inc_ref(v_time_647_);
lean_dec_ref(v_d_643_);
v___x_648_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDate(v_date_646_, v_a_644_, v_a_645_);
lean_dec_ref(v_date_646_);
v_a_649_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_a_649_);
v_a_650_ = lean_ctor_get(v___x_648_, 1);
lean_inc(v_a_650_);
lean_dec_ref(v___x_648_);
v___x_651_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainTime(v_time_647_, v_a_644_, v_a_650_);
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_a_653_ = lean_ctor_get(v___x_651_, 1);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_674_ == 0)
{
v___x_655_ = v___x_651_;
v_isShared_656_ = v_isSharedCheck_674_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_674_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v_quotContext_657_; lean_object* v_currMacroScope_658_; lean_object* v_ref_659_; uint8_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
v_quotContext_657_ = lean_ctor_get(v_a_644_, 1);
v_currMacroScope_658_ = lean_ctor_get(v_a_644_, 2);
v_ref_659_ = lean_ctor_get(v_a_644_, 5);
v___x_660_ = 0;
v___x_661_ = l_Lean_SourceInfo_fromRef(v_ref_659_, v___x_660_);
v___x_662_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_663_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__1);
v___x_664_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__3));
lean_inc(v_currMacroScope_658_);
lean_inc(v_quotContext_657_);
v___x_665_ = l_Lean_addMacroScope(v_quotContext_657_, v___x_664_, v_currMacroScope_658_);
v___x_666_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___closed__7));
lean_inc_n(v___x_661_, 2);
v___x_667_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_667_, 0, v___x_661_);
lean_ctor_set(v___x_667_, 1, v___x_663_);
lean_ctor_set(v___x_667_, 2, v___x_665_);
lean_ctor_set(v___x_667_, 3, v___x_666_);
v___x_668_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_669_ = l_Lean_Syntax_node2(v___x_661_, v___x_668_, v_a_649_, v_a_652_);
v___x_670_ = l_Lean_Syntax_node2(v___x_661_, v___x_662_, v___x_667_, v___x_669_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_670_);
v___x_672_ = v___x_655_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_a_653_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime___boxed(lean_object* v_d_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime(v_d_675_, v_a_676_, v_a_677_);
lean_dec_ref(v_a_676_);
return v_res_678_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__0));
v___x_681_ = l_String_toRawSubstring_x27(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__8(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__7));
v___x_697_ = l_String_toRawSubstring_x27(v___x_696_);
return v___x_697_;
}
}
static lean_object* _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__21(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__20));
v___x_725_ = l_String_toRawSubstring_x27(v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime(lean_object* v_d_732_, uint8_t v_identifier_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_date_736_; lean_object* v_timezone_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_831_; 
v_date_736_ = lean_ctor_get(v_d_732_, 0);
v_timezone_737_ = lean_ctor_get(v_d_732_, 3);
v_isSharedCheck_831_ = !lean_is_exclusive(v_d_732_);
if (v_isSharedCheck_831_ == 0)
{
lean_object* v_unused_832_; lean_object* v_unused_833_; 
v_unused_832_ = lean_ctor_get(v_d_732_, 2);
lean_dec(v_unused_832_);
v_unused_833_ = lean_ctor_get(v_d_732_, 1);
lean_dec(v_unused_833_);
v___x_739_ = v_d_732_;
v_isShared_740_ = v_isSharedCheck_831_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_timezone_737_);
lean_inc(v_date_736_);
lean_dec(v_d_732_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_831_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = lean_thunk_get_own(v_date_736_);
lean_dec_ref(v_date_736_);
v___x_742_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime(v___x_741_, v_a_734_, v_a_735_);
if (v_identifier_733_ == 0)
{
lean_object* v_a_743_; lean_object* v_a_744_; lean_object* v___x_745_; lean_object* v_a_746_; lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_791_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
v_a_744_ = lean_ctor_get(v___x_742_, 1);
lean_inc(v_a_744_);
lean_dec_ref(v___x_742_);
v___x_745_ = l___private_Std_Time_Notation_0__Std_Time_convertTimezone(v_timezone_737_, v_a_734_, v_a_744_);
v_a_746_ = lean_ctor_get(v___x_745_, 0);
v_a_747_ = lean_ctor_get(v___x_745_, 1);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_791_ == 0)
{
v___x_749_ = v___x_745_;
v_isShared_750_ = v_isSharedCheck_791_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_inc(v_a_746_);
lean_dec(v___x_745_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_791_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v_quotContext_751_; lean_object* v_currMacroScope_752_; lean_object* v_ref_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v_quotContext_751_ = lean_ctor_get(v_a_734_, 1);
v_currMacroScope_752_ = lean_ctor_get(v_a_734_, 2);
v_ref_753_ = lean_ctor_get(v_a_734_, 5);
v___x_754_ = l_Lean_SourceInfo_fromRef(v_ref_753_, v_identifier_733_);
v___x_755_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_756_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1);
v___x_757_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4));
lean_inc(v_currMacroScope_752_);
lean_inc(v_quotContext_751_);
v___x_758_ = l_Lean_addMacroScope(v_quotContext_751_, v___x_757_, v_currMacroScope_752_);
v___x_759_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__6));
lean_inc(v___x_754_);
if (v_isShared_740_ == 0)
{
lean_ctor_set_tag(v___x_739_, 3);
lean_ctor_set(v___x_739_, 3, v___x_759_);
lean_ctor_set(v___x_739_, 2, v___x_758_);
lean_ctor_set(v___x_739_, 1, v___x_756_);
lean_ctor_set(v___x_739_, 0, v___x_754_);
v___x_761_ = v___x_739_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v___x_758_);
lean_ctor_set(v_reuseFailAlloc_790_, 3, v___x_759_);
v___x_761_ = v_reuseFailAlloc_790_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_762_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_763_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__12));
v___x_764_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__14));
v___x_765_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__15));
lean_inc_n(v___x_754_, 10);
v___x_766_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_754_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__17));
v___x_768_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19, &l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19_once, _init_l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__19);
v___x_769_ = lean_box(0);
lean_inc_n(v_currMacroScope_752_, 2);
lean_inc_n(v_quotContext_751_, 2);
v___x_770_ = l_Lean_addMacroScope(v_quotContext_751_, v___x_769_, v_currMacroScope_752_);
v___x_771_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__35));
v___x_772_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_772_, 0, v___x_754_);
lean_ctor_set(v___x_772_, 1, v___x_768_);
lean_ctor_set(v___x_772_, 2, v___x_770_);
lean_ctor_set(v___x_772_, 3, v___x_771_);
v___x_773_ = l_Lean_Syntax_node1(v___x_754_, v___x_767_, v___x_772_);
v___x_774_ = l_Lean_Syntax_node2(v___x_754_, v___x_764_, v___x_766_, v___x_773_);
v___x_775_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__8, &l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__8_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__8);
v___x_776_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__11));
v___x_777_ = l_Lean_addMacroScope(v_quotContext_751_, v___x_776_, v_currMacroScope_752_);
v___x_778_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__13));
v___x_779_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_779_, 0, v___x_754_);
lean_ctor_set(v___x_779_, 1, v___x_775_);
lean_ctor_set(v___x_779_, 2, v___x_777_);
lean_ctor_set(v___x_779_, 3, v___x_778_);
v___x_780_ = l_Lean_Syntax_node1(v___x_754_, v___x_762_, v_a_746_);
v___x_781_ = l_Lean_Syntax_node2(v___x_754_, v___x_755_, v___x_779_, v___x_780_);
v___x_782_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxBounded___closed__49));
v___x_783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_754_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = l_Lean_Syntax_node3(v___x_754_, v___x_763_, v___x_774_, v___x_781_, v___x_783_);
v___x_785_ = l_Lean_Syntax_node2(v___x_754_, v___x_762_, v_a_743_, v___x_784_);
v___x_786_ = l_Lean_Syntax_node2(v___x_754_, v___x_755_, v___x_761_, v___x_785_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 0, v___x_786_);
v___x_788_ = v___x_749_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_a_747_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_792_; lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_830_; 
v_a_792_ = lean_ctor_get(v___x_742_, 0);
v_a_793_ = lean_ctor_get(v___x_742_, 1);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_830_ == 0)
{
v___x_795_ = v___x_742_;
v_isShared_796_ = v_isSharedCheck_830_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_inc(v_a_792_);
lean_dec(v___x_742_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_830_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v_quotContext_797_; lean_object* v_currMacroScope_798_; lean_object* v_ref_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
v_quotContext_797_ = lean_ctor_get(v_a_734_, 1);
v_currMacroScope_798_ = lean_ctor_get(v_a_734_, 2);
v_ref_799_ = lean_ctor_get(v_a_734_, 5);
v___x_800_ = 0;
v___x_801_ = l_Lean_SourceInfo_fromRef(v_ref_799_, v___x_800_);
v___x_802_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_803_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1);
v___x_804_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4));
lean_inc(v_currMacroScope_798_);
lean_inc(v_quotContext_797_);
v___x_805_ = l_Lean_addMacroScope(v_quotContext_797_, v___x_804_, v_currMacroScope_798_);
v___x_806_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__6));
lean_inc(v___x_801_);
if (v_isShared_740_ == 0)
{
lean_ctor_set_tag(v___x_739_, 3);
lean_ctor_set(v___x_739_, 3, v___x_806_);
lean_ctor_set(v___x_739_, 2, v___x_805_);
lean_ctor_set(v___x_739_, 1, v___x_803_);
lean_ctor_set(v___x_739_, 0, v___x_801_);
v___x_808_ = v___x_739_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_829_, 2, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_829_, 3, v___x_806_);
v___x_808_ = v_reuseFailAlloc_829_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v_name_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_809_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
lean_inc_n(v___x_801_, 6);
v___x_810_ = l_Lean_Syntax_node1(v___x_801_, v___x_809_, v_a_792_);
v___x_811_ = l_Lean_Syntax_node2(v___x_801_, v___x_802_, v___x_808_, v___x_810_);
v_name_812_ = lean_ctor_get(v_timezone_737_, 1);
lean_inc_ref(v_name_812_);
lean_dec_ref(v_timezone_737_);
v___x_813_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__14));
v___x_814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_801_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__17));
lean_inc(v_currMacroScope_798_);
lean_inc(v_quotContext_797_);
v___x_816_ = l_Lean_addMacroScope(v_quotContext_797_, v___x_815_, v_currMacroScope_798_);
v___x_817_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__19));
v___x_818_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__21, &l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__21_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__21);
v___x_819_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__23));
v___x_820_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_820_, 0, v___x_801_);
lean_ctor_set(v___x_820_, 1, v___x_818_);
lean_ctor_set(v___x_820_, 2, v___x_816_);
lean_ctor_set(v___x_820_, 3, v___x_819_);
v___x_821_ = lean_box(2);
v___x_822_ = l_Lean_Syntax_mkStrLit(v_name_812_, v___x_821_);
v___x_823_ = l_Lean_Syntax_node1(v___x_801_, v___x_809_, v___x_822_);
v___x_824_ = l_Lean_Syntax_node2(v___x_801_, v___x_802_, v___x_820_, v___x_823_);
v___x_825_ = l_Lean_Syntax_node3(v___x_801_, v___x_817_, v___x_811_, v___x_814_, v___x_824_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_825_);
v___x_827_ = v___x_795_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_828_, 1, v_a_793_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_convertDateTime___boxed(lean_object* v_d_834_, lean_object* v_identifier_835_, lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
uint8_t v_identifier_boxed_838_; lean_object* v_res_839_; 
v_identifier_boxed_838_ = lean_unbox(v_identifier_835_);
v_res_839_ = l___private_Std_Time_Notation_0__Std_Time_convertDateTime(v_d_834_, v_identifier_boxed_838_, v_a_836_, v_a_837_);
lean_dec_ref(v_a_836_);
return v_res_839_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId(lean_object* v_name_841_){
_start:
{
lean_object* v___y_843_; lean_object* v___x_849_; lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_849_ = lean_string_utf8_byte_size(v_name_841_);
v___x_850_ = lean_unsigned_to_nat(3u);
v___x_851_ = lean_nat_dec_le(v___x_850_, v___x_849_);
if (v___x_851_ == 0)
{
lean_inc_ref(v_name_841_);
v___y_843_ = v_name_841_;
goto v___jp_842_;
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_852_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId___closed__0));
v___x_853_ = lean_unsigned_to_nat(0u);
v___x_854_ = lean_string_memcmp(v_name_841_, v___x_852_, v___x_853_, v___x_853_, v___x_850_);
if (v___x_854_ == 0)
{
lean_inc_ref(v_name_841_);
v___y_843_ = v_name_841_;
goto v___jp_842_;
}
else
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_inc_ref(v_name_841_);
v___x_855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_855_, 0, v_name_841_);
lean_ctor_set(v___x_855_, 1, v___x_853_);
lean_ctor_set(v___x_855_, 2, v___x_849_);
v___x_856_ = l_String_Slice_Pos_nextn(v___x_855_, v___x_853_, v___x_850_);
lean_dec_ref_known(v___x_855_, 3);
v___x_857_ = lean_string_utf8_extract_fast(v_name_841_, v___x_856_, v___x_849_);
lean_dec(v___x_856_);
v___y_843_ = v___x_857_;
goto v___jp_842_;
}
}
v___jp_842_:
{
lean_object* v___x_844_; lean_object* v_name_845_; uint8_t v___x_846_; 
v___x_844_ = l_Std_Time_TimeZone_GMT;
v_name_845_ = lean_ctor_get(v___x_844_, 1);
v___x_846_ = lean_string_dec_eq(v_name_841_, v_name_845_);
lean_dec_ref(v_name_841_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
v___x_847_ = l_Std_Time_TimeZone_Offset_fromOffset(v___y_843_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_dec_ref_known(v___x_847_, 1);
return v___x_846_;
}
else
{
uint8_t v___x_848_; 
lean_dec_ref_known(v___x_847_, 1);
v___x_848_ = 1;
return v___x_848_;
}
}
else
{
lean_dec_ref(v___y_843_);
return v___x_846_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId___boxed(lean_object* v_name_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId(v_name_858_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1(lean_object* v_x_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1029_ = ((lean_object*)(l_Std_Time_termZoned_x28___x29___closed__1));
lean_inc(v_x_1026_);
v___x_1030_ = l_Lean_Syntax_isOfKind(v_x_1026_, v___x_1029_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec(v_x_1026_);
v___x_1031_ = lean_box(1);
v___x_1032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
lean_ctor_set(v___x_1032_, 1, v_a_1028_);
return v___x_1032_;
}
else
{
lean_object* v___x_1033_; lean_object* v_date_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1033_ = lean_unsigned_to_nat(1u);
v_date_1034_ = l_Lean_Syntax_getArg(v_x_1026_, v___x_1033_);
lean_dec(v_x_1026_);
v___x_1035_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_date_1034_);
v___x_1036_ = l_Lean_Syntax_isOfKind(v_date_1034_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
lean_dec(v_date_1034_);
v___x_1037_ = lean_box(1);
v___x_1038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v_a_1028_);
return v___x_1038_;
}
else
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = l_Lean_TSyntax_getString(v_date_1034_);
lean_inc_ref(v___x_1039_);
v___x_1040_ = l_Std_Time_DateTime_fromLeanDateTimeWithZoneString(v___x_1039_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v___x_1041_; 
lean_dec_ref_known(v___x_1040_, 1);
v___x_1041_ = l_Std_Time_DateTime_fromLeanDateTimeWithIdentifierString(v___x_1039_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref_known(v___x_1041_, 1);
v___x_1043_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1044_ = lean_string_append(v___x_1043_, v_a_1042_);
lean_dec(v_a_1042_);
v___x_1045_ = l_Lean_Macro_throwErrorAt___redArg(v_date_1034_, v___x_1044_, v_a_1027_, v_a_1028_);
lean_dec(v_date_1034_);
return v___x_1045_;
}
else
{
lean_object* v_a_1046_; uint8_t v___y_1048_; lean_object* v_timezone_1059_; lean_object* v_name_1060_; uint8_t v___x_1061_; 
lean_dec(v_date_1034_);
v_a_1046_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v___x_1041_, 1);
v_timezone_1059_ = lean_ctor_get(v_a_1046_, 3);
v_name_1060_ = lean_ctor_get(v_timezone_1059_, 1);
lean_inc_ref(v_name_1060_);
v___x_1061_ = l___private_Std_Time_Notation_0__Std_Time_isFixedZoneId(v_name_1060_);
if (v___x_1061_ == 0)
{
v___y_1048_ = v___x_1036_;
goto v___jp_1047_;
}
else
{
uint8_t v___x_1062_; 
v___x_1062_ = 0;
v___y_1048_ = v___x_1062_;
goto v___jp_1047_;
}
v___jp_1047_:
{
lean_object* v___x_1049_; lean_object* v_a_1050_; lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
v___x_1049_ = l___private_Std_Time_Notation_0__Std_Time_convertDateTime(v_a_1046_, v___y_1048_, v_a_1027_, v_a_1028_);
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_a_1051_ = lean_ctor_get(v___x_1049_, 1);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1049_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1050_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
}
else
{
lean_object* v_a_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v_a_1066_; lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec_ref(v___x_1039_);
lean_dec(v_date_1034_);
v_a_1063_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1064_ = 0;
v___x_1065_ = l___private_Std_Time_Notation_0__Std_Time_convertDateTime(v_a_1063_, v___x_1064_, v_a_1027_, v_a_1028_);
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_a_1067_ = lean_ctor_get(v___x_1065_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1065_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1066_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___boxed(lean_object* v_x_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1(v_x_1075_, v_a_1076_, v_a_1077_);
lean_dec_ref(v_a_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x2c___x29__1(lean_object* v_x_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Std_Time_termZoned_x28___x2c___x29___closed__1));
lean_inc(v_x_1079_);
v___x_1083_ = l_Lean_Syntax_isOfKind(v_x_1079_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_dec(v_x_1079_);
v___x_1084_ = lean_box(1);
v___x_1085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_a_1081_);
return v___x_1085_;
}
else
{
lean_object* v___x_1086_; lean_object* v_date_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1086_ = lean_unsigned_to_nat(1u);
v_date_1087_ = l_Lean_Syntax_getArg(v_x_1079_, v___x_1086_);
v___x_1088_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_date_1087_);
v___x_1089_ = l_Lean_Syntax_isOfKind(v_date_1087_, v___x_1088_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
lean_dec(v_date_1087_);
lean_dec(v_x_1079_);
v___x_1090_ = lean_box(1);
v___x_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v_a_1081_);
return v___x_1091_;
}
else
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = l_Lean_TSyntax_getString(v_date_1087_);
v___x_1093_ = l_Std_Time_PlainDateTime_fromLeanDateTimeString(v___x_1092_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_dec(v_x_1079_);
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1095_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1096_ = lean_string_append(v___x_1095_, v_a_1094_);
lean_dec(v_a_1094_);
v___x_1097_ = l_Lean_Macro_throwErrorAt___redArg(v_date_1087_, v___x_1096_, v_a_1080_, v_a_1081_);
lean_dec(v_date_1087_);
return v___x_1097_;
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1099_; lean_object* v_a_1100_; lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1124_; 
lean_dec(v_date_1087_);
v_a_1098_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1099_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime(v_a_1098_, v_a_1080_, v_a_1081_);
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_a_1101_ = lean_ctor_get(v___x_1099_, 1);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1103_ = v___x_1099_;
v_isShared_1104_ = v_isSharedCheck_1124_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1124_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v_quotContext_1105_; lean_object* v_currMacroScope_1106_; lean_object* v_ref_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v_quotContext_1105_ = lean_ctor_get(v_a_1080_, 1);
v_currMacroScope_1106_ = lean_ctor_get(v_a_1080_, 2);
v_ref_1107_ = lean_ctor_get(v_a_1080_, 5);
v___x_1108_ = lean_unsigned_to_nat(3u);
v___x_1109_ = l_Lean_Syntax_getArg(v_x_1079_, v___x_1108_);
lean_dec(v_x_1079_);
v___x_1110_ = 0;
v___x_1111_ = l_Lean_SourceInfo_fromRef(v_ref_1107_, v___x_1110_);
v___x_1112_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__5));
v___x_1113_ = lean_obj_once(&l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1, &l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1_once, _init_l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__1);
v___x_1114_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__4));
lean_inc(v_currMacroScope_1106_);
lean_inc(v_quotContext_1105_);
v___x_1115_ = l_Lean_addMacroScope(v_quotContext_1105_, v___x_1114_, v_currMacroScope_1106_);
v___x_1116_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_convertDateTime___closed__6));
lean_inc_n(v___x_1111_, 2);
v___x_1117_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1111_);
lean_ctor_set(v___x_1117_, 1, v___x_1113_);
lean_ctor_set(v___x_1117_, 2, v___x_1115_);
lean_ctor_set(v___x_1117_, 3, v___x_1116_);
v___x_1118_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxInt___closed__16));
v___x_1119_ = l_Lean_Syntax_node2(v___x_1111_, v___x_1118_, v_a_1100_, v___x_1109_);
v___x_1120_ = l_Lean_Syntax_node2(v___x_1111_, v___x_1112_, v___x_1117_, v___x_1119_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1120_);
v___x_1122_ = v___x_1103_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_a_1101_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x2c___x29__1___boxed(lean_object* v_x_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x2c___x29__1(v_x_1125_, v_a_1126_, v_a_1127_);
lean_dec_ref(v_a_1126_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDatetime_x28___x29__1(lean_object* v_x_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = ((lean_object*)(l_Std_Time_termDatetime_x28___x29___closed__1));
lean_inc(v_x_1129_);
v___x_1133_ = l_Lean_Syntax_isOfKind(v_x_1129_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec(v_x_1129_);
v___x_1134_ = lean_box(1);
v___x_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v_a_1131_);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; lean_object* v_date_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1136_ = lean_unsigned_to_nat(1u);
v_date_1137_ = l_Lean_Syntax_getArg(v_x_1129_, v___x_1136_);
lean_dec(v_x_1129_);
v___x_1138_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_date_1137_);
v___x_1139_ = l_Lean_Syntax_isOfKind(v_date_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
lean_dec(v_date_1137_);
v___x_1140_ = lean_box(1);
v___x_1141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set(v___x_1141_, 1, v_a_1131_);
return v___x_1141_;
}
else
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = l_Lean_TSyntax_getString(v_date_1137_);
v___x_1143_ = l_Std_Time_PlainDateTime_fromLeanDateTimeString(v___x_1142_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref_known(v___x_1143_, 1);
v___x_1145_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1146_ = lean_string_append(v___x_1145_, v_a_1144_);
lean_dec(v_a_1144_);
v___x_1147_ = l_Lean_Macro_throwErrorAt___redArg(v_date_1137_, v___x_1146_, v_a_1130_, v_a_1131_);
lean_dec(v_date_1137_);
return v___x_1147_;
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1149_; lean_object* v_a_1150_; lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_date_1137_);
v_a_1148_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1143_, 1);
v___x_1149_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDateTime(v_a_1148_, v_a_1130_, v_a_1131_);
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
v_a_1151_ = lean_ctor_get(v___x_1149_, 1);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1149_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_inc(v_a_1150_);
lean_dec(v___x_1149_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1150_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDatetime_x28___x29__1___boxed(lean_object* v_x_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDatetime_x28___x29__1(v_x_1159_, v_a_1160_, v_a_1161_);
lean_dec_ref(v_a_1160_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDate_x28___x29__1(lean_object* v_x_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = ((lean_object*)(l_Std_Time_termDate_x28___x29___closed__1));
lean_inc(v_x_1163_);
v___x_1167_ = l_Lean_Syntax_isOfKind(v_x_1163_, v___x_1166_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
lean_dec(v_x_1163_);
v___x_1168_ = lean_box(1);
v___x_1169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
lean_ctor_set(v___x_1169_, 1, v_a_1165_);
return v___x_1169_;
}
else
{
lean_object* v___x_1170_; lean_object* v_date_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1170_ = lean_unsigned_to_nat(1u);
v_date_1171_ = l_Lean_Syntax_getArg(v_x_1163_, v___x_1170_);
lean_dec(v_x_1163_);
v___x_1172_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_date_1171_);
v___x_1173_ = l_Lean_Syntax_isOfKind(v_date_1171_, v___x_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_dec(v_date_1171_);
v___x_1174_ = lean_box(1);
v___x_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v_a_1165_);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = l_Lean_TSyntax_getString(v_date_1171_);
v___x_1177_ = l_Std_Time_PlainDate_fromSQLDateString(v___x_1176_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1178_);
lean_dec_ref_known(v___x_1177_, 1);
v___x_1179_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1180_ = lean_string_append(v___x_1179_, v_a_1178_);
lean_dec(v_a_1178_);
v___x_1181_ = l_Lean_Macro_throwErrorAt___redArg(v_date_1171_, v___x_1180_, v_a_1164_, v_a_1165_);
lean_dec(v_date_1171_);
return v___x_1181_;
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1183_; lean_object* v_a_1184_; lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec(v_date_1171_);
v_a_1182_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1177_, 1);
v___x_1183_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainDate(v_a_1182_, v_a_1164_, v_a_1165_);
lean_dec(v_a_1182_);
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
v_a_1185_ = lean_ctor_get(v___x_1183_, 1);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1183_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_inc(v_a_1184_);
lean_dec(v___x_1183_);
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
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1184_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_a_1185_);
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
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDate_x28___x29__1___boxed(lean_object* v_x_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termDate_x28___x29__1(v_x_1193_, v_a_1194_, v_a_1195_);
lean_dec_ref(v_a_1194_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTime_x28___x29__1(lean_object* v_x_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v___x_1200_; uint8_t v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Std_Time_termTime_x28___x29___closed__1));
lean_inc(v_x_1197_);
v___x_1201_ = l_Lean_Syntax_isOfKind(v_x_1197_, v___x_1200_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_dec(v_x_1197_);
v___x_1202_ = lean_box(1);
v___x_1203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
lean_ctor_set(v___x_1203_, 1, v_a_1199_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; lean_object* v_time_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1204_ = lean_unsigned_to_nat(1u);
v_time_1205_ = l_Lean_Syntax_getArg(v_x_1197_, v___x_1204_);
lean_dec(v_x_1197_);
v___x_1206_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_time_1205_);
v___x_1207_ = l_Lean_Syntax_isOfKind(v_time_1205_, v___x_1206_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
lean_dec(v_time_1205_);
v___x_1208_ = lean_box(1);
v___x_1209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v_a_1199_);
return v___x_1209_;
}
else
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = l_Lean_TSyntax_getString(v_time_1205_);
v___x_1211_ = l_Std_Time_PlainTime_fromLeanTime24Hour(v___x_1210_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1213_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1214_ = lean_string_append(v___x_1213_, v_a_1212_);
lean_dec(v_a_1212_);
v___x_1215_ = l_Lean_Macro_throwErrorAt___redArg(v_time_1205_, v___x_1214_, v_a_1198_, v_a_1199_);
lean_dec(v_time_1205_);
return v___x_1215_;
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1217_; lean_object* v_a_1218_; lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec(v_time_1205_);
v_a_1216_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1217_ = l___private_Std_Time_Notation_0__Std_Time_convertPlainTime(v_a_1216_, v_a_1198_, v_a_1199_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_a_1219_ = lean_ctor_get(v___x_1217_, 1);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1217_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1218_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTime_x28___x29__1___boxed(lean_object* v_x_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTime_x28___x29__1(v_x_1227_, v_a_1228_, v_a_1229_);
lean_dec_ref(v_a_1228_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termOffset_x28___x29__1(lean_object* v_x_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = ((lean_object*)(l_Std_Time_termOffset_x28___x29___closed__1));
lean_inc(v_x_1231_);
v___x_1235_ = l_Lean_Syntax_isOfKind(v_x_1231_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_dec(v_x_1231_);
v___x_1236_ = lean_box(1);
v___x_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
lean_ctor_set(v___x_1237_, 1, v_a_1233_);
return v___x_1237_;
}
else
{
lean_object* v___x_1238_; lean_object* v_offset_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1238_ = lean_unsigned_to_nat(1u);
v_offset_1239_ = l_Lean_Syntax_getArg(v_x_1231_, v___x_1238_);
lean_dec(v_x_1231_);
v___x_1240_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_offset_1239_);
v___x_1241_ = l_Lean_Syntax_isOfKind(v_offset_1239_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec(v_offset_1239_);
v___x_1242_ = lean_box(1);
v___x_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v_a_1233_);
return v___x_1243_;
}
else
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = l_Lean_TSyntax_getString(v_offset_1239_);
v___x_1245_ = l_Std_Time_TimeZone_Offset_fromOffset(v___x_1244_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1245_, 1);
v___x_1247_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1248_ = lean_string_append(v___x_1247_, v_a_1246_);
lean_dec(v_a_1246_);
v___x_1249_ = l_Lean_Macro_throwErrorAt___redArg(v_offset_1239_, v___x_1248_, v_a_1232_, v_a_1233_);
lean_dec(v_offset_1239_);
return v___x_1249_;
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1251_; lean_object* v_a_1252_; lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec(v_offset_1239_);
v_a_1250_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1250_);
lean_dec_ref_known(v___x_1245_, 1);
v___x_1251_ = l___private_Std_Time_Notation_0__Std_Time_convertOffset(v_a_1250_, v_a_1232_, v_a_1233_);
lean_dec(v_a_1250_);
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
v_a_1253_ = lean_ctor_get(v___x_1251_, 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1251_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_inc(v_a_1252_);
lean_dec(v___x_1251_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1252_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termOffset_x28___x29__1___boxed(lean_object* v_x_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termOffset_x28___x29__1(v_x_1261_, v_a_1262_, v_a_1263_);
lean_dec_ref(v_a_1262_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTimezone_x28___x29__1(lean_object* v_x_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = ((lean_object*)(l_Std_Time_termTimezone_x28___x29___closed__1));
lean_inc(v_x_1265_);
v___x_1269_ = l_Lean_Syntax_isOfKind(v_x_1265_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec(v_x_1265_);
v___x_1270_ = lean_box(1);
v___x_1271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v_a_1267_);
return v___x_1271_;
}
else
{
lean_object* v___x_1272_; lean_object* v_tz_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1272_ = lean_unsigned_to_nat(1u);
v_tz_1273_ = l_Lean_Syntax_getArg(v_x_1265_, v___x_1272_);
lean_dec(v_x_1265_);
v___x_1274_ = ((lean_object*)(l___private_Std_Time_Notation_0__Std_Time_syntaxString___closed__1));
lean_inc(v_tz_1273_);
v___x_1275_ = l_Lean_Syntax_isOfKind(v_tz_1273_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec(v_tz_1273_);
v___x_1276_ = lean_box(1);
v___x_1277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set(v___x_1277_, 1, v_a_1267_);
return v___x_1277_;
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = l_Lean_TSyntax_getString(v_tz_1273_);
v___x_1279_ = l_Std_Time_TimeZone_fromTimeZone(v___x_1278_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1279_, 1);
v___x_1281_ = ((lean_object*)(l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termZoned_x28___x29__1___closed__0));
v___x_1282_ = lean_string_append(v___x_1281_, v_a_1280_);
lean_dec(v_a_1280_);
v___x_1283_ = l_Lean_Macro_throwErrorAt___redArg(v_tz_1273_, v___x_1282_, v_a_1266_, v_a_1267_);
lean_dec(v_tz_1273_);
return v___x_1283_;
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v_a_1286_; lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v_tz_1273_);
v_a_1284_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1279_, 1);
v___x_1285_ = l___private_Std_Time_Notation_0__Std_Time_convertTimezone(v_a_1284_, v_a_1266_, v_a_1267_);
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_a_1287_ = lean_ctor_get(v___x_1285_, 1);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1285_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1286_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTimezone_x28___x29__1___boxed(lean_object* v_x_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Std_Time___aux__Std__Time__Notation______macroRules__Std__Time__termTimezone_x28___x29__1(v_x_1295_, v_a_1296_, v_a_1297_);
lean_dec_ref(v_a_1296_);
return v_res_1298_;
}
}
lean_object* runtime_initialize_Std_Time_Format(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Std_Time_Format(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Format(uint8_t builtin);
lean_object* initialize_Std_Time_Format(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Notation(builtin);
}
#ifdef __cplusplus
}
#endif
