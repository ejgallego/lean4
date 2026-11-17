// Lean compiler output
// Module: Std.Internal.Parsec.ByteArray
// Imports: public import Std.Internal.Parsec.Basic public import Init.Data.String.Basic public import Std.Data.ByteSlice import Init.Omega
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
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_ByteArray_toByteSlice(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_ByteArray_Iterator_remainingBytes(lean_object*);
lean_object* l_ByteArray_mkIterator(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__1(lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__5___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__0_value;
static const lean_closure_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__1_value;
static const lean_closure_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__2 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__2_value;
static const lean_closure_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__3 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__3_value;
static const lean_closure_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__4 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__4_value;
static const lean_closure_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__5 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__5_value;
static const lean_ctor_object l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__0_value),((lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__1_value),((lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__2_value),((lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__3_value),((lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__4_value),((lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__5_value)}};
static const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__6 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___closed__6_value;
static const lean_string_object l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offset "};
static const lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__0_value;
static const lean_string_object l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__1_value;
static const lean_string_object l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__2 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_pbyte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "expected: '"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_pbyte___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_pbyte___closed__0_value;
static const lean_string_object l_Std_Internal_Parsec_ByteArray_pbyte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_pbyte___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_pbyte___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pbyte(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pbyte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByte(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByte___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected byte "};
static const lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__0 = (const lean_object*)&l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__0_value;
static const lean_string_object l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__1 = (const lean_object*)&l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pstring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipString(lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_pByteChar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Internal_Parsec_ByteArray_pByteChar___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_pByteChar___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pByteChar(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pByteChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByteChar(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByteChar___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_digit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_digit___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_digit___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_ByteArray_digit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_ByteArray_digit___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_ByteArray_digit___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_digit___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_digit(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitToNat(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitToNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_digits(lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_hexDigit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "hex digit expected"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_hexDigit___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_hexDigit___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_ByteArray_hexDigit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_ByteArray_hexDigit___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_ByteArray_hexDigit___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_hexDigit___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_hexDigit(lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_octDigit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "octal digit expected"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_octDigit___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_octDigit___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_ByteArray_octDigit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_ByteArray_octDigit___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_ByteArray_octDigit___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_octDigit___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_octDigit(lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ASCII letter expected"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_asciiLetter(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipWs(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_ws(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_take___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhile(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipWhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipUntil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntilUpTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntilUpTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileAtMost(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileAtMost___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhile1AtMost(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhile1AtMost___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipWhileUpTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipWhileUpTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipUntilUpTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipUntilUpTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__0(lean_object* v_it_1_){
_start:
{
lean_object* v_idx_2_; 
v_idx_2_ = lean_ctor_get(v_it_1_, 1);
lean_inc(v_idx_2_);
return v_idx_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__0___boxed(lean_object* v_it_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__0(v_it_3_);
lean_dec_ref(v_it_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__1(lean_object* v_it_5_){
_start:
{
lean_object* v_array_6_; lean_object* v_idx_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_16_; 
v_array_6_ = lean_ctor_get(v_it_5_, 0);
v_idx_7_ = lean_ctor_get(v_it_5_, 1);
v_isSharedCheck_16_ = !lean_is_exclusive(v_it_5_);
if (v_isSharedCheck_16_ == 0)
{
v___x_9_ = v_it_5_;
v_isShared_10_ = v_isSharedCheck_16_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_idx_7_);
lean_inc(v_array_6_);
lean_dec(v_it_5_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_16_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_14_; 
v___x_11_ = lean_unsigned_to_nat(1u);
v___x_12_ = lean_nat_add(v_idx_7_, v___x_11_);
lean_dec(v_idx_7_);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 1, v___x_12_);
v___x_14_ = v___x_9_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v_array_6_);
lean_ctor_set(v_reuseFailAlloc_15_, 1, v___x_12_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__2(lean_object* v_it_17_){
_start:
{
lean_object* v_array_18_; lean_object* v_idx_19_; lean_object* v___x_20_; uint8_t v___x_21_; 
v_array_18_ = lean_ctor_get(v_it_17_, 0);
v_idx_19_ = lean_ctor_get(v_it_17_, 1);
v___x_20_ = lean_byte_array_size(v_array_18_);
v___x_21_ = lean_nat_dec_lt(v_idx_19_, v___x_20_);
if (v___x_21_ == 0)
{
uint8_t v___x_22_; 
v___x_22_ = 0;
return v___x_22_;
}
else
{
uint8_t v___x_23_; 
v___x_23_ = lean_byte_array_fget(v_array_18_, v_idx_19_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__2___boxed(lean_object* v_it_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__2(v_it_24_);
lean_dec_ref(v_it_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__3(lean_object* v_it_27_){
_start:
{
lean_object* v_array_28_; lean_object* v_idx_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v_array_28_ = lean_ctor_get(v_it_27_, 0);
v_idx_29_ = lean_ctor_get(v_it_27_, 1);
v___x_30_ = lean_byte_array_size(v_array_28_);
v___x_31_ = lean_nat_dec_lt(v_idx_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__3___boxed(lean_object* v_it_32_){
_start:
{
uint8_t v_res_33_; lean_object* v_r_34_; 
v_res_33_ = l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__3(v_it_32_);
lean_dec_ref(v_it_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__4(lean_object* v_it_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_array_37_; lean_object* v_idx_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_47_; 
v_array_37_ = lean_ctor_get(v_it_35_, 0);
v_idx_38_ = lean_ctor_get(v_it_35_, 1);
v_isSharedCheck_47_ = !lean_is_exclusive(v_it_35_);
if (v_isSharedCheck_47_ == 0)
{
v___x_40_ = v_it_35_;
v_isShared_41_ = v_isSharedCheck_47_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_idx_38_);
lean_inc(v_array_37_);
lean_dec(v_it_35_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_47_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_45_; 
v___x_42_ = lean_unsigned_to_nat(1u);
v___x_43_ = lean_nat_add(v_idx_38_, v___x_42_);
lean_dec(v_idx_38_);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 1, v___x_43_);
v___x_45_ = v___x_40_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_array_37_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_43_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__5(lean_object* v_it_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_array_50_; lean_object* v_idx_51_; uint8_t v___x_52_; 
v_array_50_ = lean_ctor_get(v_it_48_, 0);
v_idx_51_ = lean_ctor_get(v_it_48_, 1);
v___x_52_ = lean_byte_array_fget(v_array_50_, v_idx_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__5___boxed(lean_object* v_it_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l_Std_Internal_Parsec_ByteArray_instInputIteratorUInt8Nat___lam__5(v_it_53_, v___y_54_);
lean_dec_ref(v_it_53_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object* v_p_74_, lean_object* v_arr_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = l_ByteArray_mkIterator(v_arr_75_);
v___x_77_ = lean_apply_1(v_p_74_, v___x_76_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v_res_78_; lean_object* v___x_79_; 
v_res_78_ = lean_ctor_get(v___x_77_, 1);
lean_inc(v_res_78_);
lean_dec_ref_known(v___x_77_, 2);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v_res_78_);
return v___x_79_;
}
else
{
lean_object* v_pos_80_; lean_object* v_err_81_; lean_object* v_idx_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___y_93_; 
v_pos_80_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_pos_80_);
v_err_81_ = lean_ctor_get(v___x_77_, 1);
lean_inc(v_err_81_);
lean_dec_ref_known(v___x_77_, 2);
v_idx_82_ = lean_ctor_get(v_pos_80_, 1);
lean_inc(v_idx_82_);
lean_dec(v_pos_80_);
v___x_83_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__0));
v___x_84_ = l_Nat_reprFast(v_idx_82_);
v___x_85_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
v___x_86_ = l_Std_Format_defWidth;
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = l_Std_Format_pretty(v___x_85_, v___x_86_, v___x_87_, v___x_87_);
v___x_89_ = lean_string_append(v___x_83_, v___x_88_);
lean_dec_ref(v___x_88_);
v___x_90_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__1));
v___x_91_ = lean_string_append(v___x_89_, v___x_90_);
if (lean_obj_tag(v_err_81_) == 0)
{
lean_object* v___x_96_; 
v___x_96_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_Parser_run___redArg___closed__2));
v___y_93_ = v___x_96_;
goto v___jp_92_;
}
else
{
lean_object* v_s_97_; 
v_s_97_ = lean_ctor_get(v_err_81_, 0);
lean_inc_ref(v_s_97_);
lean_dec_ref_known(v_err_81_, 1);
v___y_93_ = v_s_97_;
goto v___jp_92_;
}
v___jp_92_:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_string_append(v___x_91_, v___y_93_);
lean_dec_ref(v___y_93_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run(lean_object* v_00_u03b1_98_, lean_object* v_p_99_, lean_object* v_arr_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v_p_99_, v_arr_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pbyte(uint8_t v_b_104_, lean_object* v_it_105_){
_start:
{
lean_object* v_array_106_; lean_object* v_idx_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_array_106_ = lean_ctor_get(v_it_105_, 0);
v_idx_107_ = lean_ctor_get(v_it_105_, 1);
v___x_108_ = lean_byte_array_size(v_array_106_);
v___x_109_ = lean_nat_dec_lt(v_idx_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_box(0);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v_it_105_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
return v___x_111_;
}
else
{
uint8_t v_got_112_; uint8_t v___x_113_; 
v_got_112_ = lean_byte_array_fget(v_array_106_, v_idx_107_);
v___x_113_ = lean_uint8_dec_eq(v_got_112_, v_b_104_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_114_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__0));
v___x_115_ = lean_uint8_to_nat(v_b_104_);
v___x_116_ = l_Nat_reprFast(v___x_115_);
v___x_117_ = lean_string_append(v___x_114_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__1));
v___x_119_ = lean_string_append(v___x_117_, v___x_118_);
v___x_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
v___x_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_121_, 0, v_it_105_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_132_; 
lean_inc(v_idx_107_);
lean_inc_ref(v_array_106_);
v_isSharedCheck_132_ = !lean_is_exclusive(v_it_105_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; lean_object* v_unused_134_; 
v_unused_133_ = lean_ctor_get(v_it_105_, 1);
lean_dec(v_unused_133_);
v_unused_134_ = lean_ctor_get(v_it_105_, 0);
lean_dec(v_unused_134_);
v___x_123_ = v_it_105_;
v_isShared_124_ = v_isSharedCheck_132_;
goto v_resetjp_122_;
}
else
{
lean_dec(v_it_105_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_132_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_add(v_idx_107_, v___x_125_);
lean_dec(v_idx_107_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v___x_126_);
v___x_128_ = v___x_123_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_array_106_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_126_);
v___x_128_ = v_reuseFailAlloc_131_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_box(v_got_112_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pbyte___boxed(lean_object* v_b_135_, lean_object* v_it_136_){
_start:
{
uint8_t v_b_boxed_137_; lean_object* v_res_138_; 
v_b_boxed_137_ = lean_unbox(v_b_135_);
v_res_138_ = l_Std_Internal_Parsec_ByteArray_pbyte(v_b_boxed_137_, v_it_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByte(uint8_t v_b_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_array_141_; lean_object* v_idx_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v_array_141_ = lean_ctor_get(v_a_140_, 0);
v_idx_142_ = lean_ctor_get(v_a_140_, 1);
v___x_143_ = lean_byte_array_size(v_array_141_);
v___x_144_ = lean_nat_dec_lt(v_idx_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_box(0);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v_a_140_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
return v___x_146_;
}
else
{
uint8_t v_got_147_; uint8_t v___x_148_; 
v_got_147_ = lean_byte_array_fget(v_array_141_, v_idx_142_);
v___x_148_ = lean_uint8_dec_eq(v_got_147_, v_b_139_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_149_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__0));
v___x_150_ = lean_uint8_to_nat(v_b_139_);
v___x_151_ = l_Nat_reprFast(v___x_150_);
v___x_152_ = lean_string_append(v___x_149_, v___x_151_);
lean_dec_ref(v___x_151_);
v___x_153_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__1));
v___x_154_ = lean_string_append(v___x_152_, v___x_153_);
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v_a_140_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
return v___x_156_;
}
else
{
lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_167_; 
lean_inc(v_idx_142_);
lean_inc_ref(v_array_141_);
v_isSharedCheck_167_ = !lean_is_exclusive(v_a_140_);
if (v_isSharedCheck_167_ == 0)
{
lean_object* v_unused_168_; lean_object* v_unused_169_; 
v_unused_168_ = lean_ctor_get(v_a_140_, 1);
lean_dec(v_unused_168_);
v_unused_169_ = lean_ctor_get(v_a_140_, 0);
lean_dec(v_unused_169_);
v___x_158_ = v_a_140_;
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
else
{
lean_dec(v_a_140_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_add(v_idx_142_, v___x_160_);
lean_dec(v_idx_142_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___x_161_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_array_141_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_161_);
v___x_163_ = v_reuseFailAlloc_166_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_box(0);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_163_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
return v___x_165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByte___boxed(lean_object* v_b_170_, lean_object* v_a_171_){
_start:
{
uint8_t v_b_boxed_172_; lean_object* v_res_173_; 
v_b_boxed_172_ = lean_unbox(v_b_170_);
v_res_173_ = l_Std_Internal_Parsec_ByteArray_skipByte(v_b_boxed_172_, v_a_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go(lean_object* v_arr_176_, lean_object* v_idx_177_, lean_object* v_it_178_){
_start:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_byte_array_size(v_arr_176_);
v___x_180_ = lean_nat_dec_lt(v_idx_177_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v_idx_177_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v_it_178_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
return v___x_182_;
}
else
{
lean_object* v_array_183_; lean_object* v_idx_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v_array_183_ = lean_ctor_get(v_it_178_, 0);
v_idx_184_ = lean_ctor_get(v_it_178_, 1);
v___x_185_ = lean_byte_array_size(v_array_183_);
v___x_186_ = lean_nat_dec_lt(v_idx_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec(v_idx_177_);
v___x_187_ = lean_box(0);
v___x_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_188_, 0, v_it_178_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
return v___x_188_;
}
else
{
uint8_t v_got_189_; uint8_t v_want_190_; uint8_t v___x_191_; 
v_got_189_ = lean_byte_array_fget(v_array_183_, v_idx_184_);
v_want_190_ = lean_byte_array_fget(v_arr_176_, v_idx_177_);
v___x_191_ = lean_uint8_dec_eq(v_got_189_, v_want_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec(v_idx_177_);
v___x_192_ = ((lean_object*)(l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__0));
v___x_193_ = lean_uint8_to_nat(v_want_190_);
v___x_194_ = l_Nat_reprFast(v___x_193_);
v___x_195_ = lean_string_append(v___x_192_, v___x_194_);
lean_dec_ref(v___x_194_);
v___x_196_ = ((lean_object*)(l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___closed__1));
v___x_197_ = lean_string_append(v___x_195_, v___x_196_);
v___x_198_ = lean_uint8_to_nat(v_got_189_);
v___x_199_ = l_Nat_reprFast(v___x_198_);
v___x_200_ = lean_string_append(v___x_197_, v___x_199_);
lean_dec_ref(v___x_199_);
v___x_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
v___x_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_202_, 0, v_it_178_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
return v___x_202_;
}
else
{
lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_213_; 
lean_inc(v_idx_184_);
lean_inc_ref(v_array_183_);
v_isSharedCheck_213_ = !lean_is_exclusive(v_it_178_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; lean_object* v_unused_215_; 
v_unused_214_ = lean_ctor_get(v_it_178_, 1);
lean_dec(v_unused_214_);
v_unused_215_ = lean_ctor_get(v_it_178_, 0);
lean_dec(v_unused_215_);
v___x_204_ = v_it_178_;
v_isShared_205_ = v_isSharedCheck_213_;
goto v_resetjp_203_;
}
else
{
lean_dec(v_it_178_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_213_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_206_ = lean_unsigned_to_nat(1u);
v___x_207_ = lean_nat_add(v_idx_177_, v___x_206_);
lean_dec(v_idx_177_);
v___x_208_ = lean_nat_add(v_idx_184_, v___x_206_);
lean_dec(v_idx_184_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 1, v___x_208_);
v___x_210_ = v___x_204_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_array_183_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v___x_208_);
v___x_210_ = v_reuseFailAlloc_212_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
v_idx_177_ = v___x_207_;
v_it_178_ = v___x_210_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go___boxed(lean_object* v_arr_216_, lean_object* v_idx_217_, lean_object* v_it_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go(v_arr_216_, v_idx_217_, v_it_218_);
lean_dec_ref(v_arr_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object* v_arr_220_, lean_object* v_it_221_){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipBytes_go(v_arr_220_, v___x_222_, v_it_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes___boxed(lean_object* v_arr_224_, lean_object* v_it_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_arr_224_, v_it_225_);
lean_dec_ref(v_arr_224_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pstring(lean_object* v_s_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_utf8_229_; lean_object* v___x_230_; 
lean_inc_ref(v_s_227_);
v_utf8_229_ = lean_string_to_utf8(v_s_227_);
v___x_230_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_229_, v_a_228_);
lean_dec_ref(v_utf8_229_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_pos_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
v_pos_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v___x_230_, 1);
lean_dec(v_unused_239_);
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_pos_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v_s_227_);
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_pos_231_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v_s_227_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
else
{
lean_object* v_pos_240_; lean_object* v_err_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
lean_dec_ref(v_s_227_);
v_pos_240_ = lean_ctor_get(v___x_230_, 0);
v_err_241_ = lean_ctor_get(v___x_230_, 1);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_230_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_err_241_);
lean_inc(v_pos_240_);
lean_dec(v___x_230_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_pos_240_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_err_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipString(lean_object* v_s_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_utf8_251_; lean_object* v___x_252_; 
v_utf8_251_ = lean_string_to_utf8(v_s_249_);
v___x_252_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_251_, v_a_250_);
lean_dec_ref(v_utf8_251_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_pos_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_261_; 
v_pos_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v___x_252_, 1);
lean_dec(v_unused_262_);
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_pos_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_257_ = lean_box(0);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 1, v___x_257_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_pos_253_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
else
{
return v___x_252_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pByteChar(uint32_t v_c_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_array_266_; lean_object* v_idx_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v_array_266_ = lean_ctor_get(v_a_265_, 0);
v_idx_267_ = lean_ctor_get(v_a_265_, 1);
v___x_268_ = lean_byte_array_size(v_array_266_);
v___x_269_ = lean_nat_dec_lt(v_idx_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_box(0);
v___x_271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_271_, 0, v_a_265_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
return v___x_271_;
}
else
{
uint8_t v_c_272_; uint8_t v___x_273_; uint8_t v___x_274_; 
v_c_272_ = lean_byte_array_fget(v_array_266_, v_idx_267_);
v___x_273_ = lean_uint32_to_uint8(v_c_264_);
v___x_274_ = lean_uint8_dec_eq(v_c_272_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_275_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__0));
v___x_276_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pByteChar___closed__0));
v___x_277_ = lean_string_push(v___x_276_, v_c_264_);
v___x_278_ = lean_string_append(v___x_275_, v___x_277_);
lean_dec_ref(v___x_277_);
v___x_279_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__1));
v___x_280_ = lean_string_append(v___x_278_, v___x_279_);
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
v___x_282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_282_, 0, v_a_265_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
return v___x_282_;
}
else
{
lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_293_; 
lean_inc(v_idx_267_);
lean_inc_ref(v_array_266_);
v_isSharedCheck_293_ = !lean_is_exclusive(v_a_265_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; lean_object* v_unused_295_; 
v_unused_294_ = lean_ctor_get(v_a_265_, 1);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_a_265_, 0);
lean_dec(v_unused_295_);
v___x_284_ = v_a_265_;
v_isShared_285_ = v_isSharedCheck_293_;
goto v_resetjp_283_;
}
else
{
lean_dec(v_a_265_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_293_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v_it_x27_289_; 
v___x_286_ = lean_unsigned_to_nat(1u);
v___x_287_ = lean_nat_add(v_idx_267_, v___x_286_);
lean_dec(v_idx_267_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v___x_287_);
v_it_x27_289_ = v___x_284_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_array_266_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v___x_287_);
v_it_x27_289_ = v_reuseFailAlloc_292_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_box_uint32(v_c_264_);
v___x_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_291_, 0, v_it_x27_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
return v___x_291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_pByteChar___boxed(lean_object* v_c_296_, lean_object* v_a_297_){
_start:
{
uint32_t v_c_boxed_298_; lean_object* v_res_299_; 
v_c_boxed_298_ = lean_unbox_uint32(v_c_296_);
lean_dec(v_c_296_);
v_res_299_ = l_Std_Internal_Parsec_ByteArray_pByteChar(v_c_boxed_298_, v_a_297_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByteChar(uint32_t v_c_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_array_302_; lean_object* v_idx_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v_array_302_ = lean_ctor_get(v_a_301_, 0);
v_idx_303_ = lean_ctor_get(v_a_301_, 1);
v___x_304_ = lean_byte_array_size(v_array_302_);
v___x_305_ = lean_nat_dec_lt(v_idx_303_, v___x_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_box(0);
v___x_307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_307_, 0, v_a_301_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
return v___x_307_;
}
else
{
uint8_t v___x_308_; uint8_t v_got_309_; uint8_t v___x_310_; 
v___x_308_ = lean_uint32_to_uint8(v_c_300_);
v_got_309_ = lean_byte_array_fget(v_array_302_, v_idx_303_);
v___x_310_ = lean_uint8_dec_eq(v_got_309_, v___x_308_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_311_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__0));
v___x_312_ = lean_uint8_to_nat(v___x_308_);
v___x_313_ = l_Nat_reprFast(v___x_312_);
v___x_314_ = lean_string_append(v___x_311_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_pbyte___closed__1));
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
v___x_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
v___x_318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_318_, 0, v_a_301_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
return v___x_318_;
}
else
{
lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_329_; 
lean_inc(v_idx_303_);
lean_inc_ref(v_array_302_);
v_isSharedCheck_329_ = !lean_is_exclusive(v_a_301_);
if (v_isSharedCheck_329_ == 0)
{
lean_object* v_unused_330_; lean_object* v_unused_331_; 
v_unused_330_ = lean_ctor_get(v_a_301_, 1);
lean_dec(v_unused_330_);
v_unused_331_ = lean_ctor_get(v_a_301_, 0);
lean_dec(v_unused_331_);
v___x_320_ = v_a_301_;
v_isShared_321_ = v_isSharedCheck_329_;
goto v_resetjp_319_;
}
else
{
lean_dec(v_a_301_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_329_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_add(v_idx_303_, v___x_322_);
lean_dec(v_idx_303_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 1, v___x_323_);
v___x_325_ = v___x_320_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_array_302_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v___x_323_);
v___x_325_ = v_reuseFailAlloc_328_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_box(0);
v___x_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
return v___x_327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipByteChar___boxed(lean_object* v_c_332_, lean_object* v_a_333_){
_start:
{
uint32_t v_c_boxed_334_; lean_object* v_res_335_; 
v_c_boxed_334_ = lean_unbox_uint32(v_c_332_);
lean_dec(v_c_332_);
v_res_335_ = l_Std_Internal_Parsec_ByteArray_skipByteChar(v_c_boxed_334_, v_a_333_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_digit(lean_object* v_a_339_){
_start:
{
lean_object* v_array_343_; lean_object* v_idx_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_array_343_ = lean_ctor_get(v_a_339_, 0);
v_idx_344_ = lean_ctor_get(v_a_339_, 1);
v___x_345_ = lean_byte_array_size(v_array_343_);
v___x_346_ = lean_nat_dec_lt(v_idx_344_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_box(0);
v___x_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_348_, 0, v_a_339_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
return v___x_348_;
}
else
{
uint8_t v_c_349_; uint8_t v___x_350_; uint8_t v___x_351_; 
v_c_349_ = lean_byte_array_fget(v_array_343_, v_idx_344_);
v___x_350_ = 48;
v___x_351_ = lean_uint8_dec_le(v___x_350_, v_c_349_);
if (v___x_351_ == 0)
{
goto v___jp_340_;
}
else
{
uint8_t v___x_352_; uint8_t v___x_353_; 
v___x_352_ = 57;
v___x_353_ = lean_uint8_dec_le(v_c_349_, v___x_352_);
if (v___x_353_ == 0)
{
goto v___jp_340_;
}
else
{
lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_365_; 
lean_inc(v_idx_344_);
lean_inc_ref(v_array_343_);
v_isSharedCheck_365_ = !lean_is_exclusive(v_a_339_);
if (v_isSharedCheck_365_ == 0)
{
lean_object* v_unused_366_; lean_object* v_unused_367_; 
v_unused_366_ = lean_ctor_get(v_a_339_, 1);
lean_dec(v_unused_366_);
v_unused_367_ = lean_ctor_get(v_a_339_, 0);
lean_dec(v_unused_367_);
v___x_355_ = v_a_339_;
v_isShared_356_ = v_isSharedCheck_365_;
goto v_resetjp_354_;
}
else
{
lean_dec(v_a_339_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_365_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_it_x27_360_; 
v___x_357_ = lean_unsigned_to_nat(1u);
v___x_358_ = lean_nat_add(v_idx_344_, v___x_357_);
lean_dec(v_idx_344_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 1, v___x_358_);
v_it_x27_360_ = v___x_355_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_array_343_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v___x_358_);
v_it_x27_360_ = v_reuseFailAlloc_364_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
uint32_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_361_ = lean_uint8_to_uint32(v_c_349_);
v___x_362_ = lean_box_uint32(v___x_361_);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v_it_x27_360_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
return v___x_363_;
}
}
}
}
}
v___jp_340_:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_digit___closed__1));
v___x_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_342_, 0, v_a_339_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitToNat(uint8_t v_b_368_){
_start:
{
uint8_t v___x_369_; uint8_t v___x_370_; lean_object* v___x_371_; 
v___x_369_ = 48;
v___x_370_ = lean_uint8_sub(v_b_368_, v___x_369_);
v___x_371_ = lean_uint8_to_nat(v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitToNat___boxed(lean_object* v_b_372_){
_start:
{
uint8_t v_b_boxed_373_; lean_object* v_res_374_; 
v_b_boxed_373_ = lean_unbox(v_b_372_);
v_res_374_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitToNat(v_b_boxed_373_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(lean_object* v_it_375_, lean_object* v_acc_376_){
_start:
{
lean_object* v_array_377_; lean_object* v_idx_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v_array_377_ = lean_ctor_get(v_it_375_, 0);
v_idx_378_ = lean_ctor_get(v_it_375_, 1);
v___x_379_ = lean_byte_array_size(v_array_377_);
v___x_380_ = lean_nat_dec_lt(v_idx_378_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
v___x_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_381_, 0, v_acc_376_);
lean_ctor_set(v___x_381_, 1, v_it_375_);
return v___x_381_;
}
else
{
uint8_t v_candidate_382_; uint8_t v___x_383_; uint8_t v___x_384_; 
v_candidate_382_ = lean_byte_array_fget(v_array_377_, v_idx_378_);
v___x_383_ = 48;
v___x_384_ = lean_uint8_dec_le(v___x_383_, v_candidate_382_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; 
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v_acc_376_);
lean_ctor_set(v___x_385_, 1, v_it_375_);
return v___x_385_;
}
else
{
uint8_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 57;
v___x_387_ = lean_uint8_dec_le(v_candidate_382_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; 
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v_acc_376_);
lean_ctor_set(v___x_388_, 1, v_it_375_);
return v___x_388_;
}
else
{
lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_403_; 
lean_inc(v_idx_378_);
lean_inc_ref(v_array_377_);
v_isSharedCheck_403_ = !lean_is_exclusive(v_it_375_);
if (v_isSharedCheck_403_ == 0)
{
lean_object* v_unused_404_; lean_object* v_unused_405_; 
v_unused_404_ = lean_ctor_get(v_it_375_, 1);
lean_dec(v_unused_404_);
v_unused_405_ = lean_ctor_get(v_it_375_, 0);
lean_dec(v_unused_405_);
v___x_390_ = v_it_375_;
v_isShared_391_ = v_isSharedCheck_403_;
goto v_resetjp_389_;
}
else
{
lean_dec(v_it_375_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_403_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
uint8_t v___x_392_; lean_object* v_digit_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_acc_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_392_ = lean_uint8_sub(v_candidate_382_, v___x_383_);
v_digit_393_ = lean_uint8_to_nat(v___x_392_);
v___x_394_ = lean_unsigned_to_nat(10u);
v___x_395_ = lean_nat_mul(v_acc_376_, v___x_394_);
lean_dec(v_acc_376_);
v_acc_396_ = lean_nat_add(v___x_395_, v_digit_393_);
lean_dec(v___x_395_);
v___x_397_ = lean_unsigned_to_nat(1u);
v___x_398_ = lean_nat_add(v_idx_378_, v___x_397_);
lean_dec(v_idx_378_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v___x_398_);
v___x_400_ = v___x_390_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_array_377_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v___x_398_);
v___x_400_ = v_reuseFailAlloc_402_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
v_it_375_ = v___x_400_;
v_acc_376_ = v_acc_396_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore(lean_object* v_acc_406_, lean_object* v_it_407_){
_start:
{
lean_object* v___x_408_; lean_object* v_fst_409_; lean_object* v_snd_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
v___x_408_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_407_, v_acc_406_);
v_fst_409_ = lean_ctor_get(v___x_408_, 0);
v_snd_410_ = lean_ctor_get(v___x_408_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_408_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_snd_410_);
lean_inc(v_fst_409_);
lean_dec(v___x_408_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v_fst_409_);
lean_ctor_set(v___x_412_, 0, v_snd_410_);
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_snd_410_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_fst_409_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_digits(lean_object* v_a_418_){
_start:
{
lean_object* v_array_422_; lean_object* v_idx_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v_array_422_ = lean_ctor_get(v_a_418_, 0);
v_idx_423_ = lean_ctor_get(v_a_418_, 1);
v___x_424_ = lean_byte_array_size(v_array_422_);
v___x_425_ = lean_nat_dec_lt(v_idx_423_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_box(0);
v___x_427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_427_, 0, v_a_418_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
return v___x_427_;
}
else
{
uint8_t v_c_428_; uint8_t v___x_429_; uint8_t v___x_430_; 
v_c_428_ = lean_byte_array_fget(v_array_422_, v_idx_423_);
v___x_429_ = 48;
v___x_430_ = lean_uint8_dec_le(v___x_429_, v_c_428_);
if (v___x_430_ == 0)
{
goto v___jp_419_;
}
else
{
uint8_t v___x_431_; uint8_t v___x_432_; 
v___x_431_ = 57;
v___x_432_ = lean_uint8_dec_le(v_c_428_, v___x_431_);
if (v___x_432_ == 0)
{
goto v___jp_419_;
}
else
{
lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_455_; 
lean_inc(v_idx_423_);
lean_inc_ref(v_array_422_);
v_isSharedCheck_455_ = !lean_is_exclusive(v_a_418_);
if (v_isSharedCheck_455_ == 0)
{
lean_object* v_unused_456_; lean_object* v_unused_457_; 
v_unused_456_ = lean_ctor_get(v_a_418_, 1);
lean_dec(v_unused_456_);
v_unused_457_ = lean_ctor_get(v_a_418_, 0);
lean_dec(v_unused_457_);
v___x_434_ = v_a_418_;
v_isShared_435_ = v_isSharedCheck_455_;
goto v_resetjp_433_;
}
else
{
lean_dec(v_a_418_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_455_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v_it_x27_439_; 
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = lean_nat_add(v_idx_423_, v___x_436_);
lean_dec(v_idx_423_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v___x_437_);
v_it_x27_439_ = v___x_434_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_array_422_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v___x_437_);
v_it_x27_439_ = v_reuseFailAlloc_454_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
uint32_t v___x_440_; uint8_t v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_fst_445_; lean_object* v_snd_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
v___x_440_ = lean_uint8_to_uint32(v_c_428_);
v___x_441_ = lean_uint32_to_uint8(v___x_440_);
v___x_442_ = lean_uint8_sub(v___x_441_, v___x_429_);
v___x_443_ = lean_uint8_to_nat(v___x_442_);
v___x_444_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_439_, v___x_443_);
v_fst_445_ = lean_ctor_get(v___x_444_, 0);
v_snd_446_ = lean_ctor_get(v___x_444_, 1);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_444_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_snd_446_);
lean_inc(v_fst_445_);
lean_dec(v___x_444_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_fst_445_);
lean_ctor_set(v___x_448_, 0, v_snd_446_);
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_snd_446_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_fst_445_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
}
}
v___jp_419_:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_digit___closed__1));
v___x_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_421_, 0, v_a_418_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
return v___x_421_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_hexDigit(lean_object* v_a_461_){
_start:
{
lean_object* v_array_465_; lean_object* v_idx_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_array_465_ = lean_ctor_get(v_a_461_, 0);
v_idx_466_ = lean_ctor_get(v_a_461_, 1);
v___x_467_ = lean_byte_array_size(v_array_465_);
v___x_468_ = lean_nat_dec_lt(v_idx_466_, v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_box(0);
v___x_470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_470_, 0, v_a_461_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
return v___x_470_;
}
else
{
uint8_t v_c_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v_it_x27_474_; uint8_t v___x_489_; uint8_t v___x_490_; 
v_c_471_ = lean_byte_array_fget(v_array_465_, v_idx_466_);
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = lean_nat_add(v_idx_466_, v___x_472_);
lean_inc_ref(v_array_465_);
v_it_x27_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_474_, 0, v_array_465_);
lean_ctor_set(v_it_x27_474_, 1, v___x_473_);
v___x_489_ = 48;
v___x_490_ = lean_uint8_dec_le(v___x_489_, v_c_471_);
if (v___x_490_ == 0)
{
goto v___jp_484_;
}
else
{
uint8_t v___x_491_; uint8_t v___x_492_; 
v___x_491_ = 57;
v___x_492_ = lean_uint8_dec_le(v_c_471_, v___x_491_);
if (v___x_492_ == 0)
{
goto v___jp_484_;
}
else
{
lean_dec_ref(v_a_461_);
goto v___jp_475_;
}
}
v___jp_475_:
{
uint32_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_uint8_to_uint32(v_c_471_);
v___x_477_ = lean_box_uint32(v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v_it_x27_474_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
return v___x_478_;
}
v___jp_479_:
{
uint8_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 65;
v___x_481_ = lean_uint8_dec_le(v___x_480_, v_c_471_);
if (v___x_481_ == 0)
{
lean_dec_ref_known(v_it_x27_474_, 2);
goto v___jp_462_;
}
else
{
uint8_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 70;
v___x_483_ = lean_uint8_dec_le(v_c_471_, v___x_482_);
if (v___x_483_ == 0)
{
lean_dec_ref_known(v_it_x27_474_, 2);
goto v___jp_462_;
}
else
{
lean_dec_ref(v_a_461_);
goto v___jp_475_;
}
}
}
v___jp_484_:
{
uint8_t v___x_485_; uint8_t v___x_486_; 
v___x_485_ = 97;
v___x_486_ = lean_uint8_dec_le(v___x_485_, v_c_471_);
if (v___x_486_ == 0)
{
goto v___jp_479_;
}
else
{
uint8_t v___x_487_; uint8_t v___x_488_; 
v___x_487_ = 102;
v___x_488_ = lean_uint8_dec_le(v_c_471_, v___x_487_);
if (v___x_488_ == 0)
{
goto v___jp_479_;
}
else
{
lean_dec_ref(v_a_461_);
goto v___jp_475_;
}
}
}
}
v___jp_462_:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_hexDigit___closed__1));
v___x_464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_464_, 0, v_a_461_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
return v___x_464_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_octDigit(lean_object* v_a_496_){
_start:
{
lean_object* v_array_500_; lean_object* v_idx_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v_array_500_ = lean_ctor_get(v_a_496_, 0);
v_idx_501_ = lean_ctor_get(v_a_496_, 1);
v___x_502_ = lean_byte_array_size(v_array_500_);
v___x_503_ = lean_nat_dec_lt(v_idx_501_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_box(0);
v___x_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_505_, 0, v_a_496_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
return v___x_505_;
}
else
{
uint8_t v_c_506_; uint8_t v___x_507_; uint8_t v___x_508_; 
v_c_506_ = lean_byte_array_fget(v_array_500_, v_idx_501_);
v___x_507_ = 48;
v___x_508_ = lean_uint8_dec_le(v___x_507_, v_c_506_);
if (v___x_508_ == 0)
{
goto v___jp_497_;
}
else
{
uint8_t v___x_509_; uint8_t v___x_510_; 
v___x_509_ = 55;
v___x_510_ = lean_uint8_dec_le(v_c_506_, v___x_509_);
if (v___x_510_ == 0)
{
goto v___jp_497_;
}
else
{
lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_522_; 
lean_inc(v_idx_501_);
lean_inc_ref(v_array_500_);
v_isSharedCheck_522_ = !lean_is_exclusive(v_a_496_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; lean_object* v_unused_524_; 
v_unused_523_ = lean_ctor_get(v_a_496_, 1);
lean_dec(v_unused_523_);
v_unused_524_ = lean_ctor_get(v_a_496_, 0);
lean_dec(v_unused_524_);
v___x_512_ = v_a_496_;
v_isShared_513_ = v_isSharedCheck_522_;
goto v_resetjp_511_;
}
else
{
lean_dec(v_a_496_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_522_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v_it_x27_517_; 
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_add(v_idx_501_, v___x_514_);
lean_dec(v_idx_501_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v___x_515_);
v_it_x27_517_ = v___x_512_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_array_500_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_515_);
v_it_x27_517_ = v_reuseFailAlloc_521_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
uint32_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_518_ = lean_uint8_to_uint32(v_c_506_);
v___x_519_ = lean_box_uint32(v___x_518_);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v_it_x27_517_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
return v___x_520_;
}
}
}
}
}
v___jp_497_:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_octDigit___closed__1));
v___x_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_499_, 0, v_a_496_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
return v___x_499_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_asciiLetter(lean_object* v_a_528_){
_start:
{
lean_object* v_array_532_; lean_object* v_idx_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_array_532_ = lean_ctor_get(v_a_528_, 0);
v_idx_533_ = lean_ctor_get(v_a_528_, 1);
v___x_534_ = lean_byte_array_size(v_array_532_);
v___x_535_ = lean_nat_dec_lt(v_idx_533_, v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_box(0);
v___x_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_537_, 0, v_a_528_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
return v___x_537_;
}
else
{
uint8_t v_c_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v_it_x27_541_; uint8_t v___x_551_; uint8_t v___x_552_; 
v_c_538_ = lean_byte_array_fget(v_array_532_, v_idx_533_);
v___x_539_ = lean_unsigned_to_nat(1u);
v___x_540_ = lean_nat_add(v_idx_533_, v___x_539_);
lean_inc_ref(v_array_532_);
v_it_x27_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_541_, 0, v_array_532_);
lean_ctor_set(v_it_x27_541_, 1, v___x_540_);
v___x_551_ = 65;
v___x_552_ = lean_uint8_dec_le(v___x_551_, v_c_538_);
if (v___x_552_ == 0)
{
goto v___jp_546_;
}
else
{
uint8_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 90;
v___x_554_ = lean_uint8_dec_le(v_c_538_, v___x_553_);
if (v___x_554_ == 0)
{
goto v___jp_546_;
}
else
{
lean_dec_ref(v_a_528_);
goto v___jp_542_;
}
}
v___jp_542_:
{
uint32_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = lean_uint8_to_uint32(v_c_538_);
v___x_544_ = lean_box_uint32(v___x_543_);
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v_it_x27_541_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
return v___x_545_;
}
v___jp_546_:
{
uint8_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = 97;
v___x_548_ = lean_uint8_dec_le(v___x_547_, v_c_538_);
if (v___x_548_ == 0)
{
lean_dec_ref_known(v_it_x27_541_, 2);
goto v___jp_529_;
}
else
{
uint8_t v___x_549_; uint8_t v___x_550_; 
v___x_549_ = 122;
v___x_550_ = lean_uint8_dec_le(v_c_538_, v___x_549_);
if (v___x_550_ == 0)
{
lean_dec_ref_known(v_it_x27_541_, 2);
goto v___jp_529_;
}
else
{
lean_dec_ref(v_a_528_);
goto v___jp_542_;
}
}
}
}
v___jp_529_:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_asciiLetter___closed__1));
v___x_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_531_, 0, v_a_528_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipWs(lean_object* v_it_555_){
_start:
{
lean_object* v_array_556_; lean_object* v_idx_557_; lean_object* v___x_563_; uint8_t v___x_564_; 
v_array_556_ = lean_ctor_get(v_it_555_, 0);
v_idx_557_ = lean_ctor_get(v_it_555_, 1);
v___x_563_ = lean_byte_array_size(v_array_556_);
v___x_564_ = lean_nat_dec_lt(v_idx_557_, v___x_563_);
if (v___x_564_ == 0)
{
return v_it_555_;
}
else
{
uint8_t v_b_565_; uint8_t v___x_566_; uint8_t v___x_567_; 
v_b_565_ = lean_byte_array_fget(v_array_556_, v_idx_557_);
v___x_566_ = 9;
v___x_567_ = lean_uint8_dec_eq(v_b_565_, v___x_566_);
if (v___x_567_ == 0)
{
uint8_t v___x_568_; uint8_t v___x_569_; 
v___x_568_ = 10;
v___x_569_ = lean_uint8_dec_eq(v_b_565_, v___x_568_);
if (v___x_569_ == 0)
{
uint8_t v___x_570_; uint8_t v___x_571_; 
v___x_570_ = 13;
v___x_571_ = lean_uint8_dec_eq(v_b_565_, v___x_570_);
if (v___x_571_ == 0)
{
uint8_t v___x_572_; uint8_t v___x_573_; 
v___x_572_ = 32;
v___x_573_ = lean_uint8_dec_eq(v_b_565_, v___x_572_);
if (v___x_573_ == 0)
{
return v_it_555_;
}
else
{
lean_inc(v_idx_557_);
lean_inc_ref(v_array_556_);
lean_dec_ref(v_it_555_);
goto v___jp_558_;
}
}
else
{
lean_inc(v_idx_557_);
lean_inc_ref(v_array_556_);
lean_dec_ref(v_it_555_);
goto v___jp_558_;
}
}
else
{
lean_inc(v_idx_557_);
lean_inc_ref(v_array_556_);
lean_dec_ref(v_it_555_);
goto v___jp_558_;
}
}
else
{
lean_inc(v_idx_557_);
lean_inc_ref(v_array_556_);
lean_dec_ref(v_it_555_);
goto v___jp_558_;
}
}
v___jp_558_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_add(v_idx_557_, v___x_559_);
lean_dec(v_idx_557_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_array_556_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v_it_555_ = v___x_561_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_ws(lean_object* v_it_574_){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_skipWs(v_it_574_);
v___x_576_ = lean_box(0);
v___x_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_575_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_take(lean_object* v_n_578_, lean_object* v_it_579_){
_start:
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = l_ByteArray_Iterator_remainingBytes(v_it_579_);
v___x_581_ = lean_nat_dec_lt(v___x_580_, v_n_578_);
lean_dec(v___x_580_);
if (v___x_581_ == 0)
{
lean_object* v_array_582_; lean_object* v_idx_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_602_; 
v_array_582_ = lean_ctor_get(v_it_579_, 0);
v_idx_583_ = lean_ctor_get(v_it_579_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_it_579_);
if (v_isSharedCheck_602_ == 0)
{
v___x_585_ = v_it_579_;
v_isShared_586_ = v_isSharedCheck_602_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_idx_583_);
lean_inc(v_array_582_);
lean_dec(v_it_579_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_602_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; lean_object* v___x_589_; 
v___x_587_ = lean_nat_add(v_idx_583_, v_n_578_);
lean_inc(v___x_587_);
lean_inc_ref(v_array_582_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 1, v___x_587_);
v___x_589_ = v___x_585_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_array_582_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___x_587_);
v___x_589_ = v_reuseFailAlloc_601_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v_lower_591_; lean_object* v_upper_592_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___y_598_; uint8_t v___x_600_; 
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lean_byte_array_size(v_array_582_);
v___x_600_ = lean_nat_dec_le(v_idx_583_, v___x_595_);
if (v___x_600_ == 0)
{
v___y_598_ = v_idx_583_;
goto v___jp_597_;
}
else
{
lean_dec(v_idx_583_);
v___y_598_ = v___x_595_;
goto v___jp_597_;
}
v___jp_590_:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = l_ByteArray_toByteSlice(v_array_582_, v_lower_591_, v_upper_592_);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_589_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
return v___x_594_;
}
v___jp_597_:
{
uint8_t v___x_599_; 
v___x_599_ = lean_nat_dec_le(v___x_587_, v___x_596_);
if (v___x_599_ == 0)
{
lean_dec(v___x_587_);
v_lower_591_ = v___y_598_;
v_upper_592_ = v___x_596_;
goto v___jp_590_;
}
else
{
v_lower_591_ = v___y_598_;
v_upper_592_ = v___x_587_;
goto v___jp_590_;
}
}
}
}
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_box(0);
v___x_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_604_, 0, v_it_579_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
return v___x_604_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_take___boxed(lean_object* v_n_605_, lean_object* v_it_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Std_Internal_Parsec_ByteArray_take(v_n_605_, v_it_606_);
lean_dec(v_n_605_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhile(lean_object* v_pred_608_, lean_object* v_count_609_, lean_object* v_iter_610_){
_start:
{
lean_object* v_array_611_; lean_object* v_idx_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_array_611_ = lean_ctor_get(v_iter_610_, 0);
v_idx_612_ = lean_ctor_get(v_iter_610_, 1);
v___x_613_ = lean_byte_array_size(v_array_611_);
v___x_614_ = lean_nat_dec_lt(v_idx_612_, v___x_613_);
if (v___x_614_ == 0)
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec_ref(v_pred_608_);
v___x_615_ = 1;
v___x_616_ = lean_box(v___x_615_);
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v_iter_610_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v_count_609_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
return v___x_618_;
}
else
{
uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_619_ = lean_byte_array_fget(v_array_611_, v_idx_612_);
v___x_620_ = lean_box(v___x_619_);
lean_inc_ref(v_pred_608_);
v___x_621_ = lean_apply_1(v_pred_608_, v___x_620_);
v___x_622_ = lean_unbox(v___x_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec_ref(v_pred_608_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v_iter_610_);
lean_ctor_set(v___x_623_, 1, v___x_621_);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v_count_609_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
return v___x_624_;
}
else
{
lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_635_; 
lean_inc(v_idx_612_);
lean_inc_ref(v_array_611_);
v_isSharedCheck_635_ = !lean_is_exclusive(v_iter_610_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; lean_object* v_unused_637_; 
v_unused_636_ = lean_ctor_get(v_iter_610_, 1);
lean_dec(v_unused_636_);
v_unused_637_ = lean_ctor_get(v_iter_610_, 0);
lean_dec(v_unused_637_);
v___x_626_ = v_iter_610_;
v_isShared_627_ = v_isSharedCheck_635_;
goto v_resetjp_625_;
}
else
{
lean_dec(v_iter_610_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_635_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_628_ = lean_unsigned_to_nat(1u);
v___x_629_ = lean_nat_add(v_count_609_, v___x_628_);
lean_dec(v_count_609_);
v___x_630_ = lean_nat_add(v_idx_612_, v___x_628_);
lean_dec(v_idx_612_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_630_);
v___x_632_ = v___x_626_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_array_611_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_630_);
v___x_632_ = v_reuseFailAlloc_634_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
v_count_609_ = v___x_629_;
v_iter_610_ = v___x_632_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object* v_pred_638_, lean_object* v_limit_639_, lean_object* v_count_640_, lean_object* v_iter_641_){
_start:
{
uint8_t v___x_647_; 
v___x_647_ = lean_nat_dec_le(v_limit_639_, v_count_640_);
if (v___x_647_ == 0)
{
lean_object* v_array_648_; lean_object* v_idx_649_; lean_object* v___x_650_; uint8_t v___x_651_; 
v_array_648_ = lean_ctor_get(v_iter_641_, 0);
v_idx_649_ = lean_ctor_get(v_iter_641_, 1);
v___x_650_ = lean_byte_array_size(v_array_648_);
v___x_651_ = lean_nat_dec_lt(v_idx_649_, v___x_650_);
if (v___x_651_ == 0)
{
uint8_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec_ref(v_pred_638_);
v___x_652_ = 1;
v___x_653_ = lean_box(v___x_652_);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v_iter_641_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v_count_640_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
return v___x_655_;
}
else
{
uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_656_ = lean_byte_array_fget(v_array_648_, v_idx_649_);
v___x_657_ = lean_box(v___x_656_);
lean_inc_ref(v_pred_638_);
v___x_658_ = lean_apply_1(v_pred_638_, v___x_657_);
v___x_659_ = lean_unbox(v___x_658_);
if (v___x_659_ == 0)
{
lean_dec_ref(v_pred_638_);
goto v___jp_642_;
}
else
{
lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_670_; 
lean_inc(v_idx_649_);
lean_inc_ref(v_array_648_);
v_isSharedCheck_670_ = !lean_is_exclusive(v_iter_641_);
if (v_isSharedCheck_670_ == 0)
{
lean_object* v_unused_671_; lean_object* v_unused_672_; 
v_unused_671_ = lean_ctor_get(v_iter_641_, 1);
lean_dec(v_unused_671_);
v_unused_672_ = lean_ctor_get(v_iter_641_, 0);
lean_dec(v_unused_672_);
v___x_661_ = v_iter_641_;
v_isShared_662_ = v_isSharedCheck_670_;
goto v_resetjp_660_;
}
else
{
lean_dec(v_iter_641_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_670_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_663_ = lean_unsigned_to_nat(1u);
v___x_664_ = lean_nat_add(v_count_640_, v___x_663_);
lean_dec(v_count_640_);
v___x_665_ = lean_nat_add(v_idx_649_, v___x_663_);
lean_dec(v_idx_649_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_665_);
v___x_667_ = v___x_661_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_array_648_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v___x_665_);
v___x_667_ = v_reuseFailAlloc_669_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
v_count_640_ = v___x_664_;
v_iter_641_ = v___x_667_;
goto _start;
}
}
}
}
}
else
{
lean_dec_ref(v_pred_638_);
goto v___jp_642_;
}
v___jp_642_:
{
uint8_t v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_643_ = 0;
v___x_644_ = lean_box(v___x_643_);
v___x_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_645_, 0, v_iter_641_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v_count_640_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo___boxed(lean_object* v_pred_673_, lean_object* v_limit_674_, lean_object* v_count_675_, lean_object* v_iter_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v_pred_673_, v_limit_674_, v_count_675_, v_iter_676_);
lean_dec(v_limit_674_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhile(lean_object* v_pred_678_, lean_object* v_it_679_){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_snd_682_; lean_object* v_snd_683_; uint8_t v___x_684_; 
v___x_680_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_it_679_);
v___x_681_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhile(v_pred_678_, v___x_680_, v_it_679_);
v_snd_682_ = lean_ctor_get(v___x_681_, 1);
lean_inc(v_snd_682_);
v_snd_683_ = lean_ctor_get(v_snd_682_, 1);
v___x_684_ = lean_unbox(v_snd_683_);
if (v___x_684_ == 0)
{
lean_object* v_fst_685_; lean_object* v_fst_686_; lean_object* v_array_687_; lean_object* v_idx_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_705_; 
v_fst_685_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_fst_685_);
lean_dec_ref(v___x_681_);
v_fst_686_ = lean_ctor_get(v_snd_682_, 0);
lean_inc(v_fst_686_);
lean_dec(v_snd_682_);
v_array_687_ = lean_ctor_get(v_it_679_, 0);
v_idx_688_ = lean_ctor_get(v_it_679_, 1);
v_isSharedCheck_705_ = !lean_is_exclusive(v_it_679_);
if (v_isSharedCheck_705_ == 0)
{
v___x_690_ = v_it_679_;
v_isShared_691_ = v_isSharedCheck_705_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_idx_688_);
lean_inc(v_array_687_);
lean_dec(v_it_679_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_705_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_lower_693_; lean_object* v_upper_694_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___y_702_; uint8_t v___x_704_; 
v___x_699_ = lean_nat_add(v_idx_688_, v_fst_685_);
lean_dec(v_fst_685_);
v___x_700_ = lean_byte_array_size(v_array_687_);
v___x_704_ = lean_nat_dec_le(v_idx_688_, v___x_680_);
if (v___x_704_ == 0)
{
v___y_702_ = v_idx_688_;
goto v___jp_701_;
}
else
{
lean_dec(v_idx_688_);
v___y_702_ = v___x_680_;
goto v___jp_701_;
}
v___jp_692_:
{
lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_695_ = l_ByteArray_toByteSlice(v_array_687_, v_lower_693_, v_upper_694_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 1, v___x_695_);
lean_ctor_set(v___x_690_, 0, v_fst_686_);
v___x_697_ = v___x_690_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_fst_686_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
v___jp_701_:
{
uint8_t v___x_703_; 
v___x_703_ = lean_nat_dec_le(v___x_699_, v___x_700_);
if (v___x_703_ == 0)
{
lean_dec(v___x_699_);
v_lower_693_ = v___y_702_;
v_upper_694_ = v___x_700_;
goto v___jp_692_;
}
else
{
v_lower_693_ = v___y_702_;
v_upper_694_ = v___x_699_;
goto v___jp_692_;
}
}
}
}
else
{
lean_object* v_fst_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_714_; 
lean_dec_ref(v___x_681_);
lean_dec_ref(v_it_679_);
v_fst_706_ = lean_ctor_get(v_snd_682_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v_snd_682_);
if (v_isSharedCheck_714_ == 0)
{
lean_object* v_unused_715_; 
v_unused_715_ = lean_ctor_get(v_snd_682_, 1);
lean_dec(v_unused_715_);
v___x_708_ = v_snd_682_;
v_isShared_709_ = v_isSharedCheck_714_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_fst_706_);
lean_dec(v_snd_682_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_714_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_710_ = lean_box(0);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 1);
lean_ctor_set(v___x_708_, 1, v___x_710_);
v___x_712_ = v___x_708_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_fst_706_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0(lean_object* v_pred_716_, uint8_t v_b_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_718_ = lean_box(v_b_717_);
v___x_719_ = lean_apply_1(v_pred_716_, v___x_718_);
v___x_720_ = lean_unbox(v___x_719_);
if (v___x_720_ == 0)
{
uint8_t v___x_721_; 
v___x_721_ = 1;
return v___x_721_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = 0;
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0___boxed(lean_object* v_pred_723_, lean_object* v_b_724_){
_start:
{
uint8_t v_b_boxed_725_; uint8_t v_res_726_; lean_object* v_r_727_; 
v_b_boxed_725_ = lean_unbox(v_b_724_);
v_res_726_ = l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0(v_pred_723_, v_b_boxed_725_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntil(lean_object* v_pred_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___f_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v_snd_733_; lean_object* v_snd_734_; uint8_t v___x_735_; 
v___f_730_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0___boxed), 2, 1);
lean_closure_set(v___f_730_, 0, v_pred_728_);
v___x_731_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_729_);
v___x_732_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhile(v___f_730_, v___x_731_, v_a_729_);
v_snd_733_ = lean_ctor_get(v___x_732_, 1);
lean_inc(v_snd_733_);
v_snd_734_ = lean_ctor_get(v_snd_733_, 1);
v___x_735_ = lean_unbox(v_snd_734_);
if (v___x_735_ == 0)
{
lean_object* v_fst_736_; lean_object* v_fst_737_; lean_object* v_array_738_; lean_object* v_idx_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_756_; 
v_fst_736_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_fst_736_);
lean_dec_ref(v___x_732_);
v_fst_737_ = lean_ctor_get(v_snd_733_, 0);
lean_inc(v_fst_737_);
lean_dec(v_snd_733_);
v_array_738_ = lean_ctor_get(v_a_729_, 0);
v_idx_739_ = lean_ctor_get(v_a_729_, 1);
v_isSharedCheck_756_ = !lean_is_exclusive(v_a_729_);
if (v_isSharedCheck_756_ == 0)
{
v___x_741_ = v_a_729_;
v_isShared_742_ = v_isSharedCheck_756_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_idx_739_);
lean_inc(v_array_738_);
lean_dec(v_a_729_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_756_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v_lower_744_; lean_object* v_upper_745_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___y_753_; uint8_t v___x_755_; 
v___x_750_ = lean_nat_add(v_idx_739_, v_fst_736_);
lean_dec(v_fst_736_);
v___x_751_ = lean_byte_array_size(v_array_738_);
v___x_755_ = lean_nat_dec_le(v_idx_739_, v___x_731_);
if (v___x_755_ == 0)
{
v___y_753_ = v_idx_739_;
goto v___jp_752_;
}
else
{
lean_dec(v_idx_739_);
v___y_753_ = v___x_731_;
goto v___jp_752_;
}
v___jp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_746_ = l_ByteArray_toByteSlice(v_array_738_, v_lower_744_, v_upper_745_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 1, v___x_746_);
lean_ctor_set(v___x_741_, 0, v_fst_737_);
v___x_748_ = v___x_741_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_fst_737_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v___x_746_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
v___jp_752_:
{
uint8_t v___x_754_; 
v___x_754_ = lean_nat_dec_le(v___x_750_, v___x_751_);
if (v___x_754_ == 0)
{
lean_dec(v___x_750_);
v_lower_744_ = v___y_753_;
v_upper_745_ = v___x_751_;
goto v___jp_743_;
}
else
{
v_lower_744_ = v___y_753_;
v_upper_745_ = v___x_750_;
goto v___jp_743_;
}
}
}
}
else
{
lean_object* v_fst_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_765_; 
lean_dec_ref(v___x_732_);
lean_dec_ref(v_a_729_);
v_fst_757_ = lean_ctor_get(v_snd_733_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v_snd_733_);
if (v_isSharedCheck_765_ == 0)
{
lean_object* v_unused_766_; 
v_unused_766_ = lean_ctor_get(v_snd_733_, 1);
lean_dec(v_unused_766_);
v___x_759_ = v_snd_733_;
v_isShared_760_ = v_isSharedCheck_765_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_fst_757_);
lean_dec(v_snd_733_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_765_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_761_; lean_object* v___x_763_; 
v___x_761_ = lean_box(0);
if (v_isShared_760_ == 0)
{
lean_ctor_set_tag(v___x_759_, 1);
lean_ctor_set(v___x_759_, 1, v___x_761_);
v___x_763_ = v___x_759_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_fst_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipWhile(lean_object* v_pred_767_, lean_object* v_it_768_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_snd_771_; lean_object* v_snd_772_; uint8_t v___x_773_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhile(v_pred_767_, v___x_769_, v_it_768_);
v_snd_771_ = lean_ctor_get(v___x_770_, 1);
lean_inc(v_snd_771_);
lean_dec_ref(v___x_770_);
v_snd_772_ = lean_ctor_get(v_snd_771_, 1);
v___x_773_ = lean_unbox(v_snd_772_);
if (v___x_773_ == 0)
{
lean_object* v_fst_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_782_; 
v_fst_774_ = lean_ctor_get(v_snd_771_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v_snd_771_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v_snd_771_, 1);
lean_dec(v_unused_783_);
v___x_776_ = v_snd_771_;
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_fst_774_);
lean_dec(v_snd_771_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_778_ = lean_box(0);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_778_);
v___x_780_ = v___x_776_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_fst_774_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_fst_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_792_; 
v_fst_784_ = lean_ctor_get(v_snd_771_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v_snd_771_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v_snd_771_, 1);
lean_dec(v_unused_793_);
v___x_786_ = v_snd_771_;
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_fst_784_);
lean_dec(v_snd_771_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = lean_box(0);
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 1);
lean_ctor_set(v___x_786_, 1, v___x_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_fst_784_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipUntil(lean_object* v_pred_794_, lean_object* v_a_795_){
_start:
{
lean_object* v___f_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_snd_799_; lean_object* v_snd_800_; uint8_t v___x_801_; 
v___f_796_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0___boxed), 2, 1);
lean_closure_set(v___f_796_, 0, v_pred_794_);
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhile(v___f_796_, v___x_797_, v_a_795_);
v_snd_799_ = lean_ctor_get(v___x_798_, 1);
lean_inc(v_snd_799_);
lean_dec_ref(v___x_798_);
v_snd_800_ = lean_ctor_get(v_snd_799_, 1);
v___x_801_ = lean_unbox(v_snd_800_);
if (v___x_801_ == 0)
{
lean_object* v_fst_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_810_; 
v_fst_802_ = lean_ctor_get(v_snd_799_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v_snd_799_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; 
v_unused_811_ = lean_ctor_get(v_snd_799_, 1);
lean_dec(v_unused_811_);
v___x_804_ = v_snd_799_;
v_isShared_805_ = v_isSharedCheck_810_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_fst_802_);
lean_dec(v_snd_799_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_810_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = lean_box(0);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 1, v___x_806_);
v___x_808_ = v___x_804_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_fst_802_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v___x_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
else
{
lean_object* v_fst_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_820_; 
v_fst_812_ = lean_ctor_get(v_snd_799_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_snd_799_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v_snd_799_, 1);
lean_dec(v_unused_821_);
v___x_814_ = v_snd_799_;
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_fst_812_);
lean_dec(v_snd_799_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lean_box(0);
if (v_isShared_815_ == 0)
{
lean_ctor_set_tag(v___x_814_, 1);
lean_ctor_set(v___x_814_, 1, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_fst_812_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo(lean_object* v_pred_822_, lean_object* v_limit_823_, lean_object* v_it_824_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_snd_827_; lean_object* v_snd_828_; uint8_t v___x_829_; 
v___x_825_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_it_824_);
v___x_826_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v_pred_822_, v_limit_823_, v___x_825_, v_it_824_);
v_snd_827_ = lean_ctor_get(v___x_826_, 1);
lean_inc(v_snd_827_);
v_snd_828_ = lean_ctor_get(v_snd_827_, 1);
v___x_829_ = lean_unbox(v_snd_828_);
if (v___x_829_ == 0)
{
lean_object* v_fst_830_; lean_object* v_fst_831_; lean_object* v_array_832_; lean_object* v_idx_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_850_; 
v_fst_830_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_fst_830_);
lean_dec_ref(v___x_826_);
v_fst_831_ = lean_ctor_get(v_snd_827_, 0);
lean_inc(v_fst_831_);
lean_dec(v_snd_827_);
v_array_832_ = lean_ctor_get(v_it_824_, 0);
v_idx_833_ = lean_ctor_get(v_it_824_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v_it_824_);
if (v_isSharedCheck_850_ == 0)
{
v___x_835_ = v_it_824_;
v_isShared_836_ = v_isSharedCheck_850_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_idx_833_);
lean_inc(v_array_832_);
lean_dec(v_it_824_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_850_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v_lower_838_; lean_object* v_upper_839_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___y_847_; uint8_t v___x_849_; 
v___x_844_ = lean_nat_add(v_idx_833_, v_fst_830_);
lean_dec(v_fst_830_);
v___x_845_ = lean_byte_array_size(v_array_832_);
v___x_849_ = lean_nat_dec_le(v_idx_833_, v___x_825_);
if (v___x_849_ == 0)
{
v___y_847_ = v_idx_833_;
goto v___jp_846_;
}
else
{
lean_dec(v_idx_833_);
v___y_847_ = v___x_825_;
goto v___jp_846_;
}
v___jp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = l_ByteArray_toByteSlice(v_array_832_, v_lower_838_, v_upper_839_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_840_);
lean_ctor_set(v___x_835_, 0, v_fst_831_);
v___x_842_ = v___x_835_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_fst_831_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
v___jp_846_:
{
uint8_t v___x_848_; 
v___x_848_ = lean_nat_dec_le(v___x_844_, v___x_845_);
if (v___x_848_ == 0)
{
lean_dec(v___x_844_);
v_lower_838_ = v___y_847_;
v_upper_839_ = v___x_845_;
goto v___jp_837_;
}
else
{
v_lower_838_ = v___y_847_;
v_upper_839_ = v___x_844_;
goto v___jp_837_;
}
}
}
}
else
{
lean_object* v_fst_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_859_; 
lean_dec_ref(v___x_826_);
lean_dec_ref(v_it_824_);
v_fst_851_ = lean_ctor_get(v_snd_827_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v_snd_827_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v_snd_827_, 1);
lean_dec(v_unused_860_);
v___x_853_ = v_snd_827_;
v_isShared_854_ = v_isSharedCheck_859_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_fst_851_);
lean_dec(v_snd_827_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_859_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_855_ = lean_box(0);
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 1);
lean_ctor_set(v___x_853_, 1, v___x_855_);
v___x_857_ = v___x_853_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_fst_851_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo___boxed(lean_object* v_pred_861_, lean_object* v_limit_862_, lean_object* v_it_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Std_Internal_Parsec_ByteArray_takeWhileUpTo(v_pred_861_, v_limit_862_, v_it_863_);
lean_dec(v_limit_862_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1(lean_object* v_pred_868_, lean_object* v_limit_869_, lean_object* v_it_870_){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v_snd_873_; lean_object* v_snd_874_; uint8_t v___x_875_; 
v___x_871_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_it_870_);
v___x_872_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v_pred_868_, v_limit_869_, v___x_871_, v_it_870_);
v_snd_873_ = lean_ctor_get(v___x_872_, 1);
lean_inc(v_snd_873_);
v_snd_874_ = lean_ctor_get(v_snd_873_, 1);
v___x_875_ = lean_unbox(v_snd_874_);
if (v___x_875_ == 0)
{
lean_object* v_fst_876_; lean_object* v_fst_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_905_; 
v_fst_876_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_fst_876_);
lean_dec_ref(v___x_872_);
v_fst_877_ = lean_ctor_get(v_snd_873_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v_snd_873_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; 
v_unused_906_ = lean_ctor_get(v_snd_873_, 1);
lean_dec(v_unused_906_);
v___x_879_ = v_snd_873_;
v_isShared_880_ = v_isSharedCheck_905_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_fst_877_);
lean_dec(v_snd_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_905_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
uint8_t v___x_881_; 
v___x_881_ = lean_nat_dec_eq(v_fst_876_, v___x_871_);
if (v___x_881_ == 0)
{
lean_object* v_array_882_; lean_object* v_idx_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_900_; 
lean_del_object(v___x_879_);
v_array_882_ = lean_ctor_get(v_it_870_, 0);
v_idx_883_ = lean_ctor_get(v_it_870_, 1);
v_isSharedCheck_900_ = !lean_is_exclusive(v_it_870_);
if (v_isSharedCheck_900_ == 0)
{
v___x_885_ = v_it_870_;
v_isShared_886_ = v_isSharedCheck_900_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_idx_883_);
lean_inc(v_array_882_);
lean_dec(v_it_870_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_900_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v_lower_888_; lean_object* v_upper_889_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___y_897_; uint8_t v___x_899_; 
v___x_894_ = lean_nat_add(v_idx_883_, v_fst_876_);
lean_dec(v_fst_876_);
v___x_895_ = lean_byte_array_size(v_array_882_);
v___x_899_ = lean_nat_dec_le(v_idx_883_, v___x_871_);
if (v___x_899_ == 0)
{
v___y_897_ = v_idx_883_;
goto v___jp_896_;
}
else
{
lean_dec(v_idx_883_);
v___y_897_ = v___x_871_;
goto v___jp_896_;
}
v___jp_887_:
{
lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_890_ = l_ByteArray_toByteSlice(v_array_882_, v_lower_888_, v_upper_889_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v___x_890_);
lean_ctor_set(v___x_885_, 0, v_fst_877_);
v___x_892_ = v___x_885_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_fst_877_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
v___jp_896_:
{
uint8_t v___x_898_; 
v___x_898_ = lean_nat_dec_le(v___x_894_, v___x_895_);
if (v___x_898_ == 0)
{
lean_dec(v___x_894_);
v_lower_888_ = v___y_897_;
v_upper_889_ = v___x_895_;
goto v___jp_887_;
}
else
{
v_lower_888_ = v___y_897_;
v_upper_889_ = v___x_894_;
goto v___jp_887_;
}
}
}
}
else
{
lean_object* v___x_901_; lean_object* v___x_903_; 
lean_dec(v_fst_877_);
lean_dec(v_fst_876_);
v___x_901_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__1));
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 1);
lean_ctor_set(v___x_879_, 1, v___x_901_);
lean_ctor_set(v___x_879_, 0, v_it_870_);
v___x_903_ = v___x_879_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_it_870_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
else
{
lean_object* v_fst_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v___x_872_);
lean_dec_ref(v_it_870_);
v_fst_907_ = lean_ctor_get(v_snd_873_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v_snd_873_);
if (v_isSharedCheck_915_ == 0)
{
lean_object* v_unused_916_; 
v_unused_916_ = lean_ctor_get(v_snd_873_, 1);
lean_dec(v_unused_916_);
v___x_909_ = v_snd_873_;
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_fst_907_);
lean_dec(v_snd_873_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_911_; lean_object* v___x_913_; 
v___x_911_ = lean_box(0);
if (v_isShared_910_ == 0)
{
lean_ctor_set_tag(v___x_909_, 1);
lean_ctor_set(v___x_909_, 1, v___x_911_);
v___x_913_ = v___x_909_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_fst_907_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___boxed(lean_object* v_pred_917_, lean_object* v_limit_918_, lean_object* v_it_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1(v_pred_917_, v_limit_918_, v_it_919_);
lean_dec(v_limit_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntilUpTo(lean_object* v_pred_921_, lean_object* v_limit_922_, lean_object* v_a_923_){
_start:
{
lean_object* v___f_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v_snd_927_; lean_object* v_snd_928_; uint8_t v___x_929_; 
v___f_924_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0___boxed), 2, 1);
lean_closure_set(v___f_924_, 0, v_pred_921_);
v___x_925_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_923_);
v___x_926_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_924_, v_limit_922_, v___x_925_, v_a_923_);
v_snd_927_ = lean_ctor_get(v___x_926_, 1);
lean_inc(v_snd_927_);
v_snd_928_ = lean_ctor_get(v_snd_927_, 1);
v___x_929_ = lean_unbox(v_snd_928_);
if (v___x_929_ == 0)
{
lean_object* v_fst_930_; lean_object* v_fst_931_; lean_object* v_array_932_; lean_object* v_idx_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_950_; 
v_fst_930_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_fst_930_);
lean_dec_ref(v___x_926_);
v_fst_931_ = lean_ctor_get(v_snd_927_, 0);
lean_inc(v_fst_931_);
lean_dec(v_snd_927_);
v_array_932_ = lean_ctor_get(v_a_923_, 0);
v_idx_933_ = lean_ctor_get(v_a_923_, 1);
v_isSharedCheck_950_ = !lean_is_exclusive(v_a_923_);
if (v_isSharedCheck_950_ == 0)
{
v___x_935_ = v_a_923_;
v_isShared_936_ = v_isSharedCheck_950_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_idx_933_);
lean_inc(v_array_932_);
lean_dec(v_a_923_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_950_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v_lower_938_; lean_object* v_upper_939_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___y_947_; uint8_t v___x_949_; 
v___x_944_ = lean_nat_add(v_idx_933_, v_fst_930_);
lean_dec(v_fst_930_);
v___x_945_ = lean_byte_array_size(v_array_932_);
v___x_949_ = lean_nat_dec_le(v_idx_933_, v___x_925_);
if (v___x_949_ == 0)
{
v___y_947_ = v_idx_933_;
goto v___jp_946_;
}
else
{
lean_dec(v_idx_933_);
v___y_947_ = v___x_925_;
goto v___jp_946_;
}
v___jp_937_:
{
lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_940_ = l_ByteArray_toByteSlice(v_array_932_, v_lower_938_, v_upper_939_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 1, v___x_940_);
lean_ctor_set(v___x_935_, 0, v_fst_931_);
v___x_942_ = v___x_935_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_fst_931_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
v___jp_946_:
{
uint8_t v___x_948_; 
v___x_948_ = lean_nat_dec_le(v___x_944_, v___x_945_);
if (v___x_948_ == 0)
{
lean_dec(v___x_944_);
v_lower_938_ = v___y_947_;
v_upper_939_ = v___x_945_;
goto v___jp_937_;
}
else
{
v_lower_938_ = v___y_947_;
v_upper_939_ = v___x_944_;
goto v___jp_937_;
}
}
}
}
else
{
lean_object* v_fst_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_959_; 
lean_dec_ref(v___x_926_);
lean_dec_ref(v_a_923_);
v_fst_951_ = lean_ctor_get(v_snd_927_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v_snd_927_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v_snd_927_, 1);
lean_dec(v_unused_960_);
v___x_953_ = v_snd_927_;
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_fst_951_);
lean_dec(v_snd_927_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_955_ = lean_box(0);
if (v_isShared_954_ == 0)
{
lean_ctor_set_tag(v___x_953_, 1);
lean_ctor_set(v___x_953_, 1, v___x_955_);
v___x_957_ = v___x_953_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_fst_951_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeUntilUpTo___boxed(lean_object* v_pred_961_, lean_object* v_limit_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Std_Internal_Parsec_ByteArray_takeUntilUpTo(v_pred_961_, v_limit_962_, v_a_963_);
lean_dec(v_limit_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileAtMost(lean_object* v_pred_965_, lean_object* v_limit_966_, lean_object* v_it_967_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v_snd_970_; lean_object* v_fst_971_; lean_object* v_fst_972_; lean_object* v_array_973_; lean_object* v_idx_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_991_; 
v___x_968_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_it_967_);
v___x_969_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v_pred_965_, v_limit_966_, v___x_968_, v_it_967_);
v_snd_970_ = lean_ctor_get(v___x_969_, 1);
lean_inc(v_snd_970_);
v_fst_971_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_fst_971_);
lean_dec_ref(v___x_969_);
v_fst_972_ = lean_ctor_get(v_snd_970_, 0);
lean_inc(v_fst_972_);
lean_dec(v_snd_970_);
v_array_973_ = lean_ctor_get(v_it_967_, 0);
v_idx_974_ = lean_ctor_get(v_it_967_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v_it_967_);
if (v_isSharedCheck_991_ == 0)
{
v___x_976_ = v_it_967_;
v_isShared_977_ = v_isSharedCheck_991_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_idx_974_);
lean_inc(v_array_973_);
lean_dec(v_it_967_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_991_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v_lower_979_; lean_object* v_upper_980_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___y_988_; uint8_t v___x_990_; 
v___x_985_ = lean_nat_add(v_idx_974_, v_fst_971_);
lean_dec(v_fst_971_);
v___x_986_ = lean_byte_array_size(v_array_973_);
v___x_990_ = lean_nat_dec_le(v_idx_974_, v___x_968_);
if (v___x_990_ == 0)
{
v___y_988_ = v_idx_974_;
goto v___jp_987_;
}
else
{
lean_dec(v_idx_974_);
v___y_988_ = v___x_968_;
goto v___jp_987_;
}
v___jp_978_:
{
lean_object* v___x_981_; lean_object* v___x_983_; 
v___x_981_ = l_ByteArray_toByteSlice(v_array_973_, v_lower_979_, v_upper_980_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 1, v___x_981_);
lean_ctor_set(v___x_976_, 0, v_fst_972_);
v___x_983_ = v___x_976_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_fst_972_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v___x_981_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
v___jp_987_:
{
uint8_t v___x_989_; 
v___x_989_ = lean_nat_dec_le(v___x_985_, v___x_986_);
if (v___x_989_ == 0)
{
lean_dec(v___x_985_);
v_lower_979_ = v___y_988_;
v_upper_980_ = v___x_986_;
goto v___jp_978_;
}
else
{
v_lower_979_ = v___y_988_;
v_upper_980_ = v___x_985_;
goto v___jp_978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhileAtMost___boxed(lean_object* v_pred_992_, lean_object* v_limit_993_, lean_object* v_it_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Std_Internal_Parsec_ByteArray_takeWhileAtMost(v_pred_992_, v_limit_993_, v_it_994_);
lean_dec(v_limit_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhile1AtMost(lean_object* v_pred_996_, lean_object* v_limit_997_, lean_object* v_it_998_){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v_snd_1001_; lean_object* v_fst_1002_; lean_object* v_fst_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1031_; 
v___x_999_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_it_998_);
v___x_1000_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v_pred_996_, v_limit_997_, v___x_999_, v_it_998_);
v_snd_1001_ = lean_ctor_get(v___x_1000_, 1);
lean_inc(v_snd_1001_);
v_fst_1002_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_fst_1002_);
lean_dec_ref(v___x_1000_);
v_fst_1003_ = lean_ctor_get(v_snd_1001_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_snd_1001_);
if (v_isSharedCheck_1031_ == 0)
{
lean_object* v_unused_1032_; 
v_unused_1032_ = lean_ctor_get(v_snd_1001_, 1);
lean_dec(v_unused_1032_);
v___x_1005_ = v_snd_1001_;
v_isShared_1006_ = v_isSharedCheck_1031_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_fst_1003_);
lean_dec(v_snd_1001_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1031_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
uint8_t v___x_1007_; 
v___x_1007_ = lean_nat_dec_eq(v_fst_1002_, v___x_999_);
if (v___x_1007_ == 0)
{
lean_object* v_array_1008_; lean_object* v_idx_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1026_; 
lean_del_object(v___x_1005_);
v_array_1008_ = lean_ctor_get(v_it_998_, 0);
v_idx_1009_ = lean_ctor_get(v_it_998_, 1);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_it_998_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1011_ = v_it_998_;
v_isShared_1012_ = v_isSharedCheck_1026_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_idx_1009_);
lean_inc(v_array_1008_);
lean_dec(v_it_998_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1026_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v_lower_1014_; lean_object* v_upper_1015_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___y_1023_; uint8_t v___x_1025_; 
v___x_1020_ = lean_nat_add(v_idx_1009_, v_fst_1002_);
lean_dec(v_fst_1002_);
v___x_1021_ = lean_byte_array_size(v_array_1008_);
v___x_1025_ = lean_nat_dec_le(v_idx_1009_, v___x_999_);
if (v___x_1025_ == 0)
{
v___y_1023_ = v_idx_1009_;
goto v___jp_1022_;
}
else
{
lean_dec(v_idx_1009_);
v___y_1023_ = v___x_999_;
goto v___jp_1022_;
}
v___jp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1016_ = l_ByteArray_toByteSlice(v_array_1008_, v_lower_1014_, v_upper_1015_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 1, v___x_1016_);
lean_ctor_set(v___x_1011_, 0, v_fst_1003_);
v___x_1018_ = v___x_1011_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_fst_1003_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
v___jp_1022_:
{
uint8_t v___x_1024_; 
v___x_1024_ = lean_nat_dec_le(v___x_1020_, v___x_1021_);
if (v___x_1024_ == 0)
{
lean_dec(v___x_1020_);
v_lower_1014_ = v___y_1023_;
v_upper_1015_ = v___x_1021_;
goto v___jp_1013_;
}
else
{
v_lower_1014_ = v___y_1023_;
v_upper_1015_ = v___x_1020_;
goto v___jp_1013_;
}
}
}
}
else
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
lean_dec(v_fst_1003_);
lean_dec(v_fst_1002_);
v___x_1027_ = ((lean_object*)(l_Std_Internal_Parsec_ByteArray_takeWhileUpTo1___closed__1));
if (v_isShared_1006_ == 0)
{
lean_ctor_set_tag(v___x_1005_, 1);
lean_ctor_set(v___x_1005_, 1, v___x_1027_);
lean_ctor_set(v___x_1005_, 0, v_it_998_);
v___x_1029_ = v___x_1005_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_it_998_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_takeWhile1AtMost___boxed(lean_object* v_pred_1033_, lean_object* v_limit_1034_, lean_object* v_it_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Std_Internal_Parsec_ByteArray_takeWhile1AtMost(v_pred_1033_, v_limit_1034_, v_it_1035_);
lean_dec(v_limit_1034_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipWhileUpTo(lean_object* v_pred_1037_, lean_object* v_limit_1038_, lean_object* v_it_1039_){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v_snd_1042_; lean_object* v_snd_1043_; uint8_t v___x_1044_; 
v___x_1040_ = lean_unsigned_to_nat(0u);
v___x_1041_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v_pred_1037_, v_limit_1038_, v___x_1040_, v_it_1039_);
v_snd_1042_ = lean_ctor_get(v___x_1041_, 1);
lean_inc(v_snd_1042_);
lean_dec_ref(v___x_1041_);
v_snd_1043_ = lean_ctor_get(v_snd_1042_, 1);
v___x_1044_ = lean_unbox(v_snd_1043_);
if (v___x_1044_ == 0)
{
lean_object* v_fst_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1053_; 
v_fst_1045_ = lean_ctor_get(v_snd_1042_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_snd_1042_);
if (v_isSharedCheck_1053_ == 0)
{
lean_object* v_unused_1054_; 
v_unused_1054_ = lean_ctor_get(v_snd_1042_, 1);
lean_dec(v_unused_1054_);
v___x_1047_ = v_snd_1042_;
v_isShared_1048_ = v_isSharedCheck_1053_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_fst_1045_);
lean_dec(v_snd_1042_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1053_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1051_; 
v___x_1049_ = lean_box(0);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v___x_1049_);
v___x_1051_ = v___x_1047_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_fst_1045_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v___x_1049_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
else
{
lean_object* v_fst_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1063_; 
v_fst_1055_ = lean_ctor_get(v_snd_1042_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_snd_1042_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_snd_1042_, 1);
lean_dec(v_unused_1064_);
v___x_1057_ = v_snd_1042_;
v_isShared_1058_ = v_isSharedCheck_1063_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_fst_1055_);
lean_dec(v_snd_1042_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1063_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = lean_box(0);
if (v_isShared_1058_ == 0)
{
lean_ctor_set_tag(v___x_1057_, 1);
lean_ctor_set(v___x_1057_, 1, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_fst_1055_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipWhileUpTo___boxed(lean_object* v_pred_1065_, lean_object* v_limit_1066_, lean_object* v_it_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Std_Internal_Parsec_ByteArray_skipWhileUpTo(v_pred_1065_, v_limit_1066_, v_it_1067_);
lean_dec(v_limit_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipUntilUpTo(lean_object* v_pred_1069_, lean_object* v_limit_1070_, lean_object* v_a_1071_){
_start:
{
lean_object* v___f_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v_snd_1075_; lean_object* v_snd_1076_; uint8_t v___x_1077_; 
v___f_1072_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_takeUntil___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1072_, 0, v_pred_1069_);
v___x_1073_ = lean_unsigned_to_nat(0u);
v___x_1074_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1072_, v_limit_1070_, v___x_1073_, v_a_1071_);
v_snd_1075_ = lean_ctor_get(v___x_1074_, 1);
lean_inc(v_snd_1075_);
lean_dec_ref(v___x_1074_);
v_snd_1076_ = lean_ctor_get(v_snd_1075_, 1);
v___x_1077_ = lean_unbox(v_snd_1076_);
if (v___x_1077_ == 0)
{
lean_object* v_fst_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1086_; 
v_fst_1078_ = lean_ctor_get(v_snd_1075_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_snd_1075_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; 
v_unused_1087_ = lean_ctor_get(v_snd_1075_, 1);
lean_dec(v_unused_1087_);
v___x_1080_ = v_snd_1075_;
v_isShared_1081_ = v_isSharedCheck_1086_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_fst_1078_);
lean_dec(v_snd_1075_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1086_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1082_ = lean_box(0);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 1, v___x_1082_);
v___x_1084_ = v___x_1080_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_fst_1078_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_object* v_fst_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1096_; 
v_fst_1088_ = lean_ctor_get(v_snd_1075_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_snd_1075_);
if (v_isSharedCheck_1096_ == 0)
{
lean_object* v_unused_1097_; 
v_unused_1097_ = lean_ctor_get(v_snd_1075_, 1);
lean_dec(v_unused_1097_);
v___x_1090_ = v_snd_1075_;
v_isShared_1091_ = v_isSharedCheck_1096_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_fst_1088_);
lean_dec(v_snd_1075_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1096_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1094_; 
v___x_1092_ = lean_box(0);
if (v_isShared_1091_ == 0)
{
lean_ctor_set_tag(v___x_1090_, 1);
lean_ctor_set(v___x_1090_, 1, v___x_1092_);
v___x_1094_ = v___x_1090_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_fst_1088_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v___x_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ByteArray_skipUntilUpTo___boxed(lean_object* v_pred_1098_, lean_object* v_limit_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Std_Internal_Parsec_ByteArray_skipUntilUpTo(v_pred_1098_, v_limit_1099_, v_a_1100_);
lean_dec(v_limit_1099_);
return v_res_1101_;
}
}
lean_object* runtime_initialize_Std_Internal_Parsec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_ByteSlice(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_ByteSlice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Parsec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_ByteSlice(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_ByteSlice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Internal_Parsec_ByteArray(builtin);
}
#ifdef __cplusplus
}
#endif
