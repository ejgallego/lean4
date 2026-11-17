// Lean compiler output
// Module: Std.Http.Data.URI.Parser
// Imports: import Init.While public import Init.Data.String.Basic public import Std.Internal.Parsec public import Std.Internal.Parsec.ByteArray public import Std.Http.Data.URI.Basic public import Std.Http.Data.URI.Config import Init.Data.String.Search
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_toByteSlice(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_ByteSlice_toByteArray(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object*);
lean_object* l_ByteSlice_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_uv_pton_v4(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_uv_pton_v6(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object*);
extern lean_object* l_Std_Http_URI_Query_empty;
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object*);
lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_decode(lean_object*);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_peekIs(lean_object*, lean_object*);
static const lean_string_object l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid scheme"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6_value;
static lean_once_cell_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "scheme length limit is 0 (no scheme allowed)"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "port number too large: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid port number: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "invalid percent encoding in user info"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid IPv6 address: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '91'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '93'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid IPv4 address: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid domain name: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invalid host"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "not an IPv4 address"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid port number"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '58'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '64'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "too many path segments (limit: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "path too long (limit: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " bytes)"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "invalid percent encoding in path segment"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parsePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "require '/' in path"};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parsePath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "need a path"};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__3_value;
static const lean_array_object l_Std_Http_URI_Parser_parsePath___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__4 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__5 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid query string"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "too many query parameters (limit: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "invalid percent encoding in fragment"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '35'"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid fragment parse encoding"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__3_value;
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '63'"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__4 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__4_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__5 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '42'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not origin"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "not http absolute uri with path"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "not http absolute uri"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "invalid fragment encoding"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parseHostHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid host header"};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseHostHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parseHostHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid host header port"};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseHostHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt___redArg(lean_object* v_p_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc_ref(v_a_2_);
v___x_3_ = lean_apply_1(v_p_1_, v_a_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v_pos_4_; lean_object* v_res_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_13_; 
lean_dec_ref(v_a_2_);
v_pos_4_ = lean_ctor_get(v___x_3_, 0);
v_res_5_ = lean_ctor_get(v___x_3_, 1);
v_isSharedCheck_13_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_13_ == 0)
{
v___x_7_ = v___x_3_;
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_res_5_);
lean_inc(v_pos_4_);
lean_dec(v___x_3_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_res_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v_pos_4_);
lean_ctor_set(v_reuseFailAlloc_12_, 1, v___x_9_);
v___x_11_ = v_reuseFailAlloc_12_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
return v___x_11_;
}
}
}
else
{
lean_object* v_err_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_27_; 
v_err_14_ = lean_ctor_get(v___x_3_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_3_, 0);
lean_dec(v_unused_28_);
v___x_16_ = v___x_3_;
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_err_14_);
lean_dec(v___x_3_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_idx_18_; uint8_t v___x_19_; 
v_idx_18_ = lean_ctor_get(v_a_2_, 1);
v___x_19_ = lean_nat_dec_eq(v_idx_18_, v_idx_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_21_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_2_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v_a_2_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v_err_14_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
else
{
lean_object* v___x_23_; lean_object* v___x_25_; 
lean_dec(v_err_14_);
v___x_23_ = lean_box(0);
if (v_isShared_17_ == 0)
{
lean_ctor_set_tag(v___x_16_, 0);
lean_ctor_set(v___x_16_, 1, v___x_23_);
lean_ctor_set(v___x_16_, 0, v_a_2_);
v___x_25_ = v___x_16_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_2_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt(lean_object* v_00_u03b1_29_, lean_object* v_p_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_32_; 
lean_inc_ref(v_a_31_);
v___x_32_ = lean_apply_1(v_p_30_, v_a_31_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_pos_33_; lean_object* v_res_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
lean_dec_ref(v_a_31_);
v_pos_33_ = lean_ctor_get(v___x_32_, 0);
v_res_34_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_32_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_res_34_);
lean_inc(v_pos_33_);
lean_dec(v___x_32_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v_res_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_pos_33_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
else
{
lean_object* v_err_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_56_; 
v_err_43_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_56_ == 0)
{
lean_object* v_unused_57_; 
v_unused_57_ = lean_ctor_get(v___x_32_, 0);
lean_dec(v_unused_57_);
v___x_45_ = v___x_32_;
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_err_43_);
lean_dec(v___x_32_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v_idx_47_; uint8_t v___x_48_; 
v_idx_47_ = lean_ctor_get(v_a_31_, 1);
v___x_48_ = lean_nat_dec_eq(v_idx_47_, v_idx_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_50_; 
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 0, v_a_31_);
v___x_50_ = v___x_45_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_31_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_err_43_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
else
{
lean_object* v___x_52_; lean_object* v___x_54_; 
lean_dec(v_err_43_);
v___x_52_ = lean_box(0);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 0);
lean_ctor_set(v___x_45_, 1, v___x_52_);
lean_ctor_set(v___x_45_, 0, v_a_31_);
v___x_54_ = v___x_45_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_31_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_peekIs(lean_object* v_p_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_pos_61_; lean_object* v_array_65_; lean_object* v_idx_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_array_65_ = lean_ctor_get(v_a_59_, 0);
v_idx_66_ = lean_ctor_get(v_a_59_, 1);
v___x_67_ = lean_byte_array_size(v_array_65_);
v___x_68_ = lean_nat_dec_lt(v_idx_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_dec_ref(v_p_58_);
v_pos_61_ = v_a_59_;
goto v___jp_60_;
}
else
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_69_ = lean_byte_array_fget(v_array_65_, v_idx_66_);
v___x_70_ = lean_box(v___x_69_);
v___x_71_ = lean_apply_1(v_p_58_, v___x_70_);
v___x_72_ = lean_unbox(v___x_71_);
if (v___x_72_ == 0)
{
v_pos_61_ = v_a_59_;
goto v___jp_60_;
}
else
{
lean_object* v___x_73_; 
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v_a_59_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
return v___x_73_;
}
}
v___jp_60_:
{
uint8_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = 0;
v___x_63_ = lean_box(v___x_62_);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v_pos_61_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(lean_object* v_msg_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0));
v___x_77_ = lean_panic_fn_borrowed(v___x_76_, v_msg_75_);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(uint8_t v_c_78_){
_start:
{
uint8_t v___x_96_; uint8_t v___x_97_; 
v___x_96_ = 48;
v___x_97_ = lean_uint8_dec_le(v___x_96_, v_c_78_);
if (v___x_97_ == 0)
{
goto v___jp_91_;
}
else
{
uint8_t v___x_98_; uint8_t v___x_99_; 
v___x_98_ = 57;
v___x_99_ = lean_uint8_dec_le(v_c_78_, v___x_98_);
if (v___x_99_ == 0)
{
goto v___jp_91_;
}
else
{
return v___x_99_;
}
}
v___jp_79_:
{
uint8_t v___x_80_; uint8_t v___x_81_; 
v___x_80_ = 43;
v___x_81_ = lean_uint8_dec_eq(v_c_78_, v___x_80_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; uint8_t v___x_83_; 
v___x_82_ = 45;
v___x_83_ = lean_uint8_dec_eq(v_c_78_, v___x_82_);
if (v___x_83_ == 0)
{
uint8_t v___x_84_; uint8_t v___x_85_; 
v___x_84_ = 46;
v___x_85_ = lean_uint8_dec_eq(v_c_78_, v___x_84_);
return v___x_85_;
}
else
{
return v___x_83_;
}
}
else
{
return v___x_81_;
}
}
v___jp_86_:
{
uint8_t v___x_87_; uint8_t v___x_88_; 
v___x_87_ = 65;
v___x_88_ = lean_uint8_dec_le(v___x_87_, v_c_78_);
if (v___x_88_ == 0)
{
goto v___jp_79_;
}
else
{
uint8_t v___x_89_; uint8_t v___x_90_; 
v___x_89_ = 90;
v___x_90_ = lean_uint8_dec_le(v_c_78_, v___x_89_);
if (v___x_90_ == 0)
{
goto v___jp_79_;
}
else
{
return v___x_90_;
}
}
}
v___jp_91_:
{
uint8_t v___x_92_; uint8_t v___x_93_; 
v___x_92_ = 97;
v___x_93_ = lean_uint8_dec_le(v___x_92_, v_c_78_);
if (v___x_93_ == 0)
{
goto v___jp_86_;
}
else
{
uint8_t v___x_94_; uint8_t v___x_95_; 
v___x_94_ = 122;
v___x_95_ = lean_uint8_dec_le(v_c_78_, v___x_94_);
if (v___x_95_ == 0)
{
goto v___jp_86_;
}
else
{
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object* v_c_100_){
_start:
{
uint8_t v_c_boxed_101_; uint8_t v_res_102_; lean_object* v_r_103_; 
v_c_boxed_101_ = lean_unbox(v_c_100_);
v_res_102_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(v_c_boxed_101_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
uint8_t v___x_105_; 
v___x_105_ = 1;
return v___x_105_;
}
else
{
lean_object* v_head_106_; lean_object* v_tail_107_; uint32_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_head_106_ = lean_ctor_get(v_x_104_, 0);
v_tail_107_ = lean_ctor_get(v_x_104_, 1);
v___x_137_ = lean_unbox_uint32(v_head_106_);
v___x_138_ = lean_uint32_to_nat(v___x_137_);
v___x_139_ = lean_unsigned_to_nat(128u);
v___x_140_ = lean_nat_dec_lt(v___x_138_, v___x_139_);
lean_dec(v___x_138_);
if (v___x_140_ == 0)
{
goto v___jp_108_;
}
else
{
uint32_t v___x_141_; uint32_t v___x_142_; uint8_t v___x_143_; 
v___x_141_ = 48;
v___x_142_ = lean_unbox_uint32(v_head_106_);
v___x_143_ = lean_uint32_dec_le(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
goto v___jp_129_;
}
else
{
uint32_t v___x_144_; uint32_t v___x_145_; uint8_t v___x_146_; 
v___x_144_ = 57;
v___x_145_ = lean_unbox_uint32(v_head_106_);
v___x_146_ = lean_uint32_dec_le(v___x_145_, v___x_144_);
if (v___x_146_ == 0)
{
goto v___jp_129_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
v___jp_108_:
{
uint32_t v___x_109_; uint32_t v___x_110_; uint8_t v___x_111_; 
v___x_109_ = 43;
v___x_110_ = lean_unbox_uint32(v_head_106_);
v___x_111_ = lean_uint32_dec_eq(v___x_110_, v___x_109_);
if (v___x_111_ == 0)
{
uint32_t v___x_112_; uint32_t v___x_113_; uint8_t v___x_114_; 
v___x_112_ = 45;
v___x_113_ = lean_unbox_uint32(v_head_106_);
v___x_114_ = lean_uint32_dec_eq(v___x_113_, v___x_112_);
if (v___x_114_ == 0)
{
uint32_t v___x_115_; uint32_t v___x_116_; uint8_t v___x_117_; 
v___x_115_ = 46;
v___x_116_ = lean_unbox_uint32(v_head_106_);
v___x_117_ = lean_uint32_dec_eq(v___x_116_, v___x_115_);
if (v___x_117_ == 0)
{
return v___x_117_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
v___jp_121_:
{
uint32_t v___x_122_; uint32_t v___x_123_; uint8_t v___x_124_; 
v___x_122_ = 97;
v___x_123_ = lean_unbox_uint32(v_head_106_);
v___x_124_ = lean_uint32_dec_le(v___x_122_, v___x_123_);
if (v___x_124_ == 0)
{
goto v___jp_108_;
}
else
{
uint32_t v___x_125_; uint32_t v___x_126_; uint8_t v___x_127_; 
v___x_125_ = 122;
v___x_126_ = lean_unbox_uint32(v_head_106_);
v___x_127_ = lean_uint32_dec_le(v___x_126_, v___x_125_);
if (v___x_127_ == 0)
{
goto v___jp_108_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
v___jp_129_:
{
uint32_t v___x_130_; uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_130_ = 65;
v___x_131_ = lean_unbox_uint32(v_head_106_);
v___x_132_ = lean_uint32_dec_le(v___x_130_, v___x_131_);
if (v___x_132_ == 0)
{
goto v___jp_121_;
}
else
{
uint32_t v___x_133_; uint32_t v___x_134_; uint8_t v___x_135_; 
v___x_133_ = 90;
v___x_134_ = lean_unbox_uint32(v_head_106_);
v___x_135_ = lean_uint32_dec_le(v___x_134_, v___x_133_);
if (v___x_135_ == 0)
{
goto v___jp_121_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v_x_148_);
lean_dec(v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object* v_s_151_, lean_object* v_p_152_){
_start:
{
lean_object* v___y_154_; lean_object* v___y_155_; uint32_t v___y_159_; lean_object* v___x_171_; uint8_t v_decide_172_; 
v___x_171_ = lean_string_utf8_byte_size(v_s_151_);
v_decide_172_ = lean_nat_dec_eq(v_p_152_, v___x_171_);
if (v_decide_172_ == 0)
{
uint32_t v___x_173_; uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_173_ = lean_string_utf8_get_fast(v_s_151_, v_p_152_);
v___x_174_ = 65;
v___x_175_ = lean_uint32_dec_le(v___x_174_, v___x_173_);
if (v___x_175_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 90;
v___x_177_ = lean_uint32_dec_le(v___x_173_, v___x_176_);
if (v___x_177_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint32_t v___x_178_; uint32_t v___x_179_; 
v___x_178_ = 32;
v___x_179_ = lean_uint32_add(v___x_173_, v___x_178_);
v___y_159_ = v___x_179_;
goto v___jp_158_;
}
}
}
else
{
lean_dec(v_p_152_);
return v_s_151_;
}
v___jp_153_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_nat_add(v_p_152_, v___y_155_);
lean_dec(v_p_152_);
v_s_151_ = v___y_154_;
v_p_152_ = v___x_156_;
goto _start;
}
v___jp_158_:
{
lean_object* v___x_160_; uint32_t v___x_161_; uint8_t v___x_162_; 
lean_inc(v_p_152_);
v___x_160_ = lean_string_utf8_set(v_s_151_, v_p_152_, v___y_159_);
v___x_161_ = 127;
v___x_162_ = lean_uint32_dec_le(v___y_159_, v___x_161_);
if (v___x_162_ == 0)
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 2047;
v___x_164_ = lean_uint32_dec_le(v___y_159_, v___x_163_);
if (v___x_164_ == 0)
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 65535;
v___x_166_ = lean_uint32_dec_le(v___y_159_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_unsigned_to_nat(4u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_167_;
goto v___jp_153_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_unsigned_to_nat(3u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_168_;
goto v___jp_153_;
}
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_unsigned_to_nat(2u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_169_;
goto v___jp_153_;
}
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_unsigned_to_nat(1u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_170_;
goto v___jp_153_;
}
}
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_189_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6));
v___x_190_ = lean_unsigned_to_nat(46u);
v___x_191_ = lean_unsigned_to_nat(193u);
v___x_192_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5));
v___x_193_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4));
v___x_194_ = l_mkPanicMessageWithDecl(v___x_193_, v___x_192_, v___x_191_, v___x_190_, v___x_189_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object* v_config_199_, lean_object* v_a_200_){
_start:
{
lean_object* v___y_205_; uint32_t v___y_209_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v_maxSchemeLength_217_; lean_object* v___x_218_; lean_object* v___y_220_; lean_object* v___y_221_; uint8_t v___x_237_; lean_object* v___y_239_; lean_object* v___y_240_; uint8_t v___y_241_; lean_object* v_lower_242_; lean_object* v_upper_243_; lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; uint8_t v___y_259_; lean_object* v___y_260_; lean_object* v___y_261_; 
v_maxSchemeLength_217_ = lean_ctor_get(v_config_199_, 0);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_nat_dec_eq(v_maxSchemeLength_217_, v___x_218_);
if (v___x_237_ == 0)
{
lean_object* v_array_263_; lean_object* v_idx_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_array_263_ = lean_ctor_get(v_a_200_, 0);
v_idx_264_ = lean_ctor_get(v_a_200_, 1);
v___x_265_ = lean_byte_array_size(v_array_263_);
v___x_266_ = lean_nat_dec_lt(v_idx_264_, v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_box(0);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_a_200_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
return v___x_268_;
}
else
{
lean_object* v___f_269_; lean_object* v_pos_271_; uint8_t v_res_272_; uint8_t v_c_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_it_x27_287_; uint8_t v___x_293_; uint8_t v___x_294_; 
v___f_269_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8));
v_c_284_ = lean_byte_array_fget(v_array_263_, v_idx_264_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_idx_264_, v___x_285_);
lean_inc_ref(v_array_263_);
v_it_x27_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_287_, 0, v_array_263_);
lean_ctor_set(v_it_x27_287_, 1, v___x_286_);
v___x_293_ = 65;
v___x_294_ = lean_uint8_dec_le(v___x_293_, v_c_284_);
if (v___x_294_ == 0)
{
goto v___jp_288_;
}
else
{
uint8_t v___x_295_; uint8_t v___x_296_; 
v___x_295_ = 90;
v___x_296_ = lean_uint8_dec_le(v_c_284_, v___x_295_);
if (v___x_296_ == 0)
{
goto v___jp_288_;
}
else
{
lean_dec_ref(v_a_200_);
v_pos_271_ = v_it_x27_287_;
v_res_272_ = v_c_284_;
goto v___jp_270_;
}
}
v___jp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_snd_276_; lean_object* v_fst_277_; lean_object* v_fst_278_; lean_object* v_array_279_; lean_object* v_idx_280_; lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_273_ = lean_unsigned_to_nat(1u);
v___x_274_ = lean_nat_sub(v_maxSchemeLength_217_, v___x_273_);
lean_inc_ref(v_pos_271_);
v___x_275_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_269_, v___x_274_, v___x_218_, v_pos_271_);
lean_dec(v___x_274_);
v_snd_276_ = lean_ctor_get(v___x_275_, 1);
lean_inc(v_snd_276_);
v_fst_277_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_fst_277_);
lean_dec_ref(v___x_275_);
v_fst_278_ = lean_ctor_get(v_snd_276_, 0);
lean_inc(v_fst_278_);
lean_dec(v_snd_276_);
v_array_279_ = lean_ctor_get(v_pos_271_, 0);
lean_inc_ref(v_array_279_);
v_idx_280_ = lean_ctor_get(v_pos_271_, 1);
lean_inc(v_idx_280_);
lean_dec_ref(v_pos_271_);
v___x_281_ = lean_nat_add(v_idx_280_, v_fst_277_);
lean_dec(v_fst_277_);
v___x_282_ = lean_byte_array_size(v_array_279_);
v___x_283_ = lean_nat_dec_le(v_idx_280_, v___x_218_);
if (v___x_283_ == 0)
{
v___y_256_ = v___x_281_;
v___y_257_ = v_fst_278_;
v___y_258_ = v_array_279_;
v___y_259_ = v_res_272_;
v___y_260_ = v___x_282_;
v___y_261_ = v_idx_280_;
goto v___jp_255_;
}
else
{
lean_dec(v_idx_280_);
v___y_256_ = v___x_281_;
v___y_257_ = v_fst_278_;
v___y_258_ = v_array_279_;
v___y_259_ = v_res_272_;
v___y_260_ = v___x_282_;
v___y_261_ = v___x_218_;
goto v___jp_255_;
}
}
v___jp_288_:
{
uint8_t v___x_289_; uint8_t v___x_290_; 
v___x_289_ = 97;
v___x_290_ = lean_uint8_dec_le(v___x_289_, v_c_284_);
if (v___x_290_ == 0)
{
lean_dec_ref_known(v_it_x27_287_, 2);
goto v___jp_201_;
}
else
{
uint8_t v___x_291_; uint8_t v___x_292_; 
v___x_291_ = 122;
v___x_292_ = lean_uint8_dec_le(v_c_284_, v___x_291_);
if (v___x_292_ == 0)
{
lean_dec_ref_known(v_it_x27_287_, 2);
goto v___jp_201_;
}
else
{
lean_dec_ref(v_a_200_);
v_pos_271_ = v_it_x27_287_;
v_res_272_ = v_c_284_;
goto v___jp_270_;
}
}
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10));
v___x_298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_298_, 0, v_a_200_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
return v___x_298_;
}
v___jp_201_:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1));
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v_a_200_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
return v___x_203_;
}
v___jp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3));
v___x_207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_207_, 0, v___y_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
return v___x_207_;
}
v___jp_208_:
{
uint32_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = 97;
v___x_213_ = lean_uint32_dec_le(v___x_212_, v___y_209_);
if (v___x_213_ == 0)
{
lean_dec_ref(v___y_211_);
v___y_205_ = v___y_210_;
goto v___jp_204_;
}
else
{
uint32_t v___x_214_; uint8_t v___x_215_; 
v___x_214_ = 122;
v___x_215_ = lean_uint32_dec_le(v___y_209_, v___x_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v___y_211_);
v___y_205_ = v___y_210_;
goto v___jp_204_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___y_210_);
lean_ctor_set(v___x_216_, 1, v___y_211_);
return v___x_216_;
}
}
}
v___jp_219_:
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___y_221_, v___x_218_);
lean_inc_ref(v___x_222_);
v___x_223_ = l_Std_Http_Internal_instDecidableIsLowerCase(v___x_222_);
if (v___x_223_ == 0)
{
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_224_; uint8_t v___x_225_; 
lean_inc_ref(v___x_222_);
v___x_224_ = l_String_toListImpl(v___x_222_);
v___x_225_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v___x_224_);
if (v___x_225_ == 0)
{
lean_dec(v___x_224_);
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_226_; 
v___x_226_ = l_List_head_x3f___redArg(v___x_224_);
lean_dec(v___x_224_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v_val_227_; uint32_t v___x_228_; uint32_t v___x_229_; uint8_t v___x_230_; 
v_val_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = 65;
v___x_229_ = lean_unbox_uint32(v_val_227_);
v___x_230_ = lean_uint32_dec_le(v___x_228_, v___x_229_);
if (v___x_230_ == 0)
{
uint32_t v___x_231_; 
v___x_231_ = lean_unbox_uint32(v_val_227_);
lean_dec(v_val_227_);
v___y_209_ = v___x_231_;
v___y_210_ = v___y_220_;
v___y_211_ = v___x_222_;
goto v___jp_208_;
}
else
{
uint32_t v___x_232_; uint32_t v___x_233_; uint8_t v___x_234_; 
v___x_232_ = 90;
v___x_233_ = lean_unbox_uint32(v_val_227_);
v___x_234_ = lean_uint32_dec_le(v___x_233_, v___x_232_);
if (v___x_234_ == 0)
{
uint32_t v___x_235_; 
v___x_235_ = lean_unbox_uint32(v_val_227_);
lean_dec(v_val_227_);
v___y_209_ = v___x_235_;
v___y_210_ = v___y_220_;
v___y_211_ = v___x_222_;
goto v___jp_208_;
}
else
{
lean_object* v___x_236_; 
lean_dec(v_val_227_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___y_220_);
lean_ctor_set(v___x_236_, 1, v___x_222_);
return v___x_236_;
}
}
}
}
}
}
v___jp_238_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_244_ = l_ByteArray_toByteSlice(v___y_240_, v_lower_242_, v_upper_243_);
v___x_245_ = l_ByteArray_empty;
v___x_246_ = lean_byte_array_push(v___x_245_, v___y_241_);
v___x_247_ = l_ByteSlice_toByteArray(v___x_244_);
v___x_248_ = lean_byte_array_size(v___x_246_);
v___x_249_ = lean_byte_array_size(v___x_247_);
v___x_250_ = lean_byte_array_copy_slice(v___x_247_, v___x_218_, v___x_246_, v___x_248_, v___x_249_, v___x_237_);
lean_dec_ref(v___x_247_);
v___x_251_ = lean_string_validate_utf8(v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref(v___x_250_);
v___x_252_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_253_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_252_);
v___y_220_ = v___y_239_;
v___y_221_ = v___x_253_;
goto v___jp_219_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_string_from_utf8_unchecked(v___x_250_);
v___y_220_ = v___y_239_;
v___y_221_ = v___x_254_;
goto v___jp_219_;
}
}
v___jp_255_:
{
uint8_t v___x_262_; 
v___x_262_ = lean_nat_dec_le(v___y_256_, v___y_260_);
if (v___x_262_ == 0)
{
lean_dec(v___y_256_);
v___y_239_ = v___y_257_;
v___y_240_ = v___y_258_;
v___y_241_ = v___y_259_;
v_lower_242_ = v___y_261_;
v_upper_243_ = v___y_260_;
goto v___jp_238_;
}
else
{
lean_dec(v___y_260_);
v___y_239_ = v___y_257_;
v___y_240_ = v___y_258_;
v___y_241_ = v___y_259_;
v_lower_242_ = v___y_261_;
v_upper_243_ = v___y_256_;
goto v___jp_238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object* v_config_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_299_, v_a_300_);
lean_dec_ref(v_config_299_);
return v_res_301_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t v___y_302_){
_start:
{
uint8_t v___x_303_; uint8_t v___x_304_; 
v___x_303_ = 48;
v___x_304_ = lean_uint8_dec_le(v___x_303_, v___y_302_);
if (v___x_304_ == 0)
{
return v___x_304_;
}
else
{
uint8_t v___x_305_; uint8_t v___x_306_; 
v___x_305_ = 57;
v___x_306_ = lean_uint8_dec_le(v___y_302_, v___x_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object* v___y_307_){
_start:
{
uint8_t v___y_603__boxed_308_; uint8_t v_res_309_; lean_object* v_r_310_; 
v___y_603__boxed_308_ = lean_unbox(v___y_307_);
v_res_309_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(v___y_603__boxed_308_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object* v_a_314_){
_start:
{
lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_snd_319_; lean_object* v_fst_320_; lean_object* v_fst_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_374_; 
v___f_315_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0));
v___x_316_ = lean_unsigned_to_nat(5u);
v___x_317_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_314_);
v___x_318_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_315_, v___x_316_, v___x_317_, v_a_314_);
v_snd_319_ = lean_ctor_get(v___x_318_, 1);
lean_inc(v_snd_319_);
v_fst_320_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_fst_320_);
lean_dec_ref(v___x_318_);
v_fst_321_ = lean_ctor_get(v_snd_319_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v_snd_319_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v_snd_319_, 1);
lean_dec(v_unused_375_);
v___x_323_ = v_snd_319_;
v_isShared_324_ = v_isSharedCheck_374_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_fst_321_);
lean_dec(v_snd_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_374_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___y_326_; lean_object* v_array_357_; lean_object* v_idx_358_; lean_object* v_lower_360_; lean_object* v_upper_361_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___y_371_; uint8_t v___x_373_; 
v_array_357_ = lean_ctor_get(v_a_314_, 0);
lean_inc_ref(v_array_357_);
v_idx_358_ = lean_ctor_get(v_a_314_, 1);
lean_inc(v_idx_358_);
lean_dec_ref(v_a_314_);
v___x_368_ = lean_nat_add(v_idx_358_, v_fst_320_);
lean_dec(v_fst_320_);
v___x_369_ = lean_byte_array_size(v_array_357_);
v___x_373_ = lean_nat_dec_le(v_idx_358_, v___x_317_);
if (v___x_373_ == 0)
{
v___y_371_ = v_idx_358_;
goto v___jp_370_;
}
else
{
lean_dec(v_idx_358_);
v___y_371_ = v___x_317_;
goto v___jp_370_;
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_string_utf8_byte_size(v___y_326_);
lean_inc_ref(v___y_326_);
v___x_328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_328_, 0, v___y_326_);
lean_ctor_set(v___x_328_, 1, v___x_317_);
lean_ctor_set(v___x_328_, 2, v___x_327_);
v___x_329_ = l_String_Slice_toNat_x3f(v___x_328_);
lean_dec_ref_known(v___x_328_, 3);
if (lean_obj_tag(v___x_329_) == 1)
{
lean_object* v_val_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v___y_326_);
v_val_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_350_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_350_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_val_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_350_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(65535u);
v___x_335_ = lean_nat_dec_lt(v___x_334_, v_val_330_);
if (v___x_335_ == 0)
{
uint16_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
lean_del_object(v___x_332_);
v___x_336_ = lean_uint16_of_nat(v_val_330_);
lean_dec(v_val_330_);
v___x_337_ = lean_box(v___x_336_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v___x_337_);
v___x_339_ = v___x_323_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_345_; 
v___x_341_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1));
v___x_342_ = l_Nat_reprFast(v_val_330_);
v___x_343_ = lean_string_append(v___x_341_, v___x_342_);
lean_dec_ref(v___x_342_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_343_);
v___x_345_ = v___x_332_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_349_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
lean_object* v___x_347_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
lean_ctor_set(v___x_323_, 1, v___x_345_);
v___x_347_ = v___x_323_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
lean_dec(v___x_329_);
v___x_351_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2));
v___x_352_ = lean_string_append(v___x_351_, v___y_326_);
lean_dec_ref(v___y_326_);
v___x_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
lean_ctor_set(v___x_323_, 1, v___x_353_);
v___x_355_ = v___x_323_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
v___jp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = l_ByteArray_toByteSlice(v_array_357_, v_lower_360_, v_upper_361_);
v___x_363_ = l_ByteSlice_toByteArray(v___x_362_);
v___x_364_ = lean_string_validate_utf8(v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___x_363_);
v___x_365_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_366_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_365_);
v___y_326_ = v___x_366_;
goto v___jp_325_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_string_from_utf8_unchecked(v___x_363_);
v___y_326_ = v___x_367_;
goto v___jp_325_;
}
}
v___jp_370_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_nat_dec_le(v___x_368_, v___x_369_);
if (v___x_372_ == 0)
{
lean_dec(v___x_368_);
v_lower_360_ = v___y_371_;
v_upper_361_ = v___x_369_;
goto v___jp_359_;
}
else
{
v_lower_360_ = v___y_371_;
v_upper_361_ = v___x_368_;
goto v___jp_359_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t v_x_376_){
_start:
{
uint8_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 58;
v___x_423_ = lean_uint8_dec_eq(v_x_376_, v___x_422_);
if (v___x_423_ == 0)
{
uint8_t v___x_424_; uint8_t v___x_425_; 
v___x_424_ = 48;
v___x_425_ = lean_uint8_dec_le(v___x_424_, v_x_376_);
if (v___x_425_ == 0)
{
goto v___jp_417_;
}
else
{
uint8_t v___x_426_; uint8_t v___x_427_; 
v___x_426_ = 57;
v___x_427_ = lean_uint8_dec_le(v_x_376_, v___x_426_);
if (v___x_427_ == 0)
{
goto v___jp_417_;
}
else
{
return v___x_427_;
}
}
}
else
{
uint8_t v___x_428_; 
v___x_428_ = 0;
return v___x_428_;
}
v___jp_377_:
{
uint8_t v___x_378_; uint8_t v___x_379_; 
v___x_378_ = 45;
v___x_379_ = lean_uint8_dec_eq(v_x_376_, v___x_378_);
if (v___x_379_ == 0)
{
uint8_t v___x_380_; uint8_t v___x_381_; 
v___x_380_ = 46;
v___x_381_ = lean_uint8_dec_eq(v_x_376_, v___x_380_);
if (v___x_381_ == 0)
{
uint8_t v___x_382_; uint8_t v___x_383_; 
v___x_382_ = 95;
v___x_383_ = lean_uint8_dec_eq(v_x_376_, v___x_382_);
if (v___x_383_ == 0)
{
uint8_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 126;
v___x_385_ = lean_uint8_dec_eq(v_x_376_, v___x_384_);
if (v___x_385_ == 0)
{
uint8_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 33;
v___x_387_ = lean_uint8_dec_eq(v_x_376_, v___x_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 36;
v___x_389_ = lean_uint8_dec_eq(v_x_376_, v___x_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 38;
v___x_391_ = lean_uint8_dec_eq(v_x_376_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 39;
v___x_393_ = lean_uint8_dec_eq(v_x_376_, v___x_392_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 40;
v___x_395_ = lean_uint8_dec_eq(v_x_376_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; uint8_t v___x_397_; 
v___x_396_ = 41;
v___x_397_ = lean_uint8_dec_eq(v_x_376_, v___x_396_);
if (v___x_397_ == 0)
{
uint8_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = 42;
v___x_399_ = lean_uint8_dec_eq(v_x_376_, v___x_398_);
if (v___x_399_ == 0)
{
uint8_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 43;
v___x_401_ = lean_uint8_dec_eq(v_x_376_, v___x_400_);
if (v___x_401_ == 0)
{
uint8_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 44;
v___x_403_ = lean_uint8_dec_eq(v_x_376_, v___x_402_);
if (v___x_403_ == 0)
{
uint8_t v___x_404_; uint8_t v___x_405_; 
v___x_404_ = 59;
v___x_405_ = lean_uint8_dec_eq(v_x_376_, v___x_404_);
if (v___x_405_ == 0)
{
uint8_t v___x_406_; uint8_t v___x_407_; 
v___x_406_ = 61;
v___x_407_ = lean_uint8_dec_eq(v_x_376_, v___x_406_);
if (v___x_407_ == 0)
{
uint8_t v___x_408_; uint8_t v___x_409_; 
v___x_408_ = 58;
v___x_409_ = lean_uint8_dec_eq(v_x_376_, v___x_408_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 37;
v___x_411_ = lean_uint8_dec_eq(v_x_376_, v___x_410_);
return v___x_411_;
}
else
{
return v___x_409_;
}
}
else
{
return v___x_407_;
}
}
else
{
return v___x_405_;
}
}
else
{
return v___x_403_;
}
}
else
{
return v___x_401_;
}
}
else
{
return v___x_399_;
}
}
else
{
return v___x_397_;
}
}
else
{
return v___x_395_;
}
}
else
{
return v___x_393_;
}
}
else
{
return v___x_391_;
}
}
else
{
return v___x_389_;
}
}
else
{
return v___x_387_;
}
}
else
{
return v___x_385_;
}
}
else
{
return v___x_383_;
}
}
else
{
return v___x_381_;
}
}
else
{
return v___x_379_;
}
}
v___jp_412_:
{
uint8_t v___x_413_; uint8_t v___x_414_; 
v___x_413_ = 65;
v___x_414_ = lean_uint8_dec_le(v___x_413_, v_x_376_);
if (v___x_414_ == 0)
{
goto v___jp_377_;
}
else
{
uint8_t v___x_415_; uint8_t v___x_416_; 
v___x_415_ = 90;
v___x_416_ = lean_uint8_dec_le(v_x_376_, v___x_415_);
if (v___x_416_ == 0)
{
goto v___jp_377_;
}
else
{
return v___x_416_;
}
}
}
v___jp_417_:
{
uint8_t v___x_418_; uint8_t v___x_419_; 
v___x_418_ = 97;
v___x_419_ = lean_uint8_dec_le(v___x_418_, v_x_376_);
if (v___x_419_ == 0)
{
goto v___jp_412_;
}
else
{
uint8_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 122;
v___x_421_ = lean_uint8_dec_le(v_x_376_, v___x_420_);
if (v___x_421_ == 0)
{
goto v___jp_412_;
}
else
{
return v___x_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object* v_x_429_){
_start:
{
uint8_t v_x_boxed_430_; uint8_t v_res_431_; lean_object* v_r_432_; 
v_x_boxed_430_ = lean_unbox(v_x_429_);
v_res_431_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(v_x_boxed_430_);
v_r_432_ = lean_box(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t v_x_433_){
_start:
{
uint8_t v___x_479_; uint8_t v___x_480_; 
v___x_479_ = 48;
v___x_480_ = lean_uint8_dec_le(v___x_479_, v_x_433_);
if (v___x_480_ == 0)
{
goto v___jp_474_;
}
else
{
uint8_t v___x_481_; uint8_t v___x_482_; 
v___x_481_ = 57;
v___x_482_ = lean_uint8_dec_le(v_x_433_, v___x_481_);
if (v___x_482_ == 0)
{
goto v___jp_474_;
}
else
{
return v___x_482_;
}
}
v___jp_434_:
{
uint8_t v___x_435_; uint8_t v___x_436_; 
v___x_435_ = 45;
v___x_436_ = lean_uint8_dec_eq(v_x_433_, v___x_435_);
if (v___x_436_ == 0)
{
uint8_t v___x_437_; uint8_t v___x_438_; 
v___x_437_ = 46;
v___x_438_ = lean_uint8_dec_eq(v_x_433_, v___x_437_);
if (v___x_438_ == 0)
{
uint8_t v___x_439_; uint8_t v___x_440_; 
v___x_439_ = 95;
v___x_440_ = lean_uint8_dec_eq(v_x_433_, v___x_439_);
if (v___x_440_ == 0)
{
uint8_t v___x_441_; uint8_t v___x_442_; 
v___x_441_ = 126;
v___x_442_ = lean_uint8_dec_eq(v_x_433_, v___x_441_);
if (v___x_442_ == 0)
{
uint8_t v___x_443_; uint8_t v___x_444_; 
v___x_443_ = 33;
v___x_444_ = lean_uint8_dec_eq(v_x_433_, v___x_443_);
if (v___x_444_ == 0)
{
uint8_t v___x_445_; uint8_t v___x_446_; 
v___x_445_ = 36;
v___x_446_ = lean_uint8_dec_eq(v_x_433_, v___x_445_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = 38;
v___x_448_ = lean_uint8_dec_eq(v_x_433_, v___x_447_);
if (v___x_448_ == 0)
{
uint8_t v___x_449_; uint8_t v___x_450_; 
v___x_449_ = 39;
v___x_450_ = lean_uint8_dec_eq(v_x_433_, v___x_449_);
if (v___x_450_ == 0)
{
uint8_t v___x_451_; uint8_t v___x_452_; 
v___x_451_ = 40;
v___x_452_ = lean_uint8_dec_eq(v_x_433_, v___x_451_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; uint8_t v___x_454_; 
v___x_453_ = 41;
v___x_454_ = lean_uint8_dec_eq(v_x_433_, v___x_453_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; uint8_t v___x_456_; 
v___x_455_ = 42;
v___x_456_ = lean_uint8_dec_eq(v_x_433_, v___x_455_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; uint8_t v___x_458_; 
v___x_457_ = 43;
v___x_458_ = lean_uint8_dec_eq(v_x_433_, v___x_457_);
if (v___x_458_ == 0)
{
uint8_t v___x_459_; uint8_t v___x_460_; 
v___x_459_ = 44;
v___x_460_ = lean_uint8_dec_eq(v_x_433_, v___x_459_);
if (v___x_460_ == 0)
{
uint8_t v___x_461_; uint8_t v___x_462_; 
v___x_461_ = 59;
v___x_462_ = lean_uint8_dec_eq(v_x_433_, v___x_461_);
if (v___x_462_ == 0)
{
uint8_t v___x_463_; uint8_t v___x_464_; 
v___x_463_ = 61;
v___x_464_ = lean_uint8_dec_eq(v_x_433_, v___x_463_);
if (v___x_464_ == 0)
{
uint8_t v___x_465_; uint8_t v___x_466_; 
v___x_465_ = 58;
v___x_466_ = lean_uint8_dec_eq(v_x_433_, v___x_465_);
if (v___x_466_ == 0)
{
uint8_t v___x_467_; uint8_t v___x_468_; 
v___x_467_ = 37;
v___x_468_ = lean_uint8_dec_eq(v_x_433_, v___x_467_);
return v___x_468_;
}
else
{
return v___x_466_;
}
}
else
{
return v___x_464_;
}
}
else
{
return v___x_462_;
}
}
else
{
return v___x_460_;
}
}
else
{
return v___x_458_;
}
}
else
{
return v___x_456_;
}
}
else
{
return v___x_454_;
}
}
else
{
return v___x_452_;
}
}
else
{
return v___x_450_;
}
}
else
{
return v___x_448_;
}
}
else
{
return v___x_446_;
}
}
else
{
return v___x_444_;
}
}
else
{
return v___x_442_;
}
}
else
{
return v___x_440_;
}
}
else
{
return v___x_438_;
}
}
else
{
return v___x_436_;
}
}
v___jp_469_:
{
uint8_t v___x_470_; uint8_t v___x_471_; 
v___x_470_ = 65;
v___x_471_ = lean_uint8_dec_le(v___x_470_, v_x_433_);
if (v___x_471_ == 0)
{
goto v___jp_434_;
}
else
{
uint8_t v___x_472_; uint8_t v___x_473_; 
v___x_472_ = 90;
v___x_473_ = lean_uint8_dec_le(v_x_433_, v___x_472_);
if (v___x_473_ == 0)
{
goto v___jp_434_;
}
else
{
return v___x_473_;
}
}
}
v___jp_474_:
{
uint8_t v___x_475_; uint8_t v___x_476_; 
v___x_475_ = 97;
v___x_476_ = lean_uint8_dec_le(v___x_475_, v_x_433_);
if (v___x_476_ == 0)
{
goto v___jp_469_;
}
else
{
uint8_t v___x_477_; uint8_t v___x_478_; 
v___x_477_ = 122;
v___x_478_ = lean_uint8_dec_le(v_x_433_, v___x_477_);
if (v___x_478_ == 0)
{
goto v___jp_469_;
}
else
{
return v___x_478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object* v_x_483_){
_start:
{
uint8_t v_x_boxed_484_; uint8_t v_res_485_; lean_object* v_r_486_; 
v_x_boxed_484_ = lean_unbox(v_x_483_);
v_res_485_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(v_x_boxed_484_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object* v_config_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___y_495_; lean_object* v_userPassEncoded_496_; lean_object* v___y_497_; lean_object* v___y_501_; lean_object* v_pos_502_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; lean_object* v_lower_508_; lean_object* v_upper_509_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v_maxUserInfoLength_523_; lean_object* v___f_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v_snd_527_; lean_object* v_fst_528_; lean_object* v_fst_529_; lean_object* v_array_530_; lean_object* v_idx_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_577_; 
v_maxUserInfoLength_523_ = lean_ctor_get(v_config_492_, 2);
v___f_524_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2));
v___x_525_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_493_);
v___x_526_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_524_, v_maxUserInfoLength_523_, v___x_525_, v_a_493_);
v_snd_527_ = lean_ctor_get(v___x_526_, 1);
lean_inc(v_snd_527_);
v_fst_528_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_fst_528_);
lean_dec_ref(v___x_526_);
v_fst_529_ = lean_ctor_get(v_snd_527_, 0);
lean_inc(v_fst_529_);
lean_dec(v_snd_527_);
v_array_530_ = lean_ctor_get(v_a_493_, 0);
v_idx_531_ = lean_ctor_get(v_a_493_, 1);
v_isSharedCheck_577_ = !lean_is_exclusive(v_a_493_);
if (v_isSharedCheck_577_ == 0)
{
v___x_533_ = v_a_493_;
v_isShared_534_ = v_isSharedCheck_577_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_idx_531_);
lean_inc(v_array_530_);
lean_dec(v_a_493_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_577_;
goto v_resetjp_532_;
}
v___jp_494_:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_495_);
lean_ctor_set(v___x_498_, 1, v_userPassEncoded_496_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___y_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
return v___x_499_;
}
v___jp_500_:
{
lean_object* v___x_503_; 
v___x_503_ = lean_box(0);
v___y_495_ = v___y_501_;
v_userPassEncoded_496_ = v___x_503_;
v___y_497_ = v_pos_502_;
goto v___jp_494_;
}
v___jp_504_:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = l_ByteArray_toByteSlice(v___y_505_, v_lower_508_, v_upper_509_);
v___x_511_ = l_ByteSlice_toByteArray(v___x_510_);
v___x_512_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_511_);
if (lean_obj_tag(v___x_512_) == 1)
{
v___y_495_ = v___y_507_;
v_userPassEncoded_496_ = v___x_512_;
v___y_497_ = v___y_506_;
goto v___jp_494_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v___x_512_);
lean_dec_ref(v___y_507_);
v___x_513_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
v___x_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_514_, 0, v___y_506_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
return v___x_514_;
}
}
v___jp_515_:
{
uint8_t v___x_522_; 
v___x_522_ = lean_nat_dec_le(v___y_519_, v___y_516_);
if (v___x_522_ == 0)
{
lean_dec(v___y_519_);
v___y_505_ = v___y_517_;
v___y_506_ = v___y_518_;
v___y_507_ = v___y_520_;
v_lower_508_ = v___y_521_;
v_upper_509_ = v___y_516_;
goto v___jp_504_;
}
else
{
lean_dec(v___y_516_);
v___y_505_ = v___y_517_;
v___y_506_ = v___y_518_;
v___y_507_ = v___y_520_;
v_lower_508_ = v___y_521_;
v_upper_509_ = v___y_519_;
goto v___jp_504_;
}
}
v_resetjp_532_:
{
lean_object* v___f_535_; lean_object* v_lower_537_; lean_object* v_upper_538_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___y_574_; uint8_t v___x_576_; 
v___f_535_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__3));
v___x_571_ = lean_nat_add(v_idx_531_, v_fst_528_);
lean_dec(v_fst_528_);
v___x_572_ = lean_byte_array_size(v_array_530_);
v___x_576_ = lean_nat_dec_le(v_idx_531_, v___x_525_);
if (v___x_576_ == 0)
{
v___y_574_ = v_idx_531_;
goto v___jp_573_;
}
else
{
lean_dec(v_idx_531_);
v___y_574_ = v___x_525_;
goto v___jp_573_;
}
v___jp_536_:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = l_ByteArray_toByteSlice(v_array_530_, v_lower_537_, v_upper_538_);
v___x_540_ = l_ByteSlice_toByteArray(v___x_539_);
v___x_541_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_540_);
if (lean_obj_tag(v___x_541_) == 1)
{
lean_object* v_val_542_; lean_object* v_array_543_; lean_object* v_idx_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
lean_del_object(v___x_533_);
v_val_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_val_542_);
lean_dec_ref_known(v___x_541_, 1);
v_array_543_ = lean_ctor_get(v_fst_529_, 0);
v_idx_544_ = lean_ctor_get(v_fst_529_, 1);
v___x_545_ = lean_byte_array_size(v_array_543_);
v___x_546_ = lean_nat_dec_lt(v_idx_544_, v___x_545_);
if (v___x_546_ == 0)
{
v___y_501_ = v_val_542_;
v_pos_502_ = v_fst_529_;
goto v___jp_500_;
}
else
{
uint8_t v___x_547_; uint8_t v___x_548_; uint8_t v___x_549_; 
v___x_547_ = lean_byte_array_fget(v_array_543_, v_idx_544_);
v___x_548_ = 58;
v___x_549_ = lean_uint8_dec_eq(v___x_547_, v___x_548_);
if (v___x_549_ == 0)
{
v___y_501_ = v_val_542_;
v_pos_502_ = v_fst_529_;
goto v___jp_500_;
}
else
{
lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_564_; 
lean_inc(v_idx_544_);
lean_inc_ref(v_array_543_);
v_isSharedCheck_564_ = !lean_is_exclusive(v_fst_529_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; lean_object* v_unused_566_; 
v_unused_565_ = lean_ctor_get(v_fst_529_, 1);
lean_dec(v_unused_565_);
v_unused_566_ = lean_ctor_get(v_fst_529_, 0);
lean_dec(v_unused_566_);
v___x_551_ = v_fst_529_;
v_isShared_552_ = v_isSharedCheck_564_;
goto v_resetjp_550_;
}
else
{
lean_dec(v_fst_529_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_564_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_553_ = lean_unsigned_to_nat(1u);
v___x_554_ = lean_nat_add(v_idx_544_, v___x_553_);
lean_dec(v_idx_544_);
lean_inc(v___x_554_);
lean_inc_ref(v_array_543_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v___x_554_);
v___x_556_ = v___x_551_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_array_543_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v___x_554_);
v___x_556_ = v_reuseFailAlloc_563_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; lean_object* v_snd_558_; lean_object* v_fst_559_; lean_object* v_fst_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_557_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_535_, v_maxUserInfoLength_523_, v___x_525_, v___x_556_);
v_snd_558_ = lean_ctor_get(v___x_557_, 1);
lean_inc(v_snd_558_);
v_fst_559_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_fst_559_);
lean_dec_ref(v___x_557_);
v_fst_560_ = lean_ctor_get(v_snd_558_, 0);
lean_inc(v_fst_560_);
lean_dec(v_snd_558_);
v___x_561_ = lean_nat_add(v___x_554_, v_fst_559_);
lean_dec(v_fst_559_);
v___x_562_ = lean_nat_dec_le(v___x_554_, v___x_525_);
if (v___x_562_ == 0)
{
v___y_516_ = v___x_545_;
v___y_517_ = v_array_543_;
v___y_518_ = v_fst_560_;
v___y_519_ = v___x_561_;
v___y_520_ = v_val_542_;
v___y_521_ = v___x_554_;
goto v___jp_515_;
}
else
{
lean_dec(v___x_554_);
v___y_516_ = v___x_545_;
v___y_517_ = v_array_543_;
v___y_518_ = v_fst_560_;
v___y_519_ = v___x_561_;
v___y_520_ = v_val_542_;
v___y_521_ = v___x_525_;
goto v___jp_515_;
}
}
}
}
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_569_; 
lean_dec(v___x_541_);
v___x_567_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
if (v_isShared_534_ == 0)
{
lean_ctor_set_tag(v___x_533_, 1);
lean_ctor_set(v___x_533_, 1, v___x_567_);
lean_ctor_set(v___x_533_, 0, v_fst_529_);
v___x_569_ = v___x_533_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_fst_529_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
v___jp_573_:
{
uint8_t v___x_575_; 
v___x_575_ = lean_nat_dec_le(v___x_571_, v___x_572_);
if (v___x_575_ == 0)
{
lean_dec(v___x_571_);
v_lower_537_ = v___y_574_;
v_upper_538_ = v___x_572_;
goto v___jp_536_;
}
else
{
v_lower_537_ = v___y_574_;
v_upper_538_ = v___x_571_;
goto v___jp_536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object* v_config_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_578_, v_a_579_);
lean_dec_ref(v_config_578_);
return v_res_580_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t v_x_581_){
_start:
{
uint8_t v___x_592_; uint8_t v___x_593_; 
v___x_592_ = 58;
v___x_593_ = lean_uint8_dec_eq(v_x_581_, v___x_592_);
if (v___x_593_ == 0)
{
uint8_t v___x_594_; uint8_t v___x_595_; 
v___x_594_ = 46;
v___x_595_ = lean_uint8_dec_eq(v_x_581_, v___x_594_);
if (v___x_595_ == 0)
{
uint8_t v___x_596_; uint8_t v___x_597_; 
v___x_596_ = 48;
v___x_597_ = lean_uint8_dec_le(v___x_596_, v_x_581_);
if (v___x_597_ == 0)
{
goto v___jp_587_;
}
else
{
uint8_t v___x_598_; uint8_t v___x_599_; 
v___x_598_ = 57;
v___x_599_ = lean_uint8_dec_le(v_x_581_, v___x_598_);
if (v___x_599_ == 0)
{
goto v___jp_587_;
}
else
{
return v___x_599_;
}
}
}
else
{
return v___x_595_;
}
}
else
{
return v___x_593_;
}
v___jp_582_:
{
uint8_t v___x_583_; uint8_t v___x_584_; 
v___x_583_ = 65;
v___x_584_ = lean_uint8_dec_le(v___x_583_, v_x_581_);
if (v___x_584_ == 0)
{
return v___x_584_;
}
else
{
uint8_t v___x_585_; uint8_t v___x_586_; 
v___x_585_ = 70;
v___x_586_ = lean_uint8_dec_le(v_x_581_, v___x_585_);
return v___x_586_;
}
}
v___jp_587_:
{
uint8_t v___x_588_; uint8_t v___x_589_; 
v___x_588_ = 97;
v___x_589_ = lean_uint8_dec_le(v___x_588_, v_x_581_);
if (v___x_589_ == 0)
{
goto v___jp_582_;
}
else
{
uint8_t v___x_590_; uint8_t v___x_591_; 
v___x_590_ = 102;
v___x_591_ = lean_uint8_dec_le(v_x_581_, v___x_590_);
if (v___x_591_ == 0)
{
goto v___jp_582_;
}
else
{
return v___x_591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object* v_x_600_){
_start:
{
uint8_t v_x_boxed_601_; uint8_t v_res_602_; lean_object* v_r_603_; 
v_x_boxed_601_ = lean_unbox(v_x_600_);
v_res_602_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(v_x_boxed_601_);
v_r_603_ = lean_box(v_res_602_);
return v_r_603_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object* v_a_615_){
_start:
{
lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v_array_626_; lean_object* v_idx_627_; lean_object* v___x_628_; uint8_t v___x_629_; 
v_array_626_ = lean_ctor_get(v_a_615_, 0);
v_idx_627_ = lean_ctor_get(v_a_615_, 1);
v___x_628_ = lean_byte_array_size(v_array_626_);
v___x_629_ = lean_nat_dec_lt(v_idx_627_, v___x_628_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_box(0);
v___x_631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_631_, 0, v_a_615_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
return v___x_631_;
}
else
{
uint8_t v___x_632_; uint8_t v_got_633_; uint8_t v___x_634_; 
v___x_632_ = 91;
v_got_633_ = lean_byte_array_fget(v_array_626_, v_idx_627_);
v___x_634_ = lean_uint8_dec_eq(v_got_633_, v___x_632_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2));
v___x_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_636_, 0, v_a_615_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
return v___x_636_;
}
else
{
lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_712_; 
lean_inc(v_idx_627_);
lean_inc_ref(v_array_626_);
v_isSharedCheck_712_ = !lean_is_exclusive(v_a_615_);
if (v_isSharedCheck_712_ == 0)
{
lean_object* v_unused_713_; lean_object* v_unused_714_; 
v_unused_713_ = lean_ctor_get(v_a_615_, 1);
lean_dec(v_unused_713_);
v_unused_714_ = lean_ctor_get(v_a_615_, 0);
lean_dec(v_unused_714_);
v___x_638_ = v_a_615_;
v_isShared_639_ = v_isSharedCheck_712_;
goto v_resetjp_637_;
}
else
{
lean_dec(v_a_615_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_712_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___f_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___f_640_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3));
v___x_641_ = lean_unsigned_to_nat(1u);
v___x_642_ = lean_nat_add(v_idx_627_, v___x_641_);
lean_dec(v_idx_627_);
lean_inc(v___x_642_);
lean_inc_ref(v_array_626_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 1, v___x_642_);
v___x_644_ = v___x_638_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_array_626_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v___x_642_);
v___x_644_ = v_reuseFailAlloc_711_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v_snd_648_; lean_object* v_fst_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_710_; 
v___x_645_ = lean_unsigned_to_nat(256u);
v___x_646_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_644_);
v___x_647_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_640_, v___x_645_, v___x_646_, v___x_644_);
v_snd_648_ = lean_ctor_get(v___x_647_, 1);
v_fst_649_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_710_ == 0)
{
v___x_651_ = v___x_647_;
v_isShared_652_ = v_isSharedCheck_710_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_snd_648_);
lean_inc(v_fst_649_);
lean_dec(v___x_647_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_710_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v_fst_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_708_; 
v_fst_653_ = lean_ctor_get(v_snd_648_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v_snd_648_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; 
v_unused_709_ = lean_ctor_get(v_snd_648_, 1);
lean_dec(v_unused_709_);
v___x_655_ = v_snd_648_;
v_isShared_656_ = v_isSharedCheck_708_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_fst_653_);
lean_dec(v_snd_648_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_708_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___y_658_; uint8_t v___x_692_; 
v___x_692_ = lean_nat_dec_eq(v_fst_649_, v___x_646_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___y_695_; uint8_t v___x_703_; 
lean_dec_ref(v___x_644_);
v___x_693_ = lean_nat_add(v___x_642_, v_fst_649_);
lean_dec(v_fst_649_);
v___x_703_ = lean_nat_dec_le(v___x_642_, v___x_646_);
if (v___x_703_ == 0)
{
v___y_695_ = v___x_642_;
goto v___jp_694_;
}
else
{
lean_dec(v___x_642_);
v___y_695_ = v___x_646_;
goto v___jp_694_;
}
v___jp_694_:
{
uint8_t v___x_696_; 
v___x_696_ = lean_nat_dec_le(v___x_693_, v___x_628_);
if (v___x_696_ == 0)
{
lean_object* v___x_698_; 
lean_dec(v___x_693_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_628_);
lean_ctor_set(v___x_651_, 0, v___y_695_);
v___x_698_ = v___x_651_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___y_695_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_628_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
v___y_658_ = v___x_698_;
goto v___jp_657_;
}
}
else
{
lean_object* v___x_701_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_693_);
lean_ctor_set(v___x_651_, 0, v___y_695_);
v___x_701_ = v___x_651_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___y_695_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v___x_693_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v___y_658_ = v___x_701_;
goto v___jp_657_;
}
}
}
}
else
{
lean_object* v___x_704_; lean_object* v___x_706_; 
lean_del_object(v___x_655_);
lean_dec(v_fst_653_);
lean_dec(v_fst_649_);
lean_dec(v___x_642_);
lean_dec_ref(v_array_626_);
v___x_704_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_652_ == 0)
{
lean_ctor_set_tag(v___x_651_, 1);
lean_ctor_set(v___x_651_, 1, v___x_704_);
lean_ctor_set(v___x_651_, 0, v___x_644_);
v___x_706_ = v___x_651_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
v___jp_657_:
{
lean_object* v_array_659_; lean_object* v_idx_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v_array_659_ = lean_ctor_get(v_fst_653_, 0);
v_idx_660_ = lean_ctor_get(v_fst_653_, 1);
v___x_661_ = lean_byte_array_size(v_array_659_);
v___x_662_ = lean_nat_dec_lt(v_idx_660_, v___x_661_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_665_; 
lean_dec_ref(v___y_658_);
lean_dec_ref(v_array_626_);
v___x_663_ = lean_box(0);
if (v_isShared_656_ == 0)
{
lean_ctor_set_tag(v___x_655_, 1);
lean_ctor_set(v___x_655_, 1, v___x_663_);
v___x_665_ = v___x_655_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_fst_653_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
else
{
uint8_t v___x_667_; uint8_t v_got_668_; uint8_t v___x_669_; 
v___x_667_ = 93;
v_got_668_ = lean_byte_array_fget(v_array_659_, v_idx_660_);
v___x_669_ = lean_uint8_dec_eq(v_got_668_, v___x_667_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; lean_object* v___x_672_; 
lean_dec_ref(v___y_658_);
lean_dec_ref(v_array_626_);
v___x_670_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5));
if (v_isShared_656_ == 0)
{
lean_ctor_set_tag(v___x_655_, 1);
lean_ctor_set(v___x_655_, 1, v___x_670_);
v___x_672_ = v___x_655_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_fst_653_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
else
{
lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_689_; 
lean_inc(v_idx_660_);
lean_inc_ref(v_array_659_);
lean_del_object(v___x_655_);
v_isSharedCheck_689_ = !lean_is_exclusive(v_fst_653_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; lean_object* v_unused_691_; 
v_unused_690_ = lean_ctor_get(v_fst_653_, 1);
lean_dec(v_unused_690_);
v_unused_691_ = lean_ctor_get(v_fst_653_, 0);
lean_dec(v_unused_691_);
v___x_675_ = v_fst_653_;
v_isShared_676_ = v_isSharedCheck_689_;
goto v_resetjp_674_;
}
else
{
lean_dec(v_fst_653_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_689_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_lower_677_; lean_object* v_upper_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
v_lower_677_ = lean_ctor_get(v___y_658_, 0);
lean_inc(v_lower_677_);
v_upper_678_ = lean_ctor_get(v___y_658_, 1);
lean_inc(v_upper_678_);
lean_dec_ref(v___y_658_);
v___x_679_ = l_ByteArray_toByteSlice(v_array_626_, v_lower_677_, v_upper_678_);
v___x_680_ = lean_nat_add(v_idx_660_, v___x_641_);
lean_dec(v_idx_660_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_680_);
v___x_682_ = v___x_675_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_array_659_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v___x_680_);
v___x_682_ = v_reuseFailAlloc_688_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_683_ = l_ByteSlice_toByteArray(v___x_679_);
v___x_684_ = lean_string_validate_utf8(v___x_683_);
if (v___x_684_ == 0)
{
lean_object* v___x_685_; lean_object* v___x_686_; 
lean_dec_ref(v___x_683_);
v___x_685_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_686_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_685_);
v___y_617_ = v___x_682_;
v___y_618_ = v___x_686_;
goto v___jp_616_;
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_string_from_utf8_unchecked(v___x_683_);
v___y_617_ = v___x_682_;
v___y_618_ = v___x_687_;
goto v___jp_616_;
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
}
v___jp_616_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_uv_pton_v6(v___y_618_);
if (lean_obj_tag(v___x_619_) == 1)
{
lean_object* v_val_620_; lean_object* v___x_621_; 
lean_dec_ref(v___y_618_);
v_val_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_val_620_);
lean_dec_ref_known(v___x_619_, 1);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___y_617_);
lean_ctor_set(v___x_621_, 1, v_val_620_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec(v___x_619_);
v___x_622_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0));
v___x_623_ = lean_string_append(v___x_622_, v___y_618_);
lean_dec_ref(v___y_618_);
v___x_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
v___x_625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_625_, 0, v___y_617_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
return v___x_625_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(uint8_t v_x_715_){
_start:
{
uint8_t v___x_716_; uint8_t v___x_717_; 
v___x_716_ = 46;
v___x_717_ = lean_uint8_dec_eq(v_x_715_, v___x_716_);
if (v___x_717_ == 0)
{
uint8_t v___x_718_; uint8_t v___x_719_; 
v___x_718_ = 48;
v___x_719_ = lean_uint8_dec_le(v___x_718_, v_x_715_);
if (v___x_719_ == 0)
{
return v___x_719_;
}
else
{
uint8_t v___x_720_; uint8_t v___x_721_; 
v___x_720_ = 57;
v___x_721_ = lean_uint8_dec_le(v_x_715_, v___x_720_);
return v___x_721_;
}
}
else
{
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed(lean_object* v_x_722_){
_start:
{
uint8_t v_x_boxed_723_; uint8_t v_res_724_; lean_object* v_r_725_; 
v_x_boxed_723_ = lean_unbox(v_x_722_);
v_res_724_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(v_x_boxed_723_);
v_r_725_ = lean_box(v_res_724_);
return v_r_725_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(lean_object* v_a_728_){
_start:
{
lean_object* v___f_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v_snd_733_; lean_object* v_fst_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_779_; 
v___f_729_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0));
v___x_730_ = lean_unsigned_to_nat(256u);
v___x_731_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_728_);
v___x_732_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_729_, v___x_730_, v___x_731_, v_a_728_);
v_snd_733_ = lean_ctor_get(v___x_732_, 1);
v_fst_734_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_779_ == 0)
{
v___x_736_ = v___x_732_;
v_isShared_737_ = v_isSharedCheck_779_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_snd_733_);
lean_inc(v_fst_734_);
lean_dec(v___x_732_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_779_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v_fst_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_777_; 
v_fst_738_ = lean_ctor_get(v_snd_733_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v_snd_733_);
if (v_isSharedCheck_777_ == 0)
{
lean_object* v_unused_778_; 
v_unused_778_ = lean_ctor_get(v_snd_733_, 1);
lean_dec(v_unused_778_);
v___x_740_ = v_snd_733_;
v_isShared_741_ = v_isSharedCheck_777_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_fst_738_);
lean_dec(v_snd_733_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_777_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___y_743_; uint8_t v___x_755_; 
v___x_755_ = lean_nat_dec_eq(v_fst_734_, v___x_731_);
if (v___x_755_ == 0)
{
lean_object* v_array_756_; lean_object* v_idx_757_; lean_object* v_lower_759_; lean_object* v_upper_760_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___y_770_; uint8_t v___x_772_; 
lean_del_object(v___x_736_);
v_array_756_ = lean_ctor_get(v_a_728_, 0);
lean_inc_ref(v_array_756_);
v_idx_757_ = lean_ctor_get(v_a_728_, 1);
lean_inc(v_idx_757_);
lean_dec_ref(v_a_728_);
v___x_767_ = lean_nat_add(v_idx_757_, v_fst_734_);
lean_dec(v_fst_734_);
v___x_768_ = lean_byte_array_size(v_array_756_);
v___x_772_ = lean_nat_dec_le(v_idx_757_, v___x_731_);
if (v___x_772_ == 0)
{
v___y_770_ = v_idx_757_;
goto v___jp_769_;
}
else
{
lean_dec(v_idx_757_);
v___y_770_ = v___x_731_;
goto v___jp_769_;
}
v___jp_758_:
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_761_ = l_ByteArray_toByteSlice(v_array_756_, v_lower_759_, v_upper_760_);
v___x_762_ = l_ByteSlice_toByteArray(v___x_761_);
v___x_763_ = lean_string_validate_utf8(v___x_762_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; 
lean_dec_ref(v___x_762_);
v___x_764_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_765_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_764_);
v___y_743_ = v___x_765_;
goto v___jp_742_;
}
else
{
lean_object* v___x_766_; 
v___x_766_ = lean_string_from_utf8_unchecked(v___x_762_);
v___y_743_ = v___x_766_;
goto v___jp_742_;
}
}
v___jp_769_:
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_le(v___x_767_, v___x_768_);
if (v___x_771_ == 0)
{
lean_dec(v___x_767_);
v_lower_759_ = v___y_770_;
v_upper_760_ = v___x_768_;
goto v___jp_758_;
}
else
{
v_lower_759_ = v___y_770_;
v_upper_760_ = v___x_767_;
goto v___jp_758_;
}
}
}
else
{
lean_object* v___x_773_; lean_object* v___x_775_; 
lean_del_object(v___x_740_);
lean_dec(v_fst_738_);
lean_dec(v_fst_734_);
v___x_773_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 1);
lean_ctor_set(v___x_736_, 1, v___x_773_);
lean_ctor_set(v___x_736_, 0, v_a_728_);
v___x_775_ = v___x_736_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_728_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
v___jp_742_:
{
lean_object* v___x_744_; 
v___x_744_ = lean_uv_pton_v4(v___y_743_);
if (lean_obj_tag(v___x_744_) == 1)
{
lean_object* v_val_745_; lean_object* v___x_747_; 
lean_dec_ref(v___y_743_);
v_val_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_val_745_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 1, v_val_745_);
v___x_747_ = v___x_740_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_fst_738_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_val_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
lean_dec(v___x_744_);
v___x_749_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1));
v___x_750_ = lean_string_append(v___x_749_, v___y_743_);
lean_dec_ref(v___y_743_);
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
if (v_isShared_741_ == 0)
{
lean_ctor_set_tag(v___x_740_, 1);
lean_ctor_set(v___x_740_, 1, v___x_751_);
v___x_753_ = v___x_740_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_fst_738_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg(){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object* v___dummy_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v_res_785_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0(void){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object* v_s_787_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object* v_s_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(v_s_789_);
lean_dec_ref(v_s_789_);
return v_res_790_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t v_x_791_){
_start:
{
uint8_t v___x_807_; uint8_t v___x_808_; 
v___x_807_ = 48;
v___x_808_ = lean_uint8_dec_le(v___x_807_, v_x_791_);
if (v___x_808_ == 0)
{
goto v___jp_802_;
}
else
{
uint8_t v___x_809_; uint8_t v___x_810_; 
v___x_809_ = 57;
v___x_810_ = lean_uint8_dec_le(v_x_791_, v___x_809_);
if (v___x_810_ == 0)
{
goto v___jp_802_;
}
else
{
return v___x_810_;
}
}
v___jp_792_:
{
uint8_t v___x_793_; uint8_t v___x_794_; 
v___x_793_ = 45;
v___x_794_ = lean_uint8_dec_eq(v_x_791_, v___x_793_);
if (v___x_794_ == 0)
{
uint8_t v___x_795_; uint8_t v___x_796_; 
v___x_795_ = 46;
v___x_796_ = lean_uint8_dec_eq(v_x_791_, v___x_795_);
return v___x_796_;
}
else
{
return v___x_794_;
}
}
v___jp_797_:
{
uint8_t v___x_798_; uint8_t v___x_799_; 
v___x_798_ = 65;
v___x_799_ = lean_uint8_dec_le(v___x_798_, v_x_791_);
if (v___x_799_ == 0)
{
goto v___jp_792_;
}
else
{
uint8_t v___x_800_; uint8_t v___x_801_; 
v___x_800_ = 90;
v___x_801_ = lean_uint8_dec_le(v_x_791_, v___x_800_);
if (v___x_801_ == 0)
{
goto v___jp_792_;
}
else
{
return v___x_801_;
}
}
}
v___jp_802_:
{
uint8_t v___x_803_; uint8_t v___x_804_; 
v___x_803_ = 97;
v___x_804_ = lean_uint8_dec_le(v___x_803_, v_x_791_);
if (v___x_804_ == 0)
{
goto v___jp_797_;
}
else
{
uint8_t v___x_805_; uint8_t v___x_806_; 
v___x_805_ = 122;
v___x_806_ = lean_uint8_dec_le(v_x_791_, v___x_805_);
if (v___x_806_ == 0)
{
goto v___jp_797_;
}
else
{
return v___x_806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object* v_x_811_){
_start:
{
uint8_t v_x_boxed_812_; uint8_t v_res_813_; lean_object* v_r_814_; 
v_x_boxed_812_ = lean_unbox(v_x_811_);
v_res_813_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(v_x_boxed_812_);
v_r_814_ = lean_box(v_res_813_);
return v_r_814_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object* v___x_815_, lean_object* v___x_816_, lean_object* v_a_817_, uint8_t v_b_818_){
_start:
{
if (lean_obj_tag(v_a_817_) == 0)
{
lean_object* v_currPos_819_; lean_object* v_searcher_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_834_; 
v_currPos_819_ = lean_ctor_get(v_a_817_, 0);
v_searcher_820_ = lean_ctor_get(v_a_817_, 1);
v_isSharedCheck_834_ = !lean_is_exclusive(v_a_817_);
if (v_isSharedCheck_834_ == 0)
{
v___x_822_ = v_a_817_;
v_isShared_823_ = v_isSharedCheck_834_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_searcher_820_);
lean_inc(v_currPos_819_);
lean_dec(v_a_817_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_834_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
uint8_t v___x_824_; uint8_t v_decide_825_; 
v___x_824_ = 0;
v_decide_825_ = lean_nat_dec_eq(v_searcher_820_, v___x_816_);
if (v_decide_825_ == 0)
{
uint32_t v___x_826_; uint32_t v___x_827_; uint8_t v___x_828_; 
v___x_826_ = 46;
v___x_827_ = lean_string_utf8_get_fast(v___x_815_, v_searcher_820_);
v___x_828_ = lean_uint32_dec_eq(v___x_827_, v___x_826_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = lean_string_utf8_next_fast(v___x_815_, v_searcher_820_);
lean_dec(v_searcher_820_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v___x_829_);
v___x_831_ = v___x_822_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_currPos_819_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v___x_829_);
v___x_831_ = v_reuseFailAlloc_833_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
v_a_817_ = v___x_831_;
goto _start;
}
}
else
{
lean_del_object(v___x_822_);
lean_dec(v_searcher_820_);
lean_dec(v_currPos_819_);
return v___x_824_;
}
}
else
{
lean_del_object(v___x_822_);
lean_dec(v_searcher_820_);
lean_dec(v_currPos_819_);
return v___x_824_;
}
}
}
else
{
return v_b_818_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object* v___x_835_, lean_object* v___x_836_, lean_object* v_a_837_, lean_object* v_b_838_){
_start:
{
uint8_t v_b_boxed_839_; uint8_t v_res_840_; lean_object* v_r_841_; 
v_b_boxed_839_ = lean_unbox(v_b_838_);
v_res_840_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_835_, v___x_836_, v_a_837_, v_b_boxed_839_);
lean_dec(v___x_836_);
lean_dec_ref(v___x_835_);
v_r_841_ = lean_box(v_res_840_);
return v_r_841_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t v___x_842_, lean_object* v___x_843_, lean_object* v___x_844_, lean_object* v___x_845_, lean_object* v_a_846_, uint8_t v_b_847_){
_start:
{
uint8_t v___y_849_; lean_object* v_it_850_; lean_object* v_startInclusive_851_; lean_object* v_endExclusive_852_; uint8_t v___y_857_; 
if (v___x_842_ == 0)
{
uint8_t v___x_883_; 
v___x_883_ = 1;
v___y_857_ = v___x_883_;
goto v___jp_856_;
}
else
{
uint8_t v___x_884_; 
v___x_884_ = 0;
v___y_857_ = v___x_884_;
goto v___jp_856_;
}
v___jp_848_:
{
lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_853_ = lean_string_utf8_extract_fast(v___x_843_, v_startInclusive_851_, v_endExclusive_852_);
lean_dec(v_endExclusive_852_);
lean_dec(v_startInclusive_851_);
v___x_854_ = l_Std_Http_URI_isValidDomainLabel(v___x_853_);
if (v___x_854_ == 0)
{
lean_dec(v_it_850_);
lean_dec(v___x_845_);
return v___x_854_;
}
else
{
v_a_846_ = v_it_850_;
v_b_847_ = v___y_849_;
goto _start;
}
}
v___jp_856_:
{
if (lean_obj_tag(v_a_846_) == 0)
{
lean_object* v_currPos_858_; lean_object* v_searcher_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_882_; 
v_currPos_858_ = lean_ctor_get(v_a_846_, 0);
v_searcher_859_ = lean_ctor_get(v_a_846_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v_a_846_);
if (v_isSharedCheck_882_ == 0)
{
v___x_861_ = v_a_846_;
v_isShared_862_ = v_isSharedCheck_882_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_searcher_859_);
lean_inc(v_currPos_858_);
lean_dec(v_a_846_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_882_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
uint8_t v_decide_863_; 
v_decide_863_ = lean_nat_dec_eq(v_searcher_859_, v___x_845_);
if (v_decide_863_ == 0)
{
uint32_t v___x_864_; uint32_t v___x_865_; uint8_t v___x_866_; 
v___x_864_ = 46;
v___x_865_ = lean_string_utf8_get_fast(v___x_843_, v_searcher_859_);
v___x_866_ = lean_uint32_dec_eq(v___x_865_, v___x_864_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = lean_string_utf8_next_fast(v___x_843_, v_searcher_859_);
lean_dec(v_searcher_859_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 1, v___x_867_);
v___x_869_ = v___x_861_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_currPos_858_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v___x_867_);
v___x_869_ = v_reuseFailAlloc_871_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
v_a_846_ = v___x_869_;
goto _start;
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v_slice_875_; lean_object* v_nextIt_877_; 
v___x_872_ = lean_string_utf8_next_fast(v___x_843_, v_searcher_859_);
v___x_873_ = lean_nat_sub(v___x_872_, v_searcher_859_);
v___x_874_ = lean_nat_add(v_searcher_859_, v___x_873_);
lean_dec(v___x_873_);
v_slice_875_ = l_String_Slice_subslice_x21(v___x_844_, v_currPos_858_, v_searcher_859_);
lean_inc(v___x_874_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 1, v___x_874_);
lean_ctor_set(v___x_861_, 0, v___x_874_);
v_nextIt_877_ = v___x_861_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___x_874_);
v_nextIt_877_ = v_reuseFailAlloc_880_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
lean_object* v_startInclusive_878_; lean_object* v_endExclusive_879_; 
v_startInclusive_878_ = lean_ctor_get(v_slice_875_, 0);
lean_inc(v_startInclusive_878_);
v_endExclusive_879_ = lean_ctor_get(v_slice_875_, 1);
lean_inc(v_endExclusive_879_);
lean_dec_ref(v_slice_875_);
v___y_849_ = v___y_857_;
v_it_850_ = v_nextIt_877_;
v_startInclusive_851_ = v_startInclusive_878_;
v_endExclusive_852_ = v_endExclusive_879_;
goto v___jp_848_;
}
}
}
else
{
lean_object* v___x_881_; 
lean_del_object(v___x_861_);
lean_dec(v_searcher_859_);
v___x_881_ = lean_box(1);
lean_inc(v___x_845_);
v___y_849_ = v___y_857_;
v_it_850_ = v___x_881_;
v_startInclusive_851_ = v_currPos_858_;
v_endExclusive_852_ = v___x_845_;
goto v___jp_848_;
}
}
}
else
{
lean_dec(v___x_845_);
return v_b_847_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object* v___x_885_, lean_object* v___x_886_, lean_object* v___x_887_, lean_object* v___x_888_, lean_object* v_a_889_, lean_object* v_b_890_){
_start:
{
uint8_t v___x_15443__boxed_891_; uint8_t v_b_boxed_892_; uint8_t v_res_893_; lean_object* v_r_894_; 
v___x_15443__boxed_891_ = lean_unbox(v___x_885_);
v_b_boxed_892_ = lean_unbox(v_b_890_);
v_res_893_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_15443__boxed_891_, v___x_886_, v___x_887_, v___x_888_, v_a_889_, v_b_boxed_892_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_886_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object* v_config_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___y_906_; lean_object* v_pos_907_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v_lower_921_; lean_object* v_upper_922_; lean_object* v___y_942_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v_array_949_; lean_object* v_idx_950_; lean_object* v___f_951_; lean_object* v___y_953_; lean_object* v___y_976_; lean_object* v_err_977_; lean_object* v___y_982_; uint8_t v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; uint8_t v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; uint8_t v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v_pos_1012_; lean_object* v_pos_1027_; lean_object* v_res_1028_; lean_object* v_pos_1030_; lean_object* v_res_1031_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
v_array_949_ = lean_ctor_get(v_a_904_, 0);
v_idx_950_ = lean_ctor_get(v_a_904_, 1);
v___f_951_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3));
v___x_1039_ = lean_byte_array_size(v_array_949_);
v___x_1040_ = lean_nat_dec_lt(v_idx_950_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; 
lean_inc(v_idx_950_);
lean_inc_ref(v_array_949_);
v___x_1041_ = lean_box(0);
v_pos_1030_ = v_a_904_;
v_res_1031_ = v___x_1041_;
goto v___jp_1029_;
}
else
{
uint8_t v___x_1042_; uint8_t v___x_1043_; uint8_t v___x_1044_; 
v___x_1042_ = lean_byte_array_fget(v_array_949_, v_idx_950_);
v___x_1043_ = 91;
v___x_1044_ = lean_uint8_dec_eq(v___x_1042_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
lean_inc(v_idx_950_);
lean_inc_ref(v_array_949_);
v___x_1045_ = lean_box(0);
v_pos_1030_ = v_a_904_;
v_res_1031_ = v___x_1045_;
goto v___jp_1029_;
}
else
{
lean_object* v___x_1046_; 
v___x_1046_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(v_a_904_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_pos_1047_; lean_object* v_res_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1056_; 
v_pos_1047_ = lean_ctor_get(v___x_1046_, 0);
v_res_1048_ = lean_ctor_get(v___x_1046_, 1);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1050_ = v___x_1046_;
v_isShared_1051_ = v_isSharedCheck_1056_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_res_1048_);
lean_inc(v_pos_1047_);
lean_dec(v___x_1046_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1056_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1052_, 0, v_res_1048_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 1, v___x_1052_);
v___x_1054_ = v___x_1050_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_pos_1047_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
else
{
lean_object* v_pos_1057_; lean_object* v_err_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_pos_1057_ = lean_ctor_get(v___x_1046_, 0);
v_err_1058_ = lean_ctor_get(v___x_1046_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1046_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_err_1058_);
lean_inc(v_pos_1057_);
lean_dec(v___x_1046_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_pos_1057_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_err_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
v___jp_905_:
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_908_, 0, v___y_906_);
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v_pos_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
return v___x_909_;
}
v___jp_910_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_913_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0));
v___x_914_ = lean_string_append(v___x_913_, v___y_911_);
lean_dec_ref(v___y_911_);
v___x_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v___y_912_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
return v___x_916_;
}
v___jp_917_:
{
lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_923_ = l_ByteArray_toByteSlice(v___y_919_, v_lower_921_, v_upper_922_);
v___x_924_ = l_ByteSlice_toByteArray(v___x_923_);
v___x_925_ = lean_string_validate_utf8(v___x_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; 
lean_dec_ref(v___x_924_);
lean_dec(v___y_918_);
v___x_926_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2));
v___x_927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_927_, 0, v___y_920_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
return v___x_927_;
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_928_ = lean_string_from_utf8_unchecked(v___x_924_);
lean_inc_n(v___y_918_, 2);
lean_inc_ref(v___x_928_);
v___x_929_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___x_928_, v___y_918_);
v___x_930_ = lean_string_utf8_byte_size(v___x_929_);
lean_inc_ref(v___x_929_);
v___x_931_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_931_, 0, v___x_929_);
lean_ctor_set(v___x_931_, 1, v___y_918_);
lean_ctor_set(v___x_931_, 2, v___x_930_);
v___x_932_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
v___x_933_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_929_, v___x_930_, v___x_932_, v___x_925_);
if (v___x_933_ == 0)
{
uint8_t v___x_934_; 
v___x_934_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_933_, v___x_929_, v___x_931_, v___x_930_, v___x_932_, v___x_925_);
lean_dec_ref_known(v___x_931_, 3);
if (v___x_934_ == 0)
{
lean_dec_ref(v___x_929_);
lean_dec(v___y_918_);
v___y_911_ = v___x_928_;
v___y_912_ = v___y_920_;
goto v___jp_910_;
}
else
{
lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_935_ = lean_string_length(v___x_929_);
v___x_936_ = lean_unsigned_to_nat(255u);
v___x_937_ = lean_nat_dec_le(v___x_935_, v___x_936_);
if (v___x_937_ == 0)
{
lean_dec_ref(v___x_929_);
lean_dec(v___y_918_);
v___y_911_ = v___x_928_;
v___y_912_ = v___y_920_;
goto v___jp_910_;
}
else
{
uint8_t v___x_938_; 
v___x_938_ = lean_nat_dec_eq(v___x_930_, v___y_918_);
lean_dec(v___y_918_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec_ref(v___x_928_);
v___x_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_929_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___y_920_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
return v___x_940_;
}
else
{
lean_dec_ref(v___x_929_);
v___y_911_ = v___x_928_;
v___y_912_ = v___y_920_;
goto v___jp_910_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_931_, 3);
lean_dec_ref(v___x_929_);
lean_dec(v___y_918_);
v___y_911_ = v___x_928_;
v___y_912_ = v___y_920_;
goto v___jp_910_;
}
}
}
v___jp_941_:
{
uint8_t v___x_948_; 
v___x_948_ = lean_nat_dec_le(v___y_945_, v___y_942_);
if (v___x_948_ == 0)
{
lean_dec(v___y_945_);
v___y_918_ = v___y_943_;
v___y_919_ = v___y_944_;
v___y_920_ = v___y_946_;
v_lower_921_ = v___y_947_;
v_upper_922_ = v___y_942_;
goto v___jp_917_;
}
else
{
lean_dec(v___y_942_);
v___y_918_ = v___y_943_;
v___y_919_ = v___y_944_;
v___y_920_ = v___y_946_;
v_lower_921_ = v___y_947_;
v_upper_922_ = v___y_945_;
goto v___jp_917_;
}
}
v___jp_952_:
{
lean_object* v_maxHostLength_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v_snd_957_; lean_object* v_fst_958_; lean_object* v_fst_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_973_; 
v_maxHostLength_954_ = lean_ctor_get(v_config_903_, 1);
v___x_955_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___y_953_);
v___x_956_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_951_, v_maxHostLength_954_, v___x_955_, v___y_953_);
v_snd_957_ = lean_ctor_get(v___x_956_, 1);
lean_inc(v_snd_957_);
v_fst_958_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_fst_958_);
lean_dec_ref(v___x_956_);
v_fst_959_ = lean_ctor_get(v_snd_957_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v_snd_957_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v_snd_957_, 1);
lean_dec(v_unused_974_);
v___x_961_ = v_snd_957_;
v_isShared_962_ = v_isSharedCheck_973_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_fst_959_);
lean_dec(v_snd_957_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_973_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
uint8_t v___x_963_; 
v___x_963_ = lean_nat_dec_eq(v_fst_958_, v___x_955_);
if (v___x_963_ == 0)
{
lean_object* v_array_964_; lean_object* v_idx_965_; lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; 
lean_del_object(v___x_961_);
v_array_964_ = lean_ctor_get(v___y_953_, 0);
lean_inc_ref(v_array_964_);
v_idx_965_ = lean_ctor_get(v___y_953_, 1);
lean_inc(v_idx_965_);
lean_dec_ref(v___y_953_);
v___x_966_ = lean_nat_add(v_idx_965_, v_fst_958_);
lean_dec(v_fst_958_);
v___x_967_ = lean_byte_array_size(v_array_964_);
v___x_968_ = lean_nat_dec_le(v_idx_965_, v___x_955_);
if (v___x_968_ == 0)
{
v___y_942_ = v___x_967_;
v___y_943_ = v___x_955_;
v___y_944_ = v_array_964_;
v___y_945_ = v___x_966_;
v___y_946_ = v_fst_959_;
v___y_947_ = v_idx_965_;
goto v___jp_941_;
}
else
{
lean_dec(v_idx_965_);
v___y_942_ = v___x_967_;
v___y_943_ = v___x_955_;
v___y_944_ = v_array_964_;
v___y_945_ = v___x_966_;
v___y_946_ = v_fst_959_;
v___y_947_ = v___x_955_;
goto v___jp_941_;
}
}
else
{
lean_object* v___x_969_; lean_object* v___x_971_; 
lean_dec(v_fst_959_);
lean_dec(v_fst_958_);
v___x_969_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 1);
lean_ctor_set(v___x_961_, 1, v___x_969_);
lean_ctor_set(v___x_961_, 0, v___y_953_);
v___x_971_ = v___x_961_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___y_953_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v___x_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
v___jp_975_:
{
lean_object* v_idx_978_; uint8_t v___x_979_; 
v_idx_978_ = lean_ctor_get(v___y_976_, 1);
v___x_979_ = lean_nat_dec_eq(v_idx_978_, v_idx_978_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; 
v___x_980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_980_, 0, v___y_976_);
lean_ctor_set(v___x_980_, 1, v_err_977_);
return v___x_980_;
}
else
{
lean_dec(v_err_977_);
v___y_953_ = v___y_976_;
goto v___jp_952_;
}
}
v___jp_981_:
{
lean_object* v___x_983_; 
v___x_983_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__5));
v___y_976_ = v___y_982_;
v_err_977_ = v___x_983_;
goto v___jp_975_;
}
v___jp_984_:
{
uint8_t v___x_989_; uint8_t v___x_990_; 
v___x_989_ = 45;
v___x_990_ = lean_uint8_dec_eq(v___y_985_, v___x_989_);
if (v___x_990_ == 0)
{
uint8_t v___x_991_; uint8_t v___x_992_; 
v___x_991_ = 46;
v___x_992_ = lean_uint8_dec_eq(v___y_985_, v___x_991_);
if (v___x_992_ == 0)
{
lean_dec_ref(v___y_987_);
v___y_906_ = v___y_988_;
v_pos_907_ = v___y_986_;
goto v___jp_905_;
}
else
{
lean_dec_ref(v___y_988_);
lean_dec_ref(v___y_986_);
v___y_982_ = v___y_987_;
goto v___jp_981_;
}
}
else
{
lean_dec_ref(v___y_988_);
lean_dec_ref(v___y_986_);
v___y_982_ = v___y_987_;
goto v___jp_981_;
}
}
v___jp_993_:
{
uint8_t v___x_998_; uint8_t v___x_999_; 
v___x_998_ = 65;
v___x_999_ = lean_uint8_dec_le(v___x_998_, v___y_994_);
if (v___x_999_ == 0)
{
v___y_985_ = v___y_994_;
v___y_986_ = v___y_995_;
v___y_987_ = v___y_996_;
v___y_988_ = v___y_997_;
goto v___jp_984_;
}
else
{
uint8_t v___x_1000_; uint8_t v___x_1001_; 
v___x_1000_ = 90;
v___x_1001_ = lean_uint8_dec_le(v___y_994_, v___x_1000_);
if (v___x_1001_ == 0)
{
v___y_985_ = v___y_994_;
v___y_986_ = v___y_995_;
v___y_987_ = v___y_996_;
v___y_988_ = v___y_997_;
goto v___jp_984_;
}
else
{
lean_dec_ref(v___y_997_);
lean_dec_ref(v___y_995_);
v___y_982_ = v___y_996_;
goto v___jp_981_;
}
}
}
v___jp_1002_:
{
uint8_t v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = 97;
v___x_1008_ = lean_uint8_dec_le(v___x_1007_, v___y_1003_);
if (v___x_1008_ == 0)
{
v___y_994_ = v___y_1003_;
v___y_995_ = v___y_1004_;
v___y_996_ = v___y_1005_;
v___y_997_ = v___y_1006_;
goto v___jp_993_;
}
else
{
uint8_t v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = 122;
v___x_1010_ = lean_uint8_dec_le(v___y_1003_, v___x_1009_);
if (v___x_1010_ == 0)
{
v___y_994_ = v___y_1003_;
v___y_995_ = v___y_1004_;
v___y_996_ = v___y_1005_;
v___y_997_ = v___y_1006_;
goto v___jp_993_;
}
else
{
lean_dec_ref(v___y_1006_);
lean_dec_ref(v___y_1004_);
v___y_982_ = v___y_1005_;
goto v___jp_981_;
}
}
}
v___jp_1011_:
{
lean_object* v___x_1013_; 
lean_inc_ref(v_pos_1012_);
v___x_1013_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(v_pos_1012_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_pos_1014_; lean_object* v_res_1015_; lean_object* v_array_1016_; lean_object* v_idx_1017_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v_pos_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_pos_1014_);
v_res_1015_ = lean_ctor_get(v___x_1013_, 1);
lean_inc(v_res_1015_);
lean_dec_ref_known(v___x_1013_, 2);
v_array_1016_ = lean_ctor_get(v_pos_1014_, 0);
v_idx_1017_ = lean_ctor_get(v_pos_1014_, 1);
v___x_1018_ = lean_byte_array_size(v_array_1016_);
v___x_1019_ = lean_nat_dec_lt(v_idx_1017_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_dec_ref(v_pos_1012_);
v___y_906_ = v_res_1015_;
v_pos_907_ = v_pos_1014_;
goto v___jp_905_;
}
else
{
uint8_t v___x_1020_; uint8_t v___x_1021_; uint8_t v___x_1022_; 
v___x_1020_ = lean_byte_array_fget(v_array_1016_, v_idx_1017_);
v___x_1021_ = 48;
v___x_1022_ = lean_uint8_dec_le(v___x_1021_, v___x_1020_);
if (v___x_1022_ == 0)
{
v___y_1003_ = v___x_1020_;
v___y_1004_ = v_pos_1014_;
v___y_1005_ = v_pos_1012_;
v___y_1006_ = v_res_1015_;
goto v___jp_1002_;
}
else
{
uint8_t v___x_1023_; uint8_t v___x_1024_; 
v___x_1023_ = 57;
v___x_1024_ = lean_uint8_dec_le(v___x_1020_, v___x_1023_);
if (v___x_1024_ == 0)
{
v___y_1003_ = v___x_1020_;
v___y_1004_ = v_pos_1014_;
v___y_1005_ = v_pos_1012_;
v___y_1006_ = v_res_1015_;
goto v___jp_1002_;
}
else
{
lean_dec(v_res_1015_);
lean_dec(v_pos_1014_);
v___y_982_ = v_pos_1012_;
goto v___jp_981_;
}
}
}
}
else
{
lean_object* v_err_1025_; 
v_err_1025_ = lean_ctor_get(v___x_1013_, 1);
lean_inc(v_err_1025_);
lean_dec_ref_known(v___x_1013_, 2);
v___y_976_ = v_pos_1012_;
v_err_977_ = v_err_1025_;
goto v___jp_975_;
}
}
v___jp_1026_:
{
v___y_953_ = v_pos_1027_;
goto v___jp_952_;
}
v___jp_1029_:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = lean_byte_array_size(v_array_949_);
v___x_1033_ = lean_nat_dec_lt(v_idx_950_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_dec(v_idx_950_);
lean_dec_ref(v_array_949_);
v_pos_1027_ = v_pos_1030_;
v_res_1028_ = v_res_1031_;
goto v___jp_1026_;
}
else
{
uint8_t v___x_1034_; uint8_t v___x_1035_; uint8_t v___x_1036_; 
v___x_1034_ = lean_byte_array_fget(v_array_949_, v_idx_950_);
lean_dec(v_idx_950_);
lean_dec_ref(v_array_949_);
v___x_1035_ = 48;
v___x_1036_ = lean_uint8_dec_le(v___x_1035_, v___x_1034_);
if (v___x_1036_ == 0)
{
v_pos_1027_ = v_pos_1030_;
v_res_1028_ = v_res_1031_;
goto v___jp_1026_;
}
else
{
uint8_t v___x_1037_; uint8_t v___x_1038_; 
v___x_1037_ = 57;
v___x_1038_ = lean_uint8_dec_le(v___x_1034_, v___x_1037_);
if (v___x_1038_ == 0)
{
v_pos_1027_ = v_pos_1030_;
v_res_1028_ = v_res_1031_;
goto v___jp_1026_;
}
else
{
v_pos_1012_ = v_pos_1030_;
goto v___jp_1011_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object* v_config_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1066_, v_a_1067_);
lean_dec_ref(v_config_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object* v___x_1069_, lean_object* v___x_1070_, lean_object* v___x_1071_, lean_object* v_inst_1072_, lean_object* v_R_1073_, lean_object* v_a_1074_, uint8_t v_b_1075_, lean_object* v_c_1076_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_1069_, v___x_1071_, v_a_1074_, v_b_1075_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object* v___x_1078_, lean_object* v___x_1079_, lean_object* v___x_1080_, lean_object* v_inst_1081_, lean_object* v_R_1082_, lean_object* v_a_1083_, lean_object* v_b_1084_, lean_object* v_c_1085_){
_start:
{
uint8_t v_b_boxed_1086_; uint8_t v_res_1087_; lean_object* v_r_1088_; 
v_b_boxed_1086_ = lean_unbox(v_b_1084_);
v_res_1087_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(v___x_1078_, v___x_1079_, v___x_1080_, v_inst_1081_, v_R_1082_, v_a_1083_, v_b_boxed_1086_, v_c_1085_);
lean_dec(v___x_1080_);
lean_dec_ref(v___x_1079_);
lean_dec_ref(v___x_1078_);
v_r_1088_ = lean_box(v_res_1087_);
return v_r_1088_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t v___x_1089_, lean_object* v___x_1090_, lean_object* v___x_1091_, lean_object* v___x_1092_, lean_object* v_inst_1093_, lean_object* v_R_1094_, lean_object* v_a_1095_, uint8_t v_b_1096_, lean_object* v_c_1097_){
_start:
{
uint8_t v___x_1098_; 
v___x_1098_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_1089_, v___x_1090_, v___x_1091_, v___x_1092_, v_a_1095_, v_b_1096_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object* v___x_1099_, lean_object* v___x_1100_, lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v_inst_1103_, lean_object* v_R_1104_, lean_object* v_a_1105_, lean_object* v_b_1106_, lean_object* v_c_1107_){
_start:
{
uint8_t v___x_15875__boxed_1108_; uint8_t v_b_boxed_1109_; uint8_t v_res_1110_; lean_object* v_r_1111_; 
v___x_15875__boxed_1108_ = lean_unbox(v___x_1099_);
v_b_boxed_1109_ = lean_unbox(v_b_1106_);
v_res_1110_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(v___x_15875__boxed_1108_, v___x_1100_, v___x_1101_, v___x_1102_, v_inst_1103_, v_R_1104_, v_a_1105_, v_b_boxed_1109_, v_c_1107_);
lean_dec_ref(v___x_1101_);
lean_dec_ref(v___x_1100_);
v_r_1111_ = lean_box(v_res_1110_);
return v_r_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object* v_config_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v_port_1126_; lean_object* v___y_1127_; lean_object* v___y_1131_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; uint8_t v_val_1143_; uint8_t v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v_pos_1154_; lean_object* v_array_1155_; lean_object* v_idx_1156_; lean_object* v_res_1157_; uint8_t v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v_pos_1172_; lean_object* v_pos_1175_; lean_object* v_res_1176_; lean_object* v_err_1241_; lean_object* v___x_1246_; 
lean_inc_ref(v_a_1122_);
v___x_1246_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_1121_, v_a_1122_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_pos_1247_; lean_object* v_res_1248_; lean_object* v_array_1249_; lean_object* v_idx_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1267_; 
v_pos_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_pos_1247_);
v_res_1248_ = lean_ctor_get(v___x_1246_, 1);
lean_inc(v_res_1248_);
lean_dec_ref_known(v___x_1246_, 2);
v_array_1249_ = lean_ctor_get(v_pos_1247_, 0);
v_idx_1250_ = lean_ctor_get(v_pos_1247_, 1);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_pos_1247_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1252_ = v_pos_1247_;
v_isShared_1253_ = v_isSharedCheck_1267_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_idx_1250_);
lean_inc(v_array_1249_);
lean_dec(v_pos_1247_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1267_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; uint8_t v___x_1255_; 
v___x_1254_ = lean_byte_array_size(v_array_1249_);
v___x_1255_ = lean_nat_dec_lt(v_idx_1250_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; 
lean_del_object(v___x_1252_);
lean_dec(v_idx_1250_);
lean_dec_ref(v_array_1249_);
lean_dec(v_res_1248_);
v___x_1256_ = lean_box(0);
v_err_1241_ = v___x_1256_;
goto v___jp_1240_;
}
else
{
uint8_t v___x_1257_; uint8_t v_got_1258_; uint8_t v___x_1259_; 
v___x_1257_ = 64;
v_got_1258_ = lean_byte_array_fget(v_array_1249_, v_idx_1250_);
v___x_1259_ = lean_uint8_dec_eq(v_got_1258_, v___x_1257_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; 
lean_del_object(v___x_1252_);
lean_dec(v_idx_1250_);
lean_dec_ref(v_array_1249_);
lean_dec(v_res_1248_);
v___x_1260_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5));
v_err_1241_ = v___x_1260_;
goto v___jp_1240_;
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
lean_dec_ref(v_a_1122_);
v___x_1261_ = lean_unsigned_to_nat(1u);
v___x_1262_ = lean_nat_add(v_idx_1250_, v___x_1261_);
lean_dec(v_idx_1250_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 1, v___x_1262_);
v___x_1264_ = v___x_1252_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_array_1249_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_res_1248_);
v_pos_1175_ = v___x_1264_;
v_res_1176_ = v___x_1265_;
goto v___jp_1174_;
}
}
}
}
}
else
{
lean_object* v_err_1268_; 
v_err_1268_ = lean_ctor_get(v___x_1246_, 1);
lean_inc(v_err_1268_);
lean_dec_ref_known(v___x_1246_, 2);
v_err_1241_ = v_err_1268_;
goto v___jp_1240_;
}
v___jp_1123_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1128_, 0, v___y_1125_);
lean_ctor_set(v___x_1128_, 1, v___y_1124_);
lean_ctor_set(v___x_1128_, 2, v_port_1126_);
v___x_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___y_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
return v___x_1129_;
}
v___jp_1130_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1));
v___x_1133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___y_1131_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
return v___x_1133_;
}
v___jp_1134_:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_box(1);
v___y_1124_ = v___y_1135_;
v___y_1125_ = v___y_1137_;
v_port_1126_ = v___x_1138_;
v___y_1127_ = v___y_1136_;
goto v___jp_1123_;
}
v___jp_1139_:
{
uint8_t v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = 47;
v___x_1145_ = lean_uint8_dec_eq(v_val_1143_, v___x_1144_);
if (v___x_1145_ == 0)
{
uint8_t v___x_1146_; uint8_t v___x_1147_; 
v___x_1146_ = 63;
v___x_1147_ = lean_uint8_dec_eq(v_val_1143_, v___x_1146_);
if (v___x_1147_ == 0)
{
uint8_t v___x_1148_; uint8_t v___x_1149_; 
v___x_1148_ = 35;
v___x_1149_ = lean_uint8_dec_eq(v_val_1143_, v___x_1148_);
if (v___x_1149_ == 0)
{
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1140_);
v___y_1131_ = v___y_1141_;
goto v___jp_1130_;
}
else
{
v___y_1135_ = v___y_1140_;
v___y_1136_ = v___y_1141_;
v___y_1137_ = v___y_1142_;
goto v___jp_1134_;
}
}
else
{
v___y_1135_ = v___y_1140_;
v___y_1136_ = v___y_1141_;
v___y_1137_ = v___y_1142_;
goto v___jp_1134_;
}
}
else
{
v___y_1135_ = v___y_1140_;
v___y_1136_ = v___y_1141_;
v___y_1137_ = v___y_1142_;
goto v___jp_1134_;
}
}
v___jp_1150_:
{
lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = lean_byte_array_size(v_array_1155_);
v___x_1159_ = lean_nat_dec_lt(v_idx_1156_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_dec(v_idx_1156_);
lean_dec_ref(v_array_1155_);
if (v___y_1151_ == 0)
{
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
v___y_1131_ = v_pos_1154_;
goto v___jp_1130_;
}
else
{
v___y_1135_ = v___y_1152_;
v___y_1136_ = v_pos_1154_;
v___y_1137_ = v___y_1153_;
goto v___jp_1134_;
}
}
else
{
uint8_t v___x_1160_; 
v___x_1160_ = lean_byte_array_fget(v_array_1155_, v_idx_1156_);
lean_dec(v_idx_1156_);
lean_dec_ref(v_array_1155_);
v___y_1140_ = v___y_1152_;
v___y_1141_ = v_pos_1154_;
v___y_1142_ = v___y_1153_;
v_val_1143_ = v___x_1160_;
goto v___jp_1139_;
}
}
v___jp_1161_:
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_box(0);
v___y_1151_ = v___y_1162_;
v___y_1152_ = v___y_1163_;
v___y_1153_ = v___y_1165_;
v_pos_1154_ = v___y_1166_;
v_array_1155_ = v___y_1164_;
v_idx_1156_ = v___y_1167_;
v_res_1157_ = v___x_1168_;
goto v___jp_1150_;
}
v___jp_1169_:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_box(0);
v___y_1124_ = v___y_1170_;
v___y_1125_ = v___y_1171_;
v_port_1126_ = v___x_1173_;
v___y_1127_ = v_pos_1172_;
goto v___jp_1123_;
}
v___jp_1174_:
{
lean_object* v___x_1177_; 
v___x_1177_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1121_, v_pos_1175_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_pos_1178_; lean_object* v_res_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1230_; 
v_pos_1178_ = lean_ctor_get(v___x_1177_, 0);
v_res_1179_ = lean_ctor_get(v___x_1177_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1181_ = v___x_1177_;
v_isShared_1182_ = v_isSharedCheck_1230_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_res_1179_);
lean_inc(v_pos_1178_);
lean_dec(v___x_1177_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1230_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v_array_1183_; lean_object* v_idx_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; 
v_array_1183_ = lean_ctor_get(v_pos_1178_, 0);
v_idx_1184_ = lean_ctor_get(v_pos_1178_, 1);
v___x_1185_ = lean_byte_array_size(v_array_1183_);
v___x_1186_ = lean_nat_dec_lt(v_idx_1184_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_del_object(v___x_1181_);
v___y_1170_ = v_res_1179_;
v___y_1171_ = v_res_1176_;
v_pos_1172_ = v_pos_1178_;
goto v___jp_1169_;
}
else
{
uint8_t v___x_1187_; uint8_t v___x_1188_; uint8_t v___x_1189_; 
v___x_1187_ = lean_byte_array_fget(v_array_1183_, v_idx_1184_);
v___x_1188_ = 58;
v___x_1189_ = lean_uint8_dec_eq(v___x_1187_, v___x_1188_);
if (v___x_1189_ == 0)
{
lean_del_object(v___x_1181_);
v___y_1170_ = v_res_1179_;
v___y_1171_ = v_res_1176_;
v_pos_1172_ = v_pos_1178_;
goto v___jp_1169_;
}
else
{
if (v___x_1186_ == 0)
{
lean_object* v___x_1190_; lean_object* v___x_1192_; 
lean_dec(v_res_1179_);
lean_dec(v_res_1176_);
v___x_1190_ = lean_box(0);
if (v_isShared_1182_ == 0)
{
lean_ctor_set_tag(v___x_1181_, 1);
lean_ctor_set(v___x_1181_, 1, v___x_1190_);
v___x_1192_ = v___x_1181_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_pos_1178_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
else
{
if (v___x_1189_ == 0)
{
lean_object* v___x_1194_; lean_object* v___x_1196_; 
lean_dec(v_res_1179_);
lean_dec(v_res_1176_);
v___x_1194_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_1182_ == 0)
{
lean_ctor_set_tag(v___x_1181_, 1);
lean_ctor_set(v___x_1181_, 1, v___x_1194_);
v___x_1196_ = v___x_1181_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_pos_1178_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
else
{
lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1227_; 
lean_inc(v_idx_1184_);
lean_inc_ref(v_array_1183_);
lean_del_object(v___x_1181_);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_pos_1178_);
if (v_isSharedCheck_1227_ == 0)
{
lean_object* v_unused_1228_; lean_object* v_unused_1229_; 
v_unused_1228_ = lean_ctor_get(v_pos_1178_, 1);
lean_dec(v_unused_1228_);
v_unused_1229_ = lean_ctor_get(v_pos_1178_, 0);
lean_dec(v_unused_1229_);
v___x_1199_ = v_pos_1178_;
v_isShared_1200_ = v_isSharedCheck_1227_;
goto v_resetjp_1198_;
}
else
{
lean_dec(v_pos_1178_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1227_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; 
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1202_ = lean_nat_add(v_idx_1184_, v___x_1201_);
lean_dec(v_idx_1184_);
lean_inc(v___x_1202_);
lean_inc_ref(v_array_1183_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 1, v___x_1202_);
v___x_1204_ = v___x_1199_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_array_1183_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1202_);
v___x_1204_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
uint8_t v___x_1205_; 
v___x_1205_ = lean_nat_dec_lt(v___x_1202_, v___x_1185_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_box(0);
v___y_1151_ = v___x_1189_;
v___y_1152_ = v_res_1179_;
v___y_1153_ = v_res_1176_;
v_pos_1154_ = v___x_1204_;
v_array_1155_ = v_array_1183_;
v_idx_1156_ = v___x_1202_;
v_res_1157_ = v___x_1206_;
goto v___jp_1150_;
}
else
{
uint8_t v___x_1207_; uint8_t v___x_1208_; uint8_t v___x_1209_; 
v___x_1207_ = lean_byte_array_fget(v_array_1183_, v___x_1202_);
v___x_1208_ = 48;
v___x_1209_ = lean_uint8_dec_le(v___x_1208_, v___x_1207_);
if (v___x_1209_ == 0)
{
v___y_1162_ = v___x_1189_;
v___y_1163_ = v_res_1179_;
v___y_1164_ = v_array_1183_;
v___y_1165_ = v_res_1176_;
v___y_1166_ = v___x_1204_;
v___y_1167_ = v___x_1202_;
goto v___jp_1161_;
}
else
{
uint8_t v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = 57;
v___x_1211_ = lean_uint8_dec_le(v___x_1207_, v___x_1210_);
if (v___x_1211_ == 0)
{
v___y_1162_ = v___x_1189_;
v___y_1163_ = v_res_1179_;
v___y_1164_ = v_array_1183_;
v___y_1165_ = v_res_1176_;
v___y_1166_ = v___x_1204_;
v___y_1167_ = v___x_1202_;
goto v___jp_1161_;
}
else
{
lean_object* v___x_1212_; 
lean_dec(v___x_1202_);
lean_dec_ref(v_array_1183_);
v___x_1212_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_1204_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_pos_1213_; lean_object* v_res_1214_; lean_object* v___x_1215_; uint16_t v___x_1216_; 
v_pos_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_pos_1213_);
v_res_1214_ = lean_ctor_get(v___x_1212_, 1);
lean_inc(v_res_1214_);
lean_dec_ref_known(v___x_1212_, 2);
v___x_1215_ = lean_alloc_ctor(2, 0, 2);
v___x_1216_ = lean_unbox(v_res_1214_);
lean_dec(v_res_1214_);
lean_ctor_set_uint16(v___x_1215_, 0, v___x_1216_);
v___y_1124_ = v_res_1179_;
v___y_1125_ = v_res_1176_;
v_port_1126_ = v___x_1215_;
v___y_1127_ = v_pos_1213_;
goto v___jp_1123_;
}
else
{
lean_object* v_pos_1217_; lean_object* v_err_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec(v_res_1179_);
lean_dec(v_res_1176_);
v_pos_1217_ = lean_ctor_get(v___x_1212_, 0);
v_err_1218_ = lean_ctor_get(v___x_1212_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1212_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_err_1218_);
lean_inc(v_pos_1217_);
lean_dec(v___x_1212_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_pos_1217_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_err_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
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
}
}
}
else
{
lean_object* v_pos_1231_; lean_object* v_err_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
lean_dec(v_res_1176_);
v_pos_1231_ = lean_ctor_get(v___x_1177_, 0);
v_err_1232_ = lean_ctor_get(v___x_1177_, 1);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1177_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_err_1232_);
lean_inc(v_pos_1231_);
lean_dec(v___x_1177_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_pos_1231_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_err_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
v___jp_1240_:
{
lean_object* v_idx_1242_; uint8_t v___x_1243_; 
v_idx_1242_ = lean_ctor_get(v_a_1122_, 1);
v___x_1243_ = lean_nat_dec_eq(v_idx_1242_, v_idx_1242_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1244_, 0, v_a_1122_);
lean_ctor_set(v___x_1244_, 1, v_err_1241_);
return v___x_1244_;
}
else
{
lean_object* v___x_1245_; 
lean_dec(v_err_1241_);
v___x_1245_ = lean_box(0);
v_pos_1175_ = v_a_1122_;
v_res_1176_ = v___x_1245_;
goto v___jp_1174_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object* v_config_1269_, lean_object* v_a_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_1269_, v_a_1270_);
lean_dec_ref(v_config_1269_);
return v_res_1271_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t v_c_1272_){
_start:
{
uint8_t v___x_1320_; uint8_t v___x_1321_; 
v___x_1320_ = 48;
v___x_1321_ = lean_uint8_dec_le(v___x_1320_, v_c_1272_);
if (v___x_1321_ == 0)
{
goto v___jp_1315_;
}
else
{
uint8_t v___x_1322_; uint8_t v___x_1323_; 
v___x_1322_ = 57;
v___x_1323_ = lean_uint8_dec_le(v_c_1272_, v___x_1322_);
if (v___x_1323_ == 0)
{
goto v___jp_1315_;
}
else
{
return v___x_1323_;
}
}
v___jp_1273_:
{
uint8_t v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = 45;
v___x_1275_ = lean_uint8_dec_eq(v_c_1272_, v___x_1274_);
if (v___x_1275_ == 0)
{
uint8_t v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = 46;
v___x_1277_ = lean_uint8_dec_eq(v_c_1272_, v___x_1276_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; uint8_t v___x_1279_; 
v___x_1278_ = 95;
v___x_1279_ = lean_uint8_dec_eq(v_c_1272_, v___x_1278_);
if (v___x_1279_ == 0)
{
uint8_t v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = 126;
v___x_1281_ = lean_uint8_dec_eq(v_c_1272_, v___x_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = 33;
v___x_1283_ = lean_uint8_dec_eq(v_c_1272_, v___x_1282_);
if (v___x_1283_ == 0)
{
uint8_t v___x_1284_; uint8_t v___x_1285_; 
v___x_1284_ = 36;
v___x_1285_ = lean_uint8_dec_eq(v_c_1272_, v___x_1284_);
if (v___x_1285_ == 0)
{
uint8_t v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = 38;
v___x_1287_ = lean_uint8_dec_eq(v_c_1272_, v___x_1286_);
if (v___x_1287_ == 0)
{
uint8_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = 39;
v___x_1289_ = lean_uint8_dec_eq(v_c_1272_, v___x_1288_);
if (v___x_1289_ == 0)
{
uint8_t v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = 40;
v___x_1291_ = lean_uint8_dec_eq(v_c_1272_, v___x_1290_);
if (v___x_1291_ == 0)
{
uint8_t v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = 41;
v___x_1293_ = lean_uint8_dec_eq(v_c_1272_, v___x_1292_);
if (v___x_1293_ == 0)
{
uint8_t v___x_1294_; uint8_t v___x_1295_; 
v___x_1294_ = 42;
v___x_1295_ = lean_uint8_dec_eq(v_c_1272_, v___x_1294_);
if (v___x_1295_ == 0)
{
uint8_t v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = 43;
v___x_1297_ = lean_uint8_dec_eq(v_c_1272_, v___x_1296_);
if (v___x_1297_ == 0)
{
uint8_t v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = 44;
v___x_1299_ = lean_uint8_dec_eq(v_c_1272_, v___x_1298_);
if (v___x_1299_ == 0)
{
uint8_t v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = 59;
v___x_1301_ = lean_uint8_dec_eq(v_c_1272_, v___x_1300_);
if (v___x_1301_ == 0)
{
uint8_t v___x_1302_; uint8_t v___x_1303_; 
v___x_1302_ = 61;
v___x_1303_ = lean_uint8_dec_eq(v_c_1272_, v___x_1302_);
if (v___x_1303_ == 0)
{
uint8_t v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = 58;
v___x_1305_ = lean_uint8_dec_eq(v_c_1272_, v___x_1304_);
if (v___x_1305_ == 0)
{
uint8_t v___x_1306_; uint8_t v___x_1307_; 
v___x_1306_ = 64;
v___x_1307_ = lean_uint8_dec_eq(v_c_1272_, v___x_1306_);
if (v___x_1307_ == 0)
{
uint8_t v___x_1308_; uint8_t v___x_1309_; 
v___x_1308_ = 37;
v___x_1309_ = lean_uint8_dec_eq(v_c_1272_, v___x_1308_);
return v___x_1309_;
}
else
{
return v___x_1307_;
}
}
else
{
return v___x_1305_;
}
}
else
{
return v___x_1303_;
}
}
else
{
return v___x_1301_;
}
}
else
{
return v___x_1299_;
}
}
else
{
return v___x_1297_;
}
}
else
{
return v___x_1295_;
}
}
else
{
return v___x_1293_;
}
}
else
{
return v___x_1291_;
}
}
else
{
return v___x_1289_;
}
}
else
{
return v___x_1287_;
}
}
else
{
return v___x_1285_;
}
}
else
{
return v___x_1283_;
}
}
else
{
return v___x_1281_;
}
}
else
{
return v___x_1279_;
}
}
else
{
return v___x_1277_;
}
}
else
{
return v___x_1275_;
}
}
v___jp_1310_:
{
uint8_t v___x_1311_; uint8_t v___x_1312_; 
v___x_1311_ = 65;
v___x_1312_ = lean_uint8_dec_le(v___x_1311_, v_c_1272_);
if (v___x_1312_ == 0)
{
goto v___jp_1273_;
}
else
{
uint8_t v___x_1313_; uint8_t v___x_1314_; 
v___x_1313_ = 90;
v___x_1314_ = lean_uint8_dec_le(v_c_1272_, v___x_1313_);
if (v___x_1314_ == 0)
{
goto v___jp_1273_;
}
else
{
return v___x_1314_;
}
}
}
v___jp_1315_:
{
uint8_t v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = 97;
v___x_1317_ = lean_uint8_dec_le(v___x_1316_, v_c_1272_);
if (v___x_1317_ == 0)
{
goto v___jp_1310_;
}
else
{
uint8_t v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = 122;
v___x_1319_ = lean_uint8_dec_le(v_c_1272_, v___x_1318_);
if (v___x_1319_ == 0)
{
goto v___jp_1310_;
}
else
{
return v___x_1319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object* v_c_1324_){
_start:
{
uint8_t v_c_boxed_1325_; uint8_t v_res_1326_; lean_object* v_r_1327_; 
v_c_boxed_1325_ = lean_unbox(v_c_1324_);
v_res_1326_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(v_c_boxed_1325_);
v_r_1327_ = lean_box(v_res_1326_);
return v_r_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object* v_config_1329_, lean_object* v_a_1330_){
_start:
{
lean_object* v_maxSegmentLength_1331_; lean_object* v___f_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v_snd_1335_; lean_object* v_fst_1336_; lean_object* v_fst_1337_; lean_object* v_array_1338_; lean_object* v_idx_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1356_; 
v_maxSegmentLength_1331_ = lean_ctor_get(v_config_1329_, 3);
v___f_1332_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0));
v___x_1333_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1330_);
v___x_1334_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1332_, v_maxSegmentLength_1331_, v___x_1333_, v_a_1330_);
v_snd_1335_ = lean_ctor_get(v___x_1334_, 1);
lean_inc(v_snd_1335_);
v_fst_1336_ = lean_ctor_get(v___x_1334_, 0);
lean_inc(v_fst_1336_);
lean_dec_ref(v___x_1334_);
v_fst_1337_ = lean_ctor_get(v_snd_1335_, 0);
lean_inc(v_fst_1337_);
lean_dec(v_snd_1335_);
v_array_1338_ = lean_ctor_get(v_a_1330_, 0);
v_idx_1339_ = lean_ctor_get(v_a_1330_, 1);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_a_1330_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1341_ = v_a_1330_;
v_isShared_1342_ = v_isSharedCheck_1356_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_idx_1339_);
lean_inc(v_array_1338_);
lean_dec(v_a_1330_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1356_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v_lower_1344_; lean_object* v_upper_1345_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___y_1353_; uint8_t v___x_1355_; 
v___x_1350_ = lean_nat_add(v_idx_1339_, v_fst_1336_);
lean_dec(v_fst_1336_);
v___x_1351_ = lean_byte_array_size(v_array_1338_);
v___x_1355_ = lean_nat_dec_le(v_idx_1339_, v___x_1333_);
if (v___x_1355_ == 0)
{
v___y_1353_ = v_idx_1339_;
goto v___jp_1352_;
}
else
{
lean_dec(v_idx_1339_);
v___y_1353_ = v___x_1333_;
goto v___jp_1352_;
}
v___jp_1343_:
{
lean_object* v___x_1346_; lean_object* v___x_1348_; 
v___x_1346_ = l_ByteArray_toByteSlice(v_array_1338_, v_lower_1344_, v_upper_1345_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 1, v___x_1346_);
lean_ctor_set(v___x_1341_, 0, v_fst_1337_);
v___x_1348_ = v___x_1341_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_fst_1337_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
v___jp_1352_:
{
uint8_t v___x_1354_; 
v___x_1354_ = lean_nat_dec_le(v___x_1350_, v___x_1351_);
if (v___x_1354_ == 0)
{
lean_dec(v___x_1350_);
v_lower_1344_ = v___y_1353_;
v_upper_1345_ = v___x_1351_;
goto v___jp_1343_;
}
else
{
v_lower_1344_ = v___y_1353_;
v_upper_1345_ = v___x_1350_;
goto v___jp_1343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object* v_config_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1357_, v_a_1358_);
lean_dec_ref(v_config_1357_);
return v_res_1359_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t v_c_1360_){
_start:
{
uint8_t v___x_1361_; uint8_t v___x_1362_; 
v___x_1361_ = 63;
v___x_1362_ = lean_uint8_dec_eq(v_c_1360_, v___x_1361_);
if (v___x_1362_ == 0)
{
uint8_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1363_ = 35;
v___x_1364_ = lean_uint8_dec_eq(v_c_1360_, v___x_1363_);
return v___x_1364_;
}
else
{
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object* v_c_1365_){
_start:
{
uint8_t v_c_boxed_1366_; uint8_t v_res_1367_; lean_object* v_r_1368_; 
v_c_boxed_1366_ = lean_unbox(v_c_1365_);
v_res_1367_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v_c_boxed_1366_);
v_r_1368_ = lean_box(v_res_1367_);
return v_r_1368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__1(lean_object* v_fst_1369_, lean_object* v_snd_1370_, lean_object* v_00___1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1373_, 0, v_fst_1369_);
lean_ctor_set(v___x_1373_, 1, v_snd_1370_);
v___x_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___y_1372_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object* v_config_1383_, lean_object* v_a_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___y_1387_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v_array_1435_; lean_object* v_idx_1436_; lean_object* v_fst_1437_; lean_object* v_snd_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1603_; 
v_array_1435_ = lean_ctor_get(v___y_1385_, 0);
v_idx_1436_ = lean_ctor_get(v___y_1385_, 1);
v_fst_1437_ = lean_ctor_get(v_a_1384_, 0);
v_snd_1438_ = lean_ctor_get(v_a_1384_, 1);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_a_1384_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1440_ = v_a_1384_;
v_isShared_1441_ = v_isSharedCheck_1603_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_snd_1438_);
lean_inc(v_fst_1437_);
lean_dec(v_a_1384_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1603_;
goto v_resetjp_1439_;
}
v___jp_1386_:
{
if (lean_obj_tag(v___y_1387_) == 0)
{
lean_object* v_res_1388_; 
v_res_1388_ = lean_ctor_get(v___y_1387_, 1);
lean_inc(v_res_1388_);
if (lean_obj_tag(v_res_1388_) == 0)
{
lean_object* v_pos_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1397_; 
lean_dec_ref(v_config_1383_);
v_pos_1389_ = lean_ctor_get(v___y_1387_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___y_1387_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v___y_1387_, 1);
lean_dec(v_unused_1398_);
v___x_1391_ = v___y_1387_;
v_isShared_1392_ = v_isSharedCheck_1397_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_pos_1389_);
lean_dec(v___y_1387_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1397_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v_a_1393_; lean_object* v___x_1395_; 
v_a_1393_ = lean_ctor_get(v_res_1388_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v_res_1388_, 1);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 1, v_a_1393_);
v___x_1395_ = v___x_1391_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_pos_1389_);
lean_ctor_set(v_reuseFailAlloc_1396_, 1, v_a_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
else
{
lean_object* v_pos_1399_; lean_object* v_a_1400_; 
v_pos_1399_ = lean_ctor_get(v___y_1387_, 0);
lean_inc(v_pos_1399_);
lean_dec_ref_known(v___y_1387_, 2);
v_a_1400_ = lean_ctor_get(v_res_1388_, 0);
lean_inc(v_a_1400_);
lean_dec_ref_known(v_res_1388_, 1);
v_a_1384_ = v_a_1400_;
v___y_1385_ = v_pos_1399_;
goto _start;
}
}
else
{
lean_object* v_pos_1402_; lean_object* v_err_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec_ref(v_config_1383_);
v_pos_1402_ = lean_ctor_get(v___y_1387_, 0);
v_err_1403_ = lean_ctor_get(v___y_1387_, 1);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___y_1387_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___y_1387_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_err_1403_);
lean_inc(v_pos_1402_);
lean_dec(v___y_1387_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_pos_1402_);
lean_ctor_set(v_reuseFailAlloc_1409_, 1, v_err_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
}
v___jp_1411_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___y_1412_);
lean_ctor_set(v___x_1415_, 1, v___y_1414_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___y_1413_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
return v___x_1416_;
}
v___jp_1417_:
{
lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = lean_array_get_size(v___y_1421_);
v___x_1423_ = lean_nat_dec_le(v___y_1420_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_dec(v___y_1420_);
v___x_1424_ = l_ByteArray_empty;
v___x_1425_ = lean_array_push(v___y_1421_, v___x_1424_);
v___x_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
lean_ctor_set(v___x_1426_, 1, v___y_1418_);
v_a_1384_ = v___x_1426_;
v___y_1385_ = v___y_1419_;
goto _start;
}
else
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1418_);
lean_dec_ref(v_config_1383_);
v___x_1428_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1429_ = l_Nat_reprFast(v___y_1420_);
v___x_1430_ = lean_string_append(v___x_1428_, v___x_1429_);
lean_dec_ref(v___x_1429_);
v___x_1431_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1432_ = lean_string_append(v___x_1430_, v___x_1431_);
v___x_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
v___x_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___y_1419_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
return v___x_1434_;
}
}
v_resetjp_1439_:
{
lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = lean_byte_array_size(v_array_1435_);
v___x_1443_ = lean_nat_dec_lt(v_idx_1436_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1445_; 
lean_dec_ref(v_config_1383_);
if (v_isShared_1441_ == 0)
{
v___x_1445_ = v___x_1440_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_fst_1437_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_snd_1438_);
v___x_1445_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___y_1385_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
return v___x_1446_;
}
}
else
{
uint8_t v___x_1544_; uint8_t v___x_1594_; 
v___x_1544_ = lean_byte_array_fget(v_array_1435_, v_idx_1436_);
v___x_1594_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1544_);
if (v___x_1594_ == 0)
{
uint8_t v___x_1595_; uint8_t v___x_1596_; 
v___x_1595_ = 47;
v___x_1596_ = lean_uint8_dec_eq(v___x_1544_, v___x_1595_);
if (v___x_1596_ == 0)
{
uint8_t v___x_1597_; uint8_t v___x_1598_; 
v___x_1597_ = 48;
v___x_1598_ = lean_uint8_dec_le(v___x_1597_, v___x_1544_);
if (v___x_1598_ == 0)
{
goto v___jp_1589_;
}
else
{
uint8_t v___x_1599_; uint8_t v___x_1600_; 
v___x_1599_ = 57;
v___x_1600_ = lean_uint8_dec_le(v___x_1544_, v___x_1599_);
if (v___x_1600_ == 0)
{
goto v___jp_1589_;
}
else
{
goto v___jp_1448_;
}
}
}
else
{
goto v___jp_1448_;
}
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
lean_del_object(v___x_1440_);
v___x_1601_ = lean_box(0);
v___x_1602_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__1(v_fst_1437_, v_snd_1438_, v___x_1601_, v___y_1385_);
v___y_1387_ = v___x_1602_;
goto v___jp_1386_;
}
v___jp_1448_:
{
lean_object* v_maxPathSegments_1449_; lean_object* v_maxTotalPathLength_1450_; lean_object* v___x_1451_; uint8_t v___x_1452_; 
v_maxPathSegments_1449_ = lean_ctor_get(v_config_1383_, 6);
v_maxTotalPathLength_1450_ = lean_ctor_get(v_config_1383_, 7);
v___x_1451_ = lean_array_get_size(v_fst_1437_);
v___x_1452_ = lean_nat_dec_le(v_maxPathSegments_1449_, v___x_1451_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; 
v___x_1453_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1383_, v___y_1385_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_pos_1454_; lean_object* v_res_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1527_; 
v_pos_1454_ = lean_ctor_get(v___x_1453_, 0);
v_res_1455_ = lean_ctor_get(v___x_1453_, 1);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1457_ = v___x_1453_;
v_isShared_1458_ = v_isSharedCheck_1527_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_res_1455_);
lean_inc(v_pos_1454_);
lean_dec(v___x_1453_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1527_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
lean_inc(v_res_1455_);
v___x_1459_ = l_ByteSlice_toByteArray(v_res_1455_);
v___x_1460_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1459_);
if (lean_obj_tag(v___x_1460_) == 1)
{
lean_object* v_val_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1522_; 
v_val_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1522_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_val_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1522_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = l_ByteSlice_size(v_res_1455_);
lean_dec(v_res_1455_);
v___x_1466_ = lean_nat_add(v_snd_1438_, v___x_1465_);
lean_dec(v___x_1465_);
lean_dec(v_snd_1438_);
v___x_1467_ = lean_nat_dec_lt(v_maxTotalPathLength_1450_, v___x_1466_);
if (v___x_1467_ == 0)
{
lean_object* v_array_1468_; lean_object* v_idx_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v_array_1468_ = lean_ctor_get(v_pos_1454_, 0);
v_idx_1469_ = lean_ctor_get(v_pos_1454_, 1);
v___x_1470_ = lean_array_push(v_fst_1437_, v_val_1461_);
v___x_1471_ = lean_byte_array_size(v_array_1468_);
v___x_1472_ = lean_nat_dec_lt(v_idx_1469_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_del_object(v___x_1463_);
lean_del_object(v___x_1457_);
lean_del_object(v___x_1440_);
lean_dec_ref(v_config_1383_);
v___y_1412_ = v___x_1470_;
v___y_1413_ = v_pos_1454_;
v___y_1414_ = v___x_1466_;
goto v___jp_1411_;
}
else
{
uint8_t v___x_1473_; uint8_t v___x_1474_; uint8_t v___x_1475_; 
v___x_1473_ = lean_byte_array_fget(v_array_1468_, v_idx_1469_);
v___x_1474_ = 47;
v___x_1475_ = lean_uint8_dec_eq(v___x_1473_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_del_object(v___x_1463_);
lean_del_object(v___x_1457_);
lean_del_object(v___x_1440_);
lean_dec_ref(v_config_1383_);
v___y_1412_ = v___x_1470_;
v___y_1413_ = v_pos_1454_;
v___y_1414_ = v___x_1466_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1476_ = lean_unsigned_to_nat(1u);
v___x_1477_ = lean_nat_add(v___x_1466_, v___x_1476_);
lean_dec(v___x_1466_);
v___x_1478_ = lean_nat_dec_lt(v_maxTotalPathLength_1450_, v___x_1477_);
if (v___x_1478_ == 0)
{
lean_del_object(v___x_1463_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1479_; lean_object* v___x_1481_; 
lean_dec(v___x_1477_);
lean_dec_ref(v___x_1470_);
lean_del_object(v___x_1440_);
lean_dec_ref(v_config_1383_);
v___x_1479_ = lean_box(0);
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 1);
lean_ctor_set(v___x_1457_, 1, v___x_1479_);
v___x_1481_ = v___x_1457_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_pos_1454_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
else
{
lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1497_; 
lean_inc(v_idx_1469_);
lean_inc_ref(v_array_1468_);
lean_del_object(v___x_1457_);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_pos_1454_);
if (v_isSharedCheck_1497_ == 0)
{
lean_object* v_unused_1498_; lean_object* v_unused_1499_; 
v_unused_1498_ = lean_ctor_get(v_pos_1454_, 1);
lean_dec(v_unused_1498_);
v_unused_1499_ = lean_ctor_get(v_pos_1454_, 0);
lean_dec(v_unused_1499_);
v___x_1484_ = v_pos_1454_;
v_isShared_1485_ = v_isSharedCheck_1497_;
goto v_resetjp_1483_;
}
else
{
lean_dec(v_pos_1454_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1497_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1486_ = lean_nat_add(v_idx_1469_, v___x_1476_);
lean_dec(v_idx_1469_);
lean_inc(v___x_1486_);
lean_inc_ref(v_array_1468_);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 1, v___x_1486_);
v___x_1488_ = v___x_1484_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_array_1468_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
uint8_t v___x_1489_; 
v___x_1489_ = lean_nat_dec_lt(v___x_1486_, v___x_1471_);
if (v___x_1489_ == 0)
{
lean_dec(v___x_1486_);
lean_dec_ref(v_array_1468_);
lean_del_object(v___x_1440_);
lean_inc(v_maxPathSegments_1449_);
v___y_1418_ = v___x_1477_;
v___y_1419_ = v___x_1488_;
v___y_1420_ = v_maxPathSegments_1449_;
v___y_1421_ = v___x_1470_;
goto v___jp_1417_;
}
else
{
uint8_t v___x_1490_; uint8_t v___x_1491_; 
v___x_1490_ = lean_byte_array_fget(v_array_1468_, v___x_1486_);
lean_dec(v___x_1486_);
lean_dec_ref(v_array_1468_);
v___x_1491_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1493_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 1, v___x_1477_);
lean_ctor_set(v___x_1440_, 0, v___x_1470_);
v___x_1493_ = v___x_1440_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1470_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v___x_1477_);
v___x_1493_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
v_a_1384_ = v___x_1493_;
v___y_1385_ = v___x_1488_;
goto _start;
}
}
else
{
lean_del_object(v___x_1440_);
lean_inc(v_maxPathSegments_1449_);
v___y_1418_ = v___x_1477_;
v___y_1419_ = v___x_1488_;
v___y_1420_ = v_maxPathSegments_1449_;
v___y_1421_ = v___x_1470_;
goto v___jp_1417_;
}
}
}
}
}
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1506_; 
lean_inc(v_maxTotalPathLength_1450_);
lean_dec(v___x_1477_);
lean_dec_ref(v___x_1470_);
lean_del_object(v___x_1440_);
lean_dec_ref(v_config_1383_);
v___x_1500_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1501_ = l_Nat_reprFast(v_maxTotalPathLength_1450_);
v___x_1502_ = lean_string_append(v___x_1500_, v___x_1501_);
lean_dec_ref(v___x_1501_);
v___x_1503_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1504_ = lean_string_append(v___x_1502_, v___x_1503_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1504_);
v___x_1506_ = v___x_1463_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1508_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 1);
lean_ctor_set(v___x_1457_, 1, v___x_1506_);
v___x_1508_ = v___x_1457_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_pos_1454_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v___x_1506_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
}
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1517_; 
lean_inc(v_maxTotalPathLength_1450_);
lean_dec(v___x_1466_);
lean_dec(v_val_1461_);
lean_del_object(v___x_1440_);
lean_dec(v_fst_1437_);
lean_dec_ref(v_config_1383_);
v___x_1511_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1512_ = l_Nat_reprFast(v_maxTotalPathLength_1450_);
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
lean_dec_ref(v___x_1512_);
v___x_1514_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1515_);
v___x_1517_ = v___x_1463_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
lean_object* v___x_1519_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 1);
lean_ctor_set(v___x_1457_, 1, v___x_1517_);
v___x_1519_ = v___x_1457_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_pos_1454_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___x_1517_);
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
else
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
lean_dec(v___x_1460_);
lean_dec(v_res_1455_);
lean_del_object(v___x_1440_);
lean_dec(v_snd_1438_);
lean_dec(v_fst_1437_);
lean_dec_ref(v_config_1383_);
v___x_1523_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 1);
lean_ctor_set(v___x_1457_, 1, v___x_1523_);
v___x_1525_ = v___x_1457_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_pos_1454_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
else
{
lean_object* v_pos_1528_; lean_object* v_err_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
lean_del_object(v___x_1440_);
lean_dec(v_snd_1438_);
lean_dec(v_fst_1437_);
lean_dec_ref(v_config_1383_);
v_pos_1528_ = lean_ctor_get(v___x_1453_, 0);
v_err_1529_ = lean_ctor_get(v___x_1453_, 1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1453_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_err_1529_);
lean_inc(v_pos_1528_);
lean_dec(v___x_1453_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_pos_1528_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_err_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
else
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
lean_inc(v_maxPathSegments_1449_);
lean_del_object(v___x_1440_);
lean_dec(v_snd_1438_);
lean_dec(v_fst_1437_);
lean_dec_ref(v_config_1383_);
v___x_1537_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1538_ = l_Nat_reprFast(v_maxPathSegments_1449_);
v___x_1539_ = lean_string_append(v___x_1537_, v___x_1538_);
lean_dec_ref(v___x_1538_);
v___x_1540_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1541_ = lean_string_append(v___x_1539_, v___x_1540_);
v___x_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
v___x_1543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___y_1385_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
return v___x_1543_;
}
}
v___jp_1545_:
{
uint8_t v___x_1546_; uint8_t v___x_1547_; 
v___x_1546_ = 45;
v___x_1547_ = lean_uint8_dec_eq(v___x_1544_, v___x_1546_);
if (v___x_1547_ == 0)
{
uint8_t v___x_1548_; uint8_t v___x_1549_; 
v___x_1548_ = 46;
v___x_1549_ = lean_uint8_dec_eq(v___x_1544_, v___x_1548_);
if (v___x_1549_ == 0)
{
uint8_t v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = 95;
v___x_1551_ = lean_uint8_dec_eq(v___x_1544_, v___x_1550_);
if (v___x_1551_ == 0)
{
uint8_t v___x_1552_; uint8_t v___x_1553_; 
v___x_1552_ = 126;
v___x_1553_ = lean_uint8_dec_eq(v___x_1544_, v___x_1552_);
if (v___x_1553_ == 0)
{
uint8_t v___x_1554_; uint8_t v___x_1555_; 
v___x_1554_ = 33;
v___x_1555_ = lean_uint8_dec_eq(v___x_1544_, v___x_1554_);
if (v___x_1555_ == 0)
{
uint8_t v___x_1556_; uint8_t v___x_1557_; 
v___x_1556_ = 36;
v___x_1557_ = lean_uint8_dec_eq(v___x_1544_, v___x_1556_);
if (v___x_1557_ == 0)
{
uint8_t v___x_1558_; uint8_t v___x_1559_; 
v___x_1558_ = 38;
v___x_1559_ = lean_uint8_dec_eq(v___x_1544_, v___x_1558_);
if (v___x_1559_ == 0)
{
uint8_t v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = 39;
v___x_1561_ = lean_uint8_dec_eq(v___x_1544_, v___x_1560_);
if (v___x_1561_ == 0)
{
uint8_t v___x_1562_; uint8_t v___x_1563_; 
v___x_1562_ = 40;
v___x_1563_ = lean_uint8_dec_eq(v___x_1544_, v___x_1562_);
if (v___x_1563_ == 0)
{
uint8_t v___x_1564_; uint8_t v___x_1565_; 
v___x_1564_ = 41;
v___x_1565_ = lean_uint8_dec_eq(v___x_1544_, v___x_1564_);
if (v___x_1565_ == 0)
{
uint8_t v___x_1566_; uint8_t v___x_1567_; 
v___x_1566_ = 42;
v___x_1567_ = lean_uint8_dec_eq(v___x_1544_, v___x_1566_);
if (v___x_1567_ == 0)
{
uint8_t v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = 43;
v___x_1569_ = lean_uint8_dec_eq(v___x_1544_, v___x_1568_);
if (v___x_1569_ == 0)
{
uint8_t v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = 44;
v___x_1571_ = lean_uint8_dec_eq(v___x_1544_, v___x_1570_);
if (v___x_1571_ == 0)
{
uint8_t v___x_1572_; uint8_t v___x_1573_; 
v___x_1572_ = 59;
v___x_1573_ = lean_uint8_dec_eq(v___x_1544_, v___x_1572_);
if (v___x_1573_ == 0)
{
uint8_t v___x_1574_; uint8_t v___x_1575_; 
v___x_1574_ = 61;
v___x_1575_ = lean_uint8_dec_eq(v___x_1544_, v___x_1574_);
if (v___x_1575_ == 0)
{
uint8_t v___x_1576_; uint8_t v___x_1577_; 
v___x_1576_ = 58;
v___x_1577_ = lean_uint8_dec_eq(v___x_1544_, v___x_1576_);
if (v___x_1577_ == 0)
{
uint8_t v___x_1578_; uint8_t v___x_1579_; 
v___x_1578_ = 64;
v___x_1579_ = lean_uint8_dec_eq(v___x_1544_, v___x_1578_);
if (v___x_1579_ == 0)
{
uint8_t v___x_1580_; uint8_t v___x_1581_; 
v___x_1580_ = 37;
v___x_1581_ = lean_uint8_dec_eq(v___x_1544_, v___x_1580_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_del_object(v___x_1440_);
v___x_1582_ = lean_box(0);
v___x_1583_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__1(v_fst_1437_, v_snd_1438_, v___x_1582_, v___y_1385_);
v___y_1387_ = v___x_1583_;
goto v___jp_1386_;
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
else
{
goto v___jp_1448_;
}
}
v___jp_1584_:
{
uint8_t v___x_1585_; uint8_t v___x_1586_; 
v___x_1585_ = 65;
v___x_1586_ = lean_uint8_dec_le(v___x_1585_, v___x_1544_);
if (v___x_1586_ == 0)
{
goto v___jp_1545_;
}
else
{
uint8_t v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = 90;
v___x_1588_ = lean_uint8_dec_le(v___x_1544_, v___x_1587_);
if (v___x_1588_ == 0)
{
goto v___jp_1545_;
}
else
{
goto v___jp_1448_;
}
}
}
v___jp_1589_:
{
uint8_t v___x_1590_; uint8_t v___x_1591_; 
v___x_1590_ = 97;
v___x_1591_ = lean_uint8_dec_le(v___x_1590_, v___x_1544_);
if (v___x_1591_ == 0)
{
goto v___jp_1584_;
}
else
{
uint8_t v___x_1592_; uint8_t v___x_1593_; 
v___x_1592_ = 122;
v___x_1593_ = lean_uint8_dec_le(v___x_1544_, v___x_1592_);
if (v___x_1593_ == 0)
{
goto v___jp_1584_;
}
else
{
goto v___jp_1448_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object* v_config_1604_, lean_object* v_a_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v___y_1608_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v_array_1656_; lean_object* v_idx_1657_; lean_object* v_fst_1658_; lean_object* v_snd_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1824_; 
v_array_1656_ = lean_ctor_get(v___y_1606_, 0);
v_idx_1657_ = lean_ctor_get(v___y_1606_, 1);
v_fst_1658_ = lean_ctor_get(v_a_1605_, 0);
v_snd_1659_ = lean_ctor_get(v_a_1605_, 1);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_a_1605_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1661_ = v_a_1605_;
v_isShared_1662_ = v_isSharedCheck_1824_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_snd_1659_);
lean_inc(v_fst_1658_);
lean_dec(v_a_1605_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1824_;
goto v_resetjp_1660_;
}
v___jp_1607_:
{
if (lean_obj_tag(v___y_1608_) == 0)
{
lean_object* v_res_1609_; 
v_res_1609_ = lean_ctor_get(v___y_1608_, 1);
lean_inc(v_res_1609_);
if (lean_obj_tag(v_res_1609_) == 0)
{
lean_object* v_pos_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1618_; 
lean_dec_ref(v_config_1604_);
v_pos_1610_ = lean_ctor_get(v___y_1608_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___y_1608_);
if (v_isSharedCheck_1618_ == 0)
{
lean_object* v_unused_1619_; 
v_unused_1619_ = lean_ctor_get(v___y_1608_, 1);
lean_dec(v_unused_1619_);
v___x_1612_ = v___y_1608_;
v_isShared_1613_ = v_isSharedCheck_1618_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_pos_1610_);
lean_dec(v___y_1608_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1618_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v_a_1614_; lean_object* v___x_1616_; 
v_a_1614_ = lean_ctor_get(v_res_1609_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v_res_1609_, 1);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 1, v_a_1614_);
v___x_1616_ = v___x_1612_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_pos_1610_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v_a_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
else
{
lean_object* v_pos_1620_; lean_object* v_a_1621_; lean_object* v___x_1622_; 
v_pos_1620_ = lean_ctor_get(v___y_1608_, 0);
lean_inc(v_pos_1620_);
lean_dec_ref_known(v___y_1608_, 2);
v_a_1621_ = lean_ctor_get(v_res_1609_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v_res_1609_, 1);
v___x_1622_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1604_, v_a_1621_, v_pos_1620_);
return v___x_1622_;
}
}
else
{
lean_object* v_pos_1623_; lean_object* v_err_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec_ref(v_config_1604_);
v_pos_1623_ = lean_ctor_get(v___y_1608_, 0);
v_err_1624_ = lean_ctor_get(v___y_1608_, 1);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___y_1608_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___y_1608_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_err_1624_);
lean_inc(v_pos_1623_);
lean_dec(v___y_1608_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_pos_1623_);
lean_ctor_set(v_reuseFailAlloc_1630_, 1, v_err_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
v___jp_1632_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___y_1634_);
lean_ctor_set(v___x_1636_, 1, v___y_1635_);
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___y_1633_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
return v___x_1637_;
}
v___jp_1638_:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = lean_array_get_size(v___y_1641_);
v___x_1644_ = lean_nat_dec_le(v___y_1639_, v___x_1643_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
lean_dec(v___y_1639_);
v___x_1645_ = l_ByteArray_empty;
v___x_1646_ = lean_array_push(v___y_1641_, v___x_1645_);
v___x_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
lean_ctor_set(v___x_1647_, 1, v___y_1640_);
v___x_1648_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1604_, v___x_1647_, v___y_1642_);
return v___x_1648_;
}
else
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v_config_1604_);
v___x_1649_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1650_ = l_Nat_reprFast(v___y_1639_);
v___x_1651_ = lean_string_append(v___x_1649_, v___x_1650_);
lean_dec_ref(v___x_1650_);
v___x_1652_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1653_ = lean_string_append(v___x_1651_, v___x_1652_);
v___x_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
v___x_1655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___y_1642_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
return v___x_1655_;
}
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1663_ = lean_byte_array_size(v_array_1656_);
v___x_1664_ = lean_nat_dec_lt(v_idx_1657_, v___x_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1666_; 
lean_dec_ref(v_config_1604_);
if (v_isShared_1662_ == 0)
{
v___x_1666_ = v___x_1661_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_fst_1658_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_snd_1659_);
v___x_1666_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___y_1606_);
lean_ctor_set(v___x_1667_, 1, v___x_1666_);
return v___x_1667_;
}
}
else
{
uint8_t v___x_1765_; uint8_t v___x_1815_; 
v___x_1765_ = lean_byte_array_fget(v_array_1656_, v_idx_1657_);
v___x_1815_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1765_);
if (v___x_1815_ == 0)
{
uint8_t v___x_1816_; uint8_t v___x_1817_; 
v___x_1816_ = 47;
v___x_1817_ = lean_uint8_dec_eq(v___x_1765_, v___x_1816_);
if (v___x_1817_ == 0)
{
uint8_t v___x_1818_; uint8_t v___x_1819_; 
v___x_1818_ = 48;
v___x_1819_ = lean_uint8_dec_le(v___x_1818_, v___x_1765_);
if (v___x_1819_ == 0)
{
goto v___jp_1810_;
}
else
{
uint8_t v___x_1820_; uint8_t v___x_1821_; 
v___x_1820_ = 57;
v___x_1821_ = lean_uint8_dec_le(v___x_1765_, v___x_1820_);
if (v___x_1821_ == 0)
{
goto v___jp_1810_;
}
else
{
goto v___jp_1669_;
}
}
}
else
{
goto v___jp_1669_;
}
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
lean_del_object(v___x_1661_);
v___x_1822_ = lean_box(0);
v___x_1823_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__1(v_fst_1658_, v_snd_1659_, v___x_1822_, v___y_1606_);
v___y_1608_ = v___x_1823_;
goto v___jp_1607_;
}
v___jp_1669_:
{
lean_object* v_maxPathSegments_1670_; lean_object* v_maxTotalPathLength_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_maxPathSegments_1670_ = lean_ctor_get(v_config_1604_, 6);
v_maxTotalPathLength_1671_ = lean_ctor_get(v_config_1604_, 7);
v___x_1672_ = lean_array_get_size(v_fst_1658_);
v___x_1673_ = lean_nat_dec_le(v_maxPathSegments_1670_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
v___x_1674_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1604_, v___y_1606_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_pos_1675_; lean_object* v_res_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1748_; 
v_pos_1675_ = lean_ctor_get(v___x_1674_, 0);
v_res_1676_ = lean_ctor_get(v___x_1674_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1678_ = v___x_1674_;
v_isShared_1679_ = v_isSharedCheck_1748_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_res_1676_);
lean_inc(v_pos_1675_);
lean_dec(v___x_1674_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1748_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
lean_inc(v_res_1676_);
v___x_1680_ = l_ByteSlice_toByteArray(v_res_1676_);
v___x_1681_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1680_);
if (lean_obj_tag(v___x_1681_) == 1)
{
lean_object* v_val_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1743_; 
v_val_1682_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1684_ = v___x_1681_;
v_isShared_1685_ = v_isSharedCheck_1743_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_val_1682_);
lean_dec(v___x_1681_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1743_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; uint8_t v___x_1688_; 
v___x_1686_ = l_ByteSlice_size(v_res_1676_);
lean_dec(v_res_1676_);
v___x_1687_ = lean_nat_add(v_snd_1659_, v___x_1686_);
lean_dec(v___x_1686_);
lean_dec(v_snd_1659_);
v___x_1688_ = lean_nat_dec_lt(v_maxTotalPathLength_1671_, v___x_1687_);
if (v___x_1688_ == 0)
{
lean_object* v_array_1689_; lean_object* v_idx_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
v_array_1689_ = lean_ctor_get(v_pos_1675_, 0);
v_idx_1690_ = lean_ctor_get(v_pos_1675_, 1);
v___x_1691_ = lean_array_push(v_fst_1658_, v_val_1682_);
v___x_1692_ = lean_byte_array_size(v_array_1689_);
v___x_1693_ = lean_nat_dec_lt(v_idx_1690_, v___x_1692_);
if (v___x_1693_ == 0)
{
lean_del_object(v___x_1684_);
lean_del_object(v___x_1678_);
lean_del_object(v___x_1661_);
lean_dec_ref(v_config_1604_);
v___y_1633_ = v_pos_1675_;
v___y_1634_ = v___x_1691_;
v___y_1635_ = v___x_1687_;
goto v___jp_1632_;
}
else
{
uint8_t v___x_1694_; uint8_t v___x_1695_; uint8_t v___x_1696_; 
v___x_1694_ = lean_byte_array_fget(v_array_1689_, v_idx_1690_);
v___x_1695_ = 47;
v___x_1696_ = lean_uint8_dec_eq(v___x_1694_, v___x_1695_);
if (v___x_1696_ == 0)
{
lean_del_object(v___x_1684_);
lean_del_object(v___x_1678_);
lean_del_object(v___x_1661_);
lean_dec_ref(v_config_1604_);
v___y_1633_ = v_pos_1675_;
v___y_1634_ = v___x_1691_;
v___y_1635_ = v___x_1687_;
goto v___jp_1632_;
}
else
{
lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1697_ = lean_unsigned_to_nat(1u);
v___x_1698_ = lean_nat_add(v___x_1687_, v___x_1697_);
lean_dec(v___x_1687_);
v___x_1699_ = lean_nat_dec_lt(v_maxTotalPathLength_1671_, v___x_1698_);
if (v___x_1699_ == 0)
{
lean_del_object(v___x_1684_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
lean_dec(v___x_1698_);
lean_dec_ref(v___x_1691_);
lean_del_object(v___x_1661_);
lean_dec_ref(v_config_1604_);
v___x_1700_ = lean_box(0);
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 1);
lean_ctor_set(v___x_1678_, 1, v___x_1700_);
v___x_1702_ = v___x_1678_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_pos_1675_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
else
{
lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1718_; 
lean_inc(v_idx_1690_);
lean_inc_ref(v_array_1689_);
lean_del_object(v___x_1678_);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_pos_1675_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; lean_object* v_unused_1720_; 
v_unused_1719_ = lean_ctor_get(v_pos_1675_, 1);
lean_dec(v_unused_1719_);
v_unused_1720_ = lean_ctor_get(v_pos_1675_, 0);
lean_dec(v_unused_1720_);
v___x_1705_ = v_pos_1675_;
v_isShared_1706_ = v_isSharedCheck_1718_;
goto v_resetjp_1704_;
}
else
{
lean_dec(v_pos_1675_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1718_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1707_ = lean_nat_add(v_idx_1690_, v___x_1697_);
lean_dec(v_idx_1690_);
lean_inc(v___x_1707_);
lean_inc_ref(v_array_1689_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 1, v___x_1707_);
v___x_1709_ = v___x_1705_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_array_1689_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
uint8_t v___x_1710_; 
v___x_1710_ = lean_nat_dec_lt(v___x_1707_, v___x_1692_);
if (v___x_1710_ == 0)
{
lean_dec(v___x_1707_);
lean_dec_ref(v_array_1689_);
lean_del_object(v___x_1661_);
lean_inc(v_maxPathSegments_1670_);
v___y_1639_ = v_maxPathSegments_1670_;
v___y_1640_ = v___x_1698_;
v___y_1641_ = v___x_1691_;
v___y_1642_ = v___x_1709_;
goto v___jp_1638_;
}
else
{
uint8_t v___x_1711_; uint8_t v___x_1712_; 
v___x_1711_ = lean_byte_array_fget(v_array_1689_, v___x_1707_);
lean_dec(v___x_1707_);
lean_dec_ref(v_array_1689_);
v___x_1712_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1714_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1698_);
lean_ctor_set(v___x_1661_, 0, v___x_1691_);
v___x_1714_ = v___x_1661_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v___x_1698_);
v___x_1714_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1715_; 
v___x_1715_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1604_, v___x_1714_, v___x_1709_);
return v___x_1715_;
}
}
else
{
lean_del_object(v___x_1661_);
lean_inc(v_maxPathSegments_1670_);
v___y_1639_ = v_maxPathSegments_1670_;
v___y_1640_ = v___x_1698_;
v___y_1641_ = v___x_1691_;
v___y_1642_ = v___x_1709_;
goto v___jp_1638_;
}
}
}
}
}
}
else
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1727_; 
lean_inc(v_maxTotalPathLength_1671_);
lean_dec(v___x_1698_);
lean_dec_ref(v___x_1691_);
lean_del_object(v___x_1661_);
lean_dec_ref(v_config_1604_);
v___x_1721_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1722_ = l_Nat_reprFast(v_maxTotalPathLength_1671_);
v___x_1723_ = lean_string_append(v___x_1721_, v___x_1722_);
lean_dec_ref(v___x_1722_);
v___x_1724_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1725_ = lean_string_append(v___x_1723_, v___x_1724_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 0, v___x_1725_);
v___x_1727_ = v___x_1684_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1729_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 1);
lean_ctor_set(v___x_1678_, 1, v___x_1727_);
v___x_1729_ = v___x_1678_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_pos_1675_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v___x_1727_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
}
}
else
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
lean_inc(v_maxTotalPathLength_1671_);
lean_dec(v___x_1687_);
lean_dec(v_val_1682_);
lean_del_object(v___x_1661_);
lean_dec(v_fst_1658_);
lean_dec_ref(v_config_1604_);
v___x_1732_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1733_ = l_Nat_reprFast(v_maxTotalPathLength_1671_);
v___x_1734_ = lean_string_append(v___x_1732_, v___x_1733_);
lean_dec_ref(v___x_1733_);
v___x_1735_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1736_ = lean_string_append(v___x_1734_, v___x_1735_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 0, v___x_1736_);
v___x_1738_ = v___x_1684_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
lean_object* v___x_1740_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 1);
lean_ctor_set(v___x_1678_, 1, v___x_1738_);
v___x_1740_ = v___x_1678_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_pos_1675_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
lean_dec(v___x_1681_);
lean_dec(v_res_1676_);
lean_del_object(v___x_1661_);
lean_dec(v_snd_1659_);
lean_dec(v_fst_1658_);
lean_dec_ref(v_config_1604_);
v___x_1744_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 1);
lean_ctor_set(v___x_1678_, 1, v___x_1744_);
v___x_1746_ = v___x_1678_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_pos_1675_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
else
{
lean_object* v_pos_1749_; lean_object* v_err_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_del_object(v___x_1661_);
lean_dec(v_snd_1659_);
lean_dec(v_fst_1658_);
lean_dec_ref(v_config_1604_);
v_pos_1749_ = lean_ctor_get(v___x_1674_, 0);
v_err_1750_ = lean_ctor_get(v___x_1674_, 1);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1674_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_err_1750_);
lean_inc(v_pos_1749_);
lean_dec(v___x_1674_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_pos_1749_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v_err_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_inc(v_maxPathSegments_1670_);
lean_del_object(v___x_1661_);
lean_dec(v_snd_1659_);
lean_dec(v_fst_1658_);
lean_dec_ref(v_config_1604_);
v___x_1758_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1759_ = l_Nat_reprFast(v_maxPathSegments_1670_);
v___x_1760_ = lean_string_append(v___x_1758_, v___x_1759_);
lean_dec_ref(v___x_1759_);
v___x_1761_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1762_ = lean_string_append(v___x_1760_, v___x_1761_);
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
v___x_1764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___y_1606_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
return v___x_1764_;
}
}
v___jp_1766_:
{
uint8_t v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = 45;
v___x_1768_ = lean_uint8_dec_eq(v___x_1765_, v___x_1767_);
if (v___x_1768_ == 0)
{
uint8_t v___x_1769_; uint8_t v___x_1770_; 
v___x_1769_ = 46;
v___x_1770_ = lean_uint8_dec_eq(v___x_1765_, v___x_1769_);
if (v___x_1770_ == 0)
{
uint8_t v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = 95;
v___x_1772_ = lean_uint8_dec_eq(v___x_1765_, v___x_1771_);
if (v___x_1772_ == 0)
{
uint8_t v___x_1773_; uint8_t v___x_1774_; 
v___x_1773_ = 126;
v___x_1774_ = lean_uint8_dec_eq(v___x_1765_, v___x_1773_);
if (v___x_1774_ == 0)
{
uint8_t v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = 33;
v___x_1776_ = lean_uint8_dec_eq(v___x_1765_, v___x_1775_);
if (v___x_1776_ == 0)
{
uint8_t v___x_1777_; uint8_t v___x_1778_; 
v___x_1777_ = 36;
v___x_1778_ = lean_uint8_dec_eq(v___x_1765_, v___x_1777_);
if (v___x_1778_ == 0)
{
uint8_t v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = 38;
v___x_1780_ = lean_uint8_dec_eq(v___x_1765_, v___x_1779_);
if (v___x_1780_ == 0)
{
uint8_t v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = 39;
v___x_1782_ = lean_uint8_dec_eq(v___x_1765_, v___x_1781_);
if (v___x_1782_ == 0)
{
uint8_t v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = 40;
v___x_1784_ = lean_uint8_dec_eq(v___x_1765_, v___x_1783_);
if (v___x_1784_ == 0)
{
uint8_t v___x_1785_; uint8_t v___x_1786_; 
v___x_1785_ = 41;
v___x_1786_ = lean_uint8_dec_eq(v___x_1765_, v___x_1785_);
if (v___x_1786_ == 0)
{
uint8_t v___x_1787_; uint8_t v___x_1788_; 
v___x_1787_ = 42;
v___x_1788_ = lean_uint8_dec_eq(v___x_1765_, v___x_1787_);
if (v___x_1788_ == 0)
{
uint8_t v___x_1789_; uint8_t v___x_1790_; 
v___x_1789_ = 43;
v___x_1790_ = lean_uint8_dec_eq(v___x_1765_, v___x_1789_);
if (v___x_1790_ == 0)
{
uint8_t v___x_1791_; uint8_t v___x_1792_; 
v___x_1791_ = 44;
v___x_1792_ = lean_uint8_dec_eq(v___x_1765_, v___x_1791_);
if (v___x_1792_ == 0)
{
uint8_t v___x_1793_; uint8_t v___x_1794_; 
v___x_1793_ = 59;
v___x_1794_ = lean_uint8_dec_eq(v___x_1765_, v___x_1793_);
if (v___x_1794_ == 0)
{
uint8_t v___x_1795_; uint8_t v___x_1796_; 
v___x_1795_ = 61;
v___x_1796_ = lean_uint8_dec_eq(v___x_1765_, v___x_1795_);
if (v___x_1796_ == 0)
{
uint8_t v___x_1797_; uint8_t v___x_1798_; 
v___x_1797_ = 58;
v___x_1798_ = lean_uint8_dec_eq(v___x_1765_, v___x_1797_);
if (v___x_1798_ == 0)
{
uint8_t v___x_1799_; uint8_t v___x_1800_; 
v___x_1799_ = 64;
v___x_1800_ = lean_uint8_dec_eq(v___x_1765_, v___x_1799_);
if (v___x_1800_ == 0)
{
uint8_t v___x_1801_; uint8_t v___x_1802_; 
v___x_1801_ = 37;
v___x_1802_ = lean_uint8_dec_eq(v___x_1765_, v___x_1801_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_del_object(v___x_1661_);
v___x_1803_ = lean_box(0);
v___x_1804_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__1(v_fst_1658_, v_snd_1659_, v___x_1803_, v___y_1606_);
v___y_1608_ = v___x_1804_;
goto v___jp_1607_;
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
else
{
goto v___jp_1669_;
}
}
v___jp_1805_:
{
uint8_t v___x_1806_; uint8_t v___x_1807_; 
v___x_1806_ = 65;
v___x_1807_ = lean_uint8_dec_le(v___x_1806_, v___x_1765_);
if (v___x_1807_ == 0)
{
goto v___jp_1766_;
}
else
{
uint8_t v___x_1808_; uint8_t v___x_1809_; 
v___x_1808_ = 90;
v___x_1809_ = lean_uint8_dec_le(v___x_1765_, v___x_1808_);
if (v___x_1809_ == 0)
{
goto v___jp_1766_;
}
else
{
goto v___jp_1669_;
}
}
}
v___jp_1810_:
{
uint8_t v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = 97;
v___x_1812_ = lean_uint8_dec_le(v___x_1811_, v___x_1765_);
if (v___x_1812_ == 0)
{
goto v___jp_1805_;
}
else
{
uint8_t v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = 122;
v___x_1814_ = lean_uint8_dec_le(v___x_1765_, v___x_1813_);
if (v___x_1814_ == 0)
{
goto v___jp_1805_;
}
else
{
goto v___jp_1669_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object* v_config_1836_, uint8_t v_forceAbsolute_1837_, uint8_t v_allowEmpty_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v___y_1841_; lean_object* v___y_1845_; lean_object* v_array_1848_; lean_object* v_idx_1849_; uint8_t v_isAbsolute_1850_; lean_object* v___x_1851_; lean_object* v_segments_1852_; uint8_t v_isAbsolute_1854_; lean_object* v_totalLength_1855_; lean_object* v___y_1856_; lean_object* v_pos_1880_; lean_object* v_array_1881_; lean_object* v_idx_1882_; uint8_t v_res_1883_; lean_object* v___y_1892_; uint8_t v___y_1896_; lean_object* v_pos_1897_; uint8_t v_res_1898_; uint8_t v___y_1900_; lean_object* v_pos_1901_; uint8_t v_res_1902_; lean_object* v___y_1910_; uint8_t v___y_1911_; uint8_t v___y_1912_; uint8_t v___y_1921_; lean_object* v_pos_1922_; uint8_t v_res_1923_; lean_object* v_pos_1925_; lean_object* v_array_1926_; lean_object* v_idx_1927_; uint8_t v_res_1928_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v_array_1848_ = lean_ctor_get(v_a_1839_, 0);
lean_inc_ref(v_array_1848_);
v_idx_1849_ = lean_ctor_get(v_a_1839_, 1);
lean_inc(v_idx_1849_);
v_isAbsolute_1850_ = 0;
v___x_1851_ = lean_unsigned_to_nat(0u);
v_segments_1852_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__4));
v___x_1932_ = lean_byte_array_size(v_array_1848_);
v___x_1933_ = lean_nat_dec_lt(v_idx_1849_, v___x_1932_);
if (v___x_1933_ == 0)
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v_isAbsolute_1850_;
goto v___jp_1924_;
}
else
{
uint8_t v___x_1934_; uint8_t v___x_1984_; uint8_t v___x_1985_; 
v___x_1934_ = lean_byte_array_fget(v_array_1848_, v_idx_1849_);
v___x_1984_ = 48;
v___x_1985_ = lean_uint8_dec_le(v___x_1984_, v___x_1934_);
if (v___x_1985_ == 0)
{
goto v___jp_1979_;
}
else
{
uint8_t v___x_1986_; uint8_t v___x_1987_; 
v___x_1986_ = 57;
v___x_1987_ = lean_uint8_dec_le(v___x_1934_, v___x_1986_);
if (v___x_1987_ == 0)
{
goto v___jp_1979_;
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1987_;
goto v___jp_1924_;
}
}
v___jp_1935_:
{
uint8_t v___x_1936_; uint8_t v___x_1937_; 
v___x_1936_ = 45;
v___x_1937_ = lean_uint8_dec_eq(v___x_1934_, v___x_1936_);
if (v___x_1937_ == 0)
{
uint8_t v___x_1938_; uint8_t v___x_1939_; 
v___x_1938_ = 46;
v___x_1939_ = lean_uint8_dec_eq(v___x_1934_, v___x_1938_);
if (v___x_1939_ == 0)
{
uint8_t v___x_1940_; uint8_t v___x_1941_; 
v___x_1940_ = 95;
v___x_1941_ = lean_uint8_dec_eq(v___x_1934_, v___x_1940_);
if (v___x_1941_ == 0)
{
uint8_t v___x_1942_; uint8_t v___x_1943_; 
v___x_1942_ = 126;
v___x_1943_ = lean_uint8_dec_eq(v___x_1934_, v___x_1942_);
if (v___x_1943_ == 0)
{
uint8_t v___x_1944_; uint8_t v___x_1945_; 
v___x_1944_ = 33;
v___x_1945_ = lean_uint8_dec_eq(v___x_1934_, v___x_1944_);
if (v___x_1945_ == 0)
{
uint8_t v___x_1946_; uint8_t v___x_1947_; 
v___x_1946_ = 36;
v___x_1947_ = lean_uint8_dec_eq(v___x_1934_, v___x_1946_);
if (v___x_1947_ == 0)
{
uint8_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1948_ = 38;
v___x_1949_ = lean_uint8_dec_eq(v___x_1934_, v___x_1948_);
if (v___x_1949_ == 0)
{
uint8_t v___x_1950_; uint8_t v___x_1951_; 
v___x_1950_ = 39;
v___x_1951_ = lean_uint8_dec_eq(v___x_1934_, v___x_1950_);
if (v___x_1951_ == 0)
{
uint8_t v___x_1952_; uint8_t v___x_1953_; 
v___x_1952_ = 40;
v___x_1953_ = lean_uint8_dec_eq(v___x_1934_, v___x_1952_);
if (v___x_1953_ == 0)
{
uint8_t v___x_1954_; uint8_t v___x_1955_; 
v___x_1954_ = 41;
v___x_1955_ = lean_uint8_dec_eq(v___x_1934_, v___x_1954_);
if (v___x_1955_ == 0)
{
uint8_t v___x_1956_; uint8_t v___x_1957_; 
v___x_1956_ = 42;
v___x_1957_ = lean_uint8_dec_eq(v___x_1934_, v___x_1956_);
if (v___x_1957_ == 0)
{
uint8_t v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = 43;
v___x_1959_ = lean_uint8_dec_eq(v___x_1934_, v___x_1958_);
if (v___x_1959_ == 0)
{
uint8_t v___x_1960_; uint8_t v___x_1961_; 
v___x_1960_ = 44;
v___x_1961_ = lean_uint8_dec_eq(v___x_1934_, v___x_1960_);
if (v___x_1961_ == 0)
{
uint8_t v___x_1962_; uint8_t v___x_1963_; 
v___x_1962_ = 59;
v___x_1963_ = lean_uint8_dec_eq(v___x_1934_, v___x_1962_);
if (v___x_1963_ == 0)
{
uint8_t v___x_1964_; uint8_t v___x_1965_; 
v___x_1964_ = 61;
v___x_1965_ = lean_uint8_dec_eq(v___x_1934_, v___x_1964_);
if (v___x_1965_ == 0)
{
uint8_t v___x_1966_; uint8_t v___x_1967_; 
v___x_1966_ = 58;
v___x_1967_ = lean_uint8_dec_eq(v___x_1934_, v___x_1966_);
if (v___x_1967_ == 0)
{
uint8_t v___x_1968_; uint8_t v___x_1969_; 
v___x_1968_ = 64;
v___x_1969_ = lean_uint8_dec_eq(v___x_1934_, v___x_1968_);
if (v___x_1969_ == 0)
{
uint8_t v___x_1970_; uint8_t v___x_1971_; 
v___x_1970_ = 37;
v___x_1971_ = lean_uint8_dec_eq(v___x_1934_, v___x_1970_);
if (v___x_1971_ == 0)
{
uint8_t v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = 47;
v___x_1973_ = lean_uint8_dec_eq(v___x_1934_, v___x_1972_);
if (v___x_1973_ == 0)
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v_isAbsolute_1850_;
goto v___jp_1924_;
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1973_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1971_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1969_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1967_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1965_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1963_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1961_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1959_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1957_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1955_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1953_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1951_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1949_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1947_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1945_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1943_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1941_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1939_;
goto v___jp_1924_;
}
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1937_;
goto v___jp_1924_;
}
}
v___jp_1974_:
{
uint8_t v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = 65;
v___x_1976_ = lean_uint8_dec_le(v___x_1975_, v___x_1934_);
if (v___x_1976_ == 0)
{
goto v___jp_1935_;
}
else
{
uint8_t v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = 90;
v___x_1978_ = lean_uint8_dec_le(v___x_1934_, v___x_1977_);
if (v___x_1978_ == 0)
{
goto v___jp_1935_;
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1978_;
goto v___jp_1924_;
}
}
}
v___jp_1979_:
{
uint8_t v___x_1980_; uint8_t v___x_1981_; 
v___x_1980_ = 97;
v___x_1981_ = lean_uint8_dec_le(v___x_1980_, v___x_1934_);
if (v___x_1981_ == 0)
{
goto v___jp_1974_;
}
else
{
uint8_t v___x_1982_; uint8_t v___x_1983_; 
v___x_1982_ = 122;
v___x_1983_ = lean_uint8_dec_le(v___x_1934_, v___x_1982_);
if (v___x_1983_ == 0)
{
goto v___jp_1974_;
}
else
{
v_pos_1925_ = v_a_1839_;
v_array_1926_ = v_array_1848_;
v_idx_1927_ = v_idx_1849_;
v_res_1928_ = v___x_1983_;
goto v___jp_1924_;
}
}
}
}
v___jp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__1));
v___x_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___y_1841_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
return v___x_1843_;
}
v___jp_1844_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__3));
v___x_1847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___y_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
return v___x_1847_;
}
v___jp_1853_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v_segments_1852_);
lean_ctor_set(v___x_1857_, 1, v_totalLength_1855_);
v___x_1858_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1836_, v___x_1857_, v___y_1856_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_res_1859_; lean_object* v_pos_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1869_; 
v_res_1859_ = lean_ctor_get(v___x_1858_, 1);
v_pos_1860_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1862_ = v___x_1858_;
v_isShared_1863_ = v_isSharedCheck_1869_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_res_1859_);
lean_inc(v_pos_1860_);
lean_dec(v___x_1858_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1869_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v_fst_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v_fst_1864_ = lean_ctor_get(v_res_1859_, 0);
lean_inc(v_fst_1864_);
lean_dec(v_res_1859_);
v___x_1865_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1865_, 0, v_fst_1864_);
lean_ctor_set_uint8(v___x_1865_, sizeof(void*)*1, v_isAbsolute_1854_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 1, v___x_1865_);
v___x_1867_ = v___x_1862_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_pos_1860_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v___x_1865_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
else
{
lean_object* v_pos_1870_; lean_object* v_err_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
v_pos_1870_ = lean_ctor_get(v___x_1858_, 0);
v_err_1871_ = lean_ctor_get(v___x_1858_, 1);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1858_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_err_1871_);
lean_inc(v_pos_1870_);
lean_dec(v___x_1858_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_pos_1870_);
lean_ctor_set(v_reuseFailAlloc_1877_, 1, v_err_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
v___jp_1879_:
{
lean_object* v___x_1884_; uint8_t v___x_1885_; 
v___x_1884_ = lean_byte_array_size(v_array_1881_);
v___x_1885_ = lean_nat_dec_lt(v_idx_1882_, v___x_1884_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
lean_dec(v_idx_1882_);
lean_dec_ref(v_array_1881_);
lean_dec_ref(v_config_1836_);
v___x_1886_ = lean_box(0);
v___x_1887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1887_, 0, v_pos_1880_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
return v___x_1887_;
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec_ref(v_pos_1880_);
v___x_1888_ = lean_unsigned_to_nat(1u);
v___x_1889_ = lean_nat_add(v_idx_1882_, v___x_1888_);
lean_dec(v_idx_1882_);
v___x_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1890_, 0, v_array_1881_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
v_isAbsolute_1854_ = v_res_1883_;
v_totalLength_1855_ = v___x_1888_;
v___y_1856_ = v___x_1890_;
goto v___jp_1853_;
}
}
v___jp_1891_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__5));
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___y_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
return v___x_1894_;
}
v___jp_1895_:
{
if (v_allowEmpty_1838_ == 0)
{
v___y_1841_ = v_pos_1897_;
goto v___jp_1840_;
}
else
{
if (v_res_1898_ == 0)
{
if (v___y_1896_ == 0)
{
v___y_1892_ = v_pos_1897_;
goto v___jp_1891_;
}
else
{
v___y_1841_ = v_pos_1897_;
goto v___jp_1840_;
}
}
else
{
v___y_1892_ = v_pos_1897_;
goto v___jp_1891_;
}
}
}
v___jp_1899_:
{
if (v_res_1902_ == 0)
{
if (v_forceAbsolute_1837_ == 0)
{
v_isAbsolute_1854_ = v_isAbsolute_1850_;
v_totalLength_1855_ = v___x_1851_;
v___y_1856_ = v_pos_1901_;
goto v___jp_1853_;
}
else
{
lean_object* v_array_1903_; lean_object* v_idx_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; 
lean_dec_ref(v_config_1836_);
v_array_1903_ = lean_ctor_get(v_pos_1901_, 0);
v_idx_1904_ = lean_ctor_get(v_pos_1901_, 1);
v___x_1905_ = lean_byte_array_size(v_array_1903_);
v___x_1906_ = lean_nat_dec_lt(v_idx_1904_, v___x_1905_);
if (v___x_1906_ == 0)
{
v___y_1896_ = v___y_1900_;
v_pos_1897_ = v_pos_1901_;
v_res_1898_ = v_forceAbsolute_1837_;
goto v___jp_1895_;
}
else
{
v___y_1896_ = v___y_1900_;
v_pos_1897_ = v_pos_1901_;
v_res_1898_ = v_res_1902_;
goto v___jp_1895_;
}
}
}
else
{
lean_object* v_array_1907_; lean_object* v_idx_1908_; 
v_array_1907_ = lean_ctor_get(v_pos_1901_, 0);
lean_inc_ref(v_array_1907_);
v_idx_1908_ = lean_ctor_get(v_pos_1901_, 1);
lean_inc(v_idx_1908_);
v_pos_1880_ = v_pos_1901_;
v_array_1881_ = v_array_1907_;
v_idx_1882_ = v_idx_1908_;
v_res_1883_ = v_res_1902_;
goto v___jp_1879_;
}
}
v___jp_1909_:
{
lean_object* v_array_1913_; lean_object* v_idx_1914_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v_array_1913_ = lean_ctor_get(v___y_1910_, 0);
v_idx_1914_ = lean_ctor_get(v___y_1910_, 1);
v___x_1915_ = lean_byte_array_size(v_array_1913_);
v___x_1916_ = lean_nat_dec_lt(v_idx_1914_, v___x_1915_);
if (v___x_1916_ == 0)
{
v___y_1900_ = v___y_1911_;
v_pos_1901_ = v___y_1910_;
v_res_1902_ = v___y_1912_;
goto v___jp_1899_;
}
else
{
uint8_t v___x_1917_; uint8_t v___x_1918_; uint8_t v___x_1919_; 
v___x_1917_ = lean_byte_array_fget(v_array_1913_, v_idx_1914_);
v___x_1918_ = 47;
v___x_1919_ = lean_uint8_dec_eq(v___x_1917_, v___x_1918_);
if (v___x_1919_ == 0)
{
v___y_1900_ = v___y_1911_;
v_pos_1901_ = v___y_1910_;
v_res_1902_ = v___y_1912_;
goto v___jp_1899_;
}
else
{
lean_inc(v_idx_1914_);
lean_inc_ref(v_array_1913_);
v_pos_1880_ = v___y_1910_;
v_array_1881_ = v_array_1913_;
v_idx_1882_ = v_idx_1914_;
v_res_1883_ = v___x_1919_;
goto v___jp_1879_;
}
}
}
v___jp_1920_:
{
if (v_allowEmpty_1838_ == 0)
{
if (v_res_1923_ == 0)
{
if (v___y_1921_ == 0)
{
lean_dec_ref(v_config_1836_);
v___y_1845_ = v_pos_1922_;
goto v___jp_1844_;
}
else
{
v___y_1910_ = v_pos_1922_;
v___y_1911_ = v___y_1921_;
v___y_1912_ = v_res_1923_;
goto v___jp_1909_;
}
}
else
{
lean_dec_ref(v_config_1836_);
v___y_1845_ = v_pos_1922_;
goto v___jp_1844_;
}
}
else
{
v___y_1910_ = v_pos_1922_;
v___y_1911_ = v___y_1921_;
v___y_1912_ = v_isAbsolute_1850_;
goto v___jp_1909_;
}
}
v___jp_1924_:
{
lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1929_ = lean_byte_array_size(v_array_1926_);
lean_dec_ref(v_array_1926_);
v___x_1930_ = lean_nat_dec_lt(v_idx_1927_, v___x_1929_);
lean_dec(v_idx_1927_);
if (v___x_1930_ == 0)
{
uint8_t v___x_1931_; 
v___x_1931_ = 1;
v___y_1921_ = v_res_1928_;
v_pos_1922_ = v_pos_1925_;
v_res_1923_ = v___x_1931_;
goto v___jp_1920_;
}
else
{
v___y_1921_ = v_res_1928_;
v_pos_1922_ = v_pos_1925_;
v_res_1923_ = v_isAbsolute_1850_;
goto v___jp_1920_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object* v_config_1988_, lean_object* v_forceAbsolute_1989_, lean_object* v_allowEmpty_1990_, lean_object* v_a_1991_){
_start:
{
uint8_t v_forceAbsolute_boxed_1992_; uint8_t v_allowEmpty_boxed_1993_; lean_object* v_res_1994_; 
v_forceAbsolute_boxed_1992_ = lean_unbox(v_forceAbsolute_1989_);
v_allowEmpty_boxed_1993_ = lean_unbox(v_allowEmpty_1990_);
v_res_1994_ = l_Std_Http_URI_Parser_parsePath(v_config_1988_, v_forceAbsolute_boxed_1992_, v_allowEmpty_boxed_1993_, v_a_1991_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object* v_config_1995_, lean_object* v_inst_1996_, lean_object* v_a_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1995_, v_a_1997_, v___y_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object* v_config_2000_, lean_object* v_inst_2001_, lean_object* v_a_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v___x_2004_; 
v___x_2004_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_2000_, v_a_2002_, v___y_2003_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg(){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object* v___dummy_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v_res_2008_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2009_; 
v___x_2009_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object* v_s_2010_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object* v_s_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(v_s_2012_);
lean_dec_ref(v_s_2012_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg(){
_start:
{
lean_object* v___x_2015_; 
v___x_2015_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object* v___dummy_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v_res_2017_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2018_; 
v___x_2018_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object* v_s_2019_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object* v_s_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(v_s_2021_);
lean_dec_ref(v_s_2021_);
return v_res_2022_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t v_c_2023_){
_start:
{
uint8_t v___x_2075_; uint8_t v___x_2076_; 
v___x_2075_ = 48;
v___x_2076_ = lean_uint8_dec_le(v___x_2075_, v_c_2023_);
if (v___x_2076_ == 0)
{
goto v___jp_2070_;
}
else
{
uint8_t v___x_2077_; uint8_t v___x_2078_; 
v___x_2077_ = 57;
v___x_2078_ = lean_uint8_dec_le(v_c_2023_, v___x_2077_);
if (v___x_2078_ == 0)
{
goto v___jp_2070_;
}
else
{
return v___x_2078_;
}
}
v___jp_2024_:
{
uint8_t v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = 45;
v___x_2026_ = lean_uint8_dec_eq(v_c_2023_, v___x_2025_);
if (v___x_2026_ == 0)
{
uint8_t v___x_2027_; uint8_t v___x_2028_; 
v___x_2027_ = 46;
v___x_2028_ = lean_uint8_dec_eq(v_c_2023_, v___x_2027_);
if (v___x_2028_ == 0)
{
uint8_t v___x_2029_; uint8_t v___x_2030_; 
v___x_2029_ = 95;
v___x_2030_ = lean_uint8_dec_eq(v_c_2023_, v___x_2029_);
if (v___x_2030_ == 0)
{
uint8_t v___x_2031_; uint8_t v___x_2032_; 
v___x_2031_ = 126;
v___x_2032_ = lean_uint8_dec_eq(v_c_2023_, v___x_2031_);
if (v___x_2032_ == 0)
{
uint8_t v___x_2033_; uint8_t v___x_2034_; 
v___x_2033_ = 33;
v___x_2034_ = lean_uint8_dec_eq(v_c_2023_, v___x_2033_);
if (v___x_2034_ == 0)
{
uint8_t v___x_2035_; uint8_t v___x_2036_; 
v___x_2035_ = 36;
v___x_2036_ = lean_uint8_dec_eq(v_c_2023_, v___x_2035_);
if (v___x_2036_ == 0)
{
uint8_t v___x_2037_; uint8_t v___x_2038_; 
v___x_2037_ = 38;
v___x_2038_ = lean_uint8_dec_eq(v_c_2023_, v___x_2037_);
if (v___x_2038_ == 0)
{
uint8_t v___x_2039_; uint8_t v___x_2040_; 
v___x_2039_ = 39;
v___x_2040_ = lean_uint8_dec_eq(v_c_2023_, v___x_2039_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2041_; uint8_t v___x_2042_; 
v___x_2041_ = 40;
v___x_2042_ = lean_uint8_dec_eq(v_c_2023_, v___x_2041_);
if (v___x_2042_ == 0)
{
uint8_t v___x_2043_; uint8_t v___x_2044_; 
v___x_2043_ = 41;
v___x_2044_ = lean_uint8_dec_eq(v_c_2023_, v___x_2043_);
if (v___x_2044_ == 0)
{
uint8_t v___x_2045_; uint8_t v___x_2046_; 
v___x_2045_ = 42;
v___x_2046_ = lean_uint8_dec_eq(v_c_2023_, v___x_2045_);
if (v___x_2046_ == 0)
{
uint8_t v___x_2047_; uint8_t v___x_2048_; 
v___x_2047_ = 43;
v___x_2048_ = lean_uint8_dec_eq(v_c_2023_, v___x_2047_);
if (v___x_2048_ == 0)
{
uint8_t v___x_2049_; uint8_t v___x_2050_; 
v___x_2049_ = 44;
v___x_2050_ = lean_uint8_dec_eq(v_c_2023_, v___x_2049_);
if (v___x_2050_ == 0)
{
uint8_t v___x_2051_; uint8_t v___x_2052_; 
v___x_2051_ = 59;
v___x_2052_ = lean_uint8_dec_eq(v_c_2023_, v___x_2051_);
if (v___x_2052_ == 0)
{
uint8_t v___x_2053_; uint8_t v___x_2054_; 
v___x_2053_ = 61;
v___x_2054_ = lean_uint8_dec_eq(v_c_2023_, v___x_2053_);
if (v___x_2054_ == 0)
{
uint8_t v___x_2055_; uint8_t v___x_2056_; 
v___x_2055_ = 58;
v___x_2056_ = lean_uint8_dec_eq(v_c_2023_, v___x_2055_);
if (v___x_2056_ == 0)
{
uint8_t v___x_2057_; uint8_t v___x_2058_; 
v___x_2057_ = 64;
v___x_2058_ = lean_uint8_dec_eq(v_c_2023_, v___x_2057_);
if (v___x_2058_ == 0)
{
uint8_t v___x_2059_; uint8_t v___x_2060_; 
v___x_2059_ = 47;
v___x_2060_ = lean_uint8_dec_eq(v_c_2023_, v___x_2059_);
if (v___x_2060_ == 0)
{
uint8_t v___x_2061_; uint8_t v___x_2062_; 
v___x_2061_ = 63;
v___x_2062_ = lean_uint8_dec_eq(v_c_2023_, v___x_2061_);
if (v___x_2062_ == 0)
{
uint8_t v___x_2063_; uint8_t v___x_2064_; 
v___x_2063_ = 37;
v___x_2064_ = lean_uint8_dec_eq(v_c_2023_, v___x_2063_);
return v___x_2064_;
}
else
{
return v___x_2062_;
}
}
else
{
return v___x_2060_;
}
}
else
{
return v___x_2058_;
}
}
else
{
return v___x_2056_;
}
}
else
{
return v___x_2054_;
}
}
else
{
return v___x_2052_;
}
}
else
{
return v___x_2050_;
}
}
else
{
return v___x_2048_;
}
}
else
{
return v___x_2046_;
}
}
else
{
return v___x_2044_;
}
}
else
{
return v___x_2042_;
}
}
else
{
return v___x_2040_;
}
}
else
{
return v___x_2038_;
}
}
else
{
return v___x_2036_;
}
}
else
{
return v___x_2034_;
}
}
else
{
return v___x_2032_;
}
}
else
{
return v___x_2030_;
}
}
else
{
return v___x_2028_;
}
}
else
{
return v___x_2026_;
}
}
v___jp_2065_:
{
uint8_t v___x_2066_; uint8_t v___x_2067_; 
v___x_2066_ = 65;
v___x_2067_ = lean_uint8_dec_le(v___x_2066_, v_c_2023_);
if (v___x_2067_ == 0)
{
goto v___jp_2024_;
}
else
{
uint8_t v___x_2068_; uint8_t v___x_2069_; 
v___x_2068_ = 90;
v___x_2069_ = lean_uint8_dec_le(v_c_2023_, v___x_2068_);
if (v___x_2069_ == 0)
{
goto v___jp_2024_;
}
else
{
return v___x_2069_;
}
}
}
v___jp_2070_:
{
uint8_t v___x_2071_; uint8_t v___x_2072_; 
v___x_2071_ = 97;
v___x_2072_ = lean_uint8_dec_le(v___x_2071_, v_c_2023_);
if (v___x_2072_ == 0)
{
goto v___jp_2065_;
}
else
{
uint8_t v___x_2073_; uint8_t v___x_2074_; 
v___x_2073_ = 122;
v___x_2074_ = lean_uint8_dec_le(v_c_2023_, v___x_2073_);
if (v___x_2074_ == 0)
{
goto v___jp_2065_;
}
else
{
return v___x_2074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object* v_c_2079_){
_start:
{
uint8_t v_c_boxed_2080_; uint8_t v_res_2081_; lean_object* v_r_2082_; 
v_c_boxed_2080_ = lean_unbox(v_c_2079_);
v_res_2081_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(v_c_boxed_2080_);
v_r_2082_ = lean_box(v_res_2081_);
return v_r_2082_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object* v___x_2083_, lean_object* v___x_2084_, lean_object* v_a_2085_, lean_object* v_b_2086_){
_start:
{
lean_object* v_it_2088_; 
if (lean_obj_tag(v_a_2085_) == 0)
{
lean_object* v_currPos_2092_; lean_object* v_searcher_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2119_; 
v_currPos_2092_ = lean_ctor_get(v_a_2085_, 0);
v_searcher_2093_ = lean_ctor_get(v_a_2085_, 1);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_a_2085_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2095_ = v_a_2085_;
v_isShared_2096_ = v_isSharedCheck_2119_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_searcher_2093_);
lean_inc(v_currPos_2092_);
lean_dec(v_a_2085_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2119_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v_str_2097_; lean_object* v_startInclusive_2098_; lean_object* v_endExclusive_2099_; lean_object* v___x_2100_; uint8_t v_decide_2101_; 
v_str_2097_ = lean_ctor_get(v___x_2083_, 0);
v_startInclusive_2098_ = lean_ctor_get(v___x_2083_, 1);
v_endExclusive_2099_ = lean_ctor_get(v___x_2083_, 2);
v___x_2100_ = lean_nat_sub(v_endExclusive_2099_, v_startInclusive_2098_);
v_decide_2101_ = lean_nat_dec_eq(v_searcher_2093_, v___x_2100_);
lean_dec(v___x_2100_);
if (v_decide_2101_ == 0)
{
uint32_t v___x_2102_; lean_object* v___x_2103_; uint32_t v___x_2104_; uint8_t v___x_2105_; 
v___x_2102_ = 38;
v___x_2103_ = lean_nat_add(v_startInclusive_2098_, v_searcher_2093_);
v___x_2104_ = lean_string_utf8_get_fast(v_str_2097_, v___x_2103_);
v___x_2105_ = lean_uint32_dec_eq(v___x_2104_, v___x_2102_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
lean_dec(v_searcher_2093_);
v___x_2106_ = lean_string_utf8_next_fast(v_str_2097_, v___x_2103_);
lean_dec(v___x_2103_);
v___x_2107_ = lean_nat_sub(v___x_2106_, v_startInclusive_2098_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v___x_2107_);
v___x_2109_ = v___x_2095_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_currPos_2092_);
lean_ctor_set(v_reuseFailAlloc_2111_, 1, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
v_a_2085_ = v___x_2109_;
goto _start;
}
}
else
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v_nextIt_2116_; 
lean_dec(v_currPos_2092_);
v___x_2112_ = lean_string_utf8_next_fast(v_str_2097_, v___x_2103_);
v___x_2113_ = lean_nat_sub(v___x_2112_, v___x_2103_);
lean_dec(v___x_2103_);
v___x_2114_ = lean_nat_add(v_searcher_2093_, v___x_2113_);
lean_dec(v___x_2113_);
lean_dec(v_searcher_2093_);
lean_inc(v___x_2114_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v___x_2114_);
lean_ctor_set(v___x_2095_, 0, v___x_2114_);
v_nextIt_2116_ = v___x_2095_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2114_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v___x_2114_);
v_nextIt_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
v_it_2088_ = v_nextIt_2116_;
goto v___jp_2087_;
}
}
}
else
{
lean_object* v___x_2118_; 
lean_del_object(v___x_2095_);
lean_dec(v_searcher_2093_);
lean_dec(v_currPos_2092_);
v___x_2118_ = lean_box(1);
v_it_2088_ = v___x_2118_;
goto v___jp_2087_;
}
}
}
else
{
return v_b_2086_;
}
v___jp_2087_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = lean_unsigned_to_nat(1u);
v___x_2090_ = lean_nat_add(v_b_2086_, v___x_2089_);
lean_dec(v_b_2086_);
v_a_2085_ = v_it_2088_;
v_b_2086_ = v___x_2090_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object* v___x_2120_, lean_object* v___x_2121_, lean_object* v_a_2122_, lean_object* v_b_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2120_, v___x_2121_, v_a_2122_, v_b_2123_);
lean_dec(v___x_2121_);
lean_dec_ref(v___x_2120_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object* v___x_2125_, lean_object* v___x_2126_, lean_object* v___x_2127_, lean_object* v_a_2128_, lean_object* v_b_2129_){
_start:
{
lean_object* v_it_2131_; 
if (lean_obj_tag(v_a_2128_) == 0)
{
lean_object* v_currPos_2135_; lean_object* v_searcher_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2162_; 
v_currPos_2135_ = lean_ctor_get(v_a_2128_, 0);
v_searcher_2136_ = lean_ctor_get(v_a_2128_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_a_2128_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2138_ = v_a_2128_;
v_isShared_2139_ = v_isSharedCheck_2162_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_searcher_2136_);
lean_inc(v_currPos_2135_);
lean_dec(v_a_2128_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2162_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v_str_2140_; lean_object* v_startInclusive_2141_; lean_object* v_endExclusive_2142_; lean_object* v___x_2143_; uint8_t v_decide_2144_; 
v_str_2140_ = lean_ctor_get(v___x_2126_, 0);
v_startInclusive_2141_ = lean_ctor_get(v___x_2126_, 1);
v_endExclusive_2142_ = lean_ctor_get(v___x_2126_, 2);
v___x_2143_ = lean_nat_sub(v_endExclusive_2142_, v_startInclusive_2141_);
v_decide_2144_ = lean_nat_dec_eq(v_searcher_2136_, v___x_2143_);
lean_dec(v___x_2143_);
if (v_decide_2144_ == 0)
{
lean_object* v___x_2145_; uint32_t v___x_2146_; uint32_t v___x_2147_; uint8_t v___x_2148_; 
v___x_2145_ = lean_nat_add(v_startInclusive_2141_, v_searcher_2136_);
v___x_2146_ = lean_string_utf8_get_fast(v_str_2140_, v___x_2145_);
v___x_2147_ = 38;
v___x_2148_ = lean_uint32_dec_eq(v___x_2146_, v___x_2147_);
if (v___x_2148_ == 0)
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2152_; 
lean_dec(v_searcher_2136_);
v___x_2149_ = lean_string_utf8_next_fast(v_str_2140_, v___x_2145_);
lean_dec(v___x_2145_);
v___x_2150_ = lean_nat_sub(v___x_2149_, v_startInclusive_2141_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 1, v___x_2150_);
v___x_2152_ = v___x_2138_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_currPos_2135_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
lean_object* v___x_2153_; 
v___x_2153_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2126_, v___x_2127_, v___x_2152_, v_b_2129_);
return v___x_2153_;
}
}
else
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v_nextIt_2159_; 
lean_dec(v_currPos_2135_);
v___x_2155_ = lean_string_utf8_next_fast(v_str_2140_, v___x_2145_);
v___x_2156_ = lean_nat_sub(v___x_2155_, v___x_2145_);
lean_dec(v___x_2145_);
v___x_2157_ = lean_nat_add(v_searcher_2136_, v___x_2156_);
lean_dec(v___x_2156_);
lean_dec(v_searcher_2136_);
lean_inc(v___x_2157_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 1, v___x_2157_);
lean_ctor_set(v___x_2138_, 0, v___x_2157_);
v_nextIt_2159_ = v___x_2138_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v___x_2157_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v___x_2157_);
v_nextIt_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
v_it_2131_ = v_nextIt_2159_;
goto v___jp_2130_;
}
}
}
else
{
lean_object* v___x_2161_; 
lean_del_object(v___x_2138_);
lean_dec(v_searcher_2136_);
lean_dec(v_currPos_2135_);
v___x_2161_ = lean_box(1);
v_it_2131_ = v___x_2161_;
goto v___jp_2130_;
}
}
}
else
{
return v_b_2129_;
}
v___jp_2130_:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2132_ = lean_unsigned_to_nat(1u);
v___x_2133_ = lean_nat_add(v_b_2129_, v___x_2132_);
lean_dec(v_b_2129_);
v___x_2134_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2126_, v___x_2127_, v_it_2131_, v___x_2133_);
return v___x_2134_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object* v___x_2163_, lean_object* v___x_2164_, lean_object* v___x_2165_, lean_object* v_a_2166_, lean_object* v_b_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2163_, v___x_2164_, v___x_2165_, v_a_2166_, v_b_2167_);
lean_dec(v___x_2165_);
lean_dec_ref(v___x_2164_);
lean_dec_ref(v___x_2163_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object* v_out_2169_, lean_object* v_a_2170_, lean_object* v_b_2171_){
_start:
{
if (lean_obj_tag(v_a_2170_) == 0)
{
lean_object* v_currPos_2172_; lean_object* v_searcher_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2212_; 
v_currPos_2172_ = lean_ctor_get(v_a_2170_, 0);
v_searcher_2173_ = lean_ctor_get(v_a_2170_, 1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_a_2170_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2175_ = v_a_2170_;
v_isShared_2176_ = v_isSharedCheck_2212_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_searcher_2173_);
lean_inc(v_currPos_2172_);
lean_dec(v_a_2170_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2212_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v_str_2177_; lean_object* v_startInclusive_2178_; lean_object* v_endExclusive_2179_; lean_object* v_it_2181_; lean_object* v_startInclusive_2182_; lean_object* v_endExclusive_2183_; lean_object* v___x_2190_; uint8_t v_decide_2191_; 
v_str_2177_ = lean_ctor_get(v_out_2169_, 0);
v_startInclusive_2178_ = lean_ctor_get(v_out_2169_, 1);
v_endExclusive_2179_ = lean_ctor_get(v_out_2169_, 2);
v___x_2190_ = lean_nat_sub(v_endExclusive_2179_, v_startInclusive_2178_);
v_decide_2191_ = lean_nat_dec_eq(v_searcher_2173_, v___x_2190_);
if (v_decide_2191_ == 0)
{
uint32_t v___x_2192_; lean_object* v___x_2193_; uint32_t v___x_2194_; uint8_t v___x_2195_; 
lean_dec(v___x_2190_);
v___x_2192_ = 61;
v___x_2193_ = lean_nat_add(v_startInclusive_2178_, v_searcher_2173_);
v___x_2194_ = lean_string_utf8_get_fast(v_str_2177_, v___x_2193_);
v___x_2195_ = lean_uint32_dec_eq(v___x_2194_, v___x_2192_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
lean_dec(v_searcher_2173_);
v___x_2196_ = lean_string_utf8_next_fast(v_str_2177_, v___x_2193_);
lean_dec(v___x_2193_);
v___x_2197_ = lean_nat_sub(v___x_2196_, v_startInclusive_2178_);
if (v_isShared_2176_ == 0)
{
lean_ctor_set(v___x_2175_, 1, v___x_2197_);
v___x_2199_ = v___x_2175_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_currPos_2172_);
lean_ctor_set(v_reuseFailAlloc_2201_, 1, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
v_a_2170_ = v___x_2199_;
goto _start;
}
}
else
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v_slice_2205_; lean_object* v_nextIt_2207_; 
v___x_2202_ = lean_string_utf8_next_fast(v_str_2177_, v___x_2193_);
v___x_2203_ = lean_nat_sub(v___x_2202_, v___x_2193_);
lean_dec(v___x_2193_);
v___x_2204_ = lean_nat_add(v_searcher_2173_, v___x_2203_);
lean_dec(v___x_2203_);
v_slice_2205_ = l_String_Slice_subslice_x21(v_out_2169_, v_currPos_2172_, v_searcher_2173_);
lean_inc(v___x_2204_);
if (v_isShared_2176_ == 0)
{
lean_ctor_set(v___x_2175_, 1, v___x_2204_);
lean_ctor_set(v___x_2175_, 0, v___x_2204_);
v_nextIt_2207_ = v___x_2175_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v___x_2204_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v___x_2204_);
v_nextIt_2207_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
lean_object* v_startInclusive_2208_; lean_object* v_endExclusive_2209_; 
v_startInclusive_2208_ = lean_ctor_get(v_slice_2205_, 0);
lean_inc(v_startInclusive_2208_);
v_endExclusive_2209_ = lean_ctor_get(v_slice_2205_, 1);
lean_inc(v_endExclusive_2209_);
lean_dec_ref(v_slice_2205_);
v_it_2181_ = v_nextIt_2207_;
v_startInclusive_2182_ = v_startInclusive_2208_;
v_endExclusive_2183_ = v_endExclusive_2209_;
goto v___jp_2180_;
}
}
}
else
{
lean_object* v___x_2211_; 
lean_del_object(v___x_2175_);
lean_dec(v_searcher_2173_);
v___x_2211_ = lean_box(1);
v_it_2181_ = v___x_2211_;
v_startInclusive_2182_ = v_currPos_2172_;
v_endExclusive_2183_ = v___x_2190_;
goto v___jp_2180_;
}
v___jp_2180_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2184_ = lean_nat_add(v_startInclusive_2178_, v_startInclusive_2182_);
lean_dec(v_startInclusive_2182_);
v___x_2185_ = lean_nat_add(v_startInclusive_2178_, v_endExclusive_2183_);
lean_dec(v_endExclusive_2183_);
lean_inc_ref(v_str_2177_);
v___x_2186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2186_, 0, v_str_2177_);
lean_ctor_set(v___x_2186_, 1, v___x_2184_);
lean_ctor_set(v___x_2186_, 2, v___x_2185_);
v___x_2187_ = l_String_Slice_toString(v___x_2186_);
lean_dec_ref_known(v___x_2186_, 3);
v___x_2188_ = lean_array_push(v_b_2171_, v___x_2187_);
v_a_2170_ = v_it_2181_;
v_b_2171_ = v___x_2188_;
goto _start;
}
}
}
else
{
return v_b_2171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object* v_out_2213_, lean_object* v_a_2214_, lean_object* v_b_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2213_, v_a_2214_, v_b_2215_);
lean_dec_ref(v_out_2213_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object* v___x_2220_, lean_object* v___x_2221_, lean_object* v___x_2222_, lean_object* v_a_2223_, lean_object* v_b_2224_){
_start:
{
lean_object* v_it_2226_; lean_object* v_startInclusive_2227_; lean_object* v_endExclusive_2228_; 
if (lean_obj_tag(v_a_2223_) == 0)
{
lean_object* v_currPos_2253_; lean_object* v_searcher_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2283_; 
v_currPos_2253_ = lean_ctor_get(v_a_2223_, 0);
v_searcher_2254_ = lean_ctor_get(v_a_2223_, 1);
v_isSharedCheck_2283_ = !lean_is_exclusive(v_a_2223_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2256_ = v_a_2223_;
v_isShared_2257_ = v_isSharedCheck_2283_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_searcher_2254_);
lean_inc(v_currPos_2253_);
lean_dec(v_a_2223_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2283_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v_str_2258_; lean_object* v_startInclusive_2259_; lean_object* v_endExclusive_2260_; lean_object* v___x_2261_; uint8_t v_decide_2262_; 
v_str_2258_ = lean_ctor_get(v___x_2221_, 0);
v_startInclusive_2259_ = lean_ctor_get(v___x_2221_, 1);
v_endExclusive_2260_ = lean_ctor_get(v___x_2221_, 2);
v___x_2261_ = lean_nat_sub(v_endExclusive_2260_, v_startInclusive_2259_);
v_decide_2262_ = lean_nat_dec_eq(v_searcher_2254_, v___x_2261_);
lean_dec(v___x_2261_);
if (v_decide_2262_ == 0)
{
uint32_t v___x_2263_; lean_object* v___x_2264_; uint32_t v___x_2265_; uint8_t v___x_2266_; 
v___x_2263_ = 38;
v___x_2264_ = lean_nat_add(v_startInclusive_2259_, v_searcher_2254_);
v___x_2265_ = lean_string_utf8_get_fast(v_str_2258_, v___x_2264_);
v___x_2266_ = lean_uint32_dec_eq(v___x_2265_, v___x_2263_);
if (v___x_2266_ == 0)
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2270_; 
lean_dec(v_searcher_2254_);
v___x_2267_ = lean_string_utf8_next_fast(v_str_2258_, v___x_2264_);
lean_dec(v___x_2264_);
v___x_2268_ = lean_nat_sub(v___x_2267_, v_startInclusive_2259_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v___x_2268_);
v___x_2270_ = v___x_2256_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_currPos_2253_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
v_a_2223_ = v___x_2270_;
goto _start;
}
}
else
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v_slice_2276_; lean_object* v_nextIt_2278_; 
v___x_2273_ = lean_string_utf8_next_fast(v_str_2258_, v___x_2264_);
v___x_2274_ = lean_nat_sub(v___x_2273_, v___x_2264_);
lean_dec(v___x_2264_);
v___x_2275_ = lean_nat_add(v_searcher_2254_, v___x_2274_);
lean_dec(v___x_2274_);
v_slice_2276_ = l_String_Slice_subslice_x21(v___x_2221_, v_currPos_2253_, v_searcher_2254_);
lean_inc(v___x_2275_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v___x_2275_);
lean_ctor_set(v___x_2256_, 0, v___x_2275_);
v_nextIt_2278_ = v___x_2256_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v___x_2275_);
v_nextIt_2278_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
lean_object* v_startInclusive_2279_; lean_object* v_endExclusive_2280_; 
v_startInclusive_2279_ = lean_ctor_get(v_slice_2276_, 0);
lean_inc(v_startInclusive_2279_);
v_endExclusive_2280_ = lean_ctor_get(v_slice_2276_, 1);
lean_inc(v_endExclusive_2280_);
lean_dec_ref(v_slice_2276_);
v_it_2226_ = v_nextIt_2278_;
v_startInclusive_2227_ = v_startInclusive_2279_;
v_endExclusive_2228_ = v_endExclusive_2280_;
goto v___jp_2225_;
}
}
}
else
{
lean_object* v___x_2282_; 
lean_del_object(v___x_2256_);
lean_dec(v_searcher_2254_);
v___x_2282_ = lean_box(1);
lean_inc(v___x_2222_);
v_it_2226_ = v___x_2282_;
v_startInclusive_2227_ = v_currPos_2253_;
v_endExclusive_2228_ = v___x_2222_;
goto v___jp_2225_;
}
}
}
else
{
lean_object* v___x_2284_; 
lean_dec(v___x_2222_);
lean_dec_ref(v___x_2220_);
v___x_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2284_, 0, v_b_2224_);
return v___x_2284_;
}
v___jp_2225_:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
lean_inc_ref(v___x_2220_);
v___x_2229_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2220_);
lean_ctor_set(v___x_2229_, 1, v_startInclusive_2227_);
lean_ctor_set(v___x_2229_, 2, v_endExclusive_2228_);
v___x_2230_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2231_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2232_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2229_, v___x_2230_, v___x_2231_);
lean_dec_ref_known(v___x_2229_, 3);
v___x_2233_ = lean_array_to_list(v___x_2232_);
if (lean_obj_tag(v___x_2233_) == 0)
{
v_a_2223_ = v_it_2226_;
goto _start;
}
else
{
lean_object* v_tail_2235_; 
v_tail_2235_ = lean_ctor_get(v___x_2233_, 1);
if (lean_obj_tag(v_tail_2235_) == 0)
{
lean_object* v_head_2236_; lean_object* v___x_2237_; 
v_head_2236_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_head_2236_);
lean_dec_ref_known(v___x_2233_, 2);
v___x_2237_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2236_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v___x_2238_; 
lean_dec(v_it_2226_);
lean_dec_ref(v_b_2224_);
lean_dec(v___x_2222_);
lean_dec_ref(v___x_2220_);
v___x_2238_ = lean_box(0);
return v___x_2238_;
}
else
{
lean_object* v_val_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v_val_2239_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_val_2239_);
lean_dec_ref_known(v___x_2237_, 1);
v___x_2240_ = lean_box(0);
v___x_2241_ = l_Std_Http_URI_Query_insertEncoded(v_b_2224_, v_val_2239_, v___x_2240_);
v_a_2223_ = v_it_2226_;
v_b_2224_ = v___x_2241_;
goto _start;
}
}
else
{
lean_object* v_head_2243_; lean_object* v___x_2244_; 
lean_inc(v_tail_2235_);
v_head_2243_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_head_2243_);
lean_dec_ref_known(v___x_2233_, 2);
v___x_2244_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2243_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v___x_2245_; 
lean_dec(v_tail_2235_);
lean_dec(v_it_2226_);
lean_dec_ref(v_b_2224_);
lean_dec(v___x_2222_);
lean_dec_ref(v___x_2220_);
v___x_2245_ = lean_box(0);
return v___x_2245_;
}
else
{
lean_object* v_val_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v_val_2246_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_val_2246_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2247_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2248_ = l_String_intercalate(v___x_2247_, v_tail_2235_);
v___x_2249_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2248_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v___x_2250_; 
lean_dec(v_val_2246_);
lean_dec(v_it_2226_);
lean_dec_ref(v_b_2224_);
lean_dec(v___x_2222_);
lean_dec_ref(v___x_2220_);
v___x_2250_ = lean_box(0);
return v___x_2250_;
}
else
{
lean_object* v___x_2251_; 
v___x_2251_ = l_Std_Http_URI_Query_insertEncoded(v_b_2224_, v_val_2246_, v___x_2249_);
v_a_2223_ = v_it_2226_;
v_b_2224_ = v___x_2251_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object* v___x_2285_, lean_object* v___x_2286_, lean_object* v___x_2287_, lean_object* v_a_2288_, lean_object* v_b_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2285_, v___x_2286_, v___x_2287_, v_a_2288_, v_b_2289_);
lean_dec_ref(v___x_2286_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object* v___x_2291_, lean_object* v___x_2292_, lean_object* v___x_2293_, lean_object* v_a_2294_, lean_object* v_b_2295_){
_start:
{
lean_object* v_it_2297_; lean_object* v_startInclusive_2298_; lean_object* v_endExclusive_2299_; 
if (lean_obj_tag(v_a_2294_) == 0)
{
lean_object* v_currPos_2324_; lean_object* v_searcher_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2354_; 
v_currPos_2324_ = lean_ctor_get(v_a_2294_, 0);
v_searcher_2325_ = lean_ctor_get(v_a_2294_, 1);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_a_2294_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2327_ = v_a_2294_;
v_isShared_2328_ = v_isSharedCheck_2354_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_searcher_2325_);
lean_inc(v_currPos_2324_);
lean_dec(v_a_2294_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2354_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v_str_2329_; lean_object* v_startInclusive_2330_; lean_object* v_endExclusive_2331_; lean_object* v___x_2332_; uint8_t v_decide_2333_; 
v_str_2329_ = lean_ctor_get(v___x_2292_, 0);
v_startInclusive_2330_ = lean_ctor_get(v___x_2292_, 1);
v_endExclusive_2331_ = lean_ctor_get(v___x_2292_, 2);
v___x_2332_ = lean_nat_sub(v_endExclusive_2331_, v_startInclusive_2330_);
v_decide_2333_ = lean_nat_dec_eq(v_searcher_2325_, v___x_2332_);
lean_dec(v___x_2332_);
if (v_decide_2333_ == 0)
{
lean_object* v___x_2334_; uint32_t v___x_2335_; uint32_t v___x_2336_; uint8_t v___x_2337_; 
v___x_2334_ = lean_nat_add(v_startInclusive_2330_, v_searcher_2325_);
v___x_2335_ = lean_string_utf8_get_fast(v_str_2329_, v___x_2334_);
v___x_2336_ = 38;
v___x_2337_ = lean_uint32_dec_eq(v___x_2335_, v___x_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2341_; 
lean_dec(v_searcher_2325_);
v___x_2338_ = lean_string_utf8_next_fast(v_str_2329_, v___x_2334_);
lean_dec(v___x_2334_);
v___x_2339_ = lean_nat_sub(v___x_2338_, v_startInclusive_2330_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 1, v___x_2339_);
v___x_2341_ = v___x_2327_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_currPos_2324_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v___x_2339_);
v___x_2341_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2291_, v___x_2292_, v___x_2293_, v___x_2341_, v_b_2295_);
return v___x_2342_;
}
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v_slice_2347_; lean_object* v_nextIt_2349_; 
v___x_2344_ = lean_string_utf8_next_fast(v_str_2329_, v___x_2334_);
v___x_2345_ = lean_nat_sub(v___x_2344_, v___x_2334_);
lean_dec(v___x_2334_);
v___x_2346_ = lean_nat_add(v_searcher_2325_, v___x_2345_);
lean_dec(v___x_2345_);
v_slice_2347_ = l_String_Slice_subslice_x21(v___x_2292_, v_currPos_2324_, v_searcher_2325_);
lean_inc(v___x_2346_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 1, v___x_2346_);
lean_ctor_set(v___x_2327_, 0, v___x_2346_);
v_nextIt_2349_ = v___x_2327_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2346_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v___x_2346_);
v_nextIt_2349_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v_startInclusive_2350_; lean_object* v_endExclusive_2351_; 
v_startInclusive_2350_ = lean_ctor_get(v_slice_2347_, 0);
lean_inc(v_startInclusive_2350_);
v_endExclusive_2351_ = lean_ctor_get(v_slice_2347_, 1);
lean_inc(v_endExclusive_2351_);
lean_dec_ref(v_slice_2347_);
v_it_2297_ = v_nextIt_2349_;
v_startInclusive_2298_ = v_startInclusive_2350_;
v_endExclusive_2299_ = v_endExclusive_2351_;
goto v___jp_2296_;
}
}
}
else
{
lean_object* v___x_2353_; 
lean_del_object(v___x_2327_);
lean_dec(v_searcher_2325_);
v___x_2353_ = lean_box(1);
lean_inc(v___x_2293_);
v_it_2297_ = v___x_2353_;
v_startInclusive_2298_ = v_currPos_2324_;
v_endExclusive_2299_ = v___x_2293_;
goto v___jp_2296_;
}
}
}
else
{
lean_object* v___x_2355_; 
lean_dec(v___x_2293_);
lean_dec_ref(v___x_2291_);
v___x_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2355_, 0, v_b_2295_);
return v___x_2355_;
}
v___jp_2296_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_inc_ref(v___x_2291_);
v___x_2300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2291_);
lean_ctor_set(v___x_2300_, 1, v_startInclusive_2298_);
lean_ctor_set(v___x_2300_, 2, v_endExclusive_2299_);
v___x_2301_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2302_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2303_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2300_, v___x_2301_, v___x_2302_);
lean_dec_ref_known(v___x_2300_, 3);
v___x_2304_ = lean_array_to_list(v___x_2303_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v___x_2305_; 
v___x_2305_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2291_, v___x_2292_, v___x_2293_, v_it_2297_, v_b_2295_);
return v___x_2305_;
}
else
{
lean_object* v_tail_2306_; 
v_tail_2306_ = lean_ctor_get(v___x_2304_, 1);
if (lean_obj_tag(v_tail_2306_) == 0)
{
lean_object* v_head_2307_; lean_object* v___x_2308_; 
v_head_2307_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_head_2307_);
lean_dec_ref_known(v___x_2304_, 2);
v___x_2308_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2307_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v___x_2309_; 
lean_dec(v_it_2297_);
lean_dec_ref(v_b_2295_);
lean_dec(v___x_2293_);
lean_dec_ref(v___x_2291_);
v___x_2309_ = lean_box(0);
return v___x_2309_;
}
else
{
lean_object* v_val_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v_val_2310_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_val_2310_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2311_ = lean_box(0);
v___x_2312_ = l_Std_Http_URI_Query_insertEncoded(v_b_2295_, v_val_2310_, v___x_2311_);
v___x_2313_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2291_, v___x_2292_, v___x_2293_, v_it_2297_, v___x_2312_);
return v___x_2313_;
}
}
else
{
lean_object* v_head_2314_; lean_object* v___x_2315_; 
lean_inc(v_tail_2306_);
v_head_2314_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_head_2314_);
lean_dec_ref_known(v___x_2304_, 2);
v___x_2315_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2314_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v___x_2316_; 
lean_dec(v_tail_2306_);
lean_dec(v_it_2297_);
lean_dec_ref(v_b_2295_);
lean_dec(v___x_2293_);
lean_dec_ref(v___x_2291_);
v___x_2316_ = lean_box(0);
return v___x_2316_;
}
else
{
lean_object* v_val_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v_val_2317_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_val_2317_);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2318_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2319_ = l_String_intercalate(v___x_2318_, v_tail_2306_);
v___x_2320_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2319_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v___x_2321_; 
lean_dec(v_val_2317_);
lean_dec(v_it_2297_);
lean_dec_ref(v_b_2295_);
lean_dec(v___x_2293_);
lean_dec_ref(v___x_2291_);
v___x_2321_ = lean_box(0);
return v___x_2321_;
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = l_Std_Http_URI_Query_insertEncoded(v_b_2295_, v_val_2317_, v___x_2320_);
v___x_2323_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2291_, v___x_2292_, v___x_2293_, v_it_2297_, v___x_2322_);
return v___x_2323_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object* v___x_2356_, lean_object* v___x_2357_, lean_object* v___x_2358_, lean_object* v_a_2359_, lean_object* v_b_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2356_, v___x_2357_, v___x_2358_, v_a_2359_, v_b_2360_);
lean_dec_ref(v___x_2357_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object* v_config_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_maxQueryLength_2369_; lean_object* v_maxQueryParams_2370_; lean_object* v___f_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v_snd_2374_; lean_object* v_fst_2375_; lean_object* v_fst_2376_; lean_object* v_array_2377_; lean_object* v_idx_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2428_; 
v_maxQueryLength_2369_ = lean_ctor_get(v_config_2367_, 4);
lean_inc(v_maxQueryLength_2369_);
v_maxQueryParams_2370_ = lean_ctor_get(v_config_2367_, 8);
lean_inc(v_maxQueryParams_2370_);
lean_dec_ref(v_config_2367_);
v___f_2371_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2372_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2368_);
v___x_2373_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2371_, v_maxQueryLength_2369_, v___x_2372_, v_a_2368_);
lean_dec(v_maxQueryLength_2369_);
v_snd_2374_ = lean_ctor_get(v___x_2373_, 1);
lean_inc(v_snd_2374_);
v_fst_2375_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_fst_2375_);
lean_dec_ref(v___x_2373_);
v_fst_2376_ = lean_ctor_get(v_snd_2374_, 0);
lean_inc(v_fst_2376_);
lean_dec(v_snd_2374_);
v_array_2377_ = lean_ctor_get(v_a_2368_, 0);
v_idx_2378_ = lean_ctor_get(v_a_2368_, 1);
v_isSharedCheck_2428_ = !lean_is_exclusive(v_a_2368_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2380_ = v_a_2368_;
v_isShared_2381_ = v_isSharedCheck_2428_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_idx_2378_);
lean_inc(v_array_2377_);
lean_dec(v_a_2368_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2428_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v_lower_2383_; lean_object* v_upper_2384_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___y_2425_; uint8_t v___x_2427_; 
v___x_2422_ = lean_nat_add(v_idx_2378_, v_fst_2375_);
lean_dec(v_fst_2375_);
v___x_2423_ = lean_byte_array_size(v_array_2377_);
v___x_2427_ = lean_nat_dec_le(v_idx_2378_, v___x_2372_);
if (v___x_2427_ == 0)
{
v___y_2425_ = v_idx_2378_;
goto v___jp_2424_;
}
else
{
lean_dec(v_idx_2378_);
v___y_2425_ = v___x_2372_;
goto v___jp_2424_;
}
v___jp_2382_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; uint8_t v___x_2387_; 
v___x_2385_ = l_ByteArray_toByteSlice(v_array_2377_, v_lower_2383_, v_upper_2384_);
v___x_2386_ = l_ByteSlice_toByteArray(v___x_2385_);
v___x_2387_ = lean_string_validate_utf8(v___x_2386_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; lean_object* v___x_2390_; 
lean_dec_ref(v___x_2386_);
lean_dec(v_maxQueryParams_2370_);
v___x_2388_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2381_ == 0)
{
lean_ctor_set_tag(v___x_2380_, 1);
lean_ctor_set(v___x_2380_, 1, v___x_2388_);
lean_ctor_set(v___x_2380_, 0, v_fst_2376_);
v___x_2390_ = v___x_2380_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_fst_2376_);
lean_ctor_set(v_reuseFailAlloc_2391_, 1, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
else
{
lean_object* v___x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v___x_2392_ = lean_string_from_utf8_unchecked(v___x_2386_);
v___x_2393_ = lean_string_utf8_byte_size(v___x_2392_);
v___x_2394_ = lean_nat_dec_eq(v___x_2393_, v___x_2372_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
lean_inc_ref(v___x_2392_);
v___x_2395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2392_);
lean_ctor_set(v___x_2395_, 1, v___x_2372_);
lean_ctor_set(v___x_2395_, 2, v___x_2393_);
v___x_2396_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
v___x_2397_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2392_, v___x_2395_, v___x_2393_, v___x_2396_, v___x_2372_);
v___x_2398_ = lean_nat_dec_lt(v_maxQueryParams_2370_, v___x_2397_);
lean_dec(v___x_2397_);
if (v___x_2398_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
lean_dec(v_maxQueryParams_2370_);
v___x_2399_ = l_Std_Http_URI_Query_empty;
v___x_2400_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2392_, v___x_2395_, v___x_2393_, v___x_2396_, v___x_2399_);
lean_dec_ref_known(v___x_2395_, 3);
if (lean_obj_tag(v___x_2400_) == 1)
{
lean_object* v_val_2401_; lean_object* v___x_2403_; 
v_val_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_val_2401_);
lean_dec_ref_known(v___x_2400_, 1);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 1, v_val_2401_);
lean_ctor_set(v___x_2380_, 0, v_fst_2376_);
v___x_2403_ = v___x_2380_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_fst_2376_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v_val_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
else
{
lean_object* v___x_2405_; lean_object* v___x_2407_; 
lean_dec(v___x_2400_);
v___x_2405_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2381_ == 0)
{
lean_ctor_set_tag(v___x_2380_, 1);
lean_ctor_set(v___x_2380_, 1, v___x_2405_);
lean_ctor_set(v___x_2380_, 0, v_fst_2376_);
v___x_2407_ = v___x_2380_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_fst_2376_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v___x_2405_);
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
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2416_; 
lean_dec_ref_known(v___x_2395_, 3);
lean_dec_ref(v___x_2392_);
v___x_2409_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3));
v___x_2410_ = l_Nat_reprFast(v_maxQueryParams_2370_);
v___x_2411_ = lean_string_append(v___x_2409_, v___x_2410_);
lean_dec_ref(v___x_2410_);
v___x_2412_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_2413_ = lean_string_append(v___x_2411_, v___x_2412_);
v___x_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
if (v_isShared_2381_ == 0)
{
lean_ctor_set_tag(v___x_2380_, 1);
lean_ctor_set(v___x_2380_, 1, v___x_2414_);
lean_ctor_set(v___x_2380_, 0, v_fst_2376_);
v___x_2416_ = v___x_2380_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_fst_2376_);
lean_ctor_set(v_reuseFailAlloc_2417_, 1, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
else
{
lean_object* v___x_2418_; lean_object* v___x_2420_; 
lean_dec_ref(v___x_2392_);
lean_dec(v_maxQueryParams_2370_);
v___x_2418_ = l_Std_Http_URI_Query_empty;
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 1, v___x_2418_);
lean_ctor_set(v___x_2380_, 0, v_fst_2376_);
v___x_2420_ = v___x_2380_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_fst_2376_);
lean_ctor_set(v_reuseFailAlloc_2421_, 1, v___x_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
v___jp_2424_:
{
uint8_t v___x_2426_; 
v___x_2426_ = lean_nat_dec_le(v___x_2422_, v___x_2423_);
if (v___x_2426_ == 0)
{
lean_dec(v___x_2422_);
v_lower_2383_ = v___y_2425_;
v_upper_2384_ = v___x_2423_;
goto v___jp_2382_;
}
else
{
v_lower_2383_ = v___y_2425_;
v_upper_2384_ = v___x_2422_;
goto v___jp_2382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object* v___x_2429_, lean_object* v___x_2430_, lean_object* v___x_2431_, lean_object* v_inst_2432_, lean_object* v_R_2433_, lean_object* v_a_2434_, lean_object* v_b_2435_, lean_object* v_c_2436_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2429_, v___x_2430_, v___x_2431_, v_a_2434_, v_b_2435_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object* v___x_2438_, lean_object* v___x_2439_, lean_object* v___x_2440_, lean_object* v_inst_2441_, lean_object* v_R_2442_, lean_object* v_a_2443_, lean_object* v_b_2444_, lean_object* v_c_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(v___x_2438_, v___x_2439_, v___x_2440_, v_inst_2441_, v_R_2442_, v_a_2443_, v_b_2444_, v_c_2445_);
lean_dec(v___x_2440_);
lean_dec_ref(v___x_2439_);
lean_dec_ref(v___x_2438_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object* v_out_2447_, lean_object* v_inst_2448_, lean_object* v_R_2449_, lean_object* v_a_2450_, lean_object* v_b_2451_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2447_, v_a_2450_, v_b_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object* v_out_2453_, lean_object* v_inst_2454_, lean_object* v_R_2455_, lean_object* v_a_2456_, lean_object* v_b_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(v_out_2453_, v_inst_2454_, v_R_2455_, v_a_2456_, v_b_2457_);
lean_dec_ref(v_out_2453_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object* v___x_2459_, lean_object* v___x_2460_, lean_object* v___x_2461_, lean_object* v_inst_2462_, lean_object* v_R_2463_, lean_object* v_a_2464_, lean_object* v_b_2465_, lean_object* v_c_2466_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2459_, v___x_2460_, v___x_2461_, v_a_2464_, v_b_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object* v___x_2468_, lean_object* v___x_2469_, lean_object* v___x_2470_, lean_object* v_inst_2471_, lean_object* v_R_2472_, lean_object* v_a_2473_, lean_object* v_b_2474_, lean_object* v_c_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(v___x_2468_, v___x_2469_, v___x_2470_, v_inst_2471_, v_R_2472_, v_a_2473_, v_b_2474_, v_c_2475_);
lean_dec_ref(v___x_2469_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object* v___x_2477_, lean_object* v___x_2478_, lean_object* v___x_2479_, lean_object* v_inst_2480_, lean_object* v_R_2481_, lean_object* v_a_2482_, lean_object* v_b_2483_, lean_object* v_c_2484_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2478_, v___x_2479_, v_a_2482_, v_b_2483_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object* v___x_2486_, lean_object* v___x_2487_, lean_object* v___x_2488_, lean_object* v_inst_2489_, lean_object* v_R_2490_, lean_object* v_a_2491_, lean_object* v_b_2492_, lean_object* v_c_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(v___x_2486_, v___x_2487_, v___x_2488_, v_inst_2489_, v_R_2490_, v_a_2491_, v_b_2492_, v_c_2493_);
lean_dec(v___x_2488_);
lean_dec_ref(v___x_2487_);
lean_dec_ref(v___x_2486_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object* v___x_2495_, lean_object* v___x_2496_, lean_object* v___x_2497_, lean_object* v_inst_2498_, lean_object* v_R_2499_, lean_object* v_a_2500_, lean_object* v_b_2501_, lean_object* v_c_2502_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2495_, v___x_2496_, v___x_2497_, v_a_2500_, v_b_2501_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object* v___x_2504_, lean_object* v___x_2505_, lean_object* v___x_2506_, lean_object* v_inst_2507_, lean_object* v_R_2508_, lean_object* v_a_2509_, lean_object* v_b_2510_, lean_object* v_c_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(v___x_2504_, v___x_2505_, v___x_2506_, v_inst_2507_, v_R_2508_, v_a_2509_, v_b_2510_, v_c_2511_);
lean_dec_ref(v___x_2505_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object* v_config_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_maxFragmentLength_2518_; lean_object* v___f_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v_snd_2522_; lean_object* v_fst_2523_; lean_object* v_fst_2524_; lean_object* v_array_2525_; lean_object* v_idx_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2550_; 
v_maxFragmentLength_2518_ = lean_ctor_get(v_config_2516_, 5);
v___f_2519_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2520_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2517_);
v___x_2521_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2519_, v_maxFragmentLength_2518_, v___x_2520_, v_a_2517_);
v_snd_2522_ = lean_ctor_get(v___x_2521_, 1);
lean_inc(v_snd_2522_);
v_fst_2523_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_fst_2523_);
lean_dec_ref(v___x_2521_);
v_fst_2524_ = lean_ctor_get(v_snd_2522_, 0);
lean_inc(v_fst_2524_);
lean_dec(v_snd_2522_);
v_array_2525_ = lean_ctor_get(v_a_2517_, 0);
v_idx_2526_ = lean_ctor_get(v_a_2517_, 1);
v_isSharedCheck_2550_ = !lean_is_exclusive(v_a_2517_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2528_ = v_a_2517_;
v_isShared_2529_ = v_isSharedCheck_2550_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_idx_2526_);
lean_inc(v_array_2525_);
lean_dec(v_a_2517_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2550_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v_lower_2531_; lean_object* v_upper_2532_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___y_2547_; uint8_t v___x_2549_; 
v___x_2544_ = lean_nat_add(v_idx_2526_, v_fst_2523_);
lean_dec(v_fst_2523_);
v___x_2545_ = lean_byte_array_size(v_array_2525_);
v___x_2549_ = lean_nat_dec_le(v_idx_2526_, v___x_2520_);
if (v___x_2549_ == 0)
{
v___y_2547_ = v_idx_2526_;
goto v___jp_2546_;
}
else
{
lean_dec(v_idx_2526_);
v___y_2547_ = v___x_2520_;
goto v___jp_2546_;
}
v___jp_2530_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2533_ = l_ByteArray_toByteSlice(v_array_2525_, v_lower_2531_, v_upper_2532_);
v___x_2534_ = l_ByteSlice_toByteArray(v___x_2533_);
v___x_2535_ = l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(v___x_2534_);
if (lean_obj_tag(v___x_2535_) == 1)
{
lean_object* v_val_2536_; lean_object* v___x_2538_; 
v_val_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_val_2536_);
lean_dec_ref_known(v___x_2535_, 1);
if (v_isShared_2529_ == 0)
{
lean_ctor_set(v___x_2528_, 1, v_val_2536_);
lean_ctor_set(v___x_2528_, 0, v_fst_2524_);
v___x_2538_ = v___x_2528_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_fst_2524_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_val_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
else
{
lean_object* v___x_2540_; lean_object* v___x_2542_; 
lean_dec(v___x_2535_);
v___x_2540_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1));
if (v_isShared_2529_ == 0)
{
lean_ctor_set_tag(v___x_2528_, 1);
lean_ctor_set(v___x_2528_, 1, v___x_2540_);
lean_ctor_set(v___x_2528_, 0, v_fst_2524_);
v___x_2542_ = v___x_2528_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_fst_2524_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v___x_2540_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
v___jp_2546_:
{
uint8_t v___x_2548_; 
v___x_2548_ = lean_nat_dec_le(v___x_2544_, v___x_2545_);
if (v___x_2548_ == 0)
{
lean_dec(v___x_2544_);
v_lower_2531_ = v___y_2547_;
v_upper_2532_ = v___x_2545_;
goto v___jp_2530_;
}
else
{
v_lower_2531_ = v___y_2547_;
v_upper_2532_ = v___x_2544_;
goto v___jp_2530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object* v_config_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2551_, v_a_2552_);
lean_dec_ref(v_config_2551_);
return v_res_2553_;
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1(void){
_start:
{
lean_object* v___x_2555_; lean_object* v_utf8_2556_; 
v___x_2555_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0));
v_utf8_2556_ = lean_string_to_utf8(v___x_2555_);
return v_utf8_2556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object* v_config_2557_, lean_object* v_a_2558_){
_start:
{
lean_object* v_utf8_2559_; lean_object* v___x_2560_; 
v_utf8_2559_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_2558_);
v___x_2560_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_2559_, v_a_2558_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_pos_2561_; uint8_t v___x_2562_; lean_object* v_pos_2564_; lean_object* v_res_2565_; lean_object* v___x_2586_; 
lean_dec_ref(v_a_2558_);
v_pos_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc_n(v_pos_2561_, 2);
lean_dec_ref_known(v___x_2560_, 2);
v___x_2562_ = 1;
v___x_2586_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_2557_, v_pos_2561_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_pos_2587_; lean_object* v_res_2588_; lean_object* v___x_2589_; 
lean_dec(v_pos_2561_);
v_pos_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_pos_2587_);
v_res_2588_ = lean_ctor_get(v___x_2586_, 1);
lean_inc(v_res_2588_);
lean_dec_ref_known(v___x_2586_, 2);
v___x_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2589_, 0, v_res_2588_);
v_pos_2564_ = v_pos_2587_;
v_res_2565_ = v___x_2589_;
goto v___jp_2563_;
}
else
{
lean_object* v_err_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2600_; 
v_err_2590_ = lean_ctor_get(v___x_2586_, 1);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2600_ == 0)
{
lean_object* v_unused_2601_; 
v_unused_2601_ = lean_ctor_get(v___x_2586_, 0);
lean_dec(v_unused_2601_);
v___x_2592_ = v___x_2586_;
v_isShared_2593_ = v_isSharedCheck_2600_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_err_2590_);
lean_dec(v___x_2586_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2600_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v_idx_2594_; uint8_t v___x_2595_; 
v_idx_2594_ = lean_ctor_get(v_pos_2561_, 1);
v___x_2595_ = lean_nat_dec_eq(v_idx_2594_, v_idx_2594_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2597_; 
lean_dec_ref(v_config_2557_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 0, v_pos_2561_);
v___x_2597_ = v___x_2592_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_pos_2561_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_err_2590_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
else
{
lean_object* v___x_2599_; 
lean_del_object(v___x_2592_);
lean_dec(v_err_2590_);
v___x_2599_ = lean_box(0);
v_pos_2564_ = v_pos_2561_;
v_res_2565_ = v___x_2599_;
goto v___jp_2563_;
}
}
}
v___jp_2563_:
{
lean_object* v___x_2566_; 
v___x_2566_ = l_Std_Http_URI_Parser_parsePath(v_config_2557_, v___x_2562_, v___x_2562_, v_pos_2564_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_pos_2567_; lean_object* v_res_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2576_; 
v_pos_2567_ = lean_ctor_get(v___x_2566_, 0);
v_res_2568_ = lean_ctor_get(v___x_2566_, 1);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2570_ = v___x_2566_;
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_res_2568_);
lean_inc(v_pos_2567_);
lean_dec(v___x_2566_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2572_; lean_object* v___x_2574_; 
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v_res_2565_);
lean_ctor_set(v___x_2572_, 1, v_res_2568_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 1, v___x_2572_);
v___x_2574_ = v___x_2570_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_pos_2567_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v___x_2572_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
else
{
lean_object* v_pos_2577_; lean_object* v_err_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
lean_dec(v_res_2565_);
v_pos_2577_ = lean_ctor_get(v___x_2566_, 0);
v_err_2578_ = lean_ctor_get(v___x_2566_, 1);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2566_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_err_2578_);
lean_inc(v_pos_2577_);
lean_dec(v___x_2566_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_pos_2577_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_err_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
else
{
lean_object* v_err_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2633_; 
v_err_2602_ = lean_ctor_get(v___x_2560_, 1);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2633_ == 0)
{
lean_object* v_unused_2634_; 
v_unused_2634_ = lean_ctor_get(v___x_2560_, 0);
lean_dec(v_unused_2634_);
v___x_2604_ = v___x_2560_;
v_isShared_2605_ = v_isSharedCheck_2633_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_err_2602_);
lean_dec(v___x_2560_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2633_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v_idx_2606_; uint8_t v___x_2607_; 
v_idx_2606_ = lean_ctor_get(v_a_2558_, 1);
v___x_2607_ = lean_nat_dec_eq(v_idx_2606_, v_idx_2606_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2609_; 
lean_dec_ref(v_config_2557_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 0, v_a_2558_);
v___x_2609_ = v___x_2604_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2558_);
lean_ctor_set(v_reuseFailAlloc_2610_, 1, v_err_2602_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
else
{
uint8_t v___x_2611_; lean_object* v___x_2612_; 
lean_del_object(v___x_2604_);
lean_dec(v_err_2602_);
v___x_2611_ = 0;
v___x_2612_ = l_Std_Http_URI_Parser_parsePath(v_config_2557_, v___x_2611_, v___x_2607_, v_a_2558_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_pos_2613_; lean_object* v_res_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2623_; 
v_pos_2613_ = lean_ctor_get(v___x_2612_, 0);
v_res_2614_ = lean_ctor_get(v___x_2612_, 1);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2616_ = v___x_2612_;
v_isShared_2617_ = v_isSharedCheck_2623_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_res_2614_);
lean_inc(v_pos_2613_);
lean_dec(v___x_2612_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2623_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2618_ = lean_box(0);
v___x_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v_res_2614_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v___x_2619_);
v___x_2621_ = v___x_2616_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_pos_2613_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
else
{
lean_object* v_pos_2624_; lean_object* v_err_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_pos_2624_ = lean_ctor_get(v___x_2612_, 0);
v_err_2625_ = lean_ctor_get(v___x_2612_, 1);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2612_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_err_2625_);
lean_inc(v_pos_2624_);
lean_dec(v___x_2612_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_pos_2624_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_err_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object* v_config_2644_, lean_object* v_a_2645_){
_start:
{
lean_object* v___x_2646_; 
v___x_2646_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2644_, v_a_2645_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_pos_2647_; lean_object* v_res_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2779_; 
v_pos_2647_ = lean_ctor_get(v___x_2646_, 0);
v_res_2648_ = lean_ctor_get(v___x_2646_, 1);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2650_ = v___x_2646_;
v_isShared_2651_ = v_isSharedCheck_2779_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_res_2648_);
lean_inc(v_pos_2647_);
lean_dec(v___x_2646_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2779_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v_array_2652_; lean_object* v_idx_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; 
v_array_2652_ = lean_ctor_get(v_pos_2647_, 0);
v_idx_2653_ = lean_ctor_get(v_pos_2647_, 1);
v___x_2654_ = lean_byte_array_size(v_array_2652_);
v___x_2655_ = lean_nat_dec_lt(v_idx_2653_, v___x_2654_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; lean_object* v___x_2658_; 
lean_dec(v_res_2648_);
lean_dec_ref(v_config_2644_);
v___x_2656_ = lean_box(0);
if (v_isShared_2651_ == 0)
{
lean_ctor_set_tag(v___x_2650_, 1);
lean_ctor_set(v___x_2650_, 1, v___x_2656_);
v___x_2658_ = v___x_2650_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_pos_2647_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v___x_2656_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
else
{
uint8_t v___x_2660_; uint8_t v_got_2661_; uint8_t v___x_2662_; 
v___x_2660_ = 58;
v_got_2661_ = lean_byte_array_fget(v_array_2652_, v_idx_2653_);
v___x_2662_ = lean_uint8_dec_eq(v_got_2661_, v___x_2660_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; lean_object* v___x_2665_; 
lean_dec(v_res_2648_);
lean_dec_ref(v_config_2644_);
v___x_2663_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_2651_ == 0)
{
lean_ctor_set_tag(v___x_2650_, 1);
lean_ctor_set(v___x_2650_, 1, v___x_2663_);
v___x_2665_ = v___x_2650_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_pos_2647_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v___x_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
else
{
lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2776_; 
lean_inc(v_idx_2653_);
lean_inc_ref(v_array_2652_);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_pos_2647_);
if (v_isSharedCheck_2776_ == 0)
{
lean_object* v_unused_2777_; lean_object* v_unused_2778_; 
v_unused_2777_ = lean_ctor_get(v_pos_2647_, 1);
lean_dec(v_unused_2777_);
v_unused_2778_ = lean_ctor_get(v_pos_2647_, 0);
lean_dec(v_unused_2778_);
v___x_2668_ = v_pos_2647_;
v_isShared_2669_ = v_isSharedCheck_2776_;
goto v_resetjp_2667_;
}
else
{
lean_dec(v_pos_2647_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2776_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2670_ = lean_unsigned_to_nat(1u);
v___x_2671_ = lean_nat_add(v_idx_2653_, v___x_2670_);
lean_dec(v_idx_2653_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 1, v___x_2671_);
v___x_2673_ = v___x_2668_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_array_2652_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v___x_2671_);
v___x_2673_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; 
lean_inc_ref(v_config_2644_);
v___x_2674_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2644_, v___x_2673_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_res_2675_; lean_object* v_pos_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2765_; 
v_res_2675_ = lean_ctor_get(v___x_2674_, 1);
v_pos_2676_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2678_ = v___x_2674_;
v_isShared_2679_ = v_isSharedCheck_2765_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_res_2675_);
lean_inc(v_pos_2676_);
lean_dec(v___x_2674_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2765_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v_fst_2680_; lean_object* v_snd_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2764_; 
v_fst_2680_ = lean_ctor_get(v_res_2675_, 0);
v_snd_2681_ = lean_ctor_get(v_res_2675_, 1);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_res_2675_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2683_ = v_res_2675_;
v_isShared_2684_ = v_isSharedCheck_2764_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_snd_2681_);
lean_inc(v_fst_2680_);
lean_dec(v_res_2675_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2764_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___y_2686_; lean_object* v_pos_2687_; lean_object* v_res_2688_; lean_object* v_idx_2694_; lean_object* v___y_2695_; lean_object* v_pos_2696_; lean_object* v_err_2697_; lean_object* v_pos_2705_; lean_object* v_array_2706_; lean_object* v_idx_2707_; lean_object* v_res_2708_; lean_object* v_array_2727_; lean_object* v_idx_2728_; lean_object* v_pos_2730_; lean_object* v_array_2731_; lean_object* v_idx_2732_; lean_object* v_err_2733_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v_array_2727_ = lean_ctor_get(v_pos_2676_, 0);
lean_inc_ref(v_array_2727_);
v_idx_2728_ = lean_ctor_get(v_pos_2676_, 1);
lean_inc(v_idx_2728_);
v___x_2737_ = lean_byte_array_size(v_array_2727_);
v___x_2738_ = lean_nat_dec_lt(v_idx_2728_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_box(0);
lean_inc(v_idx_2728_);
v_pos_2730_ = v_pos_2676_;
v_array_2731_ = v_array_2727_;
v_idx_2732_ = v_idx_2728_;
v_err_2733_ = v___x_2739_;
goto v___jp_2729_;
}
else
{
uint8_t v___x_2740_; uint8_t v_got_2741_; uint8_t v___x_2742_; 
v___x_2740_ = 63;
v_got_2741_ = lean_byte_array_fget(v_array_2727_, v_idx_2728_);
v___x_2742_ = lean_uint8_dec_eq(v_got_2741_, v___x_2740_);
if (v___x_2742_ == 0)
{
lean_object* v___x_2743_; 
v___x_2743_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2728_);
v_pos_2730_ = v_pos_2676_;
v_array_2731_ = v_array_2727_;
v_idx_2732_ = v_idx_2728_;
v_err_2733_ = v___x_2743_;
goto v___jp_2729_;
}
else
{
lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2761_; 
v_isSharedCheck_2761_ = !lean_is_exclusive(v_pos_2676_);
if (v_isSharedCheck_2761_ == 0)
{
lean_object* v_unused_2762_; lean_object* v_unused_2763_; 
v_unused_2762_ = lean_ctor_get(v_pos_2676_, 1);
lean_dec(v_unused_2762_);
v_unused_2763_ = lean_ctor_get(v_pos_2676_, 0);
lean_dec(v_unused_2763_);
v___x_2745_ = v_pos_2676_;
v_isShared_2746_ = v_isSharedCheck_2761_;
goto v_resetjp_2744_;
}
else
{
lean_dec(v_pos_2676_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2761_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2747_; lean_object* v___x_2749_; 
v___x_2747_ = lean_nat_add(v_idx_2728_, v___x_2670_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 1, v___x_2747_);
v___x_2749_ = v___x_2745_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_array_2727_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v___x_2747_);
v___x_2749_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2750_; 
lean_inc_ref(v_config_2644_);
v___x_2750_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2644_, v___x_2749_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_pos_2751_; lean_object* v_res_2752_; lean_object* v_array_2753_; lean_object* v_idx_2754_; lean_object* v___x_2755_; 
lean_dec(v_idx_2728_);
v_pos_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_pos_2751_);
v_res_2752_ = lean_ctor_get(v___x_2750_, 1);
lean_inc(v_res_2752_);
lean_dec_ref_known(v___x_2750_, 2);
v_array_2753_ = lean_ctor_get(v_pos_2751_, 0);
lean_inc_ref(v_array_2753_);
v_idx_2754_ = lean_ctor_get(v_pos_2751_, 1);
lean_inc(v_idx_2754_);
v___x_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2755_, 0, v_res_2752_);
v_pos_2705_ = v_pos_2751_;
v_array_2706_ = v_array_2753_;
v_idx_2707_ = v_idx_2754_;
v_res_2708_ = v___x_2755_;
goto v___jp_2704_;
}
else
{
lean_object* v_pos_2756_; lean_object* v_err_2757_; lean_object* v_array_2758_; lean_object* v_idx_2759_; 
v_pos_2756_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_pos_2756_);
v_err_2757_ = lean_ctor_get(v___x_2750_, 1);
lean_inc(v_err_2757_);
lean_dec_ref_known(v___x_2750_, 2);
v_array_2758_ = lean_ctor_get(v_pos_2756_, 0);
lean_inc_ref(v_array_2758_);
v_idx_2759_ = lean_ctor_get(v_pos_2756_, 1);
lean_inc(v_idx_2759_);
v_pos_2730_ = v_pos_2756_;
v_array_2731_ = v_array_2758_;
v_idx_2732_ = v_idx_2759_;
v_err_2733_ = v_err_2757_;
goto v___jp_2729_;
}
}
}
}
}
v___jp_2685_:
{
lean_object* v___x_2689_; lean_object* v___x_2691_; 
v___x_2689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2689_, 0, v_res_2648_);
lean_ctor_set(v___x_2689_, 1, v_fst_2680_);
lean_ctor_set(v___x_2689_, 2, v_snd_2681_);
lean_ctor_set(v___x_2689_, 3, v___y_2686_);
lean_ctor_set(v___x_2689_, 4, v_res_2688_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 1, v___x_2689_);
lean_ctor_set(v___x_2678_, 0, v_pos_2687_);
v___x_2691_ = v___x_2678_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_pos_2687_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v___x_2689_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
v___jp_2693_:
{
lean_object* v_idx_2698_; uint8_t v___x_2699_; 
v_idx_2698_ = lean_ctor_get(v_pos_2696_, 1);
v___x_2699_ = lean_nat_dec_eq(v_idx_2694_, v_idx_2698_);
lean_dec(v_idx_2694_);
if (v___x_2699_ == 0)
{
lean_object* v___x_2701_; 
lean_dec(v___y_2695_);
lean_dec(v_snd_2681_);
lean_dec(v_fst_2680_);
lean_del_object(v___x_2678_);
lean_dec(v_res_2648_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set_tag(v___x_2650_, 1);
lean_ctor_set(v___x_2650_, 1, v_err_2697_);
lean_ctor_set(v___x_2650_, 0, v_pos_2696_);
v___x_2701_ = v___x_2650_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_pos_2696_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_err_2697_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
else
{
lean_object* v___x_2703_; 
lean_dec(v_err_2697_);
lean_del_object(v___x_2650_);
v___x_2703_ = lean_box(0);
v___y_2686_ = v___y_2695_;
v_pos_2687_ = v_pos_2696_;
v_res_2688_ = v___x_2703_;
goto v___jp_2685_;
}
}
v___jp_2704_:
{
lean_object* v___x_2709_; uint8_t v___x_2710_; 
v___x_2709_ = lean_byte_array_size(v_array_2706_);
v___x_2710_ = lean_nat_dec_lt(v_idx_2707_, v___x_2709_);
if (v___x_2710_ == 0)
{
lean_object* v___x_2711_; 
lean_dec_ref(v_array_2706_);
lean_del_object(v___x_2683_);
lean_dec_ref(v_config_2644_);
v___x_2711_ = lean_box(0);
v_idx_2694_ = v_idx_2707_;
v___y_2695_ = v_res_2708_;
v_pos_2696_ = v_pos_2705_;
v_err_2697_ = v___x_2711_;
goto v___jp_2693_;
}
else
{
uint8_t v___x_2712_; uint8_t v_got_2713_; uint8_t v___x_2714_; 
v___x_2712_ = 35;
v_got_2713_ = lean_byte_array_fget(v_array_2706_, v_idx_2707_);
v___x_2714_ = lean_uint8_dec_eq(v_got_2713_, v___x_2712_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; 
lean_dec_ref(v_array_2706_);
lean_del_object(v___x_2683_);
lean_dec_ref(v_config_2644_);
v___x_2715_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_2694_ = v_idx_2707_;
v___y_2695_ = v_res_2708_;
v_pos_2696_ = v_pos_2705_;
v_err_2697_ = v___x_2715_;
goto v___jp_2693_;
}
else
{
lean_object* v___x_2716_; lean_object* v___x_2718_; 
lean_dec_ref(v_pos_2705_);
v___x_2716_ = lean_nat_add(v_idx_2707_, v___x_2670_);
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 1, v___x_2716_);
lean_ctor_set(v___x_2683_, 0, v_array_2706_);
v___x_2718_ = v___x_2683_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_array_2706_);
lean_ctor_set(v_reuseFailAlloc_2726_, 1, v___x_2716_);
v___x_2718_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
lean_object* v___x_2719_; 
v___x_2719_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2644_, v___x_2718_);
lean_dec_ref(v_config_2644_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_pos_2720_; lean_object* v_res_2721_; lean_object* v___x_2722_; 
v_pos_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_pos_2720_);
v_res_2721_ = lean_ctor_get(v___x_2719_, 1);
lean_inc(v_res_2721_);
lean_dec_ref_known(v___x_2719_, 2);
v___x_2722_ = l_Std_Http_URI_EncodedFragment_decode(v_res_2721_);
lean_dec(v_res_2721_);
if (lean_obj_tag(v___x_2722_) == 1)
{
lean_dec(v_idx_2707_);
lean_del_object(v___x_2650_);
v___y_2686_ = v_res_2708_;
v_pos_2687_ = v_pos_2720_;
v_res_2688_ = v___x_2722_;
goto v___jp_2685_;
}
else
{
lean_object* v___x_2723_; 
lean_dec(v___x_2722_);
v___x_2723_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
v_idx_2694_ = v_idx_2707_;
v___y_2695_ = v_res_2708_;
v_pos_2696_ = v_pos_2720_;
v_err_2697_ = v___x_2723_;
goto v___jp_2693_;
}
}
else
{
lean_object* v_pos_2724_; lean_object* v_err_2725_; 
v_pos_2724_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_pos_2724_);
v_err_2725_ = lean_ctor_get(v___x_2719_, 1);
lean_inc(v_err_2725_);
lean_dec_ref_known(v___x_2719_, 2);
v_idx_2694_ = v_idx_2707_;
v___y_2695_ = v_res_2708_;
v_pos_2696_ = v_pos_2724_;
v_err_2697_ = v_err_2725_;
goto v___jp_2693_;
}
}
}
}
}
v___jp_2729_:
{
uint8_t v___x_2734_; 
v___x_2734_ = lean_nat_dec_eq(v_idx_2728_, v_idx_2732_);
lean_dec(v_idx_2728_);
if (v___x_2734_ == 0)
{
lean_object* v___x_2735_; 
lean_dec(v_idx_2732_);
lean_dec_ref(v_array_2731_);
lean_del_object(v___x_2683_);
lean_dec(v_snd_2681_);
lean_dec(v_fst_2680_);
lean_del_object(v___x_2678_);
lean_del_object(v___x_2650_);
lean_dec(v_res_2648_);
lean_dec_ref(v_config_2644_);
v___x_2735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2735_, 0, v_pos_2730_);
lean_ctor_set(v___x_2735_, 1, v_err_2733_);
return v___x_2735_;
}
else
{
lean_object* v___x_2736_; 
lean_dec(v_err_2733_);
v___x_2736_ = lean_box(0);
v_pos_2705_ = v_pos_2730_;
v_array_2706_ = v_array_2731_;
v_idx_2707_ = v_idx_2732_;
v_res_2708_ = v___x_2736_;
goto v___jp_2704_;
}
}
}
}
}
else
{
lean_object* v_pos_2766_; lean_object* v_err_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
lean_del_object(v___x_2650_);
lean_dec(v_res_2648_);
lean_dec_ref(v_config_2644_);
v_pos_2766_ = lean_ctor_get(v___x_2674_, 0);
v_err_2767_ = lean_ctor_get(v___x_2674_, 1);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2674_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_err_2767_);
lean_inc(v_pos_2766_);
lean_dec(v___x_2674_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_pos_2766_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_err_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
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
lean_object* v_pos_2780_; lean_object* v_err_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2788_; 
lean_dec_ref(v_config_2644_);
v_pos_2780_ = lean_ctor_get(v___x_2646_, 0);
v_err_2781_ = lean_ctor_get(v___x_2646_, 1);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2783_ = v___x_2646_;
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_err_2781_);
lean_inc(v_pos_2780_);
lean_dec(v___x_2646_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_pos_2780_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v_err_2781_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object* v_a_2792_){
_start:
{
lean_object* v_array_2793_; lean_object* v_idx_2794_; lean_object* v___x_2795_; uint8_t v___x_2796_; 
v_array_2793_ = lean_ctor_get(v_a_2792_, 0);
v_idx_2794_ = lean_ctor_get(v_a_2792_, 1);
v___x_2795_ = lean_byte_array_size(v_array_2793_);
v___x_2796_ = lean_nat_dec_lt(v_idx_2794_, v___x_2795_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2797_ = lean_box(0);
v___x_2798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_a_2792_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
return v___x_2798_;
}
else
{
uint8_t v___x_2799_; uint8_t v_got_2800_; uint8_t v___x_2801_; 
v___x_2799_ = 42;
v_got_2800_ = lean_byte_array_fget(v_array_2793_, v_idx_2794_);
v___x_2801_ = lean_uint8_dec_eq(v_got_2800_, v___x_2799_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1));
v___x_2803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2803_, 0, v_a_2792_);
lean_ctor_set(v___x_2803_, 1, v___x_2802_);
return v___x_2803_;
}
else
{
lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2814_; 
lean_inc(v_idx_2794_);
lean_inc_ref(v_array_2793_);
v_isSharedCheck_2814_ = !lean_is_exclusive(v_a_2792_);
if (v_isSharedCheck_2814_ == 0)
{
lean_object* v_unused_2815_; lean_object* v_unused_2816_; 
v_unused_2815_ = lean_ctor_get(v_a_2792_, 1);
lean_dec(v_unused_2815_);
v_unused_2816_ = lean_ctor_get(v_a_2792_, 0);
lean_dec(v_unused_2816_);
v___x_2805_ = v_a_2792_;
v_isShared_2806_ = v_isSharedCheck_2814_;
goto v_resetjp_2804_;
}
else
{
lean_dec(v_a_2792_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2814_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2810_; 
v___x_2807_ = lean_unsigned_to_nat(1u);
v___x_2808_ = lean_nat_add(v_idx_2794_, v___x_2807_);
lean_dec(v_idx_2794_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 1, v___x_2808_);
v___x_2810_ = v___x_2805_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_array_2793_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v___x_2808_);
v___x_2810_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = lean_box(3);
v___x_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2810_);
lean_ctor_set(v___x_2812_, 1, v___x_2811_);
return v___x_2812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object* v_config_2820_, lean_object* v_a_2821_){
_start:
{
lean_object* v_array_2825_; lean_object* v_idx_2826_; lean_object* v___x_2827_; uint8_t v___x_2828_; 
v_array_2825_ = lean_ctor_get(v_a_2821_, 0);
v_idx_2826_ = lean_ctor_get(v_a_2821_, 1);
v___x_2827_ = lean_byte_array_size(v_array_2825_);
v___x_2828_ = lean_nat_dec_lt(v_idx_2826_, v___x_2827_);
if (v___x_2828_ == 0)
{
lean_dec_ref(v_config_2820_);
goto v___jp_2822_;
}
else
{
uint8_t v___x_2829_; uint8_t v___x_2830_; uint8_t v___x_2831_; 
v___x_2829_ = lean_byte_array_fget(v_array_2825_, v_idx_2826_);
v___x_2830_ = 47;
v___x_2831_ = lean_uint8_dec_eq(v___x_2829_, v___x_2830_);
if (v___x_2831_ == 0)
{
lean_dec_ref(v_config_2820_);
goto v___jp_2822_;
}
else
{
lean_object* v___x_2832_; 
lean_inc_ref(v_a_2821_);
lean_inc_ref(v_config_2820_);
v___x_2832_ = l_Std_Http_URI_Parser_parsePath(v_config_2820_, v___x_2831_, v___x_2831_, v_a_2821_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v_pos_2833_; lean_object* v_res_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2879_; 
v_pos_2833_ = lean_ctor_get(v___x_2832_, 0);
v_res_2834_ = lean_ctor_get(v___x_2832_, 1);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2836_ = v___x_2832_;
v_isShared_2837_ = v_isSharedCheck_2879_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_res_2834_);
lean_inc(v_pos_2833_);
lean_dec(v___x_2832_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2879_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v_pos_2839_; lean_object* v_res_2840_; lean_object* v_array_2845_; lean_object* v_idx_2846_; lean_object* v_pos_2848_; lean_object* v_idx_2849_; lean_object* v_err_2850_; lean_object* v___x_2854_; uint8_t v___x_2855_; 
v_array_2845_ = lean_ctor_get(v_pos_2833_, 0);
v_idx_2846_ = lean_ctor_get(v_pos_2833_, 1);
lean_inc(v_idx_2846_);
v___x_2854_ = lean_byte_array_size(v_array_2845_);
v___x_2855_ = lean_nat_dec_lt(v_idx_2846_, v___x_2854_);
if (v___x_2855_ == 0)
{
lean_object* v___x_2856_; 
lean_dec_ref(v_config_2820_);
v___x_2856_ = lean_box(0);
lean_inc(v_idx_2846_);
v_pos_2848_ = v_pos_2833_;
v_idx_2849_ = v_idx_2846_;
v_err_2850_ = v___x_2856_;
goto v___jp_2847_;
}
else
{
uint8_t v___x_2857_; uint8_t v_got_2858_; uint8_t v___x_2859_; 
v___x_2857_ = 63;
v_got_2858_ = lean_byte_array_fget(v_array_2845_, v_idx_2846_);
v___x_2859_ = lean_uint8_dec_eq(v_got_2858_, v___x_2857_);
if (v___x_2859_ == 0)
{
lean_object* v___x_2860_; 
lean_dec_ref(v_config_2820_);
v___x_2860_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2846_);
v_pos_2848_ = v_pos_2833_;
v_idx_2849_ = v_idx_2846_;
v_err_2850_ = v___x_2860_;
goto v___jp_2847_;
}
else
{
lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2876_; 
lean_inc_ref(v_array_2845_);
v_isSharedCheck_2876_ = !lean_is_exclusive(v_pos_2833_);
if (v_isSharedCheck_2876_ == 0)
{
lean_object* v_unused_2877_; lean_object* v_unused_2878_; 
v_unused_2877_ = lean_ctor_get(v_pos_2833_, 1);
lean_dec(v_unused_2877_);
v_unused_2878_ = lean_ctor_get(v_pos_2833_, 0);
lean_dec(v_unused_2878_);
v___x_2862_ = v_pos_2833_;
v_isShared_2863_ = v_isSharedCheck_2876_;
goto v_resetjp_2861_;
}
else
{
lean_dec(v_pos_2833_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2876_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2867_; 
v___x_2864_ = lean_unsigned_to_nat(1u);
v___x_2865_ = lean_nat_add(v_idx_2846_, v___x_2864_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 1, v___x_2865_);
v___x_2867_ = v___x_2862_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_array_2845_);
lean_ctor_set(v_reuseFailAlloc_2875_, 1, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
lean_object* v___x_2868_; 
v___x_2868_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2820_, v___x_2867_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_pos_2869_; lean_object* v_res_2870_; lean_object* v___x_2871_; 
lean_dec(v_idx_2846_);
lean_dec_ref(v_a_2821_);
v_pos_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_pos_2869_);
v_res_2870_ = lean_ctor_get(v___x_2868_, 1);
lean_inc(v_res_2870_);
lean_dec_ref_known(v___x_2868_, 2);
v___x_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2871_, 0, v_res_2870_);
v_pos_2839_ = v_pos_2869_;
v_res_2840_ = v___x_2871_;
goto v___jp_2838_;
}
else
{
lean_object* v_pos_2872_; lean_object* v_err_2873_; lean_object* v_idx_2874_; 
v_pos_2872_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_pos_2872_);
v_err_2873_ = lean_ctor_get(v___x_2868_, 1);
lean_inc(v_err_2873_);
lean_dec_ref_known(v___x_2868_, 2);
v_idx_2874_ = lean_ctor_get(v_pos_2872_, 1);
lean_inc(v_idx_2874_);
v_pos_2848_ = v_pos_2872_;
v_idx_2849_ = v_idx_2874_;
v_err_2850_ = v_err_2873_;
goto v___jp_2847_;
}
}
}
}
}
v___jp_2838_:
{
lean_object* v___x_2841_; lean_object* v___x_2843_; 
v___x_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2841_, 0, v_res_2834_);
lean_ctor_set(v___x_2841_, 1, v_res_2840_);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 1, v___x_2841_);
lean_ctor_set(v___x_2836_, 0, v_pos_2839_);
v___x_2843_ = v___x_2836_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_pos_2839_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v___x_2841_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
v___jp_2847_:
{
uint8_t v___x_2851_; 
v___x_2851_ = lean_nat_dec_eq(v_idx_2846_, v_idx_2849_);
lean_dec(v_idx_2849_);
lean_dec(v_idx_2846_);
if (v___x_2851_ == 0)
{
lean_object* v___x_2852_; 
lean_dec_ref(v_pos_2848_);
lean_del_object(v___x_2836_);
lean_dec(v_res_2834_);
v___x_2852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2852_, 0, v_a_2821_);
lean_ctor_set(v___x_2852_, 1, v_err_2850_);
return v___x_2852_;
}
else
{
lean_object* v___x_2853_; 
lean_dec(v_err_2850_);
lean_dec_ref(v_a_2821_);
v___x_2853_ = lean_box(0);
v_pos_2839_ = v_pos_2848_;
v_res_2840_ = v___x_2853_;
goto v___jp_2838_;
}
}
}
}
else
{
lean_object* v_err_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
lean_dec_ref(v_config_2820_);
v_err_2880_ = lean_ctor_get(v___x_2832_, 1);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2887_ == 0)
{
lean_object* v_unused_2888_; 
v_unused_2888_ = lean_ctor_get(v___x_2832_, 0);
lean_dec(v_unused_2888_);
v___x_2882_ = v___x_2832_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_err_2880_);
lean_dec(v___x_2832_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 0, v_a_2821_);
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2821_);
lean_ctor_set(v_reuseFailAlloc_2886_, 1, v_err_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
}
v___jp_2822_:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1));
v___x_2824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2824_, 0, v_a_2821_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
return v___x_2824_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object* v_config_2889_, lean_object* v_scheme_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_array_2892_; lean_object* v_idx_2893_; lean_object* v___x_2894_; uint8_t v___x_2895_; 
v_array_2892_ = lean_ctor_get(v_a_2891_, 0);
v_idx_2893_ = lean_ctor_get(v_a_2891_, 1);
v___x_2894_ = lean_byte_array_size(v_array_2892_);
v___x_2895_ = lean_nat_dec_lt(v_idx_2893_, v___x_2894_);
if (v___x_2895_ == 0)
{
lean_object* v___x_2896_; lean_object* v___x_2897_; 
lean_dec_ref(v_scheme_2890_);
lean_dec_ref(v_config_2889_);
v___x_2896_ = lean_box(0);
v___x_2897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2897_, 0, v_a_2891_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
return v___x_2897_;
}
else
{
uint8_t v___x_2898_; uint8_t v_got_2899_; uint8_t v___x_2900_; 
v___x_2898_ = 58;
v_got_2899_ = lean_byte_array_fget(v_array_2892_, v_idx_2893_);
v___x_2900_ = lean_uint8_dec_eq(v_got_2899_, v___x_2898_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2901_; lean_object* v___x_2902_; 
lean_dec_ref(v_scheme_2890_);
lean_dec_ref(v_config_2889_);
v___x_2901_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_2902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2902_, 0, v_a_2891_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
return v___x_2902_;
}
else
{
lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2977_; 
lean_inc(v_idx_2893_);
lean_inc_ref(v_array_2892_);
v_isSharedCheck_2977_ = !lean_is_exclusive(v_a_2891_);
if (v_isSharedCheck_2977_ == 0)
{
lean_object* v_unused_2978_; lean_object* v_unused_2979_; 
v_unused_2978_ = lean_ctor_get(v_a_2891_, 1);
lean_dec(v_unused_2978_);
v_unused_2979_ = lean_ctor_get(v_a_2891_, 0);
lean_dec(v_unused_2979_);
v___x_2904_ = v_a_2891_;
v_isShared_2905_ = v_isSharedCheck_2977_;
goto v_resetjp_2903_;
}
else
{
lean_dec(v_a_2891_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2977_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; 
v___x_2906_ = lean_unsigned_to_nat(1u);
v___x_2907_ = lean_nat_add(v_idx_2893_, v___x_2906_);
lean_dec(v_idx_2893_);
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_2907_);
v___x_2909_ = v___x_2904_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_array_2892_);
lean_ctor_set(v_reuseFailAlloc_2976_, 1, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2910_; 
lean_inc_ref(v_config_2889_);
v___x_2910_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2889_, v___x_2909_);
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_object* v_res_2911_; lean_object* v_pos_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2966_; 
v_res_2911_ = lean_ctor_get(v___x_2910_, 1);
v_pos_2912_ = lean_ctor_get(v___x_2910_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2914_ = v___x_2910_;
v_isShared_2915_ = v_isSharedCheck_2966_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_res_2911_);
lean_inc(v_pos_2912_);
lean_dec(v___x_2910_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2966_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v_fst_2916_; lean_object* v_snd_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2965_; 
v_fst_2916_ = lean_ctor_get(v_res_2911_, 0);
v_snd_2917_ = lean_ctor_get(v_res_2911_, 1);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_res_2911_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2919_ = v_res_2911_;
v_isShared_2920_ = v_isSharedCheck_2965_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_snd_2917_);
lean_inc(v_fst_2916_);
lean_dec(v_res_2911_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2965_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v_pos_2922_; lean_object* v_res_2923_; lean_object* v_array_2930_; lean_object* v_idx_2931_; lean_object* v_pos_2933_; lean_object* v_idx_2934_; lean_object* v_err_2935_; lean_object* v___x_2941_; uint8_t v___x_2942_; 
v_array_2930_ = lean_ctor_get(v_pos_2912_, 0);
v_idx_2931_ = lean_ctor_get(v_pos_2912_, 1);
lean_inc(v_idx_2931_);
v___x_2941_ = lean_byte_array_size(v_array_2930_);
v___x_2942_ = lean_nat_dec_lt(v_idx_2931_, v___x_2941_);
if (v___x_2942_ == 0)
{
lean_object* v___x_2943_; 
lean_dec_ref(v_config_2889_);
v___x_2943_ = lean_box(0);
lean_inc(v_idx_2931_);
v_pos_2933_ = v_pos_2912_;
v_idx_2934_ = v_idx_2931_;
v_err_2935_ = v___x_2943_;
goto v___jp_2932_;
}
else
{
uint8_t v___x_2944_; uint8_t v_got_2945_; uint8_t v___x_2946_; 
v___x_2944_ = 63;
v_got_2945_ = lean_byte_array_fget(v_array_2930_, v_idx_2931_);
v___x_2946_ = lean_uint8_dec_eq(v_got_2945_, v___x_2944_);
if (v___x_2946_ == 0)
{
lean_object* v___x_2947_; 
lean_dec_ref(v_config_2889_);
v___x_2947_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2931_);
v_pos_2933_ = v_pos_2912_;
v_idx_2934_ = v_idx_2931_;
v_err_2935_ = v___x_2947_;
goto v___jp_2932_;
}
else
{
lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2962_; 
lean_inc_ref(v_array_2930_);
v_isSharedCheck_2962_ = !lean_is_exclusive(v_pos_2912_);
if (v_isSharedCheck_2962_ == 0)
{
lean_object* v_unused_2963_; lean_object* v_unused_2964_; 
v_unused_2963_ = lean_ctor_get(v_pos_2912_, 1);
lean_dec(v_unused_2963_);
v_unused_2964_ = lean_ctor_get(v_pos_2912_, 0);
lean_dec(v_unused_2964_);
v___x_2949_ = v_pos_2912_;
v_isShared_2950_ = v_isSharedCheck_2962_;
goto v_resetjp_2948_;
}
else
{
lean_dec(v_pos_2912_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2962_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2951_ = lean_nat_add(v_idx_2931_, v___x_2906_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___x_2951_);
v___x_2953_ = v___x_2949_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_array_2930_);
lean_ctor_set(v_reuseFailAlloc_2961_, 1, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
lean_object* v___x_2954_; 
v___x_2954_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2889_, v___x_2953_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_pos_2955_; lean_object* v_res_2956_; lean_object* v___x_2957_; 
lean_dec(v_idx_2931_);
lean_del_object(v___x_2919_);
v_pos_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_pos_2955_);
v_res_2956_ = lean_ctor_get(v___x_2954_, 1);
lean_inc(v_res_2956_);
lean_dec_ref_known(v___x_2954_, 2);
v___x_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2957_, 0, v_res_2956_);
v_pos_2922_ = v_pos_2955_;
v_res_2923_ = v___x_2957_;
goto v___jp_2921_;
}
else
{
lean_object* v_pos_2958_; lean_object* v_err_2959_; lean_object* v_idx_2960_; 
v_pos_2958_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_pos_2958_);
v_err_2959_ = lean_ctor_get(v___x_2954_, 1);
lean_inc(v_err_2959_);
lean_dec_ref_known(v___x_2954_, 2);
v_idx_2960_ = lean_ctor_get(v_pos_2958_, 1);
lean_inc(v_idx_2960_);
v_pos_2933_ = v_pos_2958_;
v_idx_2934_ = v_idx_2960_;
v_err_2935_ = v_err_2959_;
goto v___jp_2932_;
}
}
}
}
}
v___jp_2921_:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2924_ = lean_box(0);
v___x_2925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2925_, 0, v_scheme_2890_);
lean_ctor_set(v___x_2925_, 1, v_fst_2916_);
lean_ctor_set(v___x_2925_, 2, v_snd_2917_);
lean_ctor_set(v___x_2925_, 3, v_res_2923_);
lean_ctor_set(v___x_2925_, 4, v___x_2924_);
v___x_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 1, v___x_2926_);
lean_ctor_set(v___x_2914_, 0, v_pos_2922_);
v___x_2928_ = v___x_2914_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_pos_2922_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
v___jp_2932_:
{
uint8_t v___x_2936_; 
v___x_2936_ = lean_nat_dec_eq(v_idx_2931_, v_idx_2934_);
lean_dec(v_idx_2934_);
lean_dec(v_idx_2931_);
if (v___x_2936_ == 0)
{
lean_object* v___x_2938_; 
lean_dec(v_snd_2917_);
lean_dec(v_fst_2916_);
lean_del_object(v___x_2914_);
lean_dec_ref(v_scheme_2890_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 1);
lean_ctor_set(v___x_2919_, 1, v_err_2935_);
lean_ctor_set(v___x_2919_, 0, v_pos_2933_);
v___x_2938_ = v___x_2919_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_pos_2933_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v_err_2935_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
else
{
lean_object* v___x_2940_; 
lean_dec(v_err_2935_);
lean_del_object(v___x_2919_);
v___x_2940_ = lean_box(0);
v_pos_2922_ = v_pos_2933_;
v_res_2923_ = v___x_2940_;
goto v___jp_2921_;
}
}
}
}
}
else
{
lean_object* v_pos_2967_; lean_object* v_err_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
lean_dec_ref(v_scheme_2890_);
lean_dec_ref(v_config_2889_);
v_pos_2967_ = lean_ctor_get(v___x_2910_, 0);
v_err_2968_ = lean_ctor_get(v___x_2910_, 1);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2910_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_err_2968_);
lean_inc(v_pos_2967_);
lean_dec(v___x_2910_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_pos_2967_);
lean_ctor_set(v_reuseFailAlloc_2974_, 1, v_err_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object* v_config_2988_, lean_object* v_a_2989_){
_start:
{
lean_object* v___x_2993_; 
lean_inc_ref(v_a_2989_);
v___x_2993_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2988_, v_a_2989_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_pos_2994_; lean_object* v_res_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3091_; 
v_pos_2994_ = lean_ctor_get(v___x_2993_, 0);
v_res_2995_ = lean_ctor_get(v___x_2993_, 1);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_2997_ = v___x_2993_;
v_isShared_2998_ = v_isSharedCheck_3091_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_res_2995_);
lean_inc(v_pos_2994_);
lean_dec(v___x_2993_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3091_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v_pos_3002_; lean_object* v_res_3003_; lean_object* v___y_3011_; lean_object* v_idx_3012_; lean_object* v___y_3013_; lean_object* v_pos_3014_; lean_object* v_idx_3015_; lean_object* v_err_3016_; lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3085_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2));
v___x_3086_ = lean_string_dec_eq(v_res_2995_, v___x_3085_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; uint8_t v___x_3088_; 
v___x_3087_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3));
v___x_3088_ = lean_string_dec_eq(v_res_2995_, v___x_3087_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
lean_dec(v_pos_2994_);
lean_dec_ref(v_config_2988_);
v___x_3089_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5));
v___x_3090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3090_, 0, v_a_2989_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
return v___x_3090_;
}
else
{
goto v___jp_3020_;
}
}
else
{
goto v___jp_3020_;
}
v___jp_2999_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3008_; 
v___x_3004_ = lean_box(0);
v___x_3005_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3005_, 0, v_res_2995_);
lean_ctor_set(v___x_3005_, 1, v___y_3000_);
lean_ctor_set(v___x_3005_, 2, v___y_3001_);
lean_ctor_set(v___x_3005_, 3, v_res_3003_);
lean_ctor_set(v___x_3005_, 4, v___x_3004_);
v___x_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 1, v___x_3006_);
lean_ctor_set(v___x_2997_, 0, v_pos_3002_);
v___x_3008_ = v___x_2997_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_pos_3002_);
lean_ctor_set(v_reuseFailAlloc_3009_, 1, v___x_3006_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
v___jp_3010_:
{
uint8_t v___x_3017_; 
v___x_3017_ = lean_nat_dec_eq(v_idx_3012_, v_idx_3015_);
lean_dec(v_idx_3015_);
lean_dec(v_idx_3012_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; 
lean_dec_ref(v_pos_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3011_);
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
v___x_3018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3018_, 0, v_a_2989_);
lean_ctor_set(v___x_3018_, 1, v_err_3016_);
return v___x_3018_;
}
else
{
lean_object* v___x_3019_; 
lean_dec(v_err_3016_);
lean_dec_ref(v_a_2989_);
v___x_3019_ = lean_box(0);
v___y_3000_ = v___y_3011_;
v___y_3001_ = v___y_3013_;
v_pos_3002_ = v_pos_3014_;
v_res_3003_ = v___x_3019_;
goto v___jp_2999_;
}
}
v___jp_3020_:
{
lean_object* v_array_3021_; lean_object* v_idx_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3084_; 
v_array_3021_ = lean_ctor_get(v_pos_2994_, 0);
v_idx_3022_ = lean_ctor_get(v_pos_2994_, 1);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_pos_2994_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3024_ = v_pos_2994_;
v_isShared_3025_ = v_isSharedCheck_3084_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_idx_3022_);
lean_inc(v_array_3021_);
lean_dec(v_pos_2994_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3084_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3026_; uint8_t v___x_3027_; 
v___x_3026_ = lean_byte_array_size(v_array_3021_);
v___x_3027_ = lean_nat_dec_lt(v_idx_3022_, v___x_3026_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3029_; 
lean_del_object(v___x_3024_);
lean_dec(v_idx_3022_);
lean_dec_ref(v_array_3021_);
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
lean_dec_ref(v_config_2988_);
v___x_3028_ = lean_box(0);
v___x_3029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3029_, 0, v_a_2989_);
lean_ctor_set(v___x_3029_, 1, v___x_3028_);
return v___x_3029_;
}
else
{
uint8_t v___x_3030_; uint8_t v_got_3031_; uint8_t v___x_3032_; 
v___x_3030_ = 58;
v_got_3031_ = lean_byte_array_fget(v_array_3021_, v_idx_3022_);
v___x_3032_ = lean_uint8_dec_eq(v_got_3031_, v___x_3030_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
lean_del_object(v___x_3024_);
lean_dec(v_idx_3022_);
lean_dec_ref(v_array_3021_);
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
lean_dec_ref(v_config_2988_);
v___x_3033_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_3034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3034_, 0, v_a_2989_);
lean_ctor_set(v___x_3034_, 1, v___x_3033_);
return v___x_3034_;
}
else
{
lean_object* v___x_3035_; lean_object* v___x_3036_; uint8_t v___x_3037_; 
v___x_3035_ = lean_unsigned_to_nat(1u);
v___x_3036_ = lean_nat_add(v_idx_3022_, v___x_3035_);
lean_dec(v_idx_3022_);
v___x_3037_ = lean_nat_dec_lt(v___x_3036_, v___x_3026_);
if (v___x_3037_ == 0)
{
lean_dec(v___x_3036_);
lean_del_object(v___x_3024_);
lean_dec_ref(v_array_3021_);
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
lean_dec_ref(v_config_2988_);
goto v___jp_2990_;
}
else
{
uint8_t v___x_3038_; uint8_t v___x_3039_; uint8_t v___x_3040_; 
v___x_3038_ = lean_byte_array_fget(v_array_3021_, v___x_3036_);
v___x_3039_ = 47;
v___x_3040_ = lean_uint8_dec_eq(v___x_3038_, v___x_3039_);
if (v___x_3040_ == 0)
{
lean_dec(v___x_3036_);
lean_del_object(v___x_3024_);
lean_dec_ref(v_array_3021_);
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
lean_dec_ref(v_config_2988_);
goto v___jp_2990_;
}
else
{
lean_object* v___x_3042_; 
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 1, v___x_3036_);
v___x_3042_ = v___x_3024_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_array_3021_);
lean_ctor_set(v_reuseFailAlloc_3083_, 1, v___x_3036_);
v___x_3042_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
lean_object* v___x_3043_; 
lean_inc_ref(v_config_2988_);
v___x_3043_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2988_, v___x_3042_);
if (lean_obj_tag(v___x_3043_) == 0)
{
lean_object* v_res_3044_; lean_object* v_pos_3045_; lean_object* v_fst_3046_; lean_object* v_snd_3047_; lean_object* v_array_3048_; lean_object* v_idx_3049_; lean_object* v___x_3050_; uint8_t v___x_3051_; 
v_res_3044_ = lean_ctor_get(v___x_3043_, 1);
lean_inc(v_res_3044_);
v_pos_3045_ = lean_ctor_get(v___x_3043_, 0);
lean_inc(v_pos_3045_);
lean_dec_ref_known(v___x_3043_, 2);
v_fst_3046_ = lean_ctor_get(v_res_3044_, 0);
lean_inc(v_fst_3046_);
v_snd_3047_ = lean_ctor_get(v_res_3044_, 1);
lean_inc(v_snd_3047_);
lean_dec(v_res_3044_);
v_array_3048_ = lean_ctor_get(v_pos_3045_, 0);
v_idx_3049_ = lean_ctor_get(v_pos_3045_, 1);
lean_inc(v_idx_3049_);
v___x_3050_ = lean_byte_array_size(v_array_3048_);
v___x_3051_ = lean_nat_dec_lt(v_idx_3049_, v___x_3050_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; 
lean_dec_ref(v_config_2988_);
v___x_3052_ = lean_box(0);
lean_inc(v_idx_3049_);
v___y_3011_ = v_fst_3046_;
v_idx_3012_ = v_idx_3049_;
v___y_3013_ = v_snd_3047_;
v_pos_3014_ = v_pos_3045_;
v_idx_3015_ = v_idx_3049_;
v_err_3016_ = v___x_3052_;
goto v___jp_3010_;
}
else
{
uint8_t v___x_3053_; uint8_t v_got_3054_; uint8_t v___x_3055_; 
v___x_3053_ = 63;
v_got_3054_ = lean_byte_array_fget(v_array_3048_, v_idx_3049_);
v___x_3055_ = lean_uint8_dec_eq(v_got_3054_, v___x_3053_);
if (v___x_3055_ == 0)
{
lean_object* v___x_3056_; 
lean_dec_ref(v_config_2988_);
v___x_3056_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3049_);
v___y_3011_ = v_fst_3046_;
v_idx_3012_ = v_idx_3049_;
v___y_3013_ = v_snd_3047_;
v_pos_3014_ = v_pos_3045_;
v_idx_3015_ = v_idx_3049_;
v_err_3016_ = v___x_3056_;
goto v___jp_3010_;
}
else
{
lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3071_; 
lean_inc_ref(v_array_3048_);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_pos_3045_);
if (v_isSharedCheck_3071_ == 0)
{
lean_object* v_unused_3072_; lean_object* v_unused_3073_; 
v_unused_3072_ = lean_ctor_get(v_pos_3045_, 1);
lean_dec(v_unused_3072_);
v_unused_3073_ = lean_ctor_get(v_pos_3045_, 0);
lean_dec(v_unused_3073_);
v___x_3058_ = v_pos_3045_;
v_isShared_3059_ = v_isSharedCheck_3071_;
goto v_resetjp_3057_;
}
else
{
lean_dec(v_pos_3045_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3071_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3060_; lean_object* v___x_3062_; 
v___x_3060_ = lean_nat_add(v_idx_3049_, v___x_3035_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 1, v___x_3060_);
v___x_3062_ = v___x_3058_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_array_3048_);
lean_ctor_set(v_reuseFailAlloc_3070_, 1, v___x_3060_);
v___x_3062_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
lean_object* v___x_3063_; 
v___x_3063_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2988_, v___x_3062_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_pos_3064_; lean_object* v_res_3065_; lean_object* v___x_3066_; 
lean_dec(v_idx_3049_);
lean_dec_ref(v_a_2989_);
v_pos_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_pos_3064_);
v_res_3065_ = lean_ctor_get(v___x_3063_, 1);
lean_inc(v_res_3065_);
lean_dec_ref_known(v___x_3063_, 2);
v___x_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3066_, 0, v_res_3065_);
v___y_3000_ = v_fst_3046_;
v___y_3001_ = v_snd_3047_;
v_pos_3002_ = v_pos_3064_;
v_res_3003_ = v___x_3066_;
goto v___jp_2999_;
}
else
{
lean_object* v_pos_3067_; lean_object* v_err_3068_; lean_object* v_idx_3069_; 
v_pos_3067_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_pos_3067_);
v_err_3068_ = lean_ctor_get(v___x_3063_, 1);
lean_inc(v_err_3068_);
lean_dec_ref_known(v___x_3063_, 2);
v_idx_3069_ = lean_ctor_get(v_pos_3067_, 1);
lean_inc(v_idx_3069_);
v___y_3011_ = v_fst_3046_;
v_idx_3012_ = v_idx_3049_;
v___y_3013_ = v_snd_3047_;
v_pos_3014_ = v_pos_3067_;
v_idx_3015_ = v_idx_3069_;
v_err_3016_ = v_err_3068_;
goto v___jp_3010_;
}
}
}
}
}
}
else
{
lean_object* v_err_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
lean_del_object(v___x_2997_);
lean_dec(v_res_2995_);
lean_dec_ref(v_config_2988_);
v_err_3074_ = lean_ctor_get(v___x_3043_, 1);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3081_ == 0)
{
lean_object* v_unused_3082_; 
v_unused_3082_ = lean_ctor_get(v___x_3043_, 0);
lean_dec(v_unused_3082_);
v___x_3076_ = v___x_3043_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_err_3074_);
lean_dec(v___x_3043_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 0, v_a_2989_);
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_2989_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v_err_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
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
}
else
{
lean_object* v_err_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec_ref(v_config_2988_);
v_err_3092_ = lean_ctor_get(v___x_2993_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v___x_2993_, 0);
lean_dec(v_unused_3100_);
v___x_3094_ = v___x_2993_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_err_3092_);
lean_dec(v___x_2993_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
lean_ctor_set(v___x_3094_, 0, v_a_2989_);
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_2989_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_err_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
v___jp_2990_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1));
v___x_2992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2992_, 0, v_a_2989_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
return v___x_2992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object* v_config_3101_, lean_object* v_a_3102_){
_start:
{
lean_object* v___x_3103_; 
lean_inc_ref(v_a_3102_);
v___x_3103_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3101_, v_a_3102_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_pos_3104_; lean_object* v_res_3105_; lean_object* v___x_3106_; 
v_pos_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_pos_3104_);
v_res_3105_ = lean_ctor_get(v___x_3103_, 1);
lean_inc(v_res_3105_);
lean_dec_ref_known(v___x_3103_, 2);
v___x_3106_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(v_config_3101_, v_res_3105_, v_pos_3104_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_dec_ref(v_a_3102_);
return v___x_3106_;
}
else
{
lean_object* v_err_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
v_err_3107_ = lean_ctor_get(v___x_3106_, 1);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3114_ == 0)
{
lean_object* v_unused_3115_; 
v_unused_3115_ = lean_ctor_get(v___x_3106_, 0);
lean_dec(v_unused_3115_);
v___x_3109_ = v___x_3106_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_err_3107_);
lean_dec(v___x_3106_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 0, v_a_3102_);
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3102_);
lean_ctor_set(v_reuseFailAlloc_3113_, 1, v_err_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
else
{
lean_object* v_err_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
lean_dec_ref(v_config_3101_);
v_err_3116_ = lean_ctor_get(v___x_3103_, 1);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3123_ == 0)
{
lean_object* v_unused_3124_; 
v_unused_3124_ = lean_ctor_get(v___x_3103_, 0);
lean_dec(v_unused_3124_);
v___x_3118_ = v___x_3103_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_err_3116_);
lean_dec(v___x_3103_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 0, v_a_3102_);
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3102_);
lean_ctor_set(v_reuseFailAlloc_3122_, 1, v_err_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object* v_config_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v___x_3127_; 
lean_inc_ref(v_a_3126_);
v___x_3127_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_pos_3128_; lean_object* v_res_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3181_; 
v_pos_3128_ = lean_ctor_get(v___x_3127_, 0);
v_res_3129_ = lean_ctor_get(v___x_3127_, 1);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3131_ = v___x_3127_;
v_isShared_3132_ = v_isSharedCheck_3181_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_res_3129_);
lean_inc(v_pos_3128_);
lean_dec(v___x_3127_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3181_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v_array_3133_; lean_object* v_idx_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3180_; 
v_array_3133_ = lean_ctor_get(v_pos_3128_, 0);
v_idx_3134_ = lean_ctor_get(v_pos_3128_, 1);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_pos_3128_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3136_ = v_pos_3128_;
v_isShared_3137_ = v_isSharedCheck_3180_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_idx_3134_);
lean_inc(v_array_3133_);
lean_dec(v_pos_3128_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3180_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3138_; uint8_t v___x_3139_; 
v___x_3138_ = lean_byte_array_size(v_array_3133_);
v___x_3139_ = lean_nat_dec_lt(v_idx_3134_, v___x_3138_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; lean_object* v___x_3142_; 
lean_del_object(v___x_3136_);
lean_dec(v_idx_3134_);
lean_dec_ref(v_array_3133_);
lean_dec(v_res_3129_);
v___x_3140_ = lean_box(0);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 1);
lean_ctor_set(v___x_3131_, 1, v___x_3140_);
lean_ctor_set(v___x_3131_, 0, v_a_3126_);
v___x_3142_ = v___x_3131_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3126_);
lean_ctor_set(v_reuseFailAlloc_3143_, 1, v___x_3140_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
else
{
uint8_t v___x_3144_; uint8_t v_got_3145_; uint8_t v___x_3146_; 
v___x_3144_ = 58;
v_got_3145_ = lean_byte_array_fget(v_array_3133_, v_idx_3134_);
v___x_3146_ = lean_uint8_dec_eq(v_got_3145_, v___x_3144_);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
lean_del_object(v___x_3136_);
lean_dec(v_idx_3134_);
lean_dec_ref(v_array_3133_);
lean_dec(v_res_3129_);
v___x_3147_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 1);
lean_ctor_set(v___x_3131_, 1, v___x_3147_);
lean_ctor_set(v___x_3131_, 0, v_a_3126_);
v___x_3149_ = v___x_3131_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3126_);
lean_ctor_set(v_reuseFailAlloc_3150_, 1, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
else
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3154_; 
lean_del_object(v___x_3131_);
v___x_3151_ = lean_unsigned_to_nat(1u);
v___x_3152_ = lean_nat_add(v_idx_3134_, v___x_3151_);
lean_dec(v_idx_3134_);
if (v_isShared_3137_ == 0)
{
lean_ctor_set(v___x_3136_, 1, v___x_3152_);
v___x_3154_ = v___x_3136_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_array_3133_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
lean_object* v___x_3155_; 
v___x_3155_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3154_);
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_object* v_pos_3156_; lean_object* v_res_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3169_; 
lean_dec_ref(v_a_3126_);
v_pos_3156_ = lean_ctor_get(v___x_3155_, 0);
v_res_3157_ = lean_ctor_get(v___x_3155_, 1);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3159_ = v___x_3155_;
v_isShared_3160_ = v_isSharedCheck_3169_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_res_3157_);
lean_inc(v_pos_3156_);
lean_dec(v___x_3155_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3169_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; uint16_t v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3167_; 
v___x_3161_ = lean_box(0);
v___x_3162_ = lean_alloc_ctor(2, 0, 2);
v___x_3163_ = lean_unbox(v_res_3157_);
lean_dec(v_res_3157_);
lean_ctor_set_uint16(v___x_3162_, 0, v___x_3163_);
v___x_3164_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3161_);
lean_ctor_set(v___x_3164_, 1, v_res_3129_);
lean_ctor_set(v___x_3164_, 2, v___x_3162_);
v___x_3165_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3164_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 1, v___x_3165_);
v___x_3167_ = v___x_3159_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_pos_3156_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v___x_3165_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
else
{
lean_object* v_err_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3177_; 
lean_dec(v_res_3129_);
v_err_3170_ = lean_ctor_get(v___x_3155_, 1);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3177_ == 0)
{
lean_object* v_unused_3178_; 
v_unused_3178_ = lean_ctor_get(v___x_3155_, 0);
lean_dec(v_unused_3178_);
v___x_3172_ = v___x_3155_;
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_err_3170_);
lean_dec(v___x_3155_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3175_; 
if (v_isShared_3173_ == 0)
{
lean_ctor_set(v___x_3172_, 0, v_a_3126_);
v___x_3175_ = v___x_3172_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v_a_3126_);
lean_ctor_set(v_reuseFailAlloc_3176_, 1, v_err_3170_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
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
lean_object* v_err_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
v_err_3182_ = lean_ctor_get(v___x_3127_, 1);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3189_ == 0)
{
lean_object* v_unused_3190_; 
v_unused_3190_ = lean_ctor_get(v___x_3127_, 0);
lean_dec(v_unused_3190_);
v___x_3184_ = v___x_3127_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_err_3182_);
lean_dec(v___x_3127_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 0, v_a_3126_);
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3126_);
lean_ctor_set(v_reuseFailAlloc_3188_, 1, v_err_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object* v_config_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3191_, v_a_3192_);
lean_dec_ref(v_config_3191_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object* v_config_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v___x_3196_; 
lean_inc_ref(v_a_3195_);
v___x_3196_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(v_a_3195_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_dec_ref(v_a_3195_);
lean_dec_ref(v_config_3194_);
return v___x_3196_;
}
else
{
lean_object* v_pos_3197_; lean_object* v_idx_3198_; lean_object* v_idx_3199_; uint8_t v___x_3200_; 
v_pos_3197_ = lean_ctor_get(v___x_3196_, 0);
v_idx_3198_ = lean_ctor_get(v_a_3195_, 1);
lean_inc(v_idx_3198_);
lean_dec_ref(v_a_3195_);
v_idx_3199_ = lean_ctor_get(v_pos_3197_, 1);
v___x_3200_ = lean_nat_dec_eq(v_idx_3198_, v_idx_3199_);
lean_dec(v_idx_3198_);
if (v___x_3200_ == 0)
{
lean_dec_ref(v_config_3194_);
return v___x_3196_;
}
else
{
lean_object* v___x_3201_; 
lean_inc(v_idx_3199_);
lean_inc(v_pos_3197_);
lean_dec_ref_known(v___x_3196_, 2);
lean_inc_ref(v_config_3194_);
v___x_3201_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(v_config_3194_, v_pos_3197_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_dec(v_idx_3199_);
lean_dec_ref(v_config_3194_);
return v___x_3201_;
}
else
{
lean_object* v_pos_3202_; lean_object* v_idx_3203_; uint8_t v___x_3204_; 
v_pos_3202_ = lean_ctor_get(v___x_3201_, 0);
v_idx_3203_ = lean_ctor_get(v_pos_3202_, 1);
v___x_3204_ = lean_nat_dec_eq(v_idx_3199_, v_idx_3203_);
lean_dec(v_idx_3199_);
if (v___x_3204_ == 0)
{
lean_dec_ref(v_config_3194_);
return v___x_3201_;
}
else
{
lean_object* v___x_3205_; 
lean_inc(v_idx_3203_);
lean_inc(v_pos_3202_);
lean_dec_ref_known(v___x_3201_, 2);
lean_inc_ref(v_config_3194_);
v___x_3205_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(v_config_3194_, v_pos_3202_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_dec(v_idx_3203_);
lean_dec_ref(v_config_3194_);
return v___x_3205_;
}
else
{
lean_object* v_pos_3206_; lean_object* v_idx_3207_; uint8_t v___x_3208_; 
v_pos_3206_ = lean_ctor_get(v___x_3205_, 0);
v_idx_3207_ = lean_ctor_get(v_pos_3206_, 1);
v___x_3208_ = lean_nat_dec_eq(v_idx_3203_, v_idx_3207_);
lean_dec(v_idx_3203_);
if (v___x_3208_ == 0)
{
lean_dec_ref(v_config_3194_);
return v___x_3205_;
}
else
{
lean_object* v___x_3209_; 
lean_inc(v_idx_3207_);
lean_inc(v_pos_3206_);
lean_dec_ref_known(v___x_3205_, 2);
v___x_3209_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3194_, v_pos_3206_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_dec(v_idx_3207_);
lean_dec_ref(v_config_3194_);
return v___x_3209_;
}
else
{
lean_object* v_pos_3210_; lean_object* v_idx_3211_; uint8_t v___x_3212_; 
v_pos_3210_ = lean_ctor_get(v___x_3209_, 0);
v_idx_3211_ = lean_ctor_get(v_pos_3210_, 1);
v___x_3212_ = lean_nat_dec_eq(v_idx_3207_, v_idx_3211_);
lean_dec(v_idx_3207_);
if (v___x_3212_ == 0)
{
lean_dec_ref(v_config_3194_);
return v___x_3209_;
}
else
{
lean_object* v___x_3213_; 
lean_inc(v_pos_3210_);
lean_dec_ref_known(v___x_3209_, 2);
v___x_3213_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(v_config_3194_, v_pos_3210_);
return v___x_3213_;
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object* v_config_3217_, lean_object* v_a_3218_){
_start:
{
lean_object* v___x_3219_; 
v___x_3219_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_3217_, v_a_3218_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_pos_3220_; lean_object* v_res_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3234_; 
v_pos_3220_ = lean_ctor_get(v___x_3219_, 0);
v_res_3221_ = lean_ctor_get(v___x_3219_, 1);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3223_ = v___x_3219_;
v_isShared_3224_ = v_isSharedCheck_3234_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_res_3221_);
lean_inc(v_pos_3220_);
lean_dec(v___x_3219_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3234_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3225_; 
v___x_3225_ = l_Std_Http_URI_EncodedFragment_decode(v_res_3221_);
lean_dec(v_res_3221_);
if (lean_obj_tag(v___x_3225_) == 1)
{
lean_object* v_val_3226_; lean_object* v___x_3228_; 
v_val_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_val_3226_);
lean_dec_ref_known(v___x_3225_, 1);
if (v_isShared_3224_ == 0)
{
lean_ctor_set(v___x_3223_, 1, v_val_3226_);
v___x_3228_ = v___x_3223_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_pos_3220_);
lean_ctor_set(v_reuseFailAlloc_3229_, 1, v_val_3226_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
else
{
lean_object* v___x_3230_; lean_object* v___x_3232_; 
lean_dec(v___x_3225_);
v___x_3230_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1));
if (v_isShared_3224_ == 0)
{
lean_ctor_set_tag(v___x_3223_, 1);
lean_ctor_set(v___x_3223_, 1, v___x_3230_);
v___x_3232_ = v___x_3223_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_pos_3220_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
else
{
lean_object* v_pos_3235_; lean_object* v_err_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
v_pos_3235_ = lean_ctor_get(v___x_3219_, 0);
v_err_3236_ = lean_ctor_get(v___x_3219_, 1);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3219_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_err_3236_);
lean_inc(v_pos_3235_);
lean_dec(v___x_3219_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_pos_3235_);
lean_ctor_set(v_reuseFailAlloc_3242_, 1, v_err_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object* v_config_3244_, lean_object* v_a_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3244_, v_a_3245_);
lean_dec_ref(v_config_3244_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object* v_config_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v___x_3249_; 
lean_inc_ref(v_a_3248_);
v___x_3249_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3247_, v_a_3248_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_pos_3250_; lean_object* v_res_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3380_; 
v_pos_3250_ = lean_ctor_get(v___x_3249_, 0);
v_res_3251_ = lean_ctor_get(v___x_3249_, 1);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3253_ = v___x_3249_;
v_isShared_3254_ = v_isSharedCheck_3380_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_res_3251_);
lean_inc(v_pos_3250_);
lean_dec(v___x_3249_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3380_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v_array_3255_; lean_object* v_idx_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3379_; 
v_array_3255_ = lean_ctor_get(v_pos_3250_, 0);
v_idx_3256_ = lean_ctor_get(v_pos_3250_, 1);
v_isSharedCheck_3379_ = !lean_is_exclusive(v_pos_3250_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3258_ = v_pos_3250_;
v_isShared_3259_ = v_isSharedCheck_3379_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_idx_3256_);
lean_inc(v_array_3255_);
lean_dec(v_pos_3250_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3379_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3260_; uint8_t v___x_3261_; 
v___x_3260_ = lean_byte_array_size(v_array_3255_);
v___x_3261_ = lean_nat_dec_lt(v_idx_3256_, v___x_3260_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; lean_object* v___x_3264_; 
lean_del_object(v___x_3258_);
lean_dec(v_idx_3256_);
lean_dec_ref(v_array_3255_);
lean_dec(v_res_3251_);
lean_dec_ref(v_config_3247_);
v___x_3262_ = lean_box(0);
if (v_isShared_3254_ == 0)
{
lean_ctor_set_tag(v___x_3253_, 1);
lean_ctor_set(v___x_3253_, 1, v___x_3262_);
lean_ctor_set(v___x_3253_, 0, v_a_3248_);
v___x_3264_ = v___x_3253_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3248_);
lean_ctor_set(v_reuseFailAlloc_3265_, 1, v___x_3262_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
else
{
uint8_t v___x_3266_; uint8_t v_got_3267_; uint8_t v___x_3268_; 
v___x_3266_ = 58;
v_got_3267_ = lean_byte_array_fget(v_array_3255_, v_idx_3256_);
v___x_3268_ = lean_uint8_dec_eq(v_got_3267_, v___x_3266_);
if (v___x_3268_ == 0)
{
lean_object* v___x_3269_; lean_object* v___x_3271_; 
lean_del_object(v___x_3258_);
lean_dec(v_idx_3256_);
lean_dec_ref(v_array_3255_);
lean_dec(v_res_3251_);
lean_dec_ref(v_config_3247_);
v___x_3269_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3254_ == 0)
{
lean_ctor_set_tag(v___x_3253_, 1);
lean_ctor_set(v___x_3253_, 1, v___x_3269_);
lean_ctor_set(v___x_3253_, 0, v_a_3248_);
v___x_3271_ = v___x_3253_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3248_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v___x_3269_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
else
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3276_; 
v___x_3273_ = lean_unsigned_to_nat(1u);
v___x_3274_ = lean_nat_add(v_idx_3256_, v___x_3273_);
lean_dec(v_idx_3256_);
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 1, v___x_3274_);
v___x_3276_ = v___x_3258_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_array_3255_);
lean_ctor_set(v_reuseFailAlloc_3378_, 1, v___x_3274_);
v___x_3276_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3277_; 
lean_inc_ref(v_config_3247_);
v___x_3277_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_3247_, v___x_3276_);
if (lean_obj_tag(v___x_3277_) == 0)
{
lean_object* v_res_3278_; lean_object* v_pos_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3368_; 
v_res_3278_ = lean_ctor_get(v___x_3277_, 1);
v_pos_3279_ = lean_ctor_get(v___x_3277_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3277_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3281_ = v___x_3277_;
v_isShared_3282_ = v_isSharedCheck_3368_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_res_3278_);
lean_inc(v_pos_3279_);
lean_dec(v___x_3277_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3368_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v_fst_3283_; lean_object* v_snd_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3367_; 
v_fst_3283_ = lean_ctor_get(v_res_3278_, 0);
v_snd_3284_ = lean_ctor_get(v_res_3278_, 1);
v_isSharedCheck_3367_ = !lean_is_exclusive(v_res_3278_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3286_ = v_res_3278_;
v_isShared_3287_ = v_isSharedCheck_3367_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_snd_3284_);
lean_inc(v_fst_3283_);
lean_dec(v_res_3278_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3367_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___y_3289_; lean_object* v_pos_3290_; lean_object* v_res_3291_; lean_object* v___y_3298_; lean_object* v_idx_3299_; lean_object* v_pos_3300_; lean_object* v_err_3301_; lean_object* v_pos_3309_; lean_object* v_array_3310_; lean_object* v_idx_3311_; lean_object* v_res_3312_; lean_object* v_array_3330_; lean_object* v_idx_3331_; lean_object* v_pos_3333_; lean_object* v_array_3334_; lean_object* v_idx_3335_; lean_object* v_err_3336_; lean_object* v___x_3340_; uint8_t v___x_3341_; 
v_array_3330_ = lean_ctor_get(v_pos_3279_, 0);
lean_inc_ref(v_array_3330_);
v_idx_3331_ = lean_ctor_get(v_pos_3279_, 1);
lean_inc(v_idx_3331_);
v___x_3340_ = lean_byte_array_size(v_array_3330_);
v___x_3341_ = lean_nat_dec_lt(v_idx_3331_, v___x_3340_);
if (v___x_3341_ == 0)
{
lean_object* v___x_3342_; 
v___x_3342_ = lean_box(0);
lean_inc(v_idx_3331_);
v_pos_3333_ = v_pos_3279_;
v_array_3334_ = v_array_3330_;
v_idx_3335_ = v_idx_3331_;
v_err_3336_ = v___x_3342_;
goto v___jp_3332_;
}
else
{
uint8_t v___x_3343_; uint8_t v_got_3344_; uint8_t v___x_3345_; 
v___x_3343_ = 63;
v_got_3344_ = lean_byte_array_fget(v_array_3330_, v_idx_3331_);
v___x_3345_ = lean_uint8_dec_eq(v_got_3344_, v___x_3343_);
if (v___x_3345_ == 0)
{
lean_object* v___x_3346_; 
v___x_3346_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3331_);
v_pos_3333_ = v_pos_3279_;
v_array_3334_ = v_array_3330_;
v_idx_3335_ = v_idx_3331_;
v_err_3336_ = v___x_3346_;
goto v___jp_3332_;
}
else
{
lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3364_; 
v_isSharedCheck_3364_ = !lean_is_exclusive(v_pos_3279_);
if (v_isSharedCheck_3364_ == 0)
{
lean_object* v_unused_3365_; lean_object* v_unused_3366_; 
v_unused_3365_ = lean_ctor_get(v_pos_3279_, 1);
lean_dec(v_unused_3365_);
v_unused_3366_ = lean_ctor_get(v_pos_3279_, 0);
lean_dec(v_unused_3366_);
v___x_3348_ = v_pos_3279_;
v_isShared_3349_ = v_isSharedCheck_3364_;
goto v_resetjp_3347_;
}
else
{
lean_dec(v_pos_3279_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3364_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3350_; lean_object* v___x_3352_; 
v___x_3350_ = lean_nat_add(v_idx_3331_, v___x_3273_);
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 1, v___x_3350_);
v___x_3352_ = v___x_3348_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_array_3330_);
lean_ctor_set(v_reuseFailAlloc_3363_, 1, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; 
lean_inc_ref(v_config_3247_);
v___x_3353_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3247_, v___x_3352_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_pos_3354_; lean_object* v_res_3355_; lean_object* v_array_3356_; lean_object* v_idx_3357_; lean_object* v___x_3358_; 
lean_dec(v_idx_3331_);
v_pos_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_pos_3354_);
v_res_3355_ = lean_ctor_get(v___x_3353_, 1);
lean_inc(v_res_3355_);
lean_dec_ref_known(v___x_3353_, 2);
v_array_3356_ = lean_ctor_get(v_pos_3354_, 0);
lean_inc_ref(v_array_3356_);
v_idx_3357_ = lean_ctor_get(v_pos_3354_, 1);
lean_inc(v_idx_3357_);
v___x_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3358_, 0, v_res_3355_);
v_pos_3309_ = v_pos_3354_;
v_array_3310_ = v_array_3356_;
v_idx_3311_ = v_idx_3357_;
v_res_3312_ = v___x_3358_;
goto v___jp_3308_;
}
else
{
lean_object* v_pos_3359_; lean_object* v_err_3360_; lean_object* v_array_3361_; lean_object* v_idx_3362_; 
v_pos_3359_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_pos_3359_);
v_err_3360_ = lean_ctor_get(v___x_3353_, 1);
lean_inc(v_err_3360_);
lean_dec_ref_known(v___x_3353_, 2);
v_array_3361_ = lean_ctor_get(v_pos_3359_, 0);
lean_inc_ref(v_array_3361_);
v_idx_3362_ = lean_ctor_get(v_pos_3359_, 1);
lean_inc(v_idx_3362_);
v_pos_3333_ = v_pos_3359_;
v_array_3334_ = v_array_3361_;
v_idx_3335_ = v_idx_3362_;
v_err_3336_ = v_err_3360_;
goto v___jp_3332_;
}
}
}
}
}
v___jp_3288_:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3295_; 
v___x_3292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3292_, 0, v_res_3251_);
lean_ctor_set(v___x_3292_, 1, v_fst_3283_);
lean_ctor_set(v___x_3292_, 2, v_snd_3284_);
lean_ctor_set(v___x_3292_, 3, v___y_3289_);
lean_ctor_set(v___x_3292_, 4, v_res_3291_);
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 1, v___x_3293_);
lean_ctor_set(v___x_3281_, 0, v_pos_3290_);
v___x_3295_ = v___x_3281_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_pos_3290_);
lean_ctor_set(v_reuseFailAlloc_3296_, 1, v___x_3293_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
v___jp_3297_:
{
lean_object* v_idx_3302_; uint8_t v___x_3303_; 
v_idx_3302_ = lean_ctor_get(v_pos_3300_, 1);
v___x_3303_ = lean_nat_dec_eq(v_idx_3299_, v_idx_3302_);
lean_dec(v_idx_3299_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3305_; 
lean_dec_ref(v_pos_3300_);
lean_dec(v___y_3298_);
lean_dec(v_snd_3284_);
lean_dec(v_fst_3283_);
lean_del_object(v___x_3281_);
lean_dec(v_res_3251_);
if (v_isShared_3254_ == 0)
{
lean_ctor_set_tag(v___x_3253_, 1);
lean_ctor_set(v___x_3253_, 1, v_err_3301_);
lean_ctor_set(v___x_3253_, 0, v_a_3248_);
v___x_3305_ = v___x_3253_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3248_);
lean_ctor_set(v_reuseFailAlloc_3306_, 1, v_err_3301_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
else
{
lean_object* v___x_3307_; 
lean_dec(v_err_3301_);
lean_del_object(v___x_3253_);
lean_dec_ref(v_a_3248_);
v___x_3307_ = lean_box(0);
v___y_3289_ = v___y_3298_;
v_pos_3290_ = v_pos_3300_;
v_res_3291_ = v___x_3307_;
goto v___jp_3288_;
}
}
v___jp_3308_:
{
lean_object* v___x_3313_; uint8_t v___x_3314_; 
v___x_3313_ = lean_byte_array_size(v_array_3310_);
v___x_3314_ = lean_nat_dec_lt(v_idx_3311_, v___x_3313_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; 
lean_dec_ref(v_array_3310_);
lean_del_object(v___x_3286_);
lean_dec_ref(v_config_3247_);
v___x_3315_ = lean_box(0);
v___y_3298_ = v_res_3312_;
v_idx_3299_ = v_idx_3311_;
v_pos_3300_ = v_pos_3309_;
v_err_3301_ = v___x_3315_;
goto v___jp_3297_;
}
else
{
uint8_t v___x_3316_; uint8_t v_got_3317_; uint8_t v___x_3318_; 
v___x_3316_ = 35;
v_got_3317_ = lean_byte_array_fget(v_array_3310_, v_idx_3311_);
v___x_3318_ = lean_uint8_dec_eq(v_got_3317_, v___x_3316_);
if (v___x_3318_ == 0)
{
lean_object* v___x_3319_; 
lean_dec_ref(v_array_3310_);
lean_del_object(v___x_3286_);
lean_dec_ref(v_config_3247_);
v___x_3319_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3298_ = v_res_3312_;
v_idx_3299_ = v_idx_3311_;
v_pos_3300_ = v_pos_3309_;
v_err_3301_ = v___x_3319_;
goto v___jp_3297_;
}
else
{
lean_object* v___x_3320_; lean_object* v___x_3322_; 
lean_dec_ref(v_pos_3309_);
v___x_3320_ = lean_nat_add(v_idx_3311_, v___x_3273_);
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 1, v___x_3320_);
lean_ctor_set(v___x_3286_, 0, v_array_3310_);
v___x_3322_ = v___x_3286_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v_array_3310_);
lean_ctor_set(v_reuseFailAlloc_3329_, 1, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3323_; 
v___x_3323_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3247_, v___x_3322_);
lean_dec_ref(v_config_3247_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v_pos_3324_; lean_object* v_res_3325_; lean_object* v___x_3326_; 
lean_dec(v_idx_3311_);
lean_del_object(v___x_3253_);
lean_dec_ref(v_a_3248_);
v_pos_3324_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_pos_3324_);
v_res_3325_ = lean_ctor_get(v___x_3323_, 1);
lean_inc(v_res_3325_);
lean_dec_ref_known(v___x_3323_, 2);
v___x_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3326_, 0, v_res_3325_);
v___y_3289_ = v_res_3312_;
v_pos_3290_ = v_pos_3324_;
v_res_3291_ = v___x_3326_;
goto v___jp_3288_;
}
else
{
lean_object* v_pos_3327_; lean_object* v_err_3328_; 
v_pos_3327_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_pos_3327_);
v_err_3328_ = lean_ctor_get(v___x_3323_, 1);
lean_inc(v_err_3328_);
lean_dec_ref_known(v___x_3323_, 2);
v___y_3298_ = v_res_3312_;
v_idx_3299_ = v_idx_3311_;
v_pos_3300_ = v_pos_3327_;
v_err_3301_ = v_err_3328_;
goto v___jp_3297_;
}
}
}
}
}
v___jp_3332_:
{
uint8_t v___x_3337_; 
v___x_3337_ = lean_nat_dec_eq(v_idx_3331_, v_idx_3335_);
lean_dec(v_idx_3331_);
if (v___x_3337_ == 0)
{
lean_object* v___x_3338_; 
lean_dec(v_idx_3335_);
lean_dec_ref(v_array_3334_);
lean_dec_ref(v_pos_3333_);
lean_del_object(v___x_3286_);
lean_dec(v_snd_3284_);
lean_dec(v_fst_3283_);
lean_del_object(v___x_3281_);
lean_del_object(v___x_3253_);
lean_dec(v_res_3251_);
lean_dec_ref(v_config_3247_);
v___x_3338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3338_, 0, v_a_3248_);
lean_ctor_set(v___x_3338_, 1, v_err_3336_);
return v___x_3338_;
}
else
{
lean_object* v___x_3339_; 
lean_dec(v_err_3336_);
v___x_3339_ = lean_box(0);
v_pos_3309_ = v_pos_3333_;
v_array_3310_ = v_array_3334_;
v_idx_3311_ = v_idx_3335_;
v_res_3312_ = v___x_3339_;
goto v___jp_3308_;
}
}
}
}
}
else
{
lean_object* v_err_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
lean_del_object(v___x_3253_);
lean_dec(v_res_3251_);
lean_dec_ref(v_config_3247_);
v_err_3369_ = lean_ctor_get(v___x_3277_, 1);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3277_);
if (v_isSharedCheck_3376_ == 0)
{
lean_object* v_unused_3377_; 
v_unused_3377_ = lean_ctor_get(v___x_3277_, 0);
lean_dec(v_unused_3377_);
v___x_3371_ = v___x_3277_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_err_3369_);
lean_dec(v___x_3277_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
lean_ctor_set(v___x_3371_, 0, v_a_3248_);
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3248_);
lean_ctor_set(v_reuseFailAlloc_3375_, 1, v_err_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
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
lean_object* v_err_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec_ref(v_config_3247_);
v_err_3381_ = lean_ctor_get(v___x_3249_, 1);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3388_ == 0)
{
lean_object* v_unused_3389_; 
v_unused_3389_ = lean_ctor_get(v___x_3249_, 0);
lean_dec(v_unused_3389_);
v___x_3383_ = v___x_3249_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_err_3381_);
lean_dec(v___x_3249_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v_a_3248_);
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3248_);
lean_ctor_set(v_reuseFailAlloc_3387_, 1, v_err_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object* v_config_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v_utf8_3392_; lean_object* v___x_3393_; 
v_utf8_3392_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_3391_);
v___x_3393_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_3392_, v_a_3391_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_pos_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3512_; 
v_pos_3394_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3512_ == 0)
{
lean_object* v_unused_3513_; 
v_unused_3513_ = lean_ctor_get(v___x_3393_, 1);
lean_dec(v_unused_3513_);
v___x_3396_ = v___x_3393_;
v_isShared_3397_ = v_isSharedCheck_3512_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_pos_3394_);
lean_dec(v___x_3393_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3512_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3398_; 
v___x_3398_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_3390_, v_pos_3394_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_pos_3399_; lean_object* v_res_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3502_; 
v_pos_3399_ = lean_ctor_get(v___x_3398_, 0);
v_res_3400_ = lean_ctor_get(v___x_3398_, 1);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3402_ = v___x_3398_;
v_isShared_3403_ = v_isSharedCheck_3502_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_res_3400_);
lean_inc(v_pos_3399_);
lean_dec(v___x_3398_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3502_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
uint8_t v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = 1;
lean_inc_ref(v_config_3390_);
v___x_3405_ = l_Std_Http_URI_Parser_parsePath(v_config_3390_, v___x_3404_, v___x_3404_, v_pos_3399_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_pos_3406_; lean_object* v_res_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3492_; 
v_pos_3406_ = lean_ctor_get(v___x_3405_, 0);
v_res_3407_ = lean_ctor_get(v___x_3405_, 1);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3409_ = v___x_3405_;
v_isShared_3410_ = v_isSharedCheck_3492_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_res_3407_);
lean_inc(v_pos_3406_);
lean_dec(v___x_3405_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3492_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___y_3412_; lean_object* v_pos_3413_; lean_object* v_res_3414_; lean_object* v___y_3421_; lean_object* v_idx_3422_; lean_object* v_pos_3423_; lean_object* v_err_3424_; lean_object* v_pos_3432_; lean_object* v_array_3433_; lean_object* v_idx_3434_; lean_object* v_res_3435_; lean_object* v_array_3452_; lean_object* v_idx_3453_; lean_object* v_pos_3455_; lean_object* v_array_3456_; lean_object* v_idx_3457_; lean_object* v_err_3458_; lean_object* v___x_3464_; uint8_t v___x_3465_; 
v_array_3452_ = lean_ctor_get(v_pos_3406_, 0);
lean_inc_ref(v_array_3452_);
v_idx_3453_ = lean_ctor_get(v_pos_3406_, 1);
lean_inc(v_idx_3453_);
v___x_3464_ = lean_byte_array_size(v_array_3452_);
v___x_3465_ = lean_nat_dec_lt(v_idx_3453_, v___x_3464_);
if (v___x_3465_ == 0)
{
lean_object* v___x_3466_; 
v___x_3466_ = lean_box(0);
lean_inc(v_idx_3453_);
v_pos_3455_ = v_pos_3406_;
v_array_3456_ = v_array_3452_;
v_idx_3457_ = v_idx_3453_;
v_err_3458_ = v___x_3466_;
goto v___jp_3454_;
}
else
{
uint8_t v___x_3467_; uint8_t v_got_3468_; uint8_t v___x_3469_; 
v___x_3467_ = 63;
v_got_3468_ = lean_byte_array_fget(v_array_3452_, v_idx_3453_);
v___x_3469_ = lean_uint8_dec_eq(v_got_3468_, v___x_3467_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; 
v___x_3470_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3453_);
v_pos_3455_ = v_pos_3406_;
v_array_3456_ = v_array_3452_;
v_idx_3457_ = v_idx_3453_;
v_err_3458_ = v___x_3470_;
goto v___jp_3454_;
}
else
{
lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3489_; 
v_isSharedCheck_3489_ = !lean_is_exclusive(v_pos_3406_);
if (v_isSharedCheck_3489_ == 0)
{
lean_object* v_unused_3490_; lean_object* v_unused_3491_; 
v_unused_3490_ = lean_ctor_get(v_pos_3406_, 1);
lean_dec(v_unused_3490_);
v_unused_3491_ = lean_ctor_get(v_pos_3406_, 0);
lean_dec(v_unused_3491_);
v___x_3472_ = v_pos_3406_;
v_isShared_3473_ = v_isSharedCheck_3489_;
goto v_resetjp_3471_;
}
else
{
lean_dec(v_pos_3406_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3489_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3477_; 
v___x_3474_ = lean_unsigned_to_nat(1u);
v___x_3475_ = lean_nat_add(v_idx_3453_, v___x_3474_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 1, v___x_3475_);
v___x_3477_ = v___x_3472_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_array_3452_);
lean_ctor_set(v_reuseFailAlloc_3488_, 1, v___x_3475_);
v___x_3477_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
lean_object* v___x_3478_; 
lean_inc_ref(v_config_3390_);
v___x_3478_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3390_, v___x_3477_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_pos_3479_; lean_object* v_res_3480_; lean_object* v_array_3481_; lean_object* v_idx_3482_; lean_object* v___x_3483_; 
lean_dec(v_idx_3453_);
lean_del_object(v___x_3396_);
v_pos_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_pos_3479_);
v_res_3480_ = lean_ctor_get(v___x_3478_, 1);
lean_inc(v_res_3480_);
lean_dec_ref_known(v___x_3478_, 2);
v_array_3481_ = lean_ctor_get(v_pos_3479_, 0);
lean_inc_ref(v_array_3481_);
v_idx_3482_ = lean_ctor_get(v_pos_3479_, 1);
lean_inc(v_idx_3482_);
v___x_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3483_, 0, v_res_3480_);
v_pos_3432_ = v_pos_3479_;
v_array_3433_ = v_array_3481_;
v_idx_3434_ = v_idx_3482_;
v_res_3435_ = v___x_3483_;
goto v___jp_3431_;
}
else
{
lean_object* v_pos_3484_; lean_object* v_err_3485_; lean_object* v_array_3486_; lean_object* v_idx_3487_; 
v_pos_3484_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_pos_3484_);
v_err_3485_ = lean_ctor_get(v___x_3478_, 1);
lean_inc(v_err_3485_);
lean_dec_ref_known(v___x_3478_, 2);
v_array_3486_ = lean_ctor_get(v_pos_3484_, 0);
lean_inc_ref(v_array_3486_);
v_idx_3487_ = lean_ctor_get(v_pos_3484_, 1);
lean_inc(v_idx_3487_);
v_pos_3455_ = v_pos_3484_;
v_array_3456_ = v_array_3486_;
v_idx_3457_ = v_idx_3487_;
v_err_3458_ = v_err_3485_;
goto v___jp_3454_;
}
}
}
}
}
v___jp_3411_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3418_; 
v___x_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3415_, 0, v_res_3400_);
v___x_3416_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
lean_ctor_set(v___x_3416_, 1, v_res_3407_);
lean_ctor_set(v___x_3416_, 2, v___y_3412_);
lean_ctor_set(v___x_3416_, 3, v_res_3414_);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 1, v___x_3416_);
lean_ctor_set(v___x_3409_, 0, v_pos_3413_);
v___x_3418_ = v___x_3409_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_pos_3413_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v___x_3416_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
v___jp_3420_:
{
lean_object* v_idx_3425_; uint8_t v___x_3426_; 
v_idx_3425_ = lean_ctor_get(v_pos_3423_, 1);
v___x_3426_ = lean_nat_dec_eq(v_idx_3422_, v_idx_3425_);
lean_dec(v_idx_3422_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3428_; 
lean_dec_ref(v_pos_3423_);
lean_dec(v___y_3421_);
lean_del_object(v___x_3409_);
lean_dec(v_res_3407_);
lean_dec(v_res_3400_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set_tag(v___x_3402_, 1);
lean_ctor_set(v___x_3402_, 1, v_err_3424_);
lean_ctor_set(v___x_3402_, 0, v_a_3391_);
v___x_3428_ = v___x_3402_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3391_);
lean_ctor_set(v_reuseFailAlloc_3429_, 1, v_err_3424_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
else
{
lean_object* v___x_3430_; 
lean_dec(v_err_3424_);
lean_del_object(v___x_3402_);
lean_dec_ref(v_a_3391_);
v___x_3430_ = lean_box(0);
v___y_3412_ = v___y_3421_;
v_pos_3413_ = v_pos_3423_;
v_res_3414_ = v___x_3430_;
goto v___jp_3411_;
}
}
v___jp_3431_:
{
lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3436_ = lean_byte_array_size(v_array_3433_);
v___x_3437_ = lean_nat_dec_lt(v_idx_3434_, v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3438_; 
lean_dec_ref(v_array_3433_);
lean_dec_ref(v_config_3390_);
v___x_3438_ = lean_box(0);
v___y_3421_ = v_res_3435_;
v_idx_3422_ = v_idx_3434_;
v_pos_3423_ = v_pos_3432_;
v_err_3424_ = v___x_3438_;
goto v___jp_3420_;
}
else
{
uint8_t v___x_3439_; uint8_t v_got_3440_; uint8_t v___x_3441_; 
v___x_3439_ = 35;
v_got_3440_ = lean_byte_array_fget(v_array_3433_, v_idx_3434_);
v___x_3441_ = lean_uint8_dec_eq(v_got_3440_, v___x_3439_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; 
lean_dec_ref(v_array_3433_);
lean_dec_ref(v_config_3390_);
v___x_3442_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3421_ = v_res_3435_;
v_idx_3422_ = v_idx_3434_;
v_pos_3423_ = v_pos_3432_;
v_err_3424_ = v___x_3442_;
goto v___jp_3420_;
}
else
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; 
lean_dec_ref(v_pos_3432_);
v___x_3443_ = lean_unsigned_to_nat(1u);
v___x_3444_ = lean_nat_add(v_idx_3434_, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3445_, 0, v_array_3433_);
lean_ctor_set(v___x_3445_, 1, v___x_3444_);
v___x_3446_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3390_, v___x_3445_);
lean_dec_ref(v_config_3390_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_pos_3447_; lean_object* v_res_3448_; lean_object* v___x_3449_; 
lean_dec(v_idx_3434_);
lean_del_object(v___x_3402_);
lean_dec_ref(v_a_3391_);
v_pos_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_pos_3447_);
v_res_3448_ = lean_ctor_get(v___x_3446_, 1);
lean_inc(v_res_3448_);
lean_dec_ref_known(v___x_3446_, 2);
v___x_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3449_, 0, v_res_3448_);
v___y_3412_ = v_res_3435_;
v_pos_3413_ = v_pos_3447_;
v_res_3414_ = v___x_3449_;
goto v___jp_3411_;
}
else
{
lean_object* v_pos_3450_; lean_object* v_err_3451_; 
v_pos_3450_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_pos_3450_);
v_err_3451_ = lean_ctor_get(v___x_3446_, 1);
lean_inc(v_err_3451_);
lean_dec_ref_known(v___x_3446_, 2);
v___y_3421_ = v_res_3435_;
v_idx_3422_ = v_idx_3434_;
v_pos_3423_ = v_pos_3450_;
v_err_3424_ = v_err_3451_;
goto v___jp_3420_;
}
}
}
}
v___jp_3454_:
{
uint8_t v___x_3459_; 
v___x_3459_ = lean_nat_dec_eq(v_idx_3453_, v_idx_3457_);
lean_dec(v_idx_3453_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3461_; 
lean_dec(v_idx_3457_);
lean_dec_ref(v_array_3456_);
lean_dec_ref(v_pos_3455_);
lean_del_object(v___x_3409_);
lean_dec(v_res_3407_);
lean_del_object(v___x_3402_);
lean_dec(v_res_3400_);
lean_dec_ref(v_config_3390_);
if (v_isShared_3397_ == 0)
{
lean_ctor_set_tag(v___x_3396_, 1);
lean_ctor_set(v___x_3396_, 1, v_err_3458_);
lean_ctor_set(v___x_3396_, 0, v_a_3391_);
v___x_3461_ = v___x_3396_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3391_);
lean_ctor_set(v_reuseFailAlloc_3462_, 1, v_err_3458_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
else
{
lean_object* v___x_3463_; 
lean_dec(v_err_3458_);
lean_del_object(v___x_3396_);
v___x_3463_ = lean_box(0);
v_pos_3432_ = v_pos_3455_;
v_array_3433_ = v_array_3456_;
v_idx_3434_ = v_idx_3457_;
v_res_3435_ = v___x_3463_;
goto v___jp_3431_;
}
}
}
}
else
{
lean_object* v_err_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_del_object(v___x_3402_);
lean_dec(v_res_3400_);
lean_del_object(v___x_3396_);
lean_dec_ref(v_config_3390_);
v_err_3493_ = lean_ctor_get(v___x_3405_, 1);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3500_ == 0)
{
lean_object* v_unused_3501_; 
v_unused_3501_ = lean_ctor_get(v___x_3405_, 0);
lean_dec(v_unused_3501_);
v___x_3495_ = v___x_3405_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_err_3493_);
lean_dec(v___x_3405_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 0, v_a_3391_);
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3391_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v_err_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
else
{
lean_object* v_err_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
lean_del_object(v___x_3396_);
lean_dec_ref(v_config_3390_);
v_err_3503_ = lean_ctor_get(v___x_3398_, 1);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3510_ == 0)
{
lean_object* v_unused_3511_; 
v_unused_3511_ = lean_ctor_get(v___x_3398_, 0);
lean_dec(v_unused_3511_);
v___x_3505_ = v___x_3398_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_err_3503_);
lean_dec(v___x_3398_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v_a_3391_);
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3391_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v_err_3503_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
}
else
{
lean_object* v_err_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref(v_config_3390_);
v_err_3514_ = lean_ctor_get(v___x_3393_, 1);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3521_ == 0)
{
lean_object* v_unused_3522_; 
v_unused_3522_ = lean_ctor_get(v___x_3393_, 0);
lean_dec(v_unused_3522_);
v___x_3516_ = v___x_3393_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_err_3514_);
lean_dec(v___x_3393_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
lean_ctor_set(v___x_3516_, 0, v_a_3391_);
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3391_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v_err_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object* v_config_3523_, lean_object* v_a_3524_){
_start:
{
uint8_t v___x_3525_; uint8_t v___x_3526_; lean_object* v___x_3527_; 
v___x_3525_ = 0;
v___x_3526_ = 1;
lean_inc_ref(v_config_3523_);
v___x_3527_ = l_Std_Http_URI_Parser_parsePath(v_config_3523_, v___x_3525_, v___x_3526_, v_a_3524_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_pos_3528_; lean_object* v_res_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3610_; 
v_pos_3528_ = lean_ctor_get(v___x_3527_, 0);
v_res_3529_ = lean_ctor_get(v___x_3527_, 1);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3531_ = v___x_3527_;
v_isShared_3532_ = v_isSharedCheck_3610_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_res_3529_);
lean_inc(v_pos_3528_);
lean_dec(v___x_3527_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3610_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___y_3534_; lean_object* v_pos_3535_; lean_object* v_res_3536_; lean_object* v_idx_3543_; lean_object* v___y_3544_; lean_object* v_pos_3545_; lean_object* v_err_3546_; lean_object* v_pos_3552_; lean_object* v_array_3553_; lean_object* v_idx_3554_; lean_object* v_res_3555_; lean_object* v_array_3572_; lean_object* v_idx_3573_; lean_object* v_pos_3575_; lean_object* v_array_3576_; lean_object* v_idx_3577_; lean_object* v_err_3578_; lean_object* v___x_3582_; uint8_t v___x_3583_; 
v_array_3572_ = lean_ctor_get(v_pos_3528_, 0);
lean_inc_ref(v_array_3572_);
v_idx_3573_ = lean_ctor_get(v_pos_3528_, 1);
lean_inc(v_idx_3573_);
v___x_3582_ = lean_byte_array_size(v_array_3572_);
v___x_3583_ = lean_nat_dec_lt(v_idx_3573_, v___x_3582_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; 
v___x_3584_ = lean_box(0);
lean_inc(v_idx_3573_);
v_pos_3575_ = v_pos_3528_;
v_array_3576_ = v_array_3572_;
v_idx_3577_ = v_idx_3573_;
v_err_3578_ = v___x_3584_;
goto v___jp_3574_;
}
else
{
uint8_t v___x_3585_; uint8_t v_got_3586_; uint8_t v___x_3587_; 
v___x_3585_ = 63;
v_got_3586_ = lean_byte_array_fget(v_array_3572_, v_idx_3573_);
v___x_3587_ = lean_uint8_dec_eq(v_got_3586_, v___x_3585_);
if (v___x_3587_ == 0)
{
lean_object* v___x_3588_; 
v___x_3588_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3573_);
v_pos_3575_ = v_pos_3528_;
v_array_3576_ = v_array_3572_;
v_idx_3577_ = v_idx_3573_;
v_err_3578_ = v___x_3588_;
goto v___jp_3574_;
}
else
{
lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3607_; 
v_isSharedCheck_3607_ = !lean_is_exclusive(v_pos_3528_);
if (v_isSharedCheck_3607_ == 0)
{
lean_object* v_unused_3608_; lean_object* v_unused_3609_; 
v_unused_3608_ = lean_ctor_get(v_pos_3528_, 1);
lean_dec(v_unused_3608_);
v_unused_3609_ = lean_ctor_get(v_pos_3528_, 0);
lean_dec(v_unused_3609_);
v___x_3590_ = v_pos_3528_;
v_isShared_3591_ = v_isSharedCheck_3607_;
goto v_resetjp_3589_;
}
else
{
lean_dec(v_pos_3528_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3607_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3595_; 
v___x_3592_ = lean_unsigned_to_nat(1u);
v___x_3593_ = lean_nat_add(v_idx_3573_, v___x_3592_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 1, v___x_3593_);
v___x_3595_ = v___x_3590_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_array_3572_);
lean_ctor_set(v_reuseFailAlloc_3606_, 1, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3596_; 
lean_inc_ref(v_config_3523_);
v___x_3596_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3523_, v___x_3595_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_pos_3597_; lean_object* v_res_3598_; lean_object* v_array_3599_; lean_object* v_idx_3600_; lean_object* v___x_3601_; 
lean_dec(v_idx_3573_);
v_pos_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_pos_3597_);
v_res_3598_ = lean_ctor_get(v___x_3596_, 1);
lean_inc(v_res_3598_);
lean_dec_ref_known(v___x_3596_, 2);
v_array_3599_ = lean_ctor_get(v_pos_3597_, 0);
lean_inc_ref(v_array_3599_);
v_idx_3600_ = lean_ctor_get(v_pos_3597_, 1);
lean_inc(v_idx_3600_);
v___x_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3601_, 0, v_res_3598_);
v_pos_3552_ = v_pos_3597_;
v_array_3553_ = v_array_3599_;
v_idx_3554_ = v_idx_3600_;
v_res_3555_ = v___x_3601_;
goto v___jp_3551_;
}
else
{
lean_object* v_pos_3602_; lean_object* v_err_3603_; lean_object* v_array_3604_; lean_object* v_idx_3605_; 
v_pos_3602_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_pos_3602_);
v_err_3603_ = lean_ctor_get(v___x_3596_, 1);
lean_inc(v_err_3603_);
lean_dec_ref_known(v___x_3596_, 2);
v_array_3604_ = lean_ctor_get(v_pos_3602_, 0);
lean_inc_ref(v_array_3604_);
v_idx_3605_ = lean_ctor_get(v_pos_3602_, 1);
lean_inc(v_idx_3605_);
v_pos_3575_ = v_pos_3602_;
v_array_3576_ = v_array_3604_;
v_idx_3577_ = v_idx_3605_;
v_err_3578_ = v_err_3603_;
goto v___jp_3574_;
}
}
}
}
}
v___jp_3533_:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3537_ = lean_box(0);
v___x_3538_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3537_);
lean_ctor_set(v___x_3538_, 1, v_res_3529_);
lean_ctor_set(v___x_3538_, 2, v___y_3534_);
lean_ctor_set(v___x_3538_, 3, v_res_3536_);
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 1, v___x_3538_);
lean_ctor_set(v___x_3531_, 0, v_pos_3535_);
v___x_3540_ = v___x_3531_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_pos_3535_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
v___jp_3542_:
{
lean_object* v_idx_3547_; uint8_t v___x_3548_; 
v_idx_3547_ = lean_ctor_get(v_pos_3545_, 1);
v___x_3548_ = lean_nat_dec_eq(v_idx_3543_, v_idx_3547_);
lean_dec(v_idx_3543_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; 
lean_dec(v___y_3544_);
lean_del_object(v___x_3531_);
lean_dec(v_res_3529_);
v___x_3549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3549_, 0, v_pos_3545_);
lean_ctor_set(v___x_3549_, 1, v_err_3546_);
return v___x_3549_;
}
else
{
lean_object* v___x_3550_; 
lean_dec(v_err_3546_);
v___x_3550_ = lean_box(0);
v___y_3534_ = v___y_3544_;
v_pos_3535_ = v_pos_3545_;
v_res_3536_ = v___x_3550_;
goto v___jp_3533_;
}
}
v___jp_3551_:
{
lean_object* v___x_3556_; uint8_t v___x_3557_; 
v___x_3556_ = lean_byte_array_size(v_array_3553_);
v___x_3557_ = lean_nat_dec_lt(v_idx_3554_, v___x_3556_);
if (v___x_3557_ == 0)
{
lean_object* v___x_3558_; 
lean_dec_ref(v_array_3553_);
lean_dec_ref(v_config_3523_);
v___x_3558_ = lean_box(0);
v_idx_3543_ = v_idx_3554_;
v___y_3544_ = v_res_3555_;
v_pos_3545_ = v_pos_3552_;
v_err_3546_ = v___x_3558_;
goto v___jp_3542_;
}
else
{
uint8_t v___x_3559_; uint8_t v_got_3560_; uint8_t v___x_3561_; 
v___x_3559_ = 35;
v_got_3560_ = lean_byte_array_fget(v_array_3553_, v_idx_3554_);
v___x_3561_ = lean_uint8_dec_eq(v_got_3560_, v___x_3559_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; 
lean_dec_ref(v_array_3553_);
lean_dec_ref(v_config_3523_);
v___x_3562_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_3543_ = v_idx_3554_;
v___y_3544_ = v_res_3555_;
v_pos_3545_ = v_pos_3552_;
v_err_3546_ = v___x_3562_;
goto v___jp_3542_;
}
else
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
lean_dec_ref(v_pos_3552_);
v___x_3563_ = lean_unsigned_to_nat(1u);
v___x_3564_ = lean_nat_add(v_idx_3554_, v___x_3563_);
v___x_3565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3565_, 0, v_array_3553_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
v___x_3566_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3523_, v___x_3565_);
lean_dec_ref(v_config_3523_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_pos_3567_; lean_object* v_res_3568_; lean_object* v___x_3569_; 
lean_dec(v_idx_3554_);
v_pos_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_pos_3567_);
v_res_3568_ = lean_ctor_get(v___x_3566_, 1);
lean_inc(v_res_3568_);
lean_dec_ref_known(v___x_3566_, 2);
v___x_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3569_, 0, v_res_3568_);
v___y_3534_ = v_res_3555_;
v_pos_3535_ = v_pos_3567_;
v_res_3536_ = v___x_3569_;
goto v___jp_3533_;
}
else
{
lean_object* v_pos_3570_; lean_object* v_err_3571_; 
v_pos_3570_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_pos_3570_);
v_err_3571_ = lean_ctor_get(v___x_3566_, 1);
lean_inc(v_err_3571_);
lean_dec_ref_known(v___x_3566_, 2);
v_idx_3543_ = v_idx_3554_;
v___y_3544_ = v_res_3555_;
v_pos_3545_ = v_pos_3570_;
v_err_3546_ = v_err_3571_;
goto v___jp_3542_;
}
}
}
}
v___jp_3574_:
{
uint8_t v___x_3579_; 
v___x_3579_ = lean_nat_dec_eq(v_idx_3573_, v_idx_3577_);
lean_dec(v_idx_3573_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3580_; 
lean_dec(v_idx_3577_);
lean_dec_ref(v_array_3576_);
lean_del_object(v___x_3531_);
lean_dec(v_res_3529_);
lean_dec_ref(v_config_3523_);
v___x_3580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3580_, 0, v_pos_3575_);
lean_ctor_set(v___x_3580_, 1, v_err_3578_);
return v___x_3580_;
}
else
{
lean_object* v___x_3581_; 
lean_dec(v_err_3578_);
v___x_3581_ = lean_box(0);
v_pos_3552_ = v_pos_3575_;
v_array_3553_ = v_array_3576_;
v_idx_3554_ = v_idx_3577_;
v_res_3555_ = v___x_3581_;
goto v___jp_3551_;
}
}
}
}
else
{
lean_object* v_pos_3611_; lean_object* v_err_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
lean_dec_ref(v_config_3523_);
v_pos_3611_ = lean_ctor_get(v___x_3527_, 0);
v_err_3612_ = lean_ctor_get(v___x_3527_, 1);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3527_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_err_3612_);
lean_inc(v_pos_3611_);
lean_dec(v___x_3527_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_pos_3611_);
lean_ctor_set(v_reuseFailAlloc_3618_, 1, v_err_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(lean_object* v_config_3620_, lean_object* v_a_3621_){
_start:
{
lean_object* v_pos_3623_; lean_object* v_res_3624_; lean_object* v___x_3627_; 
lean_inc_ref(v_a_3621_);
lean_inc_ref(v_config_3620_);
v___x_3627_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(v_config_3620_, v_a_3621_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_pos_3628_; lean_object* v_res_3629_; 
lean_dec_ref(v_a_3621_);
lean_dec_ref(v_config_3620_);
v_pos_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_pos_3628_);
v_res_3629_ = lean_ctor_get(v___x_3627_, 1);
lean_inc(v_res_3629_);
lean_dec_ref_known(v___x_3627_, 2);
v_pos_3623_ = v_pos_3628_;
v_res_3624_ = v_res_3629_;
goto v___jp_3622_;
}
else
{
lean_object* v_pos_3630_; lean_object* v_err_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3653_; 
v_pos_3630_ = lean_ctor_get(v___x_3627_, 0);
v_err_3631_ = lean_ctor_get(v___x_3627_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3633_ = v___x_3627_;
v_isShared_3634_ = v_isSharedCheck_3653_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_err_3631_);
lean_inc(v_pos_3630_);
lean_dec(v___x_3627_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3653_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v_idx_3635_; lean_object* v_idx_3636_; uint8_t v___x_3637_; 
v_idx_3635_ = lean_ctor_get(v_a_3621_, 1);
lean_inc(v_idx_3635_);
lean_dec_ref(v_a_3621_);
v_idx_3636_ = lean_ctor_get(v_pos_3630_, 1);
v___x_3637_ = lean_nat_dec_eq(v_idx_3635_, v_idx_3636_);
lean_dec(v_idx_3635_);
if (v___x_3637_ == 0)
{
lean_object* v___x_3639_; 
lean_dec_ref(v_config_3620_);
if (v_isShared_3634_ == 0)
{
v___x_3639_ = v___x_3633_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_pos_3630_);
lean_ctor_set(v_reuseFailAlloc_3640_, 1, v_err_3631_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
else
{
lean_object* v___x_3641_; 
lean_del_object(v___x_3633_);
lean_dec(v_err_3631_);
v___x_3641_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(v_config_3620_, v_pos_3630_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_pos_3642_; lean_object* v_res_3643_; 
v_pos_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_pos_3642_);
v_res_3643_ = lean_ctor_get(v___x_3641_, 1);
lean_inc(v_res_3643_);
lean_dec_ref_known(v___x_3641_, 2);
v_pos_3623_ = v_pos_3642_;
v_res_3624_ = v_res_3643_;
goto v___jp_3622_;
}
else
{
lean_object* v_pos_3644_; lean_object* v_err_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
v_pos_3644_ = lean_ctor_get(v___x_3641_, 0);
v_err_3645_ = lean_ctor_get(v___x_3641_, 1);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3641_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_err_3645_);
lean_inc(v_pos_3644_);
lean_dec(v___x_3641_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_pos_3644_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v_err_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
}
}
v___jp_3622_:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; 
v___x_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3625_, 0, v_res_3624_);
v___x_3626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3626_, 0, v_pos_3623_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
return v___x_3626_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object* v_config_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v___x_3656_; 
lean_inc_ref(v_a_3655_);
lean_inc_ref(v_config_3654_);
v___x_3656_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(v_config_3654_, v_a_3655_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_dec_ref(v_a_3655_);
lean_dec_ref(v_config_3654_);
return v___x_3656_;
}
else
{
lean_object* v_err_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3667_; 
v_err_3657_ = lean_ctor_get(v___x_3656_, 1);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3667_ == 0)
{
lean_object* v_unused_3668_; 
v_unused_3668_ = lean_ctor_get(v___x_3656_, 0);
lean_dec(v_unused_3668_);
v___x_3659_ = v___x_3656_;
v_isShared_3660_ = v_isSharedCheck_3667_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_err_3657_);
lean_dec(v___x_3656_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3667_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v_idx_3661_; uint8_t v___x_3662_; 
v_idx_3661_ = lean_ctor_get(v_a_3655_, 1);
v___x_3662_ = lean_nat_dec_eq(v_idx_3661_, v_idx_3661_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3664_; 
lean_dec_ref(v_config_3654_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 0, v_a_3655_);
v___x_3664_ = v___x_3659_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3655_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v_err_3657_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
else
{
lean_object* v___x_3666_; 
lean_del_object(v___x_3659_);
lean_dec(v_err_3657_);
v___x_3666_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(v_config_3654_, v_a_3655_);
return v___x_3666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object* v_config_3675_, lean_object* v_a_3676_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3675_, v_a_3676_);
if (lean_obj_tag(v___x_3677_) == 0)
{
lean_object* v_pos_3678_; lean_object* v_res_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3748_; 
v_pos_3678_ = lean_ctor_get(v___x_3677_, 0);
v_res_3679_ = lean_ctor_get(v___x_3677_, 1);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3681_ = v___x_3677_;
v_isShared_3682_ = v_isSharedCheck_3748_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_res_3679_);
lean_inc(v_pos_3678_);
lean_dec(v___x_3677_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3748_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v_port_3684_; lean_object* v___y_3685_; lean_object* v_pos_3699_; lean_object* v_pos_3702_; lean_object* v_array_3703_; lean_object* v_idx_3704_; lean_object* v_array_3710_; lean_object* v_idx_3711_; lean_object* v___x_3712_; uint8_t v___x_3713_; 
v_array_3710_ = lean_ctor_get(v_pos_3678_, 0);
v_idx_3711_ = lean_ctor_get(v_pos_3678_, 1);
v___x_3712_ = lean_byte_array_size(v_array_3710_);
v___x_3713_ = lean_nat_dec_lt(v_idx_3711_, v___x_3712_);
if (v___x_3713_ == 0)
{
v_pos_3699_ = v_pos_3678_;
goto v___jp_3698_;
}
else
{
uint8_t v___x_3714_; uint8_t v___x_3715_; uint8_t v___x_3716_; 
v___x_3714_ = lean_byte_array_fget(v_array_3710_, v_idx_3711_);
v___x_3715_ = 58;
v___x_3716_ = lean_uint8_dec_eq(v___x_3714_, v___x_3715_);
if (v___x_3716_ == 0)
{
v_pos_3699_ = v_pos_3678_;
goto v___jp_3698_;
}
else
{
lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3745_; 
lean_inc(v_idx_3711_);
lean_inc_ref(v_array_3710_);
v_isSharedCheck_3745_ = !lean_is_exclusive(v_pos_3678_);
if (v_isSharedCheck_3745_ == 0)
{
lean_object* v_unused_3746_; lean_object* v_unused_3747_; 
v_unused_3746_ = lean_ctor_get(v_pos_3678_, 1);
lean_dec(v_unused_3746_);
v_unused_3747_ = lean_ctor_get(v_pos_3678_, 0);
lean_dec(v_unused_3747_);
v___x_3718_ = v_pos_3678_;
v_isShared_3719_ = v_isSharedCheck_3745_;
goto v_resetjp_3717_;
}
else
{
lean_dec(v_pos_3678_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3745_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3723_; 
v___x_3720_ = lean_unsigned_to_nat(1u);
v___x_3721_ = lean_nat_add(v_idx_3711_, v___x_3720_);
lean_dec(v_idx_3711_);
lean_inc(v___x_3721_);
lean_inc_ref(v_array_3710_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 1, v___x_3721_);
v___x_3723_ = v___x_3718_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v_array_3710_);
lean_ctor_set(v_reuseFailAlloc_3744_, 1, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
uint8_t v___x_3724_; 
v___x_3724_ = lean_nat_dec_lt(v___x_3721_, v___x_3712_);
if (v___x_3724_ == 0)
{
v_pos_3702_ = v___x_3723_;
v_array_3703_ = v_array_3710_;
v_idx_3704_ = v___x_3721_;
goto v___jp_3701_;
}
else
{
uint8_t v___x_3725_; uint8_t v___x_3726_; uint8_t v___x_3727_; 
v___x_3725_ = lean_byte_array_fget(v_array_3710_, v___x_3721_);
v___x_3726_ = 48;
v___x_3727_ = lean_uint8_dec_le(v___x_3726_, v___x_3725_);
if (v___x_3727_ == 0)
{
v_pos_3702_ = v___x_3723_;
v_array_3703_ = v_array_3710_;
v_idx_3704_ = v___x_3721_;
goto v___jp_3701_;
}
else
{
uint8_t v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = 57;
v___x_3729_ = lean_uint8_dec_le(v___x_3725_, v___x_3728_);
if (v___x_3729_ == 0)
{
v_pos_3702_ = v___x_3723_;
v_array_3703_ = v_array_3710_;
v_idx_3704_ = v___x_3721_;
goto v___jp_3701_;
}
else
{
lean_object* v___x_3730_; 
lean_dec(v___x_3721_);
lean_dec_ref(v_array_3710_);
v___x_3730_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3723_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v_pos_3731_; lean_object* v_res_3732_; lean_object* v___x_3733_; uint16_t v___x_3734_; 
v_pos_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc(v_pos_3731_);
v_res_3732_ = lean_ctor_get(v___x_3730_, 1);
lean_inc(v_res_3732_);
lean_dec_ref_known(v___x_3730_, 2);
v___x_3733_ = lean_alloc_ctor(2, 0, 2);
v___x_3734_ = lean_unbox(v_res_3732_);
lean_dec(v_res_3732_);
lean_ctor_set_uint16(v___x_3733_, 0, v___x_3734_);
v_port_3684_ = v___x_3733_;
v___y_3685_ = v_pos_3731_;
goto v___jp_3683_;
}
else
{
lean_object* v_pos_3735_; lean_object* v_err_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
lean_del_object(v___x_3681_);
lean_dec(v_res_3679_);
v_pos_3735_ = lean_ctor_get(v___x_3730_, 0);
v_err_3736_ = lean_ctor_get(v___x_3730_, 1);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3738_ = v___x_3730_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_err_3736_);
lean_inc(v_pos_3735_);
lean_dec(v___x_3730_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_pos_3735_);
lean_ctor_set(v_reuseFailAlloc_3742_, 1, v_err_3736_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
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
v___jp_3683_:
{
lean_object* v_array_3686_; lean_object* v_idx_3687_; lean_object* v___x_3688_; uint8_t v___x_3689_; 
v_array_3686_ = lean_ctor_get(v___y_3685_, 0);
v_idx_3687_ = lean_ctor_get(v___y_3685_, 1);
v___x_3688_ = lean_byte_array_size(v_array_3686_);
v___x_3689_ = lean_nat_dec_lt(v_idx_3687_, v___x_3688_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3690_, 0, v_res_3679_);
lean_ctor_set(v___x_3690_, 1, v_port_3684_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 1, v___x_3690_);
lean_ctor_set(v___x_3681_, 0, v___y_3685_);
v___x_3692_ = v___x_3681_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___y_3685_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
else
{
lean_object* v___x_3694_; lean_object* v___x_3696_; 
lean_dec(v_port_3684_);
lean_dec(v_res_3679_);
v___x_3694_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__1));
if (v_isShared_3682_ == 0)
{
lean_ctor_set_tag(v___x_3681_, 1);
lean_ctor_set(v___x_3681_, 1, v___x_3694_);
lean_ctor_set(v___x_3681_, 0, v___y_3685_);
v___x_3696_ = v___x_3681_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v___y_3685_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v___x_3694_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
v___jp_3698_:
{
lean_object* v___x_3700_; 
v___x_3700_ = lean_box(0);
v_port_3684_ = v___x_3700_;
v___y_3685_ = v_pos_3699_;
goto v___jp_3683_;
}
v___jp_3701_:
{
lean_object* v___x_3705_; uint8_t v___x_3706_; 
v___x_3705_ = lean_byte_array_size(v_array_3703_);
lean_dec_ref(v_array_3703_);
v___x_3706_ = lean_nat_dec_lt(v_idx_3704_, v___x_3705_);
lean_dec(v_idx_3704_);
if (v___x_3706_ == 0)
{
lean_object* v___x_3707_; 
v___x_3707_ = lean_box(1);
v_port_3684_ = v___x_3707_;
v___y_3685_ = v_pos_3702_;
goto v___jp_3683_;
}
else
{
lean_object* v___x_3708_; lean_object* v___x_3709_; 
lean_del_object(v___x_3681_);
lean_dec(v_res_3679_);
v___x_3708_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__3));
v___x_3709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3709_, 0, v_pos_3702_);
lean_ctor_set(v___x_3709_, 1, v___x_3708_);
return v___x_3709_;
}
}
}
}
else
{
lean_object* v_pos_3749_; lean_object* v_err_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
v_pos_3749_ = lean_ctor_get(v___x_3677_, 0);
v_err_3750_ = lean_ctor_get(v___x_3677_, 1);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3677_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_err_3750_);
lean_inc(v_pos_3749_);
lean_dec(v___x_3677_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_pos_3749_);
lean_ctor_set(v_reuseFailAlloc_3756_, 1, v_err_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object* v_config_3758_, lean_object* v_a_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Std_Http_URI_Parser_parseHostHeader(v_config_3758_, v_a_3759_);
lean_dec_ref(v_config_3758_);
return v_res_3760_;
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Config(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
