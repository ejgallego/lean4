// Lean compiler output
// Module: Std.Http.Protocol.H1.Parser
// Imports: public import Std.Internal.Parsec public import Std.Http.Data public import Std.Internal.Parsec.ByteArray public import Std.Http.Protocol.H1.Config import Init.Data.String.Lossy
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
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes___boxed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* l_Std_Http_Status_ofCode(lean_object*, uint16_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_toByteSlice(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSlice_toByteArray(lean_object*);
lean_object* l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Headers_empty;
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint8_t lean_uint8_add(uint8_t, uint8_t);
lean_object* l_Char_quote(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_ByteSlice_size(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_ByteArray_Iterator_remainingBytes(lean_object*);
lean_object* l_Std_Http_Chunk_ExtensionValue_ofString_x3f(lean_object*);
lean_object* l_Std_Http_Chunk_ExtensionName_ofString_x3f(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_take(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Std_Http_Version_ofNumber_x3f(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "too many items: "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " > "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected value but got none"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf(lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "too many leading empty lines"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '32'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid space sequence"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid hex digit "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "chunk size too large"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected hex digit"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HTTP/"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '46'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersion(lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__4___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__5___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__6___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__7___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__8(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__8___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__9(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__9___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__10(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__10___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__11(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__11___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__12(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__12___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__13(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__13___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__14(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__14___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__15(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__15___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__16(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__16___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__17(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__17___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__18(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__18___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__19(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__19___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__20(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__20___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__21(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__21___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__22(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__22___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__23(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__23___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__24(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__24___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__25(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__25___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__26(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__26___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__27(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__27___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__28(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__28___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__29(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__29___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__30(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__30___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__31(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__31___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__32(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__32___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__33(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__33___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__34(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__34___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__35(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__35___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__36(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__36___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__37(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__37___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__38(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__38___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__39(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__39___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__5_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__6;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__7;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__8 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__8_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DELETE"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__9 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__9_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__10;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__11;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__12 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__12_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "TRACE"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__13 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__13_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__14;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__15;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__4___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__16 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__16_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ACL"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__17 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__17_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__18;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__19;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__5___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__20 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__20_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "QUERY"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__21 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__21_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__22;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__23;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__6___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__24 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__24_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SEARCH"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__25 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__25_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__26;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__27;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__7___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__28 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__28_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BASELINE-CONTROL"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__29 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__29_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__30;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__31;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__8___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__32 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__32_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "BIND"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__33 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__33_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__34;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__35;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__9___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__36 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__36_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CONNECT"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__37 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__37_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__38;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__39;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__10___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__40 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__40_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CHECKIN"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__41 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__41_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__42;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__43;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__11___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__44 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__44_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CHECKOUT"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__45 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__45_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__46;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__47;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__12___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__48 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__48_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COPY"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__49 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__49_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__50;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__51;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__13___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__52 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__52_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "LABEL"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__53 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__53_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__54;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__55;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__14___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__56 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__56_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LINK"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__57 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__57_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__58;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__59;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__15___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__60 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__60_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LOCK"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__61 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__61_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__62;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__63;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__16___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__64 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__64_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MERGE"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__65 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__65_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__66;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__67;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__17___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__68 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__68_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKACTIVITY"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__69 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__69_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__70;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__71;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__18___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__72 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__72_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKCALENDAR"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__73 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__73_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__74;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__75;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__19___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__76 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__76_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MKCOL"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__77 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__77_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__78;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__79_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__79;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__20___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__80 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__80_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MKREDIRECTREF"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__81 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__81_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__82;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__83;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__21___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__84 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__84_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MKWORKSPACE"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__85 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__85_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__86;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__87;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__22___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__88 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__88_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "MOVE"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__89 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__89_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__90;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__91;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__23___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__92 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__92_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OPTIONS"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__93 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__93_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__94;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__95;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__24___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__96 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__96_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ORDERPATCH"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__97 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__97_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__98;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__99;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__25___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__100 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__100_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__101 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__101_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__102;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__103;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__26___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__104 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__104_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__105 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__105_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__106;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__107;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__27___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__108 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__108_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PATCH"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__109 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__109_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__110;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__111;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__28___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__112 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__112_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRI"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__113 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__113_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__114_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__114;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__115;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__29___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__116 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__116_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PROPFIND"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__117 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__117_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__118;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__119;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__30___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__120 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__120_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PROPPATCH"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__121 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__121_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__122;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__123;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__31___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__124 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__124_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REBIND"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__125 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__125_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__126;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__127;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__32___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__128 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__128_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REPORT"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__129 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__129_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__130_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__130;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__131_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__131;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__33___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__132 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__132_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNBIND"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__133 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__133_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__134;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__135;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__34___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__136 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__136_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UNCHECKOUT"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__137 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__137_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__138;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__139_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__139;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__35___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__140 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__140_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLINK"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__141 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__141_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__142;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__143_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__143;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__36___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__144 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__144_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLOCK"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__145 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__145_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__146_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__146;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__147_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__147;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__37___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__148 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__148_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "UPDATEREDIRECTREF"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__149 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__149_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__150_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__150;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__151;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__152_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__38___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__152 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__152_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UPDATE"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__153 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__153_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__154_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__154;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__155_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__155;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__39___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__156 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__156_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "VERSION-CONTROL"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__157 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__157_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__158_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__158;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__159_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__159;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unrecognized method"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__160 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__160_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__160_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__161 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__161_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "uri too long"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0_value)} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_parseRequestLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "unsupported HTTP version"};
static const lean_object* l_Std_Http_Protocol_H1_parseRequestLine___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_parseRequestLine___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_parseRequestLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_parseRequestLine___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_parseRequestLine___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_parseRequestLine___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '58'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Protocol_H1_parseSingleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_parseSingleHeader___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_parseSingleHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_parseSingleHeader___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '92'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid quoted-pair byte: "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid qdtext byte: "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "quoted-string too long"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '34'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid extension value"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '61'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid extension name"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '59'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkPartial(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "content-length"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "transfer-encoding"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "connection"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "te"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "upgrade"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trailer"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expect"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "authorization"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "max-forwards"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cache-control"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "content-encoding"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___boxed(lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "forbidden trailer field: "};
static const lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailers(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid status code"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar(uint8_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint32_t v___x_10_; uint8_t v___x_11_; 
v___x_2_ = lean_uint8_to_uint32(v_c_1_);
v___x_10_ = 33;
v___x_11_ = lean_uint32_dec_le(v___x_10_, v___x_2_);
if (v___x_11_ == 0)
{
goto v___jp_3_;
}
else
{
uint32_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 126;
v___x_13_ = lean_uint32_dec_le(v___x_2_, v___x_12_);
if (v___x_13_ == 0)
{
goto v___jp_3_;
}
else
{
return v___x_13_;
}
}
v___jp_3_:
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 128;
v___x_5_ = lean_uint32_dec_le(v___x_4_, v___x_2_);
if (v___x_5_ == 0)
{
uint32_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 32;
v___x_7_ = lean_uint32_dec_eq(v___x_2_, v___x_6_);
if (v___x_7_ == 0)
{
uint32_t v___x_8_; uint8_t v___x_9_; 
v___x_8_ = 9;
v___x_9_ = lean_uint32_dec_eq(v___x_2_, v___x_8_);
return v___x_9_;
}
else
{
return v___x_7_;
}
}
else
{
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar___boxed(lean_object* v_c_14_){
_start:
{
uint8_t v_c_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_c_boxed_15_ = lean_unbox(v_c_14_);
v_res_16_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar(v_c_boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText(uint8_t v_c_18_){
_start:
{
uint32_t v___x_19_; uint32_t v___x_25_; uint8_t v___x_26_; 
v___x_19_ = lean_uint8_to_uint32(v_c_18_);
v___x_25_ = 9;
v___x_26_ = lean_uint32_dec_eq(v___x_19_, v___x_25_);
if (v___x_26_ == 0)
{
uint32_t v___x_27_; uint8_t v___x_28_; 
v___x_27_ = 32;
v___x_28_ = lean_uint32_dec_eq(v___x_19_, v___x_27_);
if (v___x_28_ == 0)
{
uint32_t v___x_29_; uint8_t v___x_30_; 
v___x_29_ = 33;
v___x_30_ = lean_uint32_dec_eq(v___x_19_, v___x_29_);
if (v___x_30_ == 0)
{
uint32_t v___x_31_; uint8_t v___x_32_; 
v___x_31_ = 35;
v___x_32_ = lean_uint32_dec_le(v___x_31_, v___x_19_);
if (v___x_32_ == 0)
{
goto v___jp_20_;
}
else
{
uint32_t v___x_33_; uint8_t v___x_34_; 
v___x_33_ = 91;
v___x_34_ = lean_uint32_dec_le(v___x_19_, v___x_33_);
if (v___x_34_ == 0)
{
goto v___jp_20_;
}
else
{
return v___x_34_;
}
}
}
else
{
return v___x_30_;
}
}
else
{
return v___x_28_;
}
}
else
{
return v___x_26_;
}
v___jp_20_:
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 93;
v___x_22_ = lean_uint32_dec_le(v___x_21_, v___x_19_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 126;
v___x_24_ = lean_uint32_dec_le(v___x_19_, v___x_23_);
return v___x_24_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText___boxed(lean_object* v_c_35_){
_start:
{
uint8_t v_c_boxed_36_; uint8_t v_res_37_; lean_object* v_r_38_; 
v_c_boxed_36_ = lean_unbox(v_c_35_);
v_res_37_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText(v_c_boxed_36_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte(uint8_t v_c_39_){
_start:
{
uint32_t v___x_40_; uint32_t v___x_41_; uint8_t v___x_42_; 
v___x_40_ = lean_uint8_to_uint32(v_c_39_);
v___x_41_ = 32;
v___x_42_ = lean_uint32_dec_eq(v___x_40_, v___x_41_);
if (v___x_42_ == 0)
{
uint32_t v___x_43_; uint8_t v___x_44_; 
v___x_43_ = 9;
v___x_44_ = lean_uint32_dec_eq(v___x_40_, v___x_43_);
return v___x_44_;
}
else
{
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte___boxed(lean_object* v_c_45_){
_start:
{
uint8_t v_c_boxed_46_; uint8_t v_res_47_; lean_object* v_r_48_; 
v_c_boxed_46_ = lean_unbox(v_c_45_);
v_res_47_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte(v_c_boxed_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof___redArg(lean_object* v_p_49_, lean_object* v_it_50_){
_start:
{
lean_object* v___x_51_; 
lean_inc_ref(v_it_50_);
v___x_51_ = lean_apply_1(v_p_49_, v_it_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_pos_52_; lean_object* v_res_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_61_; 
lean_dec_ref(v_it_50_);
v_pos_52_ = lean_ctor_get(v___x_51_, 0);
v_res_53_ = lean_ctor_get(v___x_51_, 1);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_61_ == 0)
{
v___x_55_ = v___x_51_;
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_res_53_);
lean_inc(v_pos_52_);
lean_dec(v___x_51_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_57_, 0, v_res_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 1, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_pos_52_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___x_57_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v_err_62_; 
v_err_62_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_err_62_);
if (lean_obj_tag(v_err_62_) == 0)
{
lean_object* v_pos_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_70_; 
lean_dec_ref(v_it_50_);
v_pos_63_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_70_ == 0)
{
lean_object* v_unused_71_; 
v_unused_71_ = lean_ctor_get(v___x_51_, 1);
lean_dec(v_unused_71_);
v___x_65_ = v___x_51_;
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_pos_63_);
lean_dec(v___x_51_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_pos_63_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_err_62_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
else
{
lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_79_; 
lean_dec(v_err_62_);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_79_ == 0)
{
lean_object* v_unused_80_; lean_object* v_unused_81_; 
v_unused_80_ = lean_ctor_get(v___x_51_, 1);
lean_dec(v_unused_80_);
v_unused_81_ = lean_ctor_get(v___x_51_, 0);
lean_dec(v_unused_81_);
v___x_73_ = v___x_51_;
v_isShared_74_ = v_isSharedCheck_79_;
goto v_resetjp_72_;
}
else
{
lean_dec(v___x_51_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_79_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_75_ = lean_box(0);
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 0);
lean_ctor_set(v___x_73_, 1, v___x_75_);
lean_ctor_set(v___x_73_, 0, v_it_50_);
v___x_77_ = v___x_73_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_it_50_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof(lean_object* v_00_u03b1_82_, lean_object* v_p_83_, lean_object* v_it_84_){
_start:
{
lean_object* v___x_85_; 
lean_inc_ref(v_it_84_);
v___x_85_ = lean_apply_1(v_p_83_, v_it_84_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_pos_86_; lean_object* v_res_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_95_; 
lean_dec_ref(v_it_84_);
v_pos_86_ = lean_ctor_get(v___x_85_, 0);
v_res_87_ = lean_ctor_get(v___x_85_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_95_ == 0)
{
v___x_89_ = v___x_85_;
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_res_87_);
lean_inc(v_pos_86_);
lean_dec(v___x_85_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_91_, 0, v_res_87_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v___x_91_);
v___x_93_ = v___x_89_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_pos_86_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v_err_96_; 
v_err_96_ = lean_ctor_get(v___x_85_, 1);
lean_inc(v_err_96_);
if (lean_obj_tag(v_err_96_) == 0)
{
lean_object* v_pos_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec_ref(v_it_84_);
v_pos_97_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_104_ == 0)
{
lean_object* v_unused_105_; 
v_unused_105_ = lean_ctor_get(v___x_85_, 1);
lean_dec(v_unused_105_);
v___x_99_ = v___x_85_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_pos_97_);
lean_dec(v___x_85_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_pos_97_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_err_96_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
else
{
lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_113_; 
lean_dec(v_err_96_);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_113_ == 0)
{
lean_object* v_unused_114_; lean_object* v_unused_115_; 
v_unused_114_ = lean_ctor_get(v___x_85_, 1);
lean_dec(v_unused_114_);
v_unused_115_ = lean_ctor_get(v___x_85_, 0);
lean_dec(v_unused_115_);
v___x_107_ = v___x_85_;
v_isShared_108_ = v_isSharedCheck_113_;
goto v_resetjp_106_;
}
else
{
lean_dec(v___x_85_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_113_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_109_ = lean_box(0);
if (v_isShared_108_ == 0)
{
lean_ctor_set_tag(v___x_107_, 0);
lean_ctor_set(v___x_107_, 1, v___x_109_);
lean_ctor_set(v___x_107_, 0, v_it_84_);
v___x_111_ = v___x_107_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_it_84_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v___x_109_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(lean_object* v_parser_118_, lean_object* v_maxCount_119_, lean_object* v_acc_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_122_; 
lean_inc_ref(v_parser_118_);
lean_inc_ref(v_a_121_);
v___x_122_ = lean_apply_1(v_parser_118_, v_a_121_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_res_123_; 
v_res_123_ = lean_ctor_get(v___x_122_, 1);
lean_inc(v_res_123_);
if (lean_obj_tag(v_res_123_) == 0)
{
lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_maxCount_119_);
lean_dec_ref(v_parser_118_);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_130_ == 0)
{
lean_object* v_unused_131_; lean_object* v_unused_132_; 
v_unused_131_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_131_);
v_unused_132_ = lean_ctor_get(v___x_122_, 0);
lean_dec(v_unused_132_);
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v_acc_120_);
lean_ctor_set(v___x_125_, 0, v_a_121_);
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_121_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_acc_120_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_pos_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_161_; 
lean_dec_ref(v_a_121_);
v_pos_133_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_162_);
v___x_135_ = v___x_122_;
v_isShared_136_ = v_isSharedCheck_161_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_pos_133_);
lean_dec(v___x_122_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_161_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v_val_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_160_; 
v_val_137_ = lean_ctor_get(v_res_123_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v_res_123_);
if (v_isSharedCheck_160_ == 0)
{
v___x_139_ = v_res_123_;
v_isShared_140_ = v_isSharedCheck_160_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_val_137_);
lean_dec(v_res_123_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_160_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_141_ = lean_array_get_size(v_acc_120_);
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_add(v___x_141_, v___x_142_);
v___x_144_ = lean_nat_dec_lt(v_maxCount_119_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; 
lean_dec(v___x_143_);
lean_del_object(v___x_139_);
lean_del_object(v___x_135_);
v___x_145_ = lean_array_push(v_acc_120_, v_val_137_);
v_acc_120_ = v___x_145_;
v_a_121_ = v_pos_133_;
goto _start;
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
lean_dec(v_val_137_);
lean_dec_ref(v_acc_120_);
lean_dec_ref(v_parser_118_);
v___x_147_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0));
v___x_148_ = l_Nat_reprFast(v___x_143_);
v___x_149_ = lean_string_append(v___x_147_, v___x_148_);
lean_dec_ref(v___x_148_);
v___x_150_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1));
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
v___x_152_ = l_Nat_reprFast(v_maxCount_119_);
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
lean_dec_ref(v___x_152_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_153_);
v___x_155_ = v___x_139_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_159_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_157_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set_tag(v___x_135_, 1);
lean_ctor_set(v___x_135_, 1, v___x_155_);
v___x_157_ = v___x_135_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_pos_133_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
}
}
else
{
lean_object* v_err_163_; 
lean_dec(v_maxCount_119_);
lean_dec_ref(v_parser_118_);
v_err_163_ = lean_ctor_get(v___x_122_, 1);
lean_inc(v_err_163_);
if (lean_obj_tag(v_err_163_) == 0)
{
lean_object* v_pos_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_a_121_);
lean_dec_ref(v_acc_120_);
v_pos_164_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_172_);
v___x_166_ = v___x_122_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_pos_164_);
lean_dec(v___x_122_);
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
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_pos_164_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_err_163_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
else
{
lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_dec(v_err_163_);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_180_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v___x_122_, 0);
lean_dec(v_unused_181_);
v___x_174_ = v___x_122_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_dec(v___x_122_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
lean_ctor_set_tag(v___x_174_, 0);
lean_ctor_set(v___x_174_, 1, v_acc_120_);
lean_ctor_set(v___x_174_, 0, v_a_121_);
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_121_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_acc_120_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go(lean_object* v_00_u03b1_182_, lean_object* v_parser_183_, lean_object* v_maxCount_184_, lean_object* v_acc_185_, lean_object* v_a_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(v_parser_183_, v_maxCount_184_, v_acc_185_, v_a_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter___redArg(lean_object* v_____do__lift_188_, lean_object* v_h__1_189_, lean_object* v_h__2_190_){
_start:
{
if (lean_obj_tag(v_____do__lift_188_) == 0)
{
lean_object* v___x_191_; lean_object* v___x_192_; 
lean_dec(v_h__2_190_);
v___x_191_ = lean_box(0);
v___x_192_ = lean_apply_1(v_h__1_189_, v___x_191_);
return v___x_192_;
}
else
{
lean_object* v_val_193_; lean_object* v___x_194_; 
lean_dec(v_h__1_189_);
v_val_193_ = lean_ctor_get(v_____do__lift_188_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v_____do__lift_188_, 1);
v___x_194_ = lean_apply_1(v_h__2_190_, v_val_193_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter(lean_object* v_00_u03b1_195_, lean_object* v_motive_196_, lean_object* v_____do__lift_197_, lean_object* v_h__1_198_, lean_object* v_h__2_199_){
_start:
{
if (lean_obj_tag(v_____do__lift_197_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_h__2_199_);
v___x_200_ = lean_box(0);
v___x_201_ = lean_apply_1(v_h__1_198_, v___x_200_);
return v___x_201_;
}
else
{
lean_object* v_val_202_; lean_object* v___x_203_; 
lean_dec(v_h__1_198_);
v_val_202_ = lean_ctor_get(v_____do__lift_197_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v_____do__lift_197_, 1);
v___x_203_ = lean_apply_1(v_h__2_199_, v_val_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(lean_object* v_parser_206_, lean_object* v_maxCount_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0));
v___x_210_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(v_parser_206_, v_maxCount_207_, v___x_209_, v_a_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems(lean_object* v_00_u03b1_211_, lean_object* v_parser_212_, lean_object* v_maxCount_213_, lean_object* v_a_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(v_parser_212_, v_maxCount_213_, v_a_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(lean_object* v_x_219_, lean_object* v_a_220_){
_start:
{
if (lean_obj_tag(v_x_219_) == 1)
{
lean_object* v_val_221_; lean_object* v___x_222_; 
v_val_221_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_val_221_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v_a_220_);
lean_ctor_set(v___x_222_, 1, v_val_221_);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1));
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v_a_220_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___boxed(lean_object* v_x_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_x_225_, v_a_226_);
lean_dec(v_x_225_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption(lean_object* v_00_u03b1_228_, lean_object* v_x_229_, lean_object* v_a_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_x_229_, v_a_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___boxed(lean_object* v_00_u03b1_232_, lean_object* v_x_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption(v_00_u03b1_232_, v_x_233_, v_a_234_);
lean_dec(v_x_233_);
return v_res_235_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0(uint8_t v_c_236_){
_start:
{
uint32_t v___x_237_; uint32_t v___x_248_; uint8_t v___x_249_; 
v___x_237_ = lean_uint8_to_uint32(v_c_236_);
v___x_248_ = 33;
v___x_249_ = lean_uint32_dec_eq(v___x_237_, v___x_248_);
if (v___x_249_ == 0)
{
uint32_t v___x_250_; uint8_t v___x_251_; 
v___x_250_ = 35;
v___x_251_ = lean_uint32_dec_eq(v___x_237_, v___x_250_);
if (v___x_251_ == 0)
{
uint32_t v___x_252_; uint8_t v___x_253_; 
v___x_252_ = 36;
v___x_253_ = lean_uint32_dec_eq(v___x_237_, v___x_252_);
if (v___x_253_ == 0)
{
uint32_t v___x_254_; uint8_t v___x_255_; 
v___x_254_ = 37;
v___x_255_ = lean_uint32_dec_eq(v___x_237_, v___x_254_);
if (v___x_255_ == 0)
{
uint32_t v___x_256_; uint8_t v___x_257_; 
v___x_256_ = 38;
v___x_257_ = lean_uint32_dec_eq(v___x_237_, v___x_256_);
if (v___x_257_ == 0)
{
uint32_t v___x_258_; uint8_t v___x_259_; 
v___x_258_ = 39;
v___x_259_ = lean_uint32_dec_eq(v___x_237_, v___x_258_);
if (v___x_259_ == 0)
{
uint32_t v___x_260_; uint8_t v___x_261_; 
v___x_260_ = 42;
v___x_261_ = lean_uint32_dec_eq(v___x_237_, v___x_260_);
if (v___x_261_ == 0)
{
uint32_t v___x_262_; uint8_t v___x_263_; 
v___x_262_ = 43;
v___x_263_ = lean_uint32_dec_eq(v___x_237_, v___x_262_);
if (v___x_263_ == 0)
{
uint32_t v___x_264_; uint8_t v___x_265_; 
v___x_264_ = 45;
v___x_265_ = lean_uint32_dec_eq(v___x_237_, v___x_264_);
if (v___x_265_ == 0)
{
uint32_t v___x_266_; uint8_t v___x_267_; 
v___x_266_ = 46;
v___x_267_ = lean_uint32_dec_eq(v___x_237_, v___x_266_);
if (v___x_267_ == 0)
{
uint32_t v___x_268_; uint8_t v___x_269_; 
v___x_268_ = 94;
v___x_269_ = lean_uint32_dec_eq(v___x_237_, v___x_268_);
if (v___x_269_ == 0)
{
uint32_t v___x_270_; uint8_t v___x_271_; 
v___x_270_ = 95;
v___x_271_ = lean_uint32_dec_eq(v___x_237_, v___x_270_);
if (v___x_271_ == 0)
{
uint32_t v___x_272_; uint8_t v___x_273_; 
v___x_272_ = 96;
v___x_273_ = lean_uint32_dec_eq(v___x_237_, v___x_272_);
if (v___x_273_ == 0)
{
uint32_t v___x_274_; uint8_t v___x_275_; 
v___x_274_ = 124;
v___x_275_ = lean_uint32_dec_eq(v___x_237_, v___x_274_);
if (v___x_275_ == 0)
{
uint32_t v___x_276_; uint8_t v___x_277_; 
v___x_276_ = 126;
v___x_277_ = lean_uint32_dec_eq(v___x_237_, v___x_276_);
if (v___x_277_ == 0)
{
uint32_t v___x_278_; uint8_t v___x_279_; 
v___x_278_ = 48;
v___x_279_ = lean_uint32_dec_le(v___x_278_, v___x_237_);
if (v___x_279_ == 0)
{
goto v___jp_243_;
}
else
{
uint32_t v___x_280_; uint8_t v___x_281_; 
v___x_280_ = 57;
v___x_281_ = lean_uint32_dec_le(v___x_237_, v___x_280_);
if (v___x_281_ == 0)
{
goto v___jp_243_;
}
else
{
return v___x_281_;
}
}
}
else
{
return v___x_277_;
}
}
else
{
return v___x_275_;
}
}
else
{
return v___x_273_;
}
}
else
{
return v___x_271_;
}
}
else
{
return v___x_269_;
}
}
else
{
return v___x_267_;
}
}
else
{
return v___x_265_;
}
}
else
{
return v___x_263_;
}
}
else
{
return v___x_261_;
}
}
else
{
return v___x_259_;
}
}
else
{
return v___x_257_;
}
}
else
{
return v___x_255_;
}
}
else
{
return v___x_253_;
}
}
else
{
return v___x_251_;
}
}
else
{
return v___x_249_;
}
v___jp_238_:
{
uint32_t v___x_239_; uint8_t v___x_240_; 
v___x_239_ = 97;
v___x_240_ = lean_uint32_dec_le(v___x_239_, v___x_237_);
if (v___x_240_ == 0)
{
return v___x_240_;
}
else
{
uint32_t v___x_241_; uint8_t v___x_242_; 
v___x_241_ = 122;
v___x_242_ = lean_uint32_dec_le(v___x_237_, v___x_241_);
return v___x_242_;
}
}
v___jp_243_:
{
uint32_t v___x_244_; uint8_t v___x_245_; 
v___x_244_ = 65;
v___x_245_ = lean_uint32_dec_le(v___x_244_, v___x_237_);
if (v___x_245_ == 0)
{
goto v___jp_238_;
}
else
{
uint32_t v___x_246_; uint8_t v___x_247_; 
v___x_246_ = 90;
v___x_247_ = lean_uint32_dec_le(v___x_237_, v___x_246_);
if (v___x_247_ == 0)
{
goto v___jp_238_;
}
else
{
return v___x_247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0___boxed(lean_object* v_c_282_){
_start:
{
uint8_t v_c_boxed_283_; uint8_t v_res_284_; lean_object* v_r_285_; 
v_c_boxed_283_ = lean_unbox(v_c_282_);
v_res_284_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0(v_c_boxed_283_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken(lean_object* v_limit_290_, lean_object* v_a_291_){
_start:
{
lean_object* v___f_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v_snd_295_; lean_object* v_snd_296_; uint8_t v___x_297_; 
v___f_292_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_293_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_291_);
v___x_294_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_292_, v_limit_290_, v___x_293_, v_a_291_);
v_snd_295_ = lean_ctor_get(v___x_294_, 1);
lean_inc(v_snd_295_);
v_snd_296_ = lean_ctor_get(v_snd_295_, 1);
v___x_297_ = lean_unbox(v_snd_296_);
if (v___x_297_ == 0)
{
lean_object* v_fst_298_; lean_object* v_fst_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_327_; 
v_fst_298_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_fst_298_);
lean_dec_ref(v___x_294_);
v_fst_299_ = lean_ctor_get(v_snd_295_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_snd_295_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; 
v_unused_328_ = lean_ctor_get(v_snd_295_, 1);
lean_dec(v_unused_328_);
v___x_301_ = v_snd_295_;
v_isShared_302_ = v_isSharedCheck_327_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_fst_299_);
lean_dec(v_snd_295_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_327_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
uint8_t v___x_303_; 
v___x_303_ = lean_nat_dec_eq(v_fst_298_, v___x_293_);
if (v___x_303_ == 0)
{
lean_object* v_array_304_; lean_object* v_idx_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_322_; 
lean_del_object(v___x_301_);
v_array_304_ = lean_ctor_get(v_a_291_, 0);
v_idx_305_ = lean_ctor_get(v_a_291_, 1);
v_isSharedCheck_322_ = !lean_is_exclusive(v_a_291_);
if (v_isSharedCheck_322_ == 0)
{
v___x_307_ = v_a_291_;
v_isShared_308_ = v_isSharedCheck_322_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_idx_305_);
lean_inc(v_array_304_);
lean_dec(v_a_291_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_322_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v_lower_310_; lean_object* v_upper_311_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___y_319_; uint8_t v___x_321_; 
v___x_316_ = lean_nat_add(v_idx_305_, v_fst_298_);
lean_dec(v_fst_298_);
v___x_317_ = lean_byte_array_size(v_array_304_);
v___x_321_ = lean_nat_dec_le(v_idx_305_, v___x_293_);
if (v___x_321_ == 0)
{
v___y_319_ = v_idx_305_;
goto v___jp_318_;
}
else
{
lean_dec(v_idx_305_);
v___y_319_ = v___x_293_;
goto v___jp_318_;
}
v___jp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = l_ByteArray_toByteSlice(v_array_304_, v_lower_310_, v_upper_311_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 1, v___x_312_);
lean_ctor_set(v___x_307_, 0, v_fst_299_);
v___x_314_ = v___x_307_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_fst_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
v___jp_318_:
{
uint8_t v___x_320_; 
v___x_320_ = lean_nat_dec_le(v___x_316_, v___x_317_);
if (v___x_320_ == 0)
{
lean_dec(v___x_316_);
v_lower_310_ = v___y_319_;
v_upper_311_ = v___x_317_;
goto v___jp_309_;
}
else
{
v_lower_310_ = v___y_319_;
v_upper_311_ = v___x_316_;
goto v___jp_309_;
}
}
}
}
else
{
lean_object* v___x_323_; lean_object* v___x_325_; 
lean_dec(v_fst_299_);
lean_dec(v_fst_298_);
v___x_323_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_302_ == 0)
{
lean_ctor_set_tag(v___x_301_, 1);
lean_ctor_set(v___x_301_, 1, v___x_323_);
lean_ctor_set(v___x_301_, 0, v_a_291_);
v___x_325_ = v___x_301_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_291_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_323_);
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
lean_object* v_fst_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_337_; 
lean_dec_ref(v___x_294_);
lean_dec_ref(v_a_291_);
v_fst_329_ = lean_ctor_get(v_snd_295_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_snd_295_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_snd_295_, 1);
lean_dec(v_unused_338_);
v___x_331_ = v_snd_295_;
v_isShared_332_ = v_isSharedCheck_337_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_fst_329_);
lean_dec(v_snd_295_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_337_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_333_ = lean_box(0);
if (v_isShared_332_ == 0)
{
lean_ctor_set_tag(v___x_331_, 1);
lean_ctor_set(v___x_331_, 1, v___x_333_);
v___x_335_ = v___x_331_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_fst_329_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v___x_333_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___boxed(lean_object* v_limit_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken(v_limit_339_, v_a_340_);
lean_dec(v_limit_339_);
return v_res_341_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0));
v___x_344_ = lean_string_to_utf8(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf(lean_object* v_a_345_){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_347_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_346_, v_a_345_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(lean_object* v_limits_351_, lean_object* v_a_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_array_354_; lean_object* v_idx_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v_array_354_ = lean_ctor_get(v___y_353_, 0);
v_idx_355_ = lean_ctor_get(v___y_353_, 1);
v___x_356_ = lean_byte_array_size(v_array_354_);
v___x_357_ = lean_nat_dec_lt(v_idx_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___y_353_);
lean_ctor_set(v___x_358_, 1, v_a_352_);
return v___x_358_;
}
else
{
uint8_t v___x_359_; uint8_t v___x_360_; uint8_t v___x_361_; 
v___x_359_ = lean_byte_array_fget(v_array_354_, v_idx_355_);
v___x_360_ = 13;
v___x_361_ = lean_uint8_dec_eq(v___x_359_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; 
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v___y_353_);
lean_ctor_set(v___x_362_, 1, v_a_352_);
return v___x_362_;
}
else
{
lean_object* v_maxLeadingEmptyLines_363_; uint8_t v___x_364_; 
v_maxLeadingEmptyLines_363_ = lean_ctor_get(v_limits_351_, 9);
v___x_364_ = lean_nat_dec_le(v_maxLeadingEmptyLines_363_, v_a_352_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_366_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_365_, v___y_353_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_pos_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_pos_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_pos_367_);
lean_dec_ref_known(v___x_366_, 2);
v___x_368_ = lean_unsigned_to_nat(1u);
v___x_369_ = lean_nat_add(v_a_352_, v___x_368_);
lean_dec(v_a_352_);
v_a_352_ = v___x_369_;
v___y_353_ = v_pos_367_;
goto _start;
}
else
{
lean_object* v_pos_371_; lean_object* v_err_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_a_352_);
v_pos_371_ = lean_ctor_get(v___x_366_, 0);
v_err_372_ = lean_ctor_get(v___x_366_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_366_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_err_372_);
lean_inc(v_pos_371_);
lean_dec(v___x_366_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_pos_371_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_err_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec(v_a_352_);
v___x_380_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1));
v___x_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_381_, 0, v___y_353_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___boxed(lean_object* v_limits_382_, lean_object* v_a_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(v_limits_382_, v_a_383_, v___y_384_);
lean_dec_ref(v_limits_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(lean_object* v_limits_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_count_388_; lean_object* v___x_389_; 
v_count_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(v_limits_386_, v_count_388_, v_a_387_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_pos_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_398_; 
v_pos_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; 
v_unused_399_ = lean_ctor_get(v___x_389_, 1);
lean_dec(v_unused_399_);
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_pos_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = lean_box(0);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_394_);
v___x_396_ = v___x_392_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_pos_390_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
lean_object* v_pos_400_; lean_object* v_err_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_pos_400_ = lean_ctor_get(v___x_389_, 0);
v_err_401_ = lean_ctor_get(v___x_389_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_389_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_err_401_);
lean_inc(v_pos_400_);
lean_dec(v___x_389_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_pos_400_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_err_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines___boxed(lean_object* v_limits_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(v_limits_409_, v_a_410_);
lean_dec_ref(v_limits_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0(lean_object* v_limits_412_, lean_object* v_inst_413_, lean_object* v_a_414_, lean_object* v___y_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(v_limits_412_, v_a_414_, v___y_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___boxed(lean_object* v_limits_417_, lean_object* v_inst_418_, lean_object* v_a_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0(v_limits_417_, v_inst_418_, v_a_419_, v___y_420_);
lean_dec_ref(v_limits_417_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp(lean_object* v_a_425_){
_start:
{
lean_object* v_array_426_; lean_object* v_idx_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v_array_426_ = lean_ctor_get(v_a_425_, 0);
v_idx_427_ = lean_ctor_get(v_a_425_, 1);
v___x_428_ = lean_byte_array_size(v_array_426_);
v___x_429_ = lean_nat_dec_lt(v_idx_427_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_box(0);
v___x_431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_431_, 0, v_a_425_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
return v___x_431_;
}
else
{
uint8_t v___x_432_; uint8_t v_got_433_; uint8_t v___x_434_; 
v___x_432_ = 32;
v_got_433_ = lean_byte_array_fget(v_array_426_, v_idx_427_);
v___x_434_ = lean_uint8_dec_eq(v_got_433_, v___x_432_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
v___x_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_436_, 0, v_a_425_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
return v___x_436_;
}
else
{
lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_447_; 
lean_inc(v_idx_427_);
lean_inc_ref(v_array_426_);
v_isSharedCheck_447_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_448_ = lean_ctor_get(v_a_425_, 1);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v_a_425_, 0);
lean_dec(v_unused_449_);
v___x_438_ = v_a_425_;
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
else
{
lean_dec(v_a_425_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_441_ = lean_nat_add(v_idx_427_, v___x_440_);
lean_dec(v_idx_427_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_441_);
v___x_443_ = v___x_438_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_array_426_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v___x_441_);
v___x_443_ = v_reuseFailAlloc_446_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_box(0);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
return v___x_445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows(lean_object* v_limits_454_, lean_object* v_a_455_){
_start:
{
lean_object* v_pos_457_; lean_object* v_pos_461_; lean_object* v_maxSpaceSequence_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_snd_468_; lean_object* v_snd_469_; uint8_t v___x_470_; 
v_maxSpaceSequence_464_ = lean_ctor_get(v_limits_454_, 8);
v___x_465_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2));
v___x_466_ = lean_unsigned_to_nat(0u);
v___x_467_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___x_465_, v_maxSpaceSequence_464_, v___x_466_, v_a_455_);
v_snd_468_ = lean_ctor_get(v___x_467_, 1);
lean_inc(v_snd_468_);
lean_dec_ref(v___x_467_);
v_snd_469_ = lean_ctor_get(v_snd_468_, 1);
v___x_470_ = lean_unbox(v_snd_469_);
if (v___x_470_ == 0)
{
lean_object* v_fst_471_; lean_object* v_array_472_; lean_object* v_idx_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_fst_471_ = lean_ctor_get(v_snd_468_, 0);
lean_inc(v_fst_471_);
lean_dec(v_snd_468_);
v_array_472_ = lean_ctor_get(v_fst_471_, 0);
v_idx_473_ = lean_ctor_get(v_fst_471_, 1);
v___x_474_ = lean_byte_array_size(v_array_472_);
v___x_475_ = lean_nat_dec_lt(v_idx_473_, v___x_474_);
if (v___x_475_ == 0)
{
v_pos_457_ = v_fst_471_;
goto v___jp_456_;
}
else
{
uint8_t v___x_476_; uint32_t v___x_477_; uint32_t v___x_478_; uint8_t v___x_479_; 
v___x_476_ = lean_byte_array_fget(v_array_472_, v_idx_473_);
v___x_477_ = lean_uint8_to_uint32(v___x_476_);
v___x_478_ = 32;
v___x_479_ = lean_uint32_dec_eq(v___x_477_, v___x_478_);
if (v___x_479_ == 0)
{
uint32_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 9;
v___x_481_ = lean_uint32_dec_eq(v___x_477_, v___x_480_);
if (v___x_481_ == 0)
{
v_pos_457_ = v_fst_471_;
goto v___jp_456_;
}
else
{
v_pos_461_ = v_fst_471_;
goto v___jp_460_;
}
}
else
{
v_pos_461_ = v_fst_471_;
goto v___jp_460_;
}
}
}
else
{
lean_object* v_fst_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_490_; 
v_fst_482_ = lean_ctor_get(v_snd_468_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v_snd_468_);
if (v_isSharedCheck_490_ == 0)
{
lean_object* v_unused_491_; 
v_unused_491_ = lean_ctor_get(v_snd_468_, 1);
lean_dec(v_unused_491_);
v___x_484_ = v_snd_468_;
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_fst_482_);
lean_dec(v_snd_468_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_486_ = lean_box(0);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 1);
lean_ctor_set(v___x_484_, 1, v___x_486_);
v___x_488_ = v___x_484_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_fst_482_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
v___jp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_box(0);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v_pos_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
return v___x_459_;
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_463_, 0, v_pos_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
return v___x_463_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___boxed(lean_object* v_limits_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows(v_limits_492_, v_a_493_);
lean_dec_ref(v_limits_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit(lean_object* v_a_496_){
_start:
{
lean_object* v_array_497_; lean_object* v_idx_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v_array_497_ = lean_ctor_get(v_a_496_, 0);
v_idx_498_ = lean_ctor_get(v_a_496_, 1);
v___x_499_ = lean_byte_array_size(v_array_497_);
v___x_500_ = lean_nat_dec_lt(v_idx_498_, v___x_499_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_box(0);
v___x_502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_502_, 0, v_a_496_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
return v___x_502_;
}
else
{
lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_558_; 
lean_inc(v_idx_498_);
lean_inc_ref(v_array_497_);
v_isSharedCheck_558_ = !lean_is_exclusive(v_a_496_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; 
v_unused_559_ = lean_ctor_get(v_a_496_, 1);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_a_496_, 0);
lean_dec(v_unused_560_);
v___x_504_ = v_a_496_;
v_isShared_505_ = v_isSharedCheck_558_;
goto v_resetjp_503_;
}
else
{
lean_dec(v_a_496_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_558_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
uint8_t v_c_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_it_x27_510_; 
v_c_506_ = lean_byte_array_fget(v_array_497_, v_idx_498_);
v___x_507_ = lean_unsigned_to_nat(1u);
v___x_508_ = lean_nat_add(v_idx_498_, v___x_507_);
lean_dec(v_idx_498_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v___x_508_);
v_it_x27_510_ = v___x_504_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_array_497_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v___x_508_);
v_it_x27_510_ = v_reuseFailAlloc_557_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
uint8_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 48;
v___x_554_ = lean_uint8_dec_le(v___x_553_, v_c_506_);
if (v___x_554_ == 0)
{
goto v___jp_548_;
}
else
{
uint8_t v___x_555_; uint8_t v___x_556_; 
v___x_555_ = 57;
v___x_556_ = lean_uint8_dec_le(v_c_506_, v___x_555_);
if (v___x_556_ == 0)
{
goto v___jp_548_;
}
else
{
goto v___jp_528_;
}
}
v___jp_511_:
{
uint8_t v___x_512_; uint8_t v___x_513_; uint8_t v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = 97;
v___x_513_ = lean_uint8_sub(v_c_506_, v___x_512_);
v___x_514_ = 10;
v___x_515_ = lean_uint8_add(v___x_513_, v___x_514_);
v___x_516_ = lean_box(v___x_515_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v_it_x27_510_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
return v___x_517_;
}
v___jp_518_:
{
uint8_t v___x_519_; uint8_t v___x_520_; 
v___x_519_ = 65;
v___x_520_ = lean_uint8_dec_le(v___x_519_, v_c_506_);
if (v___x_520_ == 0)
{
goto v___jp_511_;
}
else
{
uint8_t v___x_521_; uint8_t v___x_522_; 
v___x_521_ = 70;
v___x_522_ = lean_uint8_dec_le(v_c_506_, v___x_521_);
if (v___x_522_ == 0)
{
goto v___jp_511_;
}
else
{
uint8_t v___x_523_; uint8_t v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_523_ = lean_uint8_sub(v_c_506_, v___x_519_);
v___x_524_ = 10;
v___x_525_ = lean_uint8_add(v___x_523_, v___x_524_);
v___x_526_ = lean_box(v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v_it_x27_510_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
return v___x_527_;
}
}
}
v___jp_528_:
{
uint8_t v___x_529_; uint8_t v___x_530_; 
v___x_529_ = 48;
v___x_530_ = lean_uint8_dec_le(v___x_529_, v_c_506_);
if (v___x_530_ == 0)
{
goto v___jp_518_;
}
else
{
uint8_t v___x_531_; uint8_t v___x_532_; 
v___x_531_ = 57;
v___x_532_ = lean_uint8_dec_le(v_c_506_, v___x_531_);
if (v___x_532_ == 0)
{
goto v___jp_518_;
}
else
{
uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = lean_uint8_sub(v_c_506_, v___x_529_);
v___x_534_ = lean_box(v___x_533_);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v_it_x27_510_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
return v___x_535_;
}
}
}
v___jp_536_:
{
lean_object* v___x_537_; uint32_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_537_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0));
v___x_538_ = lean_uint8_to_uint32(v_c_506_);
v___x_539_ = l_Char_quote(v___x_538_);
v___x_540_ = lean_string_append(v___x_537_, v___x_539_);
lean_dec_ref(v___x_539_);
v___x_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
v___x_542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_542_, 0, v_it_x27_510_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
return v___x_542_;
}
v___jp_543_:
{
uint8_t v___x_544_; uint8_t v___x_545_; 
v___x_544_ = 65;
v___x_545_ = lean_uint8_dec_le(v___x_544_, v_c_506_);
if (v___x_545_ == 0)
{
goto v___jp_536_;
}
else
{
uint8_t v___x_546_; uint8_t v___x_547_; 
v___x_546_ = 70;
v___x_547_ = lean_uint8_dec_le(v_c_506_, v___x_546_);
if (v___x_547_ == 0)
{
goto v___jp_536_;
}
else
{
goto v___jp_528_;
}
}
}
v___jp_548_:
{
uint8_t v___x_549_; uint8_t v___x_550_; 
v___x_549_ = 97;
v___x_550_ = lean_uint8_dec_le(v___x_549_, v_c_506_);
if (v___x_550_ == 0)
{
goto v___jp_543_;
}
else
{
uint8_t v___x_551_; uint8_t v___x_552_; 
v___x_551_ = 102;
v___x_552_ = lean_uint8_dec_le(v_c_506_, v___x_551_);
if (v___x_552_ == 0)
{
goto v___jp_543_;
}
else
{
goto v___jp_528_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go(lean_object* v_acc_567_, lean_object* v_count_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_570_; 
lean_inc_ref(v_a_569_);
v___x_570_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit(v_a_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_pos_571_; lean_object* v_res_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_589_; 
lean_dec_ref(v_a_569_);
v_pos_571_ = lean_ctor_get(v___x_570_, 0);
v_res_572_ = lean_ctor_get(v___x_570_, 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_589_ == 0)
{
v___x_574_ = v___x_570_;
v_isShared_575_ = v_isSharedCheck_589_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_res_572_);
lean_inc(v_pos_571_);
lean_dec(v___x_570_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_589_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_576_ = lean_unsigned_to_nat(16u);
v___x_577_ = lean_unsigned_to_nat(1u);
v___x_578_ = lean_nat_add(v_count_568_, v___x_577_);
lean_dec(v_count_568_);
v___x_579_ = lean_nat_dec_lt(v___x_576_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
lean_del_object(v___x_574_);
v___x_580_ = lean_nat_mul(v_acc_567_, v___x_576_);
lean_dec(v_acc_567_);
v___x_581_ = lean_unbox(v_res_572_);
lean_dec(v_res_572_);
v___x_582_ = lean_uint8_to_nat(v___x_581_);
v___x_583_ = lean_nat_add(v___x_580_, v___x_582_);
lean_dec(v___x_580_);
v_acc_567_ = v___x_583_;
v_count_568_ = v___x_578_;
v_a_569_ = v_pos_571_;
goto _start;
}
else
{
lean_object* v___x_585_; lean_object* v___x_587_; 
lean_dec(v___x_578_);
lean_dec(v_res_572_);
lean_dec(v_acc_567_);
v___x_585_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1));
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 1);
lean_ctor_set(v___x_574_, 1, v___x_585_);
v___x_587_ = v___x_574_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_pos_571_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v_err_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_615_; 
v_err_590_ = lean_ctor_get(v___x_570_, 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_570_, 0);
lean_dec(v_unused_616_);
v___x_592_ = v___x_570_;
v_isShared_593_ = v_isSharedCheck_615_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_err_590_);
lean_dec(v___x_570_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_615_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v_array_594_; lean_object* v_idx_595_; uint8_t v___x_596_; 
v_array_594_ = lean_ctor_get(v_a_569_, 0);
v_idx_595_ = lean_ctor_get(v_a_569_, 1);
v___x_596_ = lean_nat_dec_eq(v_idx_595_, v_idx_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_598_; 
lean_dec(v_count_568_);
lean_dec(v_acc_567_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_598_ = v___x_592_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_err_590_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
else
{
lean_object* v___x_600_; uint8_t v___x_601_; 
lean_dec(v_err_590_);
v___x_600_ = lean_unsigned_to_nat(0u);
v___x_601_ = lean_nat_dec_eq(v_count_568_, v___x_600_);
lean_dec(v_count_568_);
if (v___x_601_ == 0)
{
lean_object* v___x_603_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set_tag(v___x_592_, 0);
lean_ctor_set(v___x_592_, 1, v_acc_567_);
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_603_ = v___x_592_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_acc_567_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
else
{
lean_object* v___x_605_; uint8_t v___x_606_; 
lean_dec(v_acc_567_);
v___x_605_ = lean_byte_array_size(v_array_594_);
v___x_606_ = lean_nat_dec_lt(v_idx_595_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_607_ = lean_box(0);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_607_);
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_609_ = v___x_592_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v___x_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_611_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3));
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_611_);
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_613_ = v___x_592_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter___redArg(lean_object* v_____do__lift_617_, lean_object* v_h__1_618_, lean_object* v_h__2_619_){
_start:
{
if (lean_obj_tag(v_____do__lift_617_) == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec(v_h__1_618_);
v___x_620_ = lean_box(0);
v___x_621_ = lean_apply_1(v_h__2_619_, v___x_620_);
return v___x_621_;
}
else
{
lean_object* v_val_622_; lean_object* v___x_623_; 
lean_dec(v_h__2_619_);
v_val_622_ = lean_ctor_get(v_____do__lift_617_, 0);
lean_inc(v_val_622_);
lean_dec_ref_known(v_____do__lift_617_, 1);
v___x_623_ = lean_apply_1(v_h__1_618_, v_val_622_);
return v___x_623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter(lean_object* v_motive_624_, lean_object* v_____do__lift_625_, lean_object* v_h__1_626_, lean_object* v_h__2_627_){
_start:
{
if (lean_obj_tag(v_____do__lift_625_) == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; 
lean_dec(v_h__1_626_);
v___x_628_ = lean_box(0);
v___x_629_ = lean_apply_1(v_h__2_627_, v___x_628_);
return v___x_629_;
}
else
{
lean_object* v_val_630_; lean_object* v___x_631_; 
lean_dec(v_h__2_627_);
v_val_630_ = lean_ctor_get(v_____do__lift_625_, 0);
lean_inc(v_val_630_);
lean_dec_ref_known(v_____do__lift_625_, 1);
v___x_631_ = lean_apply_1(v_h__1_626_, v_val_630_);
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex(lean_object* v_a_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go(v___x_633_, v___x_633_, v_a_632_);
return v___x_634_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0));
v___x_637_ = lean_string_to_utf8(v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(lean_object* v_a_644_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1);
v___x_646_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_645_, v_a_644_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_pos_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_708_; 
v_pos_647_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; 
v_unused_709_ = lean_ctor_get(v___x_646_, 1);
lean_dec(v_unused_709_);
v___x_649_ = v___x_646_;
v_isShared_650_ = v_isSharedCheck_708_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_pos_647_);
lean_dec(v___x_646_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_708_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v_array_656_; lean_object* v_idx_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v_array_656_ = lean_ctor_get(v_pos_647_, 0);
v_idx_657_ = lean_ctor_get(v_pos_647_, 1);
v___x_658_ = lean_byte_array_size(v_array_656_);
v___x_659_ = lean_nat_dec_lt(v_idx_657_, v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_del_object(v___x_649_);
v___x_660_ = lean_box(0);
v___x_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_661_, 0, v_pos_647_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
return v___x_661_;
}
else
{
uint8_t v_c_662_; uint8_t v___x_663_; uint8_t v___x_664_; 
v_c_662_ = lean_byte_array_fget(v_array_656_, v_idx_657_);
v___x_663_ = 48;
v___x_664_ = lean_uint8_dec_le(v___x_663_, v_c_662_);
if (v___x_664_ == 0)
{
goto v___jp_651_;
}
else
{
uint8_t v___x_665_; uint8_t v___x_666_; 
v___x_665_ = 57;
v___x_666_ = lean_uint8_dec_le(v_c_662_, v___x_665_);
if (v___x_666_ == 0)
{
goto v___jp_651_;
}
else
{
lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_705_; 
lean_inc(v_idx_657_);
lean_inc_ref(v_array_656_);
lean_del_object(v___x_649_);
v_isSharedCheck_705_ = !lean_is_exclusive(v_pos_647_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; lean_object* v_unused_707_; 
v_unused_706_ = lean_ctor_get(v_pos_647_, 1);
lean_dec(v_unused_706_);
v_unused_707_ = lean_ctor_get(v_pos_647_, 0);
lean_dec(v_unused_707_);
v___x_668_ = v_pos_647_;
v_isShared_669_ = v_isSharedCheck_705_;
goto v_resetjp_667_;
}
else
{
lean_dec(v_pos_647_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_705_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v_it_x27_673_; 
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_nat_add(v_idx_657_, v___x_670_);
lean_dec(v_idx_657_);
lean_inc(v___x_671_);
lean_inc_ref(v_array_656_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 1, v___x_671_);
v_it_x27_673_ = v___x_668_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_array_656_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v___x_671_);
v_it_x27_673_ = v_reuseFailAlloc_704_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
uint8_t v___x_674_; 
v___x_674_ = lean_nat_dec_lt(v___x_671_, v___x_658_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; lean_object* v___x_676_; 
lean_dec(v___x_671_);
lean_dec_ref(v_array_656_);
v___x_675_ = lean_box(0);
v___x_676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_676_, 0, v_it_x27_673_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
return v___x_676_;
}
else
{
uint8_t v___x_677_; uint8_t v_got_678_; uint8_t v___x_679_; 
v___x_677_ = 46;
v_got_678_ = lean_byte_array_fget(v_array_656_, v___x_671_);
v___x_679_ = lean_uint8_dec_eq(v_got_678_, v___x_677_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v___x_671_);
lean_dec_ref(v_array_656_);
v___x_680_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5));
v___x_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_681_, 0, v_it_x27_673_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
return v___x_681_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_687_; 
lean_dec_ref(v_it_x27_673_);
v___x_682_ = lean_nat_add(v___x_671_, v___x_670_);
lean_dec(v___x_671_);
lean_inc(v___x_682_);
lean_inc_ref(v_array_656_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v_array_656_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_687_ = lean_nat_dec_lt(v___x_682_, v___x_658_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v___x_682_);
lean_dec_ref(v_array_656_);
v___x_688_ = lean_box(0);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_683_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
return v___x_689_;
}
else
{
uint8_t v_c_690_; uint8_t v___x_691_; 
v_c_690_ = lean_byte_array_fget(v_array_656_, v___x_682_);
v___x_691_ = lean_uint8_dec_le(v___x_663_, v_c_690_);
if (v___x_691_ == 0)
{
lean_dec(v___x_682_);
lean_dec_ref(v_array_656_);
goto v___jp_684_;
}
else
{
uint8_t v___x_692_; 
v___x_692_ = lean_uint8_dec_le(v_c_690_, v___x_665_);
if (v___x_692_ == 0)
{
lean_dec(v___x_682_);
lean_dec_ref(v_array_656_);
goto v___jp_684_;
}
else
{
lean_object* v___x_693_; uint32_t v___x_694_; lean_object* v___x_695_; lean_object* v_it_x27_696_; uint32_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec_ref_known(v___x_683_, 2);
v___x_693_ = lean_unsigned_to_nat(48u);
v___x_694_ = lean_uint8_to_uint32(v_c_662_);
v___x_695_ = lean_nat_add(v___x_682_, v___x_670_);
lean_dec(v___x_682_);
v_it_x27_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_696_, 0, v_array_656_);
lean_ctor_set(v_it_x27_696_, 1, v___x_695_);
v___x_697_ = lean_uint8_to_uint32(v_c_690_);
v___x_698_ = lean_uint32_to_nat(v___x_694_);
v___x_699_ = lean_nat_sub(v___x_698_, v___x_693_);
lean_dec(v___x_698_);
v___x_700_ = lean_uint32_to_nat(v___x_697_);
v___x_701_ = lean_nat_sub(v___x_700_, v___x_693_);
lean_dec(v___x_700_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_699_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_it_x27_696_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
return v___x_703_;
}
}
}
v___jp_684_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_683_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
return v___x_686_;
}
}
}
}
}
}
}
}
v___jp_651_:
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
if (v_isShared_650_ == 0)
{
lean_ctor_set_tag(v___x_649_, 1);
lean_ctor_set(v___x_649_, 1, v___x_652_);
v___x_654_ = v___x_649_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_pos_647_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
else
{
lean_object* v_pos_710_; lean_object* v_err_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
v_pos_710_ = lean_ctor_get(v___x_646_, 0);
v_err_711_ = lean_ctor_get(v___x_646_, 1);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_646_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_err_711_);
lean_inc(v_pos_710_);
lean_dec(v___x_646_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_pos_710_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_err_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersion(lean_object* v_a_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v_a_719_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_res_721_; lean_object* v_pos_722_; lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_res_721_ = lean_ctor_get(v___x_720_, 1);
lean_inc(v_res_721_);
v_pos_722_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_pos_722_);
lean_dec_ref_known(v___x_720_, 2);
v_fst_723_ = lean_ctor_get(v_res_721_, 0);
lean_inc(v_fst_723_);
v_snd_724_ = lean_ctor_get(v_res_721_, 1);
lean_inc(v_snd_724_);
lean_dec(v_res_721_);
v___x_725_ = l_Std_Http_Version_ofNumber_x3f(v_fst_723_, v_snd_724_);
lean_dec(v_snd_724_);
lean_dec(v_fst_723_);
v___x_726_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___x_725_, v_pos_722_);
lean_dec(v___x_725_);
return v___x_726_;
}
else
{
lean_object* v_pos_727_; lean_object* v_err_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
v_pos_727_ = lean_ctor_get(v___x_720_, 0);
v_err_728_ = lean_ctor_get(v___x_720_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_720_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_err_728_);
lean_inc(v_pos_727_);
lean_dec(v___x_720_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_pos_727_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_err_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(lean_object* v_a_736_, lean_object* v_f_737_, lean_object* v___y_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = lean_apply_1(v_a_736_, v___y_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_pos_740_; lean_object* v_res_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_749_; 
v_pos_740_ = lean_ctor_get(v___x_739_, 0);
v_res_741_ = lean_ctor_get(v___x_739_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_749_ == 0)
{
v___x_743_ = v___x_739_;
v_isShared_744_ = v_isSharedCheck_749_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_res_741_);
lean_inc(v_pos_740_);
lean_dec(v___x_739_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_749_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_747_; 
v___x_745_ = lean_apply_1(v_f_737_, v_res_741_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v___x_745_);
v___x_747_ = v___x_743_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_pos_740_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
else
{
lean_object* v_pos_750_; lean_object* v_err_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec(v_f_737_);
v_pos_750_ = lean_ctor_get(v___x_739_, 0);
v_err_751_ = lean_ctor_get(v___x_739_, 1);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_739_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_err_751_);
lean_inc(v_pos_750_);
lean_dec(v___x_739_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_pos_750_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_err_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0(lean_object* v_00_u03b1_759_, lean_object* v_00_u03b2_760_, lean_object* v_a_761_, lean_object* v_f_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v_a_761_, v_f_762_, v___y_763_);
return v___x_764_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__0(lean_object* v_x_765_){
_start:
{
uint8_t v___x_766_; 
v___x_766_ = 8;
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__0___boxed(lean_object* v_x_767_){
_start:
{
uint8_t v_res_768_; lean_object* v_r_769_; 
v_res_768_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__0(v_x_767_);
v_r_769_ = lean_box(v_res_768_);
return v_r_769_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__1(lean_object* v_x_770_){
_start:
{
uint8_t v___x_771_; 
v___x_771_ = 9;
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__1___boxed(lean_object* v_x_772_){
_start:
{
uint8_t v_res_773_; lean_object* v_r_774_; 
v_res_773_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__1(v_x_772_);
v_r_774_ = lean_box(v_res_773_);
return v_r_774_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__2(lean_object* v_x_775_){
_start:
{
uint8_t v___x_776_; 
v___x_776_ = 7;
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__2___boxed(lean_object* v_x_777_){
_start:
{
uint8_t v_res_778_; lean_object* v_r_779_; 
v_res_778_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__2(v_x_777_);
v_r_779_ = lean_box(v_res_778_);
return v_r_779_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__3(lean_object* v_x_780_){
_start:
{
uint8_t v___x_781_; 
v___x_781_ = 32;
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__3___boxed(lean_object* v_x_782_){
_start:
{
uint8_t v_res_783_; lean_object* v_r_784_; 
v_res_783_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__3(v_x_782_);
v_r_784_ = lean_box(v_res_783_);
return v_r_784_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__4(lean_object* v_x_785_){
_start:
{
uint8_t v___x_786_; 
v___x_786_ = 0;
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__4___boxed(lean_object* v_x_787_){
_start:
{
uint8_t v_res_788_; lean_object* v_r_789_; 
v_res_788_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__4(v_x_787_);
v_r_789_ = lean_box(v_res_788_);
return v_r_789_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__5(lean_object* v_x_790_){
_start:
{
uint8_t v___x_791_; 
v___x_791_ = 28;
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__5___boxed(lean_object* v_x_792_){
_start:
{
uint8_t v_res_793_; lean_object* v_r_794_; 
v_res_793_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__5(v_x_792_);
v_r_794_ = lean_box(v_res_793_);
return v_r_794_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__6(lean_object* v_x_795_){
_start:
{
uint8_t v___x_796_; 
v___x_796_ = 31;
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__6___boxed(lean_object* v_x_797_){
_start:
{
uint8_t v_res_798_; lean_object* v_r_799_; 
v_res_798_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__6(v_x_797_);
v_r_799_ = lean_box(v_res_798_);
return v_r_799_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__7(lean_object* v_x_800_){
_start:
{
uint8_t v___x_801_; 
v___x_801_ = 1;
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__7___boxed(lean_object* v_x_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__7(v_x_802_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__8(lean_object* v_x_805_){
_start:
{
uint8_t v___x_806_; 
v___x_806_ = 2;
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__8___boxed(lean_object* v_x_807_){
_start:
{
uint8_t v_res_808_; lean_object* v_r_809_; 
v_res_808_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__8(v_x_807_);
v_r_809_ = lean_box(v_res_808_);
return v_r_809_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__9(lean_object* v_x_810_){
_start:
{
uint8_t v___x_811_; 
v___x_811_ = 5;
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__9___boxed(lean_object* v_x_812_){
_start:
{
uint8_t v_res_813_; lean_object* v_r_814_; 
v_res_813_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__9(v_x_812_);
v_r_814_ = lean_box(v_res_813_);
return v_r_814_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__10(lean_object* v_x_815_){
_start:
{
uint8_t v___x_816_; 
v___x_816_ = 3;
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__10___boxed(lean_object* v_x_817_){
_start:
{
uint8_t v_res_818_; lean_object* v_r_819_; 
v_res_818_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__10(v_x_817_);
v_r_819_ = lean_box(v_res_818_);
return v_r_819_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__11(lean_object* v_x_820_){
_start:
{
uint8_t v___x_821_; 
v___x_821_ = 4;
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__11___boxed(lean_object* v_x_822_){
_start:
{
uint8_t v_res_823_; lean_object* v_r_824_; 
v_res_823_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__11(v_x_822_);
v_r_824_ = lean_box(v_res_823_);
return v_r_824_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__12(lean_object* v_x_825_){
_start:
{
uint8_t v___x_826_; 
v___x_826_ = 6;
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__12___boxed(lean_object* v_x_827_){
_start:
{
uint8_t v_res_828_; lean_object* v_r_829_; 
v_res_828_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__12(v_x_827_);
v_r_829_ = lean_box(v_res_828_);
return v_r_829_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__13(lean_object* v_x_830_){
_start:
{
uint8_t v___x_831_; 
v___x_831_ = 10;
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__13___boxed(lean_object* v_x_832_){
_start:
{
uint8_t v_res_833_; lean_object* v_r_834_; 
v_res_833_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__13(v_x_832_);
v_r_834_ = lean_box(v_res_833_);
return v_r_834_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__14(lean_object* v_x_835_){
_start:
{
uint8_t v___x_836_; 
v___x_836_ = 11;
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__14___boxed(lean_object* v_x_837_){
_start:
{
uint8_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__14(v_x_837_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__15(lean_object* v_x_840_){
_start:
{
uint8_t v___x_841_; 
v___x_841_ = 12;
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__15___boxed(lean_object* v_x_842_){
_start:
{
uint8_t v_res_843_; lean_object* v_r_844_; 
v_res_843_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__15(v_x_842_);
v_r_844_ = lean_box(v_res_843_);
return v_r_844_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__16(lean_object* v_x_845_){
_start:
{
uint8_t v___x_846_; 
v___x_846_ = 13;
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__16___boxed(lean_object* v_x_847_){
_start:
{
uint8_t v_res_848_; lean_object* v_r_849_; 
v_res_848_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__16(v_x_847_);
v_r_849_ = lean_box(v_res_848_);
return v_r_849_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__17(lean_object* v_x_850_){
_start:
{
uint8_t v___x_851_; 
v___x_851_ = 14;
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__17___boxed(lean_object* v_x_852_){
_start:
{
uint8_t v_res_853_; lean_object* v_r_854_; 
v_res_853_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__17(v_x_852_);
v_r_854_ = lean_box(v_res_853_);
return v_r_854_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__18(lean_object* v_x_855_){
_start:
{
uint8_t v___x_856_; 
v___x_856_ = 15;
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__18___boxed(lean_object* v_x_857_){
_start:
{
uint8_t v_res_858_; lean_object* v_r_859_; 
v_res_858_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__18(v_x_857_);
v_r_859_ = lean_box(v_res_858_);
return v_r_859_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__19(lean_object* v_x_860_){
_start:
{
uint8_t v___x_861_; 
v___x_861_ = 16;
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__19___boxed(lean_object* v_x_862_){
_start:
{
uint8_t v_res_863_; lean_object* v_r_864_; 
v_res_863_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__19(v_x_862_);
v_r_864_ = lean_box(v_res_863_);
return v_r_864_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__20(lean_object* v_x_865_){
_start:
{
uint8_t v___x_866_; 
v___x_866_ = 17;
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__20___boxed(lean_object* v_x_867_){
_start:
{
uint8_t v_res_868_; lean_object* v_r_869_; 
v_res_868_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__20(v_x_867_);
v_r_869_ = lean_box(v_res_868_);
return v_r_869_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__21(lean_object* v_x_870_){
_start:
{
uint8_t v___x_871_; 
v___x_871_ = 18;
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__21___boxed(lean_object* v_x_872_){
_start:
{
uint8_t v_res_873_; lean_object* v_r_874_; 
v_res_873_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__21(v_x_872_);
v_r_874_ = lean_box(v_res_873_);
return v_r_874_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__22(lean_object* v_x_875_){
_start:
{
uint8_t v___x_876_; 
v___x_876_ = 19;
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__22___boxed(lean_object* v_x_877_){
_start:
{
uint8_t v_res_878_; lean_object* v_r_879_; 
v_res_878_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__22(v_x_877_);
v_r_879_ = lean_box(v_res_878_);
return v_r_879_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__23(lean_object* v_x_880_){
_start:
{
uint8_t v___x_881_; 
v___x_881_ = 20;
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__23___boxed(lean_object* v_x_882_){
_start:
{
uint8_t v_res_883_; lean_object* v_r_884_; 
v_res_883_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__23(v_x_882_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__24(lean_object* v_x_885_){
_start:
{
uint8_t v___x_886_; 
v___x_886_ = 21;
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__24___boxed(lean_object* v_x_887_){
_start:
{
uint8_t v_res_888_; lean_object* v_r_889_; 
v_res_888_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__24(v_x_887_);
v_r_889_ = lean_box(v_res_888_);
return v_r_889_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__25(lean_object* v_x_890_){
_start:
{
uint8_t v___x_891_; 
v___x_891_ = 23;
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__25___boxed(lean_object* v_x_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__25(v_x_892_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__26(lean_object* v_x_895_){
_start:
{
uint8_t v___x_896_; 
v___x_896_ = 27;
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__26___boxed(lean_object* v_x_897_){
_start:
{
uint8_t v_res_898_; lean_object* v_r_899_; 
v_res_898_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__26(v_x_897_);
v_r_899_ = lean_box(v_res_898_);
return v_r_899_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__27(lean_object* v_x_900_){
_start:
{
uint8_t v___x_901_; 
v___x_901_ = 22;
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__27___boxed(lean_object* v_x_902_){
_start:
{
uint8_t v_res_903_; lean_object* v_r_904_; 
v_res_903_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__27(v_x_902_);
v_r_904_ = lean_box(v_res_903_);
return v_r_904_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__28(lean_object* v_x_905_){
_start:
{
uint8_t v___x_906_; 
v___x_906_ = 24;
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__28___boxed(lean_object* v_x_907_){
_start:
{
uint8_t v_res_908_; lean_object* v_r_909_; 
v_res_908_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__28(v_x_907_);
v_r_909_ = lean_box(v_res_908_);
return v_r_909_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__29(lean_object* v_x_910_){
_start:
{
uint8_t v___x_911_; 
v___x_911_ = 25;
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__29___boxed(lean_object* v_x_912_){
_start:
{
uint8_t v_res_913_; lean_object* v_r_914_; 
v_res_913_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__29(v_x_912_);
v_r_914_ = lean_box(v_res_913_);
return v_r_914_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__30(lean_object* v_x_915_){
_start:
{
uint8_t v___x_916_; 
v___x_916_ = 26;
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__30___boxed(lean_object* v_x_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__30(v_x_917_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__31(lean_object* v_x_920_){
_start:
{
uint8_t v___x_921_; 
v___x_921_ = 29;
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__31___boxed(lean_object* v_x_922_){
_start:
{
uint8_t v_res_923_; lean_object* v_r_924_; 
v_res_923_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__31(v_x_922_);
v_r_924_ = lean_box(v_res_923_);
return v_r_924_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__32(lean_object* v_x_925_){
_start:
{
uint8_t v___x_926_; 
v___x_926_ = 30;
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__32___boxed(lean_object* v_x_927_){
_start:
{
uint8_t v_res_928_; lean_object* v_r_929_; 
v_res_928_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__32(v_x_927_);
v_r_929_ = lean_box(v_res_928_);
return v_r_929_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__33(lean_object* v_x_930_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = 33;
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__33___boxed(lean_object* v_x_932_){
_start:
{
uint8_t v_res_933_; lean_object* v_r_934_; 
v_res_933_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__33(v_x_932_);
v_r_934_ = lean_box(v_res_933_);
return v_r_934_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__34(lean_object* v_x_935_){
_start:
{
uint8_t v___x_936_; 
v___x_936_ = 34;
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__34___boxed(lean_object* v_x_937_){
_start:
{
uint8_t v_res_938_; lean_object* v_r_939_; 
v_res_938_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__34(v_x_937_);
v_r_939_ = lean_box(v_res_938_);
return v_r_939_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__35(lean_object* v_x_940_){
_start:
{
uint8_t v___x_941_; 
v___x_941_ = 35;
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__35___boxed(lean_object* v_x_942_){
_start:
{
uint8_t v_res_943_; lean_object* v_r_944_; 
v_res_943_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__35(v_x_942_);
v_r_944_ = lean_box(v_res_943_);
return v_r_944_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__36(lean_object* v_x_945_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = 36;
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__36___boxed(lean_object* v_x_947_){
_start:
{
uint8_t v_res_948_; lean_object* v_r_949_; 
v_res_948_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__36(v_x_947_);
v_r_949_ = lean_box(v_res_948_);
return v_r_949_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__37(lean_object* v_x_950_){
_start:
{
uint8_t v___x_951_; 
v___x_951_ = 38;
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__37___boxed(lean_object* v_x_952_){
_start:
{
uint8_t v_res_953_; lean_object* v_r_954_; 
v_res_953_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__37(v_x_952_);
v_r_954_ = lean_box(v_res_953_);
return v_r_954_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__38(lean_object* v_x_955_){
_start:
{
uint8_t v___x_956_; 
v___x_956_ = 37;
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__38___boxed(lean_object* v_x_957_){
_start:
{
uint8_t v_res_958_; lean_object* v_r_959_; 
v_res_958_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__38(v_x_957_);
v_r_959_ = lean_box(v_res_958_);
return v_r_959_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__39(lean_object* v_x_960_){
_start:
{
uint8_t v___x_961_; 
v___x_961_ = 39;
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__39___boxed(lean_object* v_x_962_){
_start:
{
uint8_t v_res_963_; lean_object* v_r_964_; 
v_res_963_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___lam__39(v_x_962_);
v_r_964_ = lean_box(v_res_963_);
return v_r_964_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2(void){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1));
v___x_968_ = lean_string_to_utf8(v___x_967_);
return v___x_968_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2);
v___x_970_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_970_, 0, v___x_969_);
return v___x_970_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__6(void){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__5));
v___x_974_ = lean_string_to_utf8(v___x_973_);
return v___x_974_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__7(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__6, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__6_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__6);
v___x_976_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_976_, 0, v___x_975_);
return v___x_976_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__10(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__9));
v___x_980_ = lean_string_to_utf8(v___x_979_);
return v___x_980_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__11(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__10, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__10_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__10);
v___x_982_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__14(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__13));
v___x_986_ = lean_string_to_utf8(v___x_985_);
return v___x_986_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__15(void){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__14, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__14_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__14);
v___x_988_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_988_, 0, v___x_987_);
return v___x_988_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__18(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__17));
v___x_992_ = lean_string_to_utf8(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__19(void){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__18, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__18_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__18);
v___x_994_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_994_, 0, v___x_993_);
return v___x_994_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__22(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__21));
v___x_998_ = lean_string_to_utf8(v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__23(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__22, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__22_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__22);
v___x_1000_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__26(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__25));
v___x_1004_ = lean_string_to_utf8(v___x_1003_);
return v___x_1004_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__27(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__26, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__26_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__26);
v___x_1006_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__30(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__29));
v___x_1010_ = lean_string_to_utf8(v___x_1009_);
return v___x_1010_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__31(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__30, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__30_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__30);
v___x_1012_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1012_, 0, v___x_1011_);
return v___x_1012_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__34(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__33));
v___x_1016_ = lean_string_to_utf8(v___x_1015_);
return v___x_1016_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__35(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__34, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__34_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__34);
v___x_1018_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__38(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__37));
v___x_1022_ = lean_string_to_utf8(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__39(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__38, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__38_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__38);
v___x_1024_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1024_, 0, v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__42(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__41));
v___x_1028_ = lean_string_to_utf8(v___x_1027_);
return v___x_1028_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__43(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__42, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__42_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__42);
v___x_1030_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1030_, 0, v___x_1029_);
return v___x_1030_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__46(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__45));
v___x_1034_ = lean_string_to_utf8(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__47(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__46, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__46_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__46);
v___x_1036_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1036_, 0, v___x_1035_);
return v___x_1036_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__50(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__49));
v___x_1040_ = lean_string_to_utf8(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__51(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__50, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__50_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__50);
v___x_1042_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1042_, 0, v___x_1041_);
return v___x_1042_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__54(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__53));
v___x_1046_ = lean_string_to_utf8(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__55(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__54, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__54_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__54);
v___x_1048_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1048_, 0, v___x_1047_);
return v___x_1048_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__58(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__57));
v___x_1052_ = lean_string_to_utf8(v___x_1051_);
return v___x_1052_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__59(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__58, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__58_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__58);
v___x_1054_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__62(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__61));
v___x_1058_ = lean_string_to_utf8(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__63(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__62, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__62_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__62);
v___x_1060_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1060_, 0, v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__66(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__65));
v___x_1064_ = lean_string_to_utf8(v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__67(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__66, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__66_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__66);
v___x_1066_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1066_, 0, v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__70(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__69));
v___x_1070_ = lean_string_to_utf8(v___x_1069_);
return v___x_1070_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__71(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__70, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__70_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__70);
v___x_1072_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1072_, 0, v___x_1071_);
return v___x_1072_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__74(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__73));
v___x_1076_ = lean_string_to_utf8(v___x_1075_);
return v___x_1076_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__75(void){
_start:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1077_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__74, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__74_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__74);
v___x_1078_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1078_, 0, v___x_1077_);
return v___x_1078_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__78(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__77));
v___x_1082_ = lean_string_to_utf8(v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__79(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__78, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__78_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__78);
v___x_1084_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1084_, 0, v___x_1083_);
return v___x_1084_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__82(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__81));
v___x_1088_ = lean_string_to_utf8(v___x_1087_);
return v___x_1088_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__83(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__82, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__82_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__82);
v___x_1090_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__86(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__85));
v___x_1094_ = lean_string_to_utf8(v___x_1093_);
return v___x_1094_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__87(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__86, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__86_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__86);
v___x_1096_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1096_, 0, v___x_1095_);
return v___x_1096_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__90(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__89));
v___x_1100_ = lean_string_to_utf8(v___x_1099_);
return v___x_1100_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__91(void){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__90, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__90_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__90);
v___x_1102_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__94(void){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__93));
v___x_1106_ = lean_string_to_utf8(v___x_1105_);
return v___x_1106_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__95(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__94, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__94_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__94);
v___x_1108_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1108_, 0, v___x_1107_);
return v___x_1108_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__98(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__97));
v___x_1112_ = lean_string_to_utf8(v___x_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__99(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__98, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__98_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__98);
v___x_1114_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1114_, 0, v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__102(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__101));
v___x_1118_ = lean_string_to_utf8(v___x_1117_);
return v___x_1118_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__103(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__102, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__102_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__102);
v___x_1120_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1120_, 0, v___x_1119_);
return v___x_1120_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__106(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__105));
v___x_1124_ = lean_string_to_utf8(v___x_1123_);
return v___x_1124_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__107(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__106, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__106_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__106);
v___x_1126_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__110(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__109));
v___x_1130_ = lean_string_to_utf8(v___x_1129_);
return v___x_1130_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__111(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__110, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__110_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__110);
v___x_1132_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1132_, 0, v___x_1131_);
return v___x_1132_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__114(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__113));
v___x_1136_ = lean_string_to_utf8(v___x_1135_);
return v___x_1136_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__115(void){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__114, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__114_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__114);
v___x_1138_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__118(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__117));
v___x_1142_ = lean_string_to_utf8(v___x_1141_);
return v___x_1142_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__119(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__118, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__118_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__118);
v___x_1144_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1144_, 0, v___x_1143_);
return v___x_1144_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__122(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__121));
v___x_1148_ = lean_string_to_utf8(v___x_1147_);
return v___x_1148_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__123(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__122, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__122_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__122);
v___x_1150_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1150_, 0, v___x_1149_);
return v___x_1150_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__126(void){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__125));
v___x_1154_ = lean_string_to_utf8(v___x_1153_);
return v___x_1154_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__127(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__126, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__126_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__126);
v___x_1156_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__130(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__129));
v___x_1160_ = lean_string_to_utf8(v___x_1159_);
return v___x_1160_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__131(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__130, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__130_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__130);
v___x_1162_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__134(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__133));
v___x_1166_ = lean_string_to_utf8(v___x_1165_);
return v___x_1166_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__135(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__134, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__134_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__134);
v___x_1168_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1168_, 0, v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__138(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__137));
v___x_1172_ = lean_string_to_utf8(v___x_1171_);
return v___x_1172_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__139(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__138, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__138_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__138);
v___x_1174_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__142(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__141));
v___x_1178_ = lean_string_to_utf8(v___x_1177_);
return v___x_1178_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__143(void){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__142, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__142_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__142);
v___x_1180_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__146(void){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__145));
v___x_1184_ = lean_string_to_utf8(v___x_1183_);
return v___x_1184_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__147(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__146, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__146_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__146);
v___x_1186_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1186_, 0, v___x_1185_);
return v___x_1186_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__150(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__149));
v___x_1190_ = lean_string_to_utf8(v___x_1189_);
return v___x_1190_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__151(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__150, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__150_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__150);
v___x_1192_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1192_, 0, v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__154(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__153));
v___x_1196_ = lean_string_to_utf8(v___x_1195_);
return v___x_1196_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__155(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__154, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__154_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__154);
v___x_1198_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__158(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__157));
v___x_1202_ = lean_string_to_utf8(v___x_1201_);
return v___x_1202_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__159(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__158, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__158_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__158);
v___x_1204_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_ByteArray_skipBytes___boxed), 2, 1);
lean_closure_set(v___x_1204_, 0, v___x_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(lean_object* v_a_1208_){
_start:
{
lean_object* v___f_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___f_1209_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0));
v___x_1210_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3);
lean_inc_ref(v_a_1208_);
v___x_1211_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1210_, v___f_1209_, v_a_1208_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1211_;
}
else
{
lean_object* v_err_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1367_; 
v_err_1212_ = lean_ctor_get(v___x_1211_, 1);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1367_ == 0)
{
lean_object* v_unused_1368_; 
v_unused_1368_ = lean_ctor_get(v___x_1211_, 0);
lean_dec(v_unused_1368_);
v___x_1214_ = v___x_1211_;
v_isShared_1215_ = v_isSharedCheck_1367_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_err_1212_);
lean_dec(v___x_1211_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1367_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v_idx_1216_; uint8_t v___x_1217_; 
v_idx_1216_ = lean_ctor_get(v_a_1208_, 1);
v___x_1217_ = lean_nat_dec_eq(v_idx_1216_, v_idx_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1219_; 
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 0, v_a_1208_);
v___x_1219_ = v___x_1214_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1208_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_err_1212_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
else
{
lean_object* v___f_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
lean_del_object(v___x_1214_);
lean_dec(v_err_1212_);
v___f_1221_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4));
v___x_1222_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__7, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__7_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__7);
lean_inc_ref(v_a_1208_);
v___x_1223_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1222_, v___f_1221_, v_a_1208_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1223_;
}
else
{
lean_object* v___f_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
lean_dec_ref_known(v___x_1223_, 2);
v___f_1224_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__8));
v___x_1225_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__11, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__11_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__11);
lean_inc_ref(v_a_1208_);
v___x_1226_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1225_, v___f_1224_, v_a_1208_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1226_;
}
else
{
lean_object* v___f_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
lean_dec_ref_known(v___x_1226_, 2);
v___f_1227_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__12));
v___x_1228_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__15, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__15_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__15);
lean_inc_ref(v_a_1208_);
v___x_1229_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1228_, v___f_1227_, v_a_1208_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1229_;
}
else
{
lean_object* v___f_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec_ref_known(v___x_1229_, 2);
v___f_1230_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__16));
v___x_1231_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__19, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__19_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__19);
lean_inc_ref(v_a_1208_);
v___x_1232_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1231_, v___f_1230_, v_a_1208_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1232_;
}
else
{
lean_object* v___f_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_dec_ref_known(v___x_1232_, 2);
v___f_1233_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__20));
v___x_1234_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__23, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__23_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__23);
lean_inc_ref(v_a_1208_);
v___x_1235_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1234_, v___f_1233_, v_a_1208_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1235_;
}
else
{
lean_object* v___f_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_dec_ref_known(v___x_1235_, 2);
v___f_1236_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__24));
v___x_1237_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__27, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__27_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__27);
lean_inc_ref(v_a_1208_);
v___x_1238_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1237_, v___f_1236_, v_a_1208_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1238_;
}
else
{
lean_object* v___f_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec_ref_known(v___x_1238_, 2);
v___f_1239_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__28));
v___x_1240_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__31, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__31_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__31);
lean_inc_ref(v_a_1208_);
v___x_1241_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1240_, v___f_1239_, v_a_1208_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1241_;
}
else
{
lean_object* v___f_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
lean_dec_ref_known(v___x_1241_, 2);
v___f_1242_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__32));
v___x_1243_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__35, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__35_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__35);
lean_inc_ref(v_a_1208_);
v___x_1244_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1243_, v___f_1242_, v_a_1208_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1244_;
}
else
{
lean_object* v___f_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
lean_dec_ref_known(v___x_1244_, 2);
v___f_1245_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__36));
v___x_1246_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__39, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__39_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__39);
lean_inc_ref(v_a_1208_);
v___x_1247_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1246_, v___f_1245_, v_a_1208_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1247_;
}
else
{
lean_object* v___f_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec_ref_known(v___x_1247_, 2);
v___f_1248_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__40));
v___x_1249_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__43, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__43_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__43);
lean_inc_ref(v_a_1208_);
v___x_1250_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1249_, v___f_1248_, v_a_1208_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1250_;
}
else
{
lean_object* v___f_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_dec_ref_known(v___x_1250_, 2);
v___f_1251_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__44));
v___x_1252_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__47, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__47_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__47);
lean_inc_ref(v_a_1208_);
v___x_1253_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1252_, v___f_1251_, v_a_1208_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1253_;
}
else
{
lean_object* v___f_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
lean_dec_ref_known(v___x_1253_, 2);
v___f_1254_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__48));
v___x_1255_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__51, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__51_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__51);
lean_inc_ref(v_a_1208_);
v___x_1256_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1255_, v___f_1254_, v_a_1208_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1256_;
}
else
{
lean_object* v___f_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_dec_ref_known(v___x_1256_, 2);
v___f_1257_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__52));
v___x_1258_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__55, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__55_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__55);
lean_inc_ref(v_a_1208_);
v___x_1259_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1258_, v___f_1257_, v_a_1208_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1259_;
}
else
{
lean_object* v___f_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_dec_ref_known(v___x_1259_, 2);
v___f_1260_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__56));
v___x_1261_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__59, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__59_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__59);
lean_inc_ref(v_a_1208_);
v___x_1262_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1261_, v___f_1260_, v_a_1208_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1262_;
}
else
{
lean_object* v___f_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_dec_ref_known(v___x_1262_, 2);
v___f_1263_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__60));
v___x_1264_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__63, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__63_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__63);
lean_inc_ref(v_a_1208_);
v___x_1265_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1264_, v___f_1263_, v_a_1208_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1265_;
}
else
{
lean_object* v___f_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_dec_ref_known(v___x_1265_, 2);
v___f_1266_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__64));
v___x_1267_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__67, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__67_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__67);
lean_inc_ref(v_a_1208_);
v___x_1268_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1267_, v___f_1266_, v_a_1208_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1268_;
}
else
{
lean_object* v___f_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec_ref_known(v___x_1268_, 2);
v___f_1269_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__68));
v___x_1270_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__71, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__71_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__71);
lean_inc_ref(v_a_1208_);
v___x_1271_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1270_, v___f_1269_, v_a_1208_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1271_;
}
else
{
lean_object* v___f_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_dec_ref_known(v___x_1271_, 2);
v___f_1272_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__72));
v___x_1273_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__75, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__75_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__75);
lean_inc_ref(v_a_1208_);
v___x_1274_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1273_, v___f_1272_, v_a_1208_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1274_;
}
else
{
lean_object* v___f_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec_ref_known(v___x_1274_, 2);
v___f_1275_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__76));
v___x_1276_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__79, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__79_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__79);
lean_inc_ref(v_a_1208_);
v___x_1277_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1276_, v___f_1275_, v_a_1208_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1277_;
}
else
{
lean_object* v___f_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
lean_dec_ref_known(v___x_1277_, 2);
v___f_1278_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__80));
v___x_1279_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__83, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__83_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__83);
lean_inc_ref(v_a_1208_);
v___x_1280_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1279_, v___f_1278_, v_a_1208_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1280_;
}
else
{
lean_object* v___f_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
lean_dec_ref_known(v___x_1280_, 2);
v___f_1281_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__84));
v___x_1282_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__87, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__87_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__87);
lean_inc_ref(v_a_1208_);
v___x_1283_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1282_, v___f_1281_, v_a_1208_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1283_;
}
else
{
lean_object* v___f_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
lean_dec_ref_known(v___x_1283_, 2);
v___f_1284_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__88));
v___x_1285_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__91, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__91_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__91);
lean_inc_ref(v_a_1208_);
v___x_1286_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1285_, v___f_1284_, v_a_1208_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1286_;
}
else
{
lean_object* v___f_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
lean_dec_ref_known(v___x_1286_, 2);
v___f_1287_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__92));
v___x_1288_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__95, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__95_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__95);
lean_inc_ref(v_a_1208_);
v___x_1289_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1288_, v___f_1287_, v_a_1208_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1289_;
}
else
{
lean_object* v___f_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
lean_dec_ref_known(v___x_1289_, 2);
v___f_1290_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__96));
v___x_1291_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__99, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__99_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__99);
lean_inc_ref(v_a_1208_);
v___x_1292_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1291_, v___f_1290_, v_a_1208_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1292_;
}
else
{
lean_object* v___f_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec_ref_known(v___x_1292_, 2);
v___f_1293_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__100));
v___x_1294_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__103, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__103_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__103);
lean_inc_ref(v_a_1208_);
v___x_1295_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1294_, v___f_1293_, v_a_1208_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1295_;
}
else
{
lean_object* v___f_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
lean_dec_ref_known(v___x_1295_, 2);
v___f_1296_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__104));
v___x_1297_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__107, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__107_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__107);
lean_inc_ref(v_a_1208_);
v___x_1298_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1297_, v___f_1296_, v_a_1208_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1298_;
}
else
{
lean_object* v___f_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec_ref_known(v___x_1298_, 2);
v___f_1299_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__108));
v___x_1300_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__111, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__111_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__111);
lean_inc_ref(v_a_1208_);
v___x_1301_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1300_, v___f_1299_, v_a_1208_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1301_;
}
else
{
lean_object* v___f_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec_ref_known(v___x_1301_, 2);
v___f_1302_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__112));
v___x_1303_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__115, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__115_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__115);
lean_inc_ref(v_a_1208_);
v___x_1304_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1303_, v___f_1302_, v_a_1208_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1304_;
}
else
{
lean_object* v___f_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec_ref_known(v___x_1304_, 2);
v___f_1305_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__116));
v___x_1306_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__119, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__119_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__119);
lean_inc_ref(v_a_1208_);
v___x_1307_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1306_, v___f_1305_, v_a_1208_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1307_;
}
else
{
lean_object* v___f_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec_ref_known(v___x_1307_, 2);
v___f_1308_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__120));
v___x_1309_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__123, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__123_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__123);
lean_inc_ref(v_a_1208_);
v___x_1310_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1309_, v___f_1308_, v_a_1208_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1310_;
}
else
{
lean_object* v___f_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_dec_ref_known(v___x_1310_, 2);
v___f_1311_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__124));
v___x_1312_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__127, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__127_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__127);
lean_inc_ref(v_a_1208_);
v___x_1313_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1312_, v___f_1311_, v_a_1208_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1313_;
}
else
{
lean_object* v___f_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec_ref_known(v___x_1313_, 2);
v___f_1314_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__128));
v___x_1315_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__131, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__131_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__131);
lean_inc_ref(v_a_1208_);
v___x_1316_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1315_, v___f_1314_, v_a_1208_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1316_;
}
else
{
lean_object* v___f_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec_ref_known(v___x_1316_, 2);
v___f_1317_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__132));
v___x_1318_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__135, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__135_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__135);
lean_inc_ref(v_a_1208_);
v___x_1319_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1318_, v___f_1317_, v_a_1208_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1319_;
}
else
{
lean_object* v___f_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec_ref_known(v___x_1319_, 2);
v___f_1320_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__136));
v___x_1321_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__139, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__139_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__139);
lean_inc_ref(v_a_1208_);
v___x_1322_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1321_, v___f_1320_, v_a_1208_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1322_;
}
else
{
lean_object* v___f_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec_ref_known(v___x_1322_, 2);
v___f_1323_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__140));
v___x_1324_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__143, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__143_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__143);
lean_inc_ref(v_a_1208_);
v___x_1325_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1324_, v___f_1323_, v_a_1208_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1325_;
}
else
{
lean_object* v___f_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref_known(v___x_1325_, 2);
v___f_1326_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__144));
v___x_1327_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__147, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__147_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__147);
lean_inc_ref(v_a_1208_);
v___x_1328_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1327_, v___f_1326_, v_a_1208_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1328_;
}
else
{
lean_object* v___f_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_dec_ref_known(v___x_1328_, 2);
v___f_1329_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__148));
v___x_1330_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__151, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__151_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__151);
lean_inc_ref(v_a_1208_);
v___x_1331_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1330_, v___f_1329_, v_a_1208_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1331_;
}
else
{
lean_object* v___f_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
lean_dec_ref_known(v___x_1331_, 2);
v___f_1332_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__152));
v___x_1333_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__155, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__155_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__155);
lean_inc_ref(v_a_1208_);
v___x_1334_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1333_, v___f_1332_, v_a_1208_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1334_;
}
else
{
lean_object* v___f_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_dec_ref_known(v___x_1334_, 2);
v___f_1335_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__156));
v___x_1336_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__159, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__159_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__159);
lean_inc_ref(v_a_1208_);
v___x_1337_ = l_Functor_mapRev___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___redArg(v___x_1336_, v___f_1335_, v_a_1208_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_dec_ref(v_a_1208_);
return v___x_1337_;
}
else
{
lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1364_; 
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; lean_object* v_unused_1366_; 
v_unused_1365_ = lean_ctor_get(v___x_1337_, 1);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v___x_1337_, 0);
lean_dec(v_unused_1366_);
v___x_1339_ = v___x_1337_;
v_isShared_1340_ = v_isSharedCheck_1364_;
goto v_resetjp_1338_;
}
else
{
lean_dec(v___x_1337_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1364_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___f_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v_snd_1345_; lean_object* v_snd_1346_; uint8_t v___x_1347_; 
v___f_1341_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_1342_ = lean_unsigned_to_nat(64u);
v___x_1343_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1208_);
v___x_1344_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1341_, v___x_1342_, v___x_1343_, v_a_1208_);
v_snd_1345_ = lean_ctor_get(v___x_1344_, 1);
lean_inc(v_snd_1345_);
v_snd_1346_ = lean_ctor_get(v_snd_1345_, 1);
v___x_1347_ = lean_unbox(v_snd_1346_);
if (v___x_1347_ == 0)
{
lean_object* v_fst_1348_; lean_object* v_fst_1349_; uint8_t v___x_1350_; 
v_fst_1348_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_fst_1348_);
lean_dec_ref(v___x_1344_);
v_fst_1349_ = lean_ctor_get(v_snd_1345_, 0);
lean_inc(v_fst_1349_);
lean_dec(v_snd_1345_);
v___x_1350_ = lean_nat_dec_eq(v_fst_1348_, v___x_1343_);
lean_dec(v_fst_1348_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1353_; 
lean_dec_ref(v_a_1208_);
v___x_1351_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__161));
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1351_);
lean_ctor_set(v___x_1339_, 0, v_fst_1349_);
v___x_1353_ = v___x_1339_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_fst_1349_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1357_; 
lean_dec(v_fst_1349_);
v___x_1355_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1355_);
lean_ctor_set(v___x_1339_, 0, v_a_1208_);
v___x_1357_ = v___x_1339_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1208_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v___x_1355_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
else
{
lean_object* v_fst_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
lean_dec_ref(v___x_1344_);
lean_dec_ref(v_a_1208_);
v_fst_1359_ = lean_ctor_get(v_snd_1345_, 0);
lean_inc(v_fst_1359_);
lean_dec(v_snd_1345_);
v___x_1360_ = lean_box(0);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1360_);
lean_ctor_set(v___x_1339_, 0, v_fst_1359_);
v___x_1362_ = v___x_1339_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_fst_1359_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
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
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0(uint8_t v_b_1369_){
_start:
{
uint8_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = 32;
v___x_1371_ = lean_uint8_dec_eq(v_b_1369_, v___x_1370_);
if (v___x_1371_ == 0)
{
uint8_t v___x_1372_; 
v___x_1372_ = 1;
return v___x_1372_;
}
else
{
uint8_t v___x_1373_; 
v___x_1373_ = 0;
return v___x_1373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0___boxed(lean_object* v_b_1374_){
_start:
{
uint8_t v_b_boxed_1375_; uint8_t v_res_1376_; lean_object* v_r_1377_; 
v_b_boxed_1375_ = lean_unbox(v_b_1374_);
v_res_1376_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0(v_b_boxed_1375_);
v_r_1377_ = lean_box(v_res_1376_);
return v_r_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(lean_object* v_limits_1382_, lean_object* v_a_1383_){
_start:
{
lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v_maxUriLength_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v_snd_1393_; lean_object* v_snd_1394_; uint8_t v___x_1395_; 
v_maxUriLength_1389_ = lean_ctor_get(v_limits_1382_, 4);
v___f_1390_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0));
v___x_1391_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1383_);
v___x_1392_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1390_, v_maxUriLength_1389_, v___x_1391_, v_a_1383_);
v_snd_1393_ = lean_ctor_get(v___x_1392_, 1);
lean_inc(v_snd_1393_);
v_snd_1394_ = lean_ctor_get(v_snd_1393_, 1);
v___x_1395_ = lean_unbox(v_snd_1394_);
if (v___x_1395_ == 0)
{
lean_object* v_fst_1396_; lean_object* v_fst_1397_; lean_object* v_array_1398_; lean_object* v_idx_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1426_; 
v_fst_1396_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_fst_1396_);
lean_dec_ref(v___x_1392_);
v_fst_1397_ = lean_ctor_get(v_snd_1393_, 0);
lean_inc(v_fst_1397_);
lean_dec(v_snd_1393_);
v_array_1398_ = lean_ctor_get(v_a_1383_, 0);
v_idx_1399_ = lean_ctor_get(v_a_1383_, 1);
v_isSharedCheck_1426_ = !lean_is_exclusive(v_a_1383_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1401_ = v_a_1383_;
v_isShared_1402_ = v_isSharedCheck_1426_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_idx_1399_);
lean_inc(v_array_1398_);
lean_dec(v_a_1383_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1426_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v_lower_1404_; lean_object* v_upper_1405_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___y_1423_; uint8_t v___x_1425_; 
v___x_1420_ = lean_nat_add(v_idx_1399_, v_fst_1396_);
lean_dec(v_fst_1396_);
v___x_1421_ = lean_byte_array_size(v_array_1398_);
v___x_1425_ = lean_nat_dec_le(v_idx_1399_, v___x_1391_);
if (v___x_1425_ == 0)
{
v___y_1423_ = v_idx_1399_;
goto v___jp_1422_;
}
else
{
lean_dec(v_idx_1399_);
v___y_1423_ = v___x_1391_;
goto v___jp_1422_;
}
v___jp_1403_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1406_ = l_ByteArray_toByteSlice(v_array_1398_, v_lower_1404_, v_upper_1405_);
v___x_1407_ = l_ByteSlice_size(v___x_1406_);
v___x_1408_ = lean_nat_dec_eq(v___x_1407_, v_maxUriLength_1389_);
lean_dec(v___x_1407_);
if (v___x_1408_ == 0)
{
lean_del_object(v___x_1401_);
v___y_1385_ = v___x_1406_;
v___y_1386_ = v_fst_1397_;
goto v___jp_1384_;
}
else
{
lean_object* v_array_1409_; lean_object* v_idx_1410_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v_array_1409_ = lean_ctor_get(v_fst_1397_, 0);
v_idx_1410_ = lean_ctor_get(v_fst_1397_, 1);
v___x_1411_ = lean_byte_array_size(v_array_1409_);
v___x_1412_ = lean_nat_dec_lt(v_idx_1410_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_del_object(v___x_1401_);
v___y_1385_ = v___x_1406_;
v___y_1386_ = v_fst_1397_;
goto v___jp_1384_;
}
else
{
uint8_t v___x_1413_; uint8_t v___x_1414_; uint8_t v___x_1415_; 
v___x_1413_ = lean_byte_array_fget(v_array_1409_, v_idx_1410_);
v___x_1414_ = 32;
v___x_1415_ = lean_uint8_dec_eq(v___x_1413_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
lean_dec_ref(v___x_1406_);
v___x_1416_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2));
if (v_isShared_1402_ == 0)
{
lean_ctor_set_tag(v___x_1401_, 1);
lean_ctor_set(v___x_1401_, 1, v___x_1416_);
lean_ctor_set(v___x_1401_, 0, v_fst_1397_);
v___x_1418_ = v___x_1401_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_fst_1397_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
else
{
lean_del_object(v___x_1401_);
v___y_1385_ = v___x_1406_;
v___y_1386_ = v_fst_1397_;
goto v___jp_1384_;
}
}
}
}
v___jp_1422_:
{
uint8_t v___x_1424_; 
v___x_1424_ = lean_nat_dec_le(v___x_1420_, v___x_1421_);
if (v___x_1424_ == 0)
{
lean_dec(v___x_1420_);
v_lower_1404_ = v___y_1423_;
v_upper_1405_ = v___x_1421_;
goto v___jp_1403_;
}
else
{
v_lower_1404_ = v___y_1423_;
v_upper_1405_ = v___x_1420_;
goto v___jp_1403_;
}
}
}
}
else
{
lean_object* v_fst_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1435_; 
lean_dec_ref(v___x_1392_);
lean_dec_ref(v_a_1383_);
v_fst_1427_ = lean_ctor_get(v_snd_1393_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_snd_1393_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v_snd_1393_, 1);
lean_dec(v_unused_1436_);
v___x_1429_ = v_snd_1393_;
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_fst_1427_);
lean_dec(v_snd_1393_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
v___x_1431_ = lean_box(0);
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 1);
lean_ctor_set(v___x_1429_, 1, v___x_1431_);
v___x_1433_ = v___x_1429_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_fst_1427_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
v___jp_1384_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = l_ByteSlice_toByteArray(v___y_1385_);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___y_1386_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
return v___x_1388_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___boxed(lean_object* v_limits_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(v_limits_1437_, v_a_1438_);
lean_dec_ref(v_limits_1437_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0(lean_object* v___x_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = l_Std_Http_URI_Parser_parseRequestTarget(v___x_1443_, v___y_1444_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_pos_1446_; lean_object* v_array_1447_; lean_object* v_idx_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v_pos_1446_ = lean_ctor_get(v___x_1445_, 0);
v_array_1447_ = lean_ctor_get(v_pos_1446_, 0);
v_idx_1448_ = lean_ctor_get(v_pos_1446_, 1);
v___x_1449_ = lean_byte_array_size(v_array_1447_);
v___x_1450_ = lean_nat_dec_lt(v_idx_1448_, v___x_1449_);
if (v___x_1450_ == 0)
{
return v___x_1445_;
}
else
{
lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1458_; 
lean_inc(v_pos_1446_);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1458_ == 0)
{
lean_object* v_unused_1459_; lean_object* v_unused_1460_; 
v_unused_1459_ = lean_ctor_get(v___x_1445_, 1);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v___x_1445_, 0);
lean_dec(v_unused_1460_);
v___x_1452_ = v___x_1445_;
v_isShared_1453_ = v_isSharedCheck_1458_;
goto v_resetjp_1451_;
}
else
{
lean_dec(v___x_1445_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1458_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; lean_object* v___x_1456_; 
v___x_1454_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1));
if (v_isShared_1453_ == 0)
{
lean_ctor_set_tag(v___x_1452_, 1);
lean_ctor_set(v___x_1452_, 1, v___x_1454_);
v___x_1456_ = v___x_1452_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_pos_1446_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v___x_1454_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
else
{
return v___x_1445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(lean_object* v_limits_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(v_limits_1471_, v_a_1472_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_pos_1474_; lean_object* v_res_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1552_; 
v_pos_1474_ = lean_ctor_get(v___x_1473_, 0);
v_res_1475_ = lean_ctor_get(v___x_1473_, 1);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1477_ = v___x_1473_;
v_isShared_1478_ = v_isSharedCheck_1552_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_res_1475_);
lean_inc(v_pos_1474_);
lean_dec(v___x_1473_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1552_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v_array_1479_; lean_object* v_idx_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
v_array_1479_ = lean_ctor_get(v_pos_1474_, 0);
v_idx_1480_ = lean_ctor_get(v_pos_1474_, 1);
v___x_1481_ = lean_byte_array_size(v_array_1479_);
v___x_1482_ = lean_nat_dec_lt(v_idx_1480_, v___x_1481_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1485_; 
lean_dec(v_res_1475_);
v___x_1483_ = lean_box(0);
if (v_isShared_1478_ == 0)
{
lean_ctor_set_tag(v___x_1477_, 1);
lean_ctor_set(v___x_1477_, 1, v___x_1483_);
v___x_1485_ = v___x_1477_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_pos_1474_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
else
{
uint8_t v___x_1487_; uint8_t v_got_1488_; uint8_t v___x_1489_; 
v___x_1487_ = 32;
v_got_1488_ = lean_byte_array_fget(v_array_1479_, v_idx_1480_);
v___x_1489_ = lean_uint8_dec_eq(v_got_1488_, v___x_1487_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
lean_dec(v_res_1475_);
v___x_1490_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_1478_ == 0)
{
lean_ctor_set_tag(v___x_1477_, 1);
lean_ctor_set(v___x_1477_, 1, v___x_1490_);
v___x_1492_ = v___x_1477_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_pos_1474_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
else
{
lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1549_; 
lean_inc(v_idx_1480_);
lean_inc_ref(v_array_1479_);
v_isSharedCheck_1549_ = !lean_is_exclusive(v_pos_1474_);
if (v_isSharedCheck_1549_ == 0)
{
lean_object* v_unused_1550_; lean_object* v_unused_1551_; 
v_unused_1550_ = lean_ctor_get(v_pos_1474_, 1);
lean_dec(v_unused_1550_);
v_unused_1551_ = lean_ctor_get(v_pos_1474_, 0);
lean_dec(v_unused_1551_);
v___x_1495_ = v_pos_1474_;
v_isShared_1496_ = v_isSharedCheck_1549_;
goto v_resetjp_1494_;
}
else
{
lean_dec(v_pos_1474_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1549_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___x_1497_ = lean_unsigned_to_nat(1u);
v___x_1498_ = lean_nat_add(v_idx_1480_, v___x_1497_);
lean_dec(v_idx_1480_);
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 1, v___x_1498_);
v___x_1500_ = v___x_1495_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_array_1479_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
lean_object* v___f_1501_; lean_object* v___x_1502_; 
v___f_1501_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1));
v___x_1502_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1501_, v_res_1475_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1513_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1505_ = v___x_1502_;
v_isShared_1506_ = v_isSharedCheck_1513_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1513_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set_tag(v___x_1505_, 1);
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_object* v___x_1510_; 
if (v_isShared_1478_ == 0)
{
lean_ctor_set_tag(v___x_1477_, 1);
lean_ctor_set(v___x_1477_, 1, v___x_1508_);
lean_ctor_set(v___x_1477_, 0, v___x_1500_);
v___x_1510_ = v___x_1477_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1515_; 
lean_del_object(v___x_1477_);
v_a_1514_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v___x_1502_, 1);
v___x_1515_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v___x_1500_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_pos_1516_; lean_object* v_res_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v_pos_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_pos_1516_);
v_res_1517_ = lean_ctor_get(v___x_1515_, 1);
lean_inc(v_res_1517_);
lean_dec_ref_known(v___x_1515_, 2);
v___x_1518_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_1519_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_1518_, v_pos_1516_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_pos_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1528_; 
v_pos_1520_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1528_ == 0)
{
lean_object* v_unused_1529_; 
v_unused_1529_ = lean_ctor_get(v___x_1519_, 1);
lean_dec(v_unused_1529_);
v___x_1522_ = v___x_1519_;
v_isShared_1523_ = v_isSharedCheck_1528_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_pos_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1528_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1524_, 0, v_a_1514_);
lean_ctor_set(v___x_1524_, 1, v_res_1517_);
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 1, v___x_1524_);
v___x_1526_ = v___x_1522_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_pos_1520_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v___x_1524_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
else
{
lean_object* v_pos_1530_; lean_object* v_err_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec(v_res_1517_);
lean_dec(v_a_1514_);
v_pos_1530_ = lean_ctor_get(v___x_1519_, 0);
v_err_1531_ = lean_ctor_get(v___x_1519_, 1);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1519_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_err_1531_);
lean_inc(v_pos_1530_);
lean_dec(v___x_1519_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_pos_1530_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v_err_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
else
{
lean_object* v_pos_1539_; lean_object* v_err_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
lean_dec(v_a_1514_);
v_pos_1539_ = lean_ctor_get(v___x_1515_, 0);
v_err_1540_ = lean_ctor_get(v___x_1515_, 1);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1515_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_err_1540_);
lean_inc(v_pos_1539_);
lean_dec(v___x_1515_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_pos_1539_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_err_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
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
lean_object* v_pos_1553_; lean_object* v_err_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_pos_1553_ = lean_ctor_get(v___x_1473_, 0);
v_err_1554_ = lean_ctor_get(v___x_1473_, 1);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1473_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_err_1554_);
lean_inc(v_pos_1553_);
lean_dec(v___x_1473_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_pos_1553_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_err_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___boxed(lean_object* v_limits_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(v_limits_1562_, v_a_1563_);
lean_dec_ref(v_limits_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine(lean_object* v_limits_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(v_limits_1568_, v_a_1569_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_pos_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1662_; 
v_pos_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1662_ == 0)
{
lean_object* v_unused_1663_; 
v_unused_1663_ = lean_ctor_get(v___x_1570_, 1);
lean_dec(v_unused_1663_);
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1662_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_pos_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1662_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1575_; 
v___x_1575_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(v_pos_1571_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_pos_1576_; lean_object* v_res_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1652_; 
v_pos_1576_ = lean_ctor_get(v___x_1575_, 0);
v_res_1577_ = lean_ctor_get(v___x_1575_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1579_ = v___x_1575_;
v_isShared_1580_ = v_isSharedCheck_1652_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_res_1577_);
lean_inc(v_pos_1576_);
lean_dec(v___x_1575_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1652_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v_array_1581_; lean_object* v_idx_1582_; lean_object* v___x_1583_; uint8_t v___x_1584_; 
v_array_1581_ = lean_ctor_get(v_pos_1576_, 0);
v_idx_1582_ = lean_ctor_get(v_pos_1576_, 1);
v___x_1583_ = lean_byte_array_size(v_array_1581_);
v___x_1584_ = lean_nat_dec_lt(v_idx_1582_, v___x_1583_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
lean_dec(v_res_1577_);
lean_del_object(v___x_1573_);
v___x_1585_ = lean_box(0);
if (v_isShared_1580_ == 0)
{
lean_ctor_set_tag(v___x_1579_, 1);
lean_ctor_set(v___x_1579_, 1, v___x_1585_);
v___x_1587_ = v___x_1579_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_pos_1576_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
else
{
uint8_t v___x_1589_; uint8_t v_got_1590_; uint8_t v___x_1591_; 
v___x_1589_ = 32;
v_got_1590_ = lean_byte_array_fget(v_array_1581_, v_idx_1582_);
v___x_1591_ = lean_uint8_dec_eq(v_got_1590_, v___x_1589_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; lean_object* v___x_1594_; 
lean_dec(v_res_1577_);
lean_del_object(v___x_1573_);
v___x_1592_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_1580_ == 0)
{
lean_ctor_set_tag(v___x_1579_, 1);
lean_ctor_set(v___x_1579_, 1, v___x_1592_);
v___x_1594_ = v___x_1579_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_pos_1576_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
else
{
lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1649_; 
lean_inc(v_idx_1582_);
lean_inc_ref(v_array_1581_);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_pos_1576_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; lean_object* v_unused_1651_; 
v_unused_1650_ = lean_ctor_get(v_pos_1576_, 1);
lean_dec(v_unused_1650_);
v_unused_1651_ = lean_ctor_get(v_pos_1576_, 0);
lean_dec(v_unused_1651_);
v___x_1597_ = v_pos_1576_;
v_isShared_1598_ = v_isSharedCheck_1649_;
goto v_resetjp_1596_;
}
else
{
lean_dec(v_pos_1576_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1649_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1599_ = lean_unsigned_to_nat(1u);
v___x_1600_ = lean_nat_add(v_idx_1582_, v___x_1599_);
lean_dec(v_idx_1582_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v___x_1600_);
v___x_1602_ = v___x_1597_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_array_1581_);
lean_ctor_set(v_reuseFailAlloc_1648_, 1, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1603_; 
v___x_1603_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(v_limits_1568_, v___x_1602_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_pos_1604_; lean_object* v_res_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1638_; 
v_pos_1604_ = lean_ctor_get(v___x_1603_, 0);
v_res_1605_ = lean_ctor_get(v___x_1603_, 1);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1607_ = v___x_1603_;
v_isShared_1608_ = v_isSharedCheck_1638_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_res_1605_);
lean_inc(v_pos_1604_);
lean_dec(v___x_1603_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1638_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v_snd_1614_; lean_object* v_fst_1615_; lean_object* v_fst_1616_; lean_object* v_snd_1617_; uint8_t v___x_1629_; 
v_snd_1614_ = lean_ctor_get(v_res_1605_, 1);
lean_inc(v_snd_1614_);
v_fst_1615_ = lean_ctor_get(v_res_1605_, 0);
lean_inc(v_fst_1615_);
lean_dec(v_res_1605_);
v_fst_1616_ = lean_ctor_get(v_snd_1614_, 0);
lean_inc(v_fst_1616_);
v_snd_1617_ = lean_ctor_get(v_snd_1614_, 1);
lean_inc(v_snd_1617_);
lean_dec(v_snd_1614_);
v___x_1629_ = lean_nat_dec_eq(v_fst_1616_, v___x_1599_);
if (v___x_1629_ == 0)
{
lean_del_object(v___x_1573_);
goto v___jp_1618_;
}
else
{
uint8_t v___x_1630_; 
v___x_1630_ = lean_nat_dec_eq(v_snd_1617_, v___x_1599_);
if (v___x_1630_ == 0)
{
lean_del_object(v___x_1573_);
goto v___jp_1618_;
}
else
{
uint8_t v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; uint8_t v___x_1634_; lean_object* v___x_1636_; 
lean_dec(v_snd_1617_);
lean_dec(v_fst_1616_);
lean_del_object(v___x_1607_);
lean_del_object(v___x_1579_);
v___x_1631_ = 1;
v___x_1632_ = l_Std_Http_Headers_empty;
v___x_1633_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1633_, 0, v_fst_1615_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = lean_unbox(v_res_1577_);
lean_dec(v_res_1577_);
lean_ctor_set_uint8(v___x_1633_, sizeof(void*)*2, v___x_1634_);
lean_ctor_set_uint8(v___x_1633_, sizeof(void*)*2 + 1, v___x_1631_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 1, v___x_1633_);
lean_ctor_set(v___x_1573_, 0, v_pos_1604_);
v___x_1636_ = v___x_1573_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v___x_1633_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
v___jp_1609_:
{
lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1610_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseRequestLine___closed__1));
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 1);
lean_ctor_set(v___x_1607_, 1, v___x_1610_);
v___x_1612_ = v___x_1607_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
v___jp_1618_:
{
uint8_t v___x_1619_; 
v___x_1619_ = lean_nat_dec_eq(v_fst_1616_, v___x_1599_);
lean_dec(v_fst_1616_);
if (v___x_1619_ == 0)
{
lean_dec(v_snd_1617_);
lean_dec(v_fst_1615_);
lean_del_object(v___x_1579_);
lean_dec(v_res_1577_);
goto v___jp_1609_;
}
else
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = lean_unsigned_to_nat(0u);
v___x_1621_ = lean_nat_dec_eq(v_snd_1617_, v___x_1620_);
lean_dec(v_snd_1617_);
if (v___x_1621_ == 0)
{
lean_dec(v_fst_1615_);
lean_del_object(v___x_1579_);
lean_dec(v_res_1577_);
goto v___jp_1609_;
}
else
{
uint8_t v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; lean_object* v___x_1627_; 
lean_del_object(v___x_1607_);
v___x_1622_ = 0;
v___x_1623_ = l_Std_Http_Headers_empty;
v___x_1624_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1624_, 0, v_fst_1615_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = lean_unbox(v_res_1577_);
lean_dec(v_res_1577_);
lean_ctor_set_uint8(v___x_1624_, sizeof(void*)*2, v___x_1625_);
lean_ctor_set_uint8(v___x_1624_, sizeof(void*)*2 + 1, v___x_1622_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 1, v___x_1624_);
lean_ctor_set(v___x_1579_, 0, v_pos_1604_);
v___x_1627_ = v___x_1579_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v___x_1624_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1639_; lean_object* v_err_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_del_object(v___x_1579_);
lean_dec(v_res_1577_);
lean_del_object(v___x_1573_);
v_pos_1639_ = lean_ctor_get(v___x_1603_, 0);
v_err_1640_ = lean_ctor_get(v___x_1603_, 1);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1603_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_err_1640_);
lean_inc(v_pos_1639_);
lean_dec(v___x_1603_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_pos_1639_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_err_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
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
lean_object* v_pos_1653_; lean_object* v_err_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_del_object(v___x_1573_);
v_pos_1653_ = lean_ctor_get(v___x_1575_, 0);
v_err_1654_ = lean_ctor_get(v___x_1575_, 1);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1575_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_err_1654_);
lean_inc(v_pos_1653_);
lean_dec(v___x_1575_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_pos_1653_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_err_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
else
{
lean_object* v_pos_1664_; lean_object* v_err_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
v_pos_1664_ = lean_ctor_get(v___x_1570_, 0);
v_err_1665_ = lean_ctor_get(v___x_1570_, 1);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1570_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_err_1665_);
lean_inc(v_pos_1664_);
lean_dec(v___x_1570_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_pos_1664_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_err_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine___boxed(lean_object* v_limits_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Std_Http_Protocol_H1_parseRequestLine(v_limits_1673_, v_a_1674_);
lean_dec_ref(v_limits_1673_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion(lean_object* v_limits_1676_, lean_object* v_a_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(v_limits_1676_, v_a_1677_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_pos_1679_; lean_object* v___x_1680_; 
v_pos_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_pos_1679_);
lean_dec_ref_known(v___x_1678_, 2);
v___x_1680_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(v_pos_1679_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_pos_1681_; lean_object* v_res_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1752_; 
v_pos_1681_ = lean_ctor_get(v___x_1680_, 0);
v_res_1682_ = lean_ctor_get(v___x_1680_, 1);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1684_ = v___x_1680_;
v_isShared_1685_ = v_isSharedCheck_1752_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_res_1682_);
lean_inc(v_pos_1681_);
lean_dec(v___x_1680_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1752_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v_array_1686_; lean_object* v_idx_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v_array_1686_ = lean_ctor_get(v_pos_1681_, 0);
v_idx_1687_ = lean_ctor_get(v_pos_1681_, 1);
v___x_1688_ = lean_byte_array_size(v_array_1686_);
v___x_1689_ = lean_nat_dec_lt(v_idx_1687_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1692_; 
lean_dec(v_res_1682_);
v___x_1690_ = lean_box(0);
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 1);
lean_ctor_set(v___x_1684_, 1, v___x_1690_);
v___x_1692_ = v___x_1684_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_pos_1681_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v___x_1690_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
else
{
uint8_t v___x_1694_; uint8_t v_got_1695_; uint8_t v___x_1696_; 
v___x_1694_ = 32;
v_got_1695_ = lean_byte_array_fget(v_array_1686_, v_idx_1687_);
v___x_1696_ = lean_uint8_dec_eq(v_got_1695_, v___x_1694_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1699_; 
lean_dec(v_res_1682_);
v___x_1697_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 1);
lean_ctor_set(v___x_1684_, 1, v___x_1697_);
v___x_1699_ = v___x_1684_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_pos_1681_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
else
{
lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1749_; 
lean_inc(v_idx_1687_);
lean_inc_ref(v_array_1686_);
lean_del_object(v___x_1684_);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_pos_1681_);
if (v_isSharedCheck_1749_ == 0)
{
lean_object* v_unused_1750_; lean_object* v_unused_1751_; 
v_unused_1750_ = lean_ctor_get(v_pos_1681_, 1);
lean_dec(v_unused_1750_);
v_unused_1751_ = lean_ctor_get(v_pos_1681_, 0);
lean_dec(v_unused_1751_);
v___x_1702_ = v_pos_1681_;
v_isShared_1703_ = v_isSharedCheck_1749_;
goto v_resetjp_1701_;
}
else
{
lean_dec(v_pos_1681_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1749_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1707_; 
v___x_1704_ = lean_unsigned_to_nat(1u);
v___x_1705_ = lean_nat_add(v_idx_1687_, v___x_1704_);
lean_dec(v_idx_1687_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1705_);
v___x_1707_ = v___x_1702_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_array_1686_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
lean_object* v___x_1708_; 
v___x_1708_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(v_limits_1676_, v___x_1707_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_res_1709_; lean_object* v_snd_1710_; lean_object* v_pos_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1737_; 
v_res_1709_ = lean_ctor_get(v___x_1708_, 1);
lean_inc(v_res_1709_);
v_snd_1710_ = lean_ctor_get(v_res_1709_, 1);
lean_inc(v_snd_1710_);
v_pos_1711_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; 
v_unused_1738_ = lean_ctor_get(v___x_1708_, 1);
lean_dec(v_unused_1738_);
v___x_1713_ = v___x_1708_;
v_isShared_1714_ = v_isSharedCheck_1737_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_pos_1711_);
lean_dec(v___x_1708_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1737_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_fst_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1735_; 
v_fst_1715_ = lean_ctor_get(v_res_1709_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_res_1709_);
if (v_isSharedCheck_1735_ == 0)
{
lean_object* v_unused_1736_; 
v_unused_1736_ = lean_ctor_get(v_res_1709_, 1);
lean_dec(v_unused_1736_);
v___x_1717_ = v_res_1709_;
v_isShared_1718_ = v_isSharedCheck_1735_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_fst_1715_);
lean_dec(v_res_1709_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1735_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v_fst_1719_; lean_object* v_snd_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1734_; 
v_fst_1719_ = lean_ctor_get(v_snd_1710_, 0);
v_snd_1720_ = lean_ctor_get(v_snd_1710_, 1);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_snd_1710_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1722_ = v_snd_1710_;
v_isShared_1723_ = v_isSharedCheck_1734_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_snd_1720_);
lean_inc(v_fst_1719_);
lean_dec(v_snd_1710_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1734_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1724_; lean_object* v___x_1726_; 
v___x_1724_ = l_Std_Http_Version_ofNumber_x3f(v_fst_1719_, v_snd_1720_);
lean_dec(v_snd_1720_);
lean_dec(v_fst_1719_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 1, v___x_1724_);
lean_ctor_set(v___x_1722_, 0, v_fst_1715_);
v___x_1726_ = v___x_1722_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_fst_1715_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v___x_1724_);
v___x_1726_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
lean_object* v___x_1728_; 
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 1, v___x_1726_);
lean_ctor_set(v___x_1717_, 0, v_res_1682_);
v___x_1728_ = v___x_1717_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_res_1682_);
lean_ctor_set(v_reuseFailAlloc_1732_, 1, v___x_1726_);
v___x_1728_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1730_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 1, v___x_1728_);
v___x_1730_ = v___x_1713_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_pos_1711_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_1739_; lean_object* v_err_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_res_1682_);
v_pos_1739_ = lean_ctor_get(v___x_1708_, 0);
v_err_1740_ = lean_ctor_get(v___x_1708_, 1);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1708_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_err_1740_);
lean_inc(v_pos_1739_);
lean_dec(v___x_1708_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_pos_1739_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v_err_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
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
lean_object* v_pos_1753_; lean_object* v_err_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
v_pos_1753_ = lean_ctor_get(v___x_1680_, 0);
v_err_1754_ = lean_ctor_get(v___x_1680_, 1);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1680_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_err_1754_);
lean_inc(v_pos_1753_);
lean_dec(v___x_1680_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_pos_1753_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_err_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
else
{
lean_object* v_pos_1762_; lean_object* v_err_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
v_pos_1762_ = lean_ctor_get(v___x_1678_, 0);
v_err_1763_ = lean_ctor_get(v___x_1678_, 1);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1678_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_err_1763_);
lean_inc(v_pos_1762_);
lean_dec(v___x_1678_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_pos_1762_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_err_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion___boxed(lean_object* v_limits_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Std_Http_Protocol_H1_parseRequestLineRawVersion(v_limits_1771_, v_a_1772_);
lean_dec_ref(v_limits_1771_);
return v_res_1773_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1(uint8_t v___y_1774_){
_start:
{
uint32_t v___x_1775_; uint32_t v___x_1783_; uint8_t v___x_1784_; 
v___x_1775_ = lean_uint8_to_uint32(v___y_1774_);
v___x_1783_ = 33;
v___x_1784_ = lean_uint32_dec_le(v___x_1783_, v___x_1775_);
if (v___x_1784_ == 0)
{
goto v___jp_1776_;
}
else
{
uint32_t v___x_1785_; uint8_t v___x_1786_; 
v___x_1785_ = 126;
v___x_1786_ = lean_uint32_dec_le(v___x_1775_, v___x_1785_);
if (v___x_1786_ == 0)
{
goto v___jp_1776_;
}
else
{
return v___x_1786_;
}
}
v___jp_1776_:
{
uint32_t v___x_1777_; uint8_t v___x_1778_; 
v___x_1777_ = 128;
v___x_1778_ = lean_uint32_dec_le(v___x_1777_, v___x_1775_);
if (v___x_1778_ == 0)
{
uint32_t v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = 32;
v___x_1780_ = lean_uint32_dec_eq(v___x_1775_, v___x_1779_);
if (v___x_1780_ == 0)
{
uint32_t v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = 9;
v___x_1782_ = lean_uint32_dec_eq(v___x_1775_, v___x_1781_);
return v___x_1782_;
}
else
{
return v___x_1780_;
}
}
else
{
return v___x_1778_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1___boxed(lean_object* v___y_1787_){
_start:
{
uint8_t v___y_3635__boxed_1788_; uint8_t v_res_1789_; lean_object* v_r_1790_; 
v___y_3635__boxed_1788_ = lean_unbox(v___y_1787_);
v_res_1789_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1(v___y_3635__boxed_1788_);
v_r_1790_ = lean_box(v_res_1789_);
return v_r_1790_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0(uint8_t v___y_1791_){
_start:
{
uint32_t v___x_1792_; uint32_t v___x_1793_; uint8_t v___x_1794_; 
v___x_1792_ = lean_uint8_to_uint32(v___y_1791_);
v___x_1793_ = 32;
v___x_1794_ = lean_uint32_dec_eq(v___x_1792_, v___x_1793_);
if (v___x_1794_ == 0)
{
uint32_t v___x_1795_; uint8_t v___x_1796_; 
v___x_1795_ = 9;
v___x_1796_ = lean_uint32_dec_eq(v___x_1792_, v___x_1795_);
return v___x_1796_;
}
else
{
return v___x_1794_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0___boxed(lean_object* v___y_1797_){
_start:
{
uint8_t v___y_3662__boxed_1798_; uint8_t v_res_1799_; lean_object* v_r_1800_; 
v___y_3662__boxed_1798_ = lean_unbox(v___y_1797_);
v_res_1799_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0(v___y_3662__boxed_1798_);
v_r_1800_ = lean_box(v_res_1799_);
return v_r_1800_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(lean_object* v_s_1801_, lean_object* v_pos_1802_){
_start:
{
lean_object* v_str_1803_; lean_object* v_startInclusive_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; uint8_t v_decide_1808_; 
v_str_1803_ = lean_ctor_get(v_s_1801_, 0);
v_startInclusive_1804_ = lean_ctor_get(v_s_1801_, 1);
v___x_1805_ = lean_nat_add(v_startInclusive_1804_, v_pos_1802_);
v___x_1806_ = lean_nat_sub(v___x_1805_, v_startInclusive_1804_);
v___x_1807_ = lean_unsigned_to_nat(0u);
v_decide_1808_ = lean_nat_dec_eq(v___x_1806_, v___x_1807_);
if (v_decide_1808_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1817_; uint32_t v___x_1818_; uint32_t v___x_1819_; uint8_t v___x_1820_; 
lean_inc(v_startInclusive_1804_);
lean_inc_ref(v_str_1803_);
v___x_1809_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1809_, 0, v_str_1803_);
lean_ctor_set(v___x_1809_, 1, v_startInclusive_1804_);
lean_ctor_set(v___x_1809_, 2, v___x_1805_);
v___x_1810_ = lean_unsigned_to_nat(1u);
v___x_1811_ = lean_nat_sub(v___x_1806_, v___x_1810_);
lean_dec(v___x_1806_);
v___x_1812_ = l_String_Slice_posLE(v___x_1809_, v___x_1811_);
lean_dec_ref_known(v___x_1809_, 3);
v___x_1817_ = lean_nat_add(v_startInclusive_1804_, v___x_1812_);
v___x_1818_ = lean_string_utf8_get_fast(v_str_1803_, v___x_1817_);
lean_dec(v___x_1817_);
v___x_1819_ = 32;
v___x_1820_ = lean_uint32_dec_eq(v___x_1818_, v___x_1819_);
if (v___x_1820_ == 0)
{
uint32_t v___x_1821_; uint8_t v___x_1822_; 
v___x_1821_ = 9;
v___x_1822_ = lean_uint32_dec_eq(v___x_1818_, v___x_1821_);
if (v___x_1822_ == 0)
{
uint32_t v___x_1823_; uint8_t v___x_1824_; 
v___x_1823_ = 13;
v___x_1824_ = lean_uint32_dec_eq(v___x_1818_, v___x_1823_);
if (v___x_1824_ == 0)
{
uint32_t v___x_1825_; uint8_t v___x_1826_; 
v___x_1825_ = 10;
v___x_1826_ = lean_uint32_dec_eq(v___x_1818_, v___x_1825_);
if (v___x_1826_ == 0)
{
lean_dec(v___x_1812_);
return v_pos_1802_;
}
else
{
goto v___jp_1813_;
}
}
else
{
goto v___jp_1813_;
}
}
else
{
goto v___jp_1813_;
}
}
else
{
goto v___jp_1813_;
}
v___jp_1813_:
{
lean_object* v___x_1814_; uint8_t v___x_1815_; 
v___x_1814_ = lean_nat_add(v___x_1812_, v___x_1810_);
v___x_1815_ = lean_nat_dec_le(v___x_1814_, v_pos_1802_);
lean_dec(v___x_1814_);
if (v___x_1815_ == 0)
{
lean_dec(v___x_1812_);
return v_pos_1802_;
}
else
{
lean_dec(v_pos_1802_);
v_pos_1802_ = v___x_1812_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1806_);
lean_dec(v___x_1805_);
return v_pos_1802_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0___boxed(lean_object* v_s_1827_, lean_object* v_pos_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(v_s_1827_, v_pos_1828_);
lean_dec_ref(v_s_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(lean_object* v_limits_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v_pos_1839_; lean_object* v_pos_1843_; lean_object* v_maxHeaderNameLength_1846_; lean_object* v_maxHeaderValueLength_1847_; lean_object* v_maxSpaceSequence_1848_; lean_object* v___f_1849_; lean_object* v___x_1850_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___y_1854_; lean_object* v___y_1865_; lean_object* v___y_1866_; lean_object* v___y_1867_; lean_object* v___y_1886_; lean_object* v_pos_1887_; lean_object* v_res_1888_; lean_object* v___x_1894_; lean_object* v_snd_1895_; lean_object* v_snd_1896_; uint8_t v___x_1897_; 
v_maxHeaderNameLength_1846_ = lean_ctor_get(v_limits_1836_, 6);
v_maxHeaderValueLength_1847_ = lean_ctor_get(v_limits_1836_, 7);
v_maxSpaceSequence_1848_ = lean_ctor_get(v_limits_1836_, 8);
v___f_1849_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_1850_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1837_);
v___x_1894_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1849_, v_maxHeaderNameLength_1846_, v___x_1850_, v_a_1837_);
v_snd_1895_ = lean_ctor_get(v___x_1894_, 1);
lean_inc(v_snd_1895_);
v_snd_1896_ = lean_ctor_get(v_snd_1895_, 1);
v___x_1897_ = lean_unbox(v_snd_1896_);
if (v___x_1897_ == 0)
{
lean_object* v_fst_1898_; lean_object* v_fst_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_2057_; 
v_fst_1898_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_fst_1898_);
lean_dec_ref(v___x_1894_);
v_fst_1899_ = lean_ctor_get(v_snd_1895_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_snd_1895_);
if (v_isSharedCheck_2057_ == 0)
{
lean_object* v_unused_2058_; 
v_unused_2058_ = lean_ctor_get(v_snd_1895_, 1);
lean_dec(v_unused_2058_);
v___x_1901_ = v_snd_1895_;
v_isShared_1902_ = v_isSharedCheck_2057_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_fst_1899_);
lean_dec(v_snd_1895_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_2057_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
uint8_t v___x_1903_; 
v___x_1903_ = lean_nat_dec_eq(v_fst_1898_, v___x_1850_);
if (v___x_1903_ == 0)
{
lean_object* v_array_1904_; lean_object* v_idx_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_2052_; 
v_array_1904_ = lean_ctor_get(v_a_1837_, 0);
v_idx_1905_ = lean_ctor_get(v_a_1837_, 1);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_a_1837_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_1907_ = v_a_1837_;
v_isShared_1908_ = v_isSharedCheck_2052_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_idx_1905_);
lean_inc(v_array_1904_);
lean_dec(v_a_1837_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_2052_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___f_1909_; lean_object* v___f_1910_; lean_object* v___y_1912_; lean_object* v_pos_1913_; lean_object* v_res_1914_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v_lower_1944_; lean_object* v_upper_1945_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1957_; lean_object* v_pos_1958_; lean_object* v___y_1985_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___y_2043_; uint8_t v___x_2051_; 
v___f_1909_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1));
v___f_1910_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2));
v___x_2040_ = lean_nat_add(v_idx_1905_, v_fst_1898_);
lean_dec(v_fst_1898_);
v___x_2041_ = lean_byte_array_size(v_array_1904_);
v___x_2051_ = lean_nat_dec_le(v_idx_1905_, v___x_1850_);
if (v___x_2051_ == 0)
{
v___y_2043_ = v_idx_1905_;
goto v___jp_2042_;
}
else
{
lean_dec(v_idx_1905_);
v___y_2043_ = v___x_1850_;
goto v___jp_2042_;
}
v___jp_1911_:
{
lean_object* v___x_1915_; lean_object* v_snd_1916_; lean_object* v_snd_1917_; uint8_t v___x_1918_; 
v___x_1915_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1910_, v_maxSpaceSequence_1848_, v___x_1850_, v_pos_1913_);
v_snd_1916_ = lean_ctor_get(v___x_1915_, 1);
lean_inc(v_snd_1916_);
lean_dec_ref(v___x_1915_);
v_snd_1917_ = lean_ctor_get(v_snd_1916_, 1);
v___x_1918_ = lean_unbox(v_snd_1917_);
if (v___x_1918_ == 0)
{
lean_object* v_fst_1919_; lean_object* v_array_1920_; lean_object* v_idx_1921_; lean_object* v___x_1922_; uint8_t v___x_1923_; 
v_fst_1919_ = lean_ctor_get(v_snd_1916_, 0);
lean_inc(v_fst_1919_);
lean_dec(v_snd_1916_);
v_array_1920_ = lean_ctor_get(v_fst_1919_, 0);
v_idx_1921_ = lean_ctor_get(v_fst_1919_, 1);
v___x_1922_ = lean_byte_array_size(v_array_1920_);
v___x_1923_ = lean_nat_dec_lt(v_idx_1921_, v___x_1922_);
if (v___x_1923_ == 0)
{
v___y_1886_ = v___y_1912_;
v_pos_1887_ = v_fst_1919_;
v_res_1888_ = v_res_1914_;
goto v___jp_1885_;
}
else
{
uint8_t v___x_1924_; uint32_t v___x_1925_; uint32_t v___x_1926_; uint8_t v___x_1927_; 
v___x_1924_ = lean_byte_array_fget(v_array_1920_, v_idx_1921_);
v___x_1925_ = lean_uint8_to_uint32(v___x_1924_);
v___x_1926_ = 32;
v___x_1927_ = lean_uint32_dec_eq(v___x_1925_, v___x_1926_);
if (v___x_1927_ == 0)
{
uint32_t v___x_1928_; uint8_t v___x_1929_; 
v___x_1928_ = 9;
v___x_1929_ = lean_uint32_dec_eq(v___x_1925_, v___x_1928_);
if (v___x_1929_ == 0)
{
v___y_1886_ = v___y_1912_;
v_pos_1887_ = v_fst_1919_;
v_res_1888_ = v_res_1914_;
goto v___jp_1885_;
}
else
{
lean_dec(v_res_1914_);
lean_dec_ref(v___y_1912_);
v_pos_1839_ = v_fst_1919_;
goto v___jp_1838_;
}
}
else
{
lean_dec(v_res_1914_);
lean_dec_ref(v___y_1912_);
v_pos_1839_ = v_fst_1919_;
goto v___jp_1838_;
}
}
}
else
{
lean_object* v_fst_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1938_; 
lean_dec(v_res_1914_);
lean_dec_ref(v___y_1912_);
v_fst_1930_ = lean_ctor_get(v_snd_1916_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_snd_1916_);
if (v_isSharedCheck_1938_ == 0)
{
lean_object* v_unused_1939_; 
v_unused_1939_ = lean_ctor_get(v_snd_1916_, 1);
lean_dec(v_unused_1939_);
v___x_1932_ = v_snd_1916_;
v_isShared_1933_ = v_isSharedCheck_1938_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_fst_1930_);
lean_dec(v_snd_1916_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1938_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1934_; lean_object* v___x_1936_; 
v___x_1934_ = lean_box(0);
if (v_isShared_1933_ == 0)
{
lean_ctor_set_tag(v___x_1932_, 1);
lean_ctor_set(v___x_1932_, 1, v___x_1934_);
v___x_1936_ = v___x_1932_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_fst_1930_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
v___jp_1940_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = l_ByteArray_toByteSlice(v___y_1941_, v_lower_1944_, v_upper_1945_);
v___x_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
v___y_1912_ = v___y_1942_;
v_pos_1913_ = v___y_1943_;
v_res_1914_ = v___x_1947_;
goto v___jp_1911_;
}
v___jp_1948_:
{
uint8_t v___x_1955_; 
v___x_1955_ = lean_nat_dec_le(v___y_1952_, v___y_1953_);
if (v___x_1955_ == 0)
{
lean_dec(v___y_1952_);
v___y_1941_ = v___y_1949_;
v___y_1942_ = v___y_1950_;
v___y_1943_ = v___y_1951_;
v_lower_1944_ = v___y_1954_;
v_upper_1945_ = v___y_1953_;
goto v___jp_1940_;
}
else
{
lean_dec(v___y_1953_);
v___y_1941_ = v___y_1949_;
v___y_1942_ = v___y_1950_;
v___y_1943_ = v___y_1951_;
v_lower_1944_ = v___y_1954_;
v_upper_1945_ = v___y_1952_;
goto v___jp_1940_;
}
}
v___jp_1956_:
{
lean_object* v___x_1959_; lean_object* v_snd_1960_; lean_object* v_snd_1961_; uint8_t v___x_1962_; 
lean_inc_ref(v_pos_1958_);
v___x_1959_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1909_, v_maxHeaderValueLength_1847_, v___x_1850_, v_pos_1958_);
v_snd_1960_ = lean_ctor_get(v___x_1959_, 1);
lean_inc(v_snd_1960_);
v_snd_1961_ = lean_ctor_get(v_snd_1960_, 1);
v___x_1962_ = lean_unbox(v_snd_1961_);
if (v___x_1962_ == 0)
{
lean_object* v_fst_1963_; lean_object* v_fst_1964_; lean_object* v_array_1965_; lean_object* v_idx_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; uint8_t v___x_1969_; 
v_fst_1963_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_fst_1963_);
lean_dec_ref(v___x_1959_);
v_fst_1964_ = lean_ctor_get(v_snd_1960_, 0);
lean_inc(v_fst_1964_);
lean_dec(v_snd_1960_);
v_array_1965_ = lean_ctor_get(v_pos_1958_, 0);
lean_inc_ref(v_array_1965_);
v_idx_1966_ = lean_ctor_get(v_pos_1958_, 1);
lean_inc(v_idx_1966_);
lean_dec_ref(v_pos_1958_);
v___x_1967_ = lean_nat_add(v_idx_1966_, v_fst_1963_);
lean_dec(v_fst_1963_);
v___x_1968_ = lean_byte_array_size(v_array_1965_);
v___x_1969_ = lean_nat_dec_le(v_idx_1966_, v___x_1850_);
if (v___x_1969_ == 0)
{
v___y_1949_ = v_array_1965_;
v___y_1950_ = v___y_1957_;
v___y_1951_ = v_fst_1964_;
v___y_1952_ = v___x_1967_;
v___y_1953_ = v___x_1968_;
v___y_1954_ = v_idx_1966_;
goto v___jp_1948_;
}
else
{
lean_dec(v_idx_1966_);
v___y_1949_ = v_array_1965_;
v___y_1950_ = v___y_1957_;
v___y_1951_ = v_fst_1964_;
v___y_1952_ = v___x_1967_;
v___y_1953_ = v___x_1968_;
v___y_1954_ = v___x_1850_;
goto v___jp_1948_;
}
}
else
{
lean_object* v_fst_1970_; lean_object* v_idx_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1982_; 
lean_dec_ref(v___x_1959_);
v_fst_1970_ = lean_ctor_get(v_snd_1960_, 0);
lean_inc(v_fst_1970_);
lean_dec(v_snd_1960_);
v_idx_1971_ = lean_ctor_get(v_pos_1958_, 1);
v_isSharedCheck_1982_ = !lean_is_exclusive(v_pos_1958_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; 
v_unused_1983_ = lean_ctor_get(v_pos_1958_, 0);
lean_dec(v_unused_1983_);
v___x_1973_ = v_pos_1958_;
v_isShared_1974_ = v_isSharedCheck_1982_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_idx_1971_);
lean_dec(v_pos_1958_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1982_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v_idx_1975_; uint8_t v___x_1976_; 
v_idx_1975_ = lean_ctor_get(v_fst_1970_, 1);
v___x_1976_ = lean_nat_dec_eq(v_idx_1971_, v_idx_1975_);
lean_dec(v_idx_1971_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; lean_object* v___x_1979_; 
lean_dec_ref(v___y_1957_);
v___x_1977_ = lean_box(0);
if (v_isShared_1974_ == 0)
{
lean_ctor_set_tag(v___x_1973_, 1);
lean_ctor_set(v___x_1973_, 1, v___x_1977_);
lean_ctor_set(v___x_1973_, 0, v_fst_1970_);
v___x_1979_ = v___x_1973_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_fst_1970_);
lean_ctor_set(v_reuseFailAlloc_1980_, 1, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
else
{
lean_object* v___x_1981_; 
lean_del_object(v___x_1973_);
v___x_1981_ = lean_box(0);
v___y_1912_ = v___y_1957_;
v_pos_1913_ = v_fst_1970_;
v_res_1914_ = v___x_1981_;
goto v___jp_1911_;
}
}
}
}
v___jp_1984_:
{
lean_object* v_array_1986_; lean_object* v_idx_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; 
v_array_1986_ = lean_ctor_get(v_fst_1899_, 0);
v_idx_1987_ = lean_ctor_get(v_fst_1899_, 1);
v___x_1988_ = lean_byte_array_size(v_array_1986_);
v___x_1989_ = lean_nat_dec_lt(v_idx_1987_, v___x_1988_);
if (v___x_1989_ == 0)
{
lean_object* v___x_1990_; lean_object* v___x_1992_; 
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_array_1904_);
v___x_1990_ = lean_box(0);
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 1);
lean_ctor_set(v___x_1907_, 1, v___x_1990_);
lean_ctor_set(v___x_1907_, 0, v_fst_1899_);
v___x_1992_ = v___x_1907_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_fst_1899_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v___x_1990_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
else
{
uint8_t v___x_1994_; uint8_t v_got_1995_; uint8_t v___x_1996_; 
v___x_1994_ = 58;
v_got_1995_ = lean_byte_array_fget(v_array_1986_, v_idx_1987_);
v___x_1996_ = lean_uint8_dec_eq(v_got_1995_, v___x_1994_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; lean_object* v___x_1999_; 
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_array_1904_);
v___x_1997_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4));
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 1);
lean_ctor_set(v___x_1907_, 1, v___x_1997_);
lean_ctor_set(v___x_1907_, 0, v_fst_1899_);
v___x_1999_ = v___x_1907_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_fst_1899_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
else
{
lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2037_; 
lean_inc(v_idx_1987_);
lean_inc_ref(v_array_1986_);
lean_del_object(v___x_1907_);
v_isSharedCheck_2037_ = !lean_is_exclusive(v_fst_1899_);
if (v_isSharedCheck_2037_ == 0)
{
lean_object* v_unused_2038_; lean_object* v_unused_2039_; 
v_unused_2038_ = lean_ctor_get(v_fst_1899_, 1);
lean_dec(v_unused_2038_);
v_unused_2039_ = lean_ctor_get(v_fst_1899_, 0);
lean_dec(v_unused_2039_);
v___x_2002_ = v_fst_1899_;
v_isShared_2003_ = v_isSharedCheck_2037_;
goto v_resetjp_2001_;
}
else
{
lean_dec(v_fst_1899_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2037_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2004_ = lean_unsigned_to_nat(1u);
v___x_2005_ = lean_nat_add(v_idx_1987_, v___x_2004_);
lean_dec(v_idx_1987_);
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 1, v___x_2005_);
v___x_2007_ = v___x_2002_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_array_1986_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
lean_object* v___x_2008_; lean_object* v_snd_2009_; lean_object* v_snd_2010_; uint8_t v___x_2011_; 
v___x_2008_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1910_, v_maxSpaceSequence_1848_, v___x_1850_, v___x_2007_);
v_snd_2009_ = lean_ctor_get(v___x_2008_, 1);
lean_inc(v_snd_2009_);
lean_dec_ref(v___x_2008_);
v_snd_2010_ = lean_ctor_get(v_snd_2009_, 1);
v___x_2011_ = lean_unbox(v_snd_2010_);
if (v___x_2011_ == 0)
{
lean_object* v_fst_2012_; lean_object* v_array_2013_; lean_object* v_idx_2014_; lean_object* v_lower_2015_; lean_object* v_upper_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v_fst_2012_ = lean_ctor_get(v_snd_2009_, 0);
lean_inc(v_fst_2012_);
lean_dec(v_snd_2009_);
v_array_2013_ = lean_ctor_get(v_fst_2012_, 0);
v_idx_2014_ = lean_ctor_get(v_fst_2012_, 1);
v_lower_2015_ = lean_ctor_get(v___y_1985_, 0);
lean_inc(v_lower_2015_);
v_upper_2016_ = lean_ctor_get(v___y_1985_, 1);
lean_inc(v_upper_2016_);
lean_dec_ref(v___y_1985_);
v___x_2017_ = l_ByteArray_toByteSlice(v_array_1904_, v_lower_2015_, v_upper_2016_);
v___x_2018_ = lean_byte_array_size(v_array_2013_);
v___x_2019_ = lean_nat_dec_lt(v_idx_2014_, v___x_2018_);
if (v___x_2019_ == 0)
{
v___y_1957_ = v___x_2017_;
v_pos_1958_ = v_fst_2012_;
goto v___jp_1956_;
}
else
{
uint8_t v___x_2020_; uint32_t v___x_2021_; uint32_t v___x_2022_; uint8_t v___x_2023_; 
v___x_2020_ = lean_byte_array_fget(v_array_2013_, v_idx_2014_);
v___x_2021_ = lean_uint8_to_uint32(v___x_2020_);
v___x_2022_ = 32;
v___x_2023_ = lean_uint32_dec_eq(v___x_2021_, v___x_2022_);
if (v___x_2023_ == 0)
{
uint32_t v___x_2024_; uint8_t v___x_2025_; 
v___x_2024_ = 9;
v___x_2025_ = lean_uint32_dec_eq(v___x_2021_, v___x_2024_);
if (v___x_2025_ == 0)
{
v___y_1957_ = v___x_2017_;
v_pos_1958_ = v_fst_2012_;
goto v___jp_1956_;
}
else
{
lean_dec_ref(v___x_2017_);
v_pos_1843_ = v_fst_2012_;
goto v___jp_1842_;
}
}
else
{
lean_dec_ref(v___x_2017_);
v_pos_1843_ = v_fst_2012_;
goto v___jp_1842_;
}
}
}
else
{
lean_object* v_fst_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2034_; 
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_array_1904_);
v_fst_2026_ = lean_ctor_get(v_snd_2009_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v_snd_2009_);
if (v_isSharedCheck_2034_ == 0)
{
lean_object* v_unused_2035_; 
v_unused_2035_ = lean_ctor_get(v_snd_2009_, 1);
lean_dec(v_unused_2035_);
v___x_2028_ = v_snd_2009_;
v_isShared_2029_ = v_isSharedCheck_2034_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_fst_2026_);
lean_dec(v_snd_2009_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2034_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2030_ = lean_box(0);
if (v_isShared_2029_ == 0)
{
lean_ctor_set_tag(v___x_2028_, 1);
lean_ctor_set(v___x_2028_, 1, v___x_2030_);
v___x_2032_ = v___x_2028_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_fst_2026_);
lean_ctor_set(v_reuseFailAlloc_2033_, 1, v___x_2030_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
}
}
}
}
v___jp_2042_:
{
uint8_t v___x_2044_; 
v___x_2044_ = lean_nat_dec_le(v___x_2040_, v___x_2041_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2046_; 
lean_dec(v___x_2040_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 1, v___x_2041_);
lean_ctor_set(v___x_1901_, 0, v___y_2043_);
v___x_2046_ = v___x_1901_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___y_2043_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v___x_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
v___y_1985_ = v___x_2046_;
goto v___jp_1984_;
}
}
else
{
lean_object* v___x_2049_; 
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 1, v___x_2040_);
lean_ctor_set(v___x_1901_, 0, v___y_2043_);
v___x_2049_ = v___x_1901_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v___y_2043_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v___x_2040_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
v___y_1985_ = v___x_2049_;
goto v___jp_1984_;
}
}
}
}
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2055_; 
lean_dec(v_fst_1899_);
lean_dec(v_fst_1898_);
v___x_2053_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_1902_ == 0)
{
lean_ctor_set_tag(v___x_1901_, 1);
lean_ctor_set(v___x_1901_, 1, v___x_2053_);
lean_ctor_set(v___x_1901_, 0, v_a_1837_);
v___x_2055_ = v___x_1901_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_1837_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v___x_2053_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
else
{
lean_object* v_fst_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2067_; 
lean_dec_ref(v___x_1894_);
lean_dec_ref(v_a_1837_);
v_fst_2059_ = lean_ctor_get(v_snd_1895_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v_snd_1895_);
if (v_isSharedCheck_2067_ == 0)
{
lean_object* v_unused_2068_; 
v_unused_2068_ = lean_ctor_get(v_snd_1895_, 1);
lean_dec(v_unused_2068_);
v___x_2061_ = v_snd_1895_;
v_isShared_2062_ = v_isSharedCheck_2067_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_fst_2059_);
lean_dec(v_snd_1895_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2067_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; lean_object* v___x_2065_; 
v___x_2063_ = lean_box(0);
if (v_isShared_2062_ == 0)
{
lean_ctor_set_tag(v___x_2061_, 1);
lean_ctor_set(v___x_2061_, 1, v___x_2063_);
v___x_2065_ = v___x_2061_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_fst_2059_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v___x_2063_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
v___jp_1838_:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1840_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_1841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1841_, 0, v_pos_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
return v___x_1841_;
}
v___jp_1842_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_1845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1845_, 0, v_pos_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
return v___x_1845_;
}
v___jp_1851_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1855_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0));
v___x_1856_ = l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(v___y_1854_, v___x_1850_, v___x_1855_);
lean_dec_ref(v___y_1854_);
v___x_1857_ = lean_string_utf8_byte_size(v___x_1856_);
lean_inc_ref(v___x_1856_);
v___x_1858_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1850_);
lean_ctor_set(v___x_1858_, 2, v___x_1857_);
v___x_1859_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(v___x_1858_, v___x_1857_);
lean_dec_ref_known(v___x_1858_, 3);
v___x_1860_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1856_);
lean_ctor_set(v___x_1860_, 1, v___x_1850_);
lean_ctor_set(v___x_1860_, 2, v___x_1859_);
v___x_1861_ = l_String_Slice_toString(v___x_1860_);
lean_dec_ref_known(v___x_1860_, 3);
v___x_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___y_1853_);
lean_ctor_set(v___x_1862_, 1, v___x_1861_);
v___x_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___y_1852_);
lean_ctor_set(v___x_1863_, 1, v___x_1862_);
return v___x_1863_;
}
v___jp_1864_:
{
lean_object* v___x_1868_; 
v___x_1868_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___y_1867_, v___y_1865_);
lean_dec(v___y_1867_);
if (lean_obj_tag(v___x_1868_) == 0)
{
if (lean_obj_tag(v___y_1866_) == 0)
{
lean_object* v_pos_1869_; lean_object* v_res_1870_; lean_object* v___x_1871_; 
v_pos_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_pos_1869_);
v_res_1870_ = lean_ctor_get(v___x_1868_, 1);
lean_inc(v_res_1870_);
lean_dec_ref_known(v___x_1868_, 2);
v___x_1871_ = l_ByteArray_empty;
v___y_1852_ = v_pos_1869_;
v___y_1853_ = v_res_1870_;
v___y_1854_ = v___x_1871_;
goto v___jp_1851_;
}
else
{
lean_object* v_pos_1872_; lean_object* v_res_1873_; lean_object* v_val_1874_; lean_object* v___x_1875_; 
v_pos_1872_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_pos_1872_);
v_res_1873_ = lean_ctor_get(v___x_1868_, 1);
lean_inc(v_res_1873_);
lean_dec_ref_known(v___x_1868_, 2);
v_val_1874_ = lean_ctor_get(v___y_1866_, 0);
lean_inc(v_val_1874_);
lean_dec_ref_known(v___y_1866_, 1);
v___x_1875_ = l_ByteSlice_toByteArray(v_val_1874_);
v___y_1852_ = v_pos_1872_;
v___y_1853_ = v_res_1873_;
v___y_1854_ = v___x_1875_;
goto v___jp_1851_;
}
}
else
{
lean_object* v_pos_1876_; lean_object* v_err_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec(v___y_1866_);
v_pos_1876_ = lean_ctor_get(v___x_1868_, 0);
v_err_1877_ = lean_ctor_get(v___x_1868_, 1);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1868_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_err_1877_);
lean_inc(v_pos_1876_);
lean_dec(v___x_1868_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_pos_1876_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v_err_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
v___jp_1885_:
{
lean_object* v___x_1889_; uint8_t v___x_1890_; 
v___x_1889_ = l_ByteSlice_toByteArray(v___y_1886_);
v___x_1890_ = lean_string_validate_utf8(v___x_1889_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; 
lean_dec_ref(v___x_1889_);
v___x_1891_ = lean_box(0);
v___y_1865_ = v_pos_1887_;
v___y_1866_ = v_res_1888_;
v___y_1867_ = v___x_1891_;
goto v___jp_1864_;
}
else
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = lean_string_from_utf8_unchecked(v___x_1889_);
v___x_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
v___y_1865_ = v_pos_1887_;
v___y_1866_ = v_res_1888_;
v___y_1867_ = v___x_1893_;
goto v___jp_1864_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___boxed(lean_object* v_limits_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(v_limits_2069_, v_a_2070_);
lean_dec_ref(v_limits_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(lean_object* v_x_2072_, lean_object* v_x_2073_){
_start:
{
if (lean_obj_tag(v_x_2072_) == 0)
{
if (lean_obj_tag(v_x_2073_) == 0)
{
uint8_t v___x_2074_; 
v___x_2074_ = 1;
return v___x_2074_;
}
else
{
uint8_t v___x_2075_; 
v___x_2075_ = 0;
return v___x_2075_;
}
}
else
{
if (lean_obj_tag(v_x_2073_) == 0)
{
uint8_t v___x_2076_; 
v___x_2076_ = 0;
return v___x_2076_;
}
else
{
lean_object* v_val_2077_; lean_object* v_val_2078_; uint8_t v___x_2079_; uint8_t v___x_2080_; uint8_t v___x_2081_; 
v_val_2077_ = lean_ctor_get(v_x_2072_, 0);
v_val_2078_ = lean_ctor_get(v_x_2073_, 0);
v___x_2079_ = lean_unbox(v_val_2077_);
v___x_2080_ = lean_unbox(v_val_2078_);
v___x_2081_ = lean_uint8_dec_eq(v___x_2079_, v___x_2080_);
return v___x_2081_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0___boxed(lean_object* v_x_2082_, lean_object* v_x_2083_){
_start:
{
uint8_t v_res_2084_; lean_object* v_r_2085_; 
v_res_2084_ = l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(v_x_2082_, v_x_2083_);
lean_dec(v_x_2083_);
lean_dec(v_x_2082_);
v_r_2085_ = lean_box(v_res_2084_);
return v_r_2085_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader(lean_object* v_limits_2092_, lean_object* v_a_2093_){
_start:
{
lean_object* v___y_2095_; lean_object* v_pos_2118_; lean_object* v_res_2119_; lean_object* v_array_2157_; lean_object* v_idx_2158_; lean_object* v___x_2159_; uint8_t v___x_2160_; 
v_array_2157_ = lean_ctor_get(v_a_2093_, 0);
v_idx_2158_ = lean_ctor_get(v_a_2093_, 1);
v___x_2159_ = lean_byte_array_size(v_array_2157_);
v___x_2160_ = lean_nat_dec_lt(v_idx_2158_, v___x_2159_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; 
v___x_2161_ = lean_box(0);
v_pos_2118_ = v_a_2093_;
v_res_2119_ = v___x_2161_;
goto v___jp_2117_;
}
else
{
uint8_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = lean_byte_array_fget(v_array_2157_, v_idx_2158_);
v___x_2163_ = lean_box(v___x_2162_);
v___x_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2163_);
v_pos_2118_ = v_a_2093_;
v_res_2119_ = v___x_2164_;
goto v___jp_2117_;
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2097_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2096_, v___y_2095_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_pos_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2106_; 
v_pos_2098_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2106_ == 0)
{
lean_object* v_unused_2107_; 
v_unused_2107_ = lean_ctor_get(v___x_2097_, 1);
lean_dec(v_unused_2107_);
v___x_2100_ = v___x_2097_;
v_isShared_2101_ = v_isSharedCheck_2106_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_pos_2098_);
lean_dec(v___x_2097_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2106_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; lean_object* v___x_2104_; 
v___x_2102_ = lean_box(0);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 1, v___x_2102_);
v___x_2104_ = v___x_2100_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_pos_2098_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
else
{
lean_object* v_pos_2108_; lean_object* v_err_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
v_pos_2108_ = lean_ctor_get(v___x_2097_, 0);
v_err_2109_ = lean_ctor_get(v___x_2097_, 1);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2097_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_err_2109_);
lean_inc(v_pos_2108_);
lean_dec(v___x_2097_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_pos_2108_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v_err_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
v___jp_2117_:
{
lean_object* v___x_2120_; uint8_t v___x_2121_; 
v___x_2120_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseSingleHeader___closed__0));
v___x_2121_ = l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(v_res_2119_, v___x_2120_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2122_; uint8_t v___x_2123_; 
v___x_2122_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseSingleHeader___closed__1));
v___x_2123_ = l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(v_res_2119_, v___x_2122_);
lean_dec(v_res_2119_);
if (v___x_2123_ == 0)
{
lean_object* v___x_2124_; 
v___x_2124_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(v_limits_2092_, v_pos_2118_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_pos_2125_; lean_object* v_res_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v_pos_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_pos_2125_);
v_res_2126_ = lean_ctor_get(v___x_2124_, 1);
lean_inc(v_res_2126_);
lean_dec_ref_known(v___x_2124_, 2);
v___x_2127_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2128_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2127_, v_pos_2125_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_pos_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2137_; 
v_pos_2129_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2137_ == 0)
{
lean_object* v_unused_2138_; 
v_unused_2138_ = lean_ctor_get(v___x_2128_, 1);
lean_dec(v_unused_2138_);
v___x_2131_ = v___x_2128_;
v_isShared_2132_ = v_isSharedCheck_2137_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_pos_2129_);
lean_dec(v___x_2128_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2137_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2133_; lean_object* v___x_2135_; 
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v_res_2126_);
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 1, v___x_2133_);
v___x_2135_ = v___x_2131_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_pos_2129_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v___x_2133_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
else
{
lean_object* v_pos_2139_; lean_object* v_err_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_dec(v_res_2126_);
v_pos_2139_ = lean_ctor_get(v___x_2128_, 0);
v_err_2140_ = lean_ctor_get(v___x_2128_, 1);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2128_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_err_2140_);
lean_inc(v_pos_2139_);
lean_dec(v___x_2128_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_pos_2139_);
lean_ctor_set(v_reuseFailAlloc_2146_, 1, v_err_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v_pos_2148_; lean_object* v_err_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_pos_2148_ = lean_ctor_get(v___x_2124_, 0);
v_err_2149_ = lean_ctor_get(v___x_2124_, 1);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2124_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_err_2149_);
lean_inc(v_pos_2148_);
lean_dec(v___x_2124_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_pos_2148_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v_err_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
}
else
{
v___y_2095_ = v_pos_2118_;
goto v___jp_2094_;
}
}
else
{
lean_dec(v_res_2119_);
v___y_2095_ = v_pos_2118_;
goto v___jp_2094_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___boxed(lean_object* v_limits_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Std_Http_Protocol_H1_parseSingleHeader(v_limits_2165_, v_a_2166_);
lean_dec_ref(v_limits_2165_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair(lean_object* v_a_2172_){
_start:
{
lean_object* v_array_2173_; lean_object* v_idx_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; 
v_array_2173_ = lean_ctor_get(v_a_2172_, 0);
v_idx_2174_ = lean_ctor_get(v_a_2172_, 1);
v___x_2175_ = lean_byte_array_size(v_array_2173_);
v___x_2176_ = lean_nat_dec_lt(v_idx_2174_, v___x_2175_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2177_ = lean_box(0);
v___x_2178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_a_2172_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
return v___x_2178_;
}
else
{
uint8_t v___x_2179_; uint8_t v_got_2180_; uint8_t v___x_2181_; 
v___x_2179_ = 92;
v_got_2180_ = lean_byte_array_fget(v_array_2173_, v_idx_2174_);
v___x_2181_ = lean_uint8_dec_eq(v_got_2180_, v___x_2179_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2182_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1));
v___x_2183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2183_, 0, v_a_2172_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
return v___x_2183_;
}
else
{
lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2218_; 
lean_inc(v_idx_2174_);
lean_inc_ref(v_array_2173_);
v_isSharedCheck_2218_ = !lean_is_exclusive(v_a_2172_);
if (v_isSharedCheck_2218_ == 0)
{
lean_object* v_unused_2219_; lean_object* v_unused_2220_; 
v_unused_2219_ = lean_ctor_get(v_a_2172_, 1);
lean_dec(v_unused_2219_);
v_unused_2220_ = lean_ctor_get(v_a_2172_, 0);
lean_dec(v_unused_2220_);
v___x_2185_ = v_a_2172_;
v_isShared_2186_ = v_isSharedCheck_2218_;
goto v_resetjp_2184_;
}
else
{
lean_dec(v_a_2172_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2218_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; uint8_t v___x_2189_; 
v___x_2187_ = lean_unsigned_to_nat(1u);
v___x_2188_ = lean_nat_add(v_idx_2174_, v___x_2187_);
lean_dec(v_idx_2174_);
v___x_2189_ = lean_nat_dec_lt(v___x_2188_, v___x_2175_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2191_; 
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 1, v___x_2188_);
v___x_2191_ = v___x_2185_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_array_2173_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v___x_2188_);
v___x_2191_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = lean_box(0);
v___x_2193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2191_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
return v___x_2193_;
}
}
else
{
uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2195_ = lean_byte_array_fget(v_array_2173_, v___x_2188_);
v___x_2196_ = lean_nat_add(v___x_2188_, v___x_2187_);
lean_dec(v___x_2188_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 1, v___x_2196_);
v___x_2198_ = v___x_2185_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_array_2173_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; uint32_t v___x_2208_; uint32_t v___x_2209_; uint8_t v___x_2210_; 
v___x_2206_ = lean_box(v___x_2195_);
lean_inc_ref(v___x_2198_);
v___x_2207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2198_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = lean_uint8_to_uint32(v___x_2195_);
v___x_2209_ = 9;
v___x_2210_ = lean_uint32_dec_eq(v___x_2208_, v___x_2209_);
if (v___x_2210_ == 0)
{
uint32_t v___x_2211_; uint8_t v___x_2212_; 
v___x_2211_ = 32;
v___x_2212_ = lean_uint32_dec_eq(v___x_2208_, v___x_2211_);
if (v___x_2212_ == 0)
{
uint32_t v___x_2213_; uint8_t v___x_2214_; 
v___x_2213_ = 33;
v___x_2214_ = lean_uint32_dec_le(v___x_2213_, v___x_2208_);
if (v___x_2214_ == 0)
{
lean_dec_ref_known(v___x_2207_, 2);
goto v___jp_2199_;
}
else
{
uint32_t v___x_2215_; uint8_t v___x_2216_; 
v___x_2215_ = 126;
v___x_2216_ = lean_uint32_dec_le(v___x_2208_, v___x_2215_);
if (v___x_2216_ == 0)
{
lean_dec_ref_known(v___x_2207_, 2);
goto v___jp_2199_;
}
else
{
lean_dec_ref(v___x_2198_);
return v___x_2207_;
}
}
}
else
{
lean_dec_ref(v___x_2198_);
return v___x_2207_;
}
}
else
{
lean_dec_ref(v___x_2198_);
return v___x_2207_;
}
v___jp_2199_:
{
lean_object* v___x_2200_; uint32_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2200_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2));
v___x_2201_ = lean_uint8_to_uint32(v___x_2195_);
v___x_2202_ = l_Char_quote(v___x_2201_);
v___x_2203_ = lean_string_append(v___x_2200_, v___x_2202_);
lean_dec_ref(v___x_2202_);
v___x_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
v___x_2205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2198_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
return v___x_2205_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(lean_object* v_maxLength_2225_, lean_object* v_buf_2226_, lean_object* v_length_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_array_2229_; lean_object* v_idx_2230_; lean_object* v___x_2231_; uint8_t v___x_2232_; 
v_array_2229_ = lean_ctor_get(v_a_2228_, 0);
v_idx_2230_ = lean_ctor_get(v_a_2228_, 1);
v___x_2231_ = lean_byte_array_size(v_array_2229_);
v___x_2232_ = lean_nat_dec_lt(v_idx_2230_, v___x_2231_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec(v_length_2227_);
lean_dec_ref(v_buf_2226_);
v___x_2233_ = lean_box(0);
v___x_2234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2234_, 0, v_a_2228_);
lean_ctor_set(v___x_2234_, 1, v___x_2233_);
return v___x_2234_;
}
else
{
lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2308_; 
lean_inc(v_idx_2230_);
lean_inc_ref(v_array_2229_);
v_isSharedCheck_2308_ = !lean_is_exclusive(v_a_2228_);
if (v_isSharedCheck_2308_ == 0)
{
lean_object* v_unused_2309_; lean_object* v_unused_2310_; 
v_unused_2309_ = lean_ctor_get(v_a_2228_, 1);
lean_dec(v_unused_2309_);
v_unused_2310_ = lean_ctor_get(v_a_2228_, 0);
lean_dec(v_unused_2310_);
v___x_2236_ = v_a_2228_;
v_isShared_2237_ = v_isSharedCheck_2308_;
goto v_resetjp_2235_;
}
else
{
lean_dec(v_a_2228_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2308_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
uint8_t v_c_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v_it_x27_2242_; 
v_c_2238_ = lean_byte_array_fget(v_array_2229_, v_idx_2230_);
v___x_2239_ = lean_unsigned_to_nat(1u);
v___x_2240_ = lean_nat_add(v_idx_2230_, v___x_2239_);
lean_dec(v_idx_2230_);
lean_inc(v___x_2240_);
lean_inc_ref(v_array_2229_);
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 1, v___x_2240_);
v_it_x27_2242_ = v___x_2236_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_array_2229_);
lean_ctor_set(v_reuseFailAlloc_2307_, 1, v___x_2240_);
v_it_x27_2242_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
uint8_t v___x_2257_; uint8_t v___x_2258_; 
v___x_2257_ = 34;
v___x_2258_ = lean_uint8_dec_eq(v_c_2238_, v___x_2257_);
if (v___x_2258_ == 0)
{
uint8_t v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = 92;
v___x_2260_ = lean_uint8_dec_eq(v_c_2238_, v___x_2259_);
if (v___x_2260_ == 0)
{
uint32_t v___x_2261_; uint32_t v___x_2267_; uint8_t v___x_2268_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_array_2229_);
v___x_2261_ = lean_uint8_to_uint32(v_c_2238_);
v___x_2267_ = 9;
v___x_2268_ = lean_uint32_dec_eq(v___x_2261_, v___x_2267_);
if (v___x_2268_ == 0)
{
uint32_t v___x_2269_; uint8_t v___x_2270_; 
v___x_2269_ = 32;
v___x_2270_ = lean_uint32_dec_eq(v___x_2261_, v___x_2269_);
if (v___x_2270_ == 0)
{
uint32_t v___x_2271_; uint8_t v___x_2272_; 
v___x_2271_ = 33;
v___x_2272_ = lean_uint32_dec_eq(v___x_2261_, v___x_2271_);
if (v___x_2272_ == 0)
{
uint32_t v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = 35;
v___x_2274_ = lean_uint32_dec_le(v___x_2273_, v___x_2261_);
if (v___x_2274_ == 0)
{
goto v___jp_2262_;
}
else
{
uint32_t v___x_2275_; uint8_t v___x_2276_; 
v___x_2275_ = 91;
v___x_2276_ = lean_uint32_dec_le(v___x_2261_, v___x_2275_);
if (v___x_2276_ == 0)
{
goto v___jp_2262_;
}
else
{
goto v___jp_2250_;
}
}
}
else
{
goto v___jp_2250_;
}
}
else
{
goto v___jp_2250_;
}
}
else
{
goto v___jp_2250_;
}
v___jp_2262_:
{
uint32_t v___x_2263_; uint8_t v___x_2264_; 
v___x_2263_ = 93;
v___x_2264_ = lean_uint32_dec_le(v___x_2263_, v___x_2261_);
if (v___x_2264_ == 0)
{
lean_dec(v_length_2227_);
lean_dec_ref(v_buf_2226_);
goto v___jp_2243_;
}
else
{
uint32_t v___x_2265_; uint8_t v___x_2266_; 
v___x_2265_ = 126;
v___x_2266_ = lean_uint32_dec_le(v___x_2261_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_dec(v_length_2227_);
lean_dec_ref(v_buf_2226_);
goto v___jp_2243_;
}
else
{
goto v___jp_2250_;
}
}
}
}
else
{
uint8_t v___x_2277_; 
v___x_2277_ = lean_nat_dec_lt(v___x_2240_, v___x_2231_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_array_2229_);
lean_dec(v_length_2227_);
lean_dec_ref(v_buf_2226_);
v___x_2278_ = lean_box(0);
v___x_2279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2279_, 0, v_it_x27_2242_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
return v___x_2279_;
}
else
{
uint8_t v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; uint32_t v___x_2297_; uint32_t v___x_2298_; uint8_t v___x_2299_; 
lean_dec_ref(v_it_x27_2242_);
v___x_2280_ = lean_byte_array_fget(v_array_2229_, v___x_2240_);
v___x_2281_ = lean_nat_add(v___x_2240_, v___x_2239_);
lean_dec(v___x_2240_);
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v_array_2229_);
lean_ctor_set(v___x_2282_, 1, v___x_2281_);
v___x_2297_ = lean_uint8_to_uint32(v___x_2280_);
v___x_2298_ = 9;
v___x_2299_ = lean_uint32_dec_eq(v___x_2297_, v___x_2298_);
if (v___x_2299_ == 0)
{
uint32_t v___x_2300_; uint8_t v___x_2301_; 
v___x_2300_ = 32;
v___x_2301_ = lean_uint32_dec_eq(v___x_2297_, v___x_2300_);
if (v___x_2301_ == 0)
{
uint32_t v___x_2302_; uint8_t v___x_2303_; 
v___x_2302_ = 33;
v___x_2303_ = lean_uint32_dec_le(v___x_2302_, v___x_2297_);
if (v___x_2303_ == 0)
{
lean_dec(v_length_2227_);
lean_dec_ref(v_buf_2226_);
goto v___jp_2283_;
}
else
{
uint32_t v___x_2304_; uint8_t v___x_2305_; 
v___x_2304_ = 126;
v___x_2305_ = lean_uint32_dec_le(v___x_2297_, v___x_2304_);
if (v___x_2305_ == 0)
{
lean_dec(v_length_2227_);
lean_dec_ref(v_buf_2226_);
goto v___jp_2283_;
}
else
{
goto v___jp_2290_;
}
}
}
else
{
goto v___jp_2290_;
}
}
else
{
goto v___jp_2290_;
}
v___jp_2283_:
{
lean_object* v___x_2284_; uint32_t v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2284_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2));
v___x_2285_ = lean_uint8_to_uint32(v___x_2280_);
v___x_2286_ = l_Char_quote(v___x_2285_);
v___x_2287_ = lean_string_append(v___x_2284_, v___x_2286_);
lean_dec_ref(v___x_2286_);
v___x_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
v___x_2289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2282_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
return v___x_2289_;
}
v___jp_2290_:
{
lean_object* v___x_2291_; uint8_t v___x_2292_; 
v___x_2291_ = lean_nat_add(v_length_2227_, v___x_2239_);
lean_dec(v_length_2227_);
v___x_2292_ = lean_nat_dec_lt(v_maxLength_2225_, v___x_2291_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_byte_array_push(v_buf_2226_, v___x_2280_);
v_buf_2226_ = v___x_2293_;
v_length_2227_ = v___x_2291_;
v_a_2228_ = v___x_2282_;
goto _start;
}
else
{
lean_object* v___x_2295_; lean_object* v___x_2296_; 
lean_dec(v___x_2291_);
lean_dec_ref(v_buf_2226_);
v___x_2295_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2));
v___x_2296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2282_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
return v___x_2296_;
}
}
}
}
}
else
{
lean_object* v___x_2306_; 
lean_dec(v___x_2240_);
lean_dec_ref(v_array_2229_);
lean_dec(v_length_2227_);
v___x_2306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2306_, 0, v_it_x27_2242_);
lean_ctor_set(v___x_2306_, 1, v_buf_2226_);
return v___x_2306_;
}
v___jp_2243_:
{
lean_object* v___x_2244_; uint32_t v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2244_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0));
v___x_2245_ = lean_uint8_to_uint32(v_c_2238_);
v___x_2246_ = l_Char_quote(v___x_2245_);
v___x_2247_ = lean_string_append(v___x_2244_, v___x_2246_);
lean_dec_ref(v___x_2246_);
v___x_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
v___x_2249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2249_, 0, v_it_x27_2242_);
lean_ctor_set(v___x_2249_, 1, v___x_2248_);
return v___x_2249_;
}
v___jp_2250_:
{
lean_object* v___x_2251_; uint8_t v___x_2252_; 
v___x_2251_ = lean_nat_add(v_length_2227_, v___x_2239_);
lean_dec(v_length_2227_);
v___x_2252_ = lean_nat_dec_lt(v_maxLength_2225_, v___x_2251_);
if (v___x_2252_ == 0)
{
lean_object* v___x_2253_; 
v___x_2253_ = lean_byte_array_push(v_buf_2226_, v_c_2238_);
v_buf_2226_ = v___x_2253_;
v_length_2227_ = v___x_2251_;
v_a_2228_ = v_it_x27_2242_;
goto _start;
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
lean_dec(v___x_2251_);
lean_dec_ref(v_buf_2226_);
v___x_2255_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2));
v___x_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2256_, 0, v_it_x27_2242_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
return v___x_2256_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___boxed(lean_object* v_maxLength_2311_, lean_object* v_buf_2312_, lean_object* v_length_2313_, lean_object* v_a_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(v_maxLength_2311_, v_buf_2312_, v_length_2313_, v_a_2314_);
lean_dec(v_maxLength_2311_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(lean_object* v_maxLength_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_array_2321_; lean_object* v_idx_2322_; lean_object* v___x_2323_; uint8_t v___x_2324_; 
v_array_2321_ = lean_ctor_get(v_a_2320_, 0);
v_idx_2322_ = lean_ctor_get(v_a_2320_, 1);
v___x_2323_ = lean_byte_array_size(v_array_2321_);
v___x_2324_ = lean_nat_dec_lt(v_idx_2322_, v___x_2323_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = lean_box(0);
v___x_2326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2326_, 0, v_a_2320_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
return v___x_2326_;
}
else
{
uint8_t v___x_2327_; uint8_t v_got_2328_; uint8_t v___x_2329_; 
v___x_2327_ = 34;
v_got_2328_ = lean_byte_array_fget(v_array_2321_, v_idx_2322_);
v___x_2329_ = lean_uint8_dec_eq(v_got_2328_, v___x_2327_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1));
v___x_2331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2331_, 0, v_a_2320_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
return v___x_2331_;
}
else
{
lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2360_; 
lean_inc(v_idx_2322_);
lean_inc_ref(v_array_2321_);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_a_2320_);
if (v_isSharedCheck_2360_ == 0)
{
lean_object* v_unused_2361_; lean_object* v_unused_2362_; 
v_unused_2361_ = lean_ctor_get(v_a_2320_, 1);
lean_dec(v_unused_2361_);
v_unused_2362_ = lean_ctor_get(v_a_2320_, 0);
lean_dec(v_unused_2362_);
v___x_2333_ = v_a_2320_;
v_isShared_2334_ = v_isSharedCheck_2360_;
goto v_resetjp_2332_;
}
else
{
lean_dec(v_a_2320_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2360_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2338_; 
v___x_2335_ = lean_unsigned_to_nat(1u);
v___x_2336_ = lean_nat_add(v_idx_2322_, v___x_2335_);
lean_dec(v_idx_2322_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 1, v___x_2336_);
v___x_2338_ = v___x_2333_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_array_2321_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2339_ = l_ByteArray_empty;
v___x_2340_ = lean_unsigned_to_nat(0u);
v___x_2341_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(v_maxLength_2319_, v___x_2339_, v___x_2340_, v___x_2338_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_pos_2342_; lean_object* v_res_2343_; uint8_t v___x_2344_; 
v_pos_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_pos_2342_);
v_res_2343_ = lean_ctor_get(v___x_2341_, 1);
lean_inc(v_res_2343_);
lean_dec_ref_known(v___x_2341_, 2);
v___x_2344_ = lean_string_validate_utf8(v_res_2343_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
lean_dec(v_res_2343_);
v___x_2345_ = lean_box(0);
v___x_2346_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___x_2345_, v_pos_2342_);
return v___x_2346_;
}
else
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = lean_string_from_utf8_unchecked(v_res_2343_);
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
v___x_2349_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___x_2348_, v_pos_2342_);
lean_dec_ref_known(v___x_2348_, 1);
return v___x_2349_;
}
}
else
{
lean_object* v_pos_2350_; lean_object* v_err_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
v_pos_2350_ = lean_ctor_get(v___x_2341_, 0);
v_err_2351_ = lean_ctor_get(v___x_2341_, 1);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2341_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_err_2351_);
lean_inc(v_pos_2350_);
lean_dec(v___x_2341_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_pos_2350_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_err_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___boxed(lean_object* v_maxLength_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(v_maxLength_2363_, v_a_2364_);
lean_dec(v_maxLength_2363_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(lean_object* v___f_2366_, lean_object* v_maxSpaceSequence_2367_, lean_object* v_x_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_pos_2371_; lean_object* v_pos_2375_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v_snd_2380_; lean_object* v_snd_2381_; uint8_t v___x_2382_; 
v___x_2378_ = lean_unsigned_to_nat(0u);
v___x_2379_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2366_, v_maxSpaceSequence_2367_, v___x_2378_, v___y_2369_);
v_snd_2380_ = lean_ctor_get(v___x_2379_, 1);
lean_inc(v_snd_2380_);
lean_dec_ref(v___x_2379_);
v_snd_2381_ = lean_ctor_get(v_snd_2380_, 1);
v___x_2382_ = lean_unbox(v_snd_2381_);
if (v___x_2382_ == 0)
{
lean_object* v_fst_2383_; lean_object* v_array_2384_; lean_object* v_idx_2385_; lean_object* v___x_2386_; uint8_t v___x_2387_; 
v_fst_2383_ = lean_ctor_get(v_snd_2380_, 0);
lean_inc(v_fst_2383_);
lean_dec(v_snd_2380_);
v_array_2384_ = lean_ctor_get(v_fst_2383_, 0);
v_idx_2385_ = lean_ctor_get(v_fst_2383_, 1);
v___x_2386_ = lean_byte_array_size(v_array_2384_);
v___x_2387_ = lean_nat_dec_lt(v_idx_2385_, v___x_2386_);
if (v___x_2387_ == 0)
{
v_pos_2371_ = v_fst_2383_;
goto v___jp_2370_;
}
else
{
uint8_t v___x_2388_; uint32_t v___x_2389_; uint32_t v___x_2390_; uint8_t v___x_2391_; 
v___x_2388_ = lean_byte_array_fget(v_array_2384_, v_idx_2385_);
v___x_2389_ = lean_uint8_to_uint32(v___x_2388_);
v___x_2390_ = 32;
v___x_2391_ = lean_uint32_dec_eq(v___x_2389_, v___x_2390_);
if (v___x_2391_ == 0)
{
uint32_t v___x_2392_; uint8_t v___x_2393_; 
v___x_2392_ = 9;
v___x_2393_ = lean_uint32_dec_eq(v___x_2389_, v___x_2392_);
if (v___x_2393_ == 0)
{
v_pos_2371_ = v_fst_2383_;
goto v___jp_2370_;
}
else
{
v_pos_2375_ = v_fst_2383_;
goto v___jp_2374_;
}
}
else
{
v_pos_2375_ = v_fst_2383_;
goto v___jp_2374_;
}
}
}
else
{
lean_object* v_fst_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2402_; 
v_fst_2394_ = lean_ctor_get(v_snd_2380_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_snd_2380_);
if (v_isSharedCheck_2402_ == 0)
{
lean_object* v_unused_2403_; 
v_unused_2403_ = lean_ctor_get(v_snd_2380_, 1);
lean_dec(v_unused_2403_);
v___x_2396_ = v_snd_2380_;
v_isShared_2397_ = v_isSharedCheck_2402_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_fst_2394_);
lean_dec(v_snd_2380_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2402_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2398_ = lean_box(0);
if (v_isShared_2397_ == 0)
{
lean_ctor_set_tag(v___x_2396_, 1);
lean_ctor_set(v___x_2396_, 1, v___x_2398_);
v___x_2400_ = v___x_2396_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_fst_2394_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
v___jp_2370_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = lean_box(0);
v___x_2373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2373_, 0, v_pos_2371_);
lean_ctor_set(v___x_2373_, 1, v___x_2372_);
return v___x_2373_;
}
v___jp_2374_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2376_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2377_, 0, v_pos_2375_);
lean_ctor_set(v___x_2377_, 1, v___x_2376_);
return v___x_2377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2___boxed(lean_object* v___f_2404_, lean_object* v_maxSpaceSequence_2405_, lean_object* v_x_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(v___f_2404_, v_maxSpaceSequence_2405_, v_x_2406_, v___y_2407_);
lean_dec(v_maxSpaceSequence_2405_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(lean_object* v_limits_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v_pos_2424_; lean_object* v_pos_2428_; lean_object* v___y_2432_; lean_object* v_pos_2433_; lean_object* v___y_2438_; lean_object* v_pos_2439_; lean_object* v_res_2440_; lean_object* v___y_2447_; lean_object* v_pos_2448_; lean_object* v_res_2449_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v_lower_2466_; lean_object* v_upper_2467_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v_pos_2483_; lean_object* v_pos_2487_; lean_object* v_maxSpaceSequence_2490_; lean_object* v_maxChunkExtNameLength_2491_; lean_object* v_maxChunkExtValueLength_2492_; lean_object* v___f_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v_snd_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2788_; 
v_maxSpaceSequence_2490_ = lean_ctor_get(v_limits_2421_, 8);
v_maxChunkExtNameLength_2491_ = lean_ctor_get(v_limits_2421_, 11);
v_maxChunkExtValueLength_2492_ = lean_ctor_get(v_limits_2421_, 12);
v___f_2493_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2));
v___x_2494_ = lean_unsigned_to_nat(0u);
v___x_2495_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2493_, v_maxSpaceSequence_2490_, v___x_2494_, v_a_2422_);
v_snd_2496_ = lean_ctor_get(v___x_2495_, 1);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2788_ == 0)
{
lean_object* v_unused_2789_; 
v_unused_2789_ = lean_ctor_get(v___x_2495_, 0);
lean_dec(v_unused_2789_);
v___x_2498_ = v___x_2495_;
v_isShared_2499_ = v_isSharedCheck_2788_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_snd_2496_);
lean_dec(v___x_2495_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2788_;
goto v_resetjp_2497_;
}
v___jp_2423_:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2426_, 0, v_pos_2424_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
return v___x_2426_;
}
v___jp_2427_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2430_, 0, v_pos_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
return v___x_2430_;
}
v___jp_2431_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2434_ = lean_box(0);
v___x_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___y_2432_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v_pos_2433_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
return v___x_2436_;
}
v___jp_2437_:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Std_Http_Chunk_ExtensionValue_ofString_x3f(v_res_2440_);
if (lean_obj_tag(v___x_2441_) == 1)
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___y_2438_);
lean_ctor_set(v___x_2442_, 1, v___x_2441_);
v___x_2443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2443_, 0, v_pos_2439_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
return v___x_2443_;
}
else
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
lean_dec(v___x_2441_);
lean_dec_ref(v___y_2438_);
v___x_2444_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1));
v___x_2445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2445_, 0, v_pos_2439_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
return v___x_2445_;
}
}
v___jp_2446_:
{
lean_object* v___x_2450_; 
v___x_2450_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_res_2449_, v_pos_2448_);
lean_dec(v_res_2449_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_pos_2451_; lean_object* v_res_2452_; 
v_pos_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_pos_2451_);
v_res_2452_ = lean_ctor_get(v___x_2450_, 1);
lean_inc(v_res_2452_);
lean_dec_ref_known(v___x_2450_, 2);
v___y_2438_ = v___y_2447_;
v_pos_2439_ = v_pos_2451_;
v_res_2440_ = v_res_2452_;
goto v___jp_2437_;
}
else
{
lean_object* v_pos_2453_; lean_object* v_err_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec_ref(v___y_2447_);
v_pos_2453_ = lean_ctor_get(v___x_2450_, 0);
v_err_2454_ = lean_ctor_get(v___x_2450_, 1);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2450_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_err_2454_);
lean_inc(v_pos_2453_);
lean_dec(v___x_2450_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_pos_2453_);
lean_ctor_set(v_reuseFailAlloc_2460_, 1, v_err_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
v___jp_2462_:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2468_ = l_ByteArray_toByteSlice(v___y_2463_, v_lower_2466_, v_upper_2467_);
v___x_2469_ = l_ByteSlice_toByteArray(v___x_2468_);
v___x_2470_ = lean_string_validate_utf8(v___x_2469_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; 
lean_dec_ref(v___x_2469_);
v___x_2471_ = lean_box(0);
v___y_2447_ = v___y_2465_;
v_pos_2448_ = v___y_2464_;
v_res_2449_ = v___x_2471_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = lean_string_from_utf8_unchecked(v___x_2469_);
v___x_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
v___y_2447_ = v___y_2465_;
v_pos_2448_ = v___y_2464_;
v_res_2449_ = v___x_2473_;
goto v___jp_2446_;
}
}
v___jp_2474_:
{
uint8_t v___x_2481_; 
v___x_2481_ = lean_nat_dec_le(v___y_2476_, v___y_2479_);
if (v___x_2481_ == 0)
{
lean_dec(v___y_2476_);
v___y_2463_ = v___y_2475_;
v___y_2464_ = v___y_2477_;
v___y_2465_ = v___y_2478_;
v_lower_2466_ = v___y_2480_;
v_upper_2467_ = v___y_2479_;
goto v___jp_2462_;
}
else
{
lean_dec(v___y_2479_);
v___y_2463_ = v___y_2475_;
v___y_2464_ = v___y_2477_;
v___y_2465_ = v___y_2478_;
v_lower_2466_ = v___y_2480_;
v_upper_2467_ = v___y_2476_;
goto v___jp_2462_;
}
}
v___jp_2482_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2485_, 0, v_pos_2483_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
return v___x_2485_;
}
v___jp_2486_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2489_, 0, v_pos_2487_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
return v___x_2489_;
}
v_resetjp_2497_:
{
lean_object* v_snd_2500_; uint8_t v___x_2501_; 
v_snd_2500_ = lean_ctor_get(v_snd_2496_, 1);
v___x_2501_ = lean_unbox(v_snd_2500_);
if (v___x_2501_ == 0)
{
lean_object* v_fst_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2776_; 
v_fst_2502_ = lean_ctor_get(v_snd_2496_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_snd_2496_);
if (v_isSharedCheck_2776_ == 0)
{
lean_object* v_unused_2777_; 
v_unused_2777_ = lean_ctor_get(v_snd_2496_, 1);
lean_dec(v_unused_2777_);
v___x_2504_ = v_snd_2496_;
v_isShared_2505_ = v_isSharedCheck_2776_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_fst_2502_);
lean_dec(v_snd_2496_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2776_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v_array_2506_; lean_object* v_idx_2507_; lean_object* v___f_2508_; lean_object* v___y_2510_; lean_object* v_pos_2511_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v_pos_2550_; lean_object* v_array_2551_; lean_object* v_idx_2552_; lean_object* v_pos_2608_; lean_object* v_res_2609_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v_lower_2675_; lean_object* v_upper_2676_; lean_object* v___y_2684_; lean_object* v___y_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v_pos_2691_; lean_object* v_pos_2724_; lean_object* v___x_2768_; uint8_t v___x_2769_; 
v_array_2506_ = lean_ctor_get(v_fst_2502_, 0);
v_idx_2507_ = lean_ctor_get(v_fst_2502_, 1);
v___f_2508_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_2768_ = lean_byte_array_size(v_array_2506_);
v___x_2769_ = lean_nat_dec_lt(v_idx_2507_, v___x_2768_);
if (v___x_2769_ == 0)
{
lean_inc(v_idx_2507_);
lean_inc_ref(v_array_2506_);
v_pos_2724_ = v_fst_2502_;
goto v___jp_2723_;
}
else
{
uint8_t v___x_2770_; uint32_t v___x_2771_; uint32_t v___x_2772_; uint8_t v___x_2773_; 
v___x_2770_ = lean_byte_array_fget(v_array_2506_, v_idx_2507_);
v___x_2771_ = lean_uint8_to_uint32(v___x_2770_);
v___x_2772_ = 32;
v___x_2773_ = lean_uint32_dec_eq(v___x_2771_, v___x_2772_);
if (v___x_2773_ == 0)
{
uint32_t v___x_2774_; uint8_t v___x_2775_; 
v___x_2774_ = 9;
v___x_2775_ = lean_uint32_dec_eq(v___x_2771_, v___x_2774_);
if (v___x_2775_ == 0)
{
lean_inc(v_idx_2507_);
lean_inc_ref(v_array_2506_);
v_pos_2724_ = v_fst_2502_;
goto v___jp_2723_;
}
else
{
lean_del_object(v___x_2504_);
lean_del_object(v___x_2498_);
v_pos_2424_ = v_fst_2502_;
goto v___jp_2423_;
}
}
else
{
lean_del_object(v___x_2504_);
lean_del_object(v___x_2498_);
v_pos_2424_ = v_fst_2502_;
goto v___jp_2423_;
}
}
v___jp_2509_:
{
lean_object* v___x_2512_; 
lean_inc_ref(v_pos_2511_);
v___x_2512_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(v_maxChunkExtValueLength_2492_, v_pos_2511_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_pos_2513_; lean_object* v_res_2514_; 
lean_dec_ref(v_pos_2511_);
v_pos_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_pos_2513_);
v_res_2514_ = lean_ctor_get(v___x_2512_, 1);
lean_inc(v_res_2514_);
lean_dec_ref_known(v___x_2512_, 2);
v___y_2438_ = v___y_2510_;
v_pos_2439_ = v_pos_2513_;
v_res_2440_ = v_res_2514_;
goto v___jp_2437_;
}
else
{
lean_object* v_pos_2515_; lean_object* v_err_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2546_; 
v_pos_2515_ = lean_ctor_get(v___x_2512_, 0);
v_err_2516_ = lean_ctor_get(v___x_2512_, 1);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2518_ = v___x_2512_;
v_isShared_2519_ = v_isSharedCheck_2546_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_err_2516_);
lean_inc(v_pos_2515_);
lean_dec(v___x_2512_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2546_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v_idx_2520_; lean_object* v_array_2521_; lean_object* v_idx_2522_; uint8_t v___x_2523_; 
v_idx_2520_ = lean_ctor_get(v_pos_2511_, 1);
lean_inc(v_idx_2520_);
lean_dec_ref(v_pos_2511_);
v_array_2521_ = lean_ctor_get(v_pos_2515_, 0);
v_idx_2522_ = lean_ctor_get(v_pos_2515_, 1);
v___x_2523_ = lean_nat_dec_eq(v_idx_2520_, v_idx_2522_);
lean_dec(v_idx_2520_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2525_; 
lean_dec_ref(v___y_2510_);
if (v_isShared_2519_ == 0)
{
v___x_2525_ = v___x_2518_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_pos_2515_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v_err_2516_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
else
{
lean_object* v___x_2527_; lean_object* v_snd_2528_; lean_object* v_snd_2529_; uint8_t v___x_2530_; 
lean_dec(v_err_2516_);
lean_inc(v_pos_2515_);
v___x_2527_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2508_, v_maxChunkExtValueLength_2492_, v___x_2494_, v_pos_2515_);
v_snd_2528_ = lean_ctor_get(v___x_2527_, 1);
lean_inc(v_snd_2528_);
v_snd_2529_ = lean_ctor_get(v_snd_2528_, 1);
v___x_2530_ = lean_unbox(v_snd_2529_);
if (v___x_2530_ == 0)
{
lean_object* v_fst_2531_; lean_object* v_fst_2532_; uint8_t v___x_2533_; 
v_fst_2531_ = lean_ctor_get(v___x_2527_, 0);
lean_inc(v_fst_2531_);
lean_dec_ref(v___x_2527_);
v_fst_2532_ = lean_ctor_get(v_snd_2528_, 0);
lean_inc(v_fst_2532_);
lean_dec(v_snd_2528_);
v___x_2533_ = lean_nat_dec_eq(v_fst_2531_, v___x_2494_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; uint8_t v___x_2536_; 
lean_inc(v_idx_2522_);
lean_inc_ref(v_array_2521_);
lean_del_object(v___x_2518_);
lean_dec(v_pos_2515_);
v___x_2534_ = lean_nat_add(v_idx_2522_, v_fst_2531_);
lean_dec(v_fst_2531_);
v___x_2535_ = lean_byte_array_size(v_array_2521_);
v___x_2536_ = lean_nat_dec_le(v_idx_2522_, v___x_2494_);
if (v___x_2536_ == 0)
{
v___y_2475_ = v_array_2521_;
v___y_2476_ = v___x_2534_;
v___y_2477_ = v_fst_2532_;
v___y_2478_ = v___y_2510_;
v___y_2479_ = v___x_2535_;
v___y_2480_ = v_idx_2522_;
goto v___jp_2474_;
}
else
{
lean_dec(v_idx_2522_);
v___y_2475_ = v_array_2521_;
v___y_2476_ = v___x_2534_;
v___y_2477_ = v_fst_2532_;
v___y_2478_ = v___y_2510_;
v___y_2479_ = v___x_2535_;
v___y_2480_ = v___x_2494_;
goto v___jp_2474_;
}
}
else
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
lean_dec(v_fst_2532_);
lean_dec(v_fst_2531_);
lean_dec_ref(v___y_2510_);
v___x_2537_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 1, v___x_2537_);
v___x_2539_ = v___x_2518_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_pos_2515_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
else
{
lean_object* v_fst_2541_; lean_object* v___x_2542_; lean_object* v___x_2544_; 
lean_dec_ref(v___x_2527_);
lean_dec(v_pos_2515_);
lean_dec_ref(v___y_2510_);
v_fst_2541_ = lean_ctor_get(v_snd_2528_, 0);
lean_inc(v_fst_2541_);
lean_dec(v_snd_2528_);
v___x_2542_ = lean_box(0);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 1, v___x_2542_);
lean_ctor_set(v___x_2518_, 0, v_fst_2541_);
v___x_2544_ = v___x_2518_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_fst_2541_);
lean_ctor_set(v_reuseFailAlloc_2545_, 1, v___x_2542_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
}
}
v___jp_2547_:
{
lean_object* v___x_2553_; uint8_t v___x_2554_; 
v___x_2553_ = lean_byte_array_size(v_array_2551_);
v___x_2554_ = lean_nat_dec_lt(v_idx_2552_, v___x_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; lean_object* v___x_2557_; 
lean_dec(v_idx_2552_);
lean_dec_ref(v_array_2551_);
lean_dec_ref(v___y_2549_);
v___x_2555_ = lean_box(0);
if (v_isShared_2505_ == 0)
{
lean_ctor_set_tag(v___x_2504_, 1);
lean_ctor_set(v___x_2504_, 1, v___x_2555_);
lean_ctor_set(v___x_2504_, 0, v_pos_2550_);
v___x_2557_ = v___x_2504_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_pos_2550_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v___x_2555_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
else
{
uint8_t v___x_2559_; uint8_t v_got_2560_; uint8_t v___x_2561_; 
v___x_2559_ = 61;
v_got_2560_ = lean_byte_array_fget(v_array_2551_, v_idx_2552_);
v___x_2561_ = lean_uint8_dec_eq(v_got_2560_, v___x_2559_);
if (v___x_2561_ == 0)
{
lean_object* v___x_2562_; lean_object* v___x_2564_; 
lean_dec(v_idx_2552_);
lean_dec_ref(v_array_2551_);
lean_dec_ref(v___y_2549_);
v___x_2562_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3));
if (v_isShared_2505_ == 0)
{
lean_ctor_set_tag(v___x_2504_, 1);
lean_ctor_set(v___x_2504_, 1, v___x_2562_);
lean_ctor_set(v___x_2504_, 0, v_pos_2550_);
v___x_2564_ = v___x_2504_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_pos_2550_);
lean_ctor_set(v_reuseFailAlloc_2565_, 1, v___x_2562_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
else
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2569_; 
lean_dec_ref(v_pos_2550_);
v___x_2566_ = lean_unsigned_to_nat(1u);
v___x_2567_ = lean_nat_add(v_idx_2552_, v___x_2566_);
lean_dec(v_idx_2552_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 1, v___x_2567_);
lean_ctor_set(v___x_2504_, 0, v_array_2551_);
v___x_2569_ = v___x_2504_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_array_2551_);
lean_ctor_set(v_reuseFailAlloc_2606_, 1, v___x_2567_);
v___x_2569_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2570_; 
v___x_2570_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(v___f_2493_, v_maxSpaceSequence_2490_, v___y_2548_, v___x_2569_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_pos_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2595_; 
v_pos_2571_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2595_ == 0)
{
lean_object* v_unused_2596_; 
v_unused_2596_ = lean_ctor_get(v___x_2570_, 1);
lean_dec(v_unused_2596_);
v___x_2573_ = v___x_2570_;
v_isShared_2574_ = v_isSharedCheck_2595_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_pos_2571_);
lean_dec(v___x_2570_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2595_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2575_; lean_object* v_snd_2576_; lean_object* v_snd_2577_; uint8_t v___x_2578_; 
v___x_2575_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2493_, v_maxSpaceSequence_2490_, v___x_2494_, v_pos_2571_);
v_snd_2576_ = lean_ctor_get(v___x_2575_, 1);
lean_inc(v_snd_2576_);
lean_dec_ref(v___x_2575_);
v_snd_2577_ = lean_ctor_get(v_snd_2576_, 1);
v___x_2578_ = lean_unbox(v_snd_2577_);
if (v___x_2578_ == 0)
{
lean_object* v_fst_2579_; lean_object* v_array_2580_; lean_object* v_idx_2581_; lean_object* v___x_2582_; uint8_t v___x_2583_; 
lean_del_object(v___x_2573_);
v_fst_2579_ = lean_ctor_get(v_snd_2576_, 0);
lean_inc(v_fst_2579_);
lean_dec(v_snd_2576_);
v_array_2580_ = lean_ctor_get(v_fst_2579_, 0);
v_idx_2581_ = lean_ctor_get(v_fst_2579_, 1);
v___x_2582_ = lean_byte_array_size(v_array_2580_);
v___x_2583_ = lean_nat_dec_lt(v_idx_2581_, v___x_2582_);
if (v___x_2583_ == 0)
{
v___y_2510_ = v___y_2549_;
v_pos_2511_ = v_fst_2579_;
goto v___jp_2509_;
}
else
{
uint8_t v___x_2584_; uint32_t v___x_2585_; uint32_t v___x_2586_; uint8_t v___x_2587_; 
v___x_2584_ = lean_byte_array_fget(v_array_2580_, v_idx_2581_);
v___x_2585_ = lean_uint8_to_uint32(v___x_2584_);
v___x_2586_ = 32;
v___x_2587_ = lean_uint32_dec_eq(v___x_2585_, v___x_2586_);
if (v___x_2587_ == 0)
{
uint32_t v___x_2588_; uint8_t v___x_2589_; 
v___x_2588_ = 9;
v___x_2589_ = lean_uint32_dec_eq(v___x_2585_, v___x_2588_);
if (v___x_2589_ == 0)
{
v___y_2510_ = v___y_2549_;
v_pos_2511_ = v_fst_2579_;
goto v___jp_2509_;
}
else
{
lean_dec_ref(v___y_2549_);
v_pos_2483_ = v_fst_2579_;
goto v___jp_2482_;
}
}
else
{
lean_dec_ref(v___y_2549_);
v_pos_2483_ = v_fst_2579_;
goto v___jp_2482_;
}
}
}
else
{
lean_object* v_fst_2590_; lean_object* v___x_2591_; lean_object* v___x_2593_; 
lean_dec_ref(v___y_2549_);
v_fst_2590_ = lean_ctor_get(v_snd_2576_, 0);
lean_inc(v_fst_2590_);
lean_dec(v_snd_2576_);
v___x_2591_ = lean_box(0);
if (v_isShared_2574_ == 0)
{
lean_ctor_set_tag(v___x_2573_, 1);
lean_ctor_set(v___x_2573_, 1, v___x_2591_);
lean_ctor_set(v___x_2573_, 0, v_fst_2590_);
v___x_2593_ = v___x_2573_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_fst_2590_);
lean_ctor_set(v_reuseFailAlloc_2594_, 1, v___x_2591_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
else
{
lean_object* v_pos_2597_; lean_object* v_err_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
lean_dec_ref(v___y_2549_);
v_pos_2597_ = lean_ctor_get(v___x_2570_, 0);
v_err_2598_ = lean_ctor_get(v___x_2570_, 1);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2570_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_err_2598_);
lean_inc(v_pos_2597_);
lean_dec(v___x_2570_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_pos_2597_);
lean_ctor_set(v_reuseFailAlloc_2604_, 1, v_err_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
}
}
v___jp_2607_:
{
lean_object* v___x_2610_; 
v___x_2610_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_res_2609_, v_pos_2608_);
lean_dec(v_res_2609_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_pos_2611_; lean_object* v_res_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v_pos_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_pos_2611_);
v_res_2612_ = lean_ctor_get(v___x_2610_, 1);
lean_inc(v_res_2612_);
lean_dec_ref_known(v___x_2610_, 2);
v___x_2613_ = lean_box(0);
v___x_2614_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(v___f_2493_, v_maxSpaceSequence_2490_, v___x_2613_, v_pos_2611_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_pos_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2652_; 
v_pos_2615_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; 
v_unused_2653_ = lean_ctor_get(v___x_2614_, 1);
lean_dec(v_unused_2653_);
v___x_2617_ = v___x_2614_;
v_isShared_2618_ = v_isSharedCheck_2652_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_pos_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2652_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2619_; 
v___x_2619_ = l_Std_Http_Chunk_ExtensionName_ofString_x3f(v_res_2612_);
if (lean_obj_tag(v___x_2619_) == 1)
{
lean_object* v_val_2620_; lean_object* v_array_2621_; lean_object* v_idx_2622_; lean_object* v___x_2623_; uint8_t v___x_2624_; 
v_val_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_val_2620_);
lean_dec_ref_known(v___x_2619_, 1);
v_array_2621_ = lean_ctor_get(v_pos_2615_, 0);
v_idx_2622_ = lean_ctor_get(v_pos_2615_, 1);
v___x_2623_ = lean_byte_array_size(v_array_2621_);
v___x_2624_ = lean_nat_dec_lt(v_idx_2622_, v___x_2623_);
if (v___x_2624_ == 0)
{
lean_del_object(v___x_2617_);
lean_del_object(v___x_2504_);
v___y_2432_ = v_val_2620_;
v_pos_2433_ = v_pos_2615_;
goto v___jp_2431_;
}
else
{
uint8_t v___x_2625_; uint8_t v___x_2626_; uint8_t v___x_2627_; 
v___x_2625_ = lean_byte_array_fget(v_array_2621_, v_idx_2622_);
v___x_2626_ = 61;
v___x_2627_ = lean_uint8_dec_eq(v___x_2625_, v___x_2626_);
if (v___x_2627_ == 0)
{
lean_del_object(v___x_2617_);
lean_del_object(v___x_2504_);
v___y_2432_ = v_val_2620_;
v_pos_2433_ = v_pos_2615_;
goto v___jp_2431_;
}
else
{
lean_object* v___x_2628_; lean_object* v_snd_2629_; lean_object* v_snd_2630_; uint8_t v___x_2631_; 
v___x_2628_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2493_, v_maxSpaceSequence_2490_, v___x_2494_, v_pos_2615_);
v_snd_2629_ = lean_ctor_get(v___x_2628_, 1);
lean_inc(v_snd_2629_);
lean_dec_ref(v___x_2628_);
v_snd_2630_ = lean_ctor_get(v_snd_2629_, 1);
v___x_2631_ = lean_unbox(v_snd_2630_);
if (v___x_2631_ == 0)
{
lean_object* v_fst_2632_; lean_object* v_array_2633_; lean_object* v_idx_2634_; lean_object* v___x_2635_; uint8_t v___x_2636_; 
lean_del_object(v___x_2617_);
v_fst_2632_ = lean_ctor_get(v_snd_2629_, 0);
lean_inc(v_fst_2632_);
lean_dec(v_snd_2629_);
v_array_2633_ = lean_ctor_get(v_fst_2632_, 0);
v_idx_2634_ = lean_ctor_get(v_fst_2632_, 1);
v___x_2635_ = lean_byte_array_size(v_array_2633_);
v___x_2636_ = lean_nat_dec_lt(v_idx_2634_, v___x_2635_);
if (v___x_2636_ == 0)
{
lean_inc(v_idx_2634_);
lean_inc_ref(v_array_2633_);
v___y_2548_ = v___x_2613_;
v___y_2549_ = v_val_2620_;
v_pos_2550_ = v_fst_2632_;
v_array_2551_ = v_array_2633_;
v_idx_2552_ = v_idx_2634_;
goto v___jp_2547_;
}
else
{
uint8_t v___x_2637_; uint32_t v___x_2638_; uint32_t v___x_2639_; uint8_t v___x_2640_; 
v___x_2637_ = lean_byte_array_fget(v_array_2633_, v_idx_2634_);
v___x_2638_ = lean_uint8_to_uint32(v___x_2637_);
v___x_2639_ = 32;
v___x_2640_ = lean_uint32_dec_eq(v___x_2638_, v___x_2639_);
if (v___x_2640_ == 0)
{
uint32_t v___x_2641_; uint8_t v___x_2642_; 
v___x_2641_ = 9;
v___x_2642_ = lean_uint32_dec_eq(v___x_2638_, v___x_2641_);
if (v___x_2642_ == 0)
{
lean_inc(v_idx_2634_);
lean_inc_ref(v_array_2633_);
v___y_2548_ = v___x_2613_;
v___y_2549_ = v_val_2620_;
v_pos_2550_ = v_fst_2632_;
v_array_2551_ = v_array_2633_;
v_idx_2552_ = v_idx_2634_;
goto v___jp_2547_;
}
else
{
lean_dec(v_val_2620_);
lean_del_object(v___x_2504_);
v_pos_2487_ = v_fst_2632_;
goto v___jp_2486_;
}
}
else
{
lean_dec(v_val_2620_);
lean_del_object(v___x_2504_);
v_pos_2487_ = v_fst_2632_;
goto v___jp_2486_;
}
}
}
else
{
lean_object* v_fst_2643_; lean_object* v___x_2644_; lean_object* v___x_2646_; 
lean_dec(v_val_2620_);
lean_del_object(v___x_2504_);
v_fst_2643_ = lean_ctor_get(v_snd_2629_, 0);
lean_inc(v_fst_2643_);
lean_dec(v_snd_2629_);
v___x_2644_ = lean_box(0);
if (v_isShared_2618_ == 0)
{
lean_ctor_set_tag(v___x_2617_, 1);
lean_ctor_set(v___x_2617_, 1, v___x_2644_);
lean_ctor_set(v___x_2617_, 0, v_fst_2643_);
v___x_2646_ = v___x_2617_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_fst_2643_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v___x_2644_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2650_; 
lean_dec(v___x_2619_);
lean_del_object(v___x_2504_);
v___x_2648_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5));
if (v_isShared_2618_ == 0)
{
lean_ctor_set_tag(v___x_2617_, 1);
lean_ctor_set(v___x_2617_, 1, v___x_2648_);
v___x_2650_ = v___x_2617_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_pos_2615_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v___x_2648_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
else
{
lean_object* v_pos_2654_; lean_object* v_err_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2662_; 
lean_dec(v_res_2612_);
lean_del_object(v___x_2504_);
v_pos_2654_ = lean_ctor_get(v___x_2614_, 0);
v_err_2655_ = lean_ctor_get(v___x_2614_, 1);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2657_ = v___x_2614_;
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_err_2655_);
lean_inc(v_pos_2654_);
lean_dec(v___x_2614_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2660_; 
if (v_isShared_2658_ == 0)
{
v___x_2660_ = v___x_2657_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_pos_2654_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v_err_2655_);
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
lean_object* v_pos_2663_; lean_object* v_err_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
lean_del_object(v___x_2504_);
v_pos_2663_ = lean_ctor_get(v___x_2610_, 0);
v_err_2664_ = lean_ctor_get(v___x_2610_, 1);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2610_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_err_2664_);
lean_inc(v_pos_2663_);
lean_dec(v___x_2610_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_pos_2663_);
lean_ctor_set(v_reuseFailAlloc_2670_, 1, v_err_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
v___jp_2672_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2677_ = l_ByteArray_toByteSlice(v___y_2674_, v_lower_2675_, v_upper_2676_);
v___x_2678_ = l_ByteSlice_toByteArray(v___x_2677_);
v___x_2679_ = lean_string_validate_utf8(v___x_2678_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2680_; 
lean_dec_ref(v___x_2678_);
v___x_2680_ = lean_box(0);
v_pos_2608_ = v___y_2673_;
v_res_2609_ = v___x_2680_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = lean_string_from_utf8_unchecked(v___x_2678_);
v___x_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2681_);
v_pos_2608_ = v___y_2673_;
v_res_2609_ = v___x_2682_;
goto v___jp_2607_;
}
}
v___jp_2683_:
{
uint8_t v___x_2689_; 
v___x_2689_ = lean_nat_dec_le(v___y_2687_, v___y_2685_);
if (v___x_2689_ == 0)
{
lean_dec(v___y_2687_);
v___y_2673_ = v___y_2684_;
v___y_2674_ = v___y_2686_;
v_lower_2675_ = v___y_2688_;
v_upper_2676_ = v___y_2685_;
goto v___jp_2672_;
}
else
{
lean_dec(v___y_2685_);
v___y_2673_ = v___y_2684_;
v___y_2674_ = v___y_2686_;
v_lower_2675_ = v___y_2688_;
v_upper_2676_ = v___y_2687_;
goto v___jp_2672_;
}
}
v___jp_2690_:
{
lean_object* v___x_2692_; lean_object* v_snd_2693_; lean_object* v_snd_2694_; uint8_t v___x_2695_; 
lean_inc_ref(v_pos_2691_);
v___x_2692_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2508_, v_maxChunkExtNameLength_2491_, v___x_2494_, v_pos_2691_);
v_snd_2693_ = lean_ctor_get(v___x_2692_, 1);
lean_inc(v_snd_2693_);
v_snd_2694_ = lean_ctor_get(v_snd_2693_, 1);
v___x_2695_ = lean_unbox(v_snd_2694_);
if (v___x_2695_ == 0)
{
lean_object* v_fst_2696_; lean_object* v_fst_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2711_; 
v_fst_2696_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_fst_2696_);
lean_dec_ref(v___x_2692_);
v_fst_2697_ = lean_ctor_get(v_snd_2693_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v_snd_2693_);
if (v_isSharedCheck_2711_ == 0)
{
lean_object* v_unused_2712_; 
v_unused_2712_ = lean_ctor_get(v_snd_2693_, 1);
lean_dec(v_unused_2712_);
v___x_2699_ = v_snd_2693_;
v_isShared_2700_ = v_isSharedCheck_2711_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_fst_2697_);
lean_dec(v_snd_2693_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2711_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
uint8_t v___x_2701_; 
v___x_2701_ = lean_nat_dec_eq(v_fst_2696_, v___x_2494_);
if (v___x_2701_ == 0)
{
lean_object* v_array_2702_; lean_object* v_idx_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; uint8_t v___x_2706_; 
lean_del_object(v___x_2699_);
v_array_2702_ = lean_ctor_get(v_pos_2691_, 0);
lean_inc_ref(v_array_2702_);
v_idx_2703_ = lean_ctor_get(v_pos_2691_, 1);
lean_inc(v_idx_2703_);
lean_dec_ref(v_pos_2691_);
v___x_2704_ = lean_nat_add(v_idx_2703_, v_fst_2696_);
lean_dec(v_fst_2696_);
v___x_2705_ = lean_byte_array_size(v_array_2702_);
v___x_2706_ = lean_nat_dec_le(v_idx_2703_, v___x_2494_);
if (v___x_2706_ == 0)
{
v___y_2684_ = v_fst_2697_;
v___y_2685_ = v___x_2705_;
v___y_2686_ = v_array_2702_;
v___y_2687_ = v___x_2704_;
v___y_2688_ = v_idx_2703_;
goto v___jp_2683_;
}
else
{
lean_dec(v_idx_2703_);
v___y_2684_ = v_fst_2697_;
v___y_2685_ = v___x_2705_;
v___y_2686_ = v_array_2702_;
v___y_2687_ = v___x_2704_;
v___y_2688_ = v___x_2494_;
goto v___jp_2683_;
}
}
else
{
lean_object* v___x_2707_; lean_object* v___x_2709_; 
lean_dec(v_fst_2697_);
lean_dec(v_fst_2696_);
lean_del_object(v___x_2504_);
v___x_2707_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_2700_ == 0)
{
lean_ctor_set_tag(v___x_2699_, 1);
lean_ctor_set(v___x_2699_, 1, v___x_2707_);
lean_ctor_set(v___x_2699_, 0, v_pos_2691_);
v___x_2709_ = v___x_2699_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_pos_2691_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
else
{
lean_object* v_fst_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2721_; 
lean_dec_ref(v___x_2692_);
lean_dec_ref(v_pos_2691_);
lean_del_object(v___x_2504_);
v_fst_2713_ = lean_ctor_get(v_snd_2693_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_snd_2693_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; 
v_unused_2722_ = lean_ctor_get(v_snd_2693_, 1);
lean_dec(v_unused_2722_);
v___x_2715_ = v_snd_2693_;
v_isShared_2716_ = v_isSharedCheck_2721_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_fst_2713_);
lean_dec(v_snd_2693_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2721_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2717_ = lean_box(0);
if (v_isShared_2716_ == 0)
{
lean_ctor_set_tag(v___x_2715_, 1);
lean_ctor_set(v___x_2715_, 1, v___x_2717_);
v___x_2719_ = v___x_2715_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_fst_2713_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v___x_2717_);
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
v___jp_2723_:
{
lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2725_ = lean_byte_array_size(v_array_2506_);
v___x_2726_ = lean_nat_dec_lt(v_idx_2507_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; lean_object* v___x_2729_; 
lean_dec(v_idx_2507_);
lean_dec_ref(v_array_2506_);
lean_del_object(v___x_2504_);
v___x_2727_ = lean_box(0);
if (v_isShared_2499_ == 0)
{
lean_ctor_set_tag(v___x_2498_, 1);
lean_ctor_set(v___x_2498_, 1, v___x_2727_);
lean_ctor_set(v___x_2498_, 0, v_pos_2724_);
v___x_2729_ = v___x_2498_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_pos_2724_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v___x_2727_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
else
{
uint8_t v___x_2731_; uint8_t v_got_2732_; uint8_t v___x_2733_; 
v___x_2731_ = 59;
v_got_2732_ = lean_byte_array_fget(v_array_2506_, v_idx_2507_);
v___x_2733_ = lean_uint8_dec_eq(v_got_2732_, v___x_2731_);
if (v___x_2733_ == 0)
{
lean_object* v___x_2734_; lean_object* v___x_2736_; 
lean_dec(v_idx_2507_);
lean_dec_ref(v_array_2506_);
lean_del_object(v___x_2504_);
v___x_2734_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7));
if (v_isShared_2499_ == 0)
{
lean_ctor_set_tag(v___x_2498_, 1);
lean_ctor_set(v___x_2498_, 1, v___x_2734_);
lean_ctor_set(v___x_2498_, 0, v_pos_2724_);
v___x_2736_ = v___x_2498_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_pos_2724_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v___x_2734_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
else
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2741_; 
lean_dec_ref(v_pos_2724_);
v___x_2738_ = lean_unsigned_to_nat(1u);
v___x_2739_ = lean_nat_add(v_idx_2507_, v___x_2738_);
lean_dec(v_idx_2507_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 1, v___x_2739_);
lean_ctor_set(v___x_2498_, 0, v_array_2506_);
v___x_2741_ = v___x_2498_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_array_2506_);
lean_ctor_set(v_reuseFailAlloc_2767_, 1, v___x_2739_);
v___x_2741_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
lean_object* v___x_2742_; lean_object* v_snd_2743_; lean_object* v_snd_2744_; uint8_t v___x_2745_; 
v___x_2742_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2493_, v_maxSpaceSequence_2490_, v___x_2494_, v___x_2741_);
v_snd_2743_ = lean_ctor_get(v___x_2742_, 1);
lean_inc(v_snd_2743_);
lean_dec_ref(v___x_2742_);
v_snd_2744_ = lean_ctor_get(v_snd_2743_, 1);
v___x_2745_ = lean_unbox(v_snd_2744_);
if (v___x_2745_ == 0)
{
lean_object* v_fst_2746_; lean_object* v_array_2747_; lean_object* v_idx_2748_; lean_object* v___x_2749_; uint8_t v___x_2750_; 
v_fst_2746_ = lean_ctor_get(v_snd_2743_, 0);
lean_inc(v_fst_2746_);
lean_dec(v_snd_2743_);
v_array_2747_ = lean_ctor_get(v_fst_2746_, 0);
v_idx_2748_ = lean_ctor_get(v_fst_2746_, 1);
v___x_2749_ = lean_byte_array_size(v_array_2747_);
v___x_2750_ = lean_nat_dec_lt(v_idx_2748_, v___x_2749_);
if (v___x_2750_ == 0)
{
v_pos_2691_ = v_fst_2746_;
goto v___jp_2690_;
}
else
{
uint8_t v___x_2751_; uint32_t v___x_2752_; uint32_t v___x_2753_; uint8_t v___x_2754_; 
v___x_2751_ = lean_byte_array_fget(v_array_2747_, v_idx_2748_);
v___x_2752_ = lean_uint8_to_uint32(v___x_2751_);
v___x_2753_ = 32;
v___x_2754_ = lean_uint32_dec_eq(v___x_2752_, v___x_2753_);
if (v___x_2754_ == 0)
{
uint32_t v___x_2755_; uint8_t v___x_2756_; 
v___x_2755_ = 9;
v___x_2756_ = lean_uint32_dec_eq(v___x_2752_, v___x_2755_);
if (v___x_2756_ == 0)
{
v_pos_2691_ = v_fst_2746_;
goto v___jp_2690_;
}
else
{
lean_del_object(v___x_2504_);
v_pos_2428_ = v_fst_2746_;
goto v___jp_2427_;
}
}
else
{
lean_del_object(v___x_2504_);
v_pos_2428_ = v_fst_2746_;
goto v___jp_2427_;
}
}
}
else
{
lean_object* v_fst_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2765_; 
lean_del_object(v___x_2504_);
v_fst_2757_ = lean_ctor_get(v_snd_2743_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v_snd_2743_);
if (v_isSharedCheck_2765_ == 0)
{
lean_object* v_unused_2766_; 
v_unused_2766_ = lean_ctor_get(v_snd_2743_, 1);
lean_dec(v_unused_2766_);
v___x_2759_ = v_snd_2743_;
v_isShared_2760_ = v_isSharedCheck_2765_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_fst_2757_);
lean_dec(v_snd_2743_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2765_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2761_; lean_object* v___x_2763_; 
v___x_2761_ = lean_box(0);
if (v_isShared_2760_ == 0)
{
lean_ctor_set_tag(v___x_2759_, 1);
lean_ctor_set(v___x_2759_, 1, v___x_2761_);
v___x_2763_ = v___x_2759_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_fst_2757_);
lean_ctor_set(v_reuseFailAlloc_2764_, 1, v___x_2761_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
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
lean_object* v_fst_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2786_; 
lean_del_object(v___x_2498_);
v_fst_2778_ = lean_ctor_get(v_snd_2496_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_snd_2496_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; 
v_unused_2787_ = lean_ctor_get(v_snd_2496_, 1);
lean_dec(v_unused_2787_);
v___x_2780_ = v_snd_2496_;
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_fst_2778_);
lean_dec(v_snd_2496_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2782_ = lean_box(0);
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 1);
lean_ctor_set(v___x_2780_, 1, v___x_2782_);
v___x_2784_ = v___x_2780_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_fst_2778_);
lean_ctor_set(v_reuseFailAlloc_2785_, 1, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___boxed(lean_object* v_limits_2790_, lean_object* v_a_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(v_limits_2790_, v_a_2791_);
lean_dec_ref(v_limits_2790_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0(lean_object* v_limits_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v___x_2795_; 
v___x_2795_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(v_limits_2793_, v___y_2794_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_pos_2796_; lean_object* v_res_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2805_; 
v_pos_2796_ = lean_ctor_get(v___x_2795_, 0);
v_res_2797_ = lean_ctor_get(v___x_2795_, 1);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2799_ = v___x_2795_;
v_isShared_2800_ = v_isSharedCheck_2805_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_res_2797_);
lean_inc(v_pos_2796_);
lean_dec(v___x_2795_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2805_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2801_, 0, v_res_2797_);
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 1, v___x_2801_);
v___x_2803_ = v___x_2799_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_pos_2796_);
lean_ctor_set(v_reuseFailAlloc_2804_, 1, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
else
{
lean_object* v_pos_2806_; lean_object* v_err_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
v_pos_2806_ = lean_ctor_get(v___x_2795_, 0);
v_err_2807_ = lean_ctor_get(v___x_2795_, 1);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2795_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_err_2807_);
lean_inc(v_pos_2806_);
lean_dec(v___x_2795_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_pos_2806_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v_err_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0___boxed(lean_object* v_limits_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Std_Http_Protocol_H1_parseChunkSize___lam__0(v_limits_2815_, v___y_2816_);
lean_dec_ref(v_limits_2815_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize(lean_object* v_limits_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v___x_2820_; 
v___x_2820_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex(v_a_2819_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v_pos_2821_; lean_object* v_res_2822_; lean_object* v_maxChunkExtensions_2823_; lean_object* v___f_2824_; lean_object* v___x_2825_; 
v_pos_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_pos_2821_);
v_res_2822_ = lean_ctor_get(v___x_2820_, 1);
lean_inc(v_res_2822_);
lean_dec_ref_known(v___x_2820_, 2);
v_maxChunkExtensions_2823_ = lean_ctor_get(v_limits_2818_, 10);
lean_inc(v_maxChunkExtensions_2823_);
v___f_2824_ = lean_alloc_closure((void*)(l_Std_Http_Protocol_H1_parseChunkSize___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2824_, 0, v_limits_2818_);
v___x_2825_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(v___f_2824_, v_maxChunkExtensions_2823_, v_pos_2821_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_pos_2826_; lean_object* v_res_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v_pos_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_pos_2826_);
v_res_2827_ = lean_ctor_get(v___x_2825_, 1);
lean_inc(v_res_2827_);
lean_dec_ref_known(v___x_2825_, 2);
v___x_2828_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2829_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2828_, v_pos_2826_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_pos_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2838_; 
v_pos_2830_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2838_ == 0)
{
lean_object* v_unused_2839_; 
v_unused_2839_ = lean_ctor_get(v___x_2829_, 1);
lean_dec(v_unused_2839_);
v___x_2832_ = v___x_2829_;
v_isShared_2833_ = v_isSharedCheck_2838_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_pos_2830_);
lean_dec(v___x_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2838_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2834_; lean_object* v___x_2836_; 
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v_res_2822_);
lean_ctor_set(v___x_2834_, 1, v_res_2827_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 1, v___x_2834_);
v___x_2836_ = v___x_2832_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_pos_2830_);
lean_ctor_set(v_reuseFailAlloc_2837_, 1, v___x_2834_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
else
{
lean_object* v_pos_2840_; lean_object* v_err_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec(v_res_2827_);
lean_dec(v_res_2822_);
v_pos_2840_ = lean_ctor_get(v___x_2829_, 0);
v_err_2841_ = lean_ctor_get(v___x_2829_, 1);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2829_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_err_2841_);
lean_inc(v_pos_2840_);
lean_dec(v___x_2829_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_pos_2840_);
lean_ctor_set(v_reuseFailAlloc_2847_, 1, v_err_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
else
{
lean_object* v_pos_2849_; lean_object* v_err_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec(v_res_2822_);
v_pos_2849_ = lean_ctor_get(v___x_2825_, 0);
v_err_2850_ = lean_ctor_get(v___x_2825_, 1);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2825_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_err_2850_);
lean_inc(v_pos_2849_);
lean_dec(v___x_2825_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_pos_2849_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v_err_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
else
{
lean_object* v_pos_2858_; lean_object* v_err_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec_ref(v_limits_2818_);
v_pos_2858_ = lean_ctor_get(v___x_2820_, 0);
v_err_2859_ = lean_ctor_get(v___x_2820_, 1);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2820_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_err_2859_);
lean_inc(v_pos_2858_);
lean_dec(v___x_2820_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_pos_2858_);
lean_ctor_set(v_reuseFailAlloc_2865_, 1, v_err_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl(lean_object* v_x_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_obj_tag_nat(v_x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl___boxed(lean_object* v_x_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl(v_x_2869_);
lean_dec_ref(v_x_2869_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(lean_object* v_t_2871_, lean_object* v_k_2872_){
_start:
{
if (lean_obj_tag(v_t_2871_) == 0)
{
lean_object* v_data_2873_; lean_object* v___x_2874_; 
v_data_2873_ = lean_ctor_get(v_t_2871_, 0);
lean_inc_ref(v_data_2873_);
lean_dec_ref_known(v_t_2871_, 1);
v___x_2874_ = lean_apply_1(v_k_2872_, v_data_2873_);
return v___x_2874_;
}
else
{
lean_object* v_data_2875_; lean_object* v_remaining_2876_; lean_object* v___x_2877_; 
v_data_2875_ = lean_ctor_get(v_t_2871_, 0);
lean_inc_ref(v_data_2875_);
v_remaining_2876_ = lean_ctor_get(v_t_2871_, 1);
lean_inc(v_remaining_2876_);
lean_dec_ref_known(v_t_2871_, 2);
v___x_2877_ = lean_apply_2(v_k_2872_, v_data_2875_, v_remaining_2876_);
return v___x_2877_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim(lean_object* v_motive_2878_, lean_object* v_ctorIdx_2879_, lean_object* v_t_2880_, lean_object* v_h_2881_, lean_object* v_k_2882_){
_start:
{
lean_object* v___x_2883_; 
v___x_2883_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2880_, v_k_2882_);
return v___x_2883_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___boxed(lean_object* v_motive_2884_, lean_object* v_ctorIdx_2885_, lean_object* v_t_2886_, lean_object* v_h_2887_, lean_object* v_k_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim(v_motive_2884_, v_ctorIdx_2885_, v_t_2886_, v_h_2887_, v_k_2888_);
lean_dec(v_ctorIdx_2885_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim___redArg(lean_object* v_t_2890_, lean_object* v_complete_2891_){
_start:
{
lean_object* v___x_2892_; 
v___x_2892_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2890_, v_complete_2891_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim(lean_object* v_motive_2893_, lean_object* v_t_2894_, lean_object* v_h_2895_, lean_object* v_complete_2896_){
_start:
{
lean_object* v___x_2897_; 
v___x_2897_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2894_, v_complete_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim___redArg(lean_object* v_t_2898_, lean_object* v_incomplete_2899_){
_start:
{
lean_object* v___x_2900_; 
v___x_2900_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2898_, v_incomplete_2899_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim(lean_object* v_motive_2901_, lean_object* v_t_2902_, lean_object* v_h_2903_, lean_object* v_incomplete_2904_){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2902_, v_incomplete_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkPartial(lean_object* v_limits_2906_, lean_object* v_a_2907_){
_start:
{
lean_object* v___x_2908_; 
v___x_2908_ = l_Std_Http_Protocol_H1_parseChunkSize(v_limits_2906_, v_a_2907_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_res_2909_; lean_object* v_pos_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2950_; 
v_res_2909_ = lean_ctor_get(v___x_2908_, 1);
v_pos_2910_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2912_ = v___x_2908_;
v_isShared_2913_ = v_isSharedCheck_2950_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_res_2909_);
lean_inc(v_pos_2910_);
lean_dec(v___x_2908_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2950_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v_fst_2914_; lean_object* v_snd_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2949_; 
v_fst_2914_ = lean_ctor_get(v_res_2909_, 0);
v_snd_2915_ = lean_ctor_get(v_res_2909_, 1);
v_isSharedCheck_2949_ = !lean_is_exclusive(v_res_2909_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2917_ = v_res_2909_;
v_isShared_2918_ = v_isSharedCheck_2949_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_snd_2915_);
lean_inc(v_fst_2914_);
lean_dec(v_res_2909_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2949_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2919_; uint8_t v___x_2920_; 
v___x_2919_ = lean_unsigned_to_nat(0u);
v___x_2920_ = lean_nat_dec_eq(v_fst_2914_, v___x_2919_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; 
lean_del_object(v___x_2912_);
v___x_2921_ = l_Std_Internal_Parsec_ByteArray_take(v_fst_2914_, v_pos_2910_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_pos_2922_; lean_object* v_res_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2935_; 
v_pos_2922_ = lean_ctor_get(v___x_2921_, 0);
v_res_2923_ = lean_ctor_get(v___x_2921_, 1);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2925_ = v___x_2921_;
v_isShared_2926_ = v_isSharedCheck_2935_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_res_2923_);
lean_inc(v_pos_2922_);
lean_dec(v___x_2921_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2935_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 1, v_res_2923_);
lean_ctor_set(v___x_2917_, 0, v_snd_2915_);
v___x_2928_ = v___x_2917_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_snd_2915_);
lean_ctor_set(v_reuseFailAlloc_2934_, 1, v_res_2923_);
v___x_2928_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2932_; 
v___x_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2929_, 0, v_fst_2914_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
v___x_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 1, v___x_2930_);
v___x_2932_ = v___x_2925_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_pos_2922_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v___x_2930_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
else
{
lean_object* v_pos_2936_; lean_object* v_err_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
lean_del_object(v___x_2917_);
lean_dec(v_snd_2915_);
lean_dec(v_fst_2914_);
v_pos_2936_ = lean_ctor_get(v___x_2921_, 0);
v_err_2937_ = lean_ctor_get(v___x_2921_, 1);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2921_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_err_2937_);
lean_inc(v_pos_2936_);
lean_dec(v___x_2921_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_pos_2936_);
lean_ctor_set(v_reuseFailAlloc_2943_, 1, v_err_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
else
{
lean_object* v___x_2945_; lean_object* v___x_2947_; 
lean_del_object(v___x_2917_);
lean_dec(v_snd_2915_);
lean_dec(v_fst_2914_);
v___x_2945_ = lean_box(0);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 1, v___x_2945_);
v___x_2947_ = v___x_2912_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_pos_2910_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
}
else
{
lean_object* v_pos_2951_; lean_object* v_err_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
v_pos_2951_ = lean_ctor_get(v___x_2908_, 0);
v_err_2952_ = lean_ctor_get(v___x_2908_, 1);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2908_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_err_2952_);
lean_inc(v_pos_2951_);
lean_dec(v___x_2908_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_pos_2951_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v_err_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData(lean_object* v_size_2960_, lean_object* v_it_2961_){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v___x_2962_ = l_ByteArray_Iterator_remainingBytes(v_it_2961_);
v___x_2963_ = lean_unsigned_to_nat(0u);
v___x_2964_ = lean_nat_dec_eq(v___x_2962_, v___x_2963_);
if (v___x_2964_ == 0)
{
uint8_t v___x_2965_; 
v___x_2965_ = lean_nat_dec_lt(v___x_2962_, v_size_2960_);
if (v___x_2965_ == 0)
{
lean_object* v_array_2966_; lean_object* v_idx_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2986_; 
lean_dec(v___x_2962_);
v_array_2966_ = lean_ctor_get(v_it_2961_, 0);
v_idx_2967_ = lean_ctor_get(v_it_2961_, 1);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_it_2961_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2969_ = v_it_2961_;
v_isShared_2970_ = v_isSharedCheck_2986_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_idx_2967_);
lean_inc(v_array_2966_);
lean_dec(v_it_2961_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2986_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2971_ = lean_nat_add(v_idx_2967_, v_size_2960_);
lean_inc(v___x_2971_);
lean_inc_ref(v_array_2966_);
if (v_isShared_2970_ == 0)
{
lean_ctor_set(v___x_2969_, 1, v___x_2971_);
v___x_2973_ = v___x_2969_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_array_2966_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v_lower_2975_; lean_object* v_upper_2976_; lean_object* v___x_2980_; lean_object* v___y_2982_; uint8_t v___x_2984_; 
v___x_2980_ = lean_byte_array_size(v_array_2966_);
v___x_2984_ = lean_nat_dec_le(v_idx_2967_, v___x_2963_);
if (v___x_2984_ == 0)
{
v___y_2982_ = v_idx_2967_;
goto v___jp_2981_;
}
else
{
lean_dec(v_idx_2967_);
v___y_2982_ = v___x_2963_;
goto v___jp_2981_;
}
v___jp_2974_:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2977_ = l_ByteArray_toByteSlice(v_array_2966_, v_lower_2975_, v_upper_2976_);
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
v___x_2979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2973_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
return v___x_2979_;
}
v___jp_2981_:
{
uint8_t v___x_2983_; 
v___x_2983_ = lean_nat_dec_le(v___x_2971_, v___x_2980_);
if (v___x_2983_ == 0)
{
lean_dec(v___x_2971_);
v_lower_2975_ = v___y_2982_;
v_upper_2976_ = v___x_2980_;
goto v___jp_2974_;
}
else
{
v_lower_2975_ = v___y_2982_;
v_upper_2976_ = v___x_2971_;
goto v___jp_2974_;
}
}
}
}
}
else
{
lean_object* v_array_2987_; lean_object* v_idx_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3008_; 
v_array_2987_ = lean_ctor_get(v_it_2961_, 0);
v_idx_2988_ = lean_ctor_get(v_it_2961_, 1);
v_isSharedCheck_3008_ = !lean_is_exclusive(v_it_2961_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2990_ = v_it_2961_;
v_isShared_2991_ = v_isSharedCheck_3008_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_idx_2988_);
lean_inc(v_array_2987_);
lean_dec(v_it_2961_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3008_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2992_; lean_object* v___x_2994_; 
v___x_2992_ = lean_nat_add(v_idx_2988_, v___x_2962_);
lean_inc(v___x_2992_);
lean_inc_ref(v_array_2987_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 1, v___x_2992_);
v___x_2994_ = v___x_2990_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_array_2987_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v___x_2992_);
v___x_2994_ = v_reuseFailAlloc_3007_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
lean_object* v_lower_2996_; lean_object* v_upper_2997_; lean_object* v___x_3002_; lean_object* v___y_3004_; uint8_t v___x_3006_; 
v___x_3002_ = lean_byte_array_size(v_array_2987_);
v___x_3006_ = lean_nat_dec_le(v_idx_2988_, v___x_2963_);
if (v___x_3006_ == 0)
{
v___y_3004_ = v_idx_2988_;
goto v___jp_3003_;
}
else
{
lean_dec(v_idx_2988_);
v___y_3004_ = v___x_2963_;
goto v___jp_3003_;
}
v___jp_2995_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_2998_ = l_ByteArray_toByteSlice(v_array_2987_, v_lower_2996_, v_upper_2997_);
v___x_2999_ = lean_nat_sub(v_size_2960_, v___x_2962_);
lean_dec(v___x_2962_);
v___x_3000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2998_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2994_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
return v___x_3001_;
}
v___jp_3003_:
{
uint8_t v___x_3005_; 
v___x_3005_ = lean_nat_dec_le(v___x_2992_, v___x_3002_);
if (v___x_3005_ == 0)
{
lean_dec(v___x_2992_);
v_lower_2996_ = v___y_3004_;
v_upper_2997_ = v___x_3002_;
goto v___jp_2995_;
}
else
{
v_lower_2996_ = v___y_3004_;
v_upper_2997_ = v___x_2992_;
goto v___jp_2995_;
}
}
}
}
}
}
else
{
lean_object* v___x_3009_; lean_object* v___x_3010_; 
lean_dec(v___x_2962_);
v___x_3009_ = lean_box(0);
v___x_3010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3010_, 0, v_it_2961_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
return v___x_3010_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData___boxed(lean_object* v_size_3011_, lean_object* v_it_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l_Std_Http_Protocol_H1_parseFixedSizeData(v_size_3011_, v_it_3012_);
lean_dec(v_size_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData(lean_object* v_size_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v___x_3016_; 
v___x_3016_ = l_Std_Http_Protocol_H1_parseFixedSizeData(v_size_3014_, v_a_3015_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_res_3017_; 
v_res_3017_ = lean_ctor_get(v___x_3016_, 1);
if (lean_obj_tag(v_res_3017_) == 0)
{
lean_object* v_pos_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
lean_inc_ref(v_res_3017_);
v_pos_3018_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_pos_3018_);
lean_dec_ref_known(v___x_3016_, 2);
v___x_3019_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_3020_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_3019_, v_pos_3018_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_pos_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
v_pos_3021_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v___x_3020_, 1);
lean_dec(v_unused_3029_);
v___x_3023_ = v___x_3020_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_pos_3021_);
lean_dec(v___x_3020_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 1, v_res_3017_);
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_pos_3021_);
lean_ctor_set(v_reuseFailAlloc_3027_, 1, v_res_3017_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
else
{
lean_object* v_pos_3030_; lean_object* v_err_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
lean_dec_ref_known(v_res_3017_, 1);
v_pos_3030_ = lean_ctor_get(v___x_3020_, 0);
v_err_3031_ = lean_ctor_get(v___x_3020_, 1);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_3020_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_err_3031_);
lean_inc(v_pos_3030_);
lean_dec(v___x_3020_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_pos_3030_);
lean_ctor_set(v_reuseFailAlloc_3037_, 1, v_err_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
return v___x_3016_;
}
}
else
{
return v___x_3016_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData___boxed(lean_object* v_size_3039_, lean_object* v_a_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l_Std_Http_Protocol_H1_parseChunkSizedData(v_size_3039_, v_a_3040_);
lean_dec(v_size_3039_);
return v_res_3041_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(lean_object* v_s_3042_, lean_object* v_p_3043_){
_start:
{
lean_object* v___y_3045_; lean_object* v___y_3046_; uint32_t v___y_3050_; lean_object* v___x_3062_; uint8_t v_decide_3063_; 
v___x_3062_ = lean_string_utf8_byte_size(v_s_3042_);
v_decide_3063_ = lean_nat_dec_eq(v_p_3043_, v___x_3062_);
if (v_decide_3063_ == 0)
{
uint32_t v___x_3064_; uint32_t v___x_3065_; uint8_t v___x_3066_; 
v___x_3064_ = lean_string_utf8_get_fast(v_s_3042_, v_p_3043_);
v___x_3065_ = 65;
v___x_3066_ = lean_uint32_dec_le(v___x_3065_, v___x_3064_);
if (v___x_3066_ == 0)
{
v___y_3050_ = v___x_3064_;
goto v___jp_3049_;
}
else
{
uint32_t v___x_3067_; uint8_t v___x_3068_; 
v___x_3067_ = 90;
v___x_3068_ = lean_uint32_dec_le(v___x_3064_, v___x_3067_);
if (v___x_3068_ == 0)
{
v___y_3050_ = v___x_3064_;
goto v___jp_3049_;
}
else
{
uint32_t v___x_3069_; uint32_t v___x_3070_; 
v___x_3069_ = 32;
v___x_3070_ = lean_uint32_add(v___x_3064_, v___x_3069_);
v___y_3050_ = v___x_3070_;
goto v___jp_3049_;
}
}
}
else
{
lean_dec(v_p_3043_);
return v_s_3042_;
}
v___jp_3044_:
{
lean_object* v___x_3047_; 
v___x_3047_ = lean_nat_add(v_p_3043_, v___y_3046_);
lean_dec(v_p_3043_);
v_s_3042_ = v___y_3045_;
v_p_3043_ = v___x_3047_;
goto _start;
}
v___jp_3049_:
{
lean_object* v___x_3051_; uint32_t v___x_3052_; uint8_t v___x_3053_; 
lean_inc(v_p_3043_);
v___x_3051_ = lean_string_utf8_set(v_s_3042_, v_p_3043_, v___y_3050_);
v___x_3052_ = 127;
v___x_3053_ = lean_uint32_dec_le(v___y_3050_, v___x_3052_);
if (v___x_3053_ == 0)
{
uint32_t v___x_3054_; uint8_t v___x_3055_; 
v___x_3054_ = 2047;
v___x_3055_ = lean_uint32_dec_le(v___y_3050_, v___x_3054_);
if (v___x_3055_ == 0)
{
uint32_t v___x_3056_; uint8_t v___x_3057_; 
v___x_3056_ = 65535;
v___x_3057_ = lean_uint32_dec_le(v___y_3050_, v___x_3056_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; 
v___x_3058_ = lean_unsigned_to_nat(4u);
v___y_3045_ = v___x_3051_;
v___y_3046_ = v___x_3058_;
goto v___jp_3044_;
}
else
{
lean_object* v___x_3059_; 
v___x_3059_ = lean_unsigned_to_nat(3u);
v___y_3045_ = v___x_3051_;
v___y_3046_ = v___x_3059_;
goto v___jp_3044_;
}
}
else
{
lean_object* v___x_3060_; 
v___x_3060_ = lean_unsigned_to_nat(2u);
v___y_3045_ = v___x_3051_;
v___y_3046_ = v___x_3060_;
goto v___jp_3044_;
}
}
else
{
lean_object* v___x_3061_; 
v___x_3061_ = lean_unsigned_to_nat(1u);
v___y_3045_ = v___x_3051_;
v___y_3046_ = v___x_3061_;
goto v___jp_3044_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(lean_object* v_name_3078_){
_start:
{
lean_object* v___x_3079_; lean_object* v_n_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3079_ = lean_unsigned_to_nat(0u);
v_n_3080_ = l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(v_name_3078_, v___x_3079_);
v___x_3081_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0));
v___x_3082_ = lean_string_dec_eq(v_n_3080_, v___x_3081_);
if (v___x_3082_ == 0)
{
lean_object* v___x_3083_; uint8_t v___x_3084_; 
v___x_3083_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1));
v___x_3084_ = lean_string_dec_eq(v_n_3080_, v___x_3083_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3085_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2));
v___x_3086_ = lean_string_dec_eq(v_n_3080_, v___x_3085_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; uint8_t v___x_3088_; 
v___x_3087_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3));
v___x_3088_ = lean_string_dec_eq(v_n_3080_, v___x_3087_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; uint8_t v___x_3090_; 
v___x_3089_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4));
v___x_3090_ = lean_string_dec_eq(v_n_3080_, v___x_3089_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3091_; uint8_t v___x_3092_; 
v___x_3091_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5));
v___x_3092_ = lean_string_dec_eq(v_n_3080_, v___x_3091_);
if (v___x_3092_ == 0)
{
lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3093_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6));
v___x_3094_ = lean_string_dec_eq(v_n_3080_, v___x_3093_);
lean_dec_ref(v_n_3080_);
return v___x_3094_;
}
else
{
lean_dec_ref(v_n_3080_);
return v___x_3092_;
}
}
else
{
lean_dec_ref(v_n_3080_);
return v___x_3090_;
}
}
else
{
lean_dec_ref(v_n_3080_);
return v___x_3088_;
}
}
else
{
lean_dec_ref(v_n_3080_);
return v___x_3086_;
}
}
else
{
lean_dec_ref(v_n_3080_);
return v___x_3084_;
}
}
else
{
lean_dec_ref(v_n_3080_);
return v___x_3082_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___boxed(lean_object* v_name_3095_){
_start:
{
uint8_t v_res_3096_; lean_object* v_r_3097_; 
v_res_3096_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(v_name_3095_);
v_r_3097_ = lean_box(v_res_3096_);
return v_r_3097_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(lean_object* v_name_3103_){
_start:
{
lean_object* v___x_3104_; lean_object* v_n_3105_; uint8_t v___x_3106_; 
v___x_3104_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_name_3103_);
v_n_3105_ = l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(v_name_3103_, v___x_3104_);
v___x_3106_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(v_name_3103_);
if (v___x_3106_ == 0)
{
lean_object* v___x_3107_; uint8_t v___x_3108_; 
v___x_3107_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0));
v___x_3108_ = lean_string_dec_eq(v_n_3105_, v___x_3107_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3109_; uint8_t v___x_3110_; 
v___x_3109_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1));
v___x_3110_ = lean_string_dec_eq(v_n_3105_, v___x_3109_);
if (v___x_3110_ == 0)
{
lean_object* v___x_3111_; uint8_t v___x_3112_; 
v___x_3111_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2));
v___x_3112_ = lean_string_dec_eq(v_n_3105_, v___x_3111_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; uint8_t v___x_3114_; 
v___x_3113_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3));
v___x_3114_ = lean_string_dec_eq(v_n_3105_, v___x_3113_);
if (v___x_3114_ == 0)
{
lean_object* v___x_3115_; uint8_t v___x_3116_; 
v___x_3115_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4));
v___x_3116_ = lean_string_dec_eq(v_n_3105_, v___x_3115_);
lean_dec_ref(v_n_3105_);
return v___x_3116_;
}
else
{
lean_dec_ref(v_n_3105_);
return v___x_3114_;
}
}
else
{
lean_dec_ref(v_n_3105_);
return v___x_3112_;
}
}
else
{
lean_dec_ref(v_n_3105_);
return v___x_3110_;
}
}
else
{
lean_dec_ref(v_n_3105_);
return v___x_3108_;
}
}
else
{
lean_dec_ref(v_n_3105_);
return v___x_3106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___boxed(lean_object* v_name_3117_){
_start:
{
uint8_t v_res_3118_; lean_object* v_r_3119_; 
v_res_3118_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(v_name_3117_);
v_r_3119_ = lean_box(v_res_3118_);
return v_r_3119_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader(lean_object* v_limits_3121_, uint8_t v_strict_3122_, lean_object* v_a_3123_){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = l_Std_Http_Protocol_H1_parseSingleHeader(v_limits_3121_, v_a_3123_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_res_3125_; 
v_res_3125_ = lean_ctor_get(v___x_3124_, 1);
lean_inc(v_res_3125_);
if (lean_obj_tag(v_res_3125_) == 1)
{
lean_object* v_val_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3148_; 
v_val_3126_ = lean_ctor_get(v_res_3125_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v_res_3125_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3128_ = v_res_3125_;
v_isShared_3129_ = v_isSharedCheck_3148_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_val_3126_);
lean_dec(v_res_3125_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3148_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v_pos_3130_; lean_object* v_fst_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3146_; 
v_pos_3130_ = lean_ctor_get(v___x_3124_, 0);
v_fst_3131_ = lean_ctor_get(v_val_3126_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_val_3126_);
if (v_isSharedCheck_3146_ == 0)
{
lean_object* v_unused_3147_; 
v_unused_3147_ = lean_ctor_get(v_val_3126_, 1);
lean_dec(v_unused_3147_);
v___x_3133_ = v_val_3126_;
v_isShared_3134_ = v_isSharedCheck_3146_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_fst_3131_);
lean_dec(v_val_3126_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3146_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
uint8_t v___x_3144_; 
lean_inc(v_fst_3131_);
v___x_3144_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(v_fst_3131_);
if (v___x_3144_ == 0)
{
if (v_strict_3122_ == 0)
{
lean_del_object(v___x_3133_);
lean_dec(v_fst_3131_);
lean_del_object(v___x_3128_);
return v___x_3124_;
}
else
{
uint8_t v___x_3145_; 
lean_inc(v_fst_3131_);
v___x_3145_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(v_fst_3131_);
if (v___x_3145_ == 0)
{
lean_del_object(v___x_3133_);
lean_dec(v_fst_3131_);
lean_del_object(v___x_3128_);
return v___x_3124_;
}
else
{
lean_inc(v_pos_3130_);
lean_dec_ref_known(v___x_3124_, 2);
goto v___jp_3135_;
}
}
}
else
{
lean_inc(v_pos_3130_);
lean_dec_ref_known(v___x_3124_, 2);
goto v___jp_3135_;
}
v___jp_3135_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3139_; 
v___x_3136_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0));
v___x_3137_ = lean_string_append(v___x_3136_, v_fst_3131_);
lean_dec(v_fst_3131_);
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3137_);
v___x_3139_ = v___x_3128_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v___x_3137_);
v___x_3139_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
lean_object* v___x_3141_; 
if (v_isShared_3134_ == 0)
{
lean_ctor_set_tag(v___x_3133_, 1);
lean_ctor_set(v___x_3133_, 1, v___x_3139_);
lean_ctor_set(v___x_3133_, 0, v_pos_3130_);
v___x_3141_ = v___x_3133_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_pos_3130_);
lean_ctor_set(v_reuseFailAlloc_3142_, 1, v___x_3139_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
}
}
else
{
lean_dec(v_res_3125_);
return v___x_3124_;
}
}
else
{
return v___x_3124_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader___boxed(lean_object* v_limits_3149_, lean_object* v_strict_3150_, lean_object* v_a_3151_){
_start:
{
uint8_t v_strict_boxed_3152_; lean_object* v_res_3153_; 
v_strict_boxed_3152_ = lean_unbox(v_strict_3150_);
v_res_3153_ = l_Std_Http_Protocol_H1_parseTrailerHeader(v_limits_3149_, v_strict_boxed_3152_, v_a_3151_);
lean_dec_ref(v_limits_3149_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailers(lean_object* v_limits_3154_, lean_object* v_a_3155_){
_start:
{
lean_object* v_maxTrailerHeaders_3156_; uint8_t v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v_maxTrailerHeaders_3156_ = lean_ctor_get(v_limits_3154_, 17);
lean_inc(v_maxTrailerHeaders_3156_);
v___x_3157_ = 1;
v___x_3158_ = lean_box(v___x_3157_);
v___x_3159_ = lean_alloc_closure((void*)(l_Std_Http_Protocol_H1_parseTrailerHeader___boxed), 3, 2);
lean_closure_set(v___x_3159_, 0, v_limits_3154_);
lean_closure_set(v___x_3159_, 1, v___x_3158_);
v___x_3160_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(v___x_3159_, v_maxTrailerHeaders_3156_, v_a_3155_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_pos_3161_; lean_object* v_res_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v_pos_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_pos_3161_);
v_res_3162_ = lean_ctor_get(v___x_3160_, 1);
lean_inc(v_res_3162_);
lean_dec_ref_known(v___x_3160_, 2);
v___x_3163_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_3164_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_3163_, v_pos_3161_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_pos_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
v_pos_3165_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3172_ == 0)
{
lean_object* v_unused_3173_; 
v_unused_3173_ = lean_ctor_get(v___x_3164_, 1);
lean_dec(v_unused_3173_);
v___x_3167_ = v___x_3164_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_pos_3165_);
lean_dec(v___x_3164_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
lean_ctor_set(v___x_3167_, 1, v_res_3162_);
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_pos_3165_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_res_3162_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
else
{
lean_object* v_pos_3174_; lean_object* v_err_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
lean_dec(v_res_3162_);
v_pos_3174_ = lean_ctor_get(v___x_3164_, 0);
v_err_3175_ = lean_ctor_get(v___x_3164_, 1);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3164_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_err_3175_);
lean_inc(v_pos_3174_);
lean_dec(v___x_3164_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_pos_3174_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v_err_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
return v___x_3160_;
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte(uint8_t v_c_3183_){
_start:
{
uint32_t v___x_3184_; uint32_t v___x_3192_; uint8_t v___x_3193_; 
v___x_3184_ = lean_uint8_to_uint32(v_c_3183_);
v___x_3192_ = 33;
v___x_3193_ = lean_uint32_dec_le(v___x_3192_, v___x_3184_);
if (v___x_3193_ == 0)
{
goto v___jp_3185_;
}
else
{
uint32_t v___x_3194_; uint8_t v___x_3195_; 
v___x_3194_ = 126;
v___x_3195_ = lean_uint32_dec_le(v___x_3184_, v___x_3194_);
if (v___x_3195_ == 0)
{
goto v___jp_3185_;
}
else
{
return v___x_3195_;
}
}
v___jp_3185_:
{
uint32_t v___x_3186_; uint8_t v___x_3187_; 
v___x_3186_ = 128;
v___x_3187_ = lean_uint32_dec_le(v___x_3186_, v___x_3184_);
if (v___x_3187_ == 0)
{
uint32_t v___x_3188_; uint8_t v___x_3189_; 
v___x_3188_ = 32;
v___x_3189_ = lean_uint32_dec_eq(v___x_3184_, v___x_3188_);
if (v___x_3189_ == 0)
{
uint32_t v___x_3190_; uint8_t v___x_3191_; 
v___x_3190_ = 9;
v___x_3191_ = lean_uint32_dec_eq(v___x_3184_, v___x_3190_);
return v___x_3191_;
}
else
{
return v___x_3189_;
}
}
else
{
return v___x_3187_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte___boxed(lean_object* v_c_3196_){
_start:
{
uint8_t v_c_boxed_3197_; uint8_t v_res_3198_; lean_object* v_r_3199_; 
v_c_boxed_3197_ = lean_unbox(v_c_3196_);
v_res_3198_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte(v_c_boxed_3197_);
v_r_3199_ = lean_box(v_res_3198_);
return v_r_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(lean_object* v_limits_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v_maxReasonPhraseLength_3202_; lean_object* v___f_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v_snd_3206_; lean_object* v_snd_3207_; uint8_t v___x_3208_; 
v_maxReasonPhraseLength_3202_ = lean_ctor_get(v_limits_3200_, 16);
v___f_3203_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1));
v___x_3204_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_3201_);
v___x_3205_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_3203_, v_maxReasonPhraseLength_3202_, v___x_3204_, v_a_3201_);
v_snd_3206_ = lean_ctor_get(v___x_3205_, 1);
lean_inc(v_snd_3206_);
v_snd_3207_ = lean_ctor_get(v_snd_3206_, 1);
v___x_3208_ = lean_unbox(v_snd_3207_);
if (v___x_3208_ == 0)
{
lean_object* v_fst_3209_; lean_object* v_fst_3210_; lean_object* v_array_3211_; lean_object* v_idx_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3232_; 
v_fst_3209_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_fst_3209_);
lean_dec_ref(v___x_3205_);
v_fst_3210_ = lean_ctor_get(v_snd_3206_, 0);
lean_inc(v_fst_3210_);
lean_dec(v_snd_3206_);
v_array_3211_ = lean_ctor_get(v_a_3201_, 0);
v_idx_3212_ = lean_ctor_get(v_a_3201_, 1);
v_isSharedCheck_3232_ = !lean_is_exclusive(v_a_3201_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3214_ = v_a_3201_;
v_isShared_3215_ = v_isSharedCheck_3232_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_idx_3212_);
lean_inc(v_array_3211_);
lean_dec(v_a_3201_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3232_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v_lower_3217_; lean_object* v_upper_3218_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___y_3229_; uint8_t v___x_3231_; 
v___x_3226_ = lean_nat_add(v_idx_3212_, v_fst_3209_);
lean_dec(v_fst_3209_);
v___x_3227_ = lean_byte_array_size(v_array_3211_);
v___x_3231_ = lean_nat_dec_le(v_idx_3212_, v___x_3204_);
if (v___x_3231_ == 0)
{
v___y_3229_ = v_idx_3212_;
goto v___jp_3228_;
}
else
{
lean_dec(v_idx_3212_);
v___y_3229_ = v___x_3204_;
goto v___jp_3228_;
}
v___jp_3216_:
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3224_; 
v___x_3219_ = l_ByteArray_toByteSlice(v_array_3211_, v_lower_3217_, v_upper_3218_);
v___x_3220_ = l_ByteSlice_toByteArray(v___x_3219_);
v___x_3221_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0));
v___x_3222_ = l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(v___x_3220_, v___x_3204_, v___x_3221_);
lean_dec_ref(v___x_3220_);
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 1, v___x_3222_);
lean_ctor_set(v___x_3214_, 0, v_fst_3210_);
v___x_3224_ = v___x_3214_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_fst_3210_);
lean_ctor_set(v_reuseFailAlloc_3225_, 1, v___x_3222_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
v___jp_3228_:
{
uint8_t v___x_3230_; 
v___x_3230_ = lean_nat_dec_le(v___x_3226_, v___x_3227_);
if (v___x_3230_ == 0)
{
lean_dec(v___x_3226_);
v_lower_3217_ = v___y_3229_;
v_upper_3218_ = v___x_3227_;
goto v___jp_3216_;
}
else
{
v_lower_3217_ = v___y_3229_;
v_upper_3218_ = v___x_3226_;
goto v___jp_3216_;
}
}
}
}
else
{
lean_object* v_fst_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3241_; 
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_a_3201_);
v_fst_3233_ = lean_ctor_get(v_snd_3206_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_snd_3206_);
if (v_isSharedCheck_3241_ == 0)
{
lean_object* v_unused_3242_; 
v_unused_3242_ = lean_ctor_get(v_snd_3206_, 1);
lean_dec(v_unused_3242_);
v___x_3235_ = v_snd_3206_;
v_isShared_3236_ = v_isSharedCheck_3241_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_fst_3233_);
lean_dec(v_snd_3206_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3241_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; lean_object* v___x_3239_; 
v___x_3237_ = lean_box(0);
if (v_isShared_3236_ == 0)
{
lean_ctor_set_tag(v___x_3235_, 1);
lean_ctor_set(v___x_3235_, 1, v___x_3237_);
v___x_3239_ = v___x_3235_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_fst_3233_);
lean_ctor_set(v_reuseFailAlloc_3240_, 1, v___x_3237_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase___boxed(lean_object* v_limits_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(v_limits_3243_, v_a_3244_);
lean_dec_ref(v_limits_3243_);
return v_res_3245_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(lean_object* v_x_3246_){
_start:
{
if (lean_obj_tag(v_x_3246_) == 0)
{
uint8_t v___x_3247_; 
v___x_3247_ = 1;
return v___x_3247_;
}
else
{
lean_object* v_head_3248_; lean_object* v_tail_3249_; uint32_t v___x_3255_; uint32_t v___x_3256_; uint8_t v___x_3257_; 
v_head_3248_ = lean_ctor_get(v_x_3246_, 0);
v_tail_3249_ = lean_ctor_get(v_x_3246_, 1);
v___x_3255_ = 9;
v___x_3256_ = lean_unbox_uint32(v_head_3248_);
v___x_3257_ = lean_uint32_dec_eq(v___x_3256_, v___x_3255_);
if (v___x_3257_ == 0)
{
uint32_t v___x_3258_; uint32_t v___x_3259_; uint8_t v___x_3260_; 
v___x_3258_ = 32;
v___x_3259_ = lean_unbox_uint32(v_head_3248_);
v___x_3260_ = lean_uint32_dec_eq(v___x_3259_, v___x_3258_);
if (v___x_3260_ == 0)
{
uint32_t v___x_3261_; uint32_t v___x_3262_; uint8_t v___x_3263_; 
v___x_3261_ = 33;
v___x_3262_ = lean_unbox_uint32(v_head_3248_);
v___x_3263_ = lean_uint32_dec_le(v___x_3261_, v___x_3262_);
if (v___x_3263_ == 0)
{
goto v___jp_3250_;
}
else
{
uint32_t v___x_3264_; uint32_t v___x_3265_; uint8_t v___x_3266_; 
v___x_3264_ = 126;
v___x_3265_ = lean_unbox_uint32(v_head_3248_);
v___x_3266_ = lean_uint32_dec_le(v___x_3265_, v___x_3264_);
if (v___x_3266_ == 0)
{
goto v___jp_3250_;
}
else
{
v_x_3246_ = v_tail_3249_;
goto _start;
}
}
}
else
{
v_x_3246_ = v_tail_3249_;
goto _start;
}
}
else
{
v_x_3246_ = v_tail_3249_;
goto _start;
}
v___jp_3250_:
{
uint32_t v___x_3251_; uint32_t v___x_3252_; uint8_t v___x_3253_; 
v___x_3251_ = 128;
v___x_3252_ = lean_unbox_uint32(v_head_3248_);
v___x_3253_ = lean_uint32_dec_le(v___x_3251_, v___x_3252_);
if (v___x_3253_ == 0)
{
return v___x_3253_;
}
else
{
v_x_3246_ = v_tail_3249_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0___boxed(lean_object* v_x_3270_){
_start:
{
uint8_t v_res_3271_; lean_object* v_r_3272_; 
v_res_3271_ = l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(v_x_3270_);
lean_dec(v_x_3270_);
v_r_3272_ = lean_box(v_res_3271_);
return v_r_3272_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(lean_object* v_limits_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v___y_3282_; lean_object* v_array_3285_; lean_object* v_idx_3286_; lean_object* v___x_3287_; uint8_t v___x_3288_; 
v_array_3285_ = lean_ctor_get(v_a_3277_, 0);
v_idx_3286_ = lean_ctor_get(v_a_3277_, 1);
v___x_3287_ = lean_byte_array_size(v_array_3285_);
v___x_3288_ = lean_nat_dec_lt(v_idx_3286_, v___x_3287_);
if (v___x_3288_ == 0)
{
lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = lean_box(0);
v___x_3290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3290_, 0, v_a_3277_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
return v___x_3290_;
}
else
{
uint8_t v_c_3291_; uint8_t v___x_3292_; uint8_t v___x_3293_; 
v_c_3291_ = lean_byte_array_fget(v_array_3285_, v_idx_3286_);
v___x_3292_ = 48;
v___x_3293_ = lean_uint8_dec_le(v___x_3292_, v_c_3291_);
if (v___x_3293_ == 0)
{
goto v___jp_3278_;
}
else
{
uint8_t v___x_3294_; uint8_t v___x_3295_; 
v___x_3294_ = 57;
v___x_3295_ = lean_uint8_dec_le(v_c_3291_, v___x_3294_);
if (v___x_3295_ == 0)
{
goto v___jp_3278_;
}
else
{
lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3392_; 
lean_inc(v_idx_3286_);
lean_inc_ref(v_array_3285_);
v_isSharedCheck_3392_ = !lean_is_exclusive(v_a_3277_);
if (v_isSharedCheck_3392_ == 0)
{
lean_object* v_unused_3393_; lean_object* v_unused_3394_; 
v_unused_3393_ = lean_ctor_get(v_a_3277_, 1);
lean_dec(v_unused_3393_);
v_unused_3394_ = lean_ctor_get(v_a_3277_, 0);
lean_dec(v_unused_3394_);
v___x_3297_ = v_a_3277_;
v_isShared_3298_ = v_isSharedCheck_3392_;
goto v_resetjp_3296_;
}
else
{
lean_dec(v_a_3277_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3392_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v_it_x27_3302_; 
v___x_3299_ = lean_unsigned_to_nat(1u);
v___x_3300_ = lean_nat_add(v_idx_3286_, v___x_3299_);
lean_dec(v_idx_3286_);
lean_inc(v___x_3300_);
lean_inc_ref(v_array_3285_);
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 1, v___x_3300_);
v_it_x27_3302_ = v___x_3297_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v_array_3285_);
lean_ctor_set(v_reuseFailAlloc_3391_, 1, v___x_3300_);
v_it_x27_3302_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
uint8_t v___x_3306_; 
v___x_3306_ = lean_nat_dec_lt(v___x_3300_, v___x_3287_);
if (v___x_3306_ == 0)
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
lean_dec(v___x_3300_);
lean_dec_ref(v_array_3285_);
v___x_3307_ = lean_box(0);
v___x_3308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3308_, 0, v_it_x27_3302_);
lean_ctor_set(v___x_3308_, 1, v___x_3307_);
return v___x_3308_;
}
else
{
uint8_t v_c_3309_; uint8_t v___x_3310_; 
v_c_3309_ = lean_byte_array_fget(v_array_3285_, v___x_3300_);
v___x_3310_ = lean_uint8_dec_le(v___x_3292_, v_c_3309_);
if (v___x_3310_ == 0)
{
lean_dec(v___x_3300_);
lean_dec_ref(v_array_3285_);
goto v___jp_3303_;
}
else
{
uint8_t v___x_3311_; 
v___x_3311_ = lean_uint8_dec_le(v_c_3309_, v___x_3294_);
if (v___x_3311_ == 0)
{
lean_dec(v___x_3300_);
lean_dec_ref(v_array_3285_);
goto v___jp_3303_;
}
else
{
lean_object* v___x_3312_; lean_object* v_it_x27_3313_; uint8_t v___x_3317_; 
lean_dec_ref(v_it_x27_3302_);
v___x_3312_ = lean_nat_add(v___x_3300_, v___x_3299_);
lean_dec(v___x_3300_);
lean_inc(v___x_3312_);
lean_inc_ref(v_array_3285_);
v_it_x27_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3313_, 0, v_array_3285_);
lean_ctor_set(v_it_x27_3313_, 1, v___x_3312_);
v___x_3317_ = lean_nat_dec_lt(v___x_3312_, v___x_3287_);
if (v___x_3317_ == 0)
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
lean_dec(v___x_3312_);
lean_dec_ref(v_array_3285_);
v___x_3318_ = lean_box(0);
v___x_3319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3319_, 0, v_it_x27_3313_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
return v___x_3319_;
}
else
{
uint8_t v_c_3320_; uint8_t v___x_3321_; 
v_c_3320_ = lean_byte_array_fget(v_array_3285_, v___x_3312_);
v___x_3321_ = lean_uint8_dec_le(v___x_3292_, v_c_3320_);
if (v___x_3321_ == 0)
{
lean_dec(v___x_3312_);
lean_dec_ref(v_array_3285_);
goto v___jp_3314_;
}
else
{
uint8_t v___x_3322_; 
v___x_3322_ = lean_uint8_dec_le(v_c_3320_, v___x_3294_);
if (v___x_3322_ == 0)
{
lean_dec(v___x_3312_);
lean_dec_ref(v_array_3285_);
goto v___jp_3314_;
}
else
{
lean_object* v___x_3323_; uint32_t v___x_3324_; uint32_t v___x_3325_; lean_object* v___x_3326_; lean_object* v_it_x27_3327_; uint32_t v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v_pos_3371_; lean_object* v_idx_3372_; lean_object* v_err_3373_; uint8_t v___x_3377_; 
lean_dec_ref_known(v_it_x27_3313_, 2);
v___x_3323_ = lean_unsigned_to_nat(48u);
v___x_3324_ = lean_uint8_to_uint32(v_c_3291_);
v___x_3325_ = lean_uint8_to_uint32(v_c_3309_);
v___x_3326_ = lean_nat_add(v___x_3312_, v___x_3299_);
lean_dec(v___x_3312_);
lean_inc(v___x_3326_);
lean_inc_ref(v_array_3285_);
v_it_x27_3327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3327_, 0, v_array_3285_);
lean_ctor_set(v_it_x27_3327_, 1, v___x_3326_);
v___x_3328_ = lean_uint8_to_uint32(v_c_3320_);
v___x_3329_ = lean_uint32_to_nat(v___x_3324_);
v___x_3330_ = lean_nat_sub(v___x_3329_, v___x_3323_);
lean_dec(v___x_3329_);
v___x_3331_ = lean_unsigned_to_nat(100u);
v___x_3332_ = lean_nat_mul(v___x_3330_, v___x_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_uint32_to_nat(v___x_3325_);
v___x_3334_ = lean_nat_sub(v___x_3333_, v___x_3323_);
lean_dec(v___x_3333_);
v___x_3335_ = lean_unsigned_to_nat(10u);
v___x_3336_ = lean_nat_mul(v___x_3334_, v___x_3335_);
lean_dec(v___x_3334_);
v___x_3337_ = lean_nat_add(v___x_3332_, v___x_3336_);
lean_dec(v___x_3336_);
lean_dec(v___x_3332_);
v___x_3338_ = lean_uint32_to_nat(v___x_3328_);
v___x_3339_ = lean_nat_sub(v___x_3338_, v___x_3323_);
lean_dec(v___x_3338_);
v___x_3340_ = lean_nat_add(v___x_3337_, v___x_3339_);
lean_dec(v___x_3339_);
lean_dec(v___x_3337_);
v___x_3377_ = lean_nat_dec_lt(v___x_3326_, v___x_3287_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; 
lean_dec_ref(v_array_3285_);
v___x_3378_ = lean_box(0);
lean_inc(v___x_3326_);
v_pos_3371_ = v_it_x27_3327_;
v_idx_3372_ = v___x_3326_;
v_err_3373_ = v___x_3378_;
goto v___jp_3370_;
}
else
{
uint8_t v___x_3379_; uint8_t v_got_3380_; uint8_t v___x_3381_; 
v___x_3379_ = 32;
v_got_3380_ = lean_byte_array_fget(v_array_3285_, v___x_3326_);
v___x_3381_ = lean_uint8_dec_eq(v_got_3380_, v___x_3379_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3382_; 
lean_dec_ref(v_array_3285_);
v___x_3382_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
lean_inc(v___x_3326_);
v_pos_3371_ = v_it_x27_3327_;
v_idx_3372_ = v___x_3326_;
v_err_3373_ = v___x_3382_;
goto v___jp_3370_;
}
else
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
lean_dec_ref_known(v_it_x27_3327_, 2);
v___x_3383_ = lean_nat_add(v___x_3326_, v___x_3299_);
v___x_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3384_, 0, v_array_3285_);
lean_ctor_set(v___x_3384_, 1, v___x_3383_);
v___x_3385_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(v_limits_3276_, v___x_3384_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_pos_3386_; lean_object* v_res_3387_; 
lean_dec(v___x_3326_);
v_pos_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_pos_3386_);
v_res_3387_ = lean_ctor_get(v___x_3385_, 1);
lean_inc(v_res_3387_);
lean_dec_ref_known(v___x_3385_, 2);
v___y_3342_ = v_pos_3386_;
v___y_3343_ = v_res_3387_;
goto v___jp_3341_;
}
else
{
lean_object* v_pos_3388_; lean_object* v___x_3389_; lean_object* v_idx_3390_; 
v_pos_3388_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_pos_3388_);
lean_dec_ref_known(v___x_3385_, 2);
v___x_3389_ = lean_box(0);
v_idx_3390_ = lean_ctor_get(v_pos_3388_, 1);
lean_inc(v_idx_3390_);
v_pos_3371_ = v_pos_3388_;
v_idx_3372_ = v_idx_3390_;
v_err_3373_ = v___x_3389_;
goto v___jp_3370_;
}
}
}
v___jp_3341_:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; 
v___x_3344_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_3345_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_3344_, v___y_3342_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_pos_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3359_; 
v_pos_3346_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3359_ == 0)
{
lean_object* v_unused_3360_; 
v_unused_3360_ = lean_ctor_get(v___x_3345_, 1);
lean_dec(v_unused_3360_);
v___x_3348_ = v___x_3345_;
v_isShared_3349_ = v_isSharedCheck_3359_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_pos_3346_);
lean_dec(v___x_3345_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3359_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3350_; uint8_t v___x_3351_; 
lean_inc_ref(v___y_3343_);
v___x_3350_ = l_String_toListImpl(v___y_3343_);
v___x_3351_ = l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(v___x_3350_);
lean_dec(v___x_3350_);
if (v___x_3351_ == 0)
{
lean_del_object(v___x_3348_);
lean_dec_ref(v___y_3343_);
lean_dec(v___x_3340_);
v___y_3282_ = v_pos_3346_;
goto v___jp_3281_;
}
else
{
lean_object* v___x_3352_; uint16_t v___x_3353_; lean_object* v___x_3354_; 
v___x_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3352_, 0, v___y_3343_);
v___x_3353_ = lean_uint16_of_nat(v___x_3340_);
lean_dec(v___x_3340_);
v___x_3354_ = l_Std_Http_Status_ofCode(v___x_3352_, v___x_3353_);
if (lean_obj_tag(v___x_3354_) == 1)
{
lean_object* v_val_3355_; lean_object* v___x_3357_; 
v_val_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_val_3355_);
lean_dec_ref_known(v___x_3354_, 1);
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 1, v_val_3355_);
v___x_3357_ = v___x_3348_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_pos_3346_);
lean_ctor_set(v_reuseFailAlloc_3358_, 1, v_val_3355_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
else
{
lean_dec(v___x_3354_);
lean_del_object(v___x_3348_);
v___y_3282_ = v_pos_3346_;
goto v___jp_3281_;
}
}
}
}
else
{
lean_object* v_pos_3361_; lean_object* v_err_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec_ref(v___y_3343_);
lean_dec(v___x_3340_);
v_pos_3361_ = lean_ctor_get(v___x_3345_, 0);
v_err_3362_ = lean_ctor_get(v___x_3345_, 1);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3345_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_err_3362_);
lean_inc(v_pos_3361_);
lean_dec(v___x_3345_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_pos_3361_);
lean_ctor_set(v_reuseFailAlloc_3368_, 1, v_err_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
v___jp_3370_:
{
uint8_t v___x_3374_; 
v___x_3374_ = lean_nat_dec_eq(v___x_3326_, v_idx_3372_);
lean_dec(v_idx_3372_);
lean_dec(v___x_3326_);
if (v___x_3374_ == 0)
{
lean_object* v___x_3375_; 
lean_dec(v___x_3340_);
lean_inc(v_err_3373_);
v___x_3375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3375_, 0, v_pos_3371_);
lean_ctor_set(v___x_3375_, 1, v_err_3373_);
return v___x_3375_;
}
else
{
lean_object* v___x_3376_; 
v___x_3376_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0));
v___y_3342_ = v_pos_3371_;
v___y_3343_ = v___x_3376_;
goto v___jp_3341_;
}
}
}
}
}
v___jp_3314_:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3315_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_3316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3316_, 0, v_it_x27_3313_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
return v___x_3316_;
}
}
}
}
v___jp_3303_:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3304_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_3305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3305_, 0, v_it_x27_3302_);
lean_ctor_set(v___x_3305_, 1, v___x_3304_);
return v___x_3305_;
}
}
}
}
}
}
v___jp_3278_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_3280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3280_, 0, v_a_3277_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
return v___x_3280_;
}
v___jp_3281_:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3283_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1));
v___x_3284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___y_3282_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
return v___x_3284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___boxed(lean_object* v_limits_3395_, lean_object* v_a_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(v_limits_3395_, v_a_3396_);
lean_dec_ref(v_limits_3395_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine(lean_object* v_limits_3398_, lean_object* v_a_3399_){
_start:
{
lean_object* v___x_3400_; 
v___x_3400_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v_a_3399_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_pos_3401_; lean_object* v_res_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3477_; 
v_pos_3401_ = lean_ctor_get(v___x_3400_, 0);
v_res_3402_ = lean_ctor_get(v___x_3400_, 1);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3404_ = v___x_3400_;
v_isShared_3405_ = v_isSharedCheck_3477_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_res_3402_);
lean_inc(v_pos_3401_);
lean_dec(v___x_3400_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3477_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v_array_3406_; lean_object* v_idx_3407_; lean_object* v___x_3408_; uint8_t v___x_3409_; 
v_array_3406_ = lean_ctor_get(v_pos_3401_, 0);
v_idx_3407_ = lean_ctor_get(v_pos_3401_, 1);
v___x_3408_ = lean_byte_array_size(v_array_3406_);
v___x_3409_ = lean_nat_dec_lt(v_idx_3407_, v___x_3408_);
if (v___x_3409_ == 0)
{
lean_object* v___x_3410_; lean_object* v___x_3412_; 
lean_dec(v_res_3402_);
v___x_3410_ = lean_box(0);
if (v_isShared_3405_ == 0)
{
lean_ctor_set_tag(v___x_3404_, 1);
lean_ctor_set(v___x_3404_, 1, v___x_3410_);
v___x_3412_ = v___x_3404_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_pos_3401_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v___x_3410_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
else
{
uint8_t v___x_3414_; uint8_t v_got_3415_; uint8_t v___x_3416_; 
v___x_3414_ = 32;
v_got_3415_ = lean_byte_array_fget(v_array_3406_, v_idx_3407_);
v___x_3416_ = lean_uint8_dec_eq(v_got_3415_, v___x_3414_);
if (v___x_3416_ == 0)
{
lean_object* v___x_3417_; lean_object* v___x_3419_; 
lean_dec(v_res_3402_);
v___x_3417_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_3405_ == 0)
{
lean_ctor_set_tag(v___x_3404_, 1);
lean_ctor_set(v___x_3404_, 1, v___x_3417_);
v___x_3419_ = v___x_3404_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_pos_3401_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
else
{
lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3474_; 
lean_inc(v_idx_3407_);
lean_inc_ref(v_array_3406_);
v_isSharedCheck_3474_ = !lean_is_exclusive(v_pos_3401_);
if (v_isSharedCheck_3474_ == 0)
{
lean_object* v_unused_3475_; lean_object* v_unused_3476_; 
v_unused_3475_ = lean_ctor_get(v_pos_3401_, 1);
lean_dec(v_unused_3475_);
v_unused_3476_ = lean_ctor_get(v_pos_3401_, 0);
lean_dec(v_unused_3476_);
v___x_3422_ = v_pos_3401_;
v_isShared_3423_ = v_isSharedCheck_3474_;
goto v_resetjp_3421_;
}
else
{
lean_dec(v_pos_3401_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3474_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v_fst_3424_; lean_object* v_snd_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3473_; 
v_fst_3424_ = lean_ctor_get(v_res_3402_, 0);
v_snd_3425_ = lean_ctor_get(v_res_3402_, 1);
v_isSharedCheck_3473_ = !lean_is_exclusive(v_res_3402_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3427_ = v_res_3402_;
v_isShared_3428_ = v_isSharedCheck_3473_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_snd_3425_);
lean_inc(v_fst_3424_);
lean_dec(v_res_3402_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3473_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3432_; 
v___x_3429_ = lean_unsigned_to_nat(1u);
v___x_3430_ = lean_nat_add(v_idx_3407_, v___x_3429_);
lean_dec(v_idx_3407_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 1, v___x_3430_);
v___x_3432_ = v___x_3422_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_array_3406_);
lean_ctor_set(v_reuseFailAlloc_3472_, 1, v___x_3430_);
v___x_3432_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
lean_object* v___x_3433_; 
v___x_3433_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(v_limits_3398_, v___x_3432_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_pos_3434_; lean_object* v_res_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3462_; 
v_pos_3434_ = lean_ctor_get(v___x_3433_, 0);
v_res_3435_ = lean_ctor_get(v___x_3433_, 1);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3437_ = v___x_3433_;
v_isShared_3438_ = v_isSharedCheck_3462_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_res_3435_);
lean_inc(v_pos_3434_);
lean_dec(v___x_3433_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3462_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
uint8_t v___x_3454_; 
v___x_3454_ = lean_nat_dec_eq(v_fst_3424_, v___x_3429_);
if (v___x_3454_ == 0)
{
lean_del_object(v___x_3427_);
goto v___jp_3444_;
}
else
{
uint8_t v___x_3455_; 
v___x_3455_ = lean_nat_dec_le(v___x_3429_, v_snd_3425_);
if (v___x_3455_ == 0)
{
lean_del_object(v___x_3427_);
goto v___jp_3444_;
}
else
{
uint8_t v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3460_; 
lean_del_object(v___x_3437_);
lean_dec(v_snd_3425_);
lean_dec(v_fst_3424_);
lean_del_object(v___x_3404_);
v___x_3456_ = 1;
v___x_3457_ = l_Std_Http_Headers_empty;
v___x_3458_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3458_, 0, v_res_3435_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*2, v___x_3456_);
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 1, v___x_3458_);
lean_ctor_set(v___x_3427_, 0, v_pos_3434_);
v___x_3460_ = v___x_3427_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_pos_3434_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v___x_3458_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
v___jp_3439_:
{
lean_object* v___x_3440_; lean_object* v___x_3442_; 
v___x_3440_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseRequestLine___closed__1));
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 1);
lean_ctor_set(v___x_3437_, 1, v___x_3440_);
v___x_3442_ = v___x_3437_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_pos_3434_);
lean_ctor_set(v_reuseFailAlloc_3443_, 1, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
v___jp_3444_:
{
uint8_t v___x_3445_; 
v___x_3445_ = lean_nat_dec_eq(v_fst_3424_, v___x_3429_);
lean_dec(v_fst_3424_);
if (v___x_3445_ == 0)
{
lean_dec(v_res_3435_);
lean_dec(v_snd_3425_);
lean_del_object(v___x_3404_);
goto v___jp_3439_;
}
else
{
lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3446_ = lean_unsigned_to_nat(0u);
v___x_3447_ = lean_nat_dec_eq(v_snd_3425_, v___x_3446_);
lean_dec(v_snd_3425_);
if (v___x_3447_ == 0)
{
lean_dec(v_res_3435_);
lean_del_object(v___x_3404_);
goto v___jp_3439_;
}
else
{
uint8_t v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3452_; 
lean_del_object(v___x_3437_);
v___x_3448_ = 0;
v___x_3449_ = l_Std_Http_Headers_empty;
v___x_3450_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3450_, 0, v_res_3435_);
lean_ctor_set(v___x_3450_, 1, v___x_3449_);
lean_ctor_set_uint8(v___x_3450_, sizeof(void*)*2, v___x_3448_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 1, v___x_3450_);
lean_ctor_set(v___x_3404_, 0, v_pos_3434_);
v___x_3452_ = v___x_3404_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_pos_3434_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v___x_3450_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3463_; lean_object* v_err_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
lean_del_object(v___x_3427_);
lean_dec(v_snd_3425_);
lean_dec(v_fst_3424_);
lean_del_object(v___x_3404_);
v_pos_3463_ = lean_ctor_get(v___x_3433_, 0);
v_err_3464_ = lean_ctor_get(v___x_3433_, 1);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3433_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_err_3464_);
lean_inc(v_pos_3463_);
lean_dec(v___x_3433_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_pos_3463_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v_err_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
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
lean_object* v_pos_3478_; lean_object* v_err_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
v_pos_3478_ = lean_ctor_get(v___x_3400_, 0);
v_err_3479_ = lean_ctor_get(v___x_3400_, 1);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3400_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_err_3479_);
lean_inc(v_pos_3478_);
lean_dec(v___x_3400_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_pos_3478_);
lean_ctor_set(v_reuseFailAlloc_3485_, 1, v_err_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine___boxed(lean_object* v_limits_3487_, lean_object* v_a_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l_Std_Http_Protocol_H1_parseStatusLine(v_limits_3487_, v_a_3488_);
lean_dec_ref(v_limits_3487_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion(lean_object* v_limits_3490_, lean_object* v_a_3491_){
_start:
{
lean_object* v___x_3492_; 
v___x_3492_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v_a_3491_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_pos_3493_; lean_object* v_res_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3557_; 
v_pos_3493_ = lean_ctor_get(v___x_3492_, 0);
v_res_3494_ = lean_ctor_get(v___x_3492_, 1);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3496_ = v___x_3492_;
v_isShared_3497_ = v_isSharedCheck_3557_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_res_3494_);
lean_inc(v_pos_3493_);
lean_dec(v___x_3492_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3557_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v_array_3498_; lean_object* v_idx_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
v_array_3498_ = lean_ctor_get(v_pos_3493_, 0);
v_idx_3499_ = lean_ctor_get(v_pos_3493_, 1);
v___x_3500_ = lean_byte_array_size(v_array_3498_);
v___x_3501_ = lean_nat_dec_lt(v_idx_3499_, v___x_3500_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; lean_object* v___x_3504_; 
lean_dec(v_res_3494_);
v___x_3502_ = lean_box(0);
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 1);
lean_ctor_set(v___x_3496_, 1, v___x_3502_);
v___x_3504_ = v___x_3496_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_pos_3493_);
lean_ctor_set(v_reuseFailAlloc_3505_, 1, v___x_3502_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
else
{
uint8_t v___x_3506_; uint8_t v_got_3507_; uint8_t v___x_3508_; 
v___x_3506_ = 32;
v_got_3507_ = lean_byte_array_fget(v_array_3498_, v_idx_3499_);
v___x_3508_ = lean_uint8_dec_eq(v_got_3507_, v___x_3506_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; lean_object* v___x_3511_; 
lean_dec(v_res_3494_);
v___x_3509_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 1);
lean_ctor_set(v___x_3496_, 1, v___x_3509_);
v___x_3511_ = v___x_3496_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_pos_3493_);
lean_ctor_set(v_reuseFailAlloc_3512_, 1, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
else
{
lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3554_; 
lean_inc(v_idx_3499_);
lean_inc_ref(v_array_3498_);
lean_del_object(v___x_3496_);
v_isSharedCheck_3554_ = !lean_is_exclusive(v_pos_3493_);
if (v_isSharedCheck_3554_ == 0)
{
lean_object* v_unused_3555_; lean_object* v_unused_3556_; 
v_unused_3555_ = lean_ctor_get(v_pos_3493_, 1);
lean_dec(v_unused_3555_);
v_unused_3556_ = lean_ctor_get(v_pos_3493_, 0);
lean_dec(v_unused_3556_);
v___x_3514_ = v_pos_3493_;
v_isShared_3515_ = v_isSharedCheck_3554_;
goto v_resetjp_3513_;
}
else
{
lean_dec(v_pos_3493_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3554_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v_fst_3516_; lean_object* v_snd_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3553_; 
v_fst_3516_ = lean_ctor_get(v_res_3494_, 0);
v_snd_3517_ = lean_ctor_get(v_res_3494_, 1);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_res_3494_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3519_ = v_res_3494_;
v_isShared_3520_ = v_isSharedCheck_3553_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_snd_3517_);
lean_inc(v_fst_3516_);
lean_dec(v_res_3494_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3553_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3524_; 
v___x_3521_ = lean_unsigned_to_nat(1u);
v___x_3522_ = lean_nat_add(v_idx_3499_, v___x_3521_);
lean_dec(v_idx_3499_);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 1, v___x_3522_);
v___x_3524_ = v___x_3514_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_array_3498_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v___x_3522_);
v___x_3524_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
lean_object* v___x_3525_; 
v___x_3525_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(v_limits_3490_, v___x_3524_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_pos_3526_; lean_object* v_res_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3542_; 
v_pos_3526_ = lean_ctor_get(v___x_3525_, 0);
v_res_3527_ = lean_ctor_get(v___x_3525_, 1);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3529_ = v___x_3525_;
v_isShared_3530_ = v_isSharedCheck_3542_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_res_3527_);
lean_inc(v_pos_3526_);
lean_dec(v___x_3525_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3542_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___y_3532_; uint8_t v___x_3540_; 
v___x_3540_ = lean_nat_dec_eq(v_fst_3516_, v___x_3521_);
if (v___x_3540_ == 0)
{
v___y_3532_ = v_snd_3517_;
goto v___jp_3531_;
}
else
{
uint8_t v___x_3541_; 
v___x_3541_ = lean_nat_dec_le(v_snd_3517_, v___x_3521_);
if (v___x_3541_ == 0)
{
lean_dec(v_snd_3517_);
v___y_3532_ = v___x_3521_;
goto v___jp_3531_;
}
else
{
v___y_3532_ = v_snd_3517_;
goto v___jp_3531_;
}
}
v___jp_3531_:
{
lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3533_ = l_Std_Http_Version_ofNumber_x3f(v_fst_3516_, v___y_3532_);
lean_dec(v___y_3532_);
lean_dec(v_fst_3516_);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 1, v___x_3533_);
lean_ctor_set(v___x_3519_, 0, v_res_3527_);
v___x_3535_ = v___x_3519_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_res_3527_);
lean_ctor_set(v_reuseFailAlloc_3539_, 1, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3537_; 
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 1, v___x_3535_);
v___x_3537_ = v___x_3529_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_pos_3526_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
}
else
{
lean_object* v_pos_3543_; lean_object* v_err_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3551_; 
lean_del_object(v___x_3519_);
lean_dec(v_snd_3517_);
lean_dec(v_fst_3516_);
v_pos_3543_ = lean_ctor_get(v___x_3525_, 0);
v_err_3544_ = lean_ctor_get(v___x_3525_, 1);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3546_ = v___x_3525_;
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_err_3544_);
lean_inc(v_pos_3543_);
lean_dec(v___x_3525_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_pos_3543_);
lean_ctor_set(v_reuseFailAlloc_3550_, 1, v_err_3544_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
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
lean_object* v_pos_3558_; lean_object* v_err_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3566_; 
v_pos_3558_ = lean_ctor_get(v___x_3492_, 0);
v_err_3559_ = lean_ctor_get(v___x_3492_, 1);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3561_ = v___x_3492_;
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_err_3559_);
lean_inc(v_pos_3558_);
lean_dec(v___x_3492_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
if (v_isShared_3562_ == 0)
{
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_pos_3558_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v_err_3559_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion___boxed(lean_object* v_limits_3567_, lean_object* v_a_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l_Std_Http_Protocol_H1_parseStatusLineRawVersion(v_limits_3567_, v_a_3568_);
lean_dec_ref(v_limits_3567_);
return v_res_3569_;
}
}
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Protocol_H1_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lossy(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Protocol_H1_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Protocol_H1_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Http_Data(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* initialize_Std_Http_Protocol_H1_Config(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lossy(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Protocol_H1_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Protocol_H1_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Protocol_H1_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Protocol_H1_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
