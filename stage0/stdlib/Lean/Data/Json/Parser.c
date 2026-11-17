// Lean compiler output
// Module: Lean.Data.Json.Parser
// Imports: public import Lean.Data.Json.Basic public import Std.Internal.Parsec
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint32_t lean_uint32_sub(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint16_t lean_uint32_to_uint16(uint32_t);
uint16_t lean_uint16_shift_left(uint16_t, uint16_t);
uint16_t lean_uint16_lor(uint16_t, uint16_t);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
uint32_t lean_uint16_to_uint32(uint16_t);
uint32_t lean_uint32_land(uint32_t, uint32_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_shiftl(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_String_pstring(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_String_Parser_run___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_Parser_hexChar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid hex character"};
static const lean_object* l_Lean_Json_Parser_hexChar___closed__0 = (const lean_object*)&l_Lean_Json_Parser_hexChar___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_hexChar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_hexChar___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_hexChar___closed__1 = (const lean_object*)&l_Lean_Json_Parser_hexChar___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_hexChar(lean_object*);
static const lean_string_object l_Lean_Json_Parser_finishSurrogatePair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Json_Parser_finishSurrogatePair___closed__0 = (const lean_object*)&l_Lean_Json_Parser_finishSurrogatePair___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_finishSurrogatePair___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_finishSurrogatePair___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_finishSurrogatePair___closed__1 = (const lean_object*)&l_Lean_Json_Parser_finishSurrogatePair___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_finishSurrogatePair(uint16_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_finishSurrogatePair___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_Parser_escapedChar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "illegal \\u escape"};
static const lean_object* l_Lean_Json_Parser_escapedChar___closed__0 = (const lean_object*)&l_Lean_Json_Parser_escapedChar___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_escapedChar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_escapedChar___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_escapedChar___closed__1 = (const lean_object*)&l_Lean_Json_Parser_escapedChar___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__2;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__3;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__4;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__5;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__6;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__7;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__8;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar___boxed__const__9;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar(lean_object*);
static const lean_string_object l_Lean_Json_Parser_strCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected character in string"};
static const lean_object* l_Lean_Json_Parser_strCore___closed__0 = (const lean_object*)&l_Lean_Json_Parser_strCore___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_strCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_strCore___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_strCore___closed__1 = (const lean_object*)&l_Lean_Json_Parser_strCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_strCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_str(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natCoreNumDigits(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_Parser_lookahead___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "expected "};
static const lean_object* l_Lean_Json_Parser_lookahead___redArg___closed__0 = (const lean_object*)&l_Lean_Json_Parser_lookahead___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_Parser_natNonZero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "expected 1-9"};
static const lean_object* l_Lean_Json_Parser_natNonZero___closed__0 = (const lean_object*)&l_Lean_Json_Parser_natNonZero___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_natNonZero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_natNonZero___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_natNonZero___closed__1 = (const lean_object*)&l_Lean_Json_Parser_natNonZero___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natNonZero(lean_object*);
static const lean_string_object l_Lean_Json_Parser_natNumDigits___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected digit"};
static const lean_object* l_Lean_Json_Parser_natNumDigits___closed__0 = (const lean_object*)&l_Lean_Json_Parser_natNumDigits___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_natNumDigits___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_natNumDigits___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_natNumDigits___closed__1 = (const lean_object*)&l_Lean_Json_Parser_natNumDigits___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natNumDigits(lean_object*);
static const lean_string_object l_Lean_Json_Parser_natMaybeZero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "expected 0-9"};
static const lean_object* l_Lean_Json_Parser_natMaybeZero___closed__0 = (const lean_object*)&l_Lean_Json_Parser_natMaybeZero___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_natMaybeZero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_natMaybeZero___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_natMaybeZero___closed__1 = (const lean_object*)&l_Lean_Json_Parser_natMaybeZero___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natMaybeZero(lean_object*);
static lean_once_cell_t l_Lean_Json_Parser_numSign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_Parser_numSign___closed__0;
static lean_once_cell_t l_Lean_Json_Parser_numSign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_Parser_numSign___closed__1;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_numSign(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_nat(lean_object*);
static lean_once_cell_t l_Lean_Json_Parser_numWithDecimals___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_Parser_numWithDecimals___closed__0;
static const lean_string_object l_Lean_Json_Parser_numWithDecimals___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "too many decimals"};
static const lean_object* l_Lean_Json_Parser_numWithDecimals___closed__1 = (const lean_object*)&l_Lean_Json_Parser_numWithDecimals___closed__1_value;
static const lean_ctor_object l_Lean_Json_Parser_numWithDecimals___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_numWithDecimals___closed__1_value)}};
static const lean_object* l_Lean_Json_Parser_numWithDecimals___closed__2 = (const lean_object*)&l_Lean_Json_Parser_numWithDecimals___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_numWithDecimals(lean_object*);
static const lean_string_object l_Lean_Json_Parser_exponent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "exponent too large"};
static const lean_object* l_Lean_Json_Parser_exponent___closed__0 = (const lean_object*)&l_Lean_Json_Parser_exponent___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_exponent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_exponent___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_exponent___closed__1 = (const lean_object*)&l_Lean_Json_Parser_exponent___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_exponent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Json_Parser_num_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_num(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_maxDepth;
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_Parser_arrayCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unexpected character in array"};
static const lean_object* l_Lean_Json_Parser_arrayCore___closed__0 = (const lean_object*)&l_Lean_Json_Parser_arrayCore___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_arrayCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_arrayCore___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_arrayCore___closed__1 = (const lean_object*)&l_Lean_Json_Parser_arrayCore___closed__1_value;
static const lean_string_object l_Lean_Json_Parser_anyCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unexpected input"};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__0 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_anyCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_anyCore___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__1 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__1_value;
static const lean_string_object l_Lean_Json_Parser_anyCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__2 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__2_value;
static const lean_string_object l_Lean_Json_Parser_anyCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__3 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__3_value;
static const lean_string_object l_Lean_Json_Parser_anyCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__4 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__4_value;
static const lean_string_object l_Lean_Json_Parser_objectCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expected \""};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__0 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_objectCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_objectCore___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__1 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__1_value;
static const lean_string_object l_Lean_Json_Parser_objectCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expected :"};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__2 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__2_value;
static const lean_ctor_object l_Lean_Json_Parser_objectCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_objectCore___closed__2_value)}};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__3 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__3_value;
static const lean_string_object l_Lean_Json_Parser_objectCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected character in object"};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__4 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__4_value;
static const lean_ctor_object l_Lean_Json_Parser_objectCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_objectCore___closed__4_value)}};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__5 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__5_value;
static const lean_string_object l_Lean_Json_Parser_objectCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "duplicate object key "};
static const lean_object* l_Lean_Json_Parser_objectCore___closed__6 = (const lean_object*)&l_Lean_Json_Parser_objectCore___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_objectCore(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Json_Parser_anyCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__5 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__5_value;
static const lean_array_object l_Lean_Json_Parser_anyCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__6 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__6_value;
static const lean_ctor_object l_Lean_Json_Parser_anyCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_anyCore___closed__6_value)}};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__7 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__7_value;
static const lean_string_object l_Lean_Json_Parser_anyCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "nesting deeper than 10000 levels"};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__8 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__8_value;
static const lean_ctor_object l_Lean_Json_Parser_anyCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_anyCore___closed__8_value)}};
static const lean_object* l_Lean_Json_Parser_anyCore___closed__9 = (const lean_object*)&l_Lean_Json_Parser_anyCore___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_anyCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_arrayCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_arrayCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_objectCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_anyCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_Parser_any___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Lean_Json_Parser_any___closed__0 = (const lean_object*)&l_Lean_Json_Parser_any___closed__0_value;
static const lean_ctor_object l_Lean_Json_Parser_any___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_Parser_any___closed__0_value)}};
static const lean_object* l_Lean_Json_Parser_any___closed__1 = (const lean_object*)&l_Lean_Json_Parser_any___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_Parser_any(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_parse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Parser_hexChar(lean_object* v_a_4_){
_start:
{
lean_object* v_fst_5_; lean_object* v_snd_6_; lean_object* v___x_7_; uint8_t v_decide_8_; 
v_fst_5_ = lean_ctor_get(v_a_4_, 0);
v_snd_6_ = lean_ctor_get(v_a_4_, 1);
v___x_7_ = lean_string_utf8_byte_size(v_fst_5_);
v_decide_8_ = lean_nat_dec_eq(v_snd_6_, v___x_7_);
if (v_decide_8_ == 0)
{
lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_50_; 
lean_inc(v_snd_6_);
lean_inc(v_fst_5_);
v_isSharedCheck_50_ = !lean_is_exclusive(v_a_4_);
if (v_isSharedCheck_50_ == 0)
{
lean_object* v_unused_51_; lean_object* v_unused_52_; 
v_unused_51_ = lean_ctor_get(v_a_4_, 1);
lean_dec(v_unused_51_);
v_unused_52_ = lean_ctor_get(v_a_4_, 0);
lean_dec(v_unused_52_);
v___x_10_ = v_a_4_;
v_isShared_11_ = v_isSharedCheck_50_;
goto v_resetjp_9_;
}
else
{
lean_dec(v_a_4_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_50_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
uint32_t v_c_12_; lean_object* v___x_13_; lean_object* v_it_x27_15_; 
v_c_12_ = lean_string_utf8_get_fast(v_fst_5_, v_snd_6_);
v___x_13_ = lean_string_utf8_next_fast(v_fst_5_, v_snd_6_);
lean_dec(v_snd_6_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 1, v___x_13_);
v_it_x27_15_ = v___x_10_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_fst_5_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_13_);
v_it_x27_15_ = v_reuseFailAlloc_49_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
uint32_t v___x_41_; uint8_t v___x_42_; 
v___x_41_ = 48;
v___x_42_ = lean_uint32_dec_le(v___x_41_, v_c_12_);
if (v___x_42_ == 0)
{
goto v___jp_30_;
}
else
{
uint32_t v___x_43_; uint8_t v___x_44_; 
v___x_43_ = 57;
v___x_44_ = lean_uint32_dec_le(v_c_12_, v___x_43_);
if (v___x_44_ == 0)
{
goto v___jp_30_;
}
else
{
uint32_t v___x_45_; uint16_t v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_uint32_sub(v_c_12_, v___x_41_);
v___x_46_ = lean_uint32_to_uint16(v___x_45_);
v___x_47_ = lean_box(v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v_it_x27_15_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
return v___x_48_;
}
}
v___jp_16_:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = ((lean_object*)(l_Lean_Json_Parser_hexChar___closed__1));
v___x_18_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_18_, 0, v_it_x27_15_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
return v___x_18_;
}
v___jp_19_:
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 65;
v___x_21_ = lean_uint32_dec_le(v___x_20_, v_c_12_);
if (v___x_21_ == 0)
{
goto v___jp_16_;
}
else
{
uint32_t v___x_22_; uint8_t v___x_23_; 
v___x_22_ = 70;
v___x_23_ = lean_uint32_dec_le(v_c_12_, v___x_22_);
if (v___x_23_ == 0)
{
goto v___jp_16_;
}
else
{
uint32_t v___x_24_; uint32_t v___x_25_; uint32_t v___x_26_; uint16_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_24_ = lean_uint32_sub(v_c_12_, v___x_20_);
v___x_25_ = 10;
v___x_26_ = lean_uint32_add(v___x_24_, v___x_25_);
v___x_27_ = lean_uint32_to_uint16(v___x_26_);
v___x_28_ = lean_box(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v_it_x27_15_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
return v___x_29_;
}
}
}
v___jp_30_:
{
uint32_t v___x_31_; uint8_t v___x_32_; 
v___x_31_ = 97;
v___x_32_ = lean_uint32_dec_le(v___x_31_, v_c_12_);
if (v___x_32_ == 0)
{
goto v___jp_19_;
}
else
{
uint32_t v___x_33_; uint8_t v___x_34_; 
v___x_33_ = 102;
v___x_34_ = lean_uint32_dec_le(v_c_12_, v___x_33_);
if (v___x_34_ == 0)
{
goto v___jp_19_;
}
else
{
uint32_t v___x_35_; uint32_t v___x_36_; uint32_t v___x_37_; uint16_t v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_35_ = lean_uint32_sub(v_c_12_, v___x_31_);
v___x_36_ = 10;
v___x_37_ = lean_uint32_add(v___x_35_, v___x_36_);
v___x_38_ = lean_uint32_to_uint16(v___x_37_);
v___x_39_ = lean_box(v___x_38_);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v_it_x27_15_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
return v___x_40_;
}
}
}
}
}
}
else
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_box(0);
v___x_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_54_, 0, v_a_4_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_finishSurrogatePair(uint16_t v_low_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___y_61_; lean_object* v_fst_64_; lean_object* v_snd_65_; lean_object* v___x_66_; uint8_t v_decide_67_; 
v_fst_64_ = lean_ctor_get(v_a_59_, 0);
v_snd_65_ = lean_ctor_get(v_a_59_, 1);
v___x_66_ = lean_string_utf8_byte_size(v_fst_64_);
v_decide_67_ = lean_nat_dec_eq(v_snd_65_, v___x_66_);
if (v_decide_67_ == 0)
{
lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_183_; 
lean_inc(v_snd_65_);
lean_inc(v_fst_64_);
v_isSharedCheck_183_ = !lean_is_exclusive(v_a_59_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; lean_object* v_unused_185_; 
v_unused_184_ = lean_ctor_get(v_a_59_, 1);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_a_59_, 0);
lean_dec(v_unused_185_);
v___x_69_ = v_a_59_;
v_isShared_70_ = v_isSharedCheck_183_;
goto v_resetjp_68_;
}
else
{
lean_dec(v_a_59_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_183_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
uint32_t v_c_71_; lean_object* v___x_72_; lean_object* v_it_x27_74_; 
v_c_71_ = lean_string_utf8_get_fast(v_fst_64_, v_snd_65_);
v___x_72_ = lean_string_utf8_next_fast(v_fst_64_, v_snd_65_);
lean_dec(v_snd_65_);
lean_inc(v_fst_64_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 1, v___x_72_);
v_it_x27_74_ = v___x_69_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_fst_64_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v___x_72_);
v_it_x27_74_ = v_reuseFailAlloc_182_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
uint32_t v___x_75_; uint8_t v___x_76_; 
v___x_75_ = 92;
v___x_76_ = lean_uint32_dec_eq(v_c_71_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
lean_dec(v_fst_64_);
v___x_77_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__1));
v___x_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_78_, 0, v_it_x27_74_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
return v___x_78_;
}
else
{
uint8_t v_decide_79_; 
v_decide_79_ = lean_nat_dec_eq(v___x_72_, v___x_66_);
if (v_decide_79_ == 0)
{
uint32_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint32_t v___x_83_; uint8_t v___x_84_; 
lean_dec_ref(v_it_x27_74_);
v___x_80_ = lean_string_utf8_get_fast(v_fst_64_, v___x_72_);
v___x_81_ = lean_string_utf8_next_fast(v_fst_64_, v___x_72_);
lean_inc(v_fst_64_);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v_fst_64_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 117;
v___x_84_ = lean_uint32_dec_eq(v___x_80_, v___x_83_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec(v_fst_64_);
v___x_85_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__1));
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_82_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
return v___x_86_;
}
else
{
uint8_t v_decide_87_; 
v_decide_87_ = lean_nat_dec_eq(v___x_81_, v___x_66_);
if (v_decide_87_ == 0)
{
uint32_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint32_t v___x_172_; uint8_t v___x_173_; 
lean_dec_ref_known(v___x_82_, 2);
v___x_88_ = lean_string_utf8_get_fast(v_fst_64_, v___x_81_);
v___x_89_ = lean_string_utf8_next_fast(v_fst_64_, v___x_81_);
v___x_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_90_, 0, v_fst_64_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_172_ = 100;
v___x_173_ = lean_uint32_dec_eq(v___x_88_, v___x_172_);
if (v___x_173_ == 0)
{
uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_174_ = 68;
v___x_175_ = lean_uint32_dec_eq(v___x_88_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__1));
v___x_177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_90_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
return v___x_177_;
}
else
{
goto v___jp_91_;
}
}
else
{
goto v___jp_91_;
}
v___jp_91_:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Json_Parser_hexChar(v___x_90_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_pos_93_; lean_object* v_res_94_; lean_object* v___x_95_; 
v_pos_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_pos_93_);
v_res_94_ = lean_ctor_get(v___x_92_, 1);
lean_inc(v_res_94_);
lean_dec_ref_known(v___x_92_, 2);
v___x_95_ = l_Lean_Json_Parser_hexChar(v_pos_93_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_pos_96_; lean_object* v_res_97_; lean_object* v___x_98_; 
v_pos_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc(v_pos_96_);
v_res_97_ = lean_ctor_get(v___x_95_, 1);
lean_inc(v_res_97_);
lean_dec_ref_known(v___x_95_, 2);
v___x_98_ = l_Lean_Json_Parser_hexChar(v_pos_96_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_pos_99_; lean_object* v_res_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_144_; 
v_pos_99_ = lean_ctor_get(v___x_98_, 0);
v_res_100_ = lean_ctor_get(v___x_98_, 1);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_144_ == 0)
{
v___x_102_ = v___x_98_;
v_isShared_103_ = v_isSharedCheck_144_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_res_100_);
lean_inc(v_pos_99_);
lean_dec(v___x_98_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_144_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
uint16_t v___x_104_; uint16_t v___x_105_; uint16_t v___x_106_; uint16_t v___x_107_; uint16_t v___x_108_; uint16_t v___x_109_; uint16_t v___x_110_; uint16_t v___x_111_; uint16_t v___x_112_; uint16_t v___x_113_; uint8_t v___x_114_; 
v___x_104_ = 8;
v___x_105_ = lean_unbox(v_res_94_);
lean_dec(v_res_94_);
v___x_106_ = lean_uint16_shift_left(v___x_105_, v___x_104_);
v___x_107_ = 4;
v___x_108_ = lean_unbox(v_res_97_);
lean_dec(v_res_97_);
v___x_109_ = lean_uint16_shift_left(v___x_108_, v___x_107_);
v___x_110_ = lean_uint16_lor(v___x_106_, v___x_109_);
v___x_111_ = lean_unbox(v_res_100_);
lean_dec(v_res_100_);
v___x_112_ = lean_uint16_lor(v___x_110_, v___x_111_);
v___x_113_ = 3072;
v___x_114_ = lean_uint16_dec_lt(v___x_112_, v___x_113_);
if (v___x_114_ == 0)
{
uint32_t v___x_115_; uint32_t v___x_116_; uint32_t v___x_117_; uint32_t v___x_118_; uint32_t v___x_119_; uint32_t v___x_120_; uint32_t v___x_121_; uint32_t v___x_122_; uint32_t v___x_123_; uint32_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_115_ = lean_uint16_to_uint32(v_low_58_);
v___x_116_ = 1023;
v___x_117_ = lean_uint32_land(v___x_115_, v___x_116_);
v___x_118_ = 10;
v___x_119_ = lean_uint32_shift_left(v___x_117_, v___x_118_);
v___x_120_ = lean_uint16_to_uint32(v___x_112_);
v___x_121_ = lean_uint32_land(v___x_120_, v___x_116_);
v___x_122_ = lean_uint32_lor(v___x_119_, v___x_121_);
v___x_123_ = 65536;
v___x_124_ = lean_uint32_add(v___x_122_, v___x_123_);
v___x_125_ = lean_uint32_to_nat(v___x_124_);
v___x_126_ = lean_unsigned_to_nat(55296u);
v___x_127_ = lean_nat_dec_lt(v___x_125_, v___x_126_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(57343u);
v___x_129_ = lean_nat_dec_lt(v___x_128_, v___x_125_);
if (v___x_129_ == 0)
{
lean_dec(v___x_125_);
lean_del_object(v___x_102_);
v___y_61_ = v_pos_99_;
goto v___jp_60_;
}
else
{
lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(1114112u);
v___x_131_ = lean_nat_dec_lt(v___x_125_, v___x_130_);
lean_dec(v___x_125_);
if (v___x_131_ == 0)
{
lean_del_object(v___x_102_);
v___y_61_ = v_pos_99_;
goto v___jp_60_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_132_ = lean_box_uint32(v___x_124_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_132_);
v___x_134_ = v___x_102_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_pos_99_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v___x_132_);
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
else
{
lean_object* v___x_136_; lean_object* v___x_138_; 
lean_dec(v___x_125_);
v___x_136_ = lean_box_uint32(v___x_124_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_136_);
v___x_138_ = v___x_102_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_pos_99_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
else
{
lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_140_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__1));
if (v_isShared_103_ == 0)
{
lean_ctor_set_tag(v___x_102_, 1);
lean_ctor_set(v___x_102_, 1, v___x_140_);
v___x_142_ = v___x_102_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_pos_99_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___x_140_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
else
{
lean_object* v_pos_145_; lean_object* v_err_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
lean_dec(v_res_97_);
lean_dec(v_res_94_);
v_pos_145_ = lean_ctor_get(v___x_98_, 0);
v_err_146_ = lean_ctor_get(v___x_98_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v___x_98_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_err_146_);
lean_inc(v_pos_145_);
lean_dec(v___x_98_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_pos_145_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_err_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
else
{
lean_object* v_pos_154_; lean_object* v_err_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
lean_dec(v_res_94_);
v_pos_154_ = lean_ctor_get(v___x_95_, 0);
v_err_155_ = lean_ctor_get(v___x_95_, 1);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_162_ == 0)
{
v___x_157_ = v___x_95_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_err_155_);
lean_inc(v_pos_154_);
lean_dec(v___x_95_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_pos_154_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_err_155_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
else
{
lean_object* v_pos_163_; lean_object* v_err_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
v_pos_163_ = lean_ctor_get(v___x_92_, 0);
v_err_164_ = lean_ctor_get(v___x_92_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_92_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_err_164_);
lean_inc(v_pos_163_);
lean_dec(v___x_92_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_pos_163_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_err_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
else
{
lean_object* v___x_178_; lean_object* v___x_179_; 
lean_dec(v_fst_64_);
v___x_178_ = lean_box(0);
v___x_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_82_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
return v___x_179_;
}
}
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_fst_64_);
v___x_180_ = lean_box(0);
v___x_181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_181_, 0, v_it_x27_74_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
return v___x_181_;
}
}
}
}
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_187_, 0, v_a_59_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
return v___x_187_;
}
v___jp_60_:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__1));
v___x_63_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_63_, 0, v___y_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_finishSurrogatePair___boxed(lean_object* v_low_188_, lean_object* v_a_189_){
_start:
{
uint16_t v_low_boxed_190_; lean_object* v_res_191_; 
v_low_boxed_190_ = lean_unbox(v_low_188_);
v_res_191_ = l_Lean_Json_Parser_finishSurrogatePair(v_low_boxed_190_, v_a_189_);
return v_res_191_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_195_; lean_object* v___x_196_; 
v___x_195_ = 65533;
v___x_196_ = lean_box_uint32(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__2(void){
_start:
{
uint32_t v___x_197_; lean_object* v___x_198_; 
v___x_197_ = 9;
v___x_198_ = lean_box_uint32(v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__3(void){
_start:
{
uint32_t v___x_199_; lean_object* v___x_200_; 
v___x_199_ = 13;
v___x_200_ = lean_box_uint32(v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__4(void){
_start:
{
uint32_t v___x_201_; lean_object* v___x_202_; 
v___x_201_ = 10;
v___x_202_ = lean_box_uint32(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__5(void){
_start:
{
uint32_t v___x_203_; lean_object* v___x_204_; 
v___x_203_ = 12;
v___x_204_ = lean_box_uint32(v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__6(void){
_start:
{
uint32_t v___x_205_; lean_object* v___x_206_; 
v___x_205_ = 8;
v___x_206_ = lean_box_uint32(v___x_205_);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__7(void){
_start:
{
uint32_t v___x_207_; lean_object* v___x_208_; 
v___x_207_ = 47;
v___x_208_ = lean_box_uint32(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__8(void){
_start:
{
uint32_t v___x_209_; lean_object* v___x_210_; 
v___x_209_ = 34;
v___x_210_ = lean_box_uint32(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Json_Parser_escapedChar___boxed__const__9(void){
_start:
{
uint32_t v___x_211_; lean_object* v___x_212_; 
v___x_211_ = 92;
v___x_212_ = lean_box_uint32(v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_escapedChar(lean_object* v_a_213_){
_start:
{
lean_object* v_fst_214_; lean_object* v_snd_215_; lean_object* v___x_216_; uint8_t v_decide_217_; 
v_fst_214_ = lean_ctor_get(v_a_213_, 0);
v_snd_215_ = lean_ctor_get(v_a_213_, 1);
v___x_216_ = lean_string_utf8_byte_size(v_fst_214_);
v_decide_217_ = lean_nat_dec_eq(v_snd_215_, v___x_216_);
if (v_decide_217_ == 0)
{
lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_363_; 
lean_inc(v_snd_215_);
lean_inc(v_fst_214_);
v_isSharedCheck_363_ = !lean_is_exclusive(v_a_213_);
if (v_isSharedCheck_363_ == 0)
{
lean_object* v_unused_364_; lean_object* v_unused_365_; 
v_unused_364_ = lean_ctor_get(v_a_213_, 1);
lean_dec(v_unused_364_);
v_unused_365_ = lean_ctor_get(v_a_213_, 0);
lean_dec(v_unused_365_);
v___x_219_ = v_a_213_;
v_isShared_220_ = v_isSharedCheck_363_;
goto v_resetjp_218_;
}
else
{
lean_dec(v_a_213_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_363_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
uint32_t v_c_221_; lean_object* v___x_222_; lean_object* v_it_x27_224_; 
v_c_221_ = lean_string_utf8_get_fast(v_fst_214_, v_snd_215_);
v___x_222_ = lean_string_utf8_next_fast(v_fst_214_, v_snd_215_);
lean_dec(v_snd_215_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_222_);
v_it_x27_224_ = v___x_219_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_fst_214_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v___x_222_);
v_it_x27_224_ = v_reuseFailAlloc_362_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
uint32_t v___x_225_; uint8_t v___x_226_; 
v___x_225_ = 92;
v___x_226_ = lean_uint32_dec_eq(v_c_221_, v___x_225_);
if (v___x_226_ == 0)
{
uint32_t v___x_227_; uint8_t v___x_228_; 
v___x_227_ = 34;
v___x_228_ = lean_uint32_dec_eq(v_c_221_, v___x_227_);
if (v___x_228_ == 0)
{
uint32_t v___x_229_; uint8_t v___x_230_; 
v___x_229_ = 47;
v___x_230_ = lean_uint32_dec_eq(v_c_221_, v___x_229_);
if (v___x_230_ == 0)
{
uint32_t v___x_231_; uint8_t v___x_232_; 
v___x_231_ = 98;
v___x_232_ = lean_uint32_dec_eq(v_c_221_, v___x_231_);
if (v___x_232_ == 0)
{
uint32_t v___x_233_; uint8_t v___x_234_; 
v___x_233_ = 102;
v___x_234_ = lean_uint32_dec_eq(v_c_221_, v___x_233_);
if (v___x_234_ == 0)
{
uint32_t v___x_235_; uint8_t v___x_236_; 
v___x_235_ = 110;
v___x_236_ = lean_uint32_dec_eq(v_c_221_, v___x_235_);
if (v___x_236_ == 0)
{
uint32_t v___x_237_; uint8_t v___x_238_; 
v___x_237_ = 114;
v___x_238_ = lean_uint32_dec_eq(v_c_221_, v___x_237_);
if (v___x_238_ == 0)
{
uint32_t v___x_239_; uint8_t v___x_240_; 
v___x_239_ = 116;
v___x_240_ = lean_uint32_dec_eq(v_c_221_, v___x_239_);
if (v___x_240_ == 0)
{
uint32_t v___x_241_; uint8_t v___x_242_; 
v___x_241_ = 117;
v___x_242_ = lean_uint32_dec_eq(v_c_221_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = ((lean_object*)(l_Lean_Json_Parser_escapedChar___closed__1));
v___x_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_244_, 0, v_it_x27_224_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
return v___x_244_;
}
else
{
lean_object* v___x_245_; 
v___x_245_ = l_Lean_Json_Parser_hexChar(v_it_x27_224_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_pos_246_; lean_object* v_res_247_; lean_object* v___x_248_; 
v_pos_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_pos_246_);
v_res_247_ = lean_ctor_get(v___x_245_, 1);
lean_inc(v_res_247_);
lean_dec_ref_known(v___x_245_, 2);
v___x_248_ = l_Lean_Json_Parser_hexChar(v_pos_246_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_pos_249_; lean_object* v_res_250_; lean_object* v___x_251_; 
v_pos_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_pos_249_);
v_res_250_ = lean_ctor_get(v___x_248_, 1);
lean_inc(v_res_250_);
lean_dec_ref_known(v___x_248_, 2);
v___x_251_ = l_Lean_Json_Parser_hexChar(v_pos_249_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_pos_252_; lean_object* v_res_253_; lean_object* v___x_254_; 
v_pos_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_pos_252_);
v_res_253_ = lean_ctor_get(v___x_251_, 1);
lean_inc(v_res_253_);
lean_dec_ref_known(v___x_251_, 2);
v___x_254_ = l_Lean_Json_Parser_hexChar(v_pos_252_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_pos_255_; lean_object* v_res_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_309_; 
v_pos_255_ = lean_ctor_get(v___x_254_, 0);
v_res_256_ = lean_ctor_get(v___x_254_, 1);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_309_ == 0)
{
v___x_258_ = v___x_254_;
v_isShared_259_ = v_isSharedCheck_309_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_res_256_);
lean_inc(v_pos_255_);
lean_dec(v___x_254_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_309_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
uint16_t v___x_260_; uint16_t v___x_261_; uint16_t v___x_262_; uint16_t v___x_263_; uint16_t v___x_264_; uint16_t v___x_265_; uint16_t v___x_266_; uint16_t v___x_267_; uint16_t v___x_268_; uint16_t v___x_269_; uint16_t v___x_270_; uint16_t v___x_271_; uint16_t v___x_272_; uint16_t v___x_273_; uint8_t v___x_274_; 
v___x_260_ = 12;
v___x_261_ = lean_unbox(v_res_247_);
lean_dec(v_res_247_);
v___x_262_ = lean_uint16_shift_left(v___x_261_, v___x_260_);
v___x_263_ = 8;
v___x_264_ = lean_unbox(v_res_250_);
lean_dec(v_res_250_);
v___x_265_ = lean_uint16_shift_left(v___x_264_, v___x_263_);
v___x_266_ = lean_uint16_lor(v___x_262_, v___x_265_);
v___x_267_ = 4;
v___x_268_ = lean_unbox(v_res_253_);
lean_dec(v_res_253_);
v___x_269_ = lean_uint16_shift_left(v___x_268_, v___x_267_);
v___x_270_ = lean_uint16_lor(v___x_266_, v___x_269_);
v___x_271_ = lean_unbox(v_res_256_);
lean_dec(v_res_256_);
v___x_272_ = lean_uint16_lor(v___x_270_, v___x_271_);
v___x_273_ = 55296;
v___x_274_ = lean_uint16_dec_lt(v___x_272_, v___x_273_);
if (v___x_274_ == 0)
{
uint16_t v___x_275_; uint8_t v___x_276_; 
v___x_275_ = 57344;
v___x_276_ = lean_uint16_dec_lt(v___x_272_, v___x_275_);
if (v___x_276_ == 0)
{
uint32_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_277_ = lean_uint16_to_uint32(v___x_272_);
v___x_278_ = lean_box_uint32(v___x_277_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v___x_278_);
v___x_280_ = v___x_258_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_pos_255_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
else
{
uint16_t v___x_282_; uint8_t v___x_283_; 
v___x_282_ = 56320;
v___x_283_ = lean_uint16_dec_lt(v___x_272_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = l_Lean_Json_Parser_escapedChar___boxed__const__1;
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v___x_284_);
v___x_286_ = v___x_258_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_pos_255_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
else
{
lean_object* v___x_288_; 
lean_del_object(v___x_258_);
lean_inc(v_pos_255_);
v___x_288_ = l_Lean_Json_Parser_finishSurrogatePair(v___x_272_, v_pos_255_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_dec(v_pos_255_);
return v___x_288_;
}
else
{
lean_object* v_err_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_302_; 
v_err_289_ = lean_ctor_get(v___x_288_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_302_ == 0)
{
lean_object* v_unused_303_; 
v_unused_303_ = lean_ctor_get(v___x_288_, 0);
lean_dec(v_unused_303_);
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_302_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_err_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_302_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v_snd_293_; uint8_t v_decide_294_; 
v_snd_293_ = lean_ctor_get(v_pos_255_, 1);
v_decide_294_ = lean_nat_dec_eq(v_snd_293_, v_snd_293_);
if (v_decide_294_ == 0)
{
lean_object* v___x_296_; 
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 0, v_pos_255_);
v___x_296_ = v___x_291_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_pos_255_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v_err_289_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
else
{
lean_object* v___x_298_; lean_object* v___x_300_; 
lean_dec(v_err_289_);
v___x_298_ = l_Lean_Json_Parser_escapedChar___boxed__const__1;
if (v_isShared_292_ == 0)
{
lean_ctor_set_tag(v___x_291_, 0);
lean_ctor_set(v___x_291_, 1, v___x_298_);
lean_ctor_set(v___x_291_, 0, v_pos_255_);
v___x_300_ = v___x_291_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_pos_255_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
}
}
else
{
uint32_t v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_304_ = lean_uint16_to_uint32(v___x_272_);
v___x_305_ = lean_box_uint32(v___x_304_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v___x_305_);
v___x_307_ = v___x_258_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_pos_255_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
else
{
lean_object* v_pos_310_; lean_object* v_err_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
lean_dec(v_res_253_);
lean_dec(v_res_250_);
lean_dec(v_res_247_);
v_pos_310_ = lean_ctor_get(v___x_254_, 0);
v_err_311_ = lean_ctor_get(v___x_254_, 1);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_254_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_err_311_);
lean_inc(v_pos_310_);
lean_dec(v___x_254_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_pos_310_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_err_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
else
{
lean_object* v_pos_319_; lean_object* v_err_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_res_250_);
lean_dec(v_res_247_);
v_pos_319_ = lean_ctor_get(v___x_251_, 0);
v_err_320_ = lean_ctor_get(v___x_251_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_251_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_err_320_);
lean_inc(v_pos_319_);
lean_dec(v___x_251_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_pos_319_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v_err_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_pos_328_; lean_object* v_err_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
lean_dec(v_res_247_);
v_pos_328_ = lean_ctor_get(v___x_248_, 0);
v_err_329_ = lean_ctor_get(v___x_248_, 1);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_248_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_err_329_);
lean_inc(v_pos_328_);
lean_dec(v___x_248_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_pos_328_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_err_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
else
{
lean_object* v_pos_337_; lean_object* v_err_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_pos_337_ = lean_ctor_get(v___x_245_, 0);
v_err_338_ = lean_ctor_get(v___x_245_, 1);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_245_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_err_338_);
lean_inc(v_pos_337_);
lean_dec(v___x_245_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_pos_337_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_err_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = l_Lean_Json_Parser_escapedChar___boxed__const__2;
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v_it_x27_224_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
return v___x_347_;
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = l_Lean_Json_Parser_escapedChar___boxed__const__3;
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v_it_x27_224_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = l_Lean_Json_Parser_escapedChar___boxed__const__4;
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_it_x27_224_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
return v___x_351_;
}
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = l_Lean_Json_Parser_escapedChar___boxed__const__5;
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v_it_x27_224_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
return v___x_353_;
}
}
else
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = l_Lean_Json_Parser_escapedChar___boxed__const__6;
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v_it_x27_224_);
lean_ctor_set(v___x_355_, 1, v___x_354_);
return v___x_355_;
}
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = l_Lean_Json_Parser_escapedChar___boxed__const__7;
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_it_x27_224_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
return v___x_357_;
}
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = l_Lean_Json_Parser_escapedChar___boxed__const__8;
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v_it_x27_224_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
return v___x_359_;
}
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = l_Lean_Json_Parser_escapedChar___boxed__const__9;
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_it_x27_224_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
return v___x_361_;
}
}
}
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_box(0);
v___x_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_367_, 0, v_a_213_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_strCore(lean_object* v_acc_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_fst_373_; lean_object* v_snd_374_; lean_object* v___x_375_; uint8_t v_decide_376_; 
v_fst_373_ = lean_ctor_get(v_a_372_, 0);
v_snd_374_ = lean_ctor_get(v_a_372_, 1);
v___x_375_ = lean_string_utf8_byte_size(v_fst_373_);
v_decide_376_ = lean_nat_dec_eq(v_snd_374_, v___x_375_);
if (v_decide_376_ == 0)
{
lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_418_; 
lean_inc(v_snd_374_);
lean_inc(v_fst_373_);
v_isSharedCheck_418_ = !lean_is_exclusive(v_a_372_);
if (v_isSharedCheck_418_ == 0)
{
lean_object* v_unused_419_; lean_object* v_unused_420_; 
v_unused_419_ = lean_ctor_get(v_a_372_, 1);
lean_dec(v_unused_419_);
v_unused_420_ = lean_ctor_get(v_a_372_, 0);
lean_dec(v_unused_420_);
v___x_378_ = v_a_372_;
v_isShared_379_ = v_isSharedCheck_418_;
goto v_resetjp_377_;
}
else
{
lean_dec(v_a_372_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_418_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
uint32_t v___x_380_; uint32_t v___x_381_; uint8_t v___x_382_; 
v___x_380_ = lean_string_utf8_get_fast(v_fst_373_, v_snd_374_);
v___x_381_ = 34;
v___x_382_ = lean_uint32_dec_eq(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_383_ = lean_string_utf8_next_fast(v_fst_373_, v_snd_374_);
lean_dec(v_snd_374_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v___x_383_);
v___x_385_ = v___x_378_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_fst_373_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v___x_383_);
v___x_385_ = v_reuseFailAlloc_412_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
uint32_t v___x_389_; uint8_t v___x_390_; 
v___x_389_ = 92;
v___x_390_ = lean_uint32_dec_eq(v___x_380_, v___x_389_);
if (v___x_390_ == 0)
{
uint32_t v___x_391_; uint8_t v___x_392_; 
v___x_391_ = 32;
v___x_392_ = lean_uint32_dec_le(v___x_391_, v___x_380_);
if (v___x_392_ == 0)
{
lean_dec_ref(v_acc_371_);
goto v___jp_386_;
}
else
{
uint32_t v___x_393_; uint8_t v___x_394_; 
v___x_393_ = 1114111;
v___x_394_ = lean_uint32_dec_le(v___x_380_, v___x_393_);
if (v___x_394_ == 0)
{
lean_dec_ref(v_acc_371_);
goto v___jp_386_;
}
else
{
lean_object* v___x_395_; 
v___x_395_ = lean_string_push(v_acc_371_, v___x_380_);
v_acc_371_ = v___x_395_;
v_a_372_ = v___x_385_;
goto _start;
}
}
}
else
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_Json_Parser_escapedChar(v___x_385_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_pos_398_; lean_object* v_res_399_; uint32_t v___x_400_; lean_object* v___x_401_; 
v_pos_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_pos_398_);
v_res_399_ = lean_ctor_get(v___x_397_, 1);
lean_inc(v_res_399_);
lean_dec_ref_known(v___x_397_, 2);
v___x_400_ = lean_unbox_uint32(v_res_399_);
lean_dec(v_res_399_);
v___x_401_ = lean_string_push(v_acc_371_, v___x_400_);
v_acc_371_ = v___x_401_;
v_a_372_ = v_pos_398_;
goto _start;
}
else
{
lean_object* v_pos_403_; lean_object* v_err_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
lean_dec_ref(v_acc_371_);
v_pos_403_ = lean_ctor_get(v___x_397_, 0);
v_err_404_ = lean_ctor_get(v___x_397_, 1);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_397_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_err_404_);
lean_inc(v_pos_403_);
lean_dec(v___x_397_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_pos_403_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_err_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
v___jp_386_:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(l_Lean_Json_Parser_strCore___closed__1));
v___x_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_385_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
return v___x_388_;
}
}
}
else
{
lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_413_ = lean_string_utf8_next_fast(v_fst_373_, v_snd_374_);
lean_dec(v_snd_374_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v___x_413_);
v___x_415_ = v___x_378_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_fst_373_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v___x_413_);
v___x_415_ = v_reuseFailAlloc_417_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; 
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
lean_ctor_set(v___x_416_, 1, v_acc_371_);
return v___x_416_;
}
}
}
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec_ref(v_acc_371_);
v___x_421_ = lean_box(0);
v___x_422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_422_, 0, v_a_372_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_str(lean_object* v_a_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__0));
v___x_425_ = l_Lean_Json_Parser_strCore(v___x_424_, v_a_423_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natCore(lean_object* v_acc_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_fst_428_; lean_object* v_snd_429_; lean_object* v___x_430_; uint8_t v_decide_431_; 
v_fst_428_ = lean_ctor_get(v_a_427_, 0);
v_snd_429_ = lean_ctor_get(v_a_427_, 1);
v___x_430_ = lean_string_utf8_byte_size(v_fst_428_);
v_decide_431_ = lean_nat_dec_eq(v_snd_429_, v___x_430_);
if (v_decide_431_ == 0)
{
uint32_t v___x_432_; uint32_t v___x_433_; uint8_t v___x_434_; 
v___x_432_ = lean_string_utf8_get_fast(v_fst_428_, v_snd_429_);
v___x_433_ = 48;
v___x_434_ = lean_uint32_dec_le(v___x_433_, v___x_432_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; 
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v_a_427_);
lean_ctor_set(v___x_435_, 1, v_acc_426_);
return v___x_435_;
}
else
{
uint32_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = 57;
v___x_437_ = lean_uint32_dec_le(v___x_432_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; 
v___x_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_438_, 0, v_a_427_);
lean_ctor_set(v___x_438_, 1, v_acc_426_);
return v___x_438_;
}
else
{
lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_452_; 
lean_inc(v_snd_429_);
lean_inc(v_fst_428_);
v_isSharedCheck_452_ = !lean_is_exclusive(v_a_427_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; lean_object* v_unused_454_; 
v_unused_453_ = lean_ctor_get(v_a_427_, 1);
lean_dec(v_unused_453_);
v_unused_454_ = lean_ctor_get(v_a_427_, 0);
lean_dec(v_unused_454_);
v___x_440_ = v_a_427_;
v_isShared_441_ = v_isSharedCheck_452_;
goto v_resetjp_439_;
}
else
{
lean_dec(v_a_427_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_452_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_442_ = lean_string_utf8_next_fast(v_fst_428_, v_snd_429_);
lean_dec(v_snd_429_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 1, v___x_442_);
v___x_444_ = v___x_440_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_fst_428_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___x_442_);
v___x_444_ = v_reuseFailAlloc_451_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
lean_object* v___x_445_; lean_object* v___x_446_; uint32_t v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_445_ = lean_unsigned_to_nat(10u);
v___x_446_ = lean_nat_mul(v___x_445_, v_acc_426_);
lean_dec(v_acc_426_);
v___x_447_ = lean_uint32_sub(v___x_432_, v___x_433_);
v___x_448_ = lean_uint32_to_nat(v___x_447_);
v___x_449_ = lean_nat_add(v___x_446_, v___x_448_);
lean_dec(v___x_448_);
lean_dec(v___x_446_);
v_acc_426_ = v___x_449_;
v_a_427_ = v___x_444_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_455_; 
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v_a_427_);
lean_ctor_set(v___x_455_, 1, v_acc_426_);
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natCoreNumDigits(lean_object* v_acc_456_, lean_object* v_digits_457_, lean_object* v_a_458_){
_start:
{
lean_object* v___y_460_; lean_object* v_fst_463_; lean_object* v_snd_464_; lean_object* v___x_465_; uint8_t v_decide_466_; 
v_fst_463_ = lean_ctor_get(v_a_458_, 0);
v_snd_464_ = lean_ctor_get(v_a_458_, 1);
v___x_465_ = lean_string_utf8_byte_size(v_fst_463_);
v_decide_466_ = lean_nat_dec_eq(v_snd_464_, v___x_465_);
if (v_decide_466_ == 0)
{
uint32_t v___x_467_; uint32_t v___x_468_; uint8_t v___x_469_; 
v___x_467_ = lean_string_utf8_get_fast(v_fst_463_, v_snd_464_);
v___x_468_ = 48;
v___x_469_ = lean_uint32_dec_le(v___x_468_, v___x_467_);
if (v___x_469_ == 0)
{
v___y_460_ = v_a_458_;
goto v___jp_459_;
}
else
{
uint32_t v___x_470_; uint8_t v___x_471_; 
v___x_470_ = 57;
v___x_471_ = lean_uint32_dec_le(v___x_467_, v___x_470_);
if (v___x_471_ == 0)
{
v___y_460_ = v_a_458_;
goto v___jp_459_;
}
else
{
lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_487_; 
lean_inc(v_snd_464_);
lean_inc(v_fst_463_);
v_isSharedCheck_487_ = !lean_is_exclusive(v_a_458_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; lean_object* v_unused_489_; 
v_unused_488_ = lean_ctor_get(v_a_458_, 1);
lean_dec(v_unused_488_);
v_unused_489_ = lean_ctor_get(v_a_458_, 0);
lean_dec(v_unused_489_);
v___x_473_ = v_a_458_;
v_isShared_474_ = v_isSharedCheck_487_;
goto v_resetjp_472_;
}
else
{
lean_dec(v_a_458_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_487_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_475_; lean_object* v___x_477_; 
v___x_475_ = lean_string_utf8_next_fast(v_fst_463_, v_snd_464_);
lean_dec(v_snd_464_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 1, v___x_475_);
v___x_477_ = v___x_473_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_fst_463_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_475_);
v___x_477_ = v_reuseFailAlloc_486_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_478_; lean_object* v___x_479_; uint32_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_478_ = lean_unsigned_to_nat(10u);
v___x_479_ = lean_nat_mul(v___x_478_, v_acc_456_);
lean_dec(v_acc_456_);
v___x_480_ = lean_uint32_sub(v___x_467_, v___x_468_);
v___x_481_ = lean_uint32_to_nat(v___x_480_);
v___x_482_ = lean_nat_add(v___x_479_, v___x_481_);
lean_dec(v___x_481_);
lean_dec(v___x_479_);
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = lean_nat_add(v_digits_457_, v___x_483_);
lean_dec(v_digits_457_);
v_acc_456_ = v___x_482_;
v_digits_457_ = v___x_484_;
v_a_458_ = v___x_477_;
goto _start;
}
}
}
}
}
else
{
v___y_460_ = v_a_458_;
goto v___jp_459_;
}
v___jp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v_acc_456_);
lean_ctor_set(v___x_461_, 1, v_digits_457_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___y_460_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead___redArg(lean_object* v_desc_491_, lean_object* v_inst_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_fst_494_; lean_object* v_snd_495_; lean_object* v___x_496_; uint8_t v_decide_497_; 
v_fst_494_ = lean_ctor_get(v_a_493_, 0);
v_snd_495_ = lean_ctor_get(v_a_493_, 1);
v___x_496_ = lean_string_utf8_byte_size(v_fst_494_);
v_decide_497_ = lean_nat_dec_eq(v_snd_495_, v___x_496_);
if (v_decide_497_ == 0)
{
uint32_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_498_ = lean_string_utf8_get_fast(v_fst_494_, v_snd_495_);
v___x_499_ = lean_box_uint32(v___x_498_);
v___x_500_ = lean_apply_1(v_inst_492_, v___x_499_);
v___x_501_ = lean_unbox(v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_502_ = ((lean_object*)(l_Lean_Json_Parser_lookahead___redArg___closed__0));
v___x_503_ = lean_string_append(v___x_502_, v_desc_491_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
v___x_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_505_, 0, v_a_493_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_box(0);
v___x_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_507_, 0, v_a_493_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
return v___x_507_;
}
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_dec_ref(v_inst_492_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_509_, 0, v_a_493_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
return v___x_509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead___redArg___boxed(lean_object* v_desc_510_, lean_object* v_inst_511_, lean_object* v_a_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Json_Parser_lookahead___redArg(v_desc_510_, v_inst_511_, v_a_512_);
lean_dec_ref(v_desc_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead(lean_object* v_p_514_, lean_object* v_desc_515_, lean_object* v_inst_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_fst_518_; lean_object* v_snd_519_; lean_object* v___x_520_; uint8_t v_decide_521_; 
v_fst_518_ = lean_ctor_get(v_a_517_, 0);
v_snd_519_ = lean_ctor_get(v_a_517_, 1);
v___x_520_ = lean_string_utf8_byte_size(v_fst_518_);
v_decide_521_ = lean_nat_dec_eq(v_snd_519_, v___x_520_);
if (v_decide_521_ == 0)
{
uint32_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_522_ = lean_string_utf8_get_fast(v_fst_518_, v_snd_519_);
v___x_523_ = lean_box_uint32(v___x_522_);
v___x_524_ = lean_apply_1(v_inst_516_, v___x_523_);
v___x_525_ = lean_unbox(v___x_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_526_ = ((lean_object*)(l_Lean_Json_Parser_lookahead___redArg___closed__0));
v___x_527_ = lean_string_append(v___x_526_, v_desc_515_);
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
v___x_529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_529_, 0, v_a_517_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
return v___x_529_;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_box(0);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v_a_517_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
return v___x_531_;
}
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; 
lean_dec_ref(v_inst_516_);
v___x_532_ = lean_box(0);
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v_a_517_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
return v___x_533_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_lookahead___boxed(lean_object* v_p_534_, lean_object* v_desc_535_, lean_object* v_inst_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Json_Parser_lookahead(v_p_534_, v_desc_535_, v_inst_536_, v_a_537_);
lean_dec_ref(v_desc_535_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natNonZero(lean_object* v_a_542_){
_start:
{
lean_object* v_fst_546_; lean_object* v_snd_547_; lean_object* v___x_548_; uint8_t v_decide_549_; 
v_fst_546_ = lean_ctor_get(v_a_542_, 0);
v_snd_547_ = lean_ctor_get(v_a_542_, 1);
v___x_548_ = lean_string_utf8_byte_size(v_fst_546_);
v_decide_549_ = lean_nat_dec_eq(v_snd_547_, v___x_548_);
if (v_decide_549_ == 0)
{
uint32_t v___x_550_; uint32_t v___x_551_; uint8_t v___x_552_; 
v___x_550_ = lean_string_utf8_get_fast(v_fst_546_, v_snd_547_);
v___x_551_ = 49;
v___x_552_ = lean_uint32_dec_le(v___x_551_, v___x_550_);
if (v___x_552_ == 0)
{
goto v___jp_543_;
}
else
{
uint32_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 57;
v___x_554_ = lean_uint32_dec_le(v___x_550_, v___x_553_);
if (v___x_554_ == 0)
{
goto v___jp_543_;
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(0u);
v___x_556_ = l_Lean_Json_Parser_natCore(v___x_555_, v_a_542_);
return v___x_556_;
}
}
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = lean_box(0);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v_a_542_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
return v___x_558_;
}
v___jp_543_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(l_Lean_Json_Parser_natNonZero___closed__1));
v___x_545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_545_, 0, v_a_542_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
return v___x_545_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natNumDigits(lean_object* v_a_562_){
_start:
{
lean_object* v_fst_566_; lean_object* v_snd_567_; lean_object* v___x_568_; uint8_t v_decide_569_; 
v_fst_566_ = lean_ctor_get(v_a_562_, 0);
v_snd_567_ = lean_ctor_get(v_a_562_, 1);
v___x_568_ = lean_string_utf8_byte_size(v_fst_566_);
v_decide_569_ = lean_nat_dec_eq(v_snd_567_, v___x_568_);
if (v_decide_569_ == 0)
{
uint32_t v___x_570_; uint32_t v___x_571_; uint8_t v___x_572_; 
v___x_570_ = lean_string_utf8_get_fast(v_fst_566_, v_snd_567_);
v___x_571_ = 48;
v___x_572_ = lean_uint32_dec_le(v___x_571_, v___x_570_);
if (v___x_572_ == 0)
{
goto v___jp_563_;
}
else
{
uint32_t v___x_573_; uint8_t v___x_574_; 
v___x_573_ = 57;
v___x_574_ = lean_uint32_dec_le(v___x_570_, v___x_573_);
if (v___x_574_ == 0)
{
goto v___jp_563_;
}
else
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_576_ = l_Lean_Json_Parser_natCoreNumDigits(v___x_575_, v___x_575_, v_a_562_);
return v___x_576_;
}
}
}
else
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_box(0);
v___x_578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_578_, 0, v_a_562_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
return v___x_578_;
}
v___jp_563_:
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = ((lean_object*)(l_Lean_Json_Parser_natNumDigits___closed__1));
v___x_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_565_, 0, v_a_562_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_natMaybeZero(lean_object* v_a_582_){
_start:
{
lean_object* v_fst_586_; lean_object* v_snd_587_; lean_object* v___x_588_; uint8_t v_decide_589_; 
v_fst_586_ = lean_ctor_get(v_a_582_, 0);
v_snd_587_ = lean_ctor_get(v_a_582_, 1);
v___x_588_ = lean_string_utf8_byte_size(v_fst_586_);
v_decide_589_ = lean_nat_dec_eq(v_snd_587_, v___x_588_);
if (v_decide_589_ == 0)
{
uint32_t v___x_590_; uint32_t v___x_591_; uint8_t v___x_592_; 
v___x_590_ = lean_string_utf8_get_fast(v_fst_586_, v_snd_587_);
v___x_591_ = 48;
v___x_592_ = lean_uint32_dec_le(v___x_591_, v___x_590_);
if (v___x_592_ == 0)
{
goto v___jp_583_;
}
else
{
uint32_t v___x_593_; uint8_t v___x_594_; 
v___x_593_ = 57;
v___x_594_ = lean_uint32_dec_le(v___x_590_, v___x_593_);
if (v___x_594_ == 0)
{
goto v___jp_583_;
}
else
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = l_Lean_Json_Parser_natCore(v___x_595_, v_a_582_);
return v___x_596_;
}
}
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = lean_box(0);
v___x_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_598_, 0, v_a_582_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
return v___x_598_;
}
v___jp_583_:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l_Lean_Json_Parser_natMaybeZero___closed__1));
v___x_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_585_, 0, v_a_582_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
return v___x_585_;
}
}
}
static lean_object* _init_l_Lean_Json_Parser_numSign___closed__0(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_unsigned_to_nat(1u);
v___x_600_ = lean_nat_to_int(v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_l_Lean_Json_Parser_numSign___closed__1(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__0, &l_Lean_Json_Parser_numSign___closed__0_once, _init_l_Lean_Json_Parser_numSign___closed__0);
v___x_602_ = lean_int_neg(v___x_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_numSign(lean_object* v_a_603_){
_start:
{
lean_object* v_fst_604_; lean_object* v_snd_605_; lean_object* v___x_606_; uint8_t v_decide_607_; 
v_fst_604_ = lean_ctor_get(v_a_603_, 0);
v_snd_605_ = lean_ctor_get(v_a_603_, 1);
v___x_606_ = lean_string_utf8_byte_size(v_fst_604_);
v_decide_607_ = lean_nat_dec_eq(v_snd_605_, v___x_606_);
if (v_decide_607_ == 0)
{
uint32_t v___x_608_; uint32_t v___x_609_; uint8_t v___x_610_; 
v___x_608_ = lean_string_utf8_get_fast(v_fst_604_, v_snd_605_);
v___x_609_ = 45;
v___x_610_ = lean_uint32_dec_eq(v___x_608_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__0, &l_Lean_Json_Parser_numSign___closed__0_once, _init_l_Lean_Json_Parser_numSign___closed__0);
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v_a_603_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
return v___x_612_;
}
else
{
lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_622_; 
lean_inc(v_snd_605_);
lean_inc(v_fst_604_);
v_isSharedCheck_622_ = !lean_is_exclusive(v_a_603_);
if (v_isSharedCheck_622_ == 0)
{
lean_object* v_unused_623_; lean_object* v_unused_624_; 
v_unused_623_ = lean_ctor_get(v_a_603_, 1);
lean_dec(v_unused_623_);
v_unused_624_ = lean_ctor_get(v_a_603_, 0);
lean_dec(v_unused_624_);
v___x_614_ = v_a_603_;
v_isShared_615_ = v_isSharedCheck_622_;
goto v_resetjp_613_;
}
else
{
lean_dec(v_a_603_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_622_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_618_; 
v___x_616_ = lean_string_utf8_next_fast(v_fst_604_, v_snd_605_);
lean_dec(v_snd_605_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v___x_616_);
v___x_618_ = v___x_614_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_fst_604_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v___x_616_);
v___x_618_ = v_reuseFailAlloc_621_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__1, &l_Lean_Json_Parser_numSign___closed__1_once, _init_l_Lean_Json_Parser_numSign___closed__1);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
return v___x_620_;
}
}
}
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box(0);
v___x_626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_626_, 0, v_a_603_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_nat(lean_object* v_a_627_){
_start:
{
lean_object* v_fst_631_; lean_object* v_snd_632_; lean_object* v___x_633_; uint8_t v_decide_634_; 
v_fst_631_ = lean_ctor_get(v_a_627_, 0);
v_snd_632_ = lean_ctor_get(v_a_627_, 1);
v___x_633_ = lean_string_utf8_byte_size(v_fst_631_);
v_decide_634_ = lean_nat_dec_eq(v_snd_632_, v___x_633_);
if (v_decide_634_ == 0)
{
uint32_t v___x_635_; uint32_t v___x_636_; uint8_t v___x_637_; 
v___x_635_ = lean_string_utf8_get_fast(v_fst_631_, v_snd_632_);
v___x_636_ = 48;
v___x_637_ = lean_uint32_dec_eq(v___x_635_, v___x_636_);
if (v___x_637_ == 0)
{
uint32_t v___x_638_; uint8_t v___x_639_; 
v___x_638_ = 49;
v___x_639_ = lean_uint32_dec_le(v___x_638_, v___x_635_);
if (v___x_639_ == 0)
{
goto v___jp_628_;
}
else
{
uint32_t v___x_640_; uint8_t v___x_641_; 
v___x_640_ = 57;
v___x_641_ = lean_uint32_dec_le(v___x_635_, v___x_640_);
if (v___x_641_ == 0)
{
goto v___jp_628_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = l_Lean_Json_Parser_natCore(v___x_642_, v_a_627_);
return v___x_643_;
}
}
}
else
{
lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_653_; 
lean_inc(v_snd_632_);
lean_inc(v_fst_631_);
v_isSharedCheck_653_ = !lean_is_exclusive(v_a_627_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; lean_object* v_unused_655_; 
v_unused_654_ = lean_ctor_get(v_a_627_, 1);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v_a_627_, 0);
lean_dec(v_unused_655_);
v___x_645_ = v_a_627_;
v_isShared_646_ = v_isSharedCheck_653_;
goto v_resetjp_644_;
}
else
{
lean_dec(v_a_627_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_653_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_string_utf8_next_fast(v_fst_631_, v_snd_632_);
lean_dec(v_snd_632_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v___x_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_fst_631_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v___x_647_);
v___x_649_ = v_reuseFailAlloc_652_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_unsigned_to_nat(0u);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_649_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
return v___x_651_;
}
}
}
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_box(0);
v___x_657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_657_, 0, v_a_627_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
return v___x_657_;
}
v___jp_628_:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = ((lean_object*)(l_Lean_Json_Parser_natNonZero___closed__1));
v___x_630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_630_, 0, v_a_627_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
return v___x_630_;
}
}
}
static lean_object* _init_l_Lean_Json_Parser_numWithDecimals___closed__0(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_658_ = l_System_Platform_numBits;
v___x_659_ = lean_unsigned_to_nat(2u);
v___x_660_ = lean_nat_pow(v___x_659_, v___x_658_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_numWithDecimals(lean_object* v_a_664_){
_start:
{
lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_674_; lean_object* v___y_678_; lean_object* v_pos_679_; lean_object* v_fst_680_; lean_object* v_snd_681_; lean_object* v_res_682_; lean_object* v___y_742_; lean_object* v_pos_746_; lean_object* v_fst_747_; lean_object* v_snd_748_; lean_object* v_res_749_; lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v___x_781_; uint8_t v_decide_782_; 
v_fst_779_ = lean_ctor_get(v_a_664_, 0);
v_snd_780_ = lean_ctor_get(v_a_664_, 1);
v___x_781_ = lean_string_utf8_byte_size(v_fst_779_);
v_decide_782_ = lean_nat_dec_eq(v_snd_780_, v___x_781_);
if (v_decide_782_ == 0)
{
uint32_t v___x_783_; uint32_t v___x_784_; uint8_t v___x_785_; 
lean_inc(v_snd_780_);
lean_inc(v_fst_779_);
v___x_783_ = lean_string_utf8_get_fast(v_fst_779_, v_snd_780_);
v___x_784_ = 45;
v___x_785_ = lean_uint32_dec_eq(v___x_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
v___x_786_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__0, &l_Lean_Json_Parser_numSign___closed__0_once, _init_l_Lean_Json_Parser_numSign___closed__0);
v_pos_746_ = v_a_664_;
v_fst_747_ = v_fst_779_;
v_snd_748_ = v_snd_780_;
v_res_749_ = v___x_786_;
goto v___jp_745_;
}
else
{
lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_795_; 
v_isSharedCheck_795_ = !lean_is_exclusive(v_a_664_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; lean_object* v_unused_797_; 
v_unused_796_ = lean_ctor_get(v_a_664_, 1);
lean_dec(v_unused_796_);
v_unused_797_ = lean_ctor_get(v_a_664_, 0);
lean_dec(v_unused_797_);
v___x_788_ = v_a_664_;
v_isShared_789_ = v_isSharedCheck_795_;
goto v_resetjp_787_;
}
else
{
lean_dec(v_a_664_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_795_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_790_ = lean_string_utf8_next_fast(v_fst_779_, v_snd_780_);
lean_dec(v_snd_780_);
lean_inc(v_fst_779_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 1, v___x_790_);
v___x_792_ = v___x_788_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_fst_779_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v___x_790_);
v___x_792_ = v_reuseFailAlloc_794_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_793_; 
v___x_793_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__1, &l_Lean_Json_Parser_numSign___closed__1_once, _init_l_Lean_Json_Parser_numSign___closed__1);
v_pos_746_ = v___x_792_;
v_fst_747_ = v_fst_779_;
v_snd_748_ = v___x_790_;
v_res_749_ = v___x_793_;
goto v___jp_745_;
}
}
}
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_box(0);
v___x_799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_799_, 0, v_a_664_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
return v___x_799_;
}
v___jp_665_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_669_ = lean_nat_to_int(v___y_667_);
v___x_670_ = lean_int_mul(v___y_666_, v___x_669_);
lean_dec(v___x_669_);
v___x_671_ = l_Lean_JsonNumber_fromInt(v___x_670_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v___y_668_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
return v___x_672_;
}
v___jp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = ((lean_object*)(l_Lean_Json_Parser_natNumDigits___closed__1));
v___x_676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_676_, 0, v___y_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
return v___x_676_;
}
v___jp_677_:
{
lean_object* v___x_683_; uint8_t v_decide_684_; 
v___x_683_ = lean_string_utf8_byte_size(v_fst_680_);
v_decide_684_ = lean_nat_dec_eq(v_snd_681_, v___x_683_);
if (v_decide_684_ == 0)
{
uint32_t v___x_685_; uint32_t v___x_686_; uint8_t v___x_687_; 
v___x_685_ = lean_string_utf8_get_fast(v_fst_680_, v_snd_681_);
v___x_686_ = 46;
v___x_687_ = lean_uint32_dec_eq(v___x_685_, v___x_686_);
if (v___x_687_ == 0)
{
lean_dec(v_snd_681_);
lean_dec(v_fst_680_);
v___y_666_ = v___y_678_;
v___y_667_ = v_res_682_;
v___y_668_ = v_pos_679_;
goto v___jp_665_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v_decide_690_; 
lean_dec_ref(v_pos_679_);
v___x_688_ = lean_string_utf8_next_fast(v_fst_680_, v_snd_681_);
lean_dec(v_snd_681_);
lean_inc(v_fst_680_);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v_fst_680_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v_decide_690_ = lean_nat_dec_eq(v___x_688_, v___x_683_);
if (v_decide_690_ == 0)
{
uint32_t v___x_691_; uint32_t v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_string_utf8_get_fast(v_fst_680_, v___x_688_);
lean_dec(v_fst_680_);
v___x_692_ = 48;
v___x_693_ = lean_uint32_dec_le(v___x_692_, v___x_691_);
if (v___x_693_ == 0)
{
lean_dec(v_res_682_);
v___y_674_ = v___x_689_;
goto v___jp_673_;
}
else
{
uint32_t v___x_694_; uint8_t v___x_695_; 
v___x_694_ = 57;
v___x_695_ = lean_uint32_dec_le(v___x_691_, v___x_694_);
if (v___x_695_ == 0)
{
lean_dec(v_res_682_);
v___y_674_ = v___x_689_;
goto v___jp_673_;
}
else
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = l_Lean_Json_Parser_natCoreNumDigits(v___x_696_, v___x_696_, v___x_689_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_res_698_; lean_object* v_pos_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_729_; 
v_res_698_ = lean_ctor_get(v___x_697_, 1);
v_pos_699_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_729_ == 0)
{
v___x_701_ = v___x_697_;
v_isShared_702_ = v_isSharedCheck_729_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_res_698_);
lean_inc(v_pos_699_);
lean_dec(v___x_697_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_729_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v_fst_703_; lean_object* v_snd_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_728_; 
v_fst_703_ = lean_ctor_get(v_res_698_, 0);
v_snd_704_ = lean_ctor_get(v_res_698_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_res_698_);
if (v_isSharedCheck_728_ == 0)
{
v___x_706_ = v_res_698_;
v_isShared_707_ = v_isSharedCheck_728_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_snd_704_);
lean_inc(v_fst_703_);
lean_dec(v_res_698_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_728_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = lean_obj_once(&l_Lean_Json_Parser_numWithDecimals___closed__0, &l_Lean_Json_Parser_numWithDecimals___closed__0_once, _init_l_Lean_Json_Parser_numWithDecimals___closed__0);
v___x_709_ = lean_nat_dec_lt(v___x_708_, v_snd_704_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_710_ = lean_nat_to_int(v_res_682_);
v___x_711_ = lean_unsigned_to_nat(10u);
v___x_712_ = lean_nat_pow(v___x_711_, v_snd_704_);
v___x_713_ = lean_nat_to_int(v___x_712_);
v___x_714_ = lean_int_mul(v___x_710_, v___x_713_);
lean_dec(v___x_713_);
lean_dec(v___x_710_);
v___x_715_ = lean_nat_to_int(v_fst_703_);
v___x_716_ = lean_int_add(v___x_714_, v___x_715_);
lean_dec(v___x_715_);
lean_dec(v___x_714_);
v___x_717_ = lean_int_mul(v___y_678_, v___x_716_);
lean_dec(v___x_716_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_717_);
v___x_719_ = v___x_706_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_snd_704_);
v___x_719_ = v_reuseFailAlloc_723_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_721_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v___x_719_);
v___x_721_ = v___x_701_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_pos_699_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
else
{
lean_object* v___x_724_; lean_object* v___x_726_; 
lean_del_object(v___x_706_);
lean_dec(v_snd_704_);
lean_dec(v_fst_703_);
lean_dec(v_res_682_);
v___x_724_ = ((lean_object*)(l_Lean_Json_Parser_numWithDecimals___closed__2));
if (v_isShared_702_ == 0)
{
lean_ctor_set_tag(v___x_701_, 1);
lean_ctor_set(v___x_701_, 1, v___x_724_);
v___x_726_ = v___x_701_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_pos_699_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
else
{
lean_object* v_pos_730_; lean_object* v_err_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec(v_res_682_);
v_pos_730_ = lean_ctor_get(v___x_697_, 0);
v_err_731_ = lean_ctor_get(v___x_697_, 1);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_697_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_err_731_);
lean_inc(v_pos_730_);
lean_dec(v___x_697_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_pos_730_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_err_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec(v_res_682_);
lean_dec(v_fst_680_);
v___x_739_ = lean_box(0);
v___x_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_689_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
return v___x_740_;
}
}
}
else
{
lean_dec(v_snd_681_);
lean_dec(v_fst_680_);
v___y_666_ = v___y_678_;
v___y_667_ = v_res_682_;
v___y_668_ = v_pos_679_;
goto v___jp_665_;
}
}
v___jp_741_:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = ((lean_object*)(l_Lean_Json_Parser_natNonZero___closed__1));
v___x_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_744_, 0, v___y_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
return v___x_744_;
}
v___jp_745_:
{
lean_object* v___x_750_; uint8_t v_decide_751_; 
v___x_750_ = lean_string_utf8_byte_size(v_fst_747_);
v_decide_751_ = lean_nat_dec_eq(v_snd_748_, v___x_750_);
if (v_decide_751_ == 0)
{
uint32_t v___x_752_; uint32_t v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_string_utf8_get_fast(v_fst_747_, v_snd_748_);
v___x_753_ = 48;
v___x_754_ = lean_uint32_dec_eq(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
uint32_t v___x_755_; uint8_t v___x_756_; 
lean_dec(v_snd_748_);
lean_dec(v_fst_747_);
v___x_755_ = 49;
v___x_756_ = lean_uint32_dec_le(v___x_755_, v___x_752_);
if (v___x_756_ == 0)
{
v___y_742_ = v_pos_746_;
goto v___jp_741_;
}
else
{
uint32_t v___x_757_; uint8_t v___x_758_; 
v___x_757_ = 57;
v___x_758_ = lean_uint32_dec_le(v___x_752_, v___x_757_);
if (v___x_758_ == 0)
{
v___y_742_ = v_pos_746_;
goto v___jp_741_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(0u);
v___x_760_ = l_Lean_Json_Parser_natCore(v___x_759_, v_pos_746_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_pos_761_; lean_object* v_res_762_; lean_object* v_fst_763_; lean_object* v_snd_764_; 
v_pos_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_pos_761_);
v_res_762_ = lean_ctor_get(v___x_760_, 1);
lean_inc(v_res_762_);
lean_dec_ref_known(v___x_760_, 2);
v_fst_763_ = lean_ctor_get(v_pos_761_, 0);
lean_inc(v_fst_763_);
v_snd_764_ = lean_ctor_get(v_pos_761_, 1);
lean_inc(v_snd_764_);
v___y_678_ = v_res_749_;
v_pos_679_ = v_pos_761_;
v_fst_680_ = v_fst_763_;
v_snd_681_ = v_snd_764_;
v_res_682_ = v_res_762_;
goto v___jp_677_;
}
else
{
lean_object* v_pos_765_; lean_object* v_err_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
v_pos_765_ = lean_ctor_get(v___x_760_, 0);
v_err_766_ = lean_ctor_get(v___x_760_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_760_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_err_766_);
lean_inc(v_pos_765_);
lean_dec(v___x_760_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_pos_765_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_err_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
lean_dec_ref(v_pos_746_);
v___x_774_ = lean_string_utf8_next_fast(v_fst_747_, v_snd_748_);
lean_dec(v_snd_748_);
lean_inc(v_fst_747_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v_fst_747_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___y_678_ = v_res_749_;
v_pos_679_ = v___x_775_;
v_fst_680_ = v_fst_747_;
v_snd_681_ = v___x_774_;
v_res_682_ = v___x_776_;
goto v___jp_677_;
}
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; 
lean_dec(v_snd_748_);
lean_dec(v_fst_747_);
v___x_777_ = lean_box(0);
v___x_778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_778_, 0, v_pos_746_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
return v___x_778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_exponent(lean_object* v_value_803_, lean_object* v_a_804_){
_start:
{
lean_object* v___y_806_; lean_object* v___y_810_; lean_object* v___y_814_; lean_object* v_fst_815_; lean_object* v_snd_816_; lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_911_; uint8_t v_decide_912_; 
v_fst_853_ = lean_ctor_get(v_a_804_, 0);
v_snd_854_ = lean_ctor_get(v_a_804_, 1);
v___x_911_ = lean_string_utf8_byte_size(v_fst_853_);
v_decide_912_ = lean_nat_dec_eq(v_snd_854_, v___x_911_);
if (v_decide_912_ == 0)
{
uint32_t v___x_913_; uint32_t v___x_914_; uint8_t v___x_915_; 
v___x_913_ = lean_string_utf8_get_fast(v_fst_853_, v_snd_854_);
v___x_914_ = 101;
v___x_915_ = lean_uint32_dec_eq(v___x_913_, v___x_914_);
if (v___x_915_ == 0)
{
uint32_t v___x_916_; uint8_t v___x_917_; 
v___x_916_ = 69;
v___x_917_ = lean_uint32_dec_eq(v___x_913_, v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; 
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v_a_804_);
lean_ctor_set(v___x_918_, 1, v_value_803_);
return v___x_918_;
}
else
{
goto v___jp_855_;
}
}
else
{
goto v___jp_855_;
}
}
else
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_a_804_);
lean_ctor_set(v___x_919_, 1, v_value_803_);
return v___x_919_;
}
v___jp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = ((lean_object*)(l_Lean_Json_Parser_natMaybeZero___closed__1));
v___x_808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_808_, 0, v___y_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
return v___x_808_;
}
v___jp_809_:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(l_Lean_Json_Parser_natMaybeZero___closed__1));
v___x_812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_812_, 0, v___y_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
return v___x_812_;
}
v___jp_813_:
{
lean_object* v___x_817_; uint8_t v_decide_818_; 
v___x_817_ = lean_string_utf8_byte_size(v_fst_815_);
v_decide_818_ = lean_nat_dec_eq(v_snd_816_, v___x_817_);
if (v_decide_818_ == 0)
{
uint32_t v___x_819_; uint32_t v___x_820_; uint8_t v___x_821_; 
v___x_819_ = lean_string_utf8_get_fast(v_fst_815_, v_snd_816_);
lean_dec(v_snd_816_);
lean_dec(v_fst_815_);
v___x_820_ = 48;
v___x_821_ = lean_uint32_dec_le(v___x_820_, v___x_819_);
if (v___x_821_ == 0)
{
lean_dec_ref(v_value_803_);
v___y_810_ = v___y_814_;
goto v___jp_809_;
}
else
{
uint32_t v___x_822_; uint8_t v___x_823_; 
v___x_822_ = 57;
v___x_823_ = lean_uint32_dec_le(v___x_819_, v___x_822_);
if (v___x_823_ == 0)
{
lean_dec_ref(v_value_803_);
v___y_810_ = v___y_814_;
goto v___jp_809_;
}
else
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(0u);
v___x_825_ = l_Lean_Json_Parser_natCore(v___x_824_, v___y_814_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_pos_826_; lean_object* v_res_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_841_; 
v_pos_826_ = lean_ctor_get(v___x_825_, 0);
v_res_827_ = lean_ctor_get(v___x_825_, 1);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_841_ == 0)
{
v___x_829_ = v___x_825_;
v_isShared_830_ = v_isSharedCheck_841_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_res_827_);
lean_inc(v_pos_826_);
lean_dec(v___x_825_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_841_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(100000u);
v___x_832_ = lean_nat_dec_lt(v___x_831_, v_res_827_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_833_ = l_Lean_JsonNumber_shiftl(v_value_803_, v_res_827_);
lean_dec(v_res_827_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v___x_833_);
v___x_835_ = v___x_829_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_pos_826_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___x_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
lean_object* v___x_837_; lean_object* v___x_839_; 
lean_dec(v_res_827_);
lean_dec_ref(v_value_803_);
v___x_837_ = ((lean_object*)(l_Lean_Json_Parser_exponent___closed__1));
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 1);
lean_ctor_set(v___x_829_, 1, v___x_837_);
v___x_839_ = v___x_829_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_pos_826_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_837_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
else
{
lean_object* v_pos_842_; lean_object* v_err_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
lean_dec_ref(v_value_803_);
v_pos_842_ = lean_ctor_get(v___x_825_, 0);
v_err_843_ = lean_ctor_get(v___x_825_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_825_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_err_843_);
lean_inc(v_pos_842_);
lean_dec(v___x_825_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_pos_842_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_err_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
}
}
else
{
lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec(v_snd_816_);
lean_dec(v_fst_815_);
lean_dec_ref(v_value_803_);
v___x_851_ = lean_box(0);
v___x_852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_852_, 0, v___y_814_);
lean_ctor_set(v___x_852_, 1, v___x_851_);
return v___x_852_;
}
}
v___jp_855_:
{
lean_object* v___x_856_; uint8_t v_decide_857_; 
v___x_856_ = lean_string_utf8_byte_size(v_fst_853_);
v_decide_857_ = lean_nat_dec_eq(v_snd_854_, v___x_856_);
if (v_decide_857_ == 0)
{
lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_906_; 
lean_inc(v_snd_854_);
lean_inc(v_fst_853_);
v_isSharedCheck_906_ = !lean_is_exclusive(v_a_804_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; lean_object* v_unused_908_; 
v_unused_907_ = lean_ctor_get(v_a_804_, 1);
lean_dec(v_unused_907_);
v_unused_908_ = lean_ctor_get(v_a_804_, 0);
lean_dec(v_unused_908_);
v___x_859_ = v_a_804_;
v_isShared_860_ = v_isSharedCheck_906_;
goto v_resetjp_858_;
}
else
{
lean_dec(v_a_804_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_906_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = lean_string_utf8_next_fast(v_fst_853_, v_snd_854_);
lean_dec(v_snd_854_);
lean_inc(v_fst_853_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 1, v___x_861_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_fst_853_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v___x_861_);
v___x_863_ = v_reuseFailAlloc_905_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
uint8_t v_decide_864_; 
v_decide_864_ = lean_nat_dec_eq(v___x_861_, v___x_856_);
if (v_decide_864_ == 0)
{
uint32_t v___x_865_; uint32_t v___x_866_; uint8_t v___x_867_; 
v___x_865_ = lean_string_utf8_get_fast(v_fst_853_, v___x_861_);
v___x_866_ = 45;
v___x_867_ = lean_uint32_dec_eq(v___x_865_, v___x_866_);
if (v___x_867_ == 0)
{
uint32_t v___x_868_; uint8_t v___x_869_; 
v___x_868_ = 43;
v___x_869_ = lean_uint32_dec_eq(v___x_865_, v___x_868_);
if (v___x_869_ == 0)
{
v___y_814_ = v___x_863_;
v_fst_815_ = v_fst_853_;
v_snd_816_ = v___x_861_;
goto v___jp_813_;
}
else
{
lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec_ref(v___x_863_);
v___x_870_ = lean_string_utf8_next_fast(v_fst_853_, v___x_861_);
lean_inc(v_fst_853_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v_fst_853_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___y_814_ = v___x_871_;
v_fst_815_ = v_fst_853_;
v_snd_816_ = v___x_870_;
goto v___jp_813_;
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v_decide_874_; 
lean_dec_ref(v___x_863_);
v___x_872_ = lean_string_utf8_next_fast(v_fst_853_, v___x_861_);
lean_inc(v_fst_853_);
v___x_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_873_, 0, v_fst_853_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v_decide_874_ = lean_nat_dec_eq(v___x_872_, v___x_856_);
if (v_decide_874_ == 0)
{
uint32_t v___x_875_; uint32_t v___x_876_; uint8_t v___x_877_; 
v___x_875_ = lean_string_utf8_get_fast(v_fst_853_, v___x_872_);
lean_dec(v_fst_853_);
v___x_876_ = 48;
v___x_877_ = lean_uint32_dec_le(v___x_876_, v___x_875_);
if (v___x_877_ == 0)
{
lean_dec_ref(v_value_803_);
v___y_806_ = v___x_873_;
goto v___jp_805_;
}
else
{
uint32_t v___x_878_; uint8_t v___x_879_; 
v___x_878_ = 57;
v___x_879_ = lean_uint32_dec_le(v___x_875_, v___x_878_);
if (v___x_879_ == 0)
{
lean_dec_ref(v_value_803_);
v___y_806_ = v___x_873_;
goto v___jp_805_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = lean_unsigned_to_nat(0u);
v___x_881_ = l_Lean_Json_Parser_natCore(v___x_880_, v___x_873_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_pos_882_; lean_object* v_res_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_891_; 
v_pos_882_ = lean_ctor_get(v___x_881_, 0);
v_res_883_ = lean_ctor_get(v___x_881_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_891_ == 0)
{
v___x_885_ = v___x_881_;
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_res_883_);
lean_inc(v_pos_882_);
lean_dec(v___x_881_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_887_ = l_Lean_JsonNumber_shiftr(v_value_803_, v_res_883_);
lean_dec(v_res_883_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v___x_887_);
v___x_889_ = v___x_885_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_pos_882_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
else
{
lean_object* v_pos_892_; lean_object* v_err_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
lean_dec_ref(v_value_803_);
v_pos_892_ = lean_ctor_get(v___x_881_, 0);
v_err_893_ = lean_ctor_get(v___x_881_, 1);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_900_ == 0)
{
v___x_895_ = v___x_881_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_err_893_);
lean_inc(v_pos_892_);
lean_dec(v___x_881_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_pos_892_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_err_893_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
}
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; 
lean_dec(v_fst_853_);
lean_dec_ref(v_value_803_);
v___x_901_ = lean_box(0);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_873_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
return v___x_902_;
}
}
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; 
lean_dec(v_fst_853_);
lean_dec_ref(v_value_803_);
v___x_903_ = lean_box(0);
v___x_904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_863_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
return v___x_904_;
}
}
}
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; 
lean_dec_ref(v_value_803_);
v___x_909_ = lean_box(0);
v___x_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_910_, 0, v_a_804_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
return v___x_910_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Json_Parser_num_spec__0(lean_object* v_a_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lean_nat_to_int(v_a_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_num(lean_object* v_a_922_){
_start:
{
lean_object* v___y_924_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v_fst_930_; lean_object* v_snd_931_; lean_object* v___y_969_; lean_object* v___y_973_; lean_object* v_fst_974_; lean_object* v_snd_975_; lean_object* v___y_976_; lean_object* v___y_1025_; lean_object* v_pos_1026_; lean_object* v_res_1027_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1046_; lean_object* v___y_1050_; lean_object* v_pos_1051_; lean_object* v_fst_1052_; lean_object* v_snd_1053_; lean_object* v_res_1054_; lean_object* v___y_1114_; lean_object* v_pos_1118_; lean_object* v_fst_1119_; lean_object* v_snd_1120_; lean_object* v_res_1121_; lean_object* v_fst_1151_; lean_object* v_snd_1152_; lean_object* v___x_1153_; uint8_t v_decide_1154_; 
v_fst_1151_ = lean_ctor_get(v_a_922_, 0);
v_snd_1152_ = lean_ctor_get(v_a_922_, 1);
v___x_1153_ = lean_string_utf8_byte_size(v_fst_1151_);
v_decide_1154_ = lean_nat_dec_eq(v_snd_1152_, v___x_1153_);
if (v_decide_1154_ == 0)
{
uint32_t v___x_1155_; uint32_t v___x_1156_; uint8_t v___x_1157_; 
lean_inc(v_snd_1152_);
lean_inc(v_fst_1151_);
v___x_1155_ = lean_string_utf8_get_fast(v_fst_1151_, v_snd_1152_);
v___x_1156_ = 45;
v___x_1157_ = lean_uint32_dec_eq(v___x_1155_, v___x_1156_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__0, &l_Lean_Json_Parser_numSign___closed__0_once, _init_l_Lean_Json_Parser_numSign___closed__0);
v_pos_1118_ = v_a_922_;
v_fst_1119_ = v_fst_1151_;
v_snd_1120_ = v_snd_1152_;
v_res_1121_ = v___x_1158_;
goto v___jp_1117_;
}
else
{
lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1167_; 
v_isSharedCheck_1167_ = !lean_is_exclusive(v_a_922_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; lean_object* v_unused_1169_; 
v_unused_1168_ = lean_ctor_get(v_a_922_, 1);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v_a_922_, 0);
lean_dec(v_unused_1169_);
v___x_1160_ = v_a_922_;
v_isShared_1161_ = v_isSharedCheck_1167_;
goto v_resetjp_1159_;
}
else
{
lean_dec(v_a_922_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1167_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1162_ = lean_string_utf8_next_fast(v_fst_1151_, v_snd_1152_);
lean_dec(v_snd_1152_);
lean_inc(v_fst_1151_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 1, v___x_1162_);
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_fst_1151_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_obj_once(&l_Lean_Json_Parser_numSign___closed__1, &l_Lean_Json_Parser_numSign___closed__1_once, _init_l_Lean_Json_Parser_numSign___closed__1);
v_pos_1118_ = v___x_1164_;
v_fst_1119_ = v_fst_1151_;
v_snd_1120_ = v___x_1162_;
v_res_1121_ = v___x_1165_;
goto v___jp_1117_;
}
}
}
}
else
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_box(0);
v___x_1171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1171_, 0, v_a_922_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
return v___x_1171_;
}
v___jp_923_:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(l_Lean_Json_Parser_natMaybeZero___closed__1));
v___x_926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_926_, 0, v___y_924_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
return v___x_926_;
}
v___jp_927_:
{
lean_object* v___x_932_; uint8_t v_decide_933_; 
v___x_932_ = lean_string_utf8_byte_size(v_fst_930_);
v_decide_933_ = lean_nat_dec_eq(v_snd_931_, v___x_932_);
if (v_decide_933_ == 0)
{
uint32_t v___x_934_; uint32_t v___x_935_; uint8_t v___x_936_; 
v___x_934_ = lean_string_utf8_get_fast(v_fst_930_, v_snd_931_);
lean_dec(v_snd_931_);
lean_dec(v_fst_930_);
v___x_935_ = 48;
v___x_936_ = lean_uint32_dec_le(v___x_935_, v___x_934_);
if (v___x_936_ == 0)
{
lean_dec_ref(v___y_928_);
v___y_924_ = v___y_929_;
goto v___jp_923_;
}
else
{
uint32_t v___x_937_; uint8_t v___x_938_; 
v___x_937_ = 57;
v___x_938_ = lean_uint32_dec_le(v___x_934_, v___x_937_);
if (v___x_938_ == 0)
{
lean_dec_ref(v___y_928_);
v___y_924_ = v___y_929_;
goto v___jp_923_;
}
else
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = l_Lean_Json_Parser_natCore(v___x_939_, v___y_929_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_pos_941_; lean_object* v_res_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_956_; 
v_pos_941_ = lean_ctor_get(v___x_940_, 0);
v_res_942_ = lean_ctor_get(v___x_940_, 1);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_956_ == 0)
{
v___x_944_ = v___x_940_;
v_isShared_945_ = v_isSharedCheck_956_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_res_942_);
lean_inc(v_pos_941_);
lean_dec(v___x_940_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_956_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = lean_unsigned_to_nat(100000u);
v___x_947_ = lean_nat_dec_lt(v___x_946_, v_res_942_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_948_ = l_Lean_JsonNumber_shiftl(v___y_928_, v_res_942_);
lean_dec(v_res_942_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v___x_948_);
v___x_950_ = v___x_944_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_pos_941_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
else
{
lean_object* v___x_952_; lean_object* v___x_954_; 
lean_dec(v_res_942_);
lean_dec_ref(v___y_928_);
v___x_952_ = ((lean_object*)(l_Lean_Json_Parser_exponent___closed__1));
if (v_isShared_945_ == 0)
{
lean_ctor_set_tag(v___x_944_, 1);
lean_ctor_set(v___x_944_, 1, v___x_952_);
v___x_954_ = v___x_944_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_pos_941_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v___x_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
lean_object* v_pos_957_; lean_object* v_err_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec_ref(v___y_928_);
v_pos_957_ = lean_ctor_get(v___x_940_, 0);
v_err_958_ = lean_ctor_get(v___x_940_, 1);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_940_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_err_958_);
lean_inc(v_pos_957_);
lean_dec(v___x_940_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_pos_957_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_err_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; 
lean_dec(v_snd_931_);
lean_dec(v_fst_930_);
lean_dec_ref(v___y_928_);
v___x_966_ = lean_box(0);
v___x_967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_967_, 0, v___y_929_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
return v___x_967_;
}
}
v___jp_968_:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = ((lean_object*)(l_Lean_Json_Parser_natMaybeZero___closed__1));
v___x_971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_971_, 0, v___y_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
return v___x_971_;
}
v___jp_972_:
{
lean_object* v___x_977_; uint8_t v_decide_978_; 
v___x_977_ = lean_string_utf8_byte_size(v_fst_974_);
v_decide_978_ = lean_nat_dec_eq(v_snd_975_, v___x_977_);
if (v_decide_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v_decide_981_; 
lean_dec_ref(v___y_973_);
v___x_979_ = lean_string_utf8_next_fast(v_fst_974_, v_snd_975_);
lean_dec(v_snd_975_);
lean_inc(v_fst_974_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v_fst_974_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v_decide_981_ = lean_nat_dec_eq(v___x_979_, v___x_977_);
if (v_decide_981_ == 0)
{
uint32_t v___x_982_; uint32_t v___x_983_; uint8_t v___x_984_; 
v___x_982_ = lean_string_utf8_get_fast(v_fst_974_, v___x_979_);
v___x_983_ = 45;
v___x_984_ = lean_uint32_dec_eq(v___x_982_, v___x_983_);
if (v___x_984_ == 0)
{
uint32_t v___x_985_; uint8_t v___x_986_; 
v___x_985_ = 43;
v___x_986_ = lean_uint32_dec_eq(v___x_982_, v___x_985_);
if (v___x_986_ == 0)
{
v___y_928_ = v___y_976_;
v___y_929_ = v___x_980_;
v_fst_930_ = v_fst_974_;
v_snd_931_ = v___x_979_;
goto v___jp_927_;
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; 
lean_dec_ref_known(v___x_980_, 2);
v___x_987_ = lean_string_utf8_next_fast(v_fst_974_, v___x_979_);
lean_inc(v_fst_974_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v_fst_974_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___y_928_ = v___y_976_;
v___y_929_ = v___x_988_;
v_fst_930_ = v_fst_974_;
v_snd_931_ = v___x_987_;
goto v___jp_927_;
}
}
else
{
lean_object* v___x_989_; lean_object* v___x_990_; uint8_t v_decide_991_; 
lean_dec_ref_known(v___x_980_, 2);
v___x_989_ = lean_string_utf8_next_fast(v_fst_974_, v___x_979_);
lean_inc(v_fst_974_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v_fst_974_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v_decide_991_ = lean_nat_dec_eq(v___x_989_, v___x_977_);
if (v_decide_991_ == 0)
{
uint32_t v___x_992_; uint32_t v___x_993_; uint8_t v___x_994_; 
v___x_992_ = lean_string_utf8_get_fast(v_fst_974_, v___x_989_);
lean_dec(v_fst_974_);
v___x_993_ = 48;
v___x_994_ = lean_uint32_dec_le(v___x_993_, v___x_992_);
if (v___x_994_ == 0)
{
lean_dec_ref(v___y_976_);
v___y_969_ = v___x_990_;
goto v___jp_968_;
}
else
{
uint32_t v___x_995_; uint8_t v___x_996_; 
v___x_995_ = 57;
v___x_996_ = lean_uint32_dec_le(v___x_992_, v___x_995_);
if (v___x_996_ == 0)
{
lean_dec_ref(v___y_976_);
v___y_969_ = v___x_990_;
goto v___jp_968_;
}
else
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = l_Lean_Json_Parser_natCore(v___x_997_, v___x_990_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_pos_999_; lean_object* v_res_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1008_; 
v_pos_999_ = lean_ctor_get(v___x_998_, 0);
v_res_1000_ = lean_ctor_get(v___x_998_, 1);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1002_ = v___x_998_;
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_res_1000_);
lean_inc(v_pos_999_);
lean_dec(v___x_998_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1008_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1004_ = l_Lean_JsonNumber_shiftr(v___y_976_, v_res_1000_);
lean_dec(v_res_1000_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v___x_1004_);
v___x_1006_ = v___x_1002_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_pos_999_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
lean_object* v_pos_1009_; lean_object* v_err_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec_ref(v___y_976_);
v_pos_1009_ = lean_ctor_get(v___x_998_, 0);
v_err_1010_ = lean_ctor_get(v___x_998_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_998_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_err_1010_);
lean_inc(v_pos_1009_);
lean_dec(v___x_998_);
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
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_pos_1009_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_err_1010_);
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
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
lean_dec_ref(v___y_976_);
lean_dec(v_fst_974_);
v___x_1018_ = lean_box(0);
v___x_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_990_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
return v___x_1019_;
}
}
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
lean_dec_ref(v___y_976_);
lean_dec(v_fst_974_);
v___x_1020_ = lean_box(0);
v___x_1021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_980_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
return v___x_1021_;
}
}
else
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
lean_dec_ref(v___y_976_);
lean_dec(v_snd_975_);
lean_dec(v_fst_974_);
v___x_1022_ = lean_box(0);
v___x_1023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___y_973_);
lean_ctor_set(v___x_1023_, 1, v___x_1022_);
return v___x_1023_;
}
}
v___jp_1024_:
{
lean_object* v_fst_1028_; lean_object* v_snd_1029_; lean_object* v___x_1030_; uint8_t v_decide_1031_; 
v_fst_1028_ = lean_ctor_get(v_pos_1026_, 0);
lean_inc(v_fst_1028_);
v_snd_1029_ = lean_ctor_get(v_pos_1026_, 1);
lean_inc(v_snd_1029_);
v___x_1030_ = lean_string_utf8_byte_size(v_fst_1028_);
v_decide_1031_ = lean_nat_dec_eq(v_snd_1029_, v___x_1030_);
if (v_decide_1031_ == 0)
{
uint32_t v___x_1032_; uint32_t v___x_1033_; uint8_t v___x_1034_; 
v___x_1032_ = lean_string_utf8_get_fast(v_fst_1028_, v_snd_1029_);
v___x_1033_ = 101;
v___x_1034_ = lean_uint32_dec_eq(v___x_1032_, v___x_1033_);
if (v___x_1034_ == 0)
{
uint32_t v___x_1035_; uint8_t v___x_1036_; 
v___x_1035_ = 69;
v___x_1036_ = lean_uint32_dec_eq(v___x_1032_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_dec(v_snd_1029_);
lean_dec(v_fst_1028_);
lean_dec_ref(v_res_1027_);
lean_dec_ref(v_pos_1026_);
return v___y_1025_;
}
else
{
lean_dec_ref(v___y_1025_);
v___y_973_ = v_pos_1026_;
v_fst_974_ = v_fst_1028_;
v_snd_975_ = v_snd_1029_;
v___y_976_ = v_res_1027_;
goto v___jp_972_;
}
}
else
{
lean_dec_ref(v___y_1025_);
v___y_973_ = v_pos_1026_;
v_fst_974_ = v_fst_1028_;
v_snd_975_ = v_snd_1029_;
v___y_976_ = v_res_1027_;
goto v___jp_972_;
}
}
else
{
lean_dec(v_snd_1029_);
lean_dec(v_fst_1028_);
lean_dec_ref(v_res_1027_);
lean_dec_ref(v_pos_1026_);
return v___y_1025_;
}
}
v___jp_1037_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1041_ = lean_nat_to_int(v___y_1038_);
v___x_1042_ = lean_int_mul(v___y_1039_, v___x_1041_);
lean_dec(v___x_1041_);
v___x_1043_ = l_Lean_JsonNumber_fromInt(v___x_1042_);
lean_inc_ref(v___x_1043_);
lean_inc_ref(v___y_1040_);
v___x_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___y_1040_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___y_1025_ = v___x_1044_;
v_pos_1026_ = v___y_1040_;
v_res_1027_ = v___x_1043_;
goto v___jp_1024_;
}
v___jp_1045_:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = ((lean_object*)(l_Lean_Json_Parser_natNumDigits___closed__1));
v___x_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___y_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
return v___x_1048_;
}
v___jp_1049_:
{
lean_object* v___x_1055_; uint8_t v_decide_1056_; 
v___x_1055_ = lean_string_utf8_byte_size(v_fst_1052_);
v_decide_1056_ = lean_nat_dec_eq(v_snd_1053_, v___x_1055_);
if (v_decide_1056_ == 0)
{
uint32_t v___x_1057_; uint32_t v___x_1058_; uint8_t v___x_1059_; 
v___x_1057_ = lean_string_utf8_get_fast(v_fst_1052_, v_snd_1053_);
v___x_1058_ = 46;
v___x_1059_ = lean_uint32_dec_eq(v___x_1057_, v___x_1058_);
if (v___x_1059_ == 0)
{
lean_dec(v_snd_1053_);
lean_dec(v_fst_1052_);
v___y_1038_ = v_res_1054_;
v___y_1039_ = v___y_1050_;
v___y_1040_ = v_pos_1051_;
goto v___jp_1037_;
}
else
{
lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v_decide_1062_; 
lean_dec_ref(v_pos_1051_);
v___x_1060_ = lean_string_utf8_next_fast(v_fst_1052_, v_snd_1053_);
lean_dec(v_snd_1053_);
lean_inc(v_fst_1052_);
v___x_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1061_, 0, v_fst_1052_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v_decide_1062_ = lean_nat_dec_eq(v___x_1060_, v___x_1055_);
if (v_decide_1062_ == 0)
{
uint32_t v___x_1063_; uint32_t v___x_1064_; uint8_t v___x_1065_; 
v___x_1063_ = lean_string_utf8_get_fast(v_fst_1052_, v___x_1060_);
lean_dec(v_fst_1052_);
v___x_1064_ = 48;
v___x_1065_ = lean_uint32_dec_le(v___x_1064_, v___x_1063_);
if (v___x_1065_ == 0)
{
lean_dec(v_res_1054_);
v___y_1046_ = v___x_1061_;
goto v___jp_1045_;
}
else
{
uint32_t v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = 57;
v___x_1067_ = lean_uint32_dec_le(v___x_1063_, v___x_1066_);
if (v___x_1067_ == 0)
{
lean_dec(v_res_1054_);
v___y_1046_ = v___x_1061_;
goto v___jp_1045_;
}
else
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_unsigned_to_nat(0u);
v___x_1069_ = l_Lean_Json_Parser_natCoreNumDigits(v___x_1068_, v___x_1068_, v___x_1061_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_res_1070_; lean_object* v_pos_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1101_; 
v_res_1070_ = lean_ctor_get(v___x_1069_, 1);
v_pos_1071_ = lean_ctor_get(v___x_1069_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1073_ = v___x_1069_;
v_isShared_1074_ = v_isSharedCheck_1101_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_res_1070_);
lean_inc(v_pos_1071_);
lean_dec(v___x_1069_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1101_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v_fst_1075_; lean_object* v_snd_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1100_; 
v_fst_1075_ = lean_ctor_get(v_res_1070_, 0);
v_snd_1076_ = lean_ctor_get(v_res_1070_, 1);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_res_1070_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1078_ = v_res_1070_;
v_isShared_1079_ = v_isSharedCheck_1100_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_snd_1076_);
lean_inc(v_fst_1075_);
lean_dec(v_res_1070_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1100_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1080_ = lean_obj_once(&l_Lean_Json_Parser_numWithDecimals___closed__0, &l_Lean_Json_Parser_numWithDecimals___closed__0_once, _init_l_Lean_Json_Parser_numWithDecimals___closed__0);
v___x_1081_ = lean_nat_dec_lt(v___x_1080_, v_snd_1076_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1082_ = lean_nat_to_int(v_res_1054_);
v___x_1083_ = lean_unsigned_to_nat(10u);
v___x_1084_ = lean_nat_pow(v___x_1083_, v_snd_1076_);
v___x_1085_ = lean_nat_to_int(v___x_1084_);
v___x_1086_ = lean_int_mul(v___x_1082_, v___x_1085_);
lean_dec(v___x_1085_);
lean_dec(v___x_1082_);
v___x_1087_ = lean_nat_to_int(v_fst_1075_);
v___x_1088_ = lean_int_add(v___x_1086_, v___x_1087_);
lean_dec(v___x_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_int_mul(v___y_1050_, v___x_1088_);
lean_dec(v___x_1088_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1089_);
v___x_1091_ = v___x_1078_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_snd_1076_);
v___x_1091_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1093_; 
lean_inc_ref(v___x_1091_);
lean_inc(v_pos_1071_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 1, v___x_1091_);
v___x_1093_ = v___x_1073_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_pos_1071_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
v___y_1025_ = v___x_1093_;
v_pos_1026_ = v_pos_1071_;
v_res_1027_ = v___x_1091_;
goto v___jp_1024_;
}
}
}
else
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
lean_del_object(v___x_1078_);
lean_dec(v_snd_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_res_1054_);
v___x_1096_ = ((lean_object*)(l_Lean_Json_Parser_numWithDecimals___closed__2));
if (v_isShared_1074_ == 0)
{
lean_ctor_set_tag(v___x_1073_, 1);
lean_ctor_set(v___x_1073_, 1, v___x_1096_);
v___x_1098_ = v___x_1073_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_pos_1071_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
else
{
lean_object* v_pos_1102_; lean_object* v_err_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec(v_res_1054_);
v_pos_1102_ = lean_ctor_get(v___x_1069_, 0);
v_err_1103_ = lean_ctor_get(v___x_1069_, 1);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1069_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_err_1103_);
lean_inc(v_pos_1102_);
lean_dec(v___x_1069_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_pos_1102_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_err_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
}
else
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec(v_res_1054_);
lean_dec(v_fst_1052_);
v___x_1111_ = lean_box(0);
v___x_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1061_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
return v___x_1112_;
}
}
}
else
{
lean_dec(v_snd_1053_);
lean_dec(v_fst_1052_);
v___y_1038_ = v_res_1054_;
v___y_1039_ = v___y_1050_;
v___y_1040_ = v_pos_1051_;
goto v___jp_1037_;
}
}
v___jp_1113_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = ((lean_object*)(l_Lean_Json_Parser_natNonZero___closed__1));
v___x_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___y_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
return v___x_1116_;
}
v___jp_1117_:
{
lean_object* v___x_1122_; uint8_t v_decide_1123_; 
v___x_1122_ = lean_string_utf8_byte_size(v_fst_1119_);
v_decide_1123_ = lean_nat_dec_eq(v_snd_1120_, v___x_1122_);
if (v_decide_1123_ == 0)
{
uint32_t v___x_1124_; uint32_t v___x_1125_; uint8_t v___x_1126_; 
v___x_1124_ = lean_string_utf8_get_fast(v_fst_1119_, v_snd_1120_);
v___x_1125_ = 48;
v___x_1126_ = lean_uint32_dec_eq(v___x_1124_, v___x_1125_);
if (v___x_1126_ == 0)
{
uint32_t v___x_1127_; uint8_t v___x_1128_; 
lean_dec(v_snd_1120_);
lean_dec(v_fst_1119_);
v___x_1127_ = 49;
v___x_1128_ = lean_uint32_dec_le(v___x_1127_, v___x_1124_);
if (v___x_1128_ == 0)
{
v___y_1114_ = v_pos_1118_;
goto v___jp_1113_;
}
else
{
uint32_t v___x_1129_; uint8_t v___x_1130_; 
v___x_1129_ = 57;
v___x_1130_ = lean_uint32_dec_le(v___x_1124_, v___x_1129_);
if (v___x_1130_ == 0)
{
v___y_1114_ = v_pos_1118_;
goto v___jp_1113_;
}
else
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_unsigned_to_nat(0u);
v___x_1132_ = l_Lean_Json_Parser_natCore(v___x_1131_, v_pos_1118_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_pos_1133_; lean_object* v_res_1134_; lean_object* v_fst_1135_; lean_object* v_snd_1136_; 
v_pos_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_pos_1133_);
v_res_1134_ = lean_ctor_get(v___x_1132_, 1);
lean_inc(v_res_1134_);
lean_dec_ref_known(v___x_1132_, 2);
v_fst_1135_ = lean_ctor_get(v_pos_1133_, 0);
lean_inc(v_fst_1135_);
v_snd_1136_ = lean_ctor_get(v_pos_1133_, 1);
lean_inc(v_snd_1136_);
v___y_1050_ = v_res_1121_;
v_pos_1051_ = v_pos_1133_;
v_fst_1052_ = v_fst_1135_;
v_snd_1053_ = v_snd_1136_;
v_res_1054_ = v_res_1134_;
goto v___jp_1049_;
}
else
{
lean_object* v_pos_1137_; lean_object* v_err_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_pos_1137_ = lean_ctor_get(v___x_1132_, 0);
v_err_1138_ = lean_ctor_get(v___x_1132_, 1);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1132_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_err_1138_);
lean_inc(v_pos_1137_);
lean_dec(v___x_1132_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_pos_1137_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_err_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
}
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_dec_ref(v_pos_1118_);
v___x_1146_ = lean_string_utf8_next_fast(v_fst_1119_, v_snd_1120_);
lean_dec(v_snd_1120_);
lean_inc(v_fst_1119_);
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v_fst_1119_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_unsigned_to_nat(0u);
v___y_1050_ = v_res_1121_;
v_pos_1051_ = v___x_1147_;
v_fst_1052_ = v_fst_1119_;
v_snd_1053_ = v___x_1146_;
v_res_1054_ = v___x_1148_;
goto v___jp_1049_;
}
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_dec(v_snd_1120_);
lean_dec(v_fst_1119_);
v___x_1149_ = lean_box(0);
v___x_1150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1150_, 0, v_pos_1118_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
return v___x_1150_;
}
}
}
}
static lean_object* _init_l_Lean_Json_Parser_maxDepth(void){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = lean_unsigned_to_nat(10000u);
return v___x_1172_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg(lean_object* v_k_1173_, lean_object* v_t_1174_){
_start:
{
if (lean_obj_tag(v_t_1174_) == 0)
{
lean_object* v_k_1175_; lean_object* v_l_1176_; lean_object* v_r_1177_; uint8_t v___x_1178_; 
v_k_1175_ = lean_ctor_get(v_t_1174_, 1);
v_l_1176_ = lean_ctor_get(v_t_1174_, 3);
v_r_1177_ = lean_ctor_get(v_t_1174_, 4);
v___x_1178_ = lean_string_compare(v_k_1173_, v_k_1175_);
switch(v___x_1178_)
{
case 0:
{
v_t_1174_ = v_l_1176_;
goto _start;
}
case 1:
{
uint8_t v___x_1180_; 
v___x_1180_ = 1;
return v___x_1180_;
}
default: 
{
v_t_1174_ = v_r_1177_;
goto _start;
}
}
}
else
{
uint8_t v___x_1182_; 
v___x_1182_ = 0;
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg___boxed(lean_object* v_k_1183_, lean_object* v_t_1184_){
_start:
{
uint8_t v_res_1185_; lean_object* v_r_1186_; 
v_res_1185_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg(v_k_1183_, v_t_1184_);
lean_dec(v_t_1184_);
lean_dec_ref(v_k_1183_);
v_r_1186_ = lean_box(v_res_1185_);
return v_r_1186_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(lean_object* v_msg_1187_){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_box(1);
v___x_1189_ = lean_panic_fn_borrowed(v___x_1188_, v_msg_1187_);
return v___x_1189_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1193_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__2));
v___x_1194_ = lean_unsigned_to_nat(35u);
v___x_1195_ = lean_unsigned_to_nat(182u);
v___x_1196_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__1));
v___x_1197_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0));
v___x_1198_ = l_mkPanicMessageWithDecl(v___x_1197_, v___x_1196_, v___x_1195_, v___x_1194_, v___x_1193_);
return v___x_1198_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1199_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__2));
v___x_1200_ = lean_unsigned_to_nat(21u);
v___x_1201_ = lean_unsigned_to_nat(183u);
v___x_1202_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__1));
v___x_1203_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0));
v___x_1204_ = l_mkPanicMessageWithDecl(v___x_1203_, v___x_1202_, v___x_1201_, v___x_1200_, v___x_1199_);
return v___x_1204_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1207_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__6));
v___x_1208_ = lean_unsigned_to_nat(35u);
v___x_1209_ = lean_unsigned_to_nat(276u);
v___x_1210_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__5));
v___x_1211_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0));
v___x_1212_ = l_mkPanicMessageWithDecl(v___x_1211_, v___x_1210_, v___x_1209_, v___x_1208_, v___x_1207_);
return v___x_1212_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__8(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1213_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__6));
v___x_1214_ = lean_unsigned_to_nat(21u);
v___x_1215_ = lean_unsigned_to_nat(277u);
v___x_1216_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__5));
v___x_1217_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__0));
v___x_1218_ = l_mkPanicMessageWithDecl(v___x_1217_, v___x_1216_, v___x_1215_, v___x_1214_, v___x_1213_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(lean_object* v_k_1219_, lean_object* v_v_1220_, lean_object* v_t_1221_){
_start:
{
if (lean_obj_tag(v_t_1221_) == 0)
{
lean_object* v_size_1222_; lean_object* v_k_1223_; lean_object* v_v_1224_; lean_object* v_l_1225_; lean_object* v_r_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1582_; 
v_size_1222_ = lean_ctor_get(v_t_1221_, 0);
v_k_1223_ = lean_ctor_get(v_t_1221_, 1);
v_v_1224_ = lean_ctor_get(v_t_1221_, 2);
v_l_1225_ = lean_ctor_get(v_t_1221_, 3);
v_r_1226_ = lean_ctor_get(v_t_1221_, 4);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_t_1221_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1228_ = v_t_1221_;
v_isShared_1229_ = v_isSharedCheck_1582_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_r_1226_);
lean_inc(v_l_1225_);
lean_inc(v_v_1224_);
lean_inc(v_k_1223_);
lean_inc(v_size_1222_);
lean_dec(v_t_1221_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1582_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
uint8_t v___x_1230_; 
v___x_1230_ = lean_string_compare(v_k_1219_, v_k_1223_);
switch(v___x_1230_)
{
case 0:
{
lean_object* v___x_1231_; 
lean_dec(v_size_1222_);
v___x_1231_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(v_k_1219_, v_v_1220_, v_l_1225_);
if (lean_obj_tag(v_r_1226_) == 0)
{
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_size_1232_; lean_object* v_size_1233_; lean_object* v_k_1234_; lean_object* v_v_1235_; lean_object* v_l_1236_; lean_object* v_r_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_size_1232_ = lean_ctor_get(v_r_1226_, 0);
v_size_1233_ = lean_ctor_get(v___x_1231_, 0);
v_k_1234_ = lean_ctor_get(v___x_1231_, 1);
v_v_1235_ = lean_ctor_get(v___x_1231_, 2);
v_l_1236_ = lean_ctor_get(v___x_1231_, 3);
v_r_1237_ = lean_ctor_get(v___x_1231_, 4);
lean_inc(v_r_1237_);
v___x_1238_ = lean_unsigned_to_nat(3u);
v___x_1239_ = lean_nat_mul(v___x_1238_, v_size_1232_);
v___x_1240_ = lean_nat_dec_lt(v___x_1239_, v_size_1233_);
lean_dec(v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1245_; 
lean_dec(v_r_1237_);
v___x_1241_ = lean_unsigned_to_nat(1u);
v___x_1242_ = lean_nat_add(v___x_1241_, v_size_1233_);
v___x_1243_ = lean_nat_add(v___x_1242_, v_size_1232_);
lean_dec(v___x_1242_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 3, v___x_1231_);
lean_ctor_set(v___x_1228_, 0, v___x_1243_);
v___x_1245_ = v___x_1228_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1246_, 3, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1246_, 4, v_r_1226_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
else
{
lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1318_; 
lean_inc(v_l_1236_);
lean_inc(v_v_1235_);
lean_inc(v_k_1234_);
lean_inc(v_size_1233_);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1318_ == 0)
{
lean_object* v_unused_1319_; lean_object* v_unused_1320_; lean_object* v_unused_1321_; lean_object* v_unused_1322_; lean_object* v_unused_1323_; 
v_unused_1319_ = lean_ctor_get(v___x_1231_, 4);
lean_dec(v_unused_1319_);
v_unused_1320_ = lean_ctor_get(v___x_1231_, 3);
lean_dec(v_unused_1320_);
v_unused_1321_ = lean_ctor_get(v___x_1231_, 2);
lean_dec(v_unused_1321_);
v_unused_1322_ = lean_ctor_get(v___x_1231_, 1);
lean_dec(v_unused_1322_);
v_unused_1323_ = lean_ctor_get(v___x_1231_, 0);
lean_dec(v_unused_1323_);
v___x_1248_ = v___x_1231_;
v_isShared_1249_ = v_isSharedCheck_1318_;
goto v_resetjp_1247_;
}
else
{
lean_dec(v___x_1231_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1318_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
if (lean_obj_tag(v_l_1236_) == 0)
{
if (lean_obj_tag(v_r_1237_) == 0)
{
lean_object* v_size_1250_; lean_object* v_size_1251_; lean_object* v_k_1252_; lean_object* v_v_1253_; lean_object* v_l_1254_; lean_object* v_r_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v_size_1250_ = lean_ctor_get(v_l_1236_, 0);
v_size_1251_ = lean_ctor_get(v_r_1237_, 0);
v_k_1252_ = lean_ctor_get(v_r_1237_, 1);
v_v_1253_ = lean_ctor_get(v_r_1237_, 2);
v_l_1254_ = lean_ctor_get(v_r_1237_, 3);
v_r_1255_ = lean_ctor_get(v_r_1237_, 4);
v___x_1256_ = lean_unsigned_to_nat(2u);
v___x_1257_ = lean_nat_mul(v___x_1256_, v_size_1250_);
v___x_1258_ = lean_nat_dec_lt(v_size_1251_, v___x_1257_);
lean_dec(v___x_1257_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1288_; 
lean_inc(v_r_1255_);
lean_inc(v_l_1254_);
lean_inc(v_v_1253_);
lean_inc(v_k_1252_);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_r_1237_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; lean_object* v_unused_1290_; lean_object* v_unused_1291_; lean_object* v_unused_1292_; lean_object* v_unused_1293_; 
v_unused_1289_ = lean_ctor_get(v_r_1237_, 4);
lean_dec(v_unused_1289_);
v_unused_1290_ = lean_ctor_get(v_r_1237_, 3);
lean_dec(v_unused_1290_);
v_unused_1291_ = lean_ctor_get(v_r_1237_, 2);
lean_dec(v_unused_1291_);
v_unused_1292_ = lean_ctor_get(v_r_1237_, 1);
lean_dec(v_unused_1292_);
v_unused_1293_ = lean_ctor_get(v_r_1237_, 0);
lean_dec(v_unused_1293_);
v___x_1260_ = v_r_1237_;
v_isShared_1261_ = v_isSharedCheck_1288_;
goto v_resetjp_1259_;
}
else
{
lean_dec(v_r_1237_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1288_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___x_1276_; lean_object* v___y_1278_; 
v___x_1262_ = lean_unsigned_to_nat(1u);
v___x_1263_ = lean_nat_add(v___x_1262_, v_size_1233_);
lean_dec(v_size_1233_);
v___x_1264_ = lean_nat_add(v___x_1263_, v_size_1232_);
lean_dec(v___x_1263_);
v___x_1276_ = lean_nat_add(v___x_1262_, v_size_1250_);
if (lean_obj_tag(v_l_1254_) == 0)
{
lean_object* v_size_1286_; 
v_size_1286_ = lean_ctor_get(v_l_1254_, 0);
lean_inc(v_size_1286_);
v___y_1278_ = v_size_1286_;
goto v___jp_1277_;
}
else
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_unsigned_to_nat(0u);
v___y_1278_ = v___x_1287_;
goto v___jp_1277_;
}
v___jp_1265_:
{
lean_object* v___x_1269_; lean_object* v___x_1271_; 
v___x_1269_ = lean_nat_add(v___y_1267_, v___y_1268_);
lean_dec(v___y_1268_);
lean_dec(v___y_1267_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 4, v_r_1226_);
lean_ctor_set(v___x_1260_, 3, v_r_1255_);
lean_ctor_set(v___x_1260_, 2, v_v_1224_);
lean_ctor_set(v___x_1260_, 1, v_k_1223_);
lean_ctor_set(v___x_1260_, 0, v___x_1269_);
v___x_1271_ = v___x_1260_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1269_);
lean_ctor_set(v_reuseFailAlloc_1275_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1275_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1275_, 3, v_r_1255_);
lean_ctor_set(v_reuseFailAlloc_1275_, 4, v_r_1226_);
v___x_1271_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
lean_object* v___x_1273_; 
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 4, v___x_1271_);
lean_ctor_set(v___x_1248_, 3, v___y_1266_);
lean_ctor_set(v___x_1248_, 2, v_v_1253_);
lean_ctor_set(v___x_1248_, 1, v_k_1252_);
lean_ctor_set(v___x_1248_, 0, v___x_1264_);
v___x_1273_ = v___x_1248_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1264_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_k_1252_);
lean_ctor_set(v_reuseFailAlloc_1274_, 2, v_v_1253_);
lean_ctor_set(v_reuseFailAlloc_1274_, 3, v___y_1266_);
lean_ctor_set(v_reuseFailAlloc_1274_, 4, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
v___jp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = lean_nat_add(v___x_1276_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec(v___x_1276_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v_l_1254_);
lean_ctor_set(v___x_1228_, 3, v_l_1236_);
lean_ctor_set(v___x_1228_, 2, v_v_1235_);
lean_ctor_set(v___x_1228_, 1, v_k_1234_);
lean_ctor_set(v___x_1228_, 0, v___x_1279_);
v___x_1281_ = v___x_1228_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1279_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v_k_1234_);
lean_ctor_set(v_reuseFailAlloc_1285_, 2, v_v_1235_);
lean_ctor_set(v_reuseFailAlloc_1285_, 3, v_l_1236_);
lean_ctor_set(v_reuseFailAlloc_1285_, 4, v_l_1254_);
v___x_1281_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_nat_add(v___x_1262_, v_size_1232_);
if (lean_obj_tag(v_r_1255_) == 0)
{
lean_object* v_size_1283_; 
v_size_1283_ = lean_ctor_get(v_r_1255_, 0);
lean_inc(v_size_1283_);
v___y_1266_ = v___x_1281_;
v___y_1267_ = v___x_1282_;
v___y_1268_ = v_size_1283_;
goto v___jp_1265_;
}
else
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_unsigned_to_nat(0u);
v___y_1266_ = v___x_1281_;
v___y_1267_ = v___x_1282_;
v___y_1268_ = v___x_1284_;
goto v___jp_1265_;
}
}
}
}
}
else
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1300_; 
lean_del_object(v___x_1228_);
v___x_1294_ = lean_unsigned_to_nat(1u);
v___x_1295_ = lean_nat_add(v___x_1294_, v_size_1233_);
lean_dec(v_size_1233_);
v___x_1296_ = lean_nat_add(v___x_1295_, v_size_1232_);
lean_dec(v___x_1295_);
v___x_1297_ = lean_nat_add(v___x_1294_, v_size_1232_);
v___x_1298_ = lean_nat_add(v___x_1297_, v_size_1251_);
lean_dec(v___x_1297_);
lean_inc_ref(v_r_1226_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 4, v_r_1226_);
lean_ctor_set(v___x_1248_, 3, v_r_1237_);
lean_ctor_set(v___x_1248_, 2, v_v_1224_);
lean_ctor_set(v___x_1248_, 1, v_k_1223_);
lean_ctor_set(v___x_1248_, 0, v___x_1298_);
v___x_1300_ = v___x_1248_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1298_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1313_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1313_, 3, v_r_1237_);
lean_ctor_set(v_reuseFailAlloc_1313_, 4, v_r_1226_);
v___x_1300_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
v_isSharedCheck_1307_ = !lean_is_exclusive(v_r_1226_);
if (v_isSharedCheck_1307_ == 0)
{
lean_object* v_unused_1308_; lean_object* v_unused_1309_; lean_object* v_unused_1310_; lean_object* v_unused_1311_; lean_object* v_unused_1312_; 
v_unused_1308_ = lean_ctor_get(v_r_1226_, 4);
lean_dec(v_unused_1308_);
v_unused_1309_ = lean_ctor_get(v_r_1226_, 3);
lean_dec(v_unused_1309_);
v_unused_1310_ = lean_ctor_get(v_r_1226_, 2);
lean_dec(v_unused_1310_);
v_unused_1311_ = lean_ctor_get(v_r_1226_, 1);
lean_dec(v_unused_1311_);
v_unused_1312_ = lean_ctor_get(v_r_1226_, 0);
lean_dec(v_unused_1312_);
v___x_1302_ = v_r_1226_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_dec(v_r_1226_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 4, v___x_1300_);
lean_ctor_set(v___x_1302_, 3, v_l_1236_);
lean_ctor_set(v___x_1302_, 2, v_v_1235_);
lean_ctor_set(v___x_1302_, 1, v_k_1234_);
lean_ctor_set(v___x_1302_, 0, v___x_1296_);
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1296_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v_k_1234_);
lean_ctor_set(v_reuseFailAlloc_1306_, 2, v_v_1235_);
lean_ctor_set(v_reuseFailAlloc_1306_, 3, v_l_1236_);
lean_ctor_set(v_reuseFailAlloc_1306_, 4, v___x_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec_ref_known(v_l_1236_, 5);
lean_del_object(v___x_1248_);
lean_dec(v_v_1235_);
lean_dec(v_k_1234_);
lean_dec(v_size_1233_);
lean_dec_ref_known(v_r_1226_, 5);
lean_del_object(v___x_1228_);
lean_dec(v_v_1224_);
lean_dec(v_k_1223_);
v___x_1314_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__3);
v___x_1315_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(v___x_1314_);
return v___x_1315_;
}
}
else
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_del_object(v___x_1248_);
lean_dec(v_r_1237_);
lean_dec(v_v_1235_);
lean_dec(v_k_1234_);
lean_dec(v_size_1233_);
lean_dec_ref_known(v_r_1226_, 5);
lean_del_object(v___x_1228_);
lean_dec(v_v_1224_);
lean_dec(v_k_1223_);
v___x_1316_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__4);
v___x_1317_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(v___x_1316_);
return v___x_1317_;
}
}
}
}
else
{
lean_object* v_size_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1328_; 
v_size_1324_ = lean_ctor_get(v_r_1226_, 0);
v___x_1325_ = lean_unsigned_to_nat(1u);
v___x_1326_ = lean_nat_add(v___x_1325_, v_size_1324_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 3, v___x_1231_);
lean_ctor_set(v___x_1228_, 0, v___x_1326_);
v___x_1328_ = v___x_1228_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1329_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1329_, 3, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1329_, 4, v_r_1226_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
else
{
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_l_1330_; 
v_l_1330_ = lean_ctor_get(v___x_1231_, 3);
if (lean_obj_tag(v_l_1330_) == 0)
{
lean_object* v_r_1331_; 
lean_inc_ref(v_l_1330_);
v_r_1331_ = lean_ctor_get(v___x_1231_, 4);
lean_inc(v_r_1331_);
if (lean_obj_tag(v_r_1331_) == 0)
{
lean_object* v_size_1332_; lean_object* v_k_1333_; lean_object* v_v_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1348_; 
v_size_1332_ = lean_ctor_get(v___x_1231_, 0);
v_k_1333_ = lean_ctor_get(v___x_1231_, 1);
v_v_1334_ = lean_ctor_get(v___x_1231_, 2);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; lean_object* v_unused_1350_; 
v_unused_1349_ = lean_ctor_get(v___x_1231_, 4);
lean_dec(v_unused_1349_);
v_unused_1350_ = lean_ctor_get(v___x_1231_, 3);
lean_dec(v_unused_1350_);
v___x_1336_ = v___x_1231_;
v_isShared_1337_ = v_isSharedCheck_1348_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_v_1334_);
lean_inc(v_k_1333_);
lean_inc(v_size_1332_);
lean_dec(v___x_1231_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1348_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v_size_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v_size_1338_ = lean_ctor_get(v_r_1331_, 0);
v___x_1339_ = lean_unsigned_to_nat(1u);
v___x_1340_ = lean_nat_add(v___x_1339_, v_size_1332_);
lean_dec(v_size_1332_);
v___x_1341_ = lean_nat_add(v___x_1339_, v_size_1338_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 4, v_r_1226_);
lean_ctor_set(v___x_1336_, 3, v_r_1331_);
lean_ctor_set(v___x_1336_, 2, v_v_1224_);
lean_ctor_set(v___x_1336_, 1, v_k_1223_);
lean_ctor_set(v___x_1336_, 0, v___x_1341_);
v___x_1343_ = v___x_1336_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1347_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1347_, 3, v_r_1331_);
lean_ctor_set(v_reuseFailAlloc_1347_, 4, v_r_1226_);
v___x_1343_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1345_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1343_);
lean_ctor_set(v___x_1228_, 3, v_l_1330_);
lean_ctor_set(v___x_1228_, 2, v_v_1334_);
lean_ctor_set(v___x_1228_, 1, v_k_1333_);
lean_ctor_set(v___x_1228_, 0, v___x_1340_);
v___x_1345_ = v___x_1228_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1340_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_k_1333_);
lean_ctor_set(v_reuseFailAlloc_1346_, 2, v_v_1334_);
lean_ctor_set(v_reuseFailAlloc_1346_, 3, v_l_1330_);
lean_ctor_set(v_reuseFailAlloc_1346_, 4, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_k_1351_; lean_object* v_v_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1364_; 
v_k_1351_ = lean_ctor_get(v___x_1231_, 1);
v_v_1352_ = lean_ctor_get(v___x_1231_, 2);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; lean_object* v_unused_1366_; lean_object* v_unused_1367_; 
v_unused_1365_ = lean_ctor_get(v___x_1231_, 4);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v___x_1231_, 3);
lean_dec(v_unused_1366_);
v_unused_1367_ = lean_ctor_get(v___x_1231_, 0);
lean_dec(v_unused_1367_);
v___x_1354_ = v___x_1231_;
v_isShared_1355_ = v_isSharedCheck_1364_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_v_1352_);
lean_inc(v_k_1351_);
lean_dec(v___x_1231_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1364_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1359_; 
v___x_1356_ = lean_unsigned_to_nat(3u);
v___x_1357_ = lean_unsigned_to_nat(1u);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 3, v_r_1331_);
lean_ctor_set(v___x_1354_, 2, v_v_1224_);
lean_ctor_set(v___x_1354_, 1, v_k_1223_);
lean_ctor_set(v___x_1354_, 0, v___x_1357_);
v___x_1359_ = v___x_1354_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1357_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1363_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1363_, 3, v_r_1331_);
lean_ctor_set(v_reuseFailAlloc_1363_, 4, v_r_1331_);
v___x_1359_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
lean_object* v___x_1361_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1359_);
lean_ctor_set(v___x_1228_, 3, v_l_1330_);
lean_ctor_set(v___x_1228_, 2, v_v_1352_);
lean_ctor_set(v___x_1228_, 1, v_k_1351_);
lean_ctor_set(v___x_1228_, 0, v___x_1356_);
v___x_1361_ = v___x_1228_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1356_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1362_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1362_, 3, v_l_1330_);
lean_ctor_set(v_reuseFailAlloc_1362_, 4, v___x_1359_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
else
{
lean_object* v_r_1368_; 
v_r_1368_ = lean_ctor_get(v___x_1231_, 4);
lean_inc(v_r_1368_);
if (lean_obj_tag(v_r_1368_) == 0)
{
lean_object* v_k_1369_; lean_object* v_v_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1394_; 
lean_inc(v_l_1330_);
v_k_1369_ = lean_ctor_get(v___x_1231_, 1);
v_v_1370_ = lean_ctor_get(v___x_1231_, 2);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1394_ == 0)
{
lean_object* v_unused_1395_; lean_object* v_unused_1396_; lean_object* v_unused_1397_; 
v_unused_1395_ = lean_ctor_get(v___x_1231_, 4);
lean_dec(v_unused_1395_);
v_unused_1396_ = lean_ctor_get(v___x_1231_, 3);
lean_dec(v_unused_1396_);
v_unused_1397_ = lean_ctor_get(v___x_1231_, 0);
lean_dec(v_unused_1397_);
v___x_1372_ = v___x_1231_;
v_isShared_1373_ = v_isSharedCheck_1394_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_v_1370_);
lean_inc(v_k_1369_);
lean_dec(v___x_1231_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1394_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v_k_1374_; lean_object* v_v_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1390_; 
v_k_1374_ = lean_ctor_get(v_r_1368_, 1);
v_v_1375_ = lean_ctor_get(v_r_1368_, 2);
v_isSharedCheck_1390_ = !lean_is_exclusive(v_r_1368_);
if (v_isSharedCheck_1390_ == 0)
{
lean_object* v_unused_1391_; lean_object* v_unused_1392_; lean_object* v_unused_1393_; 
v_unused_1391_ = lean_ctor_get(v_r_1368_, 4);
lean_dec(v_unused_1391_);
v_unused_1392_ = lean_ctor_get(v_r_1368_, 3);
lean_dec(v_unused_1392_);
v_unused_1393_ = lean_ctor_get(v_r_1368_, 0);
lean_dec(v_unused_1393_);
v___x_1377_ = v_r_1368_;
v_isShared_1378_ = v_isSharedCheck_1390_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_v_1375_);
lean_inc(v_k_1374_);
lean_dec(v_r_1368_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1390_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
v___x_1379_ = lean_unsigned_to_nat(3u);
v___x_1380_ = lean_unsigned_to_nat(1u);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 4, v_l_1330_);
lean_ctor_set(v___x_1377_, 3, v_l_1330_);
lean_ctor_set(v___x_1377_, 2, v_v_1370_);
lean_ctor_set(v___x_1377_, 1, v_k_1369_);
lean_ctor_set(v___x_1377_, 0, v___x_1380_);
v___x_1382_ = v___x_1377_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v_k_1369_);
lean_ctor_set(v_reuseFailAlloc_1389_, 2, v_v_1370_);
lean_ctor_set(v_reuseFailAlloc_1389_, 3, v_l_1330_);
lean_ctor_set(v_reuseFailAlloc_1389_, 4, v_l_1330_);
v___x_1382_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1384_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 4, v_l_1330_);
lean_ctor_set(v___x_1372_, 2, v_v_1224_);
lean_ctor_set(v___x_1372_, 1, v_k_1223_);
lean_ctor_set(v___x_1372_, 0, v___x_1380_);
v___x_1384_ = v___x_1372_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_l_1330_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v_l_1330_);
v___x_1384_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
lean_object* v___x_1386_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1384_);
lean_ctor_set(v___x_1228_, 3, v___x_1382_);
lean_ctor_set(v___x_1228_, 2, v_v_1375_);
lean_ctor_set(v___x_1228_, 1, v_k_1374_);
lean_ctor_set(v___x_1228_, 0, v___x_1379_);
v___x_1386_ = v___x_1228_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_k_1374_);
lean_ctor_set(v_reuseFailAlloc_1387_, 2, v_v_1375_);
lean_ctor_set(v_reuseFailAlloc_1387_, 3, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1387_, 4, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1398_ = lean_unsigned_to_nat(2u);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v_r_1368_);
lean_ctor_set(v___x_1228_, 3, v___x_1231_);
lean_ctor_set(v___x_1228_, 0, v___x_1398_);
v___x_1400_ = v___x_1228_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1401_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1401_, 3, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1401_, 4, v_r_1368_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
else
{
lean_object* v___x_1402_; lean_object* v___x_1404_; 
v___x_1402_ = lean_unsigned_to_nat(1u);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1231_);
lean_ctor_set(v___x_1228_, 3, v___x_1231_);
lean_ctor_set(v___x_1228_, 0, v___x_1402_);
v___x_1404_ = v___x_1228_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1402_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1405_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1405_, 3, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1405_, 4, v___x_1231_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
case 1:
{
lean_object* v___x_1407_; 
lean_dec(v_v_1224_);
lean_dec(v_k_1223_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 2, v_v_1220_);
lean_ctor_set(v___x_1228_, 1, v_k_1219_);
v___x_1407_ = v___x_1228_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_size_1222_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_k_1219_);
lean_ctor_set(v_reuseFailAlloc_1408_, 2, v_v_1220_);
lean_ctor_set(v_reuseFailAlloc_1408_, 3, v_l_1225_);
lean_ctor_set(v_reuseFailAlloc_1408_, 4, v_r_1226_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
default: 
{
lean_object* v___x_1409_; 
lean_dec(v_size_1222_);
v___x_1409_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(v_k_1219_, v_v_1220_, v_r_1226_);
if (lean_obj_tag(v_l_1225_) == 0)
{
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_size_1410_; lean_object* v_size_1411_; lean_object* v_k_1412_; lean_object* v_v_1413_; lean_object* v_l_1414_; lean_object* v_r_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v_size_1410_ = lean_ctor_get(v_l_1225_, 0);
v_size_1411_ = lean_ctor_get(v___x_1409_, 0);
v_k_1412_ = lean_ctor_get(v___x_1409_, 1);
v_v_1413_ = lean_ctor_get(v___x_1409_, 2);
v_l_1414_ = lean_ctor_get(v___x_1409_, 3);
lean_inc(v_l_1414_);
v_r_1415_ = lean_ctor_get(v___x_1409_, 4);
v___x_1416_ = lean_unsigned_to_nat(3u);
v___x_1417_ = lean_nat_mul(v___x_1416_, v_size_1410_);
v___x_1418_ = lean_nat_dec_lt(v___x_1417_, v_size_1411_);
lean_dec(v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
lean_dec(v_l_1414_);
v___x_1419_ = lean_unsigned_to_nat(1u);
v___x_1420_ = lean_nat_add(v___x_1419_, v_size_1410_);
v___x_1421_ = lean_nat_add(v___x_1420_, v_size_1411_);
lean_dec(v___x_1420_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1409_);
lean_ctor_set(v___x_1228_, 0, v___x_1421_);
v___x_1423_ = v___x_1228_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1424_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1424_, 3, v_l_1225_);
lean_ctor_set(v_reuseFailAlloc_1424_, 4, v___x_1409_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
else
{
lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1494_; 
lean_inc(v_r_1415_);
lean_inc(v_v_1413_);
lean_inc(v_k_1412_);
lean_inc(v_size_1411_);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1494_ == 0)
{
lean_object* v_unused_1495_; lean_object* v_unused_1496_; lean_object* v_unused_1497_; lean_object* v_unused_1498_; lean_object* v_unused_1499_; 
v_unused_1495_ = lean_ctor_get(v___x_1409_, 4);
lean_dec(v_unused_1495_);
v_unused_1496_ = lean_ctor_get(v___x_1409_, 3);
lean_dec(v_unused_1496_);
v_unused_1497_ = lean_ctor_get(v___x_1409_, 2);
lean_dec(v_unused_1497_);
v_unused_1498_ = lean_ctor_get(v___x_1409_, 1);
lean_dec(v_unused_1498_);
v_unused_1499_ = lean_ctor_get(v___x_1409_, 0);
lean_dec(v_unused_1499_);
v___x_1426_ = v___x_1409_;
v_isShared_1427_ = v_isSharedCheck_1494_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v___x_1409_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1494_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
if (lean_obj_tag(v_l_1414_) == 0)
{
if (lean_obj_tag(v_r_1415_) == 0)
{
lean_object* v_size_1428_; lean_object* v_k_1429_; lean_object* v_v_1430_; lean_object* v_l_1431_; lean_object* v_r_1432_; lean_object* v_size_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; 
v_size_1428_ = lean_ctor_get(v_l_1414_, 0);
v_k_1429_ = lean_ctor_get(v_l_1414_, 1);
v_v_1430_ = lean_ctor_get(v_l_1414_, 2);
v_l_1431_ = lean_ctor_get(v_l_1414_, 3);
v_r_1432_ = lean_ctor_get(v_l_1414_, 4);
v_size_1433_ = lean_ctor_get(v_r_1415_, 0);
v___x_1434_ = lean_unsigned_to_nat(2u);
v___x_1435_ = lean_nat_mul(v___x_1434_, v_size_1433_);
v___x_1436_ = lean_nat_dec_lt(v_size_1428_, v___x_1435_);
lean_dec(v___x_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1465_; 
lean_inc(v_r_1432_);
lean_inc(v_l_1431_);
lean_inc(v_v_1430_);
lean_inc(v_k_1429_);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_l_1414_);
if (v_isSharedCheck_1465_ == 0)
{
lean_object* v_unused_1466_; lean_object* v_unused_1467_; lean_object* v_unused_1468_; lean_object* v_unused_1469_; lean_object* v_unused_1470_; 
v_unused_1466_ = lean_ctor_get(v_l_1414_, 4);
lean_dec(v_unused_1466_);
v_unused_1467_ = lean_ctor_get(v_l_1414_, 3);
lean_dec(v_unused_1467_);
v_unused_1468_ = lean_ctor_get(v_l_1414_, 2);
lean_dec(v_unused_1468_);
v_unused_1469_ = lean_ctor_get(v_l_1414_, 1);
lean_dec(v_unused_1469_);
v_unused_1470_ = lean_ctor_get(v_l_1414_, 0);
lean_dec(v_unused_1470_);
v___x_1438_ = v_l_1414_;
v_isShared_1439_ = v_isSharedCheck_1465_;
goto v_resetjp_1437_;
}
else
{
lean_dec(v_l_1414_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1465_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1455_; 
v___x_1440_ = lean_unsigned_to_nat(1u);
v___x_1441_ = lean_nat_add(v___x_1440_, v_size_1410_);
v___x_1442_ = lean_nat_add(v___x_1441_, v_size_1411_);
lean_dec(v_size_1411_);
if (lean_obj_tag(v_l_1431_) == 0)
{
lean_object* v_size_1463_; 
v_size_1463_ = lean_ctor_get(v_l_1431_, 0);
lean_inc(v_size_1463_);
v___y_1455_ = v_size_1463_;
goto v___jp_1454_;
}
else
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_unsigned_to_nat(0u);
v___y_1455_ = v___x_1464_;
goto v___jp_1454_;
}
v___jp_1443_:
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1447_ = lean_nat_add(v___y_1444_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec(v___y_1444_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 4, v_r_1415_);
lean_ctor_set(v___x_1438_, 3, v_r_1432_);
lean_ctor_set(v___x_1438_, 2, v_v_1413_);
lean_ctor_set(v___x_1438_, 1, v_k_1412_);
lean_ctor_set(v___x_1438_, 0, v___x_1447_);
v___x_1449_ = v___x_1438_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1453_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1453_, 3, v_r_1432_);
lean_ctor_set(v_reuseFailAlloc_1453_, 4, v_r_1415_);
v___x_1449_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1451_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 4, v___x_1449_);
lean_ctor_set(v___x_1426_, 3, v___y_1445_);
lean_ctor_set(v___x_1426_, 2, v_v_1430_);
lean_ctor_set(v___x_1426_, 1, v_k_1429_);
lean_ctor_set(v___x_1426_, 0, v___x_1442_);
v___x_1451_ = v___x_1426_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v_k_1429_);
lean_ctor_set(v_reuseFailAlloc_1452_, 2, v_v_1430_);
lean_ctor_set(v_reuseFailAlloc_1452_, 3, v___y_1445_);
lean_ctor_set(v_reuseFailAlloc_1452_, 4, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
v___jp_1454_:
{
lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1456_ = lean_nat_add(v___x_1441_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec(v___x_1441_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v_l_1431_);
lean_ctor_set(v___x_1228_, 0, v___x_1456_);
v___x_1458_ = v___x_1228_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1456_);
lean_ctor_set(v_reuseFailAlloc_1462_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1462_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1462_, 3, v_l_1225_);
lean_ctor_set(v_reuseFailAlloc_1462_, 4, v_l_1431_);
v___x_1458_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_nat_add(v___x_1440_, v_size_1433_);
if (lean_obj_tag(v_r_1432_) == 0)
{
lean_object* v_size_1460_; 
v_size_1460_ = lean_ctor_get(v_r_1432_, 0);
lean_inc(v_size_1460_);
v___y_1444_ = v___x_1459_;
v___y_1445_ = v___x_1458_;
v___y_1446_ = v_size_1460_;
goto v___jp_1443_;
}
else
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_unsigned_to_nat(0u);
v___y_1444_ = v___x_1459_;
v___y_1445_ = v___x_1458_;
v___y_1446_ = v___x_1461_;
goto v___jp_1443_;
}
}
}
}
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1476_; 
lean_del_object(v___x_1228_);
v___x_1471_ = lean_unsigned_to_nat(1u);
v___x_1472_ = lean_nat_add(v___x_1471_, v_size_1410_);
v___x_1473_ = lean_nat_add(v___x_1472_, v_size_1411_);
lean_dec(v_size_1411_);
v___x_1474_ = lean_nat_add(v___x_1472_, v_size_1428_);
lean_dec(v___x_1472_);
lean_inc_ref(v_l_1225_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 4, v_l_1414_);
lean_ctor_set(v___x_1426_, 3, v_l_1225_);
lean_ctor_set(v___x_1426_, 2, v_v_1224_);
lean_ctor_set(v___x_1426_, 1, v_k_1223_);
lean_ctor_set(v___x_1426_, 0, v___x_1474_);
v___x_1476_ = v___x_1426_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1474_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1489_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1489_, 3, v_l_1225_);
lean_ctor_set(v_reuseFailAlloc_1489_, 4, v_l_1414_);
v___x_1476_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
v_isSharedCheck_1483_ = !lean_is_exclusive(v_l_1225_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; lean_object* v_unused_1485_; lean_object* v_unused_1486_; lean_object* v_unused_1487_; lean_object* v_unused_1488_; 
v_unused_1484_ = lean_ctor_get(v_l_1225_, 4);
lean_dec(v_unused_1484_);
v_unused_1485_ = lean_ctor_get(v_l_1225_, 3);
lean_dec(v_unused_1485_);
v_unused_1486_ = lean_ctor_get(v_l_1225_, 2);
lean_dec(v_unused_1486_);
v_unused_1487_ = lean_ctor_get(v_l_1225_, 1);
lean_dec(v_unused_1487_);
v_unused_1488_ = lean_ctor_get(v_l_1225_, 0);
lean_dec(v_unused_1488_);
v___x_1478_ = v_l_1225_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_dec(v_l_1225_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 4, v_r_1415_);
lean_ctor_set(v___x_1478_, 3, v___x_1476_);
lean_ctor_set(v___x_1478_, 2, v_v_1413_);
lean_ctor_set(v___x_1478_, 1, v_k_1412_);
lean_ctor_set(v___x_1478_, 0, v___x_1473_);
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1473_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1482_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1482_, 3, v___x_1476_);
lean_ctor_set(v_reuseFailAlloc_1482_, 4, v_r_1415_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
else
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_dec_ref_known(v_l_1414_, 5);
lean_del_object(v___x_1426_);
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
lean_dec(v_size_1411_);
lean_dec_ref_known(v_l_1225_, 5);
lean_del_object(v___x_1228_);
lean_dec(v_v_1224_);
lean_dec(v_k_1223_);
v___x_1490_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__7);
v___x_1491_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(v___x_1490_);
return v___x_1491_;
}
}
else
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_del_object(v___x_1426_);
lean_dec(v_r_1415_);
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
lean_dec(v_size_1411_);
lean_dec_ref_known(v_l_1225_, 5);
lean_del_object(v___x_1228_);
lean_dec(v_v_1224_);
lean_dec(v_k_1223_);
v___x_1492_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg___closed__8);
v___x_1493_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(v___x_1492_);
return v___x_1493_;
}
}
}
}
else
{
lean_object* v_size_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1504_; 
v_size_1500_ = lean_ctor_get(v_l_1225_, 0);
v___x_1501_ = lean_unsigned_to_nat(1u);
v___x_1502_ = lean_nat_add(v___x_1501_, v_size_1500_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1409_);
lean_ctor_set(v___x_1228_, 0, v___x_1502_);
v___x_1504_ = v___x_1228_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1502_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1505_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1505_, 3, v_l_1225_);
lean_ctor_set(v_reuseFailAlloc_1505_, 4, v___x_1409_);
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
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_l_1506_; 
v_l_1506_ = lean_ctor_get(v___x_1409_, 3);
lean_inc(v_l_1506_);
if (lean_obj_tag(v_l_1506_) == 0)
{
lean_object* v_r_1507_; 
v_r_1507_ = lean_ctor_get(v___x_1409_, 4);
lean_inc(v_r_1507_);
if (lean_obj_tag(v_r_1507_) == 0)
{
lean_object* v_size_1508_; lean_object* v_k_1509_; lean_object* v_v_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1524_; 
v_size_1508_ = lean_ctor_get(v___x_1409_, 0);
v_k_1509_ = lean_ctor_get(v___x_1409_, 1);
v_v_1510_ = lean_ctor_get(v___x_1409_, 2);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1524_ == 0)
{
lean_object* v_unused_1525_; lean_object* v_unused_1526_; 
v_unused_1525_ = lean_ctor_get(v___x_1409_, 4);
lean_dec(v_unused_1525_);
v_unused_1526_ = lean_ctor_get(v___x_1409_, 3);
lean_dec(v_unused_1526_);
v___x_1512_ = v___x_1409_;
v_isShared_1513_ = v_isSharedCheck_1524_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_v_1510_);
lean_inc(v_k_1509_);
lean_inc(v_size_1508_);
lean_dec(v___x_1409_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1524_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v_size_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1519_; 
v_size_1514_ = lean_ctor_get(v_l_1506_, 0);
v___x_1515_ = lean_unsigned_to_nat(1u);
v___x_1516_ = lean_nat_add(v___x_1515_, v_size_1508_);
lean_dec(v_size_1508_);
v___x_1517_ = lean_nat_add(v___x_1515_, v_size_1514_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 4, v_l_1506_);
lean_ctor_set(v___x_1512_, 3, v_l_1225_);
lean_ctor_set(v___x_1512_, 2, v_v_1224_);
lean_ctor_set(v___x_1512_, 1, v_k_1223_);
lean_ctor_set(v___x_1512_, 0, v___x_1517_);
v___x_1519_ = v___x_1512_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1523_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1523_, 3, v_l_1225_);
lean_ctor_set(v_reuseFailAlloc_1523_, 4, v_l_1506_);
v___x_1519_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1521_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v_r_1507_);
lean_ctor_set(v___x_1228_, 3, v___x_1519_);
lean_ctor_set(v___x_1228_, 2, v_v_1510_);
lean_ctor_set(v___x_1228_, 1, v_k_1509_);
lean_ctor_set(v___x_1228_, 0, v___x_1516_);
v___x_1521_ = v___x_1228_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1516_);
lean_ctor_set(v_reuseFailAlloc_1522_, 1, v_k_1509_);
lean_ctor_set(v_reuseFailAlloc_1522_, 2, v_v_1510_);
lean_ctor_set(v_reuseFailAlloc_1522_, 3, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1522_, 4, v_r_1507_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
else
{
lean_object* v_k_1527_; lean_object* v_v_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1552_; 
v_k_1527_ = lean_ctor_get(v___x_1409_, 1);
v_v_1528_ = lean_ctor_get(v___x_1409_, 2);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1552_ == 0)
{
lean_object* v_unused_1553_; lean_object* v_unused_1554_; lean_object* v_unused_1555_; 
v_unused_1553_ = lean_ctor_get(v___x_1409_, 4);
lean_dec(v_unused_1553_);
v_unused_1554_ = lean_ctor_get(v___x_1409_, 3);
lean_dec(v_unused_1554_);
v_unused_1555_ = lean_ctor_get(v___x_1409_, 0);
lean_dec(v_unused_1555_);
v___x_1530_ = v___x_1409_;
v_isShared_1531_ = v_isSharedCheck_1552_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_v_1528_);
lean_inc(v_k_1527_);
lean_dec(v___x_1409_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1552_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v_k_1532_; lean_object* v_v_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1548_; 
v_k_1532_ = lean_ctor_get(v_l_1506_, 1);
v_v_1533_ = lean_ctor_get(v_l_1506_, 2);
v_isSharedCheck_1548_ = !lean_is_exclusive(v_l_1506_);
if (v_isSharedCheck_1548_ == 0)
{
lean_object* v_unused_1549_; lean_object* v_unused_1550_; lean_object* v_unused_1551_; 
v_unused_1549_ = lean_ctor_get(v_l_1506_, 4);
lean_dec(v_unused_1549_);
v_unused_1550_ = lean_ctor_get(v_l_1506_, 3);
lean_dec(v_unused_1550_);
v_unused_1551_ = lean_ctor_get(v_l_1506_, 0);
lean_dec(v_unused_1551_);
v___x_1535_ = v_l_1506_;
v_isShared_1536_ = v_isSharedCheck_1548_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_v_1533_);
lean_inc(v_k_1532_);
lean_dec(v_l_1506_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1548_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___x_1537_ = lean_unsigned_to_nat(3u);
v___x_1538_ = lean_unsigned_to_nat(1u);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 4, v_r_1507_);
lean_ctor_set(v___x_1535_, 3, v_r_1507_);
lean_ctor_set(v___x_1535_, 2, v_v_1224_);
lean_ctor_set(v___x_1535_, 1, v_k_1223_);
lean_ctor_set(v___x_1535_, 0, v___x_1538_);
v___x_1540_ = v___x_1535_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1547_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1547_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1547_, 3, v_r_1507_);
lean_ctor_set(v_reuseFailAlloc_1547_, 4, v_r_1507_);
v___x_1540_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
lean_object* v___x_1542_; 
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 3, v_r_1507_);
lean_ctor_set(v___x_1530_, 0, v___x_1538_);
v___x_1542_ = v___x_1530_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_k_1527_);
lean_ctor_set(v_reuseFailAlloc_1546_, 2, v_v_1528_);
lean_ctor_set(v_reuseFailAlloc_1546_, 3, v_r_1507_);
lean_ctor_set(v_reuseFailAlloc_1546_, 4, v_r_1507_);
v___x_1542_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1544_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1542_);
lean_ctor_set(v___x_1228_, 3, v___x_1540_);
lean_ctor_set(v___x_1228_, 2, v_v_1533_);
lean_ctor_set(v___x_1228_, 1, v_k_1532_);
lean_ctor_set(v___x_1228_, 0, v___x_1537_);
v___x_1544_ = v___x_1228_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v_k_1532_);
lean_ctor_set(v_reuseFailAlloc_1545_, 2, v_v_1533_);
lean_ctor_set(v_reuseFailAlloc_1545_, 3, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1545_, 4, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1556_; 
v_r_1556_ = lean_ctor_get(v___x_1409_, 4);
lean_inc(v_r_1556_);
if (lean_obj_tag(v_r_1556_) == 0)
{
lean_object* v_k_1557_; lean_object* v_v_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1570_; 
v_k_1557_ = lean_ctor_get(v___x_1409_, 1);
v_v_1558_ = lean_ctor_get(v___x_1409_, 2);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1570_ == 0)
{
lean_object* v_unused_1571_; lean_object* v_unused_1572_; lean_object* v_unused_1573_; 
v_unused_1571_ = lean_ctor_get(v___x_1409_, 4);
lean_dec(v_unused_1571_);
v_unused_1572_ = lean_ctor_get(v___x_1409_, 3);
lean_dec(v_unused_1572_);
v_unused_1573_ = lean_ctor_get(v___x_1409_, 0);
lean_dec(v_unused_1573_);
v___x_1560_ = v___x_1409_;
v_isShared_1561_ = v_isSharedCheck_1570_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_v_1558_);
lean_inc(v_k_1557_);
lean_dec(v___x_1409_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1570_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1565_; 
v___x_1562_ = lean_unsigned_to_nat(3u);
v___x_1563_ = lean_unsigned_to_nat(1u);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 4, v_l_1506_);
lean_ctor_set(v___x_1560_, 2, v_v_1224_);
lean_ctor_set(v___x_1560_, 1, v_k_1223_);
lean_ctor_set(v___x_1560_, 0, v___x_1563_);
v___x_1565_ = v___x_1560_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1569_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1569_, 3, v_l_1506_);
lean_ctor_set(v_reuseFailAlloc_1569_, 4, v_l_1506_);
v___x_1565_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1567_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v_r_1556_);
lean_ctor_set(v___x_1228_, 3, v___x_1565_);
lean_ctor_set(v___x_1228_, 2, v_v_1558_);
lean_ctor_set(v___x_1228_, 1, v_k_1557_);
lean_ctor_set(v___x_1228_, 0, v___x_1562_);
v___x_1567_ = v___x_1228_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1562_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1568_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1568_, 3, v___x_1565_);
lean_ctor_set(v_reuseFailAlloc_1568_, 4, v_r_1556_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
else
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = lean_unsigned_to_nat(2u);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1409_);
lean_ctor_set(v___x_1228_, 3, v_r_1556_);
lean_ctor_set(v___x_1228_, 0, v___x_1574_);
v___x_1576_ = v___x_1228_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1577_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1577_, 3, v_r_1556_);
lean_ctor_set(v_reuseFailAlloc_1577_, 4, v___x_1409_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
else
{
lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1578_ = lean_unsigned_to_nat(1u);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 4, v___x_1409_);
lean_ctor_set(v___x_1228_, 3, v___x_1409_);
lean_ctor_set(v___x_1228_, 0, v___x_1578_);
v___x_1580_ = v___x_1228_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1578_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1581_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1581_, 3, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1581_, 4, v___x_1409_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = lean_unsigned_to_nat(1u);
v___x_1584_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
lean_ctor_set(v___x_1584_, 1, v_k_1219_);
lean_ctor_set(v___x_1584_, 2, v_v_1220_);
lean_ctor_set(v___x_1584_, 3, v_t_1221_);
lean_ctor_set(v___x_1584_, 4, v_t_1221_);
return v___x_1584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_objectCore(lean_object* v_depth_1604_, lean_object* v_kvs_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_fst_1607_; lean_object* v_snd_1608_; lean_object* v___x_1609_; uint8_t v_decide_1610_; 
v_fst_1607_ = lean_ctor_get(v_a_1606_, 0);
v_snd_1608_ = lean_ctor_get(v_a_1606_, 1);
v___x_1609_ = lean_string_utf8_byte_size(v_fst_1607_);
v_decide_1610_ = lean_nat_dec_eq(v_snd_1608_, v___x_1609_);
if (v_decide_1610_ == 0)
{
uint32_t v___x_1611_; uint32_t v___x_1612_; uint8_t v___x_1613_; 
v___x_1611_ = lean_string_utf8_get_fast(v_fst_1607_, v_snd_1608_);
v___x_1612_ = 34;
v___x_1613_ = lean_uint32_dec_eq(v___x_1611_, v___x_1612_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
lean_dec(v_kvs_1605_);
v___x_1614_ = ((lean_object*)(l_Lean_Json_Parser_objectCore___closed__1));
v___x_1615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_a_1606_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
return v___x_1615_;
}
else
{
lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1731_; 
lean_inc(v_snd_1608_);
lean_inc(v_fst_1607_);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_a_1606_);
if (v_isSharedCheck_1731_ == 0)
{
lean_object* v_unused_1732_; lean_object* v_unused_1733_; 
v_unused_1732_ = lean_ctor_get(v_a_1606_, 1);
lean_dec(v_unused_1732_);
v_unused_1733_ = lean_ctor_get(v_a_1606_, 0);
lean_dec(v_unused_1733_);
v___x_1617_ = v_a_1606_;
v_isShared_1618_ = v_isSharedCheck_1731_;
goto v_resetjp_1616_;
}
else
{
lean_dec(v_a_1606_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1731_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1621_; 
v___x_1619_ = lean_string_utf8_next_fast(v_fst_1607_, v_snd_1608_);
lean_dec(v_snd_1608_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 1, v___x_1619_);
v___x_1621_ = v___x_1617_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_fst_1607_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__0));
v___x_1623_ = l_Lean_Json_Parser_strCore(v___x_1622_, v___x_1621_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_pos_1624_; lean_object* v_res_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1720_; 
v_pos_1624_ = lean_ctor_get(v___x_1623_, 0);
v_res_1625_ = lean_ctor_get(v___x_1623_, 1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1627_ = v___x_1623_;
v_isShared_1628_ = v_isSharedCheck_1720_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_res_1625_);
lean_inc(v_pos_1624_);
lean_dec(v___x_1623_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1720_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v_fst_1629_; lean_object* v_snd_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1719_; 
v_fst_1629_ = lean_ctor_get(v_pos_1624_, 0);
v_snd_1630_ = lean_ctor_get(v_pos_1624_, 1);
v_isSharedCheck_1719_ = !lean_is_exclusive(v_pos_1624_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1632_ = v_pos_1624_;
v_isShared_1633_ = v_isSharedCheck_1719_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_snd_1630_);
lean_inc(v_fst_1629_);
lean_dec(v_pos_1624_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1719_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1634_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1629_, v_snd_1630_);
lean_inc(v___x_1634_);
lean_inc(v_fst_1629_);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 1, v___x_1634_);
v___x_1636_ = v___x_1632_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_fst_1629_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
uint8_t v___x_1637_; 
v___x_1637_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg(v_res_1625_, v_kvs_1605_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; uint8_t v_decide_1639_; 
v___x_1638_ = lean_string_utf8_byte_size(v_fst_1629_);
v_decide_1639_ = lean_nat_dec_eq(v___x_1634_, v___x_1638_);
if (v_decide_1639_ == 0)
{
uint32_t v___x_1640_; uint32_t v___x_1641_; uint8_t v___x_1642_; 
v___x_1640_ = lean_string_utf8_get_fast(v_fst_1629_, v___x_1634_);
v___x_1641_ = 58;
v___x_1642_ = lean_uint32_dec_eq(v___x_1640_, v___x_1641_);
if (v___x_1642_ == 0)
{
lean_object* v___x_1643_; lean_object* v___x_1645_; 
lean_dec(v___x_1634_);
lean_dec(v_fst_1629_);
lean_dec(v_res_1625_);
lean_dec(v_kvs_1605_);
v___x_1643_ = ((lean_object*)(l_Lean_Json_Parser_objectCore___closed__3));
if (v_isShared_1628_ == 0)
{
lean_ctor_set_tag(v___x_1627_, 1);
lean_ctor_set(v___x_1627_, 1, v___x_1643_);
lean_ctor_set(v___x_1627_, 0, v___x_1636_);
v___x_1645_ = v___x_1627_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
else
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_dec_ref(v___x_1636_);
lean_del_object(v___x_1627_);
v___x_1647_ = lean_string_utf8_next_fast(v_fst_1629_, v___x_1634_);
lean_dec(v___x_1634_);
v___x_1648_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1629_, v___x_1647_);
v___x_1649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1649_, 0, v_fst_1629_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
v___x_1650_ = l_Lean_Json_Parser_anyCore(v_depth_1604_, v___x_1649_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_pos_1651_; lean_object* v_res_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1697_; 
v_pos_1651_ = lean_ctor_get(v___x_1650_, 0);
v_res_1652_ = lean_ctor_get(v___x_1650_, 1);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1654_ = v___x_1650_;
v_isShared_1655_ = v_isSharedCheck_1697_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_res_1652_);
lean_inc(v_pos_1651_);
lean_dec(v___x_1650_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1697_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v_fst_1656_; lean_object* v_snd_1657_; lean_object* v___x_1658_; uint8_t v_decide_1659_; 
v_fst_1656_ = lean_ctor_get(v_pos_1651_, 0);
v_snd_1657_ = lean_ctor_get(v_pos_1651_, 1);
v___x_1658_ = lean_string_utf8_byte_size(v_fst_1656_);
v_decide_1659_ = lean_nat_dec_eq(v_snd_1657_, v___x_1658_);
if (v_decide_1659_ == 0)
{
lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1690_; 
lean_inc(v_snd_1657_);
lean_inc(v_fst_1656_);
v_isSharedCheck_1690_ = !lean_is_exclusive(v_pos_1651_);
if (v_isSharedCheck_1690_ == 0)
{
lean_object* v_unused_1691_; lean_object* v_unused_1692_; 
v_unused_1691_ = lean_ctor_get(v_pos_1651_, 1);
lean_dec(v_unused_1691_);
v_unused_1692_ = lean_ctor_get(v_pos_1651_, 0);
lean_dec(v_unused_1692_);
v___x_1661_ = v_pos_1651_;
v_isShared_1662_ = v_isSharedCheck_1690_;
goto v_resetjp_1660_;
}
else
{
lean_dec(v_pos_1651_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1690_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
uint32_t v___x_1663_; lean_object* v___x_1664_; uint32_t v___x_1665_; uint8_t v___x_1666_; 
v___x_1663_ = lean_string_utf8_get_fast(v_fst_1656_, v_snd_1657_);
v___x_1664_ = lean_string_utf8_next_fast(v_fst_1656_, v_snd_1657_);
lean_dec(v_snd_1657_);
v___x_1665_ = 125;
v___x_1666_ = lean_uint32_dec_eq(v___x_1663_, v___x_1665_);
if (v___x_1666_ == 0)
{
uint32_t v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = 44;
v___x_1668_ = lean_uint32_dec_eq(v___x_1663_, v___x_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1670_; 
lean_dec(v_res_1652_);
lean_dec(v_res_1625_);
lean_dec(v_kvs_1605_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1664_);
v___x_1670_ = v___x_1661_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_fst_1656_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v___x_1664_);
v___x_1670_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
lean_object* v___x_1671_; lean_object* v___x_1673_; 
v___x_1671_ = ((lean_object*)(l_Lean_Json_Parser_objectCore___closed__5));
if (v_isShared_1655_ == 0)
{
lean_ctor_set_tag(v___x_1654_, 1);
lean_ctor_set(v___x_1654_, 1, v___x_1671_);
lean_ctor_set(v___x_1654_, 0, v___x_1670_);
v___x_1673_ = v___x_1654_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1670_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1678_; 
lean_del_object(v___x_1654_);
v___x_1676_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1656_, v___x_1664_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1676_);
v___x_1678_ = v___x_1661_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_fst_1656_);
lean_ctor_set(v_reuseFailAlloc_1681_, 1, v___x_1676_);
v___x_1678_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(v_res_1625_, v_res_1652_, v_kvs_1605_);
v_kvs_1605_ = v___x_1679_;
v_a_1606_ = v___x_1678_;
goto _start;
}
}
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1656_, v___x_1664_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1682_);
v___x_1684_ = v___x_1661_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_fst_1656_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1685_; lean_object* v___x_1687_; 
v___x_1685_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(v_res_1625_, v_res_1652_, v_kvs_1605_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 1, v___x_1685_);
lean_ctor_set(v___x_1654_, 0, v___x_1684_);
v___x_1687_ = v___x_1654_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1688_, 1, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
lean_dec(v_res_1652_);
lean_dec(v_res_1625_);
lean_dec(v_kvs_1605_);
v___x_1693_ = lean_box(0);
if (v_isShared_1655_ == 0)
{
lean_ctor_set_tag(v___x_1654_, 1);
lean_ctor_set(v___x_1654_, 1, v___x_1693_);
v___x_1695_ = v___x_1654_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_pos_1651_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
else
{
lean_object* v_pos_1698_; lean_object* v_err_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
lean_dec(v_res_1625_);
lean_dec(v_kvs_1605_);
v_pos_1698_ = lean_ctor_get(v___x_1650_, 0);
v_err_1699_ = lean_ctor_get(v___x_1650_, 1);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1650_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_err_1699_);
lean_inc(v_pos_1698_);
lean_dec(v___x_1650_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_pos_1698_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v_err_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
lean_dec(v___x_1634_);
lean_dec(v_fst_1629_);
lean_dec(v_res_1625_);
lean_dec(v_kvs_1605_);
v___x_1707_ = lean_box(0);
if (v_isShared_1628_ == 0)
{
lean_ctor_set_tag(v___x_1627_, 1);
lean_ctor_set(v___x_1627_, 1, v___x_1707_);
lean_ctor_set(v___x_1627_, 0, v___x_1636_);
v___x_1709_ = v___x_1627_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
else
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1716_; 
lean_dec(v___x_1634_);
lean_dec(v_fst_1629_);
lean_dec(v_kvs_1605_);
v___x_1711_ = ((lean_object*)(l_Lean_Json_Parser_objectCore___closed__6));
v___x_1712_ = l_String_quote(v_res_1625_);
v___x_1713_ = lean_string_append(v___x_1711_, v___x_1712_);
lean_dec_ref(v___x_1712_);
v___x_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set_tag(v___x_1627_, 1);
lean_ctor_set(v___x_1627_, 1, v___x_1714_);
lean_ctor_set(v___x_1627_, 0, v___x_1636_);
v___x_1716_ = v___x_1627_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v___x_1714_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1721_; lean_object* v_err_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_kvs_1605_);
v_pos_1721_ = lean_ctor_get(v___x_1623_, 0);
v_err_1722_ = lean_ctor_get(v___x_1623_, 1);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1623_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_err_1722_);
lean_inc(v_pos_1721_);
lean_dec(v___x_1623_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_pos_1721_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v_err_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_dec(v_kvs_1605_);
v___x_1734_ = lean_box(0);
v___x_1735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1735_, 0, v_a_1606_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_anyCore(lean_object* v_depth_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_fst_1781_; lean_object* v_snd_1782_; lean_object* v___x_1783_; uint8_t v_decide_1784_; 
v_fst_1781_ = lean_ctor_get(v_a_1746_, 0);
v_snd_1782_ = lean_ctor_get(v_a_1746_, 1);
v___x_1783_ = lean_string_utf8_byte_size(v_fst_1781_);
v_decide_1784_ = lean_nat_dec_eq(v_snd_1782_, v___x_1783_);
if (v_decide_1784_ == 0)
{
uint32_t v___x_1785_; uint32_t v___x_2035_; uint8_t v___x_2036_; 
v___x_1785_ = lean_string_utf8_get_fast(v_fst_1781_, v_snd_1782_);
v___x_2035_ = 91;
v___x_2036_ = lean_uint32_dec_eq(v___x_1785_, v___x_2035_);
if (v___x_2036_ == 0)
{
uint32_t v___x_2037_; uint8_t v___x_2038_; 
v___x_2037_ = 123;
v___x_2038_ = lean_uint32_dec_eq(v___x_1785_, v___x_2037_);
if (v___x_2038_ == 0)
{
goto v___jp_1786_;
}
else
{
goto v___jp_2030_;
}
}
else
{
goto v___jp_2030_;
}
v___jp_1786_:
{
uint32_t v___x_1787_; uint8_t v___x_1788_; 
v___x_1787_ = 91;
v___x_1788_ = lean_uint32_dec_eq(v___x_1785_, v___x_1787_);
if (v___x_1788_ == 0)
{
uint32_t v___x_1789_; uint8_t v___x_1790_; 
v___x_1789_ = 123;
v___x_1790_ = lean_uint32_dec_eq(v___x_1785_, v___x_1789_);
if (v___x_1790_ == 0)
{
uint32_t v___x_1791_; uint8_t v___x_1792_; 
v___x_1791_ = 34;
v___x_1792_ = lean_uint32_dec_eq(v___x_1785_, v___x_1791_);
if (v___x_1792_ == 0)
{
uint32_t v___x_1793_; uint8_t v___x_1794_; 
v___x_1793_ = 102;
v___x_1794_ = lean_uint32_dec_eq(v___x_1785_, v___x_1793_);
if (v___x_1794_ == 0)
{
uint32_t v___x_1795_; uint8_t v___x_1796_; 
v___x_1795_ = 116;
v___x_1796_ = lean_uint32_dec_eq(v___x_1785_, v___x_1795_);
if (v___x_1796_ == 0)
{
uint32_t v___x_1797_; uint8_t v___x_1798_; 
v___x_1797_ = 110;
v___x_1798_ = lean_uint32_dec_eq(v___x_1785_, v___x_1797_);
if (v___x_1798_ == 0)
{
uint32_t v___x_1799_; uint8_t v___x_1800_; 
v___x_1799_ = 45;
v___x_1800_ = lean_uint32_dec_eq(v___x_1785_, v___x_1799_);
if (v___x_1800_ == 0)
{
uint32_t v___x_1801_; uint8_t v___x_1802_; 
v___x_1801_ = 48;
v___x_1802_ = lean_uint32_dec_le(v___x_1801_, v___x_1785_);
if (v___x_1802_ == 0)
{
goto v___jp_1778_;
}
else
{
uint32_t v___x_1803_; uint8_t v___x_1804_; 
v___x_1803_ = 57;
v___x_1804_ = lean_uint32_dec_le(v___x_1785_, v___x_1803_);
if (v___x_1804_ == 0)
{
goto v___jp_1778_;
}
else
{
goto v___jp_1747_;
}
}
}
else
{
goto v___jp_1747_;
}
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__2));
v___x_1806_ = l_Std_Internal_Parsec_String_pstring(v___x_1805_, v_a_1746_);
if (lean_obj_tag(v___x_1806_) == 0)
{
lean_object* v_pos_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1825_; 
v_pos_1807_ = lean_ctor_get(v___x_1806_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1806_);
if (v_isSharedCheck_1825_ == 0)
{
lean_object* v_unused_1826_; 
v_unused_1826_ = lean_ctor_get(v___x_1806_, 1);
lean_dec(v_unused_1826_);
v___x_1809_ = v___x_1806_;
v_isShared_1810_ = v_isSharedCheck_1825_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_pos_1807_);
lean_dec(v___x_1806_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1825_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v_fst_1811_; lean_object* v_snd_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1824_; 
v_fst_1811_ = lean_ctor_get(v_pos_1807_, 0);
v_snd_1812_ = lean_ctor_get(v_pos_1807_, 1);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_pos_1807_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1814_ = v_pos_1807_;
v_isShared_1815_ = v_isSharedCheck_1824_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_snd_1812_);
lean_inc(v_fst_1811_);
lean_dec(v_pos_1807_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1824_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1816_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1811_, v_snd_1812_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 1, v___x_1816_);
v___x_1818_ = v___x_1814_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_fst_1811_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1819_ = lean_box(0);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 1, v___x_1819_);
lean_ctor_set(v___x_1809_, 0, v___x_1818_);
v___x_1821_ = v___x_1809_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v___x_1819_);
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
else
{
lean_object* v_pos_1827_; lean_object* v_err_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
v_pos_1827_ = lean_ctor_get(v___x_1806_, 0);
v_err_1828_ = lean_ctor_get(v___x_1806_, 1);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1806_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1806_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_err_1828_);
lean_inc(v_pos_1827_);
lean_dec(v___x_1806_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_pos_1827_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v_err_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__3));
v___x_1837_ = l_Std_Internal_Parsec_String_pstring(v___x_1836_, v_a_1746_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_pos_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1856_; 
v_pos_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1856_ == 0)
{
lean_object* v_unused_1857_; 
v_unused_1857_ = lean_ctor_get(v___x_1837_, 1);
lean_dec(v_unused_1857_);
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1856_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_pos_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1856_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v_fst_1842_; lean_object* v_snd_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1855_; 
v_fst_1842_ = lean_ctor_get(v_pos_1838_, 0);
v_snd_1843_ = lean_ctor_get(v_pos_1838_, 1);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_pos_1838_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1845_ = v_pos_1838_;
v_isShared_1846_ = v_isSharedCheck_1855_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_snd_1843_);
lean_inc(v_fst_1842_);
lean_dec(v_pos_1838_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1855_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1847_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1842_, v_snd_1843_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1847_);
v___x_1849_ = v___x_1845_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_fst_1842_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1850_; lean_object* v___x_1852_; 
v___x_1850_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1850_, 0, v___x_1796_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 1, v___x_1850_);
lean_ctor_set(v___x_1840_, 0, v___x_1849_);
v___x_1852_ = v___x_1840_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1849_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v___x_1850_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
}
}
}
else
{
lean_object* v_pos_1858_; lean_object* v_err_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
v_pos_1858_ = lean_ctor_get(v___x_1837_, 0);
v_err_1859_ = lean_ctor_get(v___x_1837_, 1);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1837_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_err_1859_);
lean_inc(v_pos_1858_);
lean_dec(v___x_1837_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_pos_1858_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v_err_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__4));
v___x_1868_ = l_Std_Internal_Parsec_String_pstring(v___x_1867_, v_a_1746_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_pos_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1887_; 
v_pos_1869_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1887_ == 0)
{
lean_object* v_unused_1888_; 
v_unused_1888_ = lean_ctor_get(v___x_1868_, 1);
lean_dec(v_unused_1888_);
v___x_1871_ = v___x_1868_;
v_isShared_1872_ = v_isSharedCheck_1887_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_pos_1869_);
lean_dec(v___x_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1887_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v_fst_1873_; lean_object* v_snd_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1886_; 
v_fst_1873_ = lean_ctor_get(v_pos_1869_, 0);
v_snd_1874_ = lean_ctor_get(v_pos_1869_, 1);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_pos_1869_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1876_ = v_pos_1869_;
v_isShared_1877_ = v_isSharedCheck_1886_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_snd_1874_);
lean_inc(v_fst_1873_);
lean_dec(v_pos_1869_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1886_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1878_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1873_, v_snd_1874_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 1, v___x_1878_);
v___x_1880_ = v___x_1876_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_fst_1873_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1881_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1881_, 0, v___x_1792_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v___x_1881_);
lean_ctor_set(v___x_1871_, 0, v___x_1880_);
v___x_1883_ = v___x_1871_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1880_);
lean_ctor_set(v_reuseFailAlloc_1884_, 1, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
}
else
{
lean_object* v_pos_1889_; lean_object* v_err_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_pos_1889_ = lean_ctor_get(v___x_1868_, 0);
v_err_1890_ = lean_ctor_get(v___x_1868_, 1);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1868_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_err_1890_);
lean_inc(v_pos_1889_);
lean_dec(v___x_1868_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_pos_1889_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v_err_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
}
else
{
lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1936_; 
lean_inc(v_snd_1782_);
lean_inc(v_fst_1781_);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_a_1746_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; lean_object* v_unused_1938_; 
v_unused_1937_ = lean_ctor_get(v_a_1746_, 1);
lean_dec(v_unused_1937_);
v_unused_1938_ = lean_ctor_get(v_a_1746_, 0);
lean_dec(v_unused_1938_);
v___x_1899_ = v_a_1746_;
v_isShared_1900_ = v_isSharedCheck_1936_;
goto v_resetjp_1898_;
}
else
{
lean_dec(v_a_1746_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1936_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1901_ = lean_string_utf8_next_fast(v_fst_1781_, v_snd_1782_);
lean_dec(v_snd_1782_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 1, v___x_1901_);
v___x_1903_ = v___x_1899_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_fst_1781_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = ((lean_object*)(l_Lean_Json_Parser_finishSurrogatePair___closed__0));
v___x_1905_ = l_Lean_Json_Parser_strCore(v___x_1904_, v___x_1903_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_pos_1906_; lean_object* v_res_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1925_; 
v_pos_1906_ = lean_ctor_get(v___x_1905_, 0);
v_res_1907_ = lean_ctor_get(v___x_1905_, 1);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1909_ = v___x_1905_;
v_isShared_1910_ = v_isSharedCheck_1925_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_res_1907_);
lean_inc(v_pos_1906_);
lean_dec(v___x_1905_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1925_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v_fst_1911_; lean_object* v_snd_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1924_; 
v_fst_1911_ = lean_ctor_get(v_pos_1906_, 0);
v_snd_1912_ = lean_ctor_get(v_pos_1906_, 1);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_pos_1906_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1914_ = v_pos_1906_;
v_isShared_1915_ = v_isSharedCheck_1924_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_snd_1912_);
lean_inc(v_fst_1911_);
lean_dec(v_pos_1906_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1924_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1918_; 
v___x_1916_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1911_, v_snd_1912_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 1, v___x_1916_);
v___x_1918_ = v___x_1914_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_fst_1911_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v___x_1916_);
v___x_1918_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1919_; lean_object* v___x_1921_; 
v___x_1919_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1919_, 0, v_res_1907_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 1, v___x_1919_);
lean_ctor_set(v___x_1909_, 0, v___x_1918_);
v___x_1921_ = v___x_1909_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1918_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
}
else
{
lean_object* v_pos_1926_; lean_object* v_err_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
v_pos_1926_ = lean_ctor_get(v___x_1905_, 0);
v_err_1927_ = lean_ctor_get(v___x_1905_, 1);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1905_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_err_1927_);
lean_inc(v_pos_1926_);
lean_dec(v___x_1905_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_pos_1926_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_err_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1981_; 
lean_inc(v_snd_1782_);
lean_inc(v_fst_1781_);
v_isSharedCheck_1981_ = !lean_is_exclusive(v_a_1746_);
if (v_isSharedCheck_1981_ == 0)
{
lean_object* v_unused_1982_; lean_object* v_unused_1983_; 
v_unused_1982_ = lean_ctor_get(v_a_1746_, 1);
lean_dec(v_unused_1982_);
v_unused_1983_ = lean_ctor_get(v_a_1746_, 0);
lean_dec(v_unused_1983_);
v___x_1940_ = v_a_1746_;
v_isShared_1941_ = v_isSharedCheck_1981_;
goto v_resetjp_1939_;
}
else
{
lean_dec(v_a_1746_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1981_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1942_ = lean_string_utf8_next_fast(v_fst_1781_, v_snd_1782_);
lean_dec(v_snd_1782_);
v___x_1943_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1781_, v___x_1942_);
lean_inc(v___x_1943_);
lean_inc(v_fst_1781_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 1, v___x_1943_);
v___x_1945_ = v___x_1940_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_fst_1781_);
lean_ctor_set(v_reuseFailAlloc_1980_, 1, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
uint8_t v_decide_1946_; 
v_decide_1946_ = lean_nat_dec_eq(v___x_1943_, v___x_1783_);
if (v_decide_1946_ == 0)
{
uint32_t v___x_1947_; uint32_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1947_ = lean_string_utf8_get_fast(v_fst_1781_, v___x_1943_);
v___x_1948_ = 125;
v___x_1949_ = lean_uint32_dec_eq(v___x_1947_, v___x_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_dec(v___x_1943_);
lean_dec(v_fst_1781_);
v___x_1950_ = lean_unsigned_to_nat(1u);
v___x_1951_ = lean_nat_sub(v_depth_1745_, v___x_1950_);
v___x_1952_ = lean_box(1);
v___x_1953_ = l_Lean_Json_Parser_objectCore(v___x_1951_, v___x_1952_, v___x_1945_);
lean_dec(v___x_1951_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_pos_1954_; lean_object* v_res_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1963_; 
v_pos_1954_ = lean_ctor_get(v___x_1953_, 0);
v_res_1955_ = lean_ctor_get(v___x_1953_, 1);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1957_ = v___x_1953_;
v_isShared_1958_ = v_isSharedCheck_1963_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_res_1955_);
lean_inc(v_pos_1954_);
lean_dec(v___x_1953_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1963_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1961_; 
v___x_1959_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1959_, 0, v_res_1955_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 1, v___x_1959_);
v___x_1961_ = v___x_1957_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_pos_1954_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v___x_1959_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
else
{
lean_object* v_pos_1964_; lean_object* v_err_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
v_pos_1964_ = lean_ctor_get(v___x_1953_, 0);
v_err_1965_ = lean_ctor_get(v___x_1953_, 1);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1967_ = v___x_1953_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_err_1965_);
lean_inc(v_pos_1964_);
lean_dec(v___x_1953_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_pos_1964_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v_err_1965_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
else
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
lean_dec_ref(v___x_1945_);
v___x_1973_ = lean_string_utf8_next_fast(v_fst_1781_, v___x_1943_);
lean_dec(v___x_1943_);
v___x_1974_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1781_, v___x_1973_);
v___x_1975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1975_, 0, v_fst_1781_);
lean_ctor_set(v___x_1975_, 1, v___x_1974_);
v___x_1976_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__5));
v___x_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1975_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
return v___x_1977_;
}
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_dec(v___x_1943_);
lean_dec(v_fst_1781_);
v___x_1978_ = lean_box(0);
v___x_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1945_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
return v___x_1979_;
}
}
}
}
}
else
{
lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2027_; 
lean_inc(v_snd_1782_);
lean_inc(v_fst_1781_);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_a_1746_);
if (v_isSharedCheck_2027_ == 0)
{
lean_object* v_unused_2028_; lean_object* v_unused_2029_; 
v_unused_2028_ = lean_ctor_get(v_a_1746_, 1);
lean_dec(v_unused_2028_);
v_unused_2029_ = lean_ctor_get(v_a_1746_, 0);
lean_dec(v_unused_2029_);
v___x_1985_ = v_a_1746_;
v_isShared_1986_ = v_isSharedCheck_2027_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v_a_1746_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2027_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1990_; 
v___x_1987_ = lean_string_utf8_next_fast(v_fst_1781_, v_snd_1782_);
lean_dec(v_snd_1782_);
v___x_1988_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1781_, v___x_1987_);
lean_inc(v___x_1988_);
lean_inc(v_fst_1781_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 1, v___x_1988_);
v___x_1990_ = v___x_1985_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_fst_1781_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v___x_1988_);
v___x_1990_ = v_reuseFailAlloc_2026_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
uint8_t v_decide_1991_; 
v_decide_1991_ = lean_nat_dec_eq(v___x_1988_, v___x_1783_);
if (v_decide_1991_ == 0)
{
uint32_t v___x_1992_; uint32_t v___x_1993_; uint8_t v___x_1994_; 
v___x_1992_ = lean_string_utf8_get_fast(v_fst_1781_, v___x_1988_);
v___x_1993_ = 93;
v___x_1994_ = lean_uint32_dec_eq(v___x_1992_, v___x_1993_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
lean_dec(v___x_1988_);
lean_dec(v_fst_1781_);
v___x_1995_ = lean_unsigned_to_nat(1u);
v___x_1996_ = lean_nat_sub(v_depth_1745_, v___x_1995_);
v___x_1997_ = lean_unsigned_to_nat(4u);
v___x_1998_ = lean_mk_empty_array_with_capacity(v___x_1997_);
v___x_1999_ = l_Lean_Json_Parser_arrayCore(v___x_1996_, v___x_1998_, v___x_1990_);
lean_dec(v___x_1996_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_pos_2000_; lean_object* v_res_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2009_; 
v_pos_2000_ = lean_ctor_get(v___x_1999_, 0);
v_res_2001_ = lean_ctor_get(v___x_1999_, 1);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2003_ = v___x_1999_;
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_res_2001_);
lean_inc(v_pos_2000_);
lean_dec(v___x_1999_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2005_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2005_, 0, v_res_2001_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 1, v___x_2005_);
v___x_2007_ = v___x_2003_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_pos_2000_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
else
{
lean_object* v_pos_2010_; lean_object* v_err_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_pos_2010_ = lean_ctor_get(v___x_1999_, 0);
v_err_2011_ = lean_ctor_get(v___x_1999_, 1);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1999_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_err_2011_);
lean_inc(v_pos_2010_);
lean_dec(v___x_1999_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_pos_2010_);
lean_ctor_set(v_reuseFailAlloc_2017_, 1, v_err_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
lean_dec_ref(v___x_1990_);
v___x_2019_ = lean_string_utf8_next_fast(v_fst_1781_, v___x_1988_);
lean_dec(v___x_1988_);
v___x_2020_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1781_, v___x_2019_);
v___x_2021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2021_, 0, v_fst_1781_);
lean_ctor_set(v___x_2021_, 1, v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__7));
v___x_2023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2021_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
return v___x_2023_;
}
}
else
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec(v___x_1988_);
lean_dec(v_fst_1781_);
v___x_2024_ = lean_box(0);
v___x_2025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_1990_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
return v___x_2025_;
}
}
}
}
}
v___jp_2030_:
{
lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = lean_nat_dec_eq(v_depth_1745_, v___x_2031_);
if (v___x_2032_ == 0)
{
goto v___jp_1786_;
}
else
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__9));
v___x_2034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2034_, 0, v_a_1746_);
lean_ctor_set(v___x_2034_, 1, v___x_2033_);
return v___x_2034_;
}
}
}
else
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = lean_box(0);
v___x_2040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2040_, 0, v_a_1746_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
return v___x_2040_;
}
v___jp_1747_:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lean_Json_Parser_num(v_a_1746_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_pos_1749_; lean_object* v_res_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1768_; 
v_pos_1749_ = lean_ctor_get(v___x_1748_, 0);
v_res_1750_ = lean_ctor_get(v___x_1748_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1752_ = v___x_1748_;
v_isShared_1753_ = v_isSharedCheck_1768_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_res_1750_);
lean_inc(v_pos_1749_);
lean_dec(v___x_1748_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1768_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v_fst_1754_; lean_object* v_snd_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1767_; 
v_fst_1754_ = lean_ctor_get(v_pos_1749_, 0);
v_snd_1755_ = lean_ctor_get(v_pos_1749_, 1);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_pos_1749_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1757_ = v_pos_1749_;
v_isShared_1758_ = v_isSharedCheck_1767_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_snd_1755_);
lean_inc(v_fst_1754_);
lean_dec(v_pos_1749_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1767_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1761_; 
v___x_1759_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_1754_, v_snd_1755_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v___x_1759_);
v___x_1761_ = v___x_1757_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_fst_1754_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v___x_1759_);
v___x_1761_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1762_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1762_, 0, v_res_1750_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 1, v___x_1762_);
lean_ctor_set(v___x_1752_, 0, v___x_1761_);
v___x_1764_ = v___x_1752_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1761_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
else
{
lean_object* v_pos_1769_; lean_object* v_err_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
v_pos_1769_ = lean_ctor_get(v___x_1748_, 0);
v_err_1770_ = lean_ctor_get(v___x_1748_, 1);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1748_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_err_1770_);
lean_inc(v_pos_1769_);
lean_dec(v___x_1748_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_pos_1769_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_err_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
v___jp_1778_:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = ((lean_object*)(l_Lean_Json_Parser_anyCore___closed__1));
v___x_1780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1780_, 0, v_a_1746_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
return v___x_1780_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_arrayCore(lean_object* v_depth_2041_, lean_object* v_acc_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Lean_Json_Parser_anyCore(v_depth_2041_, v_a_2043_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_pos_2045_; lean_object* v_res_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2090_; 
v_pos_2045_ = lean_ctor_get(v___x_2044_, 0);
v_res_2046_ = lean_ctor_get(v___x_2044_, 1);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2048_ = v___x_2044_;
v_isShared_2049_ = v_isSharedCheck_2090_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_res_2046_);
lean_inc(v_pos_2045_);
lean_dec(v___x_2044_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2090_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v_fst_2050_; lean_object* v_snd_2051_; lean_object* v___x_2052_; uint8_t v_decide_2053_; 
v_fst_2050_ = lean_ctor_get(v_pos_2045_, 0);
v_snd_2051_ = lean_ctor_get(v_pos_2045_, 1);
v___x_2052_ = lean_string_utf8_byte_size(v_fst_2050_);
v_decide_2053_ = lean_nat_dec_eq(v_snd_2051_, v___x_2052_);
if (v_decide_2053_ == 0)
{
lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2083_; 
lean_inc(v_snd_2051_);
lean_inc(v_fst_2050_);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_pos_2045_);
if (v_isSharedCheck_2083_ == 0)
{
lean_object* v_unused_2084_; lean_object* v_unused_2085_; 
v_unused_2084_ = lean_ctor_get(v_pos_2045_, 1);
lean_dec(v_unused_2084_);
v_unused_2085_ = lean_ctor_get(v_pos_2045_, 0);
lean_dec(v_unused_2085_);
v___x_2055_ = v_pos_2045_;
v_isShared_2056_ = v_isSharedCheck_2083_;
goto v_resetjp_2054_;
}
else
{
lean_dec(v_pos_2045_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2083_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; uint32_t v___x_2058_; lean_object* v___x_2059_; uint32_t v___x_2060_; uint8_t v___x_2061_; 
v___x_2057_ = lean_array_push(v_acc_2042_, v_res_2046_);
v___x_2058_ = lean_string_utf8_get_fast(v_fst_2050_, v_snd_2051_);
v___x_2059_ = lean_string_utf8_next_fast(v_fst_2050_, v_snd_2051_);
lean_dec(v_snd_2051_);
v___x_2060_ = 93;
v___x_2061_ = lean_uint32_dec_eq(v___x_2058_, v___x_2060_);
if (v___x_2061_ == 0)
{
uint32_t v___x_2062_; uint8_t v___x_2063_; 
v___x_2062_ = 44;
v___x_2063_ = lean_uint32_dec_eq(v___x_2058_, v___x_2062_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2065_; 
lean_dec_ref(v___x_2057_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 1, v___x_2059_);
v___x_2065_ = v___x_2055_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_fst_2050_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v___x_2059_);
v___x_2065_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2066_ = ((lean_object*)(l_Lean_Json_Parser_arrayCore___closed__1));
if (v_isShared_2049_ == 0)
{
lean_ctor_set_tag(v___x_2048_, 1);
lean_ctor_set(v___x_2048_, 1, v___x_2066_);
lean_ctor_set(v___x_2048_, 0, v___x_2065_);
v___x_2068_ = v___x_2048_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
else
{
lean_object* v___x_2071_; lean_object* v___x_2073_; 
lean_del_object(v___x_2048_);
v___x_2071_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_2050_, v___x_2059_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 1, v___x_2071_);
v___x_2073_ = v___x_2055_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_fst_2050_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v___x_2071_);
v___x_2073_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
v_acc_2042_ = v___x_2057_;
v_a_2043_ = v___x_2073_;
goto _start;
}
}
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2076_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_2050_, v___x_2059_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 1, v___x_2076_);
v___x_2078_ = v___x_2055_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_fst_2050_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
lean_object* v___x_2080_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 1, v___x_2057_);
lean_ctor_set(v___x_2048_, 0, v___x_2078_);
v___x_2080_ = v___x_2048_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2078_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v___x_2057_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
else
{
lean_object* v___x_2086_; lean_object* v___x_2088_; 
lean_dec(v_res_2046_);
lean_dec_ref(v_acc_2042_);
v___x_2086_ = lean_box(0);
if (v_isShared_2049_ == 0)
{
lean_ctor_set_tag(v___x_2048_, 1);
lean_ctor_set(v___x_2048_, 1, v___x_2086_);
v___x_2088_ = v___x_2048_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_pos_2045_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
else
{
lean_object* v_pos_2091_; lean_object* v_err_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
lean_dec_ref(v_acc_2042_);
v_pos_2091_ = lean_ctor_get(v___x_2044_, 0);
v_err_2092_ = lean_ctor_get(v___x_2044_, 1);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2044_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_err_2092_);
lean_inc(v_pos_2091_);
lean_dec(v___x_2044_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_pos_2091_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_err_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_arrayCore___boxed(lean_object* v_depth_2100_, lean_object* v_acc_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Lean_Json_Parser_arrayCore(v_depth_2100_, v_acc_2101_, v_a_2102_);
lean_dec(v_depth_2100_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_objectCore___boxed(lean_object* v_depth_2104_, lean_object* v_kvs_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_Json_Parser_objectCore(v_depth_2104_, v_kvs_2105_, v_a_2106_);
lean_dec(v_depth_2104_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_anyCore___boxed(lean_object* v_depth_2108_, lean_object* v_a_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lean_Json_Parser_anyCore(v_depth_2108_, v_a_2109_);
lean_dec(v_depth_2108_);
return v_res_2110_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2(lean_object* v_00_u03b2_2111_, lean_object* v_k_2112_, lean_object* v_t_2113_){
_start:
{
uint8_t v___x_2114_; 
v___x_2114_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___redArg(v_k_2112_, v_t_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2___boxed(lean_object* v_00_u03b2_2115_, lean_object* v_k_2116_, lean_object* v_t_2117_){
_start:
{
uint8_t v_res_2118_; lean_object* v_r_2119_; 
v_res_2118_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Json_Parser_objectCore_spec__2(v_00_u03b2_2115_, v_k_2116_, v_t_2117_);
lean_dec(v_t_2117_);
lean_dec_ref(v_k_2116_);
v_r_2119_ = lean_box(v_res_2118_);
return v_r_2119_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3(lean_object* v_00_u03b2_2120_, lean_object* v_msg_2121_){
_start:
{
lean_object* v___x_2122_; 
v___x_2122_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3_spec__3___redArg(v_msg_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3(lean_object* v_00_u03b2_2123_, lean_object* v_k_2124_, lean_object* v_v_2125_, lean_object* v_t_2126_){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_Parser_objectCore_spec__3___redArg(v_k_2124_, v_v_2125_, v_t_2126_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Parser_any(lean_object* v_a_2131_){
_start:
{
lean_object* v_fst_2132_; lean_object* v_snd_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2158_; 
v_fst_2132_ = lean_ctor_get(v_a_2131_, 0);
v_snd_2133_ = lean_ctor_get(v_a_2131_, 1);
v_isSharedCheck_2158_ = !lean_is_exclusive(v_a_2131_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2135_ = v_a_2131_;
v_isShared_2136_ = v_isSharedCheck_2158_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_snd_2133_);
lean_inc(v_fst_2132_);
lean_dec(v_a_2131_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2158_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2137_; lean_object* v___x_2139_; 
v___x_2137_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_skipWs(v_fst_2132_, v_snd_2133_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 1, v___x_2137_);
v___x_2139_ = v___x_2135_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_fst_2132_);
lean_ctor_set(v_reuseFailAlloc_2157_, 1, v___x_2137_);
v___x_2139_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = lean_unsigned_to_nat(10000u);
v___x_2141_ = l_Lean_Json_Parser_anyCore(v___x_2140_, v___x_2139_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_pos_2142_; lean_object* v_fst_2143_; lean_object* v_snd_2144_; lean_object* v___x_2145_; uint8_t v_decide_2146_; 
v_pos_2142_ = lean_ctor_get(v___x_2141_, 0);
v_fst_2143_ = lean_ctor_get(v_pos_2142_, 0);
v_snd_2144_ = lean_ctor_get(v_pos_2142_, 1);
v___x_2145_ = lean_string_utf8_byte_size(v_fst_2143_);
v_decide_2146_ = lean_nat_dec_eq(v_snd_2144_, v___x_2145_);
if (v_decide_2146_ == 0)
{
lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2154_; 
lean_inc(v_pos_2142_);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2154_ == 0)
{
lean_object* v_unused_2155_; lean_object* v_unused_2156_; 
v_unused_2155_ = lean_ctor_get(v___x_2141_, 1);
lean_dec(v_unused_2155_);
v_unused_2156_ = lean_ctor_get(v___x_2141_, 0);
lean_dec(v_unused_2156_);
v___x_2148_ = v___x_2141_;
v_isShared_2149_ = v_isSharedCheck_2154_;
goto v_resetjp_2147_;
}
else
{
lean_dec(v___x_2141_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2154_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2150_ = ((lean_object*)(l_Lean_Json_Parser_any___closed__1));
if (v_isShared_2149_ == 0)
{
lean_ctor_set_tag(v___x_2148_, 1);
lean_ctor_set(v___x_2148_, 1, v___x_2150_);
v___x_2152_ = v___x_2148_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_pos_2142_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
else
{
return v___x_2141_;
}
}
else
{
return v___x_2141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_parse(lean_object* v_s_2159_){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2160_ = lean_alloc_closure((void*)(l_Lean_Json_Parser_any), 1, 0);
v___x_2161_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_2160_, v_s_2159_);
return v___x_2161_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Json_Parser_escapedChar___boxed__const__1 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__1();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__1);
l_Lean_Json_Parser_escapedChar___boxed__const__2 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__2();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__2);
l_Lean_Json_Parser_escapedChar___boxed__const__3 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__3();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__3);
l_Lean_Json_Parser_escapedChar___boxed__const__4 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__4();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__4);
l_Lean_Json_Parser_escapedChar___boxed__const__5 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__5();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__5);
l_Lean_Json_Parser_escapedChar___boxed__const__6 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__6();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__6);
l_Lean_Json_Parser_escapedChar___boxed__const__7 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__7();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__7);
l_Lean_Json_Parser_escapedChar___boxed__const__8 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__8();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__8);
l_Lean_Json_Parser_escapedChar___boxed__const__9 = _init_l_Lean_Json_Parser_escapedChar___boxed__const__9();
lean_mark_persistent(l_Lean_Json_Parser_escapedChar___boxed__const__9);
l_Lean_Json_Parser_maxDepth = _init_l_Lean_Json_Parser_maxDepth();
lean_mark_persistent(l_Lean_Json_Parser_maxDepth);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_Basic(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
