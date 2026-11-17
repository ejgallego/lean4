// Lean compiler output
// Module: Lean.Compiler.NameDemangling
// Imports: import Init.While import Init.Data.String.TakeDrop import Init.Data.String.Search import Init.Data.String.Iterate import Lean.Data.NameTrie public import Lean.Compiler.NameMangling
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedNamePart_default;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_instBEqNamePart_beq(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_demangle_x3f(lean_object*);
lean_object* l_Lean_Name_demangle(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "λ"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_elam_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_redArg"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_lam"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_lambda"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_elam"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_closed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_lam_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "closed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "jp"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__14_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "impl"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__16_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "boxed"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__18_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 6, .m_data = "arity↓"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__20_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "spec_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__1_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__1_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value),((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_at_"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_spec"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__0_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " spec at "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0_value;
static const lean_array_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".cold"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lp_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "l_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "initialize_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "[module_init] "};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "initialize_lp_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "initialize_l_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_init_lp_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[init] "};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_init_l_"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore(lean_object*);
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_lean_main"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__0 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__0_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__1 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__1_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[lean] main "};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__2 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__2_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[lean] main"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__3 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__3_value;
static const lean_ctor_object l_Lean_Name_Demangle_demangleSymbol___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__3_value)}};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__4 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__4_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lean_apply_"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__5 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__5_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<apply/"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__6 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__6_value;
static const lean_string_object l_Lean_Name_Demangle_demangleSymbol___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l_Lean_Name_Demangle_demangleSymbol___closed__7 = (const lean_object*)&l_Lean_Name_Demangle_demangleSymbol___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleSymbol(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "0x"};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3;
static const lean_closure_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4_value;
static const lean_closure_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7 = (const lean_object*)&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8;
static lean_once_cell_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleBtLine(lean_object*);
LEAN_EXPORT lean_object* lean_demangle_bt_line_cstr(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(lean_object* v_pre_1_, lean_object* v_s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_3_ = lean_string_utf8_byte_size(v_s_2_);
v___x_4_ = lean_string_utf8_byte_size(v_pre_1_);
v___x_5_ = lean_nat_dec_le(v___x_4_, v___x_3_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec_ref(v_s_2_);
v___x_6_ = lean_box(0);
return v___x_6_;
}
else
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_string_memcmp(v_s_2_, v_pre_1_, v___x_7_, v___x_7_, v___x_4_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; 
lean_dec_ref(v_s_2_);
v___x_9_ = lean_box(0);
return v___x_9_;
}
else
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
lean_inc_ref(v_s_2_);
v___x_10_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_10_, 0, v_s_2_);
lean_ctor_set(v___x_10_, 1, v___x_7_);
lean_ctor_set(v___x_10_, 2, v___x_3_);
v___x_11_ = l_String_Slice_pos_x21(v___x_10_, v___x_4_);
lean_dec_ref_known(v___x_10_, 3);
v___x_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_12_, 0, v_s_2_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
lean_ctor_set(v___x_12_, 2, v___x_3_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg___boxed(lean_object* v_pre_14_, lean_object* v_s_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(v_pre_14_, v_s_15_);
lean_dec_ref(v_pre_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0(lean_object* v_pre_17_, lean_object* v_s_18_, lean_object* v_pat_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(v_pre_17_, v_s_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___boxed(lean_object* v_pre_21_, lean_object* v_s_22_, lean_object* v_pat_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0(v_pre_21_, v_s_22_, v_pat_23_);
lean_dec_ref(v_pat_23_);
lean_dec_ref(v_pre_21_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(lean_object* v_s_25_, lean_object* v_pre_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_String_dropPrefix_x3f___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f_spec__0___redArg(v_pre_26_, v_s_25_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v___x_28_; 
v___x_28_ = lean_box(0);
return v___x_28_;
}
else
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_37_; 
v_val_29_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_37_ == 0)
{
v___x_31_ = v___x_27_;
v_isShared_32_ = v_isSharedCheck_37_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___x_27_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_37_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = l_String_Slice_toString(v_val_29_);
lean_dec(v_val_29_);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 0, v___x_33_);
v___x_35_ = v___x_31_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f___boxed(lean_object* v_s_38_, lean_object* v_pre_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_38_, v_pre_39_);
lean_dec_ref(v_pre_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(lean_object* v_s_41_, lean_object* v_pos_42_){
_start:
{
lean_object* v_str_43_; lean_object* v_startInclusive_44_; lean_object* v_endExclusive_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v_decide_49_; 
v_str_43_ = lean_ctor_get(v_s_41_, 0);
v_startInclusive_44_ = lean_ctor_get(v_s_41_, 1);
v_endExclusive_45_ = lean_ctor_get(v_s_41_, 2);
v___x_46_ = lean_nat_add(v_startInclusive_44_, v_pos_42_);
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = lean_nat_sub(v_endExclusive_45_, v___x_46_);
v_decide_49_ = lean_nat_dec_eq(v___x_47_, v___x_48_);
lean_dec(v___x_48_);
if (v_decide_49_ == 0)
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = lean_string_utf8_get_fast(v_str_43_, v___x_46_);
v___x_51_ = 48;
v___x_52_ = lean_uint32_dec_le(v___x_51_, v___x_50_);
if (v___x_52_ == 0)
{
lean_dec(v___x_46_);
return v_pos_42_;
}
else
{
uint32_t v___x_53_; uint8_t v___x_54_; 
v___x_53_ = 57;
v___x_54_ = lean_uint32_dec_le(v___x_50_, v___x_53_);
if (v___x_54_ == 0)
{
lean_dec(v___x_46_);
return v_pos_42_;
}
else
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_55_ = lean_string_utf8_next_fast(v_str_43_, v___x_46_);
v___x_56_ = lean_nat_sub(v___x_55_, v___x_46_);
lean_dec(v___x_46_);
v___x_57_ = lean_nat_add(v_pos_42_, v___x_56_);
lean_dec(v___x_56_);
v___x_58_ = lean_unsigned_to_nat(1u);
v___x_59_ = lean_nat_add(v_pos_42_, v___x_58_);
v___x_60_ = lean_nat_dec_le(v___x_59_, v___x_57_);
lean_dec(v___x_59_);
if (v___x_60_ == 0)
{
lean_dec(v___x_57_);
return v_pos_42_;
}
else
{
lean_dec(v_pos_42_);
v_pos_42_ = v___x_57_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_46_);
return v_pos_42_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0___boxed(lean_object* v_s_62_, lean_object* v_pos_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(v_s_62_, v_pos_63_);
lean_dec_ref(v_s_62_);
return v_res_64_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(lean_object* v_s_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_66_ = lean_string_utf8_byte_size(v_s_65_);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_nat_dec_eq(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v_decide_71_; 
v___x_69_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_69_, 0, v_s_65_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
v___x_70_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits_spec__0(v___x_69_, v___x_67_);
lean_dec_ref_known(v___x_69_, 3);
v_decide_71_ = lean_nat_dec_eq(v___x_70_, v___x_66_);
lean_dec(v___x_70_);
return v_decide_71_;
}
else
{
uint8_t v___x_72_; 
lean_dec_ref(v_s_65_);
v___x_72_ = 0;
return v___x_72_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits___boxed(lean_object* v_s_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_s_73_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
switch(lean_obj_tag(v_a_76_))
{
case 0:
{
return v_a_77_;
}
case 1:
{
lean_object* v_pre_78_; lean_object* v_str_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_pre_78_ = lean_ctor_get(v_a_76_, 0);
v_str_79_ = lean_ctor_get(v_a_76_, 1);
lean_inc_ref(v_str_79_);
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v_str_79_);
v___x_81_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v_a_77_);
v_a_76_ = v_pre_78_;
v_a_77_ = v___x_81_;
goto _start;
}
default: 
{
lean_object* v_pre_83_; lean_object* v_i_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_pre_83_ = lean_ctor_get(v_a_76_, 0);
v_i_84_ = lean_ctor_get(v_a_76_, 1);
lean_inc(v_i_84_);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v_i_84_);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v_a_77_);
v_a_76_ = v_pre_83_;
v_a_77_ = v___x_86_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go___boxed(lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(v_a_88_, v_a_89_);
lean_dec(v_a_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(lean_object* v_n_91_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = lean_box(0);
v___x_93_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts_go(v_n_91_, v___x_92_);
v___x_94_ = lean_array_mk(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts___boxed(lean_object* v_n_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(v_n_95_);
lean_dec(v_n_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(lean_object* v_as_97_, size_t v_i_98_, size_t v_stop_99_, lean_object* v_b_100_){
_start:
{
lean_object* v___y_102_; uint8_t v___x_106_; 
v___x_106_ = lean_usize_dec_eq(v_i_98_, v_stop_99_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_array_uget_borrowed(v_as_97_, v_i_98_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_s_108_; lean_object* v___x_109_; 
v_s_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_s_108_);
v___x_109_ = l_Lean_Name_str___override(v_b_100_, v_s_108_);
v___y_102_ = v___x_109_;
goto v___jp_101_;
}
else
{
lean_object* v_n_110_; lean_object* v___x_111_; 
v_n_110_ = lean_ctor_get(v___x_107_, 0);
lean_inc(v_n_110_);
v___x_111_ = l_Lean_Name_num___override(v_b_100_, v_n_110_);
v___y_102_ = v___x_111_;
goto v___jp_101_;
}
}
else
{
return v_b_100_;
}
v___jp_101_:
{
size_t v___x_103_; size_t v___x_104_; 
v___x_103_ = ((size_t)1ULL);
v___x_104_ = lean_usize_add(v_i_98_, v___x_103_);
v_i_98_ = v___x_104_;
v_b_100_ = v___y_102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0___boxed(lean_object* v_as_112_, lean_object* v_i_113_, lean_object* v_stop_114_, lean_object* v_b_115_){
_start:
{
size_t v_i_boxed_116_; size_t v_stop_boxed_117_; lean_object* v_res_118_; 
v_i_boxed_116_ = lean_unbox_usize(v_i_113_);
lean_dec(v_i_113_);
v_stop_boxed_117_ = lean_unbox_usize(v_stop_114_);
lean_dec(v_stop_114_);
v_res_118_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(v_as_112_, v_i_boxed_116_, v_stop_boxed_117_, v_b_115_);
lean_dec_ref(v_as_112_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(lean_object* v_parts_119_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_120_ = lean_box(0);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_array_get_size(v_parts_119_);
v___x_123_ = lean_nat_dec_lt(v___x_121_, v___x_122_);
if (v___x_123_ == 0)
{
return v___x_120_;
}
else
{
size_t v___x_124_; size_t v___x_125_; lean_object* v___x_126_; 
v___x_124_ = ((size_t)0ULL);
v___x_125_ = lean_usize_of_nat(v___x_122_);
v___x_126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName_spec__0(v_parts_119_, v___x_124_, v___x_125_, v___x_120_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName___boxed(lean_object* v_parts_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(v_parts_127_);
lean_dec_ref(v_parts_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(lean_object* v_comps_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = lean_array_get_size(v_comps_130_);
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = lean_nat_dec_eq(v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; uint8_t v___x_135_; lean_object* v___x_136_; 
v___x_134_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_namePartsToName(v_comps_130_);
v___x_135_ = 1;
v___x_136_ = l_Lean_Name_toString(v___x_134_, v___x_135_);
return v___x_136_;
}
else
{
lean_object* v___x_137_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___boxed(lean_object* v_comps_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(v_comps_138_);
lean_dec_ref(v_comps_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(lean_object* v_c_168_){
_start:
{
if (lean_obj_tag(v_c_168_) == 0)
{
lean_object* v_s_171_; lean_object* v___x_178_; uint8_t v___x_179_; 
v_s_171_ = lean_ctor_get(v_c_168_, 0);
lean_inc_ref(v_s_171_);
lean_dec_ref_known(v_c_168_, 1);
v___x_178_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__3));
v___x_179_ = lean_string_dec_eq(v_s_171_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_180_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__4));
v___x_181_ = lean_string_dec_eq(v_s_171_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__5));
v___x_183_ = lean_string_dec_eq(v_s_171_, v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__6));
v___x_185_ = lean_string_dec_eq(v_s_171_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__7));
v___x_187_ = lean_string_dec_eq(v_s_171_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__8));
v___x_189_ = lean_string_dec_eq(v_s_171_, v___x_188_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__9));
v___x_191_ = lean_string_dec_eq(v_s_171_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__10));
v___x_193_ = lean_string_dec_eq(v_s_171_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__11));
lean_inc_ref(v_s_171_);
v___x_195_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_171_, v___x_194_);
if (lean_obj_tag(v___x_195_) == 0)
{
goto v___jp_172_;
}
else
{
lean_object* v_val_196_; uint8_t v___x_197_; 
v_val_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_val_196_);
lean_dec_ref_known(v___x_195_, 1);
v___x_197_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_196_);
if (v___x_197_ == 0)
{
goto v___jp_172_;
}
else
{
lean_dec_ref(v_s_171_);
goto v___jp_169_;
}
}
}
else
{
lean_object* v___x_198_; 
lean_dec_ref(v_s_171_);
v___x_198_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__13));
return v___x_198_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec_ref(v_s_171_);
v___x_199_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__15));
return v___x_199_;
}
}
else
{
lean_dec_ref(v_s_171_);
goto v___jp_169_;
}
}
else
{
lean_dec_ref(v_s_171_);
goto v___jp_169_;
}
}
else
{
lean_dec_ref(v_s_171_);
goto v___jp_169_;
}
}
else
{
lean_object* v___x_200_; 
lean_dec_ref(v_s_171_);
v___x_200_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__17));
return v___x_200_;
}
}
else
{
lean_object* v___x_201_; 
lean_dec_ref(v_s_171_);
v___x_201_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__19));
return v___x_201_;
}
}
else
{
lean_object* v___x_202_; 
lean_dec_ref(v_s_171_);
v___x_202_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__21));
return v___x_202_;
}
v___jp_172_:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__2));
v___x_174_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_171_, v___x_173_);
if (lean_obj_tag(v___x_174_) == 0)
{
return v___x_174_;
}
else
{
lean_object* v_val_175_; uint8_t v___x_176_; 
v_val_175_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v___x_174_, 1);
v___x_176_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_box(0);
return v___x_177_;
}
else
{
goto v___jp_169_;
}
}
}
}
else
{
lean_object* v___x_203_; 
lean_dec_ref(v_c_168_);
v___x_203_ = lean_box(0);
return v___x_203_;
}
v___jp_169_:
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix___closed__1));
return v___x_170_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(lean_object* v_c_205_){
_start:
{
if (lean_obj_tag(v_c_205_) == 0)
{
lean_object* v_s_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_s_206_ = lean_ctor_get(v_c_205_, 0);
lean_inc_ref(v_s_206_);
lean_dec_ref_known(v_c_205_, 1);
v___x_207_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___closed__0));
v___x_208_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_206_, v___x_207_);
if (lean_obj_tag(v___x_208_) == 0)
{
uint8_t v___x_209_; 
v___x_209_ = 0;
return v___x_209_;
}
else
{
lean_object* v_val_210_; uint8_t v___x_211_; 
v_val_210_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v___x_208_, 1);
v___x_211_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_210_);
return v___x_211_;
}
}
else
{
uint8_t v___x_212_; 
lean_dec_ref(v_c_205_);
v___x_212_ = 0;
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex___boxed(lean_object* v_c_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(v_c_213_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
if (lean_obj_tag(v_x_217_) == 0)
{
uint8_t v___x_218_; 
v___x_218_ = 1;
return v___x_218_;
}
else
{
uint8_t v___x_219_; 
v___x_219_ = 0;
return v___x_219_;
}
}
else
{
if (lean_obj_tag(v_x_217_) == 0)
{
uint8_t v___x_220_; 
v___x_220_ = 0;
return v___x_220_;
}
else
{
lean_object* v_val_221_; lean_object* v_val_222_; uint8_t v___x_223_; 
v_val_221_ = lean_ctor_get(v_x_216_, 0);
v_val_222_ = lean_ctor_get(v_x_217_, 0);
v___x_223_ = l_Lean_instBEqNamePart_beq(v_val_221_, v_val_222_);
return v___x_223_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0___boxed(lean_object* v_x_224_, lean_object* v_x_225_){
_start:
{
uint8_t v_res_226_; lean_object* v_r_227_; 
v_res_226_ = l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v_x_224_, v_x_225_);
lean_dec(v_x_225_);
lean_dec(v_x_224_);
v_r_227_ = lean_box(v_res_226_);
return v_r_227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(lean_object* v_stop_235_, lean_object* v_start_236_, lean_object* v_comps_237_, lean_object* v_range_238_, lean_object* v_b_239_, lean_object* v_i_240_){
_start:
{
lean_object* v_stop_241_; lean_object* v_step_242_; uint8_t v___x_243_; 
v_stop_241_ = lean_ctor_get(v_range_238_, 1);
v_step_242_ = lean_ctor_get(v_range_238_, 2);
v___x_243_ = lean_nat_dec_lt(v_i_240_, v_stop_241_);
if (v___x_243_ == 0)
{
lean_dec(v_i_240_);
lean_dec(v_start_236_);
lean_inc_ref(v_b_239_);
return v_b_239_;
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___y_249_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_244_ = lean_box(0);
v___x_245_ = lean_box(0);
v___x_246_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0));
v___x_247_ = lean_unsigned_to_nat(1u);
v___x_264_ = lean_array_get_size(v_comps_237_);
v___x_265_ = lean_nat_dec_lt(v_i_240_, v___x_264_);
if (v___x_265_ == 0)
{
v___y_249_ = v___x_244_;
goto v___jp_248_;
}
else
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_array_fget_borrowed(v_comps_237_, v_i_240_);
lean_inc(v___x_266_);
v___x_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
v___y_249_ = v___x_267_;
goto v___jp_248_;
}
v___jp_248_:
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2));
v___x_251_ = l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_249_, v___x_250_);
lean_dec(v___y_249_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
v___x_252_ = lean_nat_add(v_i_240_, v_step_242_);
lean_dec(v_i_240_);
v_b_239_ = v___x_246_;
v_i_240_ = v___x_252_;
goto _start;
}
else
{
lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_254_ = lean_nat_add(v_i_240_, v___x_247_);
lean_dec(v_i_240_);
v___x_255_ = lean_nat_dec_lt(v___x_254_, v_stop_235_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
lean_dec(v___x_254_);
v___x_256_ = lean_box(v___x_255_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_start_236_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___x_245_);
return v___x_259_;
}
else
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v_start_236_);
v___x_260_ = lean_box(v___x_255_);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_254_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_245_);
return v___x_263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___boxed(lean_object* v_stop_268_, lean_object* v_start_269_, lean_object* v_comps_270_, lean_object* v_range_271_, lean_object* v_b_272_, lean_object* v_i_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(v_stop_268_, v_start_269_, v_comps_270_, v_range_271_, v_b_272_, v_i_273_);
lean_dec_ref(v_b_272_);
lean_dec_ref(v_range_271_);
lean_dec_ref(v_comps_270_);
lean_dec(v_stop_268_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(lean_object* v_comps_280_, lean_object* v_start_281_, lean_object* v_stop_282_){
_start:
{
lean_object* v___y_288_; lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_308_ = lean_unsigned_to_nat(3u);
v___x_309_ = lean_nat_sub(v_stop_282_, v_start_281_);
v___x_310_ = lean_nat_dec_le(v___x_308_, v___x_309_);
lean_dec(v___x_309_);
if (v___x_310_ == 0)
{
lean_dec(v_stop_282_);
goto v___jp_283_;
}
else
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_array_get_size(v_comps_280_);
v___x_312_ = lean_nat_dec_lt(v_start_281_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; 
v___x_313_ = lean_box(0);
v___y_288_ = v___x_313_;
goto v___jp_287_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_array_fget_borrowed(v_comps_280_, v_start_281_);
lean_inc(v___x_314_);
v___x_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
v___y_288_ = v___x_315_;
goto v___jp_287_;
}
}
v___jp_283_:
{
uint8_t v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = 0;
v___x_285_ = lean_box(v___x_284_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v_start_281_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
return v___x_286_;
}
v___jp_287_:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2));
v___x_290_ = l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_288_, v___x_289_);
lean_dec(v___y_288_);
if (v___x_290_ == 0)
{
lean_dec(v_stop_282_);
goto v___jp_283_;
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v_fst_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_306_; 
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = lean_nat_add(v_start_281_, v___x_291_);
lean_inc(v_stop_282_);
lean_inc(v___x_292_);
v___x_293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v_stop_282_);
lean_ctor_set(v___x_293_, 2, v___x_291_);
v___x_294_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__0));
lean_inc(v_start_281_);
v___x_295_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(v_stop_282_, v_start_281_, v_comps_280_, v___x_293_, v___x_294_, v___x_292_);
lean_dec_ref_known(v___x_293_, 3);
lean_dec(v_stop_282_);
v_fst_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; 
v_unused_307_ = lean_ctor_get(v___x_295_, 1);
lean_dec(v_unused_307_);
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_306_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_fst_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_306_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
if (lean_obj_tag(v_fst_296_) == 0)
{
uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_300_ = 0;
v___x_301_ = lean_box(v___x_300_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 1, v___x_301_);
lean_ctor_set(v___x_298_, 0, v_start_281_);
v___x_303_ = v___x_298_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_start_281_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
else
{
lean_object* v_val_305_; 
lean_del_object(v___x_298_);
lean_dec(v_start_281_);
v_val_305_ = lean_ctor_get(v_fst_296_, 0);
lean_inc(v_val_305_);
lean_dec_ref_known(v_fst_296_, 1);
return v_val_305_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___boxed(lean_object* v_comps_316_, lean_object* v_start_317_, lean_object* v_stop_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(v_comps_316_, v_start_317_, v_stop_318_);
lean_dec_ref(v_comps_316_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1(lean_object* v_stop_320_, lean_object* v_start_321_, lean_object* v_comps_322_, lean_object* v_range_323_, lean_object* v_b_324_, lean_object* v_i_325_, lean_object* v_hs_326_, lean_object* v_hl_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg(v_stop_320_, v_start_321_, v_comps_322_, v_range_323_, v_b_324_, v_i_325_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___boxed(lean_object* v_stop_329_, lean_object* v_start_330_, lean_object* v_comps_331_, lean_object* v_range_332_, lean_object* v_b_333_, lean_object* v_i_334_, lean_object* v_hs_335_, lean_object* v_hl_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1(v_stop_329_, v_start_330_, v_comps_331_, v_range_332_, v_b_333_, v_i_334_, v_hs_335_, v_hl_336_);
lean_dec_ref(v_b_333_);
lean_dec_ref(v_range_332_);
lean_dec_ref(v_comps_331_);
lean_dec(v_stop_329_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(lean_object* v___x_338_, lean_object* v_comps_339_, lean_object* v_range_340_, lean_object* v_b_341_, lean_object* v_i_342_){
_start:
{
lean_object* v_stop_343_; lean_object* v_step_344_; lean_object* v_a_346_; uint8_t v___x_349_; 
v_stop_343_ = lean_ctor_get(v_range_340_, 1);
v_step_344_ = lean_ctor_get(v_range_340_, 2);
v___x_349_ = lean_nat_dec_lt(v_i_342_, v_stop_343_);
if (v___x_349_ == 0)
{
lean_dec(v_i_342_);
lean_inc(v_b_341_);
return v_b_341_;
}
else
{
lean_object* v___x_350_; lean_object* v___y_352_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_357_ = lean_array_get_size(v_comps_339_);
v___x_358_ = lean_nat_dec_lt(v_i_342_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; 
v___x_359_ = lean_box(0);
v___y_352_ = v___x_359_;
goto v___jp_351_;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_array_fget_borrowed(v_comps_339_, v_i_342_);
lean_inc(v___x_360_);
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
v___y_352_ = v___x_361_;
goto v___jp_351_;
}
v___jp_351_:
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__1___redArg___closed__2));
v___x_354_ = l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_352_, v___x_353_);
lean_dec(v___y_352_);
if (v___x_354_ == 0)
{
v_a_346_ = v_b_341_;
goto v___jp_345_;
}
else
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = lean_nat_add(v_i_342_, v___x_350_);
v___x_356_ = lean_nat_dec_lt(v___x_355_, v___x_338_);
if (v___x_356_ == 0)
{
lean_dec(v___x_355_);
v_a_346_ = v_b_341_;
goto v___jp_345_;
}
else
{
lean_dec(v_i_342_);
return v___x_355_;
}
}
}
}
v___jp_345_:
{
lean_object* v___x_347_; 
v___x_347_ = lean_nat_add(v_i_342_, v_step_344_);
lean_dec(v_i_342_);
v_b_341_ = v_a_346_;
v_i_342_ = v___x_347_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg___boxed(lean_object* v___x_362_, lean_object* v_comps_363_, lean_object* v_range_364_, lean_object* v_b_365_, lean_object* v_i_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(v___x_362_, v_comps_363_, v_range_364_, v_b_365_, v_i_366_);
lean_dec(v_b_365_);
lean_dec_ref(v_range_364_);
lean_dec_ref(v_comps_363_);
lean_dec(v___x_362_);
return v_res_367_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(lean_object* v_a_368_, lean_object* v_as_369_, size_t v_i_370_, size_t v_stop_371_){
_start:
{
uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_eq(v_i_370_, v_stop_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_array_uget_borrowed(v_as_369_, v_i_370_);
v___x_374_ = lean_string_dec_eq(v_a_368_, v___x_373_);
if (v___x_374_ == 0)
{
size_t v___x_375_; size_t v___x_376_; 
v___x_375_ = ((size_t)1ULL);
v___x_376_ = lean_usize_add(v_i_370_, v___x_375_);
v_i_370_ = v___x_376_;
goto _start;
}
else
{
return v___x_374_;
}
}
else
{
uint8_t v___x_378_; 
v___x_378_ = 0;
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0___boxed(lean_object* v_a_379_, lean_object* v_as_380_, lean_object* v_i_381_, lean_object* v_stop_382_){
_start:
{
size_t v_i_boxed_383_; size_t v_stop_boxed_384_; uint8_t v_res_385_; lean_object* v_r_386_; 
v_i_boxed_383_ = lean_unbox_usize(v_i_381_);
lean_dec(v_i_381_);
v_stop_boxed_384_ = lean_unbox_usize(v_stop_382_);
lean_dec(v_stop_382_);
v_res_385_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(v_a_379_, v_as_380_, v_i_boxed_383_, v_stop_boxed_384_);
lean_dec_ref(v_as_380_);
lean_dec_ref(v_a_379_);
v_r_386_ = lean_box(v_res_385_);
return v_r_386_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(lean_object* v_as_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = lean_array_get_size(v_as_387_);
v___x_391_ = lean_nat_dec_lt(v___x_389_, v___x_390_);
if (v___x_391_ == 0)
{
return v___x_391_;
}
else
{
size_t v___x_392_; size_t v___x_393_; uint8_t v___x_394_; 
v___x_392_ = ((size_t)0ULL);
v___x_393_ = lean_usize_of_nat(v___x_390_);
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0_spec__0(v_a_388_, v_as_387_, v___x_392_, v___x_393_);
return v___x_394_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0___boxed(lean_object* v_as_395_, lean_object* v_a_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(v_as_395_, v_a_396_);
lean_dec_ref(v_a_396_);
lean_dec_ref(v_as_395_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(lean_object* v_comps_399_, lean_object* v_range_400_, lean_object* v_b_401_, lean_object* v_i_402_){
_start:
{
lean_object* v_stop_403_; lean_object* v_step_404_; lean_object* v_a_406_; uint8_t v___x_409_; 
v_stop_403_ = lean_ctor_get(v_range_400_, 1);
v_step_404_ = lean_ctor_get(v_range_400_, 2);
v___x_409_ = lean_nat_dec_lt(v_i_402_, v_stop_403_);
if (v___x_409_ == 0)
{
lean_dec(v_i_402_);
return v_b_401_;
}
else
{
lean_object* v_fst_410_; lean_object* v_snd_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_435_; 
v_fst_410_ = lean_ctor_get(v_b_401_, 0);
v_snd_411_ = lean_ctor_get(v_b_401_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_b_401_);
if (v_isSharedCheck_435_ == 0)
{
v___x_413_ = v_b_401_;
v_isShared_414_ = v_isSharedCheck_435_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_snd_411_);
lean_inc(v_fst_410_);
lean_dec(v_b_401_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_435_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = l_Lean_instInhabitedNamePart_default;
v___x_416_ = lean_array_get_borrowed(v___x_415_, v_comps_399_, v_i_402_);
lean_inc(v___x_416_);
v___x_417_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(v___x_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
uint8_t v___x_418_; 
lean_inc(v___x_416_);
v___x_418_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isSpecIndex(v___x_416_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_421_; 
lean_inc(v___x_416_);
v___x_419_ = lean_array_push(v_fst_410_, v___x_416_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 0, v___x_419_);
v___x_421_ = v___x_413_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v_snd_411_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
v_a_406_ = v___x_421_;
goto v___jp_405_;
}
}
else
{
lean_object* v___x_424_; 
if (v_isShared_414_ == 0)
{
v___x_424_ = v___x_413_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_fst_410_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_snd_411_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
v_a_406_ = v___x_424_;
goto v___jp_405_;
}
}
}
else
{
lean_object* v_val_426_; uint8_t v___x_427_; 
v_val_426_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_val_426_);
lean_dec_ref_known(v___x_417_, 1);
v___x_427_ = l_Array_contains___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__0(v_snd_411_, v_val_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = lean_array_push(v_snd_411_, v_val_426_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 1, v___x_428_);
v___x_430_ = v___x_413_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_fst_410_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
v_a_406_ = v___x_430_;
goto v___jp_405_;
}
}
else
{
lean_object* v___x_433_; 
lean_dec(v_val_426_);
if (v_isShared_414_ == 0)
{
v___x_433_ = v___x_413_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_fst_410_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_snd_411_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
v_a_406_ = v___x_433_;
goto v___jp_405_;
}
}
}
}
}
v___jp_405_:
{
lean_object* v___x_407_; 
v___x_407_ = lean_nat_add(v_i_402_, v_step_404_);
lean_dec(v_i_402_);
v_b_401_ = v_a_406_;
v_i_402_ = v___x_407_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg___boxed(lean_object* v_comps_436_, lean_object* v_range_437_, lean_object* v_b_438_, lean_object* v_i_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(v_comps_436_, v_range_437_, v_b_438_, v_i_439_);
lean_dec_ref(v_range_437_);
lean_dec_ref(v_comps_436_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(lean_object* v_comps_445_){
_start:
{
lean_object* v_begin___447_; lean_object* v_begin___463_; lean_object* v___y_465_; lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v_begin___463_ = lean_unsigned_to_nat(0u);
v___x_472_ = lean_unsigned_to_nat(3u);
v___x_473_ = lean_array_get_size(v_comps_445_);
v___x_474_ = lean_nat_dec_le(v___x_472_, v___x_473_);
if (v___x_474_ == 0)
{
v_begin___447_ = v_begin___463_;
goto v___jp_446_;
}
else
{
uint8_t v___x_475_; 
v___x_475_ = lean_nat_dec_lt(v_begin___463_, v___x_473_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
v___x_476_ = lean_box(0);
v___y_465_ = v___x_476_;
goto v___jp_464_;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_array_fget_borrowed(v_comps_445_, v_begin___463_);
lean_inc(v___x_477_);
v___x_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
v___y_465_ = v___x_478_;
goto v___jp_464_;
}
}
v___jp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v_fst_453_; lean_object* v_snd_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_462_; 
v___x_448_ = lean_array_get_size(v_comps_445_);
v___x_449_ = lean_unsigned_to_nat(1u);
lean_inc(v_begin___447_);
v___x_450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_450_, 0, v_begin___447_);
lean_ctor_set(v___x_450_, 1, v___x_448_);
lean_ctor_set(v___x_450_, 2, v___x_449_);
v___x_451_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___closed__1));
v___x_452_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(v_comps_445_, v___x_450_, v___x_451_, v_begin___447_);
lean_dec_ref_known(v___x_450_, 3);
v_fst_453_ = lean_ctor_get(v___x_452_, 0);
v_snd_454_ = lean_ctor_get(v___x_452_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_462_ == 0)
{
v___x_456_ = v___x_452_;
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_snd_454_);
lean_inc(v_fst_453_);
lean_dec(v___x_452_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_458_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(v_fst_453_);
lean_dec(v_fst_453_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_458_);
v___x_460_ = v___x_456_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_snd_454_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
v___jp_464_:
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate___closed__2));
v___x_467_ = l_instBEqOption_beq___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate_spec__0(v___y_465_, v___x_466_);
lean_dec(v___y_465_);
if (v___x_467_ == 0)
{
v_begin___447_ = v_begin___463_;
goto v___jp_446_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = lean_array_get_size(v_comps_445_);
v___x_470_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
lean_ctor_set(v___x_470_, 2, v___x_468_);
v___x_471_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(v___x_469_, v_comps_445_, v___x_470_, v_begin___463_, v___x_468_);
lean_dec_ref_known(v___x_470_, 3);
v_begin___447_ = v___x_471_;
goto v___jp_446_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext___boxed(lean_object* v_comps_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(v_comps_479_);
lean_dec_ref(v_comps_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1(lean_object* v_comps_481_, lean_object* v_range_482_, lean_object* v_b_483_, lean_object* v_i_484_, lean_object* v_hs_485_, lean_object* v_hl_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___redArg(v_comps_481_, v_range_482_, v_b_483_, v_i_484_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1___boxed(lean_object* v_comps_488_, lean_object* v_range_489_, lean_object* v_b_490_, lean_object* v_i_491_, lean_object* v_hs_492_, lean_object* v_hl_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__1(v_comps_488_, v_range_489_, v_b_490_, v_i_491_, v_hs_492_, v_hl_493_);
lean_dec_ref(v_range_489_);
lean_dec_ref(v_comps_488_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2(lean_object* v___x_495_, lean_object* v_comps_496_, lean_object* v_range_497_, lean_object* v_b_498_, lean_object* v_i_499_, lean_object* v_hs_500_, lean_object* v_hl_501_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___redArg(v___x_495_, v_comps_496_, v_range_497_, v_b_498_, v_i_499_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2___boxed(lean_object* v___x_503_, lean_object* v_comps_504_, lean_object* v_range_505_, lean_object* v_b_506_, lean_object* v_i_507_, lean_object* v_hs_508_, lean_object* v_hl_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext_spec__2(v___x_503_, v_comps_504_, v_range_505_, v_b_506_, v_i_507_, v_hs_508_, v_hl_509_);
lean_dec(v_b_506_);
lean_dec_ref(v_range_505_);
lean_dec_ref(v_comps_504_);
lean_dec(v___x_503_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(lean_object* v___x_514_, lean_object* v_range_515_, lean_object* v_b_516_, lean_object* v_i_517_){
_start:
{
lean_object* v_stop_518_; lean_object* v_step_519_; uint8_t v___x_520_; 
v_stop_518_ = lean_ctor_get(v_range_515_, 1);
v_step_519_ = lean_ctor_get(v_range_515_, 2);
v___x_520_ = lean_nat_dec_lt(v_i_517_, v_stop_518_);
if (v___x_520_ == 0)
{
lean_dec(v_i_517_);
lean_inc(v_b_516_);
return v_b_516_;
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_521_ = l_Lean_instInhabitedNamePart_default;
v___x_522_ = lean_array_get_borrowed(v___x_521_, v___x_514_, v_i_517_);
v___x_523_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1));
v___x_524_ = l_Lean_instBEqNamePart_beq(v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; 
v___x_525_ = lean_nat_add(v_i_517_, v_step_519_);
lean_dec(v_i_517_);
v_i_517_ = v___x_525_;
goto _start;
}
else
{
lean_object* v___x_527_; 
v___x_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_527_, 0, v_i_517_);
return v___x_527_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___boxed(lean_object* v___x_528_, lean_object* v_range_529_, lean_object* v_b_530_, lean_object* v_i_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(v___x_528_, v_range_529_, v_b_530_, v_i_531_);
lean_dec(v_b_530_);
lean_dec_ref(v_range_529_);
lean_dec_ref(v___x_528_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(lean_object* v___x_533_, lean_object* v_as_534_, size_t v_sz_535_, size_t v_i_536_, lean_object* v_b_537_){
_start:
{
lean_object* v_a_539_; uint8_t v___x_543_; 
v___x_543_ = lean_usize_dec_lt(v_i_536_, v_sz_535_);
if (v___x_543_ == 0)
{
return v_b_537_;
}
else
{
lean_object* v_a_544_; lean_object* v___x_545_; lean_object* v_name_548_; lean_object* v_flags_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_a_544_ = lean_array_uget_borrowed(v_as_534_, v_i_536_);
v___x_545_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_processSpecContext(v_a_544_);
v_name_548_ = lean_ctor_get(v___x_545_, 0);
v_flags_549_ = lean_ctor_get(v___x_545_, 1);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_string_utf8_byte_size(v_name_548_);
v___x_552_ = lean_nat_dec_eq(v___x_551_, v___x_550_);
if (v___x_552_ == 0)
{
goto v___jp_546_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = lean_nat_dec_eq(v___x_533_, v___x_550_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_554_ = lean_array_get_size(v_flags_549_);
v___x_555_ = lean_nat_dec_eq(v___x_554_, v___x_550_);
if (v___x_555_ == 0)
{
goto v___jp_546_;
}
else
{
lean_dec_ref(v___x_545_);
v_a_539_ = v_b_537_;
goto v___jp_538_;
}
}
else
{
goto v___jp_546_;
}
}
v___jp_546_:
{
lean_object* v___x_547_; 
v___x_547_ = lean_array_push(v_b_537_, v___x_545_);
v_a_539_ = v___x_547_;
goto v___jp_538_;
}
}
v___jp_538_:
{
size_t v___x_540_; size_t v___x_541_; 
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_add(v_i_536_, v___x_540_);
v_i_536_ = v___x_541_;
v_b_537_ = v_a_539_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5___boxed(lean_object* v___x_556_, lean_object* v_as_557_, lean_object* v_sz_558_, lean_object* v_i_559_, lean_object* v_b_560_){
_start:
{
size_t v_sz_boxed_561_; size_t v_i_boxed_562_; lean_object* v_res_563_; 
v_sz_boxed_561_ = lean_unbox_usize(v_sz_558_);
lean_dec(v_sz_558_);
v_i_boxed_562_ = lean_unbox_usize(v_i_559_);
lean_dec(v_i_559_);
v_res_563_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(v___x_556_, v_as_557_, v_sz_boxed_561_, v_i_boxed_562_, v_b_560_);
lean_dec_ref(v_as_557_);
lean_dec(v___x_556_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(lean_object* v_range_565_, lean_object* v_b_566_, lean_object* v_i_567_){
_start:
{
lean_object* v_stop_568_; lean_object* v_step_569_; lean_object* v_a_571_; uint8_t v___x_574_; 
v_stop_568_ = lean_ctor_get(v_range_565_, 1);
v_step_569_ = lean_ctor_get(v_range_565_, 2);
v___x_574_ = lean_nat_dec_lt(v_i_567_, v_stop_568_);
if (v___x_574_ == 0)
{
lean_dec(v_i_567_);
lean_inc_ref(v_b_566_);
return v_b_566_;
}
else
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = l_Lean_instInhabitedNamePart_default;
v___x_576_ = lean_array_get_borrowed(v___x_575_, v_b_566_, v_i_567_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_s_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v_s_577_ = lean_ctor_get(v___x_576_, 0);
v___x_578_ = lean_string_utf8_byte_size(v_s_577_);
v___x_579_ = lean_unsigned_to_nat(2u);
v___x_580_ = lean_nat_dec_le(v___x_579_, v___x_578_);
if (v___x_580_ == 0)
{
v_a_571_ = v_b_566_;
goto v___jp_570_;
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_581_ = lean_unsigned_to_nat(0u);
v___x_582_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___closed__0));
v___x_583_ = lean_string_memcmp(v_s_577_, v___x_582_, v___x_581_, v___x_581_, v___x_579_);
if (v___x_583_ == 0)
{
v_a_571_ = v_b_566_;
goto v___jp_570_;
}
else
{
lean_object* v___x_584_; 
v___x_584_ = l_Array_extract___redArg(v_b_566_, v___x_581_, v_i_567_);
return v___x_584_;
}
}
}
else
{
v_a_571_ = v_b_566_;
goto v___jp_570_;
}
}
v___jp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = lean_nat_add(v_i_567_, v_step_569_);
lean_dec(v_i_567_);
v_b_566_ = v_a_571_;
v_i_567_ = v___x_572_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg___boxed(lean_object* v_range_585_, lean_object* v_b_586_, lean_object* v_i_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(v_range_585_, v_b_586_, v_i_587_);
lean_dec_ref(v_b_586_);
lean_dec_ref(v_range_585_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(lean_object* v___x_594_, lean_object* v___x_595_, lean_object* v_range_596_, lean_object* v_b_597_, lean_object* v_i_598_){
_start:
{
lean_object* v_stop_599_; lean_object* v_step_600_; lean_object* v_a_602_; uint8_t v___x_605_; 
v_stop_599_ = lean_ctor_get(v_range_596_, 1);
v_step_600_ = lean_ctor_get(v_range_596_, 2);
v___x_605_ = lean_nat_dec_lt(v_i_598_, v_stop_599_);
if (v___x_605_ == 0)
{
lean_dec(v_i_598_);
return v_b_597_;
}
else
{
lean_object* v_snd_606_; lean_object* v_snd_607_; lean_object* v_fst_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_704_; 
v_snd_606_ = lean_ctor_get(v_b_597_, 1);
lean_inc(v_snd_606_);
v_snd_607_ = lean_ctor_get(v_snd_606_, 1);
lean_inc(v_snd_607_);
v_fst_608_ = lean_ctor_get(v_b_597_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_b_597_);
if (v_isSharedCheck_704_ == 0)
{
lean_object* v_unused_705_; 
v_unused_705_ = lean_ctor_get(v_b_597_, 1);
lean_dec(v_unused_705_);
v___x_610_ = v_b_597_;
v_isShared_611_ = v_isSharedCheck_704_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_fst_608_);
lean_dec(v_b_597_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_704_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_fst_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_702_; 
v_fst_612_ = lean_ctor_get(v_snd_606_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v_snd_606_);
if (v_isSharedCheck_702_ == 0)
{
lean_object* v_unused_703_; 
v_unused_703_ = lean_ctor_get(v_snd_606_, 1);
lean_dec(v_unused_703_);
v___x_614_ = v_snd_606_;
v_isShared_615_ = v_isSharedCheck_702_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_fst_612_);
lean_dec(v_snd_606_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_702_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v_fst_616_; lean_object* v_snd_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_701_; 
v_fst_616_ = lean_ctor_get(v_snd_607_, 0);
v_snd_617_ = lean_ctor_get(v_snd_607_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_snd_607_);
if (v_isSharedCheck_701_ == 0)
{
v___x_619_ = v_snd_607_;
v_isShared_620_ = v_isSharedCheck_701_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snd_617_);
lean_inc(v_fst_616_);
lean_dec(v_snd_607_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_701_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_unbox(v_snd_617_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_623_ = l_Lean_instInhabitedNamePart_default;
v___x_624_ = lean_array_get_borrowed(v___x_623_, v___x_594_, v_i_598_);
v___x_654_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg___closed__1));
v___x_655_ = l_Lean_instBEqNamePart_beq(v___x_624_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v_cont_659_; lean_object* v_entries_661_; lean_object* v_currentCtx_662_; 
v___x_656_ = lean_box(0);
v___x_657_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__0));
v___x_658_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__1));
v_cont_659_ = l_Lean_instBEqNamePart_beq(v___x_624_, v___x_658_);
if (v_cont_659_ == 0)
{
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_s_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v_s_667_ = lean_ctor_get(v___x_624_, 0);
v___x_668_ = lean_string_utf8_byte_size(v_s_667_);
v___x_669_ = lean_unsigned_to_nat(5u);
v___x_670_ = lean_nat_dec_le(v___x_669_, v___x_668_);
if (v___x_670_ == 0)
{
goto v___jp_625_;
}
else
{
uint8_t v___x_671_; 
v___x_671_ = lean_string_memcmp(v_s_667_, v___x_657_, v___x_621_, v___x_621_, v___x_669_);
if (v___x_671_ == 0)
{
goto v___jp_625_;
}
else
{
lean_del_object(v___x_619_);
lean_del_object(v___x_614_);
lean_del_object(v___x_610_);
if (lean_obj_tag(v_fst_612_) == 1)
{
lean_object* v_val_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_val_672_ = lean_ctor_get(v_fst_612_, 0);
lean_inc(v_val_672_);
lean_dec_ref_known(v_fst_612_, 1);
v___x_673_ = lean_array_push(v_fst_608_, v_val_672_);
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v_fst_616_);
lean_ctor_set(v___x_674_, 1, v_snd_617_);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_656_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_673_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v_a_602_ = v___x_676_;
goto v___jp_601_;
}
else
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_677_, 0, v_fst_616_);
lean_ctor_set(v___x_677_, 1, v_snd_617_);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v_fst_612_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v_fst_608_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v_a_602_ = v___x_679_;
goto v___jp_601_;
}
}
}
}
else
{
goto v___jp_625_;
}
}
else
{
lean_del_object(v___x_619_);
lean_dec(v_snd_617_);
lean_del_object(v___x_614_);
lean_del_object(v___x_610_);
if (lean_obj_tag(v_fst_612_) == 1)
{
lean_object* v_val_680_; lean_object* v___x_681_; 
v_val_680_ = lean_ctor_get(v_fst_612_, 0);
lean_inc(v_val_680_);
lean_dec_ref_known(v_fst_612_, 1);
v___x_681_ = lean_array_push(v_fst_608_, v_val_680_);
v_entries_661_ = v___x_681_;
v_currentCtx_662_ = v___x_656_;
goto v___jp_660_;
}
else
{
v_entries_661_ = v_fst_608_;
v_currentCtx_662_ = v_fst_612_;
goto v___jp_660_;
}
}
v___jp_660_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_663_ = lean_box(v_cont_659_);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v_fst_616_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v_currentCtx_662_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_entries_661_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v_a_602_ = v___x_666_;
goto v___jp_601_;
}
}
else
{
lean_object* v_entries_683_; 
lean_del_object(v___x_619_);
lean_del_object(v___x_614_);
lean_del_object(v___x_610_);
if (lean_obj_tag(v_fst_612_) == 1)
{
lean_object* v_val_688_; lean_object* v___x_689_; 
v_val_688_ = lean_ctor_get(v_fst_612_, 0);
lean_inc(v_val_688_);
lean_dec_ref_known(v_fst_612_, 1);
v___x_689_ = lean_array_push(v_fst_608_, v_val_688_);
v_entries_683_ = v___x_689_;
goto v___jp_682_;
}
else
{
lean_dec(v_fst_612_);
v_entries_683_ = v_fst_608_;
goto v___jp_682_;
}
v___jp_682_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_684_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___closed__2));
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v_fst_616_);
lean_ctor_set(v___x_685_, 1, v_snd_617_);
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v_entries_683_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v_a_602_ = v___x_687_;
goto v___jp_601_;
}
}
v___jp_625_:
{
if (lean_obj_tag(v_fst_612_) == 0)
{
lean_object* v___x_626_; lean_object* v___x_628_; 
lean_inc(v___x_624_);
v___x_626_ = lean_array_push(v_fst_616_, v___x_624_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_626_);
v___x_628_ = v___x_619_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v_snd_617_);
v___x_628_ = v_reuseFailAlloc_635_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v___x_628_);
v___x_630_ = v___x_614_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_fst_612_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_628_);
v___x_630_ = v_reuseFailAlloc_634_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_632_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 1, v___x_630_);
v___x_632_ = v___x_610_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_fst_608_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v___x_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
v_a_602_ = v___x_632_;
goto v___jp_601_;
}
}
}
}
else
{
lean_object* v_val_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_653_; 
v_val_636_ = lean_ctor_get(v_fst_612_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v_fst_612_);
if (v_isSharedCheck_653_ == 0)
{
v___x_638_ = v_fst_612_;
v_isShared_639_ = v_isSharedCheck_653_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_val_636_);
lean_dec(v_fst_612_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_653_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_640_; lean_object* v___x_642_; 
lean_inc(v___x_624_);
v___x_640_ = lean_array_push(v_val_636_, v___x_624_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_640_);
v___x_642_ = v___x_638_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_652_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_644_; 
if (v_isShared_620_ == 0)
{
v___x_644_ = v___x_619_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_fst_616_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_snd_617_);
v___x_644_ = v_reuseFailAlloc_651_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_646_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v___x_644_);
lean_ctor_set(v___x_614_, 0, v___x_642_);
v___x_646_ = v___x_614_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v___x_644_);
v___x_646_ = v_reuseFailAlloc_650_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_648_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 1, v___x_646_);
v___x_648_ = v___x_610_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_fst_608_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
v_a_602_ = v___x_648_;
goto v___jp_601_;
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
uint8_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
lean_dec(v_snd_617_);
v___x_690_ = lean_nat_dec_eq(v___x_595_, v___x_621_);
v___x_691_ = lean_box(v___x_690_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v___x_691_);
v___x_693_ = v___x_619_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_fst_616_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_691_);
v___x_693_ = v_reuseFailAlloc_700_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v___x_693_);
v___x_695_ = v___x_614_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_fst_612_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_699_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_697_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 1, v___x_695_);
v___x_697_ = v___x_610_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_fst_608_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
v_a_602_ = v___x_697_;
goto v___jp_601_;
}
}
}
}
}
}
}
}
v___jp_601_:
{
lean_object* v___x_603_; 
v___x_603_ = lean_nat_add(v_i_598_, v_step_600_);
lean_dec(v_i_598_);
v_b_597_ = v_a_602_;
v_i_598_ = v___x_603_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg___boxed(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v_range_708_, lean_object* v_b_709_, lean_object* v_i_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(v___x_706_, v___x_707_, v_range_708_, v_b_709_, v_i_710_);
lean_dec_ref(v_range_708_);
lean_dec(v___x_707_);
lean_dec_ref(v___x_706_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(lean_object* v___x_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_snd_714_; lean_object* v_fst_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_772_; 
v_snd_714_ = lean_ctor_get(v_a_713_, 1);
v_fst_715_ = lean_ctor_get(v_a_713_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v_a_713_);
if (v_isSharedCheck_772_ == 0)
{
v___x_717_ = v_a_713_;
v_isShared_718_ = v_isSharedCheck_772_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_snd_714_);
lean_inc(v_fst_715_);
lean_dec(v_a_713_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_772_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v_fst_719_; lean_object* v_snd_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_771_; 
v_fst_719_ = lean_ctor_get(v_snd_714_, 0);
v_snd_720_ = lean_ctor_get(v_snd_714_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_snd_714_);
if (v_isSharedCheck_771_ == 0)
{
v___x_722_ = v_snd_714_;
v_isShared_723_ = v_isSharedCheck_771_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_snd_720_);
lean_inc(v_fst_719_);
lean_dec(v_snd_714_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_771_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
uint8_t v___x_731_; 
v___x_731_ = lean_unbox(v_snd_720_);
if (v___x_731_ == 0)
{
goto v___jp_724_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_732_ = lean_unsigned_to_nat(0u);
v___x_733_ = lean_array_get_size(v_fst_715_);
v___x_734_ = lean_nat_dec_eq(v___x_733_, v___x_732_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
lean_del_object(v___x_722_);
lean_del_object(v___x_717_);
v___x_735_ = l_Lean_instInhabitedNamePart_default;
v___x_736_ = lean_unsigned_to_nat(1u);
v___x_737_ = lean_nat_sub(v___x_733_, v___x_736_);
v___x_738_ = lean_array_get_borrowed(v___x_735_, v_fst_715_, v___x_737_);
lean_dec(v___x_737_);
lean_inc(v___x_738_);
v___x_739_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(v___x_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
uint8_t v___x_740_; 
v___x_740_ = lean_nat_dec_eq(v___x_712_, v___x_732_);
if (lean_obj_tag(v___x_738_) == 1)
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = lean_unsigned_to_nat(2u);
v___x_742_ = lean_nat_dec_le(v___x_741_, v___x_733_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
lean_dec(v_snd_720_);
v___x_743_ = lean_box(v___x_742_);
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_fst_719_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v_fst_715_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v_a_713_ = v___x_745_;
goto _start;
}
else
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = lean_nat_sub(v___x_733_, v___x_741_);
v___x_748_ = lean_array_get_borrowed(v___x_735_, v_fst_715_, v___x_747_);
lean_dec(v___x_747_);
lean_inc(v___x_748_);
v___x_749_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_matchSuffix(v___x_748_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
lean_dec(v_snd_720_);
v___x_750_ = lean_box(v___x_740_);
v___x_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_751_, 0, v_fst_719_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v_fst_715_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v_a_713_ = v___x_752_;
goto _start;
}
else
{
lean_object* v_val_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_val_754_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_val_754_);
lean_dec_ref_known(v___x_749_, 1);
v___x_755_ = lean_array_push(v_fst_719_, v_val_754_);
v___x_756_ = lean_array_pop(v_fst_715_);
v___x_757_ = lean_array_pop(v___x_756_);
v___x_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_755_);
lean_ctor_set(v___x_758_, 1, v_snd_720_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_757_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v_a_713_ = v___x_759_;
goto _start;
}
}
}
else
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
lean_dec(v_snd_720_);
v___x_761_ = lean_box(v___x_740_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v_fst_719_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v_fst_715_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v_a_713_ = v___x_763_;
goto _start;
}
}
else
{
lean_object* v_val_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_val_765_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_val_765_);
lean_dec_ref_known(v___x_739_, 1);
v___x_766_ = lean_array_push(v_fst_719_, v_val_765_);
v___x_767_ = lean_array_pop(v_fst_715_);
v___x_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set(v___x_768_, 1, v_snd_720_);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v_a_713_ = v___x_769_;
goto _start;
}
}
else
{
goto v___jp_724_;
}
}
v___jp_724_:
{
lean_object* v___x_726_; 
if (v_isShared_723_ == 0)
{
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_fst_719_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v_snd_720_);
v___x_726_ = v_reuseFailAlloc_730_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; 
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 1, v___x_726_);
v___x_728_ = v___x_717_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_fst_715_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg___boxed(lean_object* v___x_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(v___x_773_, v_a_774_);
lean_dec(v___x_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(lean_object* v_as_781_, size_t v_sz_782_, size_t v_i_783_, lean_object* v_b_784_){
_start:
{
lean_object* v_a_786_; uint8_t v___x_790_; 
v___x_790_ = lean_usize_dec_lt(v_i_783_, v_sz_782_);
if (v___x_790_ == 0)
{
return v_b_784_;
}
else
{
lean_object* v_a_791_; lean_object* v_name_792_; lean_object* v_flags_793_; lean_object* v___y_795_; lean_object* v___x_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v_a_791_ = lean_array_uget_borrowed(v_as_781_, v_i_783_);
v_name_792_ = lean_ctor_get(v_a_791_, 0);
v_flags_793_ = lean_ctor_get(v_a_791_, 1);
v___x_813_ = lean_string_utf8_byte_size(v_name_792_);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = lean_nat_dec_eq(v___x_813_, v___x_814_);
if (v___x_815_ == 0)
{
lean_inc_ref(v_name_792_);
v___y_795_ = v_name_792_;
goto v___jp_794_;
}
else
{
lean_object* v___x_816_; 
v___x_816_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4));
v___y_795_ = v___x_816_;
goto v___jp_794_;
}
v___jp_794_:
{
lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_796_ = lean_array_get_size(v_flags_793_);
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = lean_nat_dec_eq(v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0));
v___x_800_ = lean_string_append(v_b_784_, v___x_799_);
v___x_801_ = lean_string_append(v___x_800_, v___y_795_);
lean_dec_ref(v___y_795_);
v___x_802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__1));
v___x_803_ = lean_string_append(v___x_801_, v___x_802_);
v___x_804_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2));
lean_inc_ref(v_flags_793_);
v___x_805_ = lean_array_to_list(v_flags_793_);
v___x_806_ = l_String_intercalate(v___x_804_, v___x_805_);
v___x_807_ = lean_string_append(v___x_803_, v___x_806_);
lean_dec_ref(v___x_806_);
v___x_808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3));
v___x_809_ = lean_string_append(v___x_807_, v___x_808_);
v_a_786_ = v___x_809_;
goto v___jp_785_;
}
else
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__0));
v___x_811_ = lean_string_append(v_b_784_, v___x_810_);
v___x_812_ = lean_string_append(v___x_811_, v___y_795_);
lean_dec_ref(v___y_795_);
v_a_786_ = v___x_812_;
goto v___jp_785_;
}
}
}
v___jp_785_:
{
size_t v___x_787_; size_t v___x_788_; 
v___x_787_ = ((size_t)1ULL);
v___x_788_ = lean_usize_add(v_i_783_, v___x_787_);
v_i_783_ = v___x_788_;
v_b_784_ = v_a_786_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___boxed(lean_object* v_as_817_, lean_object* v_sz_818_, lean_object* v_i_819_, lean_object* v_b_820_){
_start:
{
size_t v_sz_boxed_821_; size_t v_i_boxed_822_; lean_object* v_res_823_; 
v_sz_boxed_821_ = lean_unbox_usize(v_sz_818_);
lean_dec(v_sz_818_);
v_i_boxed_822_ = lean_unbox_usize(v_i_819_);
lean_dec(v_i_819_);
v_res_823_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(v_as_817_, v_sz_boxed_821_, v_i_boxed_822_, v_b_820_);
lean_dec_ref(v_as_817_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(lean_object* v_components_832_){
_start:
{
lean_object* v___y_834_; lean_object* v_result_835_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_856_; lean_object* v_parts_857_; lean_object* v_specEntries_858_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v_entries_868_; uint8_t v___x_873_; 
v___x_839_ = lean_array_get_size(v_components_832_);
v___x_840_ = lean_unsigned_to_nat(0u);
v___x_873_ = lean_nat_dec_eq(v___x_839_, v___x_840_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; lean_object* v_fst_875_; lean_object* v_snd_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_931_; 
v___x_874_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripPrivate(v_components_832_, v___x_840_, v___x_839_);
v_fst_875_ = lean_ctor_get(v___x_874_, 0);
v_snd_876_ = lean_ctor_get(v___x_874_, 1);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_931_ == 0)
{
v___x_878_ = v___x_874_;
v_isShared_879_ = v_isSharedCheck_931_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_snd_876_);
lean_inc(v_fst_875_);
lean_dec(v___x_874_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_931_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v_parts_880_; lean_object* v_flags_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
v_parts_880_ = l_Array_extract___redArg(v_components_832_, v_fst_875_, v___x_839_);
v_flags_881_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__1));
v___x_882_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__2));
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 1, v___x_882_);
lean_ctor_set(v___x_878_, 0, v_parts_880_);
v___x_884_ = v___x_878_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_parts_880_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v___x_882_);
v___x_884_ = v_reuseFailAlloc_930_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_885_; lean_object* v_fst_886_; lean_object* v_snd_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_929_; 
v___x_885_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(v___x_839_, v___x_884_);
v_fst_886_ = lean_ctor_get(v___x_885_, 0);
v_snd_887_ = lean_ctor_get(v___x_885_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_929_ == 0)
{
v___x_889_ = v___x_885_;
v_isShared_890_ = v_isSharedCheck_929_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_snd_887_);
lean_inc(v_fst_886_);
lean_dec(v___x_885_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_929_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v_flags_892_; uint8_t v___x_924_; 
v___x_924_ = lean_unbox(v_snd_876_);
lean_dec(v_snd_876_);
if (v___x_924_ == 0)
{
lean_object* v_fst_925_; 
v_fst_925_ = lean_ctor_get(v_snd_887_, 0);
lean_inc(v_fst_925_);
lean_dec(v_snd_887_);
v_flags_892_ = v_fst_925_;
goto v___jp_891_;
}
else
{
lean_object* v_fst_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_fst_926_ = lean_ctor_get(v_snd_887_, 0);
lean_inc(v_fst_926_);
lean_dec(v_snd_887_);
v___x_927_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__3));
v___x_928_ = lean_array_push(v_fst_926_, v___x_927_);
v_flags_892_ = v___x_928_;
goto v___jp_891_;
}
v___jp_891_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_893_ = lean_array_get_size(v_fst_886_);
v___x_894_ = lean_unsigned_to_nat(1u);
v___x_895_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_895_, 0, v___x_840_);
lean_ctor_set(v___x_895_, 1, v___x_893_);
lean_ctor_set(v___x_895_, 2, v___x_894_);
v___x_896_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(v___x_895_, v_fst_886_, v___x_840_);
lean_dec(v_fst_886_);
lean_dec_ref_known(v___x_895_, 3);
v___x_897_ = lean_box(0);
v___x_898_ = lean_array_get_size(v___x_896_);
v___x_899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_899_, 0, v___x_840_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
lean_ctor_set(v___x_899_, 2, v___x_894_);
v___x_900_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(v___x_896_, v___x_899_, v___x_897_, v___x_840_);
lean_dec_ref_known(v___x_899_, 3);
if (lean_obj_tag(v___x_900_) == 1)
{
lean_object* v_val_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_908_; 
v_val_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc_n(v_val_901_, 2);
lean_dec_ref_known(v___x_900_, 1);
v___x_902_ = l_Array_extract___redArg(v___x_896_, v___x_840_, v_val_901_);
v___x_903_ = l_Array_extract___redArg(v___x_896_, v_val_901_, v___x_898_);
lean_dec_ref(v___x_896_);
v___x_904_ = lean_array_get_size(v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_905_, 0, v___x_840_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
lean_ctor_set(v___x_905_, 2, v___x_894_);
v___x_906_ = lean_box(v___x_873_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 1, v___x_906_);
lean_ctor_set(v___x_889_, 0, v_flags_881_);
v___x_908_ = v___x_889_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_flags_881_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v___x_906_);
v___x_908_ = v_reuseFailAlloc_923_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v_snd_912_; lean_object* v_snd_913_; lean_object* v_fst_914_; 
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_897_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v_flags_881_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(v___x_903_, v___x_839_, v___x_905_, v___x_910_, v___x_840_);
lean_dec_ref_known(v___x_905_, 3);
lean_dec_ref(v___x_903_);
v_snd_912_ = lean_ctor_get(v___x_911_, 1);
v_snd_913_ = lean_ctor_get(v_snd_912_, 1);
lean_inc(v_snd_913_);
v_fst_914_ = lean_ctor_get(v_snd_912_, 0);
if (lean_obj_tag(v_fst_914_) == 1)
{
lean_object* v_fst_915_; lean_object* v_fst_916_; lean_object* v_val_917_; lean_object* v___x_918_; uint8_t v___x_919_; 
lean_inc_ref(v_fst_914_);
v_fst_915_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_fst_915_);
lean_dec_ref(v___x_911_);
v_fst_916_ = lean_ctor_get(v_snd_913_, 0);
lean_inc(v_fst_916_);
lean_dec(v_snd_913_);
v_val_917_ = lean_ctor_get(v_fst_914_, 0);
lean_inc(v_val_917_);
lean_dec_ref_known(v_fst_914_, 1);
v___x_918_ = lean_array_get_size(v_val_917_);
v___x_919_ = lean_nat_dec_eq(v___x_918_, v___x_840_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; 
v___x_920_ = lean_array_push(v_fst_915_, v_val_917_);
v___y_864_ = v_fst_916_;
v___y_865_ = v___x_902_;
v___y_866_ = v_flags_881_;
v___y_867_ = v_flags_892_;
v_entries_868_ = v___x_920_;
goto v___jp_863_;
}
else
{
lean_dec(v_val_917_);
v___y_864_ = v_fst_916_;
v___y_865_ = v___x_902_;
v___y_866_ = v_flags_881_;
v___y_867_ = v_flags_892_;
v_entries_868_ = v_fst_915_;
goto v___jp_863_;
}
}
else
{
lean_object* v_fst_921_; lean_object* v_fst_922_; 
v_fst_921_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_fst_921_);
lean_dec_ref(v___x_911_);
v_fst_922_ = lean_ctor_get(v_snd_913_, 0);
lean_inc(v_fst_922_);
lean_dec(v_snd_913_);
v___y_864_ = v_fst_922_;
v___y_865_ = v___x_902_;
v___y_866_ = v_flags_881_;
v___y_867_ = v_flags_892_;
v_entries_868_ = v_fst_921_;
goto v___jp_863_;
}
}
}
else
{
lean_dec(v___x_900_);
lean_del_object(v___x_889_);
v___y_856_ = v_flags_892_;
v_parts_857_ = v___x_896_;
v_specEntries_858_ = v_flags_881_;
goto v___jp_855_;
}
}
}
}
}
}
else
{
lean_object* v___x_932_; 
v___x_932_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
return v___x_932_;
}
v___jp_833_:
{
size_t v_sz_836_; size_t v___x_837_; lean_object* v___x_838_; 
v_sz_836_ = lean_array_size(v___y_834_);
v___x_837_ = ((size_t)0ULL);
v___x_838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1(v___y_834_, v_sz_836_, v___x_837_, v_result_835_);
lean_dec_ref(v___y_834_);
return v___x_838_;
}
v___jp_841_:
{
lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_845_ = lean_array_get_size(v___y_843_);
v___x_846_ = lean_nat_dec_eq(v___x_845_, v___x_840_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_847_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___closed__0));
v___x_848_ = lean_string_append(v___y_844_, v___x_847_);
v___x_849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__2));
v___x_850_ = lean_array_to_list(v___y_843_);
v___x_851_ = l_String_intercalate(v___x_849_, v___x_850_);
v___x_852_ = lean_string_append(v___x_848_, v___x_851_);
lean_dec_ref(v___x_851_);
v___x_853_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__3));
v___x_854_ = lean_string_append(v___x_852_, v___x_853_);
v___y_834_ = v___y_842_;
v_result_835_ = v___x_854_;
goto v___jp_833_;
}
else
{
lean_dec_ref(v___y_843_);
v___y_834_ = v___y_842_;
v_result_835_ = v___y_844_;
goto v___jp_833_;
}
}
v___jp_855_:
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = lean_array_get_size(v_parts_857_);
v___x_860_ = lean_nat_dec_eq(v___x_859_, v___x_840_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; 
v___x_861_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts(v_parts_857_);
lean_dec_ref(v_parts_857_);
v___y_842_ = v_specEntries_858_;
v___y_843_ = v___y_856_;
v___y_844_ = v___x_861_;
goto v___jp_841_;
}
else
{
lean_object* v___x_862_; 
lean_dec_ref(v_parts_857_);
v___x_862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__1___closed__4));
v___y_842_ = v_specEntries_858_;
v___y_843_ = v___y_856_;
v___y_844_ = v___x_862_;
goto v___jp_841_;
}
}
v___jp_863_:
{
size_t v_sz_869_; size_t v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_sz_869_ = lean_array_size(v_entries_868_);
v___x_870_ = ((size_t)0ULL);
v___x_871_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__5(v___x_839_, v_entries_868_, v_sz_869_, v___x_870_, v___y_866_);
lean_dec_ref(v_entries_868_);
v___x_872_ = l_Array_append___redArg(v___y_865_, v___y_864_);
lean_dec(v___y_864_);
v___y_856_ = v___y_867_;
v_parts_857_ = v___x_872_;
v_specEntries_858_ = v___x_871_;
goto v___jp_855_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts___boxed(lean_object* v_components_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(v_components_933_);
lean_dec_ref(v_components_933_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0(lean_object* v___x_935_, lean_object* v_inst_936_, lean_object* v_a_937_){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___redArg(v___x_935_, v_a_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0___boxed(lean_object* v___x_939_, lean_object* v_inst_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__0(v___x_939_, v_inst_940_, v_a_941_);
lean_dec(v___x_939_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2(lean_object* v_range_943_, lean_object* v_b_944_, lean_object* v_i_945_, lean_object* v_hs_946_, lean_object* v_hl_947_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___redArg(v_range_943_, v_b_944_, v_i_945_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2___boxed(lean_object* v_range_949_, lean_object* v_b_950_, lean_object* v_i_951_, lean_object* v_hs_952_, lean_object* v_hl_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__2(v_range_949_, v_b_950_, v_i_951_, v_hs_952_, v_hl_953_);
lean_dec_ref(v_b_950_);
lean_dec_ref(v_range_949_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3(lean_object* v___x_955_, lean_object* v_range_956_, lean_object* v_b_957_, lean_object* v_i_958_, lean_object* v_hs_959_, lean_object* v_hl_960_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___redArg(v___x_955_, v_range_956_, v_b_957_, v_i_958_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3___boxed(lean_object* v___x_962_, lean_object* v_range_963_, lean_object* v_b_964_, lean_object* v_i_965_, lean_object* v_hs_966_, lean_object* v_hl_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__3(v___x_962_, v_range_963_, v_b_964_, v_i_965_, v_hs_966_, v_hl_967_);
lean_dec(v_b_964_);
lean_dec_ref(v_range_963_);
lean_dec_ref(v___x_962_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4(lean_object* v___x_969_, lean_object* v___x_970_, lean_object* v_range_971_, lean_object* v_b_972_, lean_object* v_i_973_, lean_object* v_hs_974_, lean_object* v_hl_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___redArg(v___x_969_, v___x_970_, v_range_971_, v_b_972_, v_i_973_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4___boxed(lean_object* v___x_977_, lean_object* v___x_978_, lean_object* v_range_979_, lean_object* v_b_980_, lean_object* v_i_981_, lean_object* v_hs_982_, lean_object* v_hl_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts_spec__4(v___x_977_, v___x_978_, v_range_979_, v_b_980_, v_i_981_, v_hs_982_, v_hl_983_);
lean_dec_ref(v_range_979_);
lean_dec(v___x_978_);
lean_dec_ref(v___x_977_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(lean_object* v_body_985_){
_start:
{
lean_object* v_name_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v_name_986_ = l_Lean_Name_demangle(v_body_985_);
v___x_987_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_nameToNameParts(v_name_986_);
lean_dec(v_name_986_);
v___x_988_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_postprocessNameParts(v___x_987_);
lean_dec_ref(v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody___boxed(lean_object* v_body_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_body_989_);
lean_dec_ref(v_body_989_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___lam__0(lean_object* v___x_991_, lean_object* v_00___992_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
v___x_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
return v___x_994_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_998_ = lean_box(0);
v___x_999_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0));
v___x_1000_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___lam__0(v___x_999_, v___x_998_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(lean_object* v_s_1001_, lean_object* v___x_1002_, lean_object* v_a_1003_, lean_object* v_b_1004_){
_start:
{
uint8_t v_decide_1005_; 
v_decide_1005_ = lean_nat_dec_eq(v_a_1003_, v___x_1002_);
if (v_decide_1005_ == 0)
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___y_1011_; uint32_t v___x_1017_; uint32_t v___x_1018_; uint8_t v___x_1019_; 
lean_dec_ref(v_b_1004_);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_box(0);
v___x_1008_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0));
v___x_1009_ = lean_string_utf8_next_fast(v_s_1001_, v_a_1003_);
v___x_1017_ = lean_string_utf8_get_fast(v_s_1001_, v_a_1003_);
v___x_1018_ = 95;
v___x_1019_ = lean_uint32_dec_eq(v___x_1017_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_dec(v_a_1003_);
v_a_1003_ = v___x_1009_;
v_b_1004_ = v___x_1008_;
goto _start;
}
else
{
lean_object* v___x_1021_; uint8_t v_decide_1022_; 
v___x_1021_ = lean_unsigned_to_nat(0u);
v_decide_1022_ = lean_nat_dec_eq(v_a_1003_, v___x_1021_);
if (v_decide_1022_ == 0)
{
lean_object* v___x_1025_; uint8_t v_decide_1026_; 
v___x_1025_ = lean_string_utf8_byte_size(v_s_1001_);
v_decide_1026_ = lean_nat_dec_eq(v___x_1009_, v___x_1025_);
if (v_decide_1026_ == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = lean_string_utf8_extract_fast(v_s_1001_, v___x_1021_, v_a_1003_);
lean_dec(v_a_1003_);
v___x_1028_ = l_Lean_Name_demangle_x3f(v___x_1027_);
if (lean_obj_tag(v___x_1028_) == 1)
{
lean_object* v_val_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1048_; 
v_val_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1048_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_val_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1048_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
if (lean_obj_tag(v_val_1029_) == 1)
{
lean_object* v_pre_1033_; 
v_pre_1033_ = lean_ctor_get(v_val_1029_, 0);
lean_inc(v_pre_1033_);
lean_dec_ref_known(v_val_1029_, 2);
if (lean_obj_tag(v_pre_1033_) == 0)
{
lean_object* v___x_1034_; lean_object* v___y_1036_; lean_object* v___x_1044_; 
v___x_1034_ = lean_string_utf8_extract_fast(v_s_1001_, v___x_1009_, v___x_1025_);
v___x_1044_ = l_Lean_Name_demangle_x3f(v___x_1034_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_dec_ref(v___x_1034_);
lean_del_object(v___x_1031_);
lean_dec_ref(v___x_1027_);
goto v___jp_1023_;
}
else
{
lean_object* v___x_1045_; 
lean_dec_ref_known(v___x_1044_, 1);
v___x_1045_ = l_Lean_Name_demangle(v___x_1027_);
if (lean_obj_tag(v___x_1045_) == 1)
{
lean_object* v_pre_1046_; 
v_pre_1046_ = lean_ctor_get(v___x_1045_, 0);
if (lean_obj_tag(v_pre_1046_) == 0)
{
lean_object* v_str_1047_; 
lean_dec_ref(v___x_1027_);
v_str_1047_ = lean_ctor_get(v___x_1045_, 1);
lean_inc_ref(v_str_1047_);
lean_dec_ref_known(v___x_1045_, 2);
v___y_1036_ = v_str_1047_;
goto v___jp_1035_;
}
else
{
lean_dec_ref_known(v___x_1045_, 2);
v___y_1036_ = v___x_1027_;
goto v___jp_1035_;
}
}
else
{
lean_dec(v___x_1045_);
v___y_1036_ = v___x_1027_;
goto v___jp_1035_;
}
}
v___jp_1035_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1037_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v___x_1034_);
lean_dec_ref(v___x_1034_);
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v___y_1036_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1038_);
v___x_1040_ = v___x_1031_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1038_);
v___x_1040_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1007_);
v___x_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
return v___x_1042_;
}
}
}
else
{
lean_dec(v_pre_1033_);
lean_del_object(v___x_1031_);
lean_dec_ref(v___x_1027_);
goto v___jp_1023_;
}
}
else
{
lean_del_object(v___x_1031_);
lean_dec(v_val_1029_);
lean_dec_ref(v___x_1027_);
goto v___jp_1023_;
}
}
}
else
{
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
goto v___jp_1023_;
}
}
else
{
lean_object* v___x_1049_; 
lean_dec(v_a_1003_);
v___x_1049_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1);
v___y_1011_ = v___x_1049_;
goto v___jp_1010_;
}
v___jp_1023_:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__1);
v___y_1011_ = v___x_1024_;
goto v___jp_1010_;
}
}
else
{
lean_dec(v_a_1003_);
v_a_1003_ = v___x_1009_;
v_b_1004_ = v___x_1008_;
goto _start;
}
}
v___jp_1010_:
{
if (lean_obj_tag(v___y_1011_) == 0)
{
return v___x_1006_;
}
else
{
lean_object* v_val_1012_; 
v_val_1012_ = lean_ctor_get(v___y_1011_, 0);
if (lean_obj_tag(v_val_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; 
v_a_1013_ = lean_ctor_get(v_val_1012_, 0);
lean_inc(v_a_1013_);
v___x_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1014_, 0, v_a_1013_);
return v___x_1014_;
}
else
{
lean_object* v_a_1015_; 
v_a_1015_ = lean_ctor_get(v_val_1012_, 0);
lean_inc(v_a_1015_);
v_a_1003_ = v___x_1009_;
v_b_1004_ = v_a_1015_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1051_; 
lean_dec(v_a_1003_);
v___x_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1051_, 0, v_b_1004_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___boxed(lean_object* v_s_1052_, lean_object* v___x_1053_, lean_object* v_a_1054_, lean_object* v_b_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(v_s_1052_, v___x_1053_, v_a_1054_, v_b_1055_);
lean_dec(v___x_1053_);
lean_dec_ref(v_s_1052_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(lean_object* v_s_1057_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = lean_string_utf8_byte_size(v_s_1057_);
v___x_1060_ = lean_box(0);
v___x_1061_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg___closed__0));
v___x_1062_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(v_s_1057_, v___x_1059_, v___x_1058_, v___x_1061_);
if (lean_obj_tag(v___x_1062_) == 0)
{
return v___x_1060_;
}
else
{
lean_object* v_val_1063_; lean_object* v_fst_1064_; 
v_val_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_val_1063_);
lean_dec_ref_known(v___x_1062_, 1);
v_fst_1064_ = lean_ctor_get(v_val_1063_, 0);
lean_inc(v_fst_1064_);
lean_dec(v_val_1063_);
if (lean_obj_tag(v_fst_1064_) == 0)
{
return v___x_1060_;
}
else
{
return v_fst_1064_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg___boxed(lean_object* v_s_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_s_1065_);
lean_dec_ref(v_s_1065_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0(lean_object* v_s_1067_, lean_object* v___x_1068_, lean_object* v___x_1069_, lean_object* v_inst_1070_, lean_object* v_R_1071_, lean_object* v_a_1072_, lean_object* v_b_1073_, lean_object* v_c_1074_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___redArg(v_s_1067_, v___x_1068_, v_a_1072_, v_b_1073_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0___boxed(lean_object* v_s_1076_, lean_object* v___x_1077_, lean_object* v___x_1078_, lean_object* v_inst_1079_, lean_object* v_R_1080_, lean_object* v_a_1081_, lean_object* v_b_1082_, lean_object* v_c_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg_spec__0(v_s_1076_, v___x_1077_, v___x_1078_, v_inst_1079_, v_R_1080_, v_a_1081_, v_b_1082_, v_c_1083_);
lean_dec_ref(v___x_1078_);
lean_dec(v___x_1077_);
lean_dec_ref(v_s_1076_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(lean_object* v_s_1085_, lean_object* v___x_1086_, lean_object* v___x_1087_, lean_object* v_a_1088_, lean_object* v_b_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_box(0);
switch(lean_obj_tag(v_a_1088_))
{
case 0:
{
lean_object* v_pos_1091_; lean_object* v___x_1092_; 
v_pos_1091_ = lean_ctor_get(v_a_1088_, 0);
lean_inc(v_pos_1091_);
lean_dec_ref_known(v_a_1088_, 1);
v___x_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_pos_1091_);
return v___x_1092_;
}
case 1:
{
lean_object* v_pos_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1102_; 
v_pos_1093_ = lean_ctor_get(v_a_1088_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_a_1088_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1095_ = v_a_1088_;
v_isShared_1096_ = v_isSharedCheck_1102_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_pos_1093_);
lean_dec(v_a_1088_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1102_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1099_; 
v___x_1097_ = lean_string_utf8_next_fast(v_s_1085_, v_pos_1093_);
lean_dec(v_pos_1093_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set_tag(v___x_1095_, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1097_);
v___x_1099_ = v___x_1095_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
v_a_1088_ = v___x_1099_;
v_b_1089_ = v___x_1090_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_1103_; lean_object* v_table_1104_; lean_object* v_stackPos_1105_; lean_object* v_needlePos_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1159_; 
v_needle_1103_ = lean_ctor_get(v_a_1088_, 0);
v_table_1104_ = lean_ctor_get(v_a_1088_, 1);
v_stackPos_1105_ = lean_ctor_get(v_a_1088_, 2);
v_needlePos_1106_ = lean_ctor_get(v_a_1088_, 3);
v_isSharedCheck_1159_ = !lean_is_exclusive(v_a_1088_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1108_ = v_a_1088_;
v_isShared_1109_ = v_isSharedCheck_1159_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_needlePos_1106_);
lean_inc(v_stackPos_1105_);
lean_inc(v_table_1104_);
lean_inc(v_needle_1103_);
lean_dec(v_a_1088_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1159_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_str_1110_; lean_object* v_startInclusive_1111_; lean_object* v_endExclusive_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v_str_1110_ = lean_ctor_get(v_needle_1103_, 0);
v_startInclusive_1111_ = lean_ctor_get(v_needle_1103_, 1);
v_endExclusive_1112_ = lean_ctor_get(v_needle_1103_, 2);
v___x_1113_ = lean_nat_sub(v_stackPos_1105_, v_needlePos_1106_);
v___x_1114_ = lean_nat_sub(v_endExclusive_1112_, v_startInclusive_1111_);
v___x_1115_ = lean_nat_add(v___x_1113_, v___x_1114_);
v___x_1116_ = lean_nat_dec_le(v___x_1115_, v___x_1087_);
lean_dec(v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; uint8_t v___x_1119_; 
lean_dec(v___x_1114_);
lean_del_object(v___x_1108_);
lean_dec(v_needlePos_1106_);
lean_dec(v_stackPos_1105_);
lean_dec_ref(v_table_1104_);
lean_dec_ref(v_needle_1103_);
v___x_1117_ = lean_unsigned_to_nat(1u);
v___x_1118_ = lean_nat_add(v___x_1113_, v___x_1117_);
lean_dec(v___x_1113_);
v___x_1119_ = lean_nat_dec_le(v___x_1118_, v___x_1087_);
lean_dec(v___x_1118_);
if (v___x_1119_ == 0)
{
lean_inc(v_b_1089_);
return v_b_1089_;
}
else
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_box(3);
v_a_1088_ = v___x_1120_;
v_b_1089_ = v___x_1090_;
goto _start;
}
}
else
{
uint8_t v_stackByte_1122_; lean_object* v___x_1123_; uint8_t v_patByte_1124_; uint8_t v___x_1125_; 
lean_dec(v___x_1113_);
lean_inc(v_stackPos_1105_);
v_stackByte_1122_ = lean_string_get_byte_fast(v_s_1085_, v_stackPos_1105_);
v___x_1123_ = lean_nat_add(v_startInclusive_1111_, v_needlePos_1106_);
v_patByte_1124_ = lean_string_get_byte_fast(v_str_1110_, v___x_1123_);
v___x_1125_ = lean_uint8_dec_eq(v_stackByte_1122_, v_patByte_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; uint8_t v_decide_1127_; 
lean_dec(v___x_1114_);
v___x_1126_ = lean_unsigned_to_nat(0u);
v_decide_1127_ = lean_nat_dec_eq(v_needlePos_1106_, v___x_1126_);
if (v_decide_1127_ == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v_newNeedlePos_1130_; uint8_t v___x_1131_; 
v___x_1128_ = lean_unsigned_to_nat(1u);
v___x_1129_ = lean_nat_sub(v_needlePos_1106_, v___x_1128_);
lean_dec(v_needlePos_1106_);
v_newNeedlePos_1130_ = lean_array_fget_borrowed(v_table_1104_, v___x_1129_);
lean_dec(v___x_1129_);
v___x_1131_ = lean_nat_dec_eq(v_newNeedlePos_1130_, v___x_1126_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1133_; 
lean_inc(v_newNeedlePos_1130_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 3, v_newNeedlePos_1130_);
v___x_1133_ = v___x_1108_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_needle_1103_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_table_1104_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_stackPos_1105_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v_newNeedlePos_1130_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
v_a_1088_ = v___x_1133_;
v_b_1089_ = v___x_1090_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_1136_; lean_object* v___x_1138_; 
v_nextStackPos_1136_ = l_String_Slice_posGE___redArg(v___x_1086_, v_stackPos_1105_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 3, v___x_1126_);
lean_ctor_set(v___x_1108_, 2, v_nextStackPos_1136_);
v___x_1138_ = v___x_1108_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_needle_1103_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_table_1104_);
lean_ctor_set(v_reuseFailAlloc_1140_, 2, v_nextStackPos_1136_);
lean_ctor_set(v_reuseFailAlloc_1140_, 3, v___x_1126_);
v___x_1138_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
v_a_1088_ = v___x_1138_;
v_b_1089_ = v___x_1090_;
goto _start;
}
}
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v_nextStackPos_1143_; lean_object* v___x_1145_; 
lean_dec(v_needlePos_1106_);
v___x_1141_ = lean_unsigned_to_nat(1u);
v___x_1142_ = lean_nat_add(v_stackPos_1105_, v___x_1141_);
lean_dec(v_stackPos_1105_);
v_nextStackPos_1143_ = l_String_Slice_posGE___redArg(v___x_1086_, v___x_1142_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 3, v___x_1126_);
lean_ctor_set(v___x_1108_, 2, v_nextStackPos_1143_);
v___x_1145_ = v___x_1108_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_needle_1103_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_table_1104_);
lean_ctor_set(v_reuseFailAlloc_1147_, 2, v_nextStackPos_1143_);
lean_ctor_set(v_reuseFailAlloc_1147_, 3, v___x_1126_);
v___x_1145_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
v_a_1088_ = v___x_1145_;
v_b_1089_ = v___x_1090_;
goto _start;
}
}
}
else
{
lean_object* v___x_1148_; lean_object* v_nextStackPos_1149_; lean_object* v_nextNeedlePos_1150_; uint8_t v_decide_1151_; 
v___x_1148_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1149_ = lean_nat_add(v_stackPos_1105_, v___x_1148_);
lean_dec(v_stackPos_1105_);
v_nextNeedlePos_1150_ = lean_nat_add(v_needlePos_1106_, v___x_1148_);
lean_dec(v_needlePos_1106_);
v_decide_1151_ = lean_nat_dec_eq(v_nextNeedlePos_1150_, v___x_1114_);
lean_dec(v___x_1114_);
if (v_decide_1151_ == 0)
{
lean_object* v___x_1153_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 3, v_nextNeedlePos_1150_);
lean_ctor_set(v___x_1108_, 2, v_nextStackPos_1149_);
v___x_1153_ = v___x_1108_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_needle_1103_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_table_1104_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v_nextStackPos_1149_);
lean_ctor_set(v_reuseFailAlloc_1155_, 3, v_nextNeedlePos_1150_);
v___x_1153_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
v_a_1088_ = v___x_1153_;
goto _start;
}
}
else
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
lean_del_object(v___x_1108_);
lean_dec_ref(v_table_1104_);
lean_dec_ref(v_needle_1103_);
v___x_1156_ = lean_nat_sub(v_nextStackPos_1149_, v_nextNeedlePos_1150_);
lean_dec(v_nextNeedlePos_1150_);
lean_dec(v_nextStackPos_1149_);
v___x_1157_ = l_String_Slice_pos_x21(v___x_1086_, v___x_1156_);
lean_dec(v___x_1156_);
v___x_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
}
}
default: 
{
lean_inc(v_b_1089_);
return v_b_1089_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg___boxed(lean_object* v_s_1160_, lean_object* v___x_1161_, lean_object* v___x_1162_, lean_object* v_a_1163_, lean_object* v_b_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_s_1160_, v___x_1161_, v___x_1162_, v_a_1163_, v_b_1164_);
lean_dec(v_b_1164_);
lean_dec(v___x_1162_);
lean_dec_ref(v___x_1161_);
lean_dec_ref(v_s_1160_);
return v_res_1165_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1));
v___x_1172_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1171_);
return v___x_1172_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1173_ = lean_unsigned_to_nat(0u);
v___x_1174_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__2);
v___x_1175_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__1));
v___x_1176_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1174_);
lean_ctor_set(v___x_1176_, 2, v___x_1173_);
lean_ctor_set(v___x_1176_, 3, v___x_1173_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix(lean_object* v_s_1177_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = lean_string_utf8_byte_size(v_s_1177_);
lean_inc_ref(v_s_1177_);
v___x_1180_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1180_, 0, v_s_1177_);
lean_ctor_set(v___x_1180_, 1, v___x_1178_);
lean_ctor_set(v___x_1180_, 2, v___x_1179_);
v___x_1181_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix___closed__3);
v___x_1182_ = lean_box(0);
v___x_1183_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_s_1177_, v___x_1180_, v___x_1179_, v___x_1181_, v___x_1182_);
lean_dec_ref_known(v___x_1180_, 3);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v_s_1177_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
return v___x_1185_;
}
else
{
lean_object* v_val_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_val_1186_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_val_1186_);
lean_dec_ref_known(v___x_1183_, 1);
v___x_1187_ = lean_string_utf8_extract_fast(v_s_1177_, v___x_1178_, v_val_1186_);
v___x_1188_ = lean_string_utf8_extract_fast(v_s_1177_, v_val_1186_, v___x_1179_);
lean_dec(v_val_1186_);
lean_dec_ref(v_s_1177_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
return v___x_1189_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0(lean_object* v_s_1190_, lean_object* v___x_1191_, lean_object* v___x_1192_, lean_object* v_inst_1193_, lean_object* v_R_1194_, lean_object* v_a_1195_, lean_object* v_b_1196_, lean_object* v_c_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_s_1190_, v___x_1191_, v___x_1192_, v_a_1195_, v_b_1196_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___boxed(lean_object* v_s_1199_, lean_object* v___x_1200_, lean_object* v___x_1201_, lean_object* v_inst_1202_, lean_object* v_R_1203_, lean_object* v_a_1204_, lean_object* v_b_1205_, lean_object* v_c_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0(v_s_1199_, v___x_1200_, v___x_1201_, v_inst_1202_, v_R_1203_, v_a_1204_, v_b_1205_, v_c_1206_);
lean_dec(v_b_1205_);
lean_dec(v___x_1201_);
lean_dec_ref(v___x_1200_);
lean_dec_ref(v_s_1199_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore(lean_object* v_s_1219_){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__10));
lean_inc_ref(v_s_1219_);
v___x_1336_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1335_);
if (lean_obj_tag(v___x_1336_) == 1)
{
lean_object* v_val_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1350_; 
v_val_1337_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1339_ = v___x_1336_;
v_isShared_1340_ = v_isSharedCheck_1350_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_val_1337_);
lean_dec(v___x_1336_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1350_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1341_ = lean_string_utf8_byte_size(v_val_1337_);
v___x_1342_ = lean_unsigned_to_nat(0u);
v___x_1343_ = lean_nat_dec_eq(v___x_1341_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1348_; 
lean_dec_ref(v_s_1219_);
v___x_1344_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9));
v___x_1345_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1337_);
lean_dec(v_val_1337_);
v___x_1346_ = lean_string_append(v___x_1344_, v___x_1345_);
lean_dec_ref(v___x_1345_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v___x_1346_);
v___x_1348_ = v___x_1339_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
else
{
lean_del_object(v___x_1339_);
lean_dec(v_val_1337_);
goto v___jp_1313_;
}
}
}
else
{
lean_dec(v___x_1336_);
goto v___jp_1313_;
}
v___jp_1220_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__0));
v___x_1222_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1221_);
if (lean_obj_tag(v___x_1222_) == 1)
{
lean_object* v_val_1223_; lean_object* v___x_1224_; 
v_val_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_val_1223_);
lean_dec_ref_known(v___x_1222_, 1);
v___x_1224_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_val_1223_);
lean_dec(v_val_1223_);
if (lean_obj_tag(v___x_1224_) == 1)
{
lean_object* v_val_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1239_; 
v_val_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1239_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_val_1225_);
lean_dec(v___x_1224_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1239_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v_fst_1229_; lean_object* v_snd_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1237_; 
v_fst_1229_ = lean_ctor_get(v_val_1225_, 0);
lean_inc(v_fst_1229_);
v_snd_1230_ = lean_ctor_get(v_val_1225_, 1);
lean_inc(v_snd_1230_);
lean_dec(v_val_1225_);
v___x_1231_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1));
v___x_1232_ = lean_string_append(v_fst_1229_, v___x_1231_);
v___x_1233_ = lean_string_append(v___x_1232_, v_snd_1230_);
lean_dec(v_snd_1230_);
v___x_1234_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2));
v___x_1235_ = lean_string_append(v___x_1233_, v___x_1234_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___x_1235_);
v___x_1237_ = v___x_1227_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v___x_1240_; 
lean_dec(v___x_1224_);
v___x_1240_ = lean_box(0);
return v___x_1240_;
}
}
else
{
lean_object* v___x_1241_; 
lean_dec(v___x_1222_);
v___x_1241_ = lean_box(0);
return v___x_1241_;
}
}
v___jp_1242_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__3));
lean_inc_ref(v_s_1219_);
v___x_1244_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1243_);
if (lean_obj_tag(v___x_1244_) == 1)
{
lean_object* v_val_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1256_; 
v_val_1245_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1247_ = v___x_1244_;
v_isShared_1248_ = v_isSharedCheck_1256_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_val_1245_);
lean_dec(v___x_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1256_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v___x_1249_ = lean_string_utf8_byte_size(v_val_1245_);
v___x_1250_ = lean_unsigned_to_nat(0u);
v___x_1251_ = lean_nat_dec_eq(v___x_1249_, v___x_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
lean_dec_ref(v_s_1219_);
v___x_1252_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1245_);
lean_dec(v_val_1245_);
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___x_1252_);
v___x_1254_ = v___x_1247_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
else
{
lean_del_object(v___x_1247_);
lean_dec(v_val_1245_);
goto v___jp_1220_;
}
}
}
else
{
lean_dec(v___x_1244_);
goto v___jp_1220_;
}
}
v___jp_1257_:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1258_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__4));
lean_inc_ref(v_s_1219_);
v___x_1259_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1258_);
if (lean_obj_tag(v___x_1259_) == 1)
{
lean_object* v_val_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1273_; 
v_val_1260_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1262_ = v___x_1259_;
v_isShared_1263_ = v_isSharedCheck_1273_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_val_1260_);
lean_dec(v___x_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1273_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v___x_1264_ = lean_string_utf8_byte_size(v_val_1260_);
v___x_1265_ = lean_unsigned_to_nat(0u);
v___x_1266_ = lean_nat_dec_eq(v___x_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1271_; 
lean_dec_ref(v_s_1219_);
v___x_1267_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5));
v___x_1268_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1260_);
lean_dec(v_val_1260_);
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
lean_dec_ref(v___x_1268_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 0, v___x_1269_);
v___x_1271_ = v___x_1262_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
else
{
lean_del_object(v___x_1262_);
lean_dec(v_val_1260_);
goto v___jp_1242_;
}
}
}
else
{
lean_dec(v___x_1259_);
goto v___jp_1242_;
}
}
v___jp_1274_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__6));
lean_inc_ref(v_s_1219_);
v___x_1276_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1275_);
if (lean_obj_tag(v___x_1276_) == 1)
{
lean_object* v_val_1277_; lean_object* v___x_1278_; 
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_val_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1278_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_val_1277_);
lean_dec(v_val_1277_);
if (lean_obj_tag(v___x_1278_) == 1)
{
lean_object* v_val_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v_s_1219_);
v_val_1279_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1281_ = v___x_1278_;
v_isShared_1282_ = v_isSharedCheck_1295_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_val_1279_);
lean_dec(v___x_1278_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1295_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v_fst_1283_; lean_object* v_snd_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v_fst_1283_ = lean_ctor_get(v_val_1279_, 0);
lean_inc(v_fst_1283_);
v_snd_1284_ = lean_ctor_get(v_val_1279_, 1);
lean_inc(v_snd_1284_);
lean_dec(v_val_1279_);
v___x_1285_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5));
v___x_1286_ = lean_string_append(v___x_1285_, v_fst_1283_);
lean_dec(v_fst_1283_);
v___x_1287_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1));
v___x_1288_ = lean_string_append(v___x_1286_, v___x_1287_);
v___x_1289_ = lean_string_append(v___x_1288_, v_snd_1284_);
lean_dec(v_snd_1284_);
v___x_1290_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2));
v___x_1291_ = lean_string_append(v___x_1289_, v___x_1290_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1291_);
v___x_1293_ = v___x_1281_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
else
{
lean_dec(v___x_1278_);
goto v___jp_1257_;
}
}
else
{
lean_dec(v___x_1276_);
goto v___jp_1257_;
}
}
v___jp_1296_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__7));
lean_inc_ref(v_s_1219_);
v___x_1298_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1297_);
if (lean_obj_tag(v___x_1298_) == 1)
{
lean_object* v_val_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1312_; 
v_val_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1312_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_val_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1312_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1303_ = lean_string_utf8_byte_size(v_val_1299_);
v___x_1304_ = lean_unsigned_to_nat(0u);
v___x_1305_ = lean_nat_dec_eq(v___x_1303_, v___x_1304_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1310_; 
lean_dec_ref(v_s_1219_);
v___x_1306_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__5));
v___x_1307_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleBody(v_val_1299_);
lean_dec(v_val_1299_);
v___x_1308_ = lean_string_append(v___x_1306_, v___x_1307_);
lean_dec_ref(v___x_1307_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1308_);
v___x_1310_ = v___x_1301_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
else
{
lean_del_object(v___x_1301_);
lean_dec(v_val_1299_);
goto v___jp_1274_;
}
}
}
else
{
lean_dec(v___x_1298_);
goto v___jp_1274_;
}
}
v___jp_1313_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__8));
lean_inc_ref(v_s_1219_);
v___x_1315_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_s_1219_, v___x_1314_);
if (lean_obj_tag(v___x_1315_) == 1)
{
lean_object* v_val_1316_; lean_object* v___x_1317_; 
v_val_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_val_1316_);
lean_dec_ref_known(v___x_1315_, 1);
v___x_1317_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleWithPkg(v_val_1316_);
lean_dec(v_val_1316_);
if (lean_obj_tag(v___x_1317_) == 1)
{
lean_object* v_val_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1334_; 
lean_dec_ref(v_s_1219_);
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1334_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_val_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1334_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v_fst_1322_; lean_object* v_snd_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1332_; 
v_fst_1322_ = lean_ctor_get(v_val_1318_, 0);
lean_inc(v_fst_1322_);
v_snd_1323_ = lean_ctor_get(v_val_1318_, 1);
lean_inc(v_snd_1323_);
lean_dec(v_val_1318_);
v___x_1324_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__9));
v___x_1325_ = lean_string_append(v___x_1324_, v_fst_1322_);
lean_dec(v_fst_1322_);
v___x_1326_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__1));
v___x_1327_ = lean_string_append(v___x_1325_, v___x_1326_);
v___x_1328_ = lean_string_append(v___x_1327_, v_snd_1323_);
lean_dec(v_snd_1323_);
v___x_1329_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore___closed__2));
v___x_1330_ = lean_string_append(v___x_1328_, v___x_1329_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1330_);
v___x_1332_ = v___x_1320_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
else
{
lean_dec(v___x_1317_);
goto v___jp_1296_;
}
}
else
{
lean_dec(v___x_1315_);
goto v___jp_1296_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleSymbol(lean_object* v_symbol_1360_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1361_ = lean_string_utf8_byte_size(v_symbol_1360_);
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = lean_nat_dec_eq(v___x_1361_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; lean_object* v_fst_1365_; lean_object* v_snd_1366_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1364_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix(v_symbol_1360_);
v_fst_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc_n(v_fst_1365_, 2);
v_snd_1366_ = lean_ctor_get(v___x_1364_, 1);
lean_inc(v_snd_1366_);
lean_dec_ref(v___x_1364_);
v___x_1391_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__5));
v___x_1392_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_dropPrefix_x3f(v_fst_1365_, v___x_1391_);
if (lean_obj_tag(v___x_1392_) == 1)
{
lean_object* v_val_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1413_; 
v_val_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1413_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_val_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1413_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
uint8_t v___x_1397_; 
lean_inc(v_val_1393_);
v___x_1397_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_isAllDigits(v_val_1393_);
if (v___x_1397_ == 0)
{
lean_del_object(v___x_1395_);
lean_dec(v_val_1393_);
goto v___jp_1367_;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v_r_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
lean_dec(v_fst_1365_);
v___x_1398_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__6));
v___x_1399_ = lean_string_append(v___x_1398_, v_val_1393_);
lean_dec(v_val_1393_);
v___x_1400_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__7));
v_r_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
v___x_1402_ = lean_string_utf8_byte_size(v_snd_1366_);
v___x_1403_ = lean_nat_dec_eq(v___x_1402_, v___x_1362_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1404_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__1));
v___x_1405_ = lean_string_append(v_r_1401_, v___x_1404_);
v___x_1406_ = lean_string_append(v___x_1405_, v_snd_1366_);
lean_dec(v_snd_1366_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1406_);
v___x_1408_ = v___x_1395_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
else
{
lean_object* v___x_1411_; 
lean_dec(v_snd_1366_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v_r_1401_);
v___x_1411_ = v___x_1395_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_r_1401_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
else
{
lean_dec(v___x_1392_);
goto v___jp_1367_;
}
v___jp_1367_:
{
lean_object* v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__0));
v___x_1369_ = lean_string_dec_eq(v_fst_1365_, v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; 
v___x_1370_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_demangleCore(v_fst_1365_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_dec(v_snd_1366_);
return v___x_1370_;
}
else
{
lean_object* v_val_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v_val_1371_ = lean_ctor_get(v___x_1370_, 0);
v___x_1372_ = lean_string_utf8_byte_size(v_snd_1366_);
v___x_1373_ = lean_nat_dec_eq(v___x_1372_, v___x_1362_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1383_; 
lean_inc(v_val_1371_);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1383_ == 0)
{
lean_object* v_unused_1384_; 
v_unused_1384_ = lean_ctor_get(v___x_1370_, 0);
lean_dec(v_unused_1384_);
v___x_1375_ = v___x_1370_;
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
else
{
lean_dec(v___x_1370_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1377_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__1));
v___x_1378_ = lean_string_append(v_val_1371_, v___x_1377_);
v___x_1379_ = lean_string_append(v___x_1378_, v_snd_1366_);
lean_dec(v_snd_1366_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1379_);
v___x_1381_ = v___x_1375_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
else
{
lean_dec(v_snd_1366_);
return v___x_1370_;
}
}
}
else
{
lean_object* v___x_1385_; uint8_t v___x_1386_; 
lean_dec(v_fst_1365_);
v___x_1385_ = lean_string_utf8_byte_size(v_snd_1366_);
v___x_1386_ = lean_nat_dec_eq(v___x_1385_, v___x_1362_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__2));
v___x_1388_ = lean_string_append(v___x_1387_, v_snd_1366_);
lean_dec(v_snd_1366_);
v___x_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; 
lean_dec(v_snd_1366_);
v___x_1390_ = ((lean_object*)(l_Lean_Name_Demangle_demangleSymbol___closed__4));
return v___x_1390_;
}
}
}
}
else
{
lean_object* v___x_1414_; 
lean_dec_ref(v_symbol_1360_);
v___x_1414_ = lean_box(0);
return v___x_1414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(lean_object* v_s_1415_, lean_object* v_pos_1416_, lean_object* v_pred_1417_){
_start:
{
lean_object* v___x_1418_; uint8_t v_decide_1419_; 
v___x_1418_ = lean_string_utf8_byte_size(v_s_1415_);
v_decide_1419_ = lean_nat_dec_eq(v_pos_1416_, v___x_1418_);
if (v_decide_1419_ == 0)
{
uint32_t v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1420_ = lean_string_utf8_get_fast(v_s_1415_, v_pos_1416_);
v___x_1421_ = lean_box_uint32(v___x_1420_);
lean_inc_ref(v_pred_1417_);
v___x_1422_ = lean_apply_1(v_pred_1417_, v___x_1421_);
v___x_1423_ = lean_unbox(v___x_1422_);
if (v___x_1423_ == 0)
{
lean_dec_ref(v_pred_1417_);
return v_pos_1416_;
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_string_utf8_next_fast(v_s_1415_, v_pos_1416_);
lean_dec(v_pos_1416_);
v_pos_1416_ = v___x_1424_;
goto _start;
}
}
else
{
lean_dec_ref(v_pred_1417_);
return v_pos_1416_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile___boxed(lean_object* v_s_1426_, lean_object* v_pos_1427_, lean_object* v_pred_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(v_s_1426_, v_pos_1427_, v_pred_1428_);
lean_dec_ref(v_s_1426_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(lean_object* v_s_1430_, lean_object* v_p_u2081_1431_, lean_object* v_p_u2082_1432_){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1433_ = lean_unsigned_to_nat(0u);
v___x_1434_ = lean_string_utf8_extract_fast(v_s_1430_, v___x_1433_, v_p_u2081_1431_);
v___x_1435_ = lean_string_utf8_extract_fast(v_s_1430_, v_p_u2081_1431_, v_p_u2082_1432_);
v___x_1436_ = lean_string_utf8_byte_size(v_s_1430_);
v___x_1437_ = lean_string_utf8_extract_fast(v_s_1430_, v_p_u2082_1432_, v___x_1436_);
v___x_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1435_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1434_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082___boxed(lean_object* v_s_1440_, lean_object* v_p_u2081_1441_, lean_object* v_p_u2082_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(v_s_1440_, v_p_u2081_1441_, v_p_u2082_1442_);
lean_dec(v_p_u2082_1442_);
lean_dec(v_p_u2081_1441_);
lean_dec_ref(v_s_1440_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(lean_object* v___x_1444_, lean_object* v___x_1445_, lean_object* v_line_1446_, lean_object* v_a_1447_, lean_object* v_b_1448_){
_start:
{
lean_object* v___x_1449_; uint8_t v_decide_1450_; 
v___x_1449_ = lean_nat_sub(v___x_1444_, v___x_1445_);
v_decide_1450_ = lean_nat_dec_eq(v_a_1447_, v___x_1449_);
lean_dec(v___x_1449_);
if (v_decide_1450_ == 0)
{
lean_object* v___x_1451_; uint32_t v___x_1452_; uint32_t v___x_1453_; uint8_t v___x_1454_; 
v___x_1451_ = lean_nat_add(v___x_1445_, v_a_1447_);
v___x_1452_ = lean_string_utf8_get_fast(v_line_1446_, v___x_1451_);
v___x_1453_ = 43;
v___x_1454_ = lean_uint32_dec_eq(v___x_1452_, v___x_1453_);
if (v___x_1454_ == 0)
{
uint32_t v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = 41;
v___x_1456_ = lean_uint32_dec_eq(v___x_1452_, v___x_1455_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
lean_dec(v_a_1447_);
v___x_1457_ = lean_box(0);
v___x_1458_ = lean_string_utf8_next_fast(v_line_1446_, v___x_1451_);
lean_dec(v___x_1451_);
v___x_1459_ = lean_nat_sub(v___x_1458_, v___x_1445_);
v_a_1447_ = v___x_1459_;
v_b_1448_ = v___x_1457_;
goto _start;
}
else
{
lean_object* v___x_1461_; 
lean_dec(v___x_1451_);
v___x_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_a_1447_);
return v___x_1461_;
}
}
else
{
lean_object* v___x_1462_; 
lean_dec(v___x_1451_);
v___x_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1462_, 0, v_a_1447_);
return v___x_1462_;
}
}
else
{
lean_dec(v_a_1447_);
lean_inc(v_b_1448_);
return v_b_1448_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg___boxed(lean_object* v___x_1463_, lean_object* v___x_1464_, lean_object* v_line_1465_, lean_object* v_a_1466_, lean_object* v_b_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(v___x_1463_, v___x_1464_, v_line_1465_, v_a_1466_, v_b_1467_);
lean_dec(v_b_1467_);
lean_dec_ref(v_line_1465_);
lean_dec(v___x_1464_);
lean_dec(v___x_1463_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(lean_object* v___x_1469_, lean_object* v_line_1470_, lean_object* v_a_1471_, lean_object* v_b_1472_){
_start:
{
uint8_t v_decide_1473_; 
v_decide_1473_ = lean_nat_dec_eq(v_a_1471_, v___x_1469_);
if (v_decide_1473_ == 0)
{
uint32_t v___x_1474_; uint32_t v___x_1475_; uint8_t v___x_1476_; 
v___x_1474_ = lean_string_utf8_get_fast(v_line_1470_, v_a_1471_);
v___x_1475_ = 40;
v___x_1476_ = lean_uint32_dec_eq(v___x_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_box(0);
v___x_1478_ = lean_string_utf8_next_fast(v_line_1470_, v_a_1471_);
lean_dec(v_a_1471_);
v_a_1471_ = v___x_1478_;
v_b_1472_ = v___x_1477_;
goto _start;
}
else
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1480_, 0, v_a_1471_);
return v___x_1480_;
}
}
else
{
lean_dec(v_a_1471_);
lean_inc(v_b_1472_);
return v_b_1472_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg___boxed(lean_object* v___x_1481_, lean_object* v_line_1482_, lean_object* v_a_1483_, lean_object* v_b_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(v___x_1481_, v_line_1482_, v_a_1483_, v_b_1484_);
lean_dec(v_b_1484_);
lean_dec_ref(v_line_1482_);
lean_dec(v___x_1481_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(lean_object* v_line_1486_){
_start:
{
lean_object* v_searcher_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v_searcher_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = lean_string_utf8_byte_size(v_line_1486_);
v___x_1489_ = lean_box(0);
v___x_1490_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(v___x_1488_, v_line_1486_, v_searcher_1487_, v___x_1489_);
if (lean_obj_tag(v___x_1490_) == 0)
{
return v___x_1489_;
}
else
{
lean_object* v_val_1491_; uint8_t v_decide_1492_; 
v_val_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_val_1491_);
lean_dec_ref_known(v___x_1490_, 1);
v_decide_1492_ = lean_nat_dec_eq(v_val_1491_, v___x_1488_);
if (v_decide_1492_ == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = lean_string_utf8_next_fast(v_line_1486_, v_val_1491_);
lean_dec(v_val_1491_);
v___x_1494_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(v___x_1488_, v___x_1493_, v_line_1486_, v_searcher_1487_, v___x_1489_);
if (lean_obj_tag(v___x_1494_) == 0)
{
return v___x_1489_;
}
else
{
lean_object* v_val_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1505_; 
v_val_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1505_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_val_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1505_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1499_; uint8_t v_decide_1500_; 
v___x_1499_ = lean_nat_add(v___x_1493_, v_val_1495_);
lean_dec(v_val_1495_);
v_decide_1500_ = lean_nat_dec_eq(v___x_1499_, v___x_1493_);
if (v_decide_1500_ == 0)
{
lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1501_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(v_line_1486_, v___x_1493_, v___x_1499_);
lean_dec(v___x_1499_);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v___x_1501_);
v___x_1503_ = v___x_1497_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
else
{
lean_dec(v___x_1499_);
lean_del_object(v___x_1497_);
return v___x_1489_;
}
}
}
}
else
{
lean_dec(v_val_1491_);
return v___x_1489_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux___boxed(lean_object* v_line_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(v_line_1506_);
lean_dec_ref(v_line_1506_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0(lean_object* v___x_1508_, lean_object* v___x_1509_, lean_object* v_line_1510_, lean_object* v_inst_1511_, lean_object* v_R_1512_, lean_object* v_a_1513_, lean_object* v_b_1514_, lean_object* v_c_1515_){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___redArg(v___x_1508_, v_line_1510_, v_a_1513_, v_b_1514_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0___boxed(lean_object* v___x_1517_, lean_object* v___x_1518_, lean_object* v_line_1519_, lean_object* v_inst_1520_, lean_object* v_R_1521_, lean_object* v_a_1522_, lean_object* v_b_1523_, lean_object* v_c_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__0(v___x_1517_, v___x_1518_, v_line_1519_, v_inst_1520_, v_R_1521_, v_a_1522_, v_b_1523_, v_c_1524_);
lean_dec(v_b_1523_);
lean_dec_ref(v_line_1519_);
lean_dec_ref(v___x_1518_);
lean_dec(v___x_1517_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1(lean_object* v___x_1526_, lean_object* v___x_1527_, lean_object* v___x_1528_, lean_object* v_line_1529_, lean_object* v_inst_1530_, lean_object* v_R_1531_, lean_object* v_a_1532_, lean_object* v_b_1533_, lean_object* v_c_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___redArg(v___x_1526_, v___x_1527_, v_line_1529_, v_a_1532_, v_b_1533_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1___boxed(lean_object* v___x_1536_, lean_object* v___x_1537_, lean_object* v___x_1538_, lean_object* v_line_1539_, lean_object* v_inst_1540_, lean_object* v_R_1541_, lean_object* v_a_1542_, lean_object* v_b_1543_, lean_object* v_c_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux_spec__1(v___x_1536_, v___x_1537_, v___x_1538_, v_line_1539_, v_inst_1540_, v_R_1541_, v_a_1542_, v_b_1543_, v_c_1544_);
lean_dec(v_b_1543_);
lean_dec_ref(v_line_1539_);
lean_dec_ref(v___x_1538_);
lean_dec(v___x_1537_);
lean_dec(v___x_1536_);
return v_res_1545_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0(uint32_t v_x_1546_){
_start:
{
uint32_t v___x_1557_; uint8_t v___x_1558_; 
v___x_1557_ = 48;
v___x_1558_ = lean_uint32_dec_le(v___x_1557_, v_x_1546_);
if (v___x_1558_ == 0)
{
goto v___jp_1552_;
}
else
{
uint32_t v___x_1559_; uint8_t v___x_1560_; 
v___x_1559_ = 57;
v___x_1560_ = lean_uint32_dec_le(v_x_1546_, v___x_1559_);
if (v___x_1560_ == 0)
{
goto v___jp_1552_;
}
else
{
return v___x_1560_;
}
}
v___jp_1547_:
{
uint32_t v___x_1548_; uint8_t v___x_1549_; 
v___x_1548_ = 65;
v___x_1549_ = lean_uint32_dec_le(v___x_1548_, v_x_1546_);
if (v___x_1549_ == 0)
{
return v___x_1549_;
}
else
{
uint32_t v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = 70;
v___x_1551_ = lean_uint32_dec_le(v_x_1546_, v___x_1550_);
return v___x_1551_;
}
}
v___jp_1552_:
{
uint32_t v___x_1553_; uint8_t v___x_1554_; 
v___x_1553_ = 97;
v___x_1554_ = lean_uint32_dec_le(v___x_1553_, v_x_1546_);
if (v___x_1554_ == 0)
{
goto v___jp_1547_;
}
else
{
uint32_t v___x_1555_; uint8_t v___x_1556_; 
v___x_1555_ = 102;
v___x_1556_ = lean_uint32_dec_le(v_x_1546_, v___x_1555_);
if (v___x_1556_ == 0)
{
goto v___jp_1547_;
}
else
{
return v___x_1556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0___boxed(lean_object* v_x_1561_){
_start:
{
uint32_t v_x_3033__boxed_1562_; uint8_t v_res_1563_; lean_object* v_r_1564_; 
v_x_3033__boxed_1562_ = lean_unbox_uint32(v_x_1561_);
lean_dec(v_x_1561_);
v_res_1563_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__0(v_x_3033__boxed_1562_);
v_r_1564_ = lean_box(v_res_1563_);
return v_r_1564_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1(uint32_t v_x_1565_){
_start:
{
uint32_t v___x_1566_; uint8_t v___x_1567_; 
v___x_1566_ = 32;
v___x_1567_ = lean_uint32_dec_eq(v_x_1565_, v___x_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1___boxed(lean_object* v_x_1568_){
_start:
{
uint32_t v_x_3064__boxed_1569_; uint8_t v_res_1570_; lean_object* v_r_1571_; 
v_x_3064__boxed_1569_ = lean_unbox_uint32(v_x_1568_);
lean_dec(v_x_1568_);
v_res_1570_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___lam__1(v_x_3064__boxed_1569_);
v_r_1571_ = lean_box(v_res_1570_);
return v_r_1571_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(lean_object* v___x_1572_, lean_object* v_line_1573_, lean_object* v___x_1574_, lean_object* v___x_1575_, lean_object* v_a_1576_, lean_object* v_b_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_box(0);
switch(lean_obj_tag(v_a_1576_))
{
case 0:
{
lean_object* v_pos_1579_; lean_object* v___x_1580_; 
v_pos_1579_ = lean_ctor_get(v_a_1576_, 0);
lean_inc(v_pos_1579_);
lean_dec_ref_known(v_a_1576_, 1);
v___x_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1580_, 0, v_pos_1579_);
return v___x_1580_;
}
case 1:
{
lean_object* v_pos_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1592_; 
v_pos_1581_ = lean_ctor_get(v_a_1576_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_a_1576_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1583_ = v_a_1576_;
v_isShared_1584_ = v_isSharedCheck_1592_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_pos_1581_);
lean_dec(v_a_1576_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1592_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1589_; 
v___x_1585_ = lean_nat_add(v___x_1572_, v_pos_1581_);
lean_dec(v_pos_1581_);
v___x_1586_ = lean_string_utf8_next_fast(v_line_1573_, v___x_1585_);
lean_dec(v___x_1585_);
v___x_1587_ = lean_nat_sub(v___x_1586_, v___x_1572_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1587_);
v___x_1589_ = v___x_1583_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1587_);
v___x_1589_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
v_a_1576_ = v___x_1589_;
v_b_1577_ = v___x_1578_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_1593_; lean_object* v_table_1594_; lean_object* v_stackPos_1595_; lean_object* v_needlePos_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1651_; 
v_needle_1593_ = lean_ctor_get(v_a_1576_, 0);
v_table_1594_ = lean_ctor_get(v_a_1576_, 1);
v_stackPos_1595_ = lean_ctor_get(v_a_1576_, 2);
v_needlePos_1596_ = lean_ctor_get(v_a_1576_, 3);
v_isSharedCheck_1651_ = !lean_is_exclusive(v_a_1576_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1598_ = v_a_1576_;
v_isShared_1599_ = v_isSharedCheck_1651_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_needlePos_1596_);
lean_inc(v_stackPos_1595_);
lean_inc(v_table_1594_);
lean_inc(v_needle_1593_);
lean_dec(v_a_1576_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1651_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v_str_1600_; lean_object* v_startInclusive_1601_; lean_object* v_endExclusive_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; uint8_t v___x_1607_; 
v_str_1600_ = lean_ctor_get(v_needle_1593_, 0);
v_startInclusive_1601_ = lean_ctor_get(v_needle_1593_, 1);
v_endExclusive_1602_ = lean_ctor_get(v_needle_1593_, 2);
v___x_1603_ = lean_nat_sub(v_stackPos_1595_, v_needlePos_1596_);
v___x_1604_ = lean_nat_sub(v_endExclusive_1602_, v_startInclusive_1601_);
v___x_1605_ = lean_nat_add(v___x_1603_, v___x_1604_);
v___x_1606_ = lean_nat_sub(v___x_1575_, v___x_1572_);
v___x_1607_ = lean_nat_dec_le(v___x_1605_, v___x_1606_);
lean_dec(v___x_1605_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; uint8_t v___x_1610_; 
lean_dec(v___x_1604_);
lean_del_object(v___x_1598_);
lean_dec(v_needlePos_1596_);
lean_dec(v_stackPos_1595_);
lean_dec_ref(v_table_1594_);
lean_dec_ref(v_needle_1593_);
v___x_1608_ = lean_unsigned_to_nat(1u);
v___x_1609_ = lean_nat_add(v___x_1603_, v___x_1608_);
lean_dec(v___x_1603_);
v___x_1610_ = lean_nat_dec_le(v___x_1609_, v___x_1606_);
lean_dec(v___x_1606_);
lean_dec(v___x_1609_);
if (v___x_1610_ == 0)
{
lean_inc(v_b_1577_);
return v_b_1577_;
}
else
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_box(3);
v_a_1576_ = v___x_1611_;
v_b_1577_ = v___x_1578_;
goto _start;
}
}
else
{
lean_object* v___x_1613_; uint8_t v_stackByte_1614_; lean_object* v___x_1615_; uint8_t v_patByte_1616_; uint8_t v___x_1617_; 
lean_dec(v___x_1606_);
lean_dec(v___x_1603_);
v___x_1613_ = lean_nat_add(v___x_1572_, v_stackPos_1595_);
v_stackByte_1614_ = lean_string_get_byte_fast(v_line_1573_, v___x_1613_);
v___x_1615_ = lean_nat_add(v_startInclusive_1601_, v_needlePos_1596_);
v_patByte_1616_ = lean_string_get_byte_fast(v_str_1600_, v___x_1615_);
v___x_1617_ = lean_uint8_dec_eq(v_stackByte_1614_, v_patByte_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; uint8_t v_decide_1619_; 
lean_dec(v___x_1604_);
v___x_1618_ = lean_unsigned_to_nat(0u);
v_decide_1619_ = lean_nat_dec_eq(v_needlePos_1596_, v___x_1618_);
if (v_decide_1619_ == 0)
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v_newNeedlePos_1622_; uint8_t v___x_1623_; 
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = lean_nat_sub(v_needlePos_1596_, v___x_1620_);
lean_dec(v_needlePos_1596_);
v_newNeedlePos_1622_ = lean_array_fget_borrowed(v_table_1594_, v___x_1621_);
lean_dec(v___x_1621_);
v___x_1623_ = lean_nat_dec_eq(v_newNeedlePos_1622_, v___x_1618_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1625_; 
lean_inc(v_newNeedlePos_1622_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 3, v_newNeedlePos_1622_);
v___x_1625_ = v___x_1598_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_needle_1593_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v_table_1594_);
lean_ctor_set(v_reuseFailAlloc_1627_, 2, v_stackPos_1595_);
lean_ctor_set(v_reuseFailAlloc_1627_, 3, v_newNeedlePos_1622_);
v___x_1625_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
v_a_1576_ = v___x_1625_;
v_b_1577_ = v___x_1578_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_1628_; lean_object* v___x_1630_; 
v_nextStackPos_1628_ = l_String_Slice_posGE___redArg(v___x_1574_, v_stackPos_1595_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 3, v___x_1618_);
lean_ctor_set(v___x_1598_, 2, v_nextStackPos_1628_);
v___x_1630_ = v___x_1598_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_needle_1593_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v_table_1594_);
lean_ctor_set(v_reuseFailAlloc_1632_, 2, v_nextStackPos_1628_);
lean_ctor_set(v_reuseFailAlloc_1632_, 3, v___x_1618_);
v___x_1630_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
v_a_1576_ = v___x_1630_;
v_b_1577_ = v___x_1578_;
goto _start;
}
}
}
else
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v_nextStackPos_1635_; lean_object* v___x_1637_; 
lean_dec(v_needlePos_1596_);
v___x_1633_ = lean_unsigned_to_nat(1u);
v___x_1634_ = lean_nat_add(v_stackPos_1595_, v___x_1633_);
lean_dec(v_stackPos_1595_);
v_nextStackPos_1635_ = l_String_Slice_posGE___redArg(v___x_1574_, v___x_1634_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 3, v___x_1618_);
lean_ctor_set(v___x_1598_, 2, v_nextStackPos_1635_);
v___x_1637_ = v___x_1598_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_needle_1593_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v_table_1594_);
lean_ctor_set(v_reuseFailAlloc_1639_, 2, v_nextStackPos_1635_);
lean_ctor_set(v_reuseFailAlloc_1639_, 3, v___x_1618_);
v___x_1637_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
v_a_1576_ = v___x_1637_;
v_b_1577_ = v___x_1578_;
goto _start;
}
}
}
else
{
lean_object* v___x_1640_; lean_object* v_nextStackPos_1641_; lean_object* v_nextNeedlePos_1642_; uint8_t v_decide_1643_; 
v___x_1640_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1641_ = lean_nat_add(v_stackPos_1595_, v___x_1640_);
lean_dec(v_stackPos_1595_);
v_nextNeedlePos_1642_ = lean_nat_add(v_needlePos_1596_, v___x_1640_);
lean_dec(v_needlePos_1596_);
v_decide_1643_ = lean_nat_dec_eq(v_nextNeedlePos_1642_, v___x_1604_);
lean_dec(v___x_1604_);
if (v_decide_1643_ == 0)
{
lean_object* v___x_1645_; 
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 3, v_nextNeedlePos_1642_);
lean_ctor_set(v___x_1598_, 2, v_nextStackPos_1641_);
v___x_1645_ = v___x_1598_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_needle_1593_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_table_1594_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v_nextStackPos_1641_);
lean_ctor_set(v_reuseFailAlloc_1647_, 3, v_nextNeedlePos_1642_);
v___x_1645_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
v_a_1576_ = v___x_1645_;
goto _start;
}
}
else
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_del_object(v___x_1598_);
lean_dec_ref(v_table_1594_);
lean_dec_ref(v_needle_1593_);
v___x_1648_ = lean_nat_sub(v_nextStackPos_1641_, v_nextNeedlePos_1642_);
lean_dec(v_nextNeedlePos_1642_);
lean_dec(v_nextStackPos_1641_);
v___x_1649_ = l_String_Slice_pos_x21(v___x_1574_, v___x_1648_);
lean_dec(v___x_1648_);
v___x_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
return v___x_1650_;
}
}
}
}
}
default: 
{
lean_inc(v_b_1577_);
return v_b_1577_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg___boxed(lean_object* v___x_1652_, lean_object* v_line_1653_, lean_object* v___x_1654_, lean_object* v___x_1655_, lean_object* v_a_1656_, lean_object* v_b_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(v___x_1652_, v_line_1653_, v___x_1654_, v___x_1655_, v_a_1656_, v_b_1657_);
lean_dec(v_b_1657_);
lean_dec(v___x_1655_);
lean_dec_ref(v___x_1654_);
lean_dec_ref(v_line_1653_);
lean_dec(v___x_1652_);
return v_res_1658_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1));
v___x_1665_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1664_);
return v___x_1665_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3(void){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__2);
v___x_1668_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__1));
v___x_1669_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
lean_ctor_set(v___x_1669_, 1, v___x_1667_);
lean_ctor_set(v___x_1669_, 2, v___x_1666_);
lean_ctor_set(v___x_1669_, 3, v___x_1666_);
return v___x_1669_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7));
v___x_1678_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1677_);
return v___x_1678_;
}
}
static lean_object* _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1679_ = lean_unsigned_to_nat(0u);
v___x_1680_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__8);
v___x_1681_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__7));
v___x_1682_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
lean_ctor_set(v___x_1682_, 1, v___x_1680_);
lean_ctor_set(v___x_1682_, 2, v___x_1679_);
lean_ctor_set(v___x_1682_, 3, v___x_1679_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS(lean_object* v_line_1683_){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1684_ = lean_unsigned_to_nat(0u);
v___x_1685_ = lean_string_utf8_byte_size(v_line_1683_);
lean_inc_ref(v_line_1683_);
v___x_1686_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1686_, 0, v_line_1683_);
lean_ctor_set(v___x_1686_, 1, v___x_1684_);
lean_ctor_set(v___x_1686_, 2, v___x_1685_);
v___x_1687_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__3);
v___x_1688_ = lean_box(0);
v___x_1689_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_stripColdSuffix_spec__0___redArg(v_line_1683_, v___x_1686_, v___x_1685_, v___x_1687_, v___x_1688_);
lean_dec_ref_known(v___x_1686_, 3);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_dec_ref(v_line_1683_);
return v___x_1688_;
}
else
{
lean_object* v_val_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1715_; 
v_val_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1715_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_val_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1715_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
uint8_t v_decide_1694_; 
v_decide_1694_ = lean_nat_dec_eq(v_val_1690_, v___x_1685_);
if (v_decide_1694_ == 0)
{
lean_object* v___x_1695_; uint8_t v_decide_1696_; 
v___x_1695_ = lean_string_utf8_next_fast(v_line_1683_, v_val_1690_);
lean_dec(v_val_1690_);
v_decide_1696_ = lean_nat_dec_eq(v___x_1695_, v___x_1685_);
if (v_decide_1696_ == 0)
{
lean_object* v___f_1697_; lean_object* v___f_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___y_1703_; uint8_t v_decide_1709_; 
v___f_1697_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__4));
v___f_1698_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__5));
v___x_1699_ = lean_string_utf8_next_fast(v_line_1683_, v___x_1695_);
v___x_1700_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(v_line_1683_, v___x_1699_, v___f_1697_);
v___x_1701_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_skipWhile(v_line_1683_, v___x_1700_, v___f_1698_);
v_decide_1709_ = lean_nat_dec_eq(v___x_1701_, v___x_1685_);
if (v_decide_1709_ == 0)
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
lean_inc(v___x_1701_);
lean_inc_ref(v_line_1683_);
v___x_1710_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1710_, 0, v_line_1683_);
lean_ctor_set(v___x_1710_, 1, v___x_1701_);
lean_ctor_set(v___x_1710_, 2, v___x_1685_);
v___x_1711_ = lean_obj_once(&l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9, &l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9_once, _init_l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS___closed__9);
v___x_1712_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(v___x_1701_, v_line_1683_, v___x_1710_, v___x_1685_, v___x_1711_, v___x_1688_);
lean_dec_ref_known(v___x_1710_, 3);
if (lean_obj_tag(v___x_1712_) == 0)
{
v___y_1703_ = v___x_1685_;
goto v___jp_1702_;
}
else
{
lean_object* v_val_1713_; lean_object* v___x_1714_; 
v_val_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_val_1713_);
lean_dec_ref_known(v___x_1712_, 1);
v___x_1714_ = lean_nat_add(v___x_1701_, v_val_1713_);
lean_dec(v_val_1713_);
v___y_1703_ = v___x_1714_;
goto v___jp_1702_;
}
}
else
{
lean_dec(v___x_1701_);
lean_del_object(v___x_1692_);
lean_dec_ref(v_line_1683_);
return v___x_1688_;
}
v___jp_1702_:
{
uint8_t v_decide_1704_; 
v_decide_1704_ = lean_nat_dec_eq(v___y_1703_, v___x_1701_);
if (v_decide_1704_ == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1707_; 
v___x_1705_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_splitAt_u2082(v_line_1683_, v___x_1701_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec(v___x_1701_);
lean_dec_ref(v_line_1683_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v___x_1705_);
v___x_1707_ = v___x_1692_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
else
{
lean_dec(v___y_1703_);
lean_dec(v___x_1701_);
lean_del_object(v___x_1692_);
lean_dec_ref(v_line_1683_);
return v___x_1688_;
}
}
}
else
{
lean_del_object(v___x_1692_);
lean_dec_ref(v_line_1683_);
return v___x_1688_;
}
}
else
{
lean_del_object(v___x_1692_);
lean_dec(v_val_1690_);
lean_dec_ref(v_line_1683_);
return v___x_1688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0(lean_object* v___x_1716_, lean_object* v_line_1717_, lean_object* v___x_1718_, lean_object* v___x_1719_, lean_object* v_inst_1720_, lean_object* v_R_1721_, lean_object* v_a_1722_, lean_object* v_b_1723_, lean_object* v_c_1724_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___redArg(v___x_1716_, v_line_1717_, v___x_1718_, v___x_1719_, v_a_1722_, v_b_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0___boxed(lean_object* v___x_1726_, lean_object* v_line_1727_, lean_object* v___x_1728_, lean_object* v___x_1729_, lean_object* v_inst_1730_, lean_object* v_R_1731_, lean_object* v_a_1732_, lean_object* v_b_1733_, lean_object* v_c_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS_spec__0(v___x_1726_, v_line_1727_, v___x_1728_, v___x_1729_, v_inst_1730_, v_R_1731_, v_a_1732_, v_b_1733_, v_c_1734_);
lean_dec(v_b_1733_);
lean_dec(v___x_1729_);
lean_dec_ref(v___x_1728_);
lean_dec_ref(v_line_1727_);
lean_dec(v___x_1726_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol(lean_object* v_line_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryLinux(v_line_1736_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v___x_1738_; 
v___x_1738_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol_tryMacOS(v_line_1736_);
return v___x_1738_;
}
else
{
lean_dec_ref(v_line_1736_);
return v___x_1737_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_Demangle_demangleBtLine(lean_object* v_line_1739_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_extractSymbol(v_line_1739_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_box(0);
return v___x_1741_;
}
else
{
lean_object* v_val_1742_; lean_object* v_snd_1743_; lean_object* v_fst_1744_; lean_object* v_fst_1745_; lean_object* v_snd_1746_; lean_object* v___x_1747_; 
v_val_1742_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_val_1742_);
lean_dec_ref_known(v___x_1740_, 1);
v_snd_1743_ = lean_ctor_get(v_val_1742_, 1);
lean_inc(v_snd_1743_);
v_fst_1744_ = lean_ctor_get(v_val_1742_, 0);
lean_inc(v_fst_1744_);
lean_dec(v_val_1742_);
v_fst_1745_ = lean_ctor_get(v_snd_1743_, 0);
lean_inc(v_fst_1745_);
v_snd_1746_ = lean_ctor_get(v_snd_1743_, 1);
lean_inc(v_snd_1746_);
lean_dec(v_snd_1743_);
v___x_1747_ = l_Lean_Name_Demangle_demangleSymbol(v_fst_1745_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_dec(v_snd_1746_);
lean_dec(v_fst_1744_);
return v___x_1747_;
}
else
{
lean_object* v_val_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1757_; 
v_val_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1757_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_val_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1757_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1755_; 
v___x_1752_ = lean_string_append(v_fst_1744_, v_val_1748_);
lean_dec(v_val_1748_);
v___x_1753_ = lean_string_append(v___x_1752_, v_snd_1746_);
lean_dec(v_snd_1746_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1753_);
v___x_1755_ = v___x_1750_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1753_);
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
}
}
LEAN_EXPORT lean_object* lean_demangle_bt_line_cstr(lean_object* v_line_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lean_Name_Demangle_demangleBtLine(v_line_1758_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v___x_1760_; 
v___x_1760_ = ((lean_object*)(l___private_Lean_Compiler_NameDemangling_0__Lean_Name_Demangle_formatNameParts___closed__0));
return v___x_1760_;
}
else
{
lean_object* v_val_1761_; 
v_val_1761_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_val_1761_);
lean_dec_ref_known(v___x_1759_, 1);
return v_val_1761_;
}
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_NameTrie(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NameMangling(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_NameDemangling(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_NameTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_NameDemangling(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* initialize_Lean_Data_NameTrie(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NameMangling(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_NameDemangling(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_NameTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NameDemangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_NameDemangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_NameDemangling(builtin);
}
#ifdef __cplusplus
}
#endif
