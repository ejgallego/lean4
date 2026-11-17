// Lean compiler output
// Module: Std.Time.Zoned.Database.PosixTz
// Imports: public import Std.Internal.Parsec public import Std.Time.Zoned.ZoneRules
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
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Std_Internal_Parsec_String_Parser_run___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " out of range"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '+'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '-'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hour "};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " out of range 0-"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "167"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: ':'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "minute"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ASCII letter expected"};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '>'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: 'M'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "month"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '.'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "week"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "day "};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " out of range 0-6"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec(lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: 'J'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Julian day"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "day"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSpec(lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '/'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: ','"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "empty timezone name"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(lean_object* v_lo_6_, lean_object* v_hi_7_, lean_object* v_name_8_, lean_object* v_extra_9_, lean_object* v_a_10_){
_start:
{
lean_object* v_fst_14_; lean_object* v_snd_15_; lean_object* v___x_16_; uint8_t v_decide_17_; 
v_fst_14_ = lean_ctor_get(v_a_10_, 0);
v_snd_15_ = lean_ctor_get(v_a_10_, 1);
v___x_16_ = lean_string_utf8_byte_size(v_fst_14_);
v_decide_17_ = lean_nat_dec_eq(v_snd_15_, v___x_16_);
if (v_decide_17_ == 0)
{
uint32_t v_c_18_; uint32_t v___x_19_; uint8_t v___x_20_; 
v_c_18_ = lean_string_utf8_get_fast(v_fst_14_, v_snd_15_);
v___x_19_ = 48;
v___x_20_ = lean_uint32_dec_le(v___x_19_, v_c_18_);
if (v___x_20_ == 0)
{
lean_dec_ref(v_extra_9_);
lean_dec_ref(v_name_8_);
goto v___jp_11_;
}
else
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 57;
v___x_22_ = lean_uint32_dec_le(v_c_18_, v___x_21_);
if (v___x_22_ == 0)
{
lean_dec_ref(v_extra_9_);
lean_dec_ref(v_name_8_);
goto v___jp_11_;
}
else
{
lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_65_; 
lean_inc(v_snd_15_);
lean_inc(v_fst_14_);
v_isSharedCheck_65_ = !lean_is_exclusive(v_a_10_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; lean_object* v_unused_67_; 
v_unused_66_ = lean_ctor_get(v_a_10_, 1);
lean_dec(v_unused_66_);
v_unused_67_ = lean_ctor_get(v_a_10_, 0);
lean_dec(v_unused_67_);
v___x_24_ = v_a_10_;
v_isShared_25_ = v_isSharedCheck_65_;
goto v_resetjp_23_;
}
else
{
lean_dec(v_a_10_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_65_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v_fst_31_; lean_object* v_snd_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_64_; 
v___x_26_ = lean_string_utf8_next_fast(v_fst_14_, v_snd_15_);
lean_dec(v_snd_15_);
v___x_27_ = lean_uint32_to_nat(v_c_18_);
v___x_28_ = lean_unsigned_to_nat(48u);
v___x_29_ = lean_nat_sub(v___x_27_, v___x_28_);
lean_dec(v___x_27_);
v___x_30_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(v_fst_14_, v___x_26_, v___x_29_);
v_fst_31_ = lean_ctor_get(v___x_30_, 0);
v_snd_32_ = lean_ctor_get(v___x_30_, 1);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_64_ == 0)
{
v___x_34_ = v___x_30_;
v_isShared_35_ = v_isSharedCheck_64_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_snd_32_);
lean_inc(v_fst_31_);
lean_dec(v___x_30_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_64_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 1, v_snd_32_);
v___x_37_ = v___x_24_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_fst_14_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_snd_32_);
v___x_37_ = v_reuseFailAlloc_63_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_38_ = lean_nat_to_int(v_fst_31_);
lean_inc(v___x_38_);
v___x_50_ = lean_apply_1(v_extra_9_, v___x_38_);
v___x_51_ = lean_unbox(v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
lean_del_object(v___x_34_);
v___x_52_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2));
v___x_53_ = lean_string_append(v_name_8_, v___x_52_);
v___x_54_ = l_Int_repr(v___x_38_);
lean_dec(v___x_38_);
v___x_55_ = lean_string_append(v___x_53_, v___x_54_);
lean_dec_ref(v___x_54_);
v___x_56_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3));
v___x_57_ = lean_string_append(v___x_55_, v___x_56_);
v___x_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_37_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
return v___x_59_;
}
else
{
uint8_t v___x_60_; 
v___x_60_ = lean_int_dec_le(v_lo_6_, v___x_38_);
if (v___x_60_ == 0)
{
goto v___jp_39_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = lean_int_dec_le(v___x_38_, v_hi_7_);
if (v___x_61_ == 0)
{
goto v___jp_39_;
}
else
{
lean_object* v___x_62_; 
lean_del_object(v___x_34_);
lean_dec_ref(v_name_8_);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_37_);
lean_ctor_set(v___x_62_, 1, v___x_38_);
return v___x_62_;
}
}
}
v___jp_39_:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_40_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2));
v___x_41_ = lean_string_append(v_name_8_, v___x_40_);
v___x_42_ = l_Int_repr(v___x_38_);
lean_dec(v___x_38_);
v___x_43_ = lean_string_append(v___x_41_, v___x_42_);
lean_dec_ref(v___x_42_);
v___x_44_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3));
v___x_45_ = lean_string_append(v___x_43_, v___x_44_);
v___x_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 1, v___x_46_);
lean_ctor_set(v___x_34_, 0, v___x_37_);
v___x_48_ = v___x_34_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_37_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
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
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec_ref(v_extra_9_);
lean_dec_ref(v_name_8_);
v___x_68_ = lean_box(0);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v_a_10_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
return v___x_69_;
}
v___jp_11_:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1));
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v_a_10_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___boxed(lean_object* v_lo_70_, lean_object* v_hi_71_, lean_object* v_name_72_, lean_object* v_extra_73_, lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v_lo_70_, v_hi_71_, v_name_72_, v_extra_73_, v_a_74_);
lean_dec(v_hi_71_);
lean_dec(v_lo_70_);
return v_res_75_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_to_int(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_85_ = lean_int_neg(v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(lean_object* v_a_86_){
_start:
{
lean_object* v_fst_87_; lean_object* v_snd_88_; lean_object* v_err_90_; lean_object* v_err_96_; lean_object* v___x_118_; uint8_t v_decide_119_; 
v_fst_87_ = lean_ctor_get(v_a_86_, 0);
v_snd_88_ = lean_ctor_get(v_a_86_, 1);
v___x_118_ = lean_string_utf8_byte_size(v_fst_87_);
v_decide_119_ = lean_nat_dec_eq(v_snd_88_, v___x_118_);
if (v_decide_119_ == 0)
{
uint32_t v___x_120_; uint32_t v_c_121_; uint8_t v___x_122_; 
v___x_120_ = 45;
v_c_121_ = lean_string_utf8_get_fast(v_fst_87_, v_snd_88_);
v___x_122_ = lean_uint32_dec_eq(v_c_121_, v___x_120_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4));
v_err_96_ = v___x_123_;
goto v___jp_95_;
}
else
{
lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_133_; 
lean_inc(v_snd_88_);
lean_inc(v_fst_87_);
v_isSharedCheck_133_ = !lean_is_exclusive(v_a_86_);
if (v_isSharedCheck_133_ == 0)
{
lean_object* v_unused_134_; lean_object* v_unused_135_; 
v_unused_134_ = lean_ctor_get(v_a_86_, 1);
lean_dec(v_unused_134_);
v_unused_135_ = lean_ctor_get(v_a_86_, 0);
lean_dec(v_unused_135_);
v___x_125_ = v_a_86_;
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
else
{
lean_dec(v_a_86_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v_it_x27_129_; 
v___x_127_ = lean_string_utf8_next_fast(v_fst_87_, v_snd_88_);
lean_dec(v_snd_88_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_127_);
v_it_x27_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_fst_87_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v___x_127_);
v_it_x27_129_ = v_reuseFailAlloc_132_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5);
v___x_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_131_, 0, v_it_x27_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
return v___x_131_;
}
}
}
}
else
{
lean_object* v___x_136_; 
v___x_136_ = lean_box(0);
v_err_96_ = v___x_136_;
goto v___jp_95_;
}
v___jp_89_:
{
uint8_t v_decide_91_; 
v_decide_91_ = lean_nat_dec_eq(v_snd_88_, v_snd_88_);
if (v_decide_91_ == 0)
{
lean_object* v___x_92_; 
lean_inc(v_err_90_);
v___x_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_92_, 0, v_a_86_);
lean_ctor_set(v___x_92_, 1, v_err_90_);
return v___x_92_;
}
else
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v_a_86_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
return v___x_94_;
}
}
v___jp_95_:
{
uint8_t v_decide_97_; 
v_decide_97_ = lean_nat_dec_eq(v_snd_88_, v_snd_88_);
if (v_decide_97_ == 0)
{
lean_object* v___x_98_; 
lean_inc(v_err_96_);
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v_a_86_);
lean_ctor_set(v___x_98_, 1, v_err_96_);
return v___x_98_;
}
else
{
lean_object* v___x_99_; uint8_t v_decide_100_; 
v___x_99_ = lean_string_utf8_byte_size(v_fst_87_);
v_decide_100_ = lean_nat_dec_eq(v_snd_88_, v___x_99_);
if (v_decide_100_ == 0)
{
uint32_t v___x_101_; uint32_t v_c_102_; uint8_t v___x_103_; 
v___x_101_ = 43;
v_c_102_ = lean_string_utf8_get_fast(v_fst_87_, v_snd_88_);
v___x_103_ = lean_uint32_dec_eq(v_c_102_, v___x_101_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2));
v_err_90_ = v___x_104_;
goto v___jp_89_;
}
else
{
lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_114_; 
lean_inc(v_snd_88_);
lean_inc(v_fst_87_);
v_isSharedCheck_114_ = !lean_is_exclusive(v_a_86_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; lean_object* v_unused_116_; 
v_unused_115_ = lean_ctor_get(v_a_86_, 1);
lean_dec(v_unused_115_);
v_unused_116_ = lean_ctor_get(v_a_86_, 0);
lean_dec(v_unused_116_);
v___x_106_ = v_a_86_;
v_isShared_107_ = v_isSharedCheck_114_;
goto v_resetjp_105_;
}
else
{
lean_dec(v_a_86_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_114_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v_it_x27_110_; 
v___x_108_ = lean_string_utf8_next_fast(v_fst_87_, v_snd_88_);
lean_dec(v_snd_88_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_108_);
v_it_x27_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_fst_87_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_108_);
v_it_x27_110_ = v_reuseFailAlloc_113_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v_it_x27_110_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
return v___x_112_;
}
}
}
}
else
{
lean_object* v___x_117_; 
v___x_117_ = lean_box(0);
v_err_90_ = v___x_117_;
goto v___jp_89_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__0(lean_object* v_a_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_nat_to_int(v_a_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__2(lean_object* v_a_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Rat_ofInt(v_a_139_);
return v___x_140_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0(uint8_t v___x_141_, lean_object* v_x_142_){
_start:
{
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed(lean_object* v___x_143_, lean_object* v_x_144_){
_start:
{
uint8_t v___x_3982__boxed_145_; uint8_t v_res_146_; lean_object* v_r_147_; 
v___x_3982__boxed_145_ = lean_unbox(v___x_143_);
v_res_146_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0(v___x_3982__boxed_145_, v_x_144_);
lean_dec(v_x_144_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(3600u);
v___x_152_ = lean_nat_to_int(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(60u);
v___x_154_ = lean_nat_to_int(v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_nat_to_int(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(59u);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(lean_object* v_maxHour_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_fst_169_; lean_object* v_snd_170_; lean_object* v___x_171_; uint8_t v_decide_172_; 
v_fst_169_ = lean_ctor_get(v_a_165_, 0);
v_snd_170_ = lean_ctor_get(v_a_165_, 1);
v___x_171_ = lean_string_utf8_byte_size(v_fst_169_);
v_decide_172_ = lean_nat_dec_eq(v_snd_170_, v___x_171_);
if (v_decide_172_ == 0)
{
uint32_t v_c_173_; uint32_t v___x_174_; uint8_t v___x_175_; 
v_c_173_ = lean_string_utf8_get_fast(v_fst_169_, v_snd_170_);
v___x_174_ = 48;
v___x_175_ = lean_uint32_dec_le(v___x_174_, v_c_173_);
if (v___x_175_ == 0)
{
lean_dec(v_maxHour_164_);
goto v___jp_166_;
}
else
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 57;
v___x_177_ = lean_uint32_dec_le(v_c_173_, v___x_176_);
if (v___x_177_ == 0)
{
lean_dec(v_maxHour_164_);
goto v___jp_166_;
}
else
{
lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_286_; 
lean_inc(v_snd_170_);
lean_inc(v_fst_169_);
v_isSharedCheck_286_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; lean_object* v_unused_288_; 
v_unused_287_ = lean_ctor_get(v_a_165_, 1);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_a_165_, 0);
lean_dec(v_unused_288_);
v___x_179_ = v_a_165_;
v_isShared_180_ = v_isSharedCheck_286_;
goto v_resetjp_178_;
}
else
{
lean_dec(v_a_165_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_286_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v_fst_186_; lean_object* v_snd_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_285_; 
v___x_181_ = lean_string_utf8_next_fast(v_fst_169_, v_snd_170_);
lean_dec(v_snd_170_);
v___x_182_ = lean_uint32_to_nat(v_c_173_);
v___x_183_ = lean_unsigned_to_nat(48u);
v___x_184_ = lean_nat_sub(v___x_182_, v___x_183_);
lean_dec(v___x_182_);
v___x_185_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(v_fst_169_, v___x_181_, v___x_184_);
v_fst_186_ = lean_ctor_get(v___x_185_, 0);
v_snd_187_ = lean_ctor_get(v___x_185_, 1);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_285_ == 0)
{
v___x_189_ = v___x_185_;
v_isShared_190_ = v_isSharedCheck_285_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_snd_187_);
lean_inc(v_fst_186_);
lean_dec(v___x_185_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_285_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
lean_inc(v_snd_187_);
lean_inc(v_fst_169_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v_snd_187_);
v___x_192_ = v___x_179_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_fst_169_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v_snd_187_);
v___x_192_ = v_reuseFailAlloc_284_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
uint8_t v___x_193_; 
v___x_193_ = lean_nat_dec_lt(v_maxHour_164_, v_fst_186_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
lean_dec(v_maxHour_164_);
v___x_194_ = lean_unsigned_to_nat(167u);
v___x_195_ = lean_nat_dec_le(v_fst_186_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v___x_196_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0));
v___x_197_ = l_Nat_reprFast(v_fst_186_);
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1));
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2));
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
if (v_isShared_190_ == 0)
{
lean_ctor_set_tag(v___x_189_, 1);
lean_ctor_set(v___x_189_, 1, v___x_203_);
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_205_ = v___x_189_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
else
{
lean_object* v___x_207_; lean_object* v___f_208_; lean_object* v___x_209_; lean_object* v___y_211_; lean_object* v_pos_212_; lean_object* v_res_213_; lean_object* v___y_224_; lean_object* v___y_225_; lean_object* v_snd_226_; lean_object* v_err_227_; uint32_t v___x_231_; lean_object* v_pos_233_; lean_object* v_fst_234_; lean_object* v_snd_235_; lean_object* v_res_236_; lean_object* v_err_253_; uint8_t v_decide_257_; 
v___x_207_ = lean_box(v___x_195_);
v___f_208_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_208_, 0, v___x_207_);
v___x_209_ = lean_nat_to_int(v_fst_186_);
v___x_231_ = 58;
v_decide_257_ = lean_nat_dec_eq(v_snd_187_, v___x_171_);
if (v_decide_257_ == 0)
{
uint32_t v_c_258_; uint8_t v___x_259_; 
v_c_258_ = lean_string_utf8_get_fast(v_fst_169_, v_snd_187_);
v___x_259_ = lean_uint32_dec_eq(v_c_258_, v___x_231_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; 
v___x_260_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7));
v_err_253_ = v___x_260_;
goto v___jp_252_;
}
else
{
lean_object* v___x_261_; lean_object* v_it_x27_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_261_ = lean_string_utf8_next_fast(v_fst_169_, v_snd_187_);
lean_inc(v_fst_169_);
v_it_x27_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_262_, 0, v_fst_169_);
lean_ctor_set(v_it_x27_262_, 1, v___x_261_);
v___x_263_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___x_264_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8);
v___x_265_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10));
lean_inc_ref(v___f_208_);
v___x_266_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_263_, v___x_264_, v___x_265_, v___f_208_, v_it_x27_262_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_pos_267_; lean_object* v_res_268_; lean_object* v_fst_269_; lean_object* v_snd_270_; 
lean_dec_ref(v___x_192_);
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v_pos_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_pos_267_);
v_res_268_ = lean_ctor_get(v___x_266_, 1);
lean_inc(v_res_268_);
lean_dec_ref_known(v___x_266_, 2);
v_fst_269_ = lean_ctor_get(v_pos_267_, 0);
lean_inc(v_fst_269_);
v_snd_270_ = lean_ctor_get(v_pos_267_, 1);
lean_inc(v_snd_270_);
v_pos_233_ = v_pos_267_;
v_fst_234_ = v_fst_269_;
v_snd_235_ = v_snd_270_;
v_res_236_ = v_res_268_;
goto v___jp_232_;
}
else
{
lean_object* v_err_271_; 
v_err_271_ = lean_ctor_get(v___x_266_, 1);
lean_inc(v_err_271_);
lean_dec_ref_known(v___x_266_, 2);
v_err_253_ = v_err_271_;
goto v___jp_252_;
}
}
}
else
{
lean_object* v___x_272_; 
v___x_272_ = lean_box(0);
v_err_253_ = v___x_272_;
goto v___jp_252_;
}
v___jp_210_:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_214_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_215_ = lean_int_mul(v___x_209_, v___x_214_);
lean_dec(v___x_209_);
v___x_216_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4);
v___x_217_ = lean_int_mul(v___y_211_, v___x_216_);
lean_dec(v___y_211_);
v___x_218_ = lean_int_add(v___x_215_, v___x_217_);
lean_dec(v___x_217_);
lean_dec(v___x_215_);
v___x_219_ = lean_int_add(v___x_218_, v_res_213_);
lean_dec(v_res_213_);
lean_dec(v___x_218_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 1, v___x_219_);
lean_ctor_set(v___x_189_, 0, v_pos_212_);
v___x_221_ = v___x_189_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_pos_212_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
v___jp_223_:
{
uint8_t v_decide_228_; 
v_decide_228_ = lean_nat_dec_eq(v_snd_226_, v_snd_226_);
lean_dec(v_snd_226_);
if (v_decide_228_ == 0)
{
lean_object* v___x_229_; 
lean_dec(v___y_224_);
lean_dec(v___x_209_);
lean_del_object(v___x_189_);
v___x_229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_229_, 0, v___y_225_);
lean_ctor_set(v___x_229_, 1, v_err_227_);
return v___x_229_;
}
else
{
lean_object* v___x_230_; 
lean_dec(v_err_227_);
v___x_230_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___y_211_ = v___y_224_;
v_pos_212_ = v___y_225_;
v_res_213_ = v___x_230_;
goto v___jp_210_;
}
}
v___jp_232_:
{
lean_object* v___x_237_; uint8_t v_decide_238_; 
v___x_237_ = lean_string_utf8_byte_size(v_fst_234_);
v_decide_238_ = lean_nat_dec_eq(v_snd_235_, v___x_237_);
if (v_decide_238_ == 0)
{
uint32_t v_c_239_; uint8_t v___x_240_; 
v_c_239_ = lean_string_utf8_get_fast(v_fst_234_, v_snd_235_);
v___x_240_ = lean_uint32_dec_eq(v_c_239_, v___x_231_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
lean_dec(v_fst_234_);
lean_dec_ref(v___f_208_);
v___x_241_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7));
v___y_224_ = v_res_236_;
v___y_225_ = v_pos_233_;
v_snd_226_ = v_snd_235_;
v_err_227_ = v___x_241_;
goto v___jp_223_;
}
else
{
lean_object* v___x_242_; lean_object* v_it_x27_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_242_ = lean_string_utf8_next_fast(v_fst_234_, v_snd_235_);
v_it_x27_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_243_, 0, v_fst_234_);
lean_ctor_set(v_it_x27_243_, 1, v___x_242_);
v___x_244_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___x_245_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8);
v___x_246_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9));
v___x_247_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_244_, v___x_245_, v___x_246_, v___f_208_, v_it_x27_243_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_pos_248_; lean_object* v_res_249_; 
lean_dec(v_snd_235_);
lean_dec_ref(v_pos_233_);
v_pos_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_pos_248_);
v_res_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_res_249_);
lean_dec_ref_known(v___x_247_, 2);
v___y_211_ = v_res_236_;
v_pos_212_ = v_pos_248_;
v_res_213_ = v_res_249_;
goto v___jp_210_;
}
else
{
lean_object* v_err_250_; 
v_err_250_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_err_250_);
lean_dec_ref_known(v___x_247_, 2);
v___y_224_ = v_res_236_;
v___y_225_ = v_pos_233_;
v_snd_226_ = v_snd_235_;
v_err_227_ = v_err_250_;
goto v___jp_223_;
}
}
}
else
{
lean_object* v___x_251_; 
lean_dec(v_fst_234_);
lean_dec_ref(v___f_208_);
v___x_251_ = lean_box(0);
v___y_224_ = v_res_236_;
v___y_225_ = v_pos_233_;
v_snd_226_ = v_snd_235_;
v_err_227_ = v___x_251_;
goto v___jp_223_;
}
}
v___jp_252_:
{
uint8_t v_decide_254_; 
v_decide_254_ = lean_nat_dec_eq(v_snd_187_, v_snd_187_);
if (v_decide_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec(v___x_209_);
lean_dec_ref(v___f_208_);
lean_del_object(v___x_189_);
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_192_);
lean_ctor_set(v___x_255_, 1, v_err_253_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; 
lean_dec(v_err_253_);
v___x_256_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v_pos_233_ = v___x_192_;
v_fst_234_ = v_fst_169_;
v_snd_235_ = v_snd_187_;
v_res_236_ = v___x_256_;
goto v___jp_232_;
}
}
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_282_; 
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v___x_273_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0));
v___x_274_ = l_Nat_reprFast(v_fst_186_);
v___x_275_ = lean_string_append(v___x_273_, v___x_274_);
lean_dec_ref(v___x_274_);
v___x_276_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1));
v___x_277_ = lean_string_append(v___x_275_, v___x_276_);
v___x_278_ = l_Nat_reprFast(v_maxHour_164_);
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
lean_dec_ref(v___x_278_);
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
if (v_isShared_190_ == 0)
{
lean_ctor_set_tag(v___x_189_, 1);
lean_ctor_set(v___x_189_, 1, v___x_280_);
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_282_ = v___x_189_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
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
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v_maxHour_164_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_290_, 0, v_a_165_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
return v___x_290_;
}
v___jp_166_:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1));
v___x_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_168_, 0, v_a_165_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__1(lean_object* v_a_291_){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_nat_to_int(v_a_291_);
v___x_293_ = l_Rat_ofInt(v___x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(lean_object* v_a_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(v_a_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_pos_296_; lean_object* v_res_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_pos_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_pos_296_);
v_res_297_ = lean_ctor_get(v___x_295_, 1);
lean_inc(v_res_297_);
lean_dec_ref_known(v___x_295_, 2);
v___x_298_ = lean_unsigned_to_nat(24u);
v___x_299_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(v___x_298_, v_pos_296_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_pos_300_; lean_object* v_res_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_310_; 
v_pos_300_ = lean_ctor_get(v___x_299_, 0);
v_res_301_ = lean_ctor_get(v___x_299_, 1);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_310_ == 0)
{
v___x_303_ = v___x_299_;
v_isShared_304_ = v_isSharedCheck_310_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_res_301_);
lean_inc(v_pos_300_);
lean_dec(v___x_299_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_310_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_305_ = lean_int_neg(v_res_297_);
lean_dec(v_res_297_);
v___x_306_ = lean_int_mul(v___x_305_, v_res_301_);
lean_dec(v_res_301_);
lean_dec(v___x_305_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 1, v___x_306_);
v___x_308_ = v___x_303_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_pos_300_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
else
{
lean_object* v_pos_311_; lean_object* v_err_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_dec(v_res_297_);
v_pos_311_ = lean_ctor_get(v___x_299_, 0);
v_err_312_ = lean_ctor_get(v___x_299_, 1);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_299_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_err_312_);
lean_inc(v_pos_311_);
lean_dec(v___x_299_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_pos_311_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v_err_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
else
{
lean_object* v_pos_320_; lean_object* v_err_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
v_pos_320_ = lean_ctor_get(v___x_295_, 0);
v_err_321_ = lean_ctor_get(v___x_295_, 1);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_295_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_err_321_);
lean_inc(v_pos_320_);
lean_dec(v___x_295_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_pos_320_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_err_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0(lean_object* v_acc_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_pos_335_; uint32_t v_res_336_; lean_object* v_fst_339_; lean_object* v_snd_340_; lean_object* v_pos_342_; lean_object* v_snd_343_; lean_object* v_err_344_; lean_object* v___x_348_; uint8_t v_decide_349_; 
v_fst_339_ = lean_ctor_get(v_a_333_, 0);
v_snd_340_ = lean_ctor_get(v_a_333_, 1);
lean_inc(v_snd_340_);
v___x_348_ = lean_string_utf8_byte_size(v_fst_339_);
v_decide_349_ = lean_nat_dec_eq(v_snd_340_, v___x_348_);
if (v_decide_349_ == 0)
{
uint32_t v_c_350_; lean_object* v___x_351_; lean_object* v_it_x27_352_; uint32_t v___x_369_; uint8_t v___x_370_; 
v_c_350_ = lean_string_utf8_get_fast(v_fst_339_, v_snd_340_);
v___x_351_ = lean_string_utf8_next_fast(v_fst_339_, v_snd_340_);
lean_inc(v_fst_339_);
v_it_x27_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_352_, 0, v_fst_339_);
lean_ctor_set(v_it_x27_352_, 1, v___x_351_);
v___x_369_ = 65;
v___x_370_ = lean_uint32_dec_le(v___x_369_, v_c_350_);
if (v___x_370_ == 0)
{
goto v___jp_364_;
}
else
{
uint32_t v___x_371_; uint8_t v___x_372_; 
v___x_371_ = 90;
v___x_372_ = lean_uint32_dec_le(v_c_350_, v___x_371_);
if (v___x_372_ == 0)
{
goto v___jp_364_;
}
else
{
lean_dec(v_snd_340_);
lean_dec_ref(v_a_333_);
v_pos_335_ = v_it_x27_352_;
v_res_336_ = v_c_350_;
goto v___jp_334_;
}
}
v___jp_353_:
{
uint32_t v___x_354_; uint8_t v___x_355_; 
v___x_354_ = 43;
v___x_355_ = lean_uint32_dec_eq(v_c_350_, v___x_354_);
if (v___x_355_ == 0)
{
uint32_t v___x_356_; uint8_t v___x_357_; 
v___x_356_ = 45;
v___x_357_ = lean_uint32_dec_eq(v_c_350_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
lean_dec_ref_known(v_it_x27_352_, 2);
v___x_358_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1));
lean_inc(v_snd_340_);
v_pos_342_ = v_a_333_;
v_snd_343_ = v_snd_340_;
v_err_344_ = v___x_358_;
goto v___jp_341_;
}
else
{
lean_dec(v_snd_340_);
lean_dec_ref(v_a_333_);
v_pos_335_ = v_it_x27_352_;
v_res_336_ = v_c_350_;
goto v___jp_334_;
}
}
else
{
lean_dec(v_snd_340_);
lean_dec_ref(v_a_333_);
v_pos_335_ = v_it_x27_352_;
v_res_336_ = v_c_350_;
goto v___jp_334_;
}
}
v___jp_359_:
{
uint32_t v___x_360_; uint8_t v___x_361_; 
v___x_360_ = 48;
v___x_361_ = lean_uint32_dec_le(v___x_360_, v_c_350_);
if (v___x_361_ == 0)
{
goto v___jp_353_;
}
else
{
uint32_t v___x_362_; uint8_t v___x_363_; 
v___x_362_ = 57;
v___x_363_ = lean_uint32_dec_le(v_c_350_, v___x_362_);
if (v___x_363_ == 0)
{
goto v___jp_353_;
}
else
{
lean_dec(v_snd_340_);
lean_dec_ref(v_a_333_);
v_pos_335_ = v_it_x27_352_;
v_res_336_ = v_c_350_;
goto v___jp_334_;
}
}
}
v___jp_364_:
{
uint32_t v___x_365_; uint8_t v___x_366_; 
v___x_365_ = 97;
v___x_366_ = lean_uint32_dec_le(v___x_365_, v_c_350_);
if (v___x_366_ == 0)
{
goto v___jp_359_;
}
else
{
uint32_t v___x_367_; uint8_t v___x_368_; 
v___x_367_ = 122;
v___x_368_ = lean_uint32_dec_le(v_c_350_, v___x_367_);
if (v___x_368_ == 0)
{
goto v___jp_359_;
}
else
{
lean_dec(v_snd_340_);
lean_dec_ref(v_a_333_);
v_pos_335_ = v_it_x27_352_;
v_res_336_ = v_c_350_;
goto v___jp_334_;
}
}
}
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_box(0);
lean_inc(v_snd_340_);
v_pos_342_ = v_a_333_;
v_snd_343_ = v_snd_340_;
v_err_344_ = v___x_373_;
goto v___jp_341_;
}
v___jp_334_:
{
lean_object* v___x_337_; 
v___x_337_ = lean_string_push(v_acc_332_, v_res_336_);
v_acc_332_ = v___x_337_;
v_a_333_ = v_pos_335_;
goto _start;
}
v___jp_341_:
{
uint8_t v_decide_345_; 
v_decide_345_ = lean_nat_dec_eq(v_snd_340_, v_snd_343_);
lean_dec(v_snd_343_);
lean_dec(v_snd_340_);
if (v_decide_345_ == 0)
{
lean_object* v___x_346_; 
lean_dec_ref(v_acc_332_);
lean_inc(v_err_344_);
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v_pos_342_);
lean_ctor_set(v___x_346_, 1, v_err_344_);
return v___x_346_;
}
else
{
lean_object* v___x_347_; 
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v_pos_342_);
lean_ctor_set(v___x_347_, 1, v_acc_332_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName(lean_object* v_a_375_){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0));
v___x_377_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0(v___x_376_, v_a_375_);
return v___x_377_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_378_) == 0)
{
if (lean_obj_tag(v_x_379_) == 0)
{
uint8_t v___x_380_; 
v___x_380_ = 1;
return v___x_380_;
}
else
{
uint8_t v___x_381_; 
v___x_381_ = 0;
return v___x_381_;
}
}
else
{
if (lean_obj_tag(v_x_379_) == 0)
{
uint8_t v___x_382_; 
v___x_382_ = 0;
return v___x_382_;
}
else
{
lean_object* v_val_383_; lean_object* v_val_384_; uint32_t v___x_385_; uint32_t v___x_386_; uint8_t v___x_387_; 
v_val_383_ = lean_ctor_get(v_x_378_, 0);
v_val_384_ = lean_ctor_get(v_x_379_, 0);
v___x_385_ = lean_unbox_uint32(v_val_383_);
v___x_386_ = lean_unbox_uint32(v_val_384_);
v___x_387_ = lean_uint32_dec_eq(v___x_385_, v___x_386_);
return v___x_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0___boxed(lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
uint8_t v_res_390_; lean_object* v_r_391_; 
v_res_390_ = l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(v_x_388_, v_x_389_);
lean_dec(v_x_389_);
lean_dec(v_x_388_);
v_r_391_ = lean_box(v_res_390_);
return v_r_391_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1(lean_object* v_acc_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_pos_398_; uint32_t v_res_399_; lean_object* v_fst_402_; lean_object* v_snd_403_; lean_object* v_pos_405_; lean_object* v_snd_406_; lean_object* v_err_407_; lean_object* v___x_413_; uint8_t v_decide_414_; 
v_fst_402_ = lean_ctor_get(v_a_396_, 0);
v_snd_403_ = lean_ctor_get(v_a_396_, 1);
lean_inc(v_snd_403_);
v___x_413_ = lean_string_utf8_byte_size(v_fst_402_);
v_decide_414_ = lean_nat_dec_eq(v_snd_403_, v___x_413_);
if (v_decide_414_ == 0)
{
uint32_t v_c_415_; lean_object* v___x_416_; lean_object* v_it_x27_417_; uint32_t v___x_423_; uint8_t v___x_424_; 
v_c_415_ = lean_string_utf8_get_fast(v_fst_402_, v_snd_403_);
v___x_416_ = lean_string_utf8_next_fast(v_fst_402_, v_snd_403_);
lean_inc(v_fst_402_);
v_it_x27_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_417_, 0, v_fst_402_);
lean_ctor_set(v_it_x27_417_, 1, v___x_416_);
v___x_423_ = 65;
v___x_424_ = lean_uint32_dec_le(v___x_423_, v_c_415_);
if (v___x_424_ == 0)
{
goto v___jp_418_;
}
else
{
uint32_t v___x_425_; uint8_t v___x_426_; 
v___x_425_ = 90;
v___x_426_ = lean_uint32_dec_le(v_c_415_, v___x_425_);
if (v___x_426_ == 0)
{
goto v___jp_418_;
}
else
{
lean_dec(v_snd_403_);
lean_dec_ref(v_a_396_);
v_pos_398_ = v_it_x27_417_;
v_res_399_ = v_c_415_;
goto v___jp_397_;
}
}
v___jp_418_:
{
uint32_t v___x_419_; uint8_t v___x_420_; 
v___x_419_ = 97;
v___x_420_ = lean_uint32_dec_le(v___x_419_, v_c_415_);
if (v___x_420_ == 0)
{
lean_dec_ref_known(v_it_x27_417_, 2);
goto v___jp_411_;
}
else
{
uint32_t v___x_421_; uint8_t v___x_422_; 
v___x_421_ = 122;
v___x_422_ = lean_uint32_dec_le(v_c_415_, v___x_421_);
if (v___x_422_ == 0)
{
lean_dec_ref_known(v_it_x27_417_, 2);
goto v___jp_411_;
}
else
{
lean_dec(v_snd_403_);
lean_dec_ref(v_a_396_);
v_pos_398_ = v_it_x27_417_;
v_res_399_ = v_c_415_;
goto v___jp_397_;
}
}
}
}
else
{
lean_object* v___x_427_; 
v___x_427_ = lean_box(0);
lean_inc(v_snd_403_);
v_pos_405_ = v_a_396_;
v_snd_406_ = v_snd_403_;
v_err_407_ = v___x_427_;
goto v___jp_404_;
}
v___jp_397_:
{
lean_object* v___x_400_; 
v___x_400_ = lean_string_push(v_acc_395_, v_res_399_);
v_acc_395_ = v___x_400_;
v_a_396_ = v_pos_398_;
goto _start;
}
v___jp_404_:
{
uint8_t v_decide_408_; 
v_decide_408_ = lean_nat_dec_eq(v_snd_403_, v_snd_406_);
lean_dec(v_snd_406_);
lean_dec(v_snd_403_);
if (v_decide_408_ == 0)
{
lean_object* v___x_409_; 
lean_dec_ref(v_acc_395_);
lean_inc(v_err_407_);
v___x_409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_409_, 0, v_pos_405_);
lean_ctor_set(v___x_409_, 1, v_err_407_);
return v___x_409_;
}
else
{
lean_object* v___x_410_; 
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v_pos_405_);
lean_ctor_set(v___x_410_, 1, v_acc_395_);
return v___x_410_;
}
}
v___jp_411_:
{
lean_object* v___x_412_; 
v___x_412_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1));
lean_inc(v_snd_403_);
v_pos_405_ = v_a_396_;
v_snd_406_ = v_snd_403_;
v_err_407_ = v___x_412_;
goto v___jp_404_;
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_428_; lean_object* v___x_429_; 
v___x_428_ = 60;
v___x_429_ = lean_box_uint32(v___x_428_);
return v___x_429_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1;
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(lean_object* v_a_435_){
_start:
{
lean_object* v_pos_437_; lean_object* v_res_438_; lean_object* v_fst_494_; lean_object* v_snd_495_; lean_object* v___x_496_; uint8_t v_decide_497_; 
v_fst_494_ = lean_ctor_get(v_a_435_, 0);
v_snd_495_ = lean_ctor_get(v_a_435_, 1);
v___x_496_ = lean_string_utf8_byte_size(v_fst_494_);
v_decide_497_ = lean_nat_dec_eq(v_snd_495_, v___x_496_);
if (v_decide_497_ == 0)
{
uint32_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_string_utf8_get_fast(v_fst_494_, v_snd_495_);
v___x_499_ = lean_box_uint32(v___x_498_);
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
v_pos_437_ = v_a_435_;
v_res_438_ = v___x_500_;
goto v___jp_436_;
}
else
{
lean_object* v___x_501_; 
v___x_501_ = lean_box(0);
v_pos_437_ = v_a_435_;
v_res_438_ = v___x_501_;
goto v___jp_436_;
}
v___jp_436_:
{
lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_439_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0);
v___x_440_ = l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(v_res_438_, v___x_439_);
lean_dec(v_res_438_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0));
v___x_442_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1(v___x_441_, v_pos_437_);
return v___x_442_;
}
else
{
lean_object* v_fst_443_; lean_object* v_snd_444_; lean_object* v___x_445_; uint8_t v_decide_446_; 
v_fst_443_ = lean_ctor_get(v_pos_437_, 0);
v_snd_444_ = lean_ctor_get(v_pos_437_, 1);
v___x_445_ = lean_string_utf8_byte_size(v_fst_443_);
v_decide_446_ = lean_nat_dec_eq(v_snd_444_, v___x_445_);
if (v_decide_446_ == 0)
{
lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_489_; 
lean_inc(v_snd_444_);
lean_inc(v_fst_443_);
v_isSharedCheck_489_ = !lean_is_exclusive(v_pos_437_);
if (v_isSharedCheck_489_ == 0)
{
lean_object* v_unused_490_; lean_object* v_unused_491_; 
v_unused_490_ = lean_ctor_get(v_pos_437_, 1);
lean_dec(v_unused_490_);
v_unused_491_ = lean_ctor_get(v_pos_437_, 0);
lean_dec(v_unused_491_);
v___x_448_ = v_pos_437_;
v_isShared_449_ = v_isSharedCheck_489_;
goto v_resetjp_447_;
}
else
{
lean_dec(v_pos_437_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_489_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_450_ = lean_string_utf8_next_fast(v_fst_443_, v_snd_444_);
lean_dec(v_snd_444_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v___x_450_);
v___x_452_ = v___x_448_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_fst_443_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_450_);
v___x_452_ = v_reuseFailAlloc_488_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; 
v___x_453_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName(v___x_452_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_pos_454_; lean_object* v_res_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_487_; 
v_pos_454_ = lean_ctor_get(v___x_453_, 0);
v_res_455_ = lean_ctor_get(v___x_453_, 1);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_487_ == 0)
{
v___x_457_ = v___x_453_;
v_isShared_458_ = v_isSharedCheck_487_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_res_455_);
lean_inc(v_pos_454_);
lean_dec(v___x_453_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_487_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v_fst_459_; lean_object* v_snd_460_; lean_object* v___x_461_; uint8_t v_decide_462_; 
v_fst_459_ = lean_ctor_get(v_pos_454_, 0);
v_snd_460_ = lean_ctor_get(v_pos_454_, 1);
v___x_461_ = lean_string_utf8_byte_size(v_fst_459_);
v_decide_462_ = lean_nat_dec_eq(v_snd_460_, v___x_461_);
if (v_decide_462_ == 0)
{
uint32_t v___x_463_; uint32_t v_c_464_; uint8_t v___x_465_; 
v___x_463_ = 62;
v_c_464_ = lean_string_utf8_get_fast(v_fst_459_, v_snd_460_);
v___x_465_ = lean_uint32_dec_eq(v_c_464_, v___x_463_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_468_; 
lean_dec(v_res_455_);
v___x_466_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2));
if (v_isShared_458_ == 0)
{
lean_ctor_set_tag(v___x_457_, 1);
lean_ctor_set(v___x_457_, 1, v___x_466_);
v___x_468_ = v___x_457_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_pos_454_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
else
{
lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_480_; 
lean_inc(v_snd_460_);
lean_inc(v_fst_459_);
v_isSharedCheck_480_ = !lean_is_exclusive(v_pos_454_);
if (v_isSharedCheck_480_ == 0)
{
lean_object* v_unused_481_; lean_object* v_unused_482_; 
v_unused_481_ = lean_ctor_get(v_pos_454_, 1);
lean_dec(v_unused_481_);
v_unused_482_ = lean_ctor_get(v_pos_454_, 0);
lean_dec(v_unused_482_);
v___x_471_ = v_pos_454_;
v_isShared_472_ = v_isSharedCheck_480_;
goto v_resetjp_470_;
}
else
{
lean_dec(v_pos_454_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_480_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v_it_x27_475_; 
v___x_473_ = lean_string_utf8_next_fast(v_fst_459_, v_snd_460_);
lean_dec(v_snd_460_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 1, v___x_473_);
v_it_x27_475_ = v___x_471_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_fst_459_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v___x_473_);
v_it_x27_475_ = v_reuseFailAlloc_479_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
lean_object* v___x_477_; 
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v_it_x27_475_);
v___x_477_ = v___x_457_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_it_x27_475_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_res_455_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
else
{
lean_object* v___x_483_; lean_object* v___x_485_; 
lean_dec(v_res_455_);
v___x_483_ = lean_box(0);
if (v_isShared_458_ == 0)
{
lean_ctor_set_tag(v___x_457_, 1);
lean_ctor_set(v___x_457_, 1, v___x_483_);
v___x_485_ = v___x_457_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_pos_454_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
else
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_box(0);
v___x_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_493_, 0, v_pos_437_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1(lean_object* v___x_502_, lean_object* v_x_503_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_int_dec_le(v_x_503_, v___x_502_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1___boxed(lean_object* v___x_505_, lean_object* v_x_506_){
_start:
{
uint8_t v_res_507_; lean_object* v_r_508_; 
v_res_507_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1(v___x_505_, v_x_506_);
lean_dec(v_x_506_);
lean_dec(v___x_505_);
v_r_508_ = lean_box(v_res_507_);
return v_r_508_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(12u);
v___x_513_ = lean_nat_to_int(v___x_512_);
return v___x_513_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_unsigned_to_nat(5u);
v___x_519_ = lean_nat_to_int(v___x_518_);
return v___x_519_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7(void){
_start:
{
lean_object* v___x_520_; lean_object* v___f_521_; 
v___x_520_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6);
v___f_521_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1___boxed), 2, 1);
lean_closure_set(v___f_521_, 0, v___x_520_);
return v___f_521_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(7u);
v___x_526_ = lean_nat_to_int(v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec(lean_object* v_a_527_){
_start:
{
lean_object* v_fst_528_; lean_object* v_snd_529_; lean_object* v___x_530_; uint8_t v_decide_531_; 
v_fst_528_ = lean_ctor_get(v_a_527_, 0);
v_snd_529_ = lean_ctor_get(v_a_527_, 1);
v___x_530_ = lean_string_utf8_byte_size(v_fst_528_);
v_decide_531_ = lean_nat_dec_eq(v_snd_529_, v___x_530_);
if (v_decide_531_ == 0)
{
uint32_t v___x_532_; uint32_t v_c_533_; uint8_t v___x_534_; 
v___x_532_ = 77;
v_c_533_ = lean_string_utf8_get_fast(v_fst_528_, v_snd_529_);
v___x_534_ = lean_uint32_dec_eq(v_c_533_, v___x_532_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1));
v___x_536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_536_, 0, v_a_527_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
return v___x_536_;
}
else
{
lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_691_; 
lean_inc(v_snd_529_);
lean_inc(v_fst_528_);
v_isSharedCheck_691_ = !lean_is_exclusive(v_a_527_);
if (v_isSharedCheck_691_ == 0)
{
lean_object* v_unused_692_; lean_object* v_unused_693_; 
v_unused_692_ = lean_ctor_get(v_a_527_, 1);
lean_dec(v_unused_692_);
v_unused_693_ = lean_ctor_get(v_a_527_, 0);
lean_dec(v_unused_693_);
v___x_538_ = v_a_527_;
v_isShared_539_ = v_isSharedCheck_691_;
goto v_resetjp_537_;
}
else
{
lean_dec(v_a_527_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_691_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___f_541_; lean_object* v___x_542_; lean_object* v_it_x27_544_; 
v___x_540_ = lean_box(v___x_534_);
v___f_541_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_541_, 0, v___x_540_);
v___x_542_ = lean_string_utf8_next_fast(v_fst_528_, v_snd_529_);
lean_dec(v_snd_529_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 1, v___x_542_);
v_it_x27_544_ = v___x_538_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_fst_528_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v___x_542_);
v_it_x27_544_ = v_reuseFailAlloc_690_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_545_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_546_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2);
v___x_547_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3));
v___x_548_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_545_, v___x_546_, v___x_547_, v___f_541_, v_it_x27_544_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_pos_549_; lean_object* v_res_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_680_; 
v_pos_549_ = lean_ctor_get(v___x_548_, 0);
v_res_550_ = lean_ctor_get(v___x_548_, 1);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_680_ == 0)
{
v___x_552_ = v___x_548_;
v_isShared_553_ = v_isSharedCheck_680_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_res_550_);
lean_inc(v_pos_549_);
lean_dec(v___x_548_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_680_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v_fst_554_; lean_object* v_snd_555_; lean_object* v___x_556_; uint8_t v_decide_557_; 
v_fst_554_ = lean_ctor_get(v_pos_549_, 0);
v_snd_555_ = lean_ctor_get(v_pos_549_, 1);
v___x_556_ = lean_string_utf8_byte_size(v_fst_554_);
v_decide_557_ = lean_nat_dec_eq(v_snd_555_, v___x_556_);
if (v_decide_557_ == 0)
{
uint32_t v___x_558_; uint32_t v_c_559_; uint8_t v___x_560_; 
v___x_558_ = 46;
v_c_559_ = lean_string_utf8_get_fast(v_fst_554_, v_snd_555_);
v___x_560_ = lean_uint32_dec_eq(v_c_559_, v___x_558_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; lean_object* v___x_563_; 
lean_dec(v_res_550_);
v___x_561_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5));
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 1);
lean_ctor_set(v___x_552_, 1, v___x_561_);
v___x_563_ = v___x_552_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_pos_549_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v___x_561_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
else
{
lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_673_; 
lean_inc(v_snd_555_);
lean_inc(v_fst_554_);
v_isSharedCheck_673_ = !lean_is_exclusive(v_pos_549_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; lean_object* v_unused_675_; 
v_unused_674_ = lean_ctor_get(v_pos_549_, 1);
lean_dec(v_unused_674_);
v_unused_675_ = lean_ctor_get(v_pos_549_, 0);
lean_dec(v_unused_675_);
v___x_566_ = v_pos_549_;
v_isShared_567_ = v_isSharedCheck_673_;
goto v_resetjp_565_;
}
else
{
lean_dec(v_pos_549_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_673_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; lean_object* v_it_x27_570_; 
v___x_568_ = lean_string_utf8_next_fast(v_fst_554_, v_snd_555_);
lean_dec(v_snd_555_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 1, v___x_568_);
v_it_x27_570_ = v___x_566_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_fst_554_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_568_);
v_it_x27_570_ = v_reuseFailAlloc_672_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___f_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6);
v___f_572_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7);
v___x_573_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8));
v___x_574_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_545_, v___x_571_, v___x_573_, v___f_572_, v_it_x27_570_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_pos_575_; lean_object* v_res_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_662_; 
v_pos_575_ = lean_ctor_get(v___x_574_, 0);
v_res_576_ = lean_ctor_get(v___x_574_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_662_ == 0)
{
v___x_578_ = v___x_574_;
v_isShared_579_ = v_isSharedCheck_662_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_res_576_);
lean_inc(v_pos_575_);
lean_dec(v___x_574_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_662_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___x_582_; uint8_t v_decide_583_; 
v_fst_580_ = lean_ctor_get(v_pos_575_, 0);
v_snd_581_ = lean_ctor_get(v_pos_575_, 1);
v___x_582_ = lean_string_utf8_byte_size(v_fst_580_);
v_decide_583_ = lean_nat_dec_eq(v_snd_581_, v___x_582_);
if (v_decide_583_ == 0)
{
uint32_t v_c_584_; uint8_t v___x_585_; 
v_c_584_ = lean_string_utf8_get_fast(v_fst_580_, v_snd_581_);
v___x_585_ = lean_uint32_dec_eq(v_c_584_, v___x_558_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; lean_object* v___x_588_; 
lean_dec(v_res_576_);
lean_del_object(v___x_552_);
lean_dec(v_res_550_);
v___x_586_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5));
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
lean_ctor_set(v___x_578_, 1, v___x_586_);
v___x_588_ = v___x_578_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_pos_575_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v___x_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
else
{
lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_655_; 
lean_inc(v_snd_581_);
lean_inc(v_fst_580_);
v_isSharedCheck_655_ = !lean_is_exclusive(v_pos_575_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; lean_object* v_unused_657_; 
v_unused_656_ = lean_ctor_get(v_pos_575_, 1);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v_pos_575_, 0);
lean_dec(v_unused_657_);
v___x_591_ = v_pos_575_;
v_isShared_592_ = v_isSharedCheck_655_;
goto v_resetjp_590_;
}
else
{
lean_dec(v_pos_575_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_655_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v_it_x27_595_; 
v___x_593_ = lean_string_utf8_next_fast(v_fst_580_, v_snd_581_);
lean_dec(v_snd_581_);
lean_inc(v_fst_580_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 1, v___x_593_);
v_it_x27_595_ = v___x_591_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_fst_580_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___x_593_);
v_it_x27_595_ = v_reuseFailAlloc_654_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
uint8_t v_decide_601_; 
v_decide_601_ = lean_nat_dec_eq(v___x_593_, v___x_582_);
if (v_decide_601_ == 0)
{
uint32_t v_c_602_; uint32_t v___x_603_; uint8_t v___x_604_; 
v_c_602_ = lean_string_utf8_get_fast(v_fst_580_, v___x_593_);
v___x_603_ = 48;
v___x_604_ = lean_uint32_dec_le(v___x_603_, v_c_602_);
if (v___x_604_ == 0)
{
lean_dec(v_fst_580_);
lean_dec(v_res_576_);
lean_del_object(v___x_552_);
lean_dec(v_res_550_);
goto v___jp_596_;
}
else
{
uint32_t v___x_605_; uint8_t v___x_606_; 
v___x_605_ = 57;
v___x_606_ = lean_uint32_dec_le(v_c_602_, v___x_605_);
if (v___x_606_ == 0)
{
lean_dec(v_fst_580_);
lean_dec(v_res_576_);
lean_del_object(v___x_552_);
lean_dec(v_res_550_);
goto v___jp_596_;
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v_fst_612_; lean_object* v_snd_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_649_; 
lean_dec_ref(v_it_x27_595_);
lean_del_object(v___x_578_);
v___x_607_ = lean_string_utf8_next_fast(v_fst_580_, v___x_593_);
v___x_608_ = lean_uint32_to_nat(v_c_602_);
v___x_609_ = lean_unsigned_to_nat(48u);
v___x_610_ = lean_nat_sub(v___x_608_, v___x_609_);
lean_dec(v___x_608_);
v___x_611_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(v_fst_580_, v___x_607_, v___x_610_);
v_fst_612_ = lean_ctor_get(v___x_611_, 0);
v_snd_613_ = lean_ctor_get(v___x_611_, 1);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_649_ == 0)
{
v___x_615_ = v___x_611_;
v_isShared_616_ = v_isSharedCheck_649_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snd_613_);
lean_inc(v_fst_612_);
lean_dec(v___x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_649_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v_fst_580_);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_fst_580_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_snd_613_);
v___x_618_ = v_reuseFailAlloc_648_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = lean_unsigned_to_nat(6u);
v___x_630_ = lean_nat_dec_lt(v___x_629_, v_fst_612_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v___y_633_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_631_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_nat_dec_eq(v_fst_612_, v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_inc(v_fst_612_);
v___x_640_ = lean_nat_to_int(v_fst_612_);
v___y_633_ = v___x_640_;
goto v___jp_632_;
}
else
{
v___y_633_ = v___x_631_;
goto v___jp_632_;
}
v___jp_632_:
{
uint8_t v___x_634_; 
v___x_634_ = lean_int_dec_le(v___x_545_, v___y_633_);
if (v___x_634_ == 0)
{
lean_dec(v___y_633_);
lean_dec(v_res_576_);
lean_dec(v_res_550_);
goto v___jp_619_;
}
else
{
uint8_t v___x_635_; 
v___x_635_ = lean_int_dec_le(v___y_633_, v___x_631_);
if (v___x_635_ == 0)
{
lean_dec(v___y_633_);
lean_dec(v_res_576_);
lean_dec(v_res_550_);
goto v___jp_619_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_fst_612_);
lean_del_object(v___x_552_);
v___x_636_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_636_, 0, v_res_550_);
lean_ctor_set(v___x_636_, 1, v_res_576_);
lean_ctor_set(v___x_636_, 2, v___y_633_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_618_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
return v___x_637_;
}
}
}
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec(v_res_576_);
lean_del_object(v___x_552_);
lean_dec(v_res_550_);
v___x_641_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9));
v___x_642_ = l_Nat_reprFast(v_fst_612_);
v___x_643_ = lean_string_append(v___x_641_, v___x_642_);
lean_dec_ref(v___x_642_);
v___x_644_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10));
v___x_645_ = lean_string_append(v___x_643_, v___x_644_);
v___x_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
v___x_647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_618_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
return v___x_647_;
}
v___jp_619_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_620_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9));
v___x_621_ = l_Nat_reprFast(v_fst_612_);
v___x_622_ = lean_string_append(v___x_620_, v___x_621_);
lean_dec_ref(v___x_621_);
v___x_623_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10));
v___x_624_ = lean_string_append(v___x_622_, v___x_623_);
v___x_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 1);
lean_ctor_set(v___x_552_, 1, v___x_625_);
lean_ctor_set(v___x_552_, 0, v___x_618_);
v___x_627_ = v___x_552_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v___x_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_650_; lean_object* v___x_652_; 
lean_dec(v_fst_580_);
lean_del_object(v___x_578_);
lean_dec(v_res_576_);
lean_dec(v_res_550_);
v___x_650_ = lean_box(0);
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 1);
lean_ctor_set(v___x_552_, 1, v___x_650_);
lean_ctor_set(v___x_552_, 0, v_it_x27_595_);
v___x_652_ = v___x_552_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_it_x27_595_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
v___jp_596_:
{
lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_597_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1));
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
lean_ctor_set(v___x_578_, 1, v___x_597_);
lean_ctor_set(v___x_578_, 0, v_it_x27_595_);
v___x_599_ = v___x_578_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_it_x27_595_);
lean_ctor_set(v_reuseFailAlloc_600_, 1, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
}
else
{
lean_object* v___x_658_; lean_object* v___x_660_; 
lean_dec(v_res_576_);
lean_del_object(v___x_552_);
lean_dec(v_res_550_);
v___x_658_ = lean_box(0);
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
lean_ctor_set(v___x_578_, 1, v___x_658_);
v___x_660_ = v___x_578_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_pos_575_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
else
{
lean_object* v_pos_663_; lean_object* v_err_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_del_object(v___x_552_);
lean_dec(v_res_550_);
v_pos_663_ = lean_ctor_get(v___x_574_, 0);
v_err_664_ = lean_ctor_get(v___x_574_, 1);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_574_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_err_664_);
lean_inc(v_pos_663_);
lean_dec(v___x_574_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_pos_663_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_err_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_676_; lean_object* v___x_678_; 
lean_dec(v_res_550_);
v___x_676_ = lean_box(0);
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 1);
lean_ctor_set(v___x_552_, 1, v___x_676_);
v___x_678_ = v___x_552_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_pos_549_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_object* v_pos_681_; lean_object* v_err_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
v_pos_681_ = lean_ctor_get(v___x_548_, 0);
v_err_682_ = lean_ctor_get(v___x_548_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_548_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_err_682_);
lean_inc(v_pos_681_);
lean_dec(v___x_548_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_pos_681_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_err_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_box(0);
v___x_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_695_, 0, v_a_527_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
return v___x_695_;
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_unsigned_to_nat(365u);
v___x_700_ = lean_nat_to_int(v___x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec(lean_object* v_a_702_){
_start:
{
lean_object* v_fst_703_; lean_object* v_snd_704_; lean_object* v___x_705_; uint8_t v_decide_706_; 
v_fst_703_ = lean_ctor_get(v_a_702_, 0);
v_snd_704_ = lean_ctor_get(v_a_702_, 1);
v___x_705_ = lean_string_utf8_byte_size(v_fst_703_);
v_decide_706_ = lean_nat_dec_eq(v_snd_704_, v___x_705_);
if (v_decide_706_ == 0)
{
uint32_t v___x_707_; uint32_t v_c_708_; uint8_t v___x_709_; 
v___x_707_ = 74;
v_c_708_ = lean_string_utf8_get_fast(v_fst_703_, v_snd_704_);
v___x_709_ = lean_uint32_dec_eq(v_c_708_, v___x_707_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1));
v___x_711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_711_, 0, v_a_702_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
return v___x_711_;
}
else
{
lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_744_; 
lean_inc(v_snd_704_);
lean_inc(v_fst_703_);
v_isSharedCheck_744_ = !lean_is_exclusive(v_a_702_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; lean_object* v_unused_746_; 
v_unused_745_ = lean_ctor_get(v_a_702_, 1);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v_a_702_, 0);
lean_dec(v_unused_746_);
v___x_713_ = v_a_702_;
v_isShared_714_ = v_isSharedCheck_744_;
goto v_resetjp_712_;
}
else
{
lean_dec(v_a_702_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_744_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___f_716_; lean_object* v___x_717_; lean_object* v_it_x27_719_; 
v___x_715_ = lean_box(v___x_709_);
v___f_716_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_716_, 0, v___x_715_);
v___x_717_ = lean_string_utf8_next_fast(v_fst_703_, v_snd_704_);
lean_dec(v_snd_704_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 1, v___x_717_);
v_it_x27_719_ = v___x_713_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_fst_703_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v___x_717_);
v_it_x27_719_ = v_reuseFailAlloc_743_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_720_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_721_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2);
v___x_722_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3));
v___x_723_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_720_, v___x_721_, v___x_722_, v___f_716_, v_it_x27_719_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_pos_724_; lean_object* v_res_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_733_; 
v_pos_724_ = lean_ctor_get(v___x_723_, 0);
v_res_725_ = lean_ctor_get(v___x_723_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_733_ == 0)
{
v___x_727_ = v___x_723_;
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_res_725_);
lean_inc(v_pos_724_);
lean_dec(v___x_723_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v_res_725_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v___x_729_);
v___x_731_ = v___x_727_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_pos_724_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
else
{
lean_object* v_pos_734_; lean_object* v_err_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
v_pos_734_ = lean_ctor_get(v___x_723_, 0);
v_err_735_ = lean_ctor_get(v___x_723_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_723_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_err_735_);
lean_inc(v_pos_734_);
lean_dec(v___x_723_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_pos_734_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_err_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_box(0);
v___x_748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_748_, 0, v_a_702_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
return v___x_748_;
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0(lean_object* v_x_749_){
_start:
{
uint8_t v___x_750_; 
v___x_750_ = 1;
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0___boxed(lean_object* v_x_751_){
_start:
{
uint8_t v_res_752_; lean_object* v_r_753_; 
v_res_752_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0(v_x_751_);
lean_dec(v_x_751_);
v_r_753_ = lean_box(v_res_752_);
return v_r_753_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec(lean_object* v_a_756_){
_start:
{
lean_object* v___f_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___f_757_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0));
v___x_758_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___x_759_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2);
v___x_760_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1));
v___x_761_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_758_, v___x_759_, v___x_760_, v___f_757_, v_a_756_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_pos_762_; lean_object* v_res_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_771_; 
v_pos_762_ = lean_ctor_get(v___x_761_, 0);
v_res_763_ = lean_ctor_get(v___x_761_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_771_ == 0)
{
v___x_765_ = v___x_761_;
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_res_763_);
lean_inc(v_pos_762_);
lean_dec(v___x_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_767_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_767_, 0, v_res_763_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v___x_767_);
v___x_769_ = v___x_765_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_pos_762_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v___x_767_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
else
{
lean_object* v_pos_772_; lean_object* v_err_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
v_pos_772_ = lean_ctor_get(v___x_761_, 0);
v_err_773_ = lean_ctor_get(v___x_761_, 1);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_761_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_err_773_);
lean_inc(v_pos_772_);
lean_dec(v___x_761_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_pos_772_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_err_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(lean_object* v_stdOffset_781_, lean_object* v_a_782_){
_start:
{
lean_object* v_fst_783_; lean_object* v_snd_784_; lean_object* v___x_785_; uint8_t v_decide_786_; 
v_fst_783_ = lean_ctor_get(v_a_782_, 0);
v_snd_784_ = lean_ctor_get(v_a_782_, 1);
v___x_785_ = lean_string_utf8_byte_size(v_fst_783_);
v_decide_786_ = lean_nat_dec_eq(v_snd_784_, v___x_785_);
if (v_decide_786_ == 0)
{
uint32_t v___x_787_; uint32_t v___x_798_; uint8_t v___x_799_; 
v___x_787_ = lean_string_utf8_get_fast(v_fst_783_, v_snd_784_);
v___x_798_ = 48;
v___x_799_ = lean_uint32_dec_le(v___x_798_, v___x_787_);
if (v___x_799_ == 0)
{
goto v___jp_788_;
}
else
{
uint32_t v___x_800_; uint8_t v___x_801_; 
v___x_800_ = 57;
v___x_801_ = lean_uint32_dec_le(v___x_787_, v___x_800_);
if (v___x_801_ == 0)
{
goto v___jp_788_;
}
else
{
lean_object* v___x_802_; 
v___x_802_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_a_782_);
return v___x_802_;
}
}
v___jp_788_:
{
uint32_t v___x_789_; uint8_t v___x_790_; 
v___x_789_ = 43;
v___x_790_ = lean_uint32_dec_eq(v___x_787_, v___x_789_);
if (v___x_790_ == 0)
{
uint32_t v___x_791_; uint8_t v___x_792_; 
v___x_791_ = 45;
v___x_792_ = lean_uint32_dec_eq(v___x_787_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_793_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_794_ = lean_int_add(v_stdOffset_781_, v___x_793_);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v_a_782_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
return v___x_795_;
}
else
{
lean_object* v___x_796_; 
v___x_796_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_a_782_);
return v___x_796_;
}
}
else
{
lean_object* v___x_797_; 
v___x_797_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_a_782_);
return v___x_797_;
}
}
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_804_ = lean_int_add(v_stdOffset_781_, v___x_803_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v_a_782_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset___boxed(lean_object* v_stdOffset_806_, lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(v_stdOffset_806_, v_a_807_);
lean_dec(v_stdOffset_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSpec(lean_object* v_a_809_){
_start:
{
lean_object* v___x_810_; 
lean_inc_ref(v_a_809_);
v___x_810_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec(v_a_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_dec_ref(v_a_809_);
return v___x_810_;
}
else
{
lean_object* v_err_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_822_; 
v_err_811_ = lean_ctor_get(v___x_810_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v___x_810_, 0);
lean_dec(v_unused_823_);
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_822_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_err_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_822_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_snd_815_; uint8_t v_decide_816_; 
v_snd_815_ = lean_ctor_get(v_a_809_, 1);
v_decide_816_ = lean_nat_dec_eq(v_snd_815_, v_snd_815_);
if (v_decide_816_ == 0)
{
lean_object* v___x_818_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v_a_809_);
v___x_818_ = v___x_813_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_809_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_err_811_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
else
{
lean_object* v___x_820_; 
lean_del_object(v___x_813_);
lean_dec(v_err_811_);
lean_inc_ref(v_a_809_);
v___x_820_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec(v_a_809_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_dec_ref(v_a_809_);
return v___x_820_;
}
else
{
lean_object* v___x_821_; 
lean_dec_ref_known(v___x_820_, 2);
v___x_821_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec(v_a_809_);
return v___x_821_;
}
}
}
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(2u);
v___x_825_ = lean_nat_to_int(v___x_824_);
return v___x_825_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_827_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0);
v___x_828_ = lean_int_mul(v___x_827_, v___x_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(uint8_t v_extended_832_, lean_object* v_a_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSpec(v_a_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_pos_835_; lean_object* v_res_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_878_; 
v_pos_835_ = lean_ctor_get(v___x_834_, 0);
v_res_836_ = lean_ctor_get(v___x_834_, 1);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_878_ == 0)
{
v___x_838_ = v___x_834_;
v_isShared_839_ = v_isSharedCheck_878_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_res_836_);
lean_inc(v_pos_835_);
lean_dec(v___x_834_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_878_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v_pos_841_; lean_object* v_res_842_; lean_object* v_fst_847_; lean_object* v_snd_848_; lean_object* v_pos_850_; lean_object* v_snd_851_; lean_object* v_err_852_; lean_object* v___x_856_; uint8_t v_decide_857_; 
v_fst_847_ = lean_ctor_get(v_pos_835_, 0);
v_snd_848_ = lean_ctor_get(v_pos_835_, 1);
lean_inc(v_snd_848_);
v___x_856_ = lean_string_utf8_byte_size(v_fst_847_);
v_decide_857_ = lean_nat_dec_eq(v_snd_848_, v___x_856_);
if (v_decide_857_ == 0)
{
uint32_t v___x_858_; uint32_t v_c_859_; uint8_t v___x_860_; 
v___x_858_ = 47;
v_c_859_ = lean_string_utf8_get_fast(v_fst_847_, v_snd_848_);
v___x_860_ = lean_uint32_dec_eq(v_c_859_, v___x_858_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; 
v___x_861_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3));
lean_inc(v_snd_848_);
v_pos_850_ = v_pos_835_;
v_snd_851_ = v_snd_848_;
v_err_852_ = v___x_861_;
goto v___jp_849_;
}
else
{
lean_object* v___x_862_; lean_object* v_it_x27_863_; lean_object* v___x_864_; 
v___x_862_ = lean_string_utf8_next_fast(v_fst_847_, v_snd_848_);
lean_inc(v_fst_847_);
v_it_x27_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_863_, 0, v_fst_847_);
lean_ctor_set(v_it_x27_863_, 1, v___x_862_);
v___x_864_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(v_it_x27_863_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_pos_865_; lean_object* v_res_866_; lean_object* v___y_868_; 
v_pos_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_pos_865_);
v_res_866_ = lean_ctor_get(v___x_864_, 1);
lean_inc(v_res_866_);
lean_dec_ref_known(v___x_864_, 2);
if (v_extended_832_ == 0)
{
lean_object* v___x_874_; 
v___x_874_ = lean_unsigned_to_nat(24u);
v___y_868_ = v___x_874_;
goto v___jp_867_;
}
else
{
lean_object* v___x_875_; 
v___x_875_ = lean_unsigned_to_nat(167u);
v___y_868_ = v___x_875_;
goto v___jp_867_;
}
v___jp_867_:
{
lean_object* v___x_869_; 
v___x_869_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(v___y_868_, v_pos_865_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_pos_870_; lean_object* v_res_871_; lean_object* v___x_872_; 
lean_dec(v_snd_848_);
lean_dec(v_pos_835_);
v_pos_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_pos_870_);
v_res_871_ = lean_ctor_get(v___x_869_, 1);
lean_inc(v_res_871_);
lean_dec_ref_known(v___x_869_, 2);
v___x_872_ = lean_int_mul(v_res_866_, v_res_871_);
lean_dec(v_res_871_);
lean_dec(v_res_866_);
v_pos_841_ = v_pos_870_;
v_res_842_ = v___x_872_;
goto v___jp_840_;
}
else
{
lean_object* v_err_873_; 
lean_dec(v_res_866_);
v_err_873_ = lean_ctor_get(v___x_869_, 1);
lean_inc(v_err_873_);
lean_dec_ref_known(v___x_869_, 2);
lean_inc(v_snd_848_);
v_pos_850_ = v_pos_835_;
v_snd_851_ = v_snd_848_;
v_err_852_ = v_err_873_;
goto v___jp_849_;
}
}
}
else
{
lean_object* v_err_876_; 
v_err_876_ = lean_ctor_get(v___x_864_, 1);
lean_inc(v_err_876_);
lean_dec_ref_known(v___x_864_, 2);
lean_inc(v_snd_848_);
v_pos_850_ = v_pos_835_;
v_snd_851_ = v_snd_848_;
v_err_852_ = v_err_876_;
goto v___jp_849_;
}
}
}
else
{
lean_object* v___x_877_; 
v___x_877_ = lean_box(0);
lean_inc(v_snd_848_);
v_pos_850_ = v_pos_835_;
v_snd_851_ = v_snd_848_;
v_err_852_ = v___x_877_;
goto v___jp_849_;
}
v___jp_840_:
{
lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v_res_836_);
lean_ctor_set(v___x_843_, 1, v_res_842_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 1, v___x_843_);
lean_ctor_set(v___x_838_, 0, v_pos_841_);
v___x_845_ = v___x_838_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_pos_841_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
v___jp_849_:
{
uint8_t v_decide_853_; 
v_decide_853_ = lean_nat_dec_eq(v_snd_848_, v_snd_851_);
lean_dec(v_snd_851_);
lean_dec(v_snd_848_);
if (v_decide_853_ == 0)
{
lean_object* v___x_854_; 
lean_del_object(v___x_838_);
lean_dec(v_res_836_);
v___x_854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_854_, 0, v_pos_850_);
lean_ctor_set(v___x_854_, 1, v_err_852_);
return v___x_854_;
}
else
{
lean_object* v___x_855_; 
lean_dec(v_err_852_);
v___x_855_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1);
v_pos_841_ = v_pos_850_;
v_res_842_ = v___x_855_;
goto v___jp_840_;
}
}
}
}
else
{
lean_object* v_pos_879_; lean_object* v_err_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
v_pos_879_ = lean_ctor_get(v___x_834_, 0);
v_err_880_ = lean_ctor_get(v___x_834_, 1);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_834_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_err_880_);
lean_inc(v_pos_879_);
lean_dec(v___x_834_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_pos_879_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_err_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___boxed(lean_object* v_extended_888_, lean_object* v_a_889_){
_start:
{
uint8_t v_extended_boxed_890_; lean_object* v_res_891_; 
v_extended_boxed_890_ = lean_unbox(v_extended_888_);
v_res_891_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(v_extended_boxed_890_, v_a_889_);
return v_res_891_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_892_; lean_object* v___x_893_; 
v___x_892_ = 44;
v___x_893_ = lean_box_uint32(v___x_892_);
return v___x_893_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1;
v___x_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP(uint8_t v_extended_902_, lean_object* v_a_903_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(v_a_903_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_pos_905_; lean_object* v_res_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_1077_; 
v_pos_905_ = lean_ctor_get(v___x_904_, 0);
v_res_906_ = lean_ctor_get(v___x_904_, 1);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_908_ = v___x_904_;
v_isShared_909_ = v_isSharedCheck_1077_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_res_906_);
lean_inc(v_pos_905_);
lean_dec(v___x_904_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_1077_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_910_ = lean_string_utf8_byte_size(v_res_906_);
v___x_911_ = lean_unsigned_to_nat(0u);
v___x_912_ = lean_nat_dec_eq(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_del_object(v___x_908_);
v___x_913_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_pos_905_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_pos_914_; lean_object* v_res_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_1063_; 
v_pos_914_ = lean_ctor_get(v___x_913_, 0);
v_res_915_ = lean_ctor_get(v___x_913_, 1);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_917_ = v___x_913_;
v_isShared_918_ = v_isSharedCheck_1063_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_res_915_);
lean_inc(v_pos_914_);
lean_dec(v___x_913_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_1063_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___y_920_; lean_object* v_fst_926_; lean_object* v_snd_927_; lean_object* v___x_928_; uint8_t v_decide_929_; 
v_fst_926_ = lean_ctor_get(v_pos_914_, 0);
v_snd_927_ = lean_ctor_get(v_pos_914_, 1);
v___x_928_ = lean_string_utf8_byte_size(v_fst_926_);
v_decide_929_ = lean_nat_dec_eq(v_snd_927_, v___x_928_);
if (v_decide_929_ == 0)
{
lean_object* v___x_930_; 
v___x_930_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(v_pos_914_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_pos_931_; lean_object* v_res_932_; lean_object* v___x_933_; uint8_t v___x_934_; 
v_pos_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_pos_931_);
v_res_932_ = lean_ctor_get(v___x_930_, 1);
lean_inc(v_res_932_);
lean_dec_ref_known(v___x_930_, 2);
v___x_933_ = lean_string_utf8_byte_size(v_res_932_);
v___x_934_ = lean_nat_dec_eq(v___x_933_, v___x_911_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; 
lean_del_object(v___x_917_);
v___x_935_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(v_res_915_, v_pos_931_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_pos_936_; lean_object* v_res_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_1044_; 
v_pos_936_ = lean_ctor_get(v___x_935_, 0);
v_res_937_ = lean_ctor_get(v___x_935_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_939_ = v___x_935_;
v_isShared_940_ = v_isSharedCheck_1044_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_res_937_);
lean_inc(v_pos_936_);
lean_dec(v___x_935_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_1044_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v_pos_942_; lean_object* v_res_943_; lean_object* v_fst_1036_; lean_object* v_snd_1037_; lean_object* v___x_1038_; uint8_t v_decide_1039_; 
v_fst_1036_ = lean_ctor_get(v_pos_936_, 0);
v_snd_1037_ = lean_ctor_get(v_pos_936_, 1);
v___x_1038_ = lean_string_utf8_byte_size(v_fst_1036_);
v_decide_1039_ = lean_nat_dec_eq(v_snd_1037_, v___x_1038_);
if (v_decide_1039_ == 0)
{
uint32_t v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1040_ = lean_string_utf8_get_fast(v_fst_1036_, v_snd_1037_);
v___x_1041_ = lean_box_uint32(v___x_1040_);
v___x_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
v_pos_942_ = v_pos_936_;
v_res_943_ = v___x_1042_;
goto v___jp_941_;
}
else
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_box(0);
v_pos_942_ = v_pos_936_;
v_res_943_ = v___x_1043_;
goto v___jp_941_;
}
v___jp_941_:
{
uint32_t v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_944_ = 44;
v___x_945_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0);
v___x_946_ = l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(v_res_943_, v___x_945_);
lean_dec(v_res_943_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
v___x_947_ = lean_box(0);
v___x_948_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_948_, 0, v_res_932_);
lean_ctor_set(v___x_948_, 1, v_res_937_);
lean_ctor_set(v___x_948_, 2, v___x_947_);
lean_ctor_set(v___x_948_, 3, v___x_947_);
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
v___x_950_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_950_, 0, v_res_906_);
lean_ctor_set(v___x_950_, 1, v_res_915_);
lean_ctor_set(v___x_950_, 2, v___x_949_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_950_);
lean_ctor_set(v___x_939_, 0, v_pos_942_);
v___x_952_ = v___x_939_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_pos_942_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v___x_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
else
{
lean_object* v_fst_954_; lean_object* v_snd_955_; lean_object* v___x_956_; uint8_t v_decide_957_; 
v_fst_954_ = lean_ctor_get(v_pos_942_, 0);
v_snd_955_ = lean_ctor_get(v_pos_942_, 1);
v___x_956_ = lean_string_utf8_byte_size(v_fst_954_);
v_decide_957_ = lean_nat_dec_eq(v_snd_955_, v___x_956_);
if (v_decide_957_ == 0)
{
lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_1029_; 
lean_inc(v_snd_955_);
lean_inc(v_fst_954_);
lean_del_object(v___x_939_);
v_isSharedCheck_1029_ = !lean_is_exclusive(v_pos_942_);
if (v_isSharedCheck_1029_ == 0)
{
lean_object* v_unused_1030_; lean_object* v_unused_1031_; 
v_unused_1030_ = lean_ctor_get(v_pos_942_, 1);
lean_dec(v_unused_1030_);
v_unused_1031_ = lean_ctor_get(v_pos_942_, 0);
lean_dec(v_unused_1031_);
v___x_959_ = v_pos_942_;
v_isShared_960_ = v_isSharedCheck_1029_;
goto v_resetjp_958_;
}
else
{
lean_dec(v_pos_942_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_1029_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_961_ = lean_string_utf8_next_fast(v_fst_954_, v_snd_955_);
lean_dec(v_snd_955_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 1, v___x_961_);
v___x_963_ = v___x_959_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_fst_954_);
lean_ctor_set(v_reuseFailAlloc_1028_, 1, v___x_961_);
v___x_963_ = v_reuseFailAlloc_1028_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; 
v___x_964_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(v_extended_902_, v___x_963_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_pos_965_; lean_object* v_res_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1018_; 
v_pos_965_ = lean_ctor_get(v___x_964_, 0);
v_res_966_ = lean_ctor_get(v___x_964_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_968_ = v___x_964_;
v_isShared_969_ = v_isSharedCheck_1018_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_res_966_);
lean_inc(v_pos_965_);
lean_dec(v___x_964_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1018_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v_fst_970_; lean_object* v_snd_971_; lean_object* v___x_972_; uint8_t v_decide_973_; 
v_fst_970_ = lean_ctor_get(v_pos_965_, 0);
v_snd_971_ = lean_ctor_get(v_pos_965_, 1);
v___x_972_ = lean_string_utf8_byte_size(v_fst_970_);
v_decide_973_ = lean_nat_dec_eq(v_snd_971_, v___x_972_);
if (v_decide_973_ == 0)
{
uint32_t v_c_974_; uint8_t v___x_975_; 
v_c_974_ = lean_string_utf8_get_fast(v_fst_970_, v_snd_971_);
v___x_975_ = lean_uint32_dec_eq(v_c_974_, v___x_944_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_978_; 
lean_dec(v_res_966_);
lean_dec(v_res_937_);
lean_dec(v_res_932_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v___x_976_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2));
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 1);
lean_ctor_set(v___x_968_, 1, v___x_976_);
v___x_978_ = v___x_968_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_pos_965_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
else
{
lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_1011_; 
lean_inc(v_snd_971_);
lean_inc(v_fst_970_);
lean_del_object(v___x_968_);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_pos_965_);
if (v_isSharedCheck_1011_ == 0)
{
lean_object* v_unused_1012_; lean_object* v_unused_1013_; 
v_unused_1012_ = lean_ctor_get(v_pos_965_, 1);
lean_dec(v_unused_1012_);
v_unused_1013_ = lean_ctor_get(v_pos_965_, 0);
lean_dec(v_unused_1013_);
v___x_981_ = v_pos_965_;
v_isShared_982_ = v_isSharedCheck_1011_;
goto v_resetjp_980_;
}
else
{
lean_dec(v_pos_965_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_1011_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v_it_x27_985_; 
v___x_983_ = lean_string_utf8_next_fast(v_fst_970_, v_snd_971_);
lean_dec(v_snd_971_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v___x_983_);
v_it_x27_985_ = v___x_981_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_fst_970_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v___x_983_);
v_it_x27_985_ = v_reuseFailAlloc_1010_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; 
v___x_986_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(v_extended_902_, v_it_x27_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_pos_987_; lean_object* v_res_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1000_; 
v_pos_987_ = lean_ctor_get(v___x_986_, 0);
v_res_988_ = lean_ctor_get(v___x_986_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_990_ = v___x_986_;
v_isShared_991_ = v_isSharedCheck_1000_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_res_988_);
lean_inc(v_pos_987_);
lean_dec(v___x_986_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1000_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_992_, 0, v_res_966_);
v___x_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_993_, 0, v_res_988_);
v___x_994_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_994_, 0, v_res_932_);
lean_ctor_set(v___x_994_, 1, v_res_937_);
lean_ctor_set(v___x_994_, 2, v___x_992_);
lean_ctor_set(v___x_994_, 3, v___x_993_);
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
v___x_996_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_996_, 0, v_res_906_);
lean_ctor_set(v___x_996_, 1, v_res_915_);
lean_ctor_set(v___x_996_, 2, v___x_995_);
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 1, v___x_996_);
v___x_998_ = v___x_990_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_pos_987_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v___x_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
else
{
lean_object* v_pos_1001_; lean_object* v_err_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v_res_966_);
lean_dec(v_res_937_);
lean_dec(v_res_932_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v_pos_1001_ = lean_ctor_get(v___x_986_, 0);
v_err_1002_ = lean_ctor_get(v___x_986_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_986_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_err_1002_);
lean_inc(v_pos_1001_);
lean_dec(v___x_986_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_pos_1001_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_err_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_dec(v_res_966_);
lean_dec(v_res_937_);
lean_dec(v_res_932_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v___x_1014_ = lean_box(0);
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 1);
lean_ctor_set(v___x_968_, 1, v___x_1014_);
v___x_1016_ = v___x_968_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_pos_965_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
lean_object* v_pos_1019_; lean_object* v_err_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec(v_res_937_);
lean_dec(v_res_932_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v_pos_1019_ = lean_ctor_get(v___x_964_, 0);
v_err_1020_ = lean_ctor_get(v___x_964_, 1);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_964_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_err_1020_);
lean_inc(v_pos_1019_);
lean_dec(v___x_964_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_pos_1019_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_err_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
}
else
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
lean_dec(v_res_937_);
lean_dec(v_res_932_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v___x_1032_ = lean_box(0);
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 1);
lean_ctor_set(v___x_939_, 1, v___x_1032_);
lean_ctor_set(v___x_939_, 0, v_pos_942_);
v___x_1034_ = v___x_939_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_pos_942_);
lean_ctor_set(v_reuseFailAlloc_1035_, 1, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1045_; lean_object* v_err_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v_res_932_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v_pos_1045_ = lean_ctor_get(v___x_935_, 0);
v_err_1046_ = lean_ctor_get(v___x_935_, 1);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_935_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_err_1046_);
lean_inc(v_pos_1045_);
lean_dec(v___x_935_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_pos_1045_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_err_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
else
{
lean_dec(v_res_932_);
v___y_920_ = v_pos_931_;
goto v___jp_919_;
}
}
else
{
lean_object* v_pos_1054_; lean_object* v_err_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_del_object(v___x_917_);
lean_dec(v_res_915_);
lean_dec(v_res_906_);
v_pos_1054_ = lean_ctor_get(v___x_930_, 0);
v_err_1055_ = lean_ctor_get(v___x_930_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_930_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_err_1055_);
lean_inc(v_pos_1054_);
lean_dec(v___x_930_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_pos_1054_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v_err_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
else
{
v___y_920_ = v_pos_914_;
goto v___jp_919_;
}
v___jp_919_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_921_ = lean_box(0);
v___x_922_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_922_, 0, v_res_906_);
lean_ctor_set(v___x_922_, 1, v_res_915_);
lean_ctor_set(v___x_922_, 2, v___x_921_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 1, v___x_922_);
lean_ctor_set(v___x_917_, 0, v___y_920_);
v___x_924_ = v___x_917_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___y_920_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
else
{
lean_object* v_pos_1064_; lean_object* v_err_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_dec(v_res_906_);
v_pos_1064_ = lean_ctor_get(v___x_913_, 0);
v_err_1065_ = lean_ctor_get(v___x_913_, 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_913_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_err_1065_);
lean_inc(v_pos_1064_);
lean_dec(v___x_913_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_pos_1064_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_err_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_dec(v_res_906_);
v___x_1073_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4));
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 1);
lean_ctor_set(v___x_908_, 1, v___x_1073_);
v___x_1075_ = v___x_908_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_pos_905_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
else
{
lean_object* v_pos_1078_; lean_object* v_err_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_pos_1078_ = lean_ctor_get(v___x_904_, 0);
v_err_1079_ = lean_ctor_get(v___x_904_, 1);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_904_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_err_1079_);
lean_inc(v_pos_1078_);
lean_dec(v___x_904_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_pos_1078_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_err_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___boxed(lean_object* v_extended_1087_, lean_object* v_a_1088_){
_start:
{
uint8_t v_extended_boxed_1089_; lean_object* v_res_1090_; 
v_extended_boxed_1089_ = lean_unbox(v_extended_1087_);
v_res_1090_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP(v_extended_boxed_1089_, v_a_1088_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz(lean_object* v_s_1091_, uint8_t v_extended_1092_){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1093_ = lean_box(v_extended_1092_);
v___x_1094_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___boxed), 2, 1);
lean_closure_set(v___x_1094_, 0, v___x_1093_);
v___x_1095_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_1094_, v_s_1091_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz___boxed(lean_object* v_s_1096_, lean_object* v_extended_1097_){
_start:
{
uint8_t v_extended_boxed_1098_; lean_object* v_res_1099_; 
v_extended_boxed_1098_ = lean_unbox(v_extended_1097_);
v_res_1099_ = l_Std_Time_TimeZone_parsePosixTz(v_s_1096_, v_extended_boxed_1098_);
return v_res_1099_;
}
}
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Zoned_Database_PosixTz(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_ZoneRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1 = _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1);
l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1 = _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Zoned_Database_PosixTz(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Zoned_Database_PosixTz(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Zoned_ZoneRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_Database_PosixTz(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Zoned_Database_PosixTz(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Zoned_Database_PosixTz(builtin);
}
#ifdef __cplusplus
}
#endif
