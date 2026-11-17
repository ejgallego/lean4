// Lean compiler output
// Module: Lean.Syntax
// Imports: public import Init.Data.Slice public import Init.Data.Hashable public import Lean.Data.Format public import Init.Data.Option.Coe public import Init.Data.String.Hashable import Init.Data.Range.Polymorphic.Iterators import Init.Data.ToString.Macro import Init.Omega import Init.Syntax
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Substring_Raw_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_SourceInfo_getTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getNumParts(lean_object*);
lean_object* l_Lean_Syntax_splitNameLit(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_instInhabitedRange_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instInhabitedRange_default___closed__0 = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instInhabitedRange_default = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instInhabitedRange = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Syntax_instReprRange_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__7;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "{ byteIdx := "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__18;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instReprRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instReprRange_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instReprRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instReprRange = (const lean_object*)&l_Lean_Syntax_instReprRange___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEqRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqRange_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEqRange = (const lean_object*)&l_Lean_Syntax_instBEqRange___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instHashableRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instHashableRange_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instHashableRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instHashableRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instHashableRange = (const lean_object*)&l_Lean_Syntax_instHashableRange___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_includes___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_overlaps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_updateTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_nonCanonicalSynthetic(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqSourceInfo__lean_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqSourceInfo__lean_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqSourceInfo__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqSourceInfo__lean_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqSourceInfo__lean___closed__0 = (const lean_object*)&l_Lean_instBEqSourceInfo__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqSourceInfo__lean = (const lean_object*)&l_Lean_instBEqSourceInfo__lean___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_isLitKind___closed__0 = (const lean_object*)&l_Lean_isLitKind___closed__0_value;
static const lean_ctor_object l_Lean_isLitKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_isLitKind___closed__1 = (const lean_object*)&l_Lean_isLitKind___closed__1_value;
static const lean_string_object l_Lean_isLitKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_isLitKind___closed__2 = (const lean_object*)&l_Lean_isLitKind___closed__2_value;
static const lean_ctor_object l_Lean_isLitKind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_isLitKind___closed__3 = (const lean_object*)&l_Lean_isLitKind___closed__3_value;
static const lean_string_object l_Lean_isLitKind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_isLitKind___closed__4 = (const lean_object*)&l_Lean_isLitKind___closed__4_value;
static const lean_ctor_object l_Lean_isLitKind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__4_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_isLitKind___closed__5 = (const lean_object*)&l_Lean_isLitKind___closed__5_value;
static const lean_string_object l_Lean_isLitKind___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_isLitKind___closed__6 = (const lean_object*)&l_Lean_isLitKind___closed__6_value;
static const lean_ctor_object l_Lean_isLitKind___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_isLitKind___closed__7 = (const lean_object*)&l_Lean_isLitKind___closed__7_value;
static const lean_string_object l_Lean_isLitKind___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_isLitKind___closed__8 = (const lean_object*)&l_Lean_isLitKind___closed__8_value;
static const lean_ctor_object l_Lean_isLitKind___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__8_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_isLitKind___closed__9 = (const lean_object*)&l_Lean_isLitKind___closed__9_value;
LEAN_EXPORT uint8_t l_Lean_isLitKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLitKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_modifyArgs(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_0),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_1),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reuse stopped:\n"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " !=\n"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfoAndTraceReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfoAndTraceReuse___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_getAtomVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Syntax_getAtomVal___closed__0 = (const lean_object*)&l_Lean_Syntax_getAtomVal___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setAtomVal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_asNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_asNode___closed__0 = (const lean_object*)&l_Lean_Syntax_asNode___closed__0_value;
static const lean_string_object l_Lean_Syntax_asNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Syntax_asNode___closed__1 = (const lean_object*)&l_Lean_Syntax_asNode___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_asNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_asNode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Syntax_asNode___closed__2 = (const lean_object*)&l_Lean_Syntax_asNode___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_asNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Syntax_asNode___closed__2_value),((lean_object*)&l_Lean_Syntax_asNode___closed__0_value)}};
static const lean_object* l_Lean_Syntax_asNode___closed__3 = (const lean_object*)&l_Lean_Syntax_asNode___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasIdent(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasIdent___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__0 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__0_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__1 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__1_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__2 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__2_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__3 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__3_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__4 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__4_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__5 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__5_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__6 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__0_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__1_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__7 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__7_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__7_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__2_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__3_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__4_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__5_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__8 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__8_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__6_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__9 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2_value;
static const lean_string_object l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1_value;
static const lean_string_object l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eraseQuoteMacroScopes(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateLeadingAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_updateLeading(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_updateTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_getAtomVal___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___lam__0(lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_identComponents_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__0_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Syntax"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__1_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Syntax.identComponents\?"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__2 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__2_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__3 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Syntax_identComponents_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_identComponents_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_identComponents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Syntax.identComponents"};
static const lean_object* l_Lean_Syntax_identComponents___closed__0 = (const lean_object*)&l_Lean_Syntax_identComponents___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_identComponents___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_identComponents___closed__1;
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_reprint(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasMissing(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasMissing___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_Traverser_fromSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_Traverser_fromSyntax___closed__0 = (const lean_object*)&l_Lean_Syntax_Traverser_fromSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_setCur(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_down(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_up(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_right(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkListNode(lean_object*);
static const lean_string_object l_Lean_Syntax_isQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Syntax_isQuot___closed__0 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__0_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dynamicQuot"};
static const lean_object* l_Lean_Syntax_isQuot___closed__1 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__1_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Syntax_isQuot___closed__2 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__2_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Syntax_isQuot___closed__3 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__3_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Syntax_isQuot___closed__4 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isQuot___boxed(lean_object*);
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_0),((lean_object*)&l_Lean_Syntax_isQuot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_1),((lean_object*)&l_Lean_Syntax_isQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_2),((lean_object*)&l_Lean_Syntax_isQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 123, 139, 164, 173, 191, 116, 242)}};
static const lean_object* l_Lean_Syntax_getQuotContent___closed__0 = (const lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getQuotContent(lean_object*);
static const lean_string_object l_Lean_Syntax_isAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Syntax_isAntiquot___closed__0 = (const lean_object*)&l_Lean_Syntax_isAntiquot___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquots(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquots___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object*);
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__1;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 12, 45, 178, 67, 53, 106)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__2 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__3;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pseudo"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__4 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 255, 48, 87, 29, 98, 48, 237)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__5 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__5_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__6 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__7 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__7_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__8 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__8_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__9;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__10;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__11 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__11_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_0),((lean_object*)&l_Lean_Syntax_isQuot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_1),((lean_object*)&l_Lean_Syntax_isQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_2),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__11_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__12 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "antiquotNestedExpr"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__13 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__13_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__13_value),LEAN_SCALAR_PTR_LITERAL(4, 217, 111, 200, 191, 162, 168, 125)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__14 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__14_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__15 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__15_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__16;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__17 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__17_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__18;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__19;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isEscapedAntiquot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_unescapeAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKinds(lean_object*);
static const lean_string_object l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "antiquot_scope"};
static const lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSplice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "antiquot_splice"};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 54, 194, 194, 68, 126, 190, 193)}};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__1 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__1_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__2 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__3;
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__4 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__4_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__5;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSpliceNode(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "antiquot_suffix_splice"};
static const lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSuffixSplice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner___boxed(lean_object*);
static const lean_ctor_object l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 22, 214, 220, 194, 127, 23, 217)}};
static const lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_isTokenAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "token_antiquot"};
static const lean_object* l_Lean_Syntax_isTokenAntiquot___closed__0 = (const lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isTokenAntiquot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 159, 231, 44, 235, 156, 55, 135)}};
static const lean_object* l_Lean_Syntax_isTokenAntiquot___closed__1 = (const lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isTokenAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAnyAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAnyAntiquot___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_findStack_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Syntax_Stack_matches_spec__0___boxed(lean_object*);
static const lean_array_object l_Lean_Syntax_Stack_matches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_Stack_matches___closed__0 = (const lean_object*)&l_Lean_Syntax_Stack_matches___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Syntax_instReprRange_repr_spec__0(lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_nat_to_int(v_a_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(9u);
v___x_21_ = lean_nat_to_int(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(8u);
v___x_35_ = lean_nat_to_int(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__0));
v___x_37_ = lean_string_length(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__17, &l_Lean_Syntax_instReprRange_repr___redArg___closed__17_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__17);
v___x_39_ = lean_nat_to_int(v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___redArg(lean_object* v_x_42_){
_start:
{
lean_object* v_start_43_; lean_object* v_stop_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_84_; 
v_start_43_ = lean_ctor_get(v_x_42_, 0);
v_stop_44_ = lean_ctor_get(v_x_42_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_42_);
if (v_isSharedCheck_84_ == 0)
{
v___x_46_ = v_x_42_;
v_isShared_47_ = v_isSharedCheck_84_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_stop_44_);
lean_inc(v_start_43_);
lean_dec(v_x_42_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_84_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_48_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__5));
v___x_49_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__7, &l_Lean_Syntax_instReprRange_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__7);
v___x_51_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__9));
v___x_52_ = l_Nat_reprFast(v_start_43_);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 5);
lean_ctor_set(v___x_46_, 1, v___x_53_);
lean_ctor_set(v___x_46_, 0, v___x_51_);
v___x_55_ = v___x_46_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_51_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_53_);
v___x_55_ = v_reuseFailAlloc_83_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_56_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__11));
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_50_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = 0;
v___x_60_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*1, v___x_59_);
v___x_61_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_49_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__13));
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = lean_box(1);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__15));
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___x_48_);
v___x_69_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__16, &l_Lean_Syntax_instReprRange_repr___redArg___closed__16_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__16);
v___x_70_ = l_Nat_reprFast(v_stop_44_);
v___x_71_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_51_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_56_);
v___x_74_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_69_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set_uint8(v___x_75_, sizeof(void*)*1, v___x_59_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_68_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__18, &l_Lean_Syntax_instReprRange_repr___redArg___closed__18_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__18);
v___x_78_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__19));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_76_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_56_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_77_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_59_);
return v___x_82_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Syntax_instReprRange_repr___redArg(v_x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___boxed(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Syntax_instReprRange_repr(v_x_88_, v_prec_89_);
lean_dec(v_prec_89_);
return v_res_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_start_95_; lean_object* v_stop_96_; lean_object* v_start_97_; lean_object* v_stop_98_; uint8_t v_decide_99_; 
v_start_95_ = lean_ctor_get(v_x_93_, 0);
v_stop_96_ = lean_ctor_get(v_x_93_, 1);
v_start_97_ = lean_ctor_get(v_x_94_, 0);
v_stop_98_ = lean_ctor_get(v_x_94_, 1);
v_decide_99_ = lean_nat_dec_eq(v_start_95_, v_start_97_);
if (v_decide_99_ == 0)
{
return v_decide_99_;
}
else
{
uint8_t v_decide_100_; 
v_decide_100_ = lean_nat_dec_eq(v_stop_96_, v_stop_98_);
return v_decide_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object* v_x_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Lean_Syntax_instBEqRange_beq(v_x_101_, v_x_102_);
lean_dec_ref(v_x_102_);
lean_dec_ref(v_x_101_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object* v_x_107_){
_start:
{
lean_object* v_start_108_; lean_object* v_stop_109_; uint64_t v___x_110_; uint64_t v___x_111_; uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v___x_114_; 
v_start_108_ = lean_ctor_get(v_x_107_, 0);
v_stop_109_ = lean_ctor_get(v_x_107_, 1);
v___x_110_ = 0ULL;
v___x_111_ = l_String_instHashableRaw_hash(v_start_108_);
v___x_112_ = lean_uint64_mix_hash(v___x_110_, v___x_111_);
v___x_113_ = l_String_instHashableRaw_hash(v_stop_109_);
v___x_114_ = lean_uint64_mix_hash(v___x_112_, v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object* v_x_115_){
_start:
{
uint64_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_Syntax_instHashableRange_hash(v_x_115_);
lean_dec_ref(v_x_115_);
v_r_117_ = lean_box_uint64(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_contains(lean_object* v_r_120_, lean_object* v_pos_121_, uint8_t v_includeStop_122_){
_start:
{
lean_object* v_start_123_; lean_object* v_stop_124_; uint8_t v___x_125_; 
v_start_123_ = lean_ctor_get(v_r_120_, 0);
v_stop_124_ = lean_ctor_get(v_r_120_, 1);
v___x_125_ = lean_nat_dec_le(v_start_123_, v_pos_121_);
if (v___x_125_ == 0)
{
return v___x_125_;
}
else
{
if (v_includeStop_122_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_add(v_pos_121_, v___x_126_);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_stop_124_);
lean_dec(v___x_127_);
return v___x_128_;
}
else
{
uint8_t v___x_129_; 
v___x_129_ = lean_nat_dec_le(v_pos_121_, v_stop_124_);
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_contains___boxed(lean_object* v_r_130_, lean_object* v_pos_131_, lean_object* v_includeStop_132_){
_start:
{
uint8_t v_includeStop_boxed_133_; uint8_t v_res_134_; lean_object* v_r_135_; 
v_includeStop_boxed_133_ = lean_unbox(v_includeStop_132_);
v_res_134_ = l_Lean_Syntax_Range_contains(v_r_130_, v_pos_131_, v_includeStop_boxed_133_);
lean_dec(v_pos_131_);
lean_dec_ref(v_r_130_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_includes(lean_object* v_super_136_, lean_object* v_sub_137_, uint8_t v_includeSuperStop_138_, uint8_t v_includeSubStop_139_){
_start:
{
lean_object* v_start_140_; lean_object* v_stop_141_; lean_object* v_start_142_; lean_object* v_stop_143_; uint8_t v___x_150_; 
v_start_140_ = lean_ctor_get(v_super_136_, 0);
v_stop_141_ = lean_ctor_get(v_super_136_, 1);
v_start_142_ = lean_ctor_get(v_sub_137_, 0);
v_stop_143_ = lean_ctor_get(v_sub_137_, 1);
v___x_150_ = lean_nat_dec_le(v_start_140_, v_start_142_);
if (v___x_150_ == 0)
{
return v___x_150_;
}
else
{
if (v_includeSuperStop_138_ == 0)
{
goto v___jp_144_;
}
else
{
if (v_includeSubStop_139_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_nat_add(v_stop_141_, v___x_151_);
v___x_153_ = lean_nat_dec_le(v_stop_143_, v___x_152_);
lean_dec(v___x_152_);
return v___x_153_;
}
else
{
goto v___jp_144_;
}
}
}
v___jp_144_:
{
if (v_includeSuperStop_138_ == 0)
{
if (v_includeSubStop_139_ == 0)
{
uint8_t v___x_145_; 
v___x_145_ = lean_nat_dec_le(v_stop_143_, v_stop_141_);
return v___x_145_;
}
else
{
lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_nat_add(v_stop_143_, v___x_146_);
v___x_148_ = lean_nat_dec_le(v___x_147_, v_stop_141_);
lean_dec(v___x_147_);
return v___x_148_;
}
}
else
{
uint8_t v___x_149_; 
v___x_149_ = lean_nat_dec_le(v_stop_143_, v_stop_141_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_includes___boxed(lean_object* v_super_154_, lean_object* v_sub_155_, lean_object* v_includeSuperStop_156_, lean_object* v_includeSubStop_157_){
_start:
{
uint8_t v_includeSuperStop_boxed_158_; uint8_t v_includeSubStop_boxed_159_; uint8_t v_res_160_; lean_object* v_r_161_; 
v_includeSuperStop_boxed_158_ = lean_unbox(v_includeSuperStop_156_);
v_includeSubStop_boxed_159_ = lean_unbox(v_includeSubStop_157_);
v_res_160_ = l_Lean_Syntax_Range_includes(v_super_154_, v_sub_155_, v_includeSuperStop_boxed_158_, v_includeSubStop_boxed_159_);
lean_dec_ref(v_sub_155_);
lean_dec_ref(v_super_154_);
v_r_161_ = lean_box(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_overlaps(lean_object* v_first_162_, lean_object* v_second_163_, uint8_t v_includeFirstStop_164_, uint8_t v_includeSecondStop_165_){
_start:
{
uint8_t v___y_167_; 
if (v_includeFirstStop_164_ == 0)
{
lean_object* v_start_176_; lean_object* v_stop_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v_start_176_ = lean_ctor_get(v_second_163_, 0);
v_stop_177_ = lean_ctor_get(v_first_162_, 1);
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_start_176_, v___x_178_);
v___x_180_ = lean_nat_dec_le(v___x_179_, v_stop_177_);
lean_dec(v___x_179_);
v___y_167_ = v___x_180_;
goto v___jp_166_;
}
else
{
lean_object* v_start_181_; lean_object* v_stop_182_; uint8_t v___x_183_; 
v_start_181_ = lean_ctor_get(v_second_163_, 0);
v_stop_182_ = lean_ctor_get(v_first_162_, 1);
v___x_183_ = lean_nat_dec_le(v_start_181_, v_stop_182_);
v___y_167_ = v___x_183_;
goto v___jp_166_;
}
v___jp_166_:
{
if (v___y_167_ == 0)
{
return v___y_167_;
}
else
{
if (v_includeSecondStop_165_ == 0)
{
lean_object* v_start_168_; lean_object* v_stop_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_start_168_ = lean_ctor_get(v_first_162_, 0);
v_stop_169_ = lean_ctor_get(v_second_163_, 1);
v___x_170_ = lean_unsigned_to_nat(1u);
v___x_171_ = lean_nat_add(v_start_168_, v___x_170_);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_stop_169_);
lean_dec(v___x_171_);
return v___x_172_;
}
else
{
lean_object* v_start_173_; lean_object* v_stop_174_; uint8_t v___x_175_; 
v_start_173_ = lean_ctor_get(v_first_162_, 0);
v_stop_174_ = lean_ctor_get(v_second_163_, 1);
v___x_175_ = lean_nat_dec_le(v_start_173_, v_stop_174_);
return v___x_175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_overlaps___boxed(lean_object* v_first_184_, lean_object* v_second_185_, lean_object* v_includeFirstStop_186_, lean_object* v_includeSecondStop_187_){
_start:
{
uint8_t v_includeFirstStop_boxed_188_; uint8_t v_includeSecondStop_boxed_189_; uint8_t v_res_190_; lean_object* v_r_191_; 
v_includeFirstStop_boxed_188_ = lean_unbox(v_includeFirstStop_186_);
v_includeSecondStop_boxed_189_ = lean_unbox(v_includeSecondStop_187_);
v_res_190_ = l_Lean_Syntax_Range_overlaps(v_first_184_, v_second_185_, v_includeFirstStop_boxed_188_, v_includeSecondStop_boxed_189_);
lean_dec_ref(v_second_185_);
lean_dec_ref(v_first_184_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize(lean_object* v_r_192_){
_start:
{
lean_object* v_start_193_; lean_object* v_stop_194_; lean_object* v___x_195_; 
v_start_193_ = lean_ctor_get(v_r_192_, 0);
v_stop_194_ = lean_ctor_get(v_r_192_, 1);
v___x_195_ = lean_nat_sub(v_stop_194_, v_start_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize___boxed(lean_object* v_r_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Syntax_Range_bsize(v_r_196_);
lean_dec_ref(v_r_196_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_updateTrailing(lean_object* v_trailing_198_, lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_199_) == 0)
{
lean_object* v_leading_200_; lean_object* v_pos_201_; lean_object* v_endPos_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
v_leading_200_ = lean_ctor_get(v_x_199_, 0);
v_pos_201_ = lean_ctor_get(v_x_199_, 1);
v_endPos_202_ = lean_ctor_get(v_x_199_, 3);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_199_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v_x_199_, 2);
lean_dec(v_unused_210_);
v___x_204_ = v_x_199_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_endPos_202_);
lean_inc(v_pos_201_);
lean_inc(v_leading_200_);
lean_dec(v_x_199_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 2, v_trailing_198_);
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_leading_200_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_pos_201_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_trailing_198_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v_endPos_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
else
{
lean_dec_ref(v_trailing_198_);
return v_x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f(uint8_t v_canonicalOnly_211_, lean_object* v_info_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_SourceInfo_getPos_x3f(v_info_212_, v_canonicalOnly_211_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
else
{
lean_object* v_val_215_; lean_object* v___x_216_; 
v_val_215_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v___x_213_, 1);
v___x_216_ = l_Lean_SourceInfo_getTailPos_x3f(v_info_212_, v_canonicalOnly_211_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v___x_217_; 
lean_dec(v_val_215_);
v___x_217_ = lean_box(0);
return v___x_217_;
}
else
{
lean_object* v_val_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
v_val_218_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_226_ == 0)
{
v___x_220_ = v___x_216_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_val_218_);
lean_dec(v___x_216_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v_val_215_);
lean_ctor_set(v___x_222_, 1, v_val_218_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_224_ = v___x_220_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f___boxed(lean_object* v_canonicalOnly_227_, lean_object* v_info_228_){
_start:
{
uint8_t v_canonicalOnly_boxed_229_; lean_object* v_res_230_; 
v_canonicalOnly_boxed_229_ = lean_unbox(v_canonicalOnly_227_);
v_res_230_ = l_Lean_SourceInfo_getRange_x3f(v_canonicalOnly_boxed_229_, v_info_228_);
lean_dec(v_info_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f(uint8_t v_canonicalOnly_231_, lean_object* v_info_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_SourceInfo_getPos_x3f(v_info_232_, v_canonicalOnly_231_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v___x_234_; 
v___x_234_ = lean_box(0);
return v___x_234_;
}
else
{
lean_object* v_val_235_; lean_object* v___x_236_; 
v_val_235_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_val_235_);
lean_dec_ref_known(v___x_233_, 1);
v___x_236_ = l_Lean_SourceInfo_getTrailingTailPos_x3f(v_info_232_, v_canonicalOnly_231_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v___x_237_; 
lean_dec(v_val_235_);
v___x_237_ = lean_box(0);
return v___x_237_;
}
else
{
lean_object* v_val_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_246_; 
v_val_238_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_246_ == 0)
{
v___x_240_ = v___x_236_;
v_isShared_241_ = v_isSharedCheck_246_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_val_238_);
lean_dec(v___x_236_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_246_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v_val_235_);
lean_ctor_set(v___x_242_, 1, v_val_238_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_242_);
v___x_244_ = v___x_240_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f___boxed(lean_object* v_canonicalOnly_247_, lean_object* v_info_248_){
_start:
{
uint8_t v_canonicalOnly_boxed_249_; lean_object* v_res_250_; 
v_canonicalOnly_boxed_249_ = lean_unbox(v_canonicalOnly_247_);
v_res_250_ = l_Lean_SourceInfo_getRangeWithTrailing_x3f(v_canonicalOnly_boxed_249_, v_info_248_);
lean_dec(v_info_248_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_nonCanonicalSynthetic(lean_object* v_x_251_){
_start:
{
switch(lean_obj_tag(v_x_251_))
{
case 0:
{
lean_object* v_pos_252_; lean_object* v_endPos_253_; uint8_t v___x_254_; lean_object* v___x_255_; 
v_pos_252_ = lean_ctor_get(v_x_251_, 1);
lean_inc(v_pos_252_);
v_endPos_253_ = lean_ctor_get(v_x_251_, 3);
lean_inc(v_endPos_253_);
lean_dec_ref_known(v_x_251_, 4);
v___x_254_ = 0;
v___x_255_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_255_, 0, v_pos_252_);
lean_ctor_set(v___x_255_, 1, v_endPos_253_);
lean_ctor_set_uint8(v___x_255_, sizeof(void*)*2, v___x_254_);
return v___x_255_;
}
case 1:
{
lean_object* v_pos_256_; lean_object* v_endPos_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_265_; 
v_pos_256_ = lean_ctor_get(v_x_251_, 0);
v_endPos_257_ = lean_ctor_get(v_x_251_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_x_251_);
if (v_isSharedCheck_265_ == 0)
{
v___x_259_ = v_x_251_;
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_endPos_257_);
lean_inc(v_pos_256_);
lean_dec(v_x_251_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
uint8_t v___x_261_; lean_object* v___x_263_; 
v___x_261_ = 0;
if (v_isShared_260_ == 0)
{
v___x_263_ = v___x_259_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_pos_256_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v_endPos_257_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*2, v___x_261_);
return v___x_263_;
}
}
}
default: 
{
return v_x_251_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqSourceInfo__lean_beq(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
switch(lean_obj_tag(v_x_266_))
{
case 0:
{
if (lean_obj_tag(v_x_267_) == 0)
{
lean_object* v_leading_268_; lean_object* v_pos_269_; lean_object* v_trailing_270_; lean_object* v_endPos_271_; lean_object* v_leading_272_; lean_object* v_pos_273_; lean_object* v_trailing_274_; lean_object* v_endPos_275_; uint8_t v___x_276_; 
v_leading_268_ = lean_ctor_get(v_x_266_, 0);
lean_inc_ref(v_leading_268_);
v_pos_269_ = lean_ctor_get(v_x_266_, 1);
lean_inc(v_pos_269_);
v_trailing_270_ = lean_ctor_get(v_x_266_, 2);
lean_inc_ref(v_trailing_270_);
v_endPos_271_ = lean_ctor_get(v_x_266_, 3);
lean_inc(v_endPos_271_);
lean_dec_ref_known(v_x_266_, 4);
v_leading_272_ = lean_ctor_get(v_x_267_, 0);
lean_inc_ref(v_leading_272_);
v_pos_273_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_pos_273_);
v_trailing_274_ = lean_ctor_get(v_x_267_, 2);
lean_inc_ref(v_trailing_274_);
v_endPos_275_ = lean_ctor_get(v_x_267_, 3);
lean_inc(v_endPos_275_);
lean_dec_ref_known(v_x_267_, 4);
v___x_276_ = l_Substring_Raw_beq(v_leading_268_, v_leading_272_);
if (v___x_276_ == 0)
{
lean_dec(v_endPos_275_);
lean_dec_ref(v_trailing_274_);
lean_dec(v_pos_273_);
lean_dec(v_endPos_271_);
lean_dec_ref(v_trailing_270_);
lean_dec(v_pos_269_);
return v___x_276_;
}
else
{
uint8_t v_decide_277_; 
v_decide_277_ = lean_nat_dec_eq(v_pos_269_, v_pos_273_);
lean_dec(v_pos_273_);
lean_dec(v_pos_269_);
if (v_decide_277_ == 0)
{
lean_dec(v_endPos_275_);
lean_dec_ref(v_trailing_274_);
lean_dec(v_endPos_271_);
lean_dec_ref(v_trailing_270_);
return v_decide_277_;
}
else
{
uint8_t v___x_278_; 
v___x_278_ = l_Substring_Raw_beq(v_trailing_270_, v_trailing_274_);
if (v___x_278_ == 0)
{
lean_dec(v_endPos_275_);
lean_dec(v_endPos_271_);
return v___x_278_;
}
else
{
uint8_t v_decide_279_; 
v_decide_279_ = lean_nat_dec_eq(v_endPos_271_, v_endPos_275_);
lean_dec(v_endPos_275_);
lean_dec(v_endPos_271_);
return v_decide_279_;
}
}
}
}
else
{
uint8_t v___x_280_; 
lean_dec_ref_known(v_x_266_, 4);
lean_dec(v_x_267_);
v___x_280_ = 0;
return v___x_280_;
}
}
case 1:
{
if (lean_obj_tag(v_x_267_) == 1)
{
lean_object* v_pos_281_; lean_object* v_endPos_282_; uint8_t v_canonical_283_; lean_object* v_pos_284_; lean_object* v_endPos_285_; uint8_t v_canonical_286_; uint8_t v_decide_287_; 
v_pos_281_ = lean_ctor_get(v_x_266_, 0);
lean_inc(v_pos_281_);
v_endPos_282_ = lean_ctor_get(v_x_266_, 1);
lean_inc(v_endPos_282_);
v_canonical_283_ = lean_ctor_get_uint8(v_x_266_, sizeof(void*)*2);
lean_dec_ref_known(v_x_266_, 2);
v_pos_284_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_pos_284_);
v_endPos_285_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_endPos_285_);
v_canonical_286_ = lean_ctor_get_uint8(v_x_267_, sizeof(void*)*2);
lean_dec_ref_known(v_x_267_, 2);
v_decide_287_ = lean_nat_dec_eq(v_pos_281_, v_pos_284_);
lean_dec(v_pos_284_);
lean_dec(v_pos_281_);
if (v_decide_287_ == 0)
{
lean_dec(v_endPos_285_);
lean_dec(v_endPos_282_);
return v_decide_287_;
}
else
{
uint8_t v_decide_288_; 
v_decide_288_ = lean_nat_dec_eq(v_endPos_282_, v_endPos_285_);
lean_dec(v_endPos_285_);
lean_dec(v_endPos_282_);
if (v_decide_288_ == 0)
{
return v_decide_288_;
}
else
{
if (v_canonical_286_ == 0)
{
if (v_canonical_283_ == 0)
{
return v_decide_288_;
}
else
{
return v_canonical_286_;
}
}
else
{
return v_canonical_283_;
}
}
}
}
else
{
uint8_t v___x_289_; 
lean_dec_ref_known(v_x_266_, 2);
lean_dec(v_x_267_);
v___x_289_ = 0;
return v___x_289_;
}
}
default: 
{
if (lean_obj_tag(v_x_267_) == 2)
{
uint8_t v___x_290_; 
v___x_290_ = 1;
return v___x_290_;
}
else
{
uint8_t v___x_291_; 
lean_dec(v_x_267_);
v___x_291_ = 0;
return v___x_291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqSourceInfo__lean_beq___boxed(lean_object* v_x_292_, lean_object* v_x_293_){
_start:
{
uint8_t v_res_294_; lean_object* v_r_295_; 
v_res_294_ = l_Lean_instBEqSourceInfo__lean_beq(v_x_292_, v_x_293_);
v_r_295_ = lean_box(v_res_294_);
return v_r_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg___boxed(lean_object* v___dummy_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_unreachIsNodeMissing___redArg();
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing(lean_object* v_00_u03b2_301_, lean_object* v_a_302_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg___boxed(lean_object* v___dummy_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_unreachIsNodeAtom___redArg();
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom(lean_object* v_00_u03b2_306_, lean_object* v_info_307_, lean_object* v_val_308_, lean_object* v_a_309_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___boxed(lean_object* v_00_u03b2_310_, lean_object* v_info_311_, lean_object* v_val_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_unreachIsNodeAtom(v_00_u03b2_310_, v_info_311_, v_val_312_, v_a_313_);
lean_dec_ref(v_val_312_);
lean_dec(v_info_311_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg___boxed(lean_object* v___dummy_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_unreachIsNodeIdent___redArg();
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent(lean_object* v_00_u03b2_318_, lean_object* v_info_319_, lean_object* v_rawVal_320_, lean_object* v_val_321_, lean_object* v_preresolved_322_, lean_object* v_a_323_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___boxed(lean_object* v_00_u03b2_324_, lean_object* v_info_325_, lean_object* v_rawVal_326_, lean_object* v_val_327_, lean_object* v_preresolved_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_unreachIsNodeIdent(v_00_u03b2_324_, v_info_325_, v_rawVal_326_, v_val_327_, v_preresolved_328_, v_a_329_);
lean_dec(v_preresolved_328_);
lean_dec(v_val_327_);
lean_dec_ref(v_rawVal_326_);
lean_dec(v_info_325_);
return v_res_330_;
}
}
LEAN_EXPORT uint8_t l_Lean_isLitKind(lean_object* v_k_346_){
_start:
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = ((lean_object*)(l_Lean_isLitKind___closed__1));
v___x_348_ = lean_name_eq(v_k_346_, v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_isLitKind___closed__3));
v___x_350_ = lean_name_eq(v_k_346_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lean_isLitKind___closed__5));
v___x_352_ = lean_name_eq(v_k_346_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l_Lean_isLitKind___closed__7));
v___x_354_ = lean_name_eq(v_k_346_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = ((lean_object*)(l_Lean_isLitKind___closed__9));
v___x_356_ = lean_name_eq(v_k_346_, v___x_355_);
return v___x_356_;
}
else
{
return v___x_354_;
}
}
else
{
return v___x_352_;
}
}
else
{
return v___x_350_;
}
}
else
{
return v___x_348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLitKind___boxed(lean_object* v_k_357_){
_start:
{
uint8_t v_res_358_; lean_object* v_r_359_; 
v_res_358_ = l_Lean_isLitKind(v_k_357_);
lean_dec(v_k_357_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind(lean_object* v_n_360_){
_start:
{
lean_object* v_kind_361_; 
v_kind_361_ = lean_ctor_get(v_n_360_, 1);
lean_inc(v_kind_361_);
return v_kind_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind___boxed(lean_object* v_n_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_SyntaxNode_getKind(v_n_362_);
lean_dec(v_n_362_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs___redArg(lean_object* v_n_364_, lean_object* v_fn_365_){
_start:
{
lean_object* v_args_366_; lean_object* v___x_367_; 
v_args_366_ = lean_ctor_get(v_n_364_, 2);
lean_inc_ref(v_args_366_);
lean_dec(v_n_364_);
v___x_367_ = lean_apply_1(v_fn_365_, v_args_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs(lean_object* v_00_u03b2_368_, lean_object* v_n_369_, lean_object* v_fn_370_){
_start:
{
lean_object* v_args_371_; lean_object* v___x_372_; 
v_args_371_ = lean_ctor_get(v_n_369_, 2);
lean_inc_ref(v_args_371_);
lean_dec(v_n_369_);
v___x_372_ = lean_apply_1(v_fn_370_, v_args_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs(lean_object* v_n_373_){
_start:
{
lean_object* v_args_374_; lean_object* v___x_375_; 
v_args_374_ = lean_ctor_get(v_n_373_, 2);
v___x_375_ = lean_array_get_size(v_args_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs___boxed(lean_object* v_n_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_SyntaxNode_getNumArgs(v_n_376_);
lean_dec(v_n_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg(lean_object* v_n_378_, lean_object* v_i_379_){
_start:
{
lean_object* v_args_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_args_380_ = lean_ctor_get(v_n_378_, 2);
v___x_381_ = lean_box(0);
v___x_382_ = lean_array_get_borrowed(v___x_381_, v_args_380_, v_i_379_);
lean_inc(v___x_382_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg___boxed(lean_object* v_n_383_, lean_object* v_i_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_SyntaxNode_getArg(v_n_383_, v_i_384_);
lean_dec(v_i_384_);
lean_dec(v_n_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs(lean_object* v_n_386_){
_start:
{
lean_object* v_args_387_; 
v_args_387_ = lean_ctor_get(v_n_386_, 2);
lean_inc_ref(v_args_387_);
return v_args_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs___boxed(lean_object* v_n_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_SyntaxNode_getArgs(v_n_388_);
lean_dec(v_n_388_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_modifyArgs(lean_object* v_n_390_, lean_object* v_fn_391_){
_start:
{
lean_object* v_info_392_; lean_object* v_kind_393_; lean_object* v_args_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
v_info_392_ = lean_ctor_get(v_n_390_, 0);
v_kind_393_ = lean_ctor_get(v_n_390_, 1);
v_args_394_ = lean_ctor_get(v_n_390_, 2);
v_isSharedCheck_402_ = !lean_is_exclusive(v_n_390_);
if (v_isSharedCheck_402_ == 0)
{
v___x_396_ = v_n_390_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_args_394_);
lean_inc(v_kind_393_);
lean_inc(v_info_392_);
lean_dec(v_n_390_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_398_ = lean_apply_1(v_fn_391_, v_args_394_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 2, v___x_398_);
v___x_400_ = v___x_396_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_info_392_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_kind_393_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v___x_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(lean_object* v_x_403_, lean_object* v_x_404_){
_start:
{
if (lean_obj_tag(v_x_403_) == 0)
{
if (lean_obj_tag(v_x_404_) == 0)
{
uint8_t v___x_405_; 
v___x_405_ = 1;
return v___x_405_;
}
else
{
uint8_t v___x_406_; 
v___x_406_ = 0;
return v___x_406_;
}
}
else
{
if (lean_obj_tag(v_x_404_) == 0)
{
uint8_t v___x_407_; 
v___x_407_ = 0;
return v___x_407_;
}
else
{
lean_object* v_val_408_; lean_object* v_val_409_; uint8_t v___x_410_; 
v_val_408_ = lean_ctor_get(v_x_403_, 0);
v_val_409_ = lean_ctor_get(v_x_404_, 0);
v___x_410_ = l_Lean_Syntax_instBEqRange_beq(v_val_408_, v_val_409_);
return v___x_410_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0___boxed(lean_object* v_x_411_, lean_object* v_x_412_){
_start:
{
uint8_t v_res_413_; lean_object* v_r_414_; 
v_res_413_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v_x_411_, v_x_412_);
lean_dec(v_x_412_);
lean_dec(v_x_411_);
v_r_414_ = lean_box(v_res_413_);
return v_r_414_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(lean_object* v_x_415_, lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_415_) == 0)
{
if (lean_obj_tag(v_x_416_) == 0)
{
uint8_t v___x_417_; 
v___x_417_ = 1;
return v___x_417_;
}
else
{
uint8_t v___x_418_; 
v___x_418_ = 0;
return v___x_418_;
}
}
else
{
if (lean_obj_tag(v_x_416_) == 0)
{
uint8_t v___x_419_; 
v___x_419_ = 0;
return v___x_419_;
}
else
{
lean_object* v_head_420_; lean_object* v_tail_421_; lean_object* v_head_422_; lean_object* v_tail_423_; uint8_t v___x_424_; 
v_head_420_ = lean_ctor_get(v_x_415_, 0);
v_tail_421_ = lean_ctor_get(v_x_415_, 1);
v_head_422_ = lean_ctor_get(v_x_416_, 0);
v_tail_423_ = lean_ctor_get(v_x_416_, 1);
v___x_424_ = l_Lean_Syntax_instBEqPreresolved_beq(v_head_420_, v_head_422_);
if (v___x_424_ == 0)
{
return v___x_424_;
}
else
{
v_x_415_ = v_tail_421_;
v_x_416_ = v_tail_423_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2___boxed(lean_object* v_x_426_, lean_object* v_x_427_){
_start:
{
uint8_t v_res_428_; lean_object* v_r_429_; 
v_res_428_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_x_426_, v_x_427_);
lean_dec(v_x_427_);
lean_dec(v_x_426_);
v_r_429_ = lean_box(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEq(lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
switch(lean_obj_tag(v_x_430_))
{
case 0:
{
if (lean_obj_tag(v_x_431_) == 0)
{
uint8_t v___x_432_; 
v___x_432_ = 1;
return v___x_432_;
}
else
{
uint8_t v___x_433_; 
lean_dec(v_x_431_);
v___x_433_ = 0;
return v___x_433_;
}
}
case 1:
{
if (lean_obj_tag(v_x_431_) == 1)
{
lean_object* v_info_434_; lean_object* v_kind_435_; lean_object* v_args_436_; lean_object* v_info_437_; lean_object* v_kind_438_; lean_object* v_args_439_; uint8_t v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; 
v_info_434_ = lean_ctor_get(v_x_430_, 0);
lean_inc(v_info_434_);
v_kind_435_ = lean_ctor_get(v_x_430_, 1);
lean_inc(v_kind_435_);
v_args_436_ = lean_ctor_get(v_x_430_, 2);
lean_inc_ref(v_args_436_);
lean_dec_ref_known(v_x_430_, 3);
v_info_437_ = lean_ctor_get(v_x_431_, 0);
lean_inc(v_info_437_);
v_kind_438_ = lean_ctor_get(v_x_431_, 1);
lean_inc(v_kind_438_);
v_args_439_ = lean_ctor_get(v_x_431_, 2);
lean_inc_ref(v_args_439_);
lean_dec_ref_known(v_x_431_, 3);
v___x_440_ = 0;
v___x_441_ = l_Lean_SourceInfo_getRange_x3f(v___x_440_, v_info_434_);
lean_dec(v_info_434_);
v___x_442_ = l_Lean_SourceInfo_getRange_x3f(v___x_440_, v_info_437_);
lean_dec(v_info_437_);
v___x_443_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v___x_441_, v___x_442_);
lean_dec(v___x_442_);
lean_dec(v___x_441_);
if (v___x_443_ == 0)
{
lean_dec_ref(v_args_439_);
lean_dec(v_kind_438_);
lean_dec_ref(v_args_436_);
lean_dec(v_kind_435_);
return v___x_443_;
}
else
{
uint8_t v___x_444_; 
v___x_444_ = lean_name_eq(v_kind_435_, v_kind_438_);
lean_dec(v_kind_438_);
lean_dec(v_kind_435_);
if (v___x_444_ == 0)
{
lean_dec_ref(v_args_439_);
lean_dec_ref(v_args_436_);
return v___x_444_;
}
else
{
lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_445_ = lean_array_get_size(v_args_436_);
v___x_446_ = lean_array_get_size(v_args_439_);
v___x_447_ = lean_nat_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec_ref(v_args_439_);
lean_dec_ref(v_args_436_);
return v___x_447_;
}
else
{
uint8_t v___x_448_; 
v___x_448_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(v_args_436_, v_args_439_, v___x_445_);
lean_dec_ref(v_args_439_);
lean_dec_ref(v_args_436_);
return v___x_448_;
}
}
}
}
else
{
uint8_t v___x_449_; 
lean_dec_ref_known(v_x_430_, 3);
lean_dec(v_x_431_);
v___x_449_ = 0;
return v___x_449_;
}
}
case 2:
{
if (lean_obj_tag(v_x_431_) == 2)
{
lean_object* v_info_450_; lean_object* v_val_451_; lean_object* v_info_452_; lean_object* v_val_453_; uint8_t v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v_info_450_ = lean_ctor_get(v_x_430_, 0);
lean_inc(v_info_450_);
v_val_451_ = lean_ctor_get(v_x_430_, 1);
lean_inc_ref(v_val_451_);
lean_dec_ref_known(v_x_430_, 2);
v_info_452_ = lean_ctor_get(v_x_431_, 0);
lean_inc(v_info_452_);
v_val_453_ = lean_ctor_get(v_x_431_, 1);
lean_inc_ref(v_val_453_);
lean_dec_ref_known(v_x_431_, 2);
v___x_454_ = 0;
v___x_455_ = l_Lean_SourceInfo_getRange_x3f(v___x_454_, v_info_450_);
lean_dec(v_info_450_);
v___x_456_ = l_Lean_SourceInfo_getRange_x3f(v___x_454_, v_info_452_);
lean_dec(v_info_452_);
v___x_457_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v___x_455_, v___x_456_);
lean_dec(v___x_456_);
lean_dec(v___x_455_);
if (v___x_457_ == 0)
{
lean_dec_ref(v_val_453_);
lean_dec_ref(v_val_451_);
return v___x_457_;
}
else
{
uint8_t v___x_458_; 
v___x_458_ = lean_string_dec_eq(v_val_451_, v_val_453_);
lean_dec_ref(v_val_453_);
lean_dec_ref(v_val_451_);
return v___x_458_;
}
}
else
{
uint8_t v___x_459_; 
lean_dec_ref_known(v_x_430_, 2);
lean_dec(v_x_431_);
v___x_459_ = 0;
return v___x_459_;
}
}
default: 
{
if (lean_obj_tag(v_x_431_) == 3)
{
lean_object* v_info_460_; lean_object* v_rawVal_461_; lean_object* v_val_462_; lean_object* v_preresolved_463_; lean_object* v_info_464_; lean_object* v_rawVal_465_; lean_object* v_val_466_; lean_object* v_preresolved_467_; uint8_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v_info_460_ = lean_ctor_get(v_x_430_, 0);
lean_inc(v_info_460_);
v_rawVal_461_ = lean_ctor_get(v_x_430_, 1);
lean_inc_ref(v_rawVal_461_);
v_val_462_ = lean_ctor_get(v_x_430_, 2);
lean_inc(v_val_462_);
v_preresolved_463_ = lean_ctor_get(v_x_430_, 3);
lean_inc(v_preresolved_463_);
lean_dec_ref_known(v_x_430_, 4);
v_info_464_ = lean_ctor_get(v_x_431_, 0);
lean_inc(v_info_464_);
v_rawVal_465_ = lean_ctor_get(v_x_431_, 1);
lean_inc_ref(v_rawVal_465_);
v_val_466_ = lean_ctor_get(v_x_431_, 2);
lean_inc(v_val_466_);
v_preresolved_467_ = lean_ctor_get(v_x_431_, 3);
lean_inc(v_preresolved_467_);
lean_dec_ref_known(v_x_431_, 4);
v___x_468_ = 0;
v___x_469_ = l_Lean_SourceInfo_getRange_x3f(v___x_468_, v_info_460_);
lean_dec(v_info_460_);
v___x_470_ = l_Lean_SourceInfo_getRange_x3f(v___x_468_, v_info_464_);
lean_dec(v_info_464_);
v___x_471_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v___x_469_, v___x_470_);
lean_dec(v___x_470_);
lean_dec(v___x_469_);
if (v___x_471_ == 0)
{
lean_dec(v_preresolved_467_);
lean_dec(v_val_466_);
lean_dec_ref(v_rawVal_465_);
lean_dec(v_preresolved_463_);
lean_dec(v_val_462_);
lean_dec_ref(v_rawVal_461_);
return v___x_471_;
}
else
{
uint8_t v___x_472_; 
v___x_472_ = l_Substring_Raw_beq(v_rawVal_461_, v_rawVal_465_);
if (v___x_472_ == 0)
{
lean_dec(v_preresolved_467_);
lean_dec(v_val_466_);
lean_dec(v_preresolved_463_);
lean_dec(v_val_462_);
return v___x_472_;
}
else
{
uint8_t v___x_473_; 
v___x_473_ = lean_name_eq(v_val_462_, v_val_466_);
lean_dec(v_val_466_);
lean_dec(v_val_462_);
if (v___x_473_ == 0)
{
lean_dec(v_preresolved_467_);
lean_dec(v_preresolved_463_);
return v___x_473_;
}
else
{
uint8_t v___x_474_; 
v___x_474_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_preresolved_463_, v_preresolved_467_);
lean_dec(v_preresolved_467_);
lean_dec(v_preresolved_463_);
return v___x_474_;
}
}
}
}
else
{
uint8_t v___x_475_; 
lean_dec_ref_known(v_x_430_, 4);
lean_dec(v_x_431_);
v___x_475_ = 0;
return v___x_475_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(lean_object* v_xs_476_, lean_object* v_ys_477_, lean_object* v_x_478_){
_start:
{
lean_object* v_zero_479_; uint8_t v_isZero_480_; 
v_zero_479_ = lean_unsigned_to_nat(0u);
v_isZero_480_ = lean_nat_dec_eq(v_x_478_, v_zero_479_);
if (v_isZero_480_ == 1)
{
lean_dec(v_x_478_);
return v_isZero_480_;
}
else
{
lean_object* v_one_481_; lean_object* v_n_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v_one_481_ = lean_unsigned_to_nat(1u);
v_n_482_ = lean_nat_sub(v_x_478_, v_one_481_);
lean_dec(v_x_478_);
v___x_483_ = lean_array_fget_borrowed(v_xs_476_, v_n_482_);
v___x_484_ = lean_array_fget_borrowed(v_ys_477_, v_n_482_);
lean_inc(v___x_484_);
lean_inc(v___x_483_);
v___x_485_ = l_Lean_Syntax_structRangeEq(v___x_483_, v___x_484_);
if (v___x_485_ == 0)
{
lean_dec(v_n_482_);
return v___x_485_;
}
else
{
v_x_478_ = v_n_482_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg___boxed(lean_object* v_xs_487_, lean_object* v_ys_488_, lean_object* v_x_489_){
_start:
{
uint8_t v_res_490_; lean_object* v_r_491_; 
v_res_490_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(v_xs_487_, v_ys_488_, v_x_489_);
lean_dec_ref(v_ys_488_);
lean_dec_ref(v_xs_487_);
v_r_491_ = lean_box(v_res_490_);
return v_r_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEq___boxed(lean_object* v_x_492_, lean_object* v_x_493_){
_start:
{
uint8_t v_res_494_; lean_object* v_r_495_; 
v_res_494_ = l_Lean_Syntax_structRangeEq(v_x_492_, v_x_493_);
v_r_495_ = lean_box(v_res_494_);
return v_r_495_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1(lean_object* v_xs_496_, lean_object* v_ys_497_, lean_object* v_hsz_498_, lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
uint8_t v___x_501_; 
v___x_501_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(v_xs_496_, v_ys_497_, v_x_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___boxed(lean_object* v_xs_502_, lean_object* v_ys_503_, lean_object* v_hsz_504_, lean_object* v_x_505_, lean_object* v_x_506_){
_start:
{
uint8_t v_res_507_; lean_object* v_r_508_; 
v_res_507_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1(v_xs_502_, v_ys_503_, v_hsz_504_, v_x_505_, v_x_506_);
lean_dec_ref(v_ys_503_);
lean_dec_ref(v_xs_502_);
v_r_508_ = lean_box(v_res_507_);
return v_r_508_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(uint8_t v___x_509_, lean_object* v_x_510_){
_start:
{
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed(lean_object* v___x_511_, lean_object* v_x_512_){
_start:
{
uint8_t v___x_163__boxed_513_; uint8_t v_res_514_; lean_object* v_r_515_; 
v___x_163__boxed_513_ = lean_unbox(v___x_511_);
v_res_514_ = l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(v___x_163__boxed_513_, v_x_512_);
v_r_515_ = lean_box(v_res_514_);
return v_r_515_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse(lean_object* v_opts_525_, lean_object* v_stx1_526_, lean_object* v_stx2_527_){
_start:
{
uint8_t v___x_528_; 
lean_inc(v_stx2_527_);
lean_inc(v_stx1_526_);
v___x_528_ = l_Lean_Syntax_structRangeEq(v_stx1_526_, v_stx2_527_);
if (v___x_528_ == 0)
{
lean_object* v_map_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v_map_529_ = lean_ctor_get(v_opts_525_, 0);
v___x_530_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3));
v___x_531_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_529_, v___x_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_dec(v_stx2_527_);
lean_dec(v_stx1_526_);
return v___x_528_;
}
else
{
lean_object* v_val_532_; 
v_val_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_val_532_);
lean_dec_ref_known(v___x_531_, 1);
if (lean_obj_tag(v_val_532_) == 1)
{
uint8_t v_v_533_; 
v_v_533_ = lean_ctor_get_uint8(v_val_532_, 0);
lean_dec_ref_known(v_val_532_, 0);
if (v_v_533_ == 0)
{
lean_dec(v_stx2_527_);
lean_dec(v_stx1_526_);
return v_v_533_;
}
else
{
lean_object* v___x_534_; lean_object* v___f_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_534_ = lean_box(v___x_528_);
v___f_535_ = lean_alloc_closure((void*)(l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_535_, 0, v___x_534_);
v___x_536_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4));
v___x_537_ = lean_box(0);
v___x_538_ = l_Lean_Syntax_formatStx(v_stx1_526_, v___x_537_, v_v_533_);
v___x_539_ = l_Std_Format_defWidth;
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = l_Std_Format_pretty(v___x_538_, v___x_539_, v___x_540_, v___x_540_);
v___x_542_ = lean_string_append(v___x_536_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v___x_545_ = l_Lean_Syntax_formatStx(v_stx2_527_, v___x_537_, v_v_533_);
v___x_546_ = l_Std_Format_pretty(v___x_545_, v___x_539_, v___x_540_, v___x_540_);
v___x_547_ = lean_string_append(v___x_544_, v___x_546_);
lean_dec_ref(v___x_546_);
v___x_548_ = lean_dbg_trace(v___x_547_, v___f_535_);
v___x_549_ = lean_unbox(v___x_548_);
lean_dec(v___x_548_);
return v___x_549_;
}
}
else
{
lean_dec(v_val_532_);
lean_dec(v_stx2_527_);
lean_dec(v_stx1_526_);
return v___x_528_;
}
}
}
else
{
lean_dec(v_stx2_527_);
lean_dec(v_stx1_526_);
return v___x_528_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___boxed(lean_object* v_opts_550_, lean_object* v_stx1_551_, lean_object* v_stx2_552_){
_start:
{
uint8_t v_res_553_; lean_object* v_r_554_; 
v_res_553_ = l_Lean_Syntax_structRangeEqWithTraceReuse(v_opts_550_, v_stx1_551_, v_stx2_552_);
lean_dec_ref(v_opts_550_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfo(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
switch(lean_obj_tag(v_x_555_))
{
case 0:
{
if (lean_obj_tag(v_x_556_) == 0)
{
uint8_t v___x_557_; 
v___x_557_ = 1;
return v___x_557_;
}
else
{
uint8_t v___x_558_; 
lean_dec(v_x_556_);
v___x_558_ = 0;
return v___x_558_;
}
}
case 1:
{
if (lean_obj_tag(v_x_556_) == 1)
{
lean_object* v_info_559_; lean_object* v_kind_560_; lean_object* v_args_561_; lean_object* v_info_562_; lean_object* v_kind_563_; lean_object* v_args_564_; uint8_t v___x_565_; 
v_info_559_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_info_559_);
v_kind_560_ = lean_ctor_get(v_x_555_, 1);
lean_inc(v_kind_560_);
v_args_561_ = lean_ctor_get(v_x_555_, 2);
lean_inc_ref(v_args_561_);
lean_dec_ref_known(v_x_555_, 3);
v_info_562_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_info_562_);
v_kind_563_ = lean_ctor_get(v_x_556_, 1);
lean_inc(v_kind_563_);
v_args_564_ = lean_ctor_get(v_x_556_, 2);
lean_inc_ref(v_args_564_);
lean_dec_ref_known(v_x_556_, 3);
v___x_565_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_559_, v_info_562_);
if (v___x_565_ == 0)
{
lean_dec_ref(v_args_564_);
lean_dec(v_kind_563_);
lean_dec_ref(v_args_561_);
lean_dec(v_kind_560_);
return v___x_565_;
}
else
{
uint8_t v___x_566_; 
v___x_566_ = lean_name_eq(v_kind_560_, v_kind_563_);
lean_dec(v_kind_563_);
lean_dec(v_kind_560_);
if (v___x_566_ == 0)
{
lean_dec_ref(v_args_564_);
lean_dec_ref(v_args_561_);
return v___x_566_;
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_567_ = lean_array_get_size(v_args_561_);
v___x_568_ = lean_array_get_size(v_args_564_);
v___x_569_ = lean_nat_dec_eq(v___x_567_, v___x_568_);
if (v___x_569_ == 0)
{
lean_dec_ref(v_args_564_);
lean_dec_ref(v_args_561_);
return v___x_569_;
}
else
{
uint8_t v___x_570_; 
v___x_570_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_args_561_, v_args_564_, v___x_567_);
lean_dec_ref(v_args_564_);
lean_dec_ref(v_args_561_);
return v___x_570_;
}
}
}
}
else
{
uint8_t v___x_571_; 
lean_dec_ref_known(v_x_555_, 3);
lean_dec(v_x_556_);
v___x_571_ = 0;
return v___x_571_;
}
}
case 2:
{
if (lean_obj_tag(v_x_556_) == 2)
{
lean_object* v_info_572_; lean_object* v_val_573_; lean_object* v_info_574_; lean_object* v_val_575_; uint8_t v___x_576_; 
v_info_572_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_info_572_);
v_val_573_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_val_573_);
lean_dec_ref_known(v_x_555_, 2);
v_info_574_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_info_574_);
v_val_575_ = lean_ctor_get(v_x_556_, 1);
lean_inc_ref(v_val_575_);
lean_dec_ref_known(v_x_556_, 2);
v___x_576_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_572_, v_info_574_);
if (v___x_576_ == 0)
{
lean_dec_ref(v_val_575_);
lean_dec_ref(v_val_573_);
return v___x_576_;
}
else
{
uint8_t v___x_577_; 
v___x_577_ = lean_string_dec_eq(v_val_573_, v_val_575_);
lean_dec_ref(v_val_575_);
lean_dec_ref(v_val_573_);
return v___x_577_;
}
}
else
{
uint8_t v___x_578_; 
lean_dec_ref_known(v_x_555_, 2);
lean_dec(v_x_556_);
v___x_578_ = 0;
return v___x_578_;
}
}
default: 
{
if (lean_obj_tag(v_x_556_) == 3)
{
lean_object* v_info_579_; lean_object* v_rawVal_580_; lean_object* v_val_581_; lean_object* v_preresolved_582_; lean_object* v_info_583_; lean_object* v_rawVal_584_; lean_object* v_val_585_; lean_object* v_preresolved_586_; uint8_t v___x_587_; 
v_info_579_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_info_579_);
v_rawVal_580_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_rawVal_580_);
v_val_581_ = lean_ctor_get(v_x_555_, 2);
lean_inc(v_val_581_);
v_preresolved_582_ = lean_ctor_get(v_x_555_, 3);
lean_inc(v_preresolved_582_);
lean_dec_ref_known(v_x_555_, 4);
v_info_583_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_info_583_);
v_rawVal_584_ = lean_ctor_get(v_x_556_, 1);
lean_inc_ref(v_rawVal_584_);
v_val_585_ = lean_ctor_get(v_x_556_, 2);
lean_inc(v_val_585_);
v_preresolved_586_ = lean_ctor_get(v_x_556_, 3);
lean_inc(v_preresolved_586_);
lean_dec_ref_known(v_x_556_, 4);
v___x_587_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_579_, v_info_583_);
if (v___x_587_ == 0)
{
lean_dec(v_preresolved_586_);
lean_dec(v_val_585_);
lean_dec_ref(v_rawVal_584_);
lean_dec(v_preresolved_582_);
lean_dec(v_val_581_);
lean_dec_ref(v_rawVal_580_);
return v___x_587_;
}
else
{
uint8_t v___x_588_; 
v___x_588_ = l_Substring_Raw_beq(v_rawVal_580_, v_rawVal_584_);
if (v___x_588_ == 0)
{
lean_dec(v_preresolved_586_);
lean_dec(v_val_585_);
lean_dec(v_preresolved_582_);
lean_dec(v_val_581_);
return v___x_588_;
}
else
{
uint8_t v___x_589_; 
v___x_589_ = lean_name_eq(v_val_581_, v_val_585_);
lean_dec(v_val_585_);
lean_dec(v_val_581_);
if (v___x_589_ == 0)
{
lean_dec(v_preresolved_586_);
lean_dec(v_preresolved_582_);
return v___x_589_;
}
else
{
uint8_t v___x_590_; 
v___x_590_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_preresolved_582_, v_preresolved_586_);
lean_dec(v_preresolved_586_);
lean_dec(v_preresolved_582_);
return v___x_590_;
}
}
}
}
else
{
uint8_t v___x_591_; 
lean_dec_ref_known(v_x_555_, 4);
lean_dec(v_x_556_);
v___x_591_ = 0;
return v___x_591_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(lean_object* v_xs_592_, lean_object* v_ys_593_, lean_object* v_x_594_){
_start:
{
lean_object* v_zero_595_; uint8_t v_isZero_596_; 
v_zero_595_ = lean_unsigned_to_nat(0u);
v_isZero_596_ = lean_nat_dec_eq(v_x_594_, v_zero_595_);
if (v_isZero_596_ == 1)
{
lean_dec(v_x_594_);
return v_isZero_596_;
}
else
{
lean_object* v_one_597_; lean_object* v_n_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v_one_597_ = lean_unsigned_to_nat(1u);
v_n_598_ = lean_nat_sub(v_x_594_, v_one_597_);
lean_dec(v_x_594_);
v___x_599_ = lean_array_fget_borrowed(v_xs_592_, v_n_598_);
v___x_600_ = lean_array_fget_borrowed(v_ys_593_, v_n_598_);
lean_inc(v___x_600_);
lean_inc(v___x_599_);
v___x_601_ = l_Lean_Syntax_eqWithInfo(v___x_599_, v___x_600_);
if (v___x_601_ == 0)
{
lean_dec(v_n_598_);
return v___x_601_;
}
else
{
v_x_594_ = v_n_598_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg___boxed(lean_object* v_xs_603_, lean_object* v_ys_604_, lean_object* v_x_605_){
_start:
{
uint8_t v_res_606_; lean_object* v_r_607_; 
v_res_606_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_xs_603_, v_ys_604_, v_x_605_);
lean_dec_ref(v_ys_604_);
lean_dec_ref(v_xs_603_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfo___boxed(lean_object* v_x_608_, lean_object* v_x_609_){
_start:
{
uint8_t v_res_610_; lean_object* v_r_611_; 
v_res_610_ = l_Lean_Syntax_eqWithInfo(v_x_608_, v_x_609_);
v_r_611_ = lean_box(v_res_610_);
return v_r_611_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(lean_object* v_xs_612_, lean_object* v_ys_613_, lean_object* v_hsz_614_, lean_object* v_x_615_, lean_object* v_x_616_){
_start:
{
uint8_t v___x_617_; 
v___x_617_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_xs_612_, v_ys_613_, v_x_615_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___boxed(lean_object* v_xs_618_, lean_object* v_ys_619_, lean_object* v_hsz_620_, lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
uint8_t v_res_623_; lean_object* v_r_624_; 
v_res_623_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(v_xs_618_, v_ys_619_, v_hsz_620_, v_x_621_, v_x_622_);
lean_dec_ref(v_ys_619_);
lean_dec_ref(v_xs_618_);
v_r_624_ = lean_box(v_res_623_);
return v_r_624_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfoAndTraceReuse(lean_object* v_opts_625_, lean_object* v_stx1_626_, lean_object* v_stx2_627_){
_start:
{
uint8_t v___x_628_; 
lean_inc(v_stx2_627_);
lean_inc(v_stx1_626_);
v___x_628_ = l_Lean_Syntax_eqWithInfo(v_stx1_626_, v_stx2_627_);
if (v___x_628_ == 0)
{
lean_object* v_map_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_map_629_ = lean_ctor_get(v_opts_625_, 0);
v___x_630_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3));
v___x_631_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_629_, v___x_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_dec(v_stx2_627_);
lean_dec(v_stx1_626_);
return v___x_628_;
}
else
{
lean_object* v_val_632_; 
v_val_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_val_632_);
lean_dec_ref_known(v___x_631_, 1);
if (lean_obj_tag(v_val_632_) == 1)
{
uint8_t v_v_633_; 
v_v_633_ = lean_ctor_get_uint8(v_val_632_, 0);
lean_dec_ref_known(v_val_632_, 0);
if (v_v_633_ == 0)
{
lean_dec(v_stx2_627_);
lean_dec(v_stx1_626_);
return v_v_633_;
}
else
{
lean_object* v___x_634_; lean_object* v___f_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_634_ = lean_box(v___x_628_);
v___f_635_ = lean_alloc_closure((void*)(l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_635_, 0, v___x_634_);
v___x_636_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4));
v___x_637_ = lean_box(0);
v___x_638_ = l_Lean_Syntax_formatStx(v_stx1_626_, v___x_637_, v_v_633_);
v___x_639_ = l_Std_Format_defWidth;
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = l_Std_Format_pretty(v___x_638_, v___x_639_, v___x_640_, v___x_640_);
v___x_642_ = lean_string_append(v___x_636_, v___x_641_);
lean_dec_ref(v___x_641_);
v___x_643_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5));
v___x_644_ = lean_string_append(v___x_642_, v___x_643_);
v___x_645_ = l_Lean_Syntax_formatStx(v_stx2_627_, v___x_637_, v_v_633_);
v___x_646_ = l_Std_Format_pretty(v___x_645_, v___x_639_, v___x_640_, v___x_640_);
v___x_647_ = lean_string_append(v___x_644_, v___x_646_);
lean_dec_ref(v___x_646_);
v___x_648_ = lean_dbg_trace(v___x_647_, v___f_635_);
v___x_649_ = lean_unbox(v___x_648_);
lean_dec(v___x_648_);
return v___x_649_;
}
}
else
{
lean_dec(v_val_632_);
lean_dec(v_stx2_627_);
lean_dec(v_stx1_626_);
return v___x_628_;
}
}
}
else
{
lean_dec(v_stx2_627_);
lean_dec(v_stx1_626_);
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfoAndTraceReuse___boxed(lean_object* v_opts_650_, lean_object* v_stx1_651_, lean_object* v_stx2_652_){
_start:
{
uint8_t v_res_653_; lean_object* v_r_654_; 
v_res_653_ = l_Lean_Syntax_eqWithInfoAndTraceReuse(v_opts_650_, v_stx1_651_, v_stx2_652_);
lean_dec_ref(v_opts_650_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal(lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_656_) == 2)
{
lean_object* v_val_657_; 
v_val_657_ = lean_ctor_get(v_x_656_, 1);
lean_inc_ref(v_val_657_);
return v_val_657_;
}
else
{
lean_object* v___x_658_; 
v___x_658_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal___boxed(lean_object* v_x_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lean_Syntax_getAtomVal(v_x_659_);
lean_dec(v_x_659_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setAtomVal(lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
if (lean_obj_tag(v_x_661_) == 2)
{
lean_object* v_info_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_info_663_ = lean_ctor_get(v_x_661_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v_x_661_);
if (v_isSharedCheck_670_ == 0)
{
lean_object* v_unused_671_; 
v_unused_671_ = lean_ctor_get(v_x_661_, 1);
lean_dec(v_unused_671_);
v___x_665_ = v_x_661_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_info_663_);
lean_dec(v_x_661_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 1, v_x_662_);
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_info_663_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_x_662_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
else
{
lean_dec_ref(v_x_662_);
return v_x_661_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode___redArg(lean_object* v_stx_672_, lean_object* v_hyes_673_, lean_object* v_hno_674_){
_start:
{
if (lean_obj_tag(v_stx_672_) == 1)
{
lean_object* v___x_675_; 
lean_dec(v_hno_674_);
v___x_675_ = lean_apply_1(v_hyes_673_, v_stx_672_);
return v___x_675_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec(v_hyes_673_);
lean_dec(v_stx_672_);
v___x_676_ = lean_box(0);
v___x_677_ = lean_apply_1(v_hno_674_, v___x_676_);
return v___x_677_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode(lean_object* v_00_u03b2_678_, lean_object* v_stx_679_, lean_object* v_hyes_680_, lean_object* v_hno_681_){
_start:
{
if (lean_obj_tag(v_stx_679_) == 1)
{
lean_object* v___x_682_; 
lean_dec(v_hno_681_);
v___x_682_ = lean_apply_1(v_hyes_680_, v_stx_679_);
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; 
lean_dec(v_hyes_680_);
lean_dec(v_stx_679_);
v___x_683_ = lean_box(0);
v___x_684_ = lean_apply_1(v_hno_681_, v___x_683_);
return v___x_684_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg(lean_object* v_stx_685_, lean_object* v_kind_686_, lean_object* v_hyes_687_, lean_object* v_hno_688_){
_start:
{
if (lean_obj_tag(v_stx_685_) == 1)
{
lean_object* v_kind_689_; uint8_t v___x_690_; 
v_kind_689_ = lean_ctor_get(v_stx_685_, 1);
v___x_690_ = lean_name_eq(v_kind_689_, v_kind_686_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec_ref_known(v_stx_685_, 3);
lean_dec(v_hyes_687_);
v___x_691_ = lean_box(0);
v___x_692_ = lean_apply_1(v_hno_688_, v___x_691_);
return v___x_692_;
}
else
{
lean_object* v___x_693_; 
lean_dec(v_hno_688_);
v___x_693_ = lean_apply_1(v_hyes_687_, v_stx_685_);
return v___x_693_;
}
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; 
lean_dec(v_hyes_687_);
lean_dec(v_stx_685_);
v___x_694_ = lean_box(0);
v___x_695_ = lean_apply_1(v_hno_688_, v___x_694_);
return v___x_695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg___boxed(lean_object* v_stx_696_, lean_object* v_kind_697_, lean_object* v_hyes_698_, lean_object* v_hno_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Syntax_ifNodeKind___redArg(v_stx_696_, v_kind_697_, v_hyes_698_, v_hno_699_);
lean_dec(v_kind_697_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind(lean_object* v_00_u03b2_701_, lean_object* v_stx_702_, lean_object* v_kind_703_, lean_object* v_hyes_704_, lean_object* v_hno_705_){
_start:
{
if (lean_obj_tag(v_stx_702_) == 1)
{
lean_object* v_kind_706_; uint8_t v___x_707_; 
v_kind_706_ = lean_ctor_get(v_stx_702_, 1);
v___x_707_ = lean_name_eq(v_kind_706_, v_kind_703_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; 
lean_dec_ref_known(v_stx_702_, 3);
lean_dec(v_hyes_704_);
v___x_708_ = lean_box(0);
v___x_709_ = lean_apply_1(v_hno_705_, v___x_708_);
return v___x_709_;
}
else
{
lean_object* v___x_710_; 
lean_dec(v_hno_705_);
v___x_710_ = lean_apply_1(v_hyes_704_, v_stx_702_);
return v___x_710_;
}
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec(v_hyes_704_);
lean_dec(v_stx_702_);
v___x_711_ = lean_box(0);
v___x_712_ = lean_apply_1(v_hno_705_, v___x_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___boxed(lean_object* v_00_u03b2_713_, lean_object* v_stx_714_, lean_object* v_kind_715_, lean_object* v_hyes_716_, lean_object* v_hno_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Syntax_ifNodeKind(v_00_u03b2_713_, v_stx_714_, v_kind_715_, v_hyes_716_, v_hno_717_);
lean_dec(v_kind_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode(lean_object* v_x_728_){
_start:
{
if (lean_obj_tag(v_x_728_) == 1)
{
lean_inc_ref(v_x_728_);
return v_x_728_;
}
else
{
lean_object* v___x_729_; 
v___x_729_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__3));
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode___boxed(lean_object* v_x_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_Syntax_asNode(v_x_730_);
lean_dec(v_x_730_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt(lean_object* v_stx_732_, lean_object* v_i_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = l_Lean_Syntax_getArg(v_stx_732_, v_i_733_);
v___x_735_ = l_Lean_Syntax_getId(v___x_734_);
lean_dec(v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt___boxed(lean_object* v_stx_736_, lean_object* v_i_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Syntax_getIdAt(v_stx_736_, v_i_737_);
lean_dec(v_i_737_);
lean_dec(v_stx_736_);
return v_res_738_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasIdent(lean_object* v_id_739_, lean_object* v_x_740_){
_start:
{
switch(lean_obj_tag(v_x_740_))
{
case 3:
{
lean_object* v_val_741_; uint8_t v___x_742_; 
v_val_741_ = lean_ctor_get(v_x_740_, 2);
v___x_742_ = lean_name_eq(v_id_739_, v_val_741_);
return v___x_742_;
}
case 1:
{
lean_object* v_args_743_; lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v_args_743_ = lean_ctor_get(v_x_740_, 2);
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = lean_array_get_size(v_args_743_);
v___x_746_ = lean_nat_dec_lt(v___x_744_, v___x_745_);
if (v___x_746_ == 0)
{
return v___x_746_;
}
else
{
if (v___x_746_ == 0)
{
return v___x_746_;
}
else
{
size_t v___x_747_; size_t v___x_748_; uint8_t v___x_749_; 
v___x_747_ = ((size_t)0ULL);
v___x_748_ = lean_usize_of_nat(v___x_745_);
v___x_749_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(v_id_739_, v_args_743_, v___x_747_, v___x_748_);
return v___x_749_;
}
}
}
default: 
{
uint8_t v___x_750_; 
v___x_750_ = 0;
return v___x_750_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(lean_object* v_id_751_, lean_object* v_as_752_, size_t v_i_753_, size_t v_stop_754_){
_start:
{
uint8_t v___x_755_; 
v___x_755_ = lean_usize_dec_eq(v_i_753_, v_stop_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_array_uget_borrowed(v_as_752_, v_i_753_);
v___x_757_ = l_Lean_Syntax_hasIdent(v_id_751_, v___x_756_);
if (v___x_757_ == 0)
{
size_t v___x_758_; size_t v___x_759_; 
v___x_758_ = ((size_t)1ULL);
v___x_759_ = lean_usize_add(v_i_753_, v___x_758_);
v_i_753_ = v___x_759_;
goto _start;
}
else
{
return v___x_757_;
}
}
else
{
uint8_t v___x_761_; 
v___x_761_ = 0;
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0___boxed(lean_object* v_id_762_, lean_object* v_as_763_, lean_object* v_i_764_, lean_object* v_stop_765_){
_start:
{
size_t v_i_boxed_766_; size_t v_stop_boxed_767_; uint8_t v_res_768_; lean_object* v_r_769_; 
v_i_boxed_766_ = lean_unbox_usize(v_i_764_);
lean_dec(v_i_764_);
v_stop_boxed_767_ = lean_unbox_usize(v_stop_765_);
lean_dec(v_stop_765_);
v_res_768_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(v_id_762_, v_as_763_, v_i_boxed_766_, v_stop_boxed_767_);
lean_dec_ref(v_as_763_);
lean_dec(v_id_762_);
v_r_769_ = lean_box(v_res_768_);
return v_r_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasIdent___boxed(lean_object* v_id_770_, lean_object* v_x_771_){
_start:
{
uint8_t v_res_772_; lean_object* v_r_773_; 
v_res_772_ = l_Lean_Syntax_hasIdent(v_id_770_, v_x_771_);
lean_dec(v_x_771_);
lean_dec(v_id_770_);
v_r_773_ = lean_box(v_res_772_);
return v_r_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArgs(lean_object* v_stx_774_, lean_object* v_fn_775_){
_start:
{
if (lean_obj_tag(v_stx_774_) == 1)
{
lean_object* v_info_776_; lean_object* v_kind_777_; lean_object* v_args_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_786_; 
v_info_776_ = lean_ctor_get(v_stx_774_, 0);
v_kind_777_ = lean_ctor_get(v_stx_774_, 1);
v_args_778_ = lean_ctor_get(v_stx_774_, 2);
v_isSharedCheck_786_ = !lean_is_exclusive(v_stx_774_);
if (v_isSharedCheck_786_ == 0)
{
v___x_780_ = v_stx_774_;
v_isShared_781_ = v_isSharedCheck_786_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_args_778_);
lean_inc(v_kind_777_);
lean_inc(v_info_776_);
lean_dec(v_stx_774_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_786_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = lean_apply_1(v_fn_775_, v_args_778_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 2, v___x_782_);
v___x_784_ = v___x_780_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_info_776_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_kind_777_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
else
{
lean_dec_ref(v_fn_775_);
return v_stx_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg(lean_object* v_stx_787_, lean_object* v_i_788_, lean_object* v_fn_789_){
_start:
{
if (lean_obj_tag(v_stx_787_) == 1)
{
lean_object* v_info_790_; lean_object* v_kind_791_; lean_object* v_args_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
v_info_790_ = lean_ctor_get(v_stx_787_, 0);
v_kind_791_ = lean_ctor_get(v_stx_787_, 1);
v_args_792_ = lean_ctor_get(v_stx_787_, 2);
v___x_793_ = lean_array_get_size(v_args_792_);
v___x_794_ = lean_nat_dec_lt(v_i_788_, v___x_793_);
if (v___x_794_ == 0)
{
lean_dec_ref(v_fn_789_);
return v_stx_787_;
}
else
{
lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_806_; 
lean_inc_ref(v_args_792_);
lean_inc(v_kind_791_);
lean_inc(v_info_790_);
v_isSharedCheck_806_ = !lean_is_exclusive(v_stx_787_);
if (v_isSharedCheck_806_ == 0)
{
lean_object* v_unused_807_; lean_object* v_unused_808_; lean_object* v_unused_809_; 
v_unused_807_ = lean_ctor_get(v_stx_787_, 2);
lean_dec(v_unused_807_);
v_unused_808_ = lean_ctor_get(v_stx_787_, 1);
lean_dec(v_unused_808_);
v_unused_809_ = lean_ctor_get(v_stx_787_, 0);
lean_dec(v_unused_809_);
v___x_796_ = v_stx_787_;
v_isShared_797_ = v_isSharedCheck_806_;
goto v_resetjp_795_;
}
else
{
lean_dec(v_stx_787_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_806_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v_v_798_; lean_object* v___x_799_; lean_object* v_xs_x27_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
v_v_798_ = lean_array_fget(v_args_792_, v_i_788_);
v___x_799_ = lean_box(0);
v_xs_x27_800_ = lean_array_fset(v_args_792_, v_i_788_, v___x_799_);
v___x_801_ = lean_apply_1(v_fn_789_, v_v_798_);
v___x_802_ = lean_array_fset(v_xs_x27_800_, v_i_788_, v___x_801_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 2, v___x_802_);
v___x_804_ = v___x_796_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_info_790_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_kind_791_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_dec_ref(v_fn_789_);
return v_stx_787_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg___boxed(lean_object* v_stx_810_, lean_object* v_i_811_, lean_object* v_fn_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Syntax_modifyArg(v_stx_810_, v_i_811_, v_fn_812_);
lean_dec(v_i_811_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__0(lean_object* v_info_814_, lean_object* v_kind_815_, lean_object* v_toPure_816_, lean_object* v_____do__lift_817_){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_818_, 0, v_info_814_);
lean_ctor_set(v___x_818_, 1, v_kind_815_);
lean_ctor_set(v___x_818_, 2, v_____do__lift_817_);
v___x_819_ = lean_apply_2(v_toPure_816_, lean_box(0), v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__2(lean_object* v_toPure_820_, lean_object* v_x_821_, lean_object* v_o_822_){
_start:
{
if (lean_obj_tag(v_o_822_) == 0)
{
lean_object* v___x_823_; 
v___x_823_ = lean_apply_2(v_toPure_820_, lean_box(0), v_x_821_);
return v___x_823_;
}
else
{
lean_object* v_val_824_; lean_object* v___x_825_; 
lean_dec(v_x_821_);
v_val_824_ = lean_ctor_get(v_o_822_, 0);
lean_inc(v_val_824_);
lean_dec_ref_known(v_o_822_, 1);
v___x_825_ = lean_apply_2(v_toPure_820_, lean_box(0), v_val_824_);
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg(lean_object* v_inst_826_, lean_object* v_fn_827_, lean_object* v_x_828_){
_start:
{
if (lean_obj_tag(v_x_828_) == 1)
{
lean_object* v_toApplicative_829_; lean_object* v_toBind_830_; lean_object* v_toPure_831_; lean_object* v_info_832_; lean_object* v_kind_833_; lean_object* v_args_834_; lean_object* v___f_835_; lean_object* v___f_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_toApplicative_829_ = lean_ctor_get(v_inst_826_, 0);
v_toBind_830_ = lean_ctor_get(v_inst_826_, 1);
lean_inc_n(v_toBind_830_, 2);
v_toPure_831_ = lean_ctor_get(v_toApplicative_829_, 1);
lean_inc_n(v_toPure_831_, 2);
v_info_832_ = lean_ctor_get(v_x_828_, 0);
v_kind_833_ = lean_ctor_get(v_x_828_, 1);
v_args_834_ = lean_ctor_get(v_x_828_, 2);
lean_inc(v_kind_833_);
lean_inc(v_info_832_);
v___f_835_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_835_, 0, v_info_832_);
lean_closure_set(v___f_835_, 1, v_kind_833_);
lean_closure_set(v___f_835_, 2, v_toPure_831_);
lean_inc_ref(v_args_834_);
lean_inc(v_fn_827_);
v___f_836_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__1), 7, 6);
lean_closure_set(v___f_836_, 0, v_inst_826_);
lean_closure_set(v___f_836_, 1, v_fn_827_);
lean_closure_set(v___f_836_, 2, v_args_834_);
lean_closure_set(v___f_836_, 3, v_toBind_830_);
lean_closure_set(v___f_836_, 4, v___f_835_);
lean_closure_set(v___f_836_, 5, v_toPure_831_);
v___x_837_ = lean_apply_1(v_fn_827_, v_x_828_);
v___x_838_ = lean_apply_4(v_toBind_830_, lean_box(0), lean_box(0), v___x_837_, v___f_836_);
return v___x_838_;
}
else
{
lean_object* v_toApplicative_839_; lean_object* v_toBind_840_; lean_object* v_toPure_841_; lean_object* v___f_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_toApplicative_839_ = lean_ctor_get(v_inst_826_, 0);
lean_inc_ref(v_toApplicative_839_);
v_toBind_840_ = lean_ctor_get(v_inst_826_, 1);
lean_inc(v_toBind_840_);
lean_dec_ref(v_inst_826_);
v_toPure_841_ = lean_ctor_get(v_toApplicative_839_, 1);
lean_inc(v_toPure_841_);
lean_dec_ref(v_toApplicative_839_);
lean_inc(v_x_828_);
v___f_842_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__2), 3, 2);
lean_closure_set(v___f_842_, 0, v_toPure_841_);
lean_closure_set(v___f_842_, 1, v_x_828_);
v___x_843_ = lean_apply_1(v_fn_827_, v_x_828_);
v___x_844_ = lean_apply_4(v_toBind_840_, lean_box(0), lean_box(0), v___x_843_, v___f_842_);
return v___x_844_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1(lean_object* v_inst_845_, lean_object* v_fn_846_, lean_object* v_args_847_, lean_object* v_toBind_848_, lean_object* v___f_849_, lean_object* v_toPure_850_, lean_object* v_____do__lift_851_){
_start:
{
if (lean_obj_tag(v_____do__lift_851_) == 0)
{
lean_object* v___x_852_; size_t v_sz_853_; size_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
lean_dec(v_toPure_850_);
lean_inc_ref(v_inst_845_);
v___x_852_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg), 3, 2);
lean_closure_set(v___x_852_, 0, v_inst_845_);
lean_closure_set(v___x_852_, 1, v_fn_846_);
v_sz_853_ = lean_array_size(v_args_847_);
v___x_854_ = ((size_t)0ULL);
v___x_855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_845_, v___x_852_, v_sz_853_, v___x_854_, v_args_847_);
v___x_856_ = lean_apply_4(v_toBind_848_, lean_box(0), lean_box(0), v___x_855_, v___f_849_);
return v___x_856_;
}
else
{
lean_object* v_val_857_; lean_object* v___x_858_; 
lean_dec(v___f_849_);
lean_dec(v_toBind_848_);
lean_dec_ref(v_args_847_);
lean_dec(v_fn_846_);
lean_dec_ref(v_inst_845_);
v_val_857_ = lean_ctor_get(v_____do__lift_851_, 0);
lean_inc(v_val_857_);
lean_dec_ref_known(v_____do__lift_851_, 1);
v___x_858_ = lean_apply_2(v_toPure_850_, lean_box(0), v_val_857_);
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM(lean_object* v_m_859_, lean_object* v_inst_860_, lean_object* v_fn_861_, lean_object* v_x_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_Syntax_replaceM___redArg(v_inst_860_, v_fn_861_, v_x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0(lean_object* v_info_864_, lean_object* v_kind_865_, lean_object* v_fn_866_, lean_object* v_args_867_){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_868_, 0, v_info_864_);
lean_ctor_set(v___x_868_, 1, v_kind_865_);
lean_ctor_set(v___x_868_, 2, v_args_867_);
v___x_869_ = lean_apply_1(v_fn_866_, v___x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg(lean_object* v_inst_870_, lean_object* v_fn_871_, lean_object* v_x_872_){
_start:
{
if (lean_obj_tag(v_x_872_) == 1)
{
lean_object* v_toBind_873_; lean_object* v_info_874_; lean_object* v_kind_875_; lean_object* v_args_876_; lean_object* v___f_877_; lean_object* v___x_878_; size_t v_sz_879_; size_t v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_toBind_873_ = lean_ctor_get(v_inst_870_, 1);
lean_inc(v_toBind_873_);
v_info_874_ = lean_ctor_get(v_x_872_, 0);
lean_inc(v_info_874_);
v_kind_875_ = lean_ctor_get(v_x_872_, 1);
lean_inc(v_kind_875_);
v_args_876_ = lean_ctor_get(v_x_872_, 2);
lean_inc_ref(v_args_876_);
lean_dec_ref_known(v_x_872_, 3);
lean_inc(v_fn_871_);
v___f_877_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_877_, 0, v_info_874_);
lean_closure_set(v___f_877_, 1, v_kind_875_);
lean_closure_set(v___f_877_, 2, v_fn_871_);
lean_inc_ref(v_inst_870_);
v___x_878_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUpM___redArg), 3, 2);
lean_closure_set(v___x_878_, 0, v_inst_870_);
lean_closure_set(v___x_878_, 1, v_fn_871_);
v_sz_879_ = lean_array_size(v_args_876_);
v___x_880_ = ((size_t)0ULL);
v___x_881_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_870_, v___x_878_, v_sz_879_, v___x_880_, v_args_876_);
v___x_882_ = lean_apply_4(v_toBind_873_, lean_box(0), lean_box(0), v___x_881_, v___f_877_);
return v___x_882_;
}
else
{
lean_object* v___x_883_; 
lean_dec_ref(v_inst_870_);
v___x_883_ = lean_apply_1(v_fn_871_, v_x_872_);
return v___x_883_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM(lean_object* v_m_884_, lean_object* v_inst_885_, lean_object* v_fn_886_, lean_object* v_x_887_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = l_Lean_Syntax_rewriteBottomUpM___redArg(v_inst_885_, v_fn_886_, v_x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp___lam__0(lean_object* v_fn_889_, lean_object* v_x_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = lean_apply_1(v_fn_889_, v_x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp(lean_object* v_fn_911_, lean_object* v_stx_912_){
_start:
{
lean_object* v___f_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___f_913_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUp___lam__0), 2, 1);
lean_closure_set(v___f_913_, 0, v_fn_911_);
v___x_914_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUp___closed__9));
v___x_915_ = l_Lean_Syntax_rewriteBottomUpM___redArg(v___x_914_, v___f_913_, v_stx_912_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__0(lean_object* v_msg_916_){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = l_String_instInhabitedSlice;
v___x_918_ = lean_panic_fn_borrowed(v___x_917_, v_msg_916_);
return v___x_918_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(lean_object* v_s_919_, lean_object* v_a_920_, uint8_t v_b_921_){
_start:
{
lean_object* v_str_922_; lean_object* v_startInclusive_923_; lean_object* v_endExclusive_924_; lean_object* v___x_925_; uint8_t v_decide_926_; 
v_str_922_ = lean_ctor_get(v_s_919_, 0);
v_startInclusive_923_ = lean_ctor_get(v_s_919_, 1);
v_endExclusive_924_ = lean_ctor_get(v_s_919_, 2);
v___x_925_ = lean_nat_sub(v_endExclusive_924_, v_startInclusive_923_);
v_decide_926_ = lean_nat_dec_eq(v_a_920_, v___x_925_);
lean_dec(v___x_925_);
if (v_decide_926_ == 0)
{
uint32_t v___x_927_; lean_object* v___x_928_; uint32_t v___x_929_; uint8_t v___x_930_; 
v___x_927_ = 64;
v___x_928_ = lean_nat_add(v_startInclusive_923_, v_a_920_);
lean_dec(v_a_920_);
v___x_929_ = lean_string_utf8_get_fast(v_str_922_, v___x_928_);
v___x_930_ = lean_uint32_dec_eq(v___x_929_, v___x_927_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = lean_string_utf8_next_fast(v_str_922_, v___x_928_);
lean_dec(v___x_928_);
v___x_932_ = lean_nat_sub(v___x_931_, v_startInclusive_923_);
v_a_920_ = v___x_932_;
v_b_921_ = v___x_930_;
goto _start;
}
else
{
lean_dec(v___x_928_);
return v___x_930_;
}
}
else
{
lean_dec(v_a_920_);
return v_b_921_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg___boxed(lean_object* v_s_934_, lean_object* v_a_935_, lean_object* v_b_936_){
_start:
{
uint8_t v_b_boxed_937_; uint8_t v_res_938_; lean_object* v_r_939_; 
v_b_boxed_937_ = lean_unbox(v_b_936_);
v_res_938_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(v_s_934_, v_a_935_, v_b_boxed_937_);
lean_dec_ref(v_s_934_);
v_r_939_ = lean_box(v_res_938_);
return v_r_939_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(lean_object* v_s_940_){
_start:
{
lean_object* v_searcher_941_; uint8_t v___x_942_; uint8_t v___x_943_; 
v_searcher_941_ = lean_unsigned_to_nat(0u);
v___x_942_ = 0;
v___x_943_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(v_s_940_, v_searcher_941_, v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1___boxed(lean_object* v_s_944_){
_start:
{
uint8_t v_res_945_; lean_object* v_r_946_; 
v_res_945_ = l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(v_s_944_);
lean_dec_ref(v_s_944_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
static lean_object* _init_l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_950_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2));
v___x_951_ = lean_unsigned_to_nat(14u);
v___x_952_ = lean_unsigned_to_nat(22u);
v___x_953_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1));
v___x_954_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0));
v___x_955_ = l_mkPanicMessageWithDecl(v___x_954_, v___x_953_, v___x_952_, v___x_951_, v___x_950_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(lean_object* v_x_956_){
_start:
{
if (lean_obj_tag(v_x_956_) == 1)
{
lean_object* v_info_957_; lean_object* v_kind_958_; lean_object* v_args_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_969_; 
v_info_957_ = lean_ctor_get(v_x_956_, 0);
v_kind_958_ = lean_ctor_get(v_x_956_, 1);
v_args_959_ = lean_ctor_get(v_x_956_, 2);
v_isSharedCheck_969_ = !lean_is_exclusive(v_x_956_);
if (v_isSharedCheck_969_ == 0)
{
v___x_961_ = v_x_956_;
v_isShared_962_ = v_isSharedCheck_969_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_args_959_);
lean_inc(v_kind_958_);
lean_inc(v_info_957_);
lean_dec(v_x_956_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_969_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
size_t v_sz_963_; size_t v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v_sz_963_ = lean_array_size(v_args_959_);
v___x_964_ = ((size_t)0ULL);
v___x_965_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(v_sz_963_, v___x_964_, v_args_959_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 2, v___x_965_);
v___x_967_ = v___x_961_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_info_957_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_kind_958_);
lean_ctor_set(v_reuseFailAlloc_968_, 2, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
else
{
if (lean_obj_tag(v_x_956_) == 3)
{
lean_object* v_info_970_; lean_object* v_rawVal_971_; lean_object* v_val_972_; lean_object* v_preresolved_973_; uint8_t v___y_975_; lean_object* v_str_982_; lean_object* v_startPos_983_; lean_object* v_stopPos_984_; uint8_t v___x_985_; 
v_info_970_ = lean_ctor_get(v_x_956_, 0);
v_rawVal_971_ = lean_ctor_get(v_x_956_, 1);
v_val_972_ = lean_ctor_get(v_x_956_, 2);
v_preresolved_973_ = lean_ctor_get(v_x_956_, 3);
v_str_982_ = lean_ctor_get(v_rawVal_971_, 0);
v_startPos_983_ = lean_ctor_get(v_rawVal_971_, 1);
v_stopPos_984_ = lean_ctor_get(v_rawVal_971_, 2);
v___x_985_ = lean_string_is_valid_pos(v_str_982_, v_startPos_983_);
if (v___x_985_ == 0)
{
goto v___jp_978_;
}
else
{
uint8_t v___x_986_; 
v___x_986_ = lean_string_is_valid_pos(v_str_982_, v_stopPos_984_);
if (v___x_986_ == 0)
{
goto v___jp_978_;
}
else
{
uint8_t v___x_987_; 
v___x_987_ = lean_nat_dec_le(v_startPos_983_, v_stopPos_984_);
if (v___x_987_ == 0)
{
goto v___jp_978_;
}
else
{
lean_object* v___x_988_; uint8_t v___x_989_; 
lean_inc(v_stopPos_984_);
lean_inc(v_startPos_983_);
lean_inc_ref(v_str_982_);
v___x_988_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_988_, 0, v_str_982_);
lean_ctor_set(v___x_988_, 1, v_startPos_983_);
lean_ctor_set(v___x_988_, 2, v_stopPos_984_);
v___x_989_ = l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(v___x_988_);
lean_dec_ref_known(v___x_988_, 3);
v___y_975_ = v___x_989_;
goto v___jp_974_;
}
}
}
v___jp_974_:
{
if (v___y_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; 
lean_inc(v_preresolved_973_);
lean_inc(v_val_972_);
lean_inc_ref(v_rawVal_971_);
lean_inc(v_info_970_);
lean_dec_ref_known(v_x_956_, 4);
v___x_976_ = l_Lean_Name_eraseMacroScopes(v_val_972_);
lean_dec(v_val_972_);
v___x_977_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_977_, 0, v_info_970_);
lean_ctor_set(v___x_977_, 1, v_rawVal_971_);
lean_ctor_set(v___x_977_, 2, v___x_976_);
lean_ctor_set(v___x_977_, 3, v_preresolved_973_);
return v___x_977_;
}
else
{
return v_x_956_;
}
}
v___jp_978_:
{
lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_979_ = lean_obj_once(&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3, &l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3_once, _init_l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3);
v___x_980_ = l_panic___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__0(v___x_979_);
v___x_981_ = l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(v___x_980_);
lean_dec_ref(v___x_980_);
v___y_975_ = v___x_981_;
goto v___jp_974_;
}
}
else
{
return v_x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(size_t v_sz_990_, size_t v_i_991_, lean_object* v_bs_992_){
_start:
{
uint8_t v___x_993_; 
v___x_993_ = lean_usize_dec_lt(v_i_991_, v_sz_990_);
if (v___x_993_ == 0)
{
return v_bs_992_;
}
else
{
lean_object* v_v_994_; lean_object* v___x_995_; lean_object* v_bs_x27_996_; lean_object* v___x_997_; size_t v___x_998_; size_t v___x_999_; lean_object* v___x_1000_; 
v_v_994_ = lean_array_uget(v_bs_992_, v_i_991_);
v___x_995_ = lean_unsigned_to_nat(0u);
v_bs_x27_996_ = lean_array_uset(v_bs_992_, v_i_991_, v___x_995_);
v___x_997_ = l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(v_v_994_);
v___x_998_ = ((size_t)1ULL);
v___x_999_ = lean_usize_add(v_i_991_, v___x_998_);
v___x_1000_ = lean_array_uset(v_bs_x27_996_, v_i_991_, v___x_997_);
v_i_991_ = v___x_999_;
v_bs_992_ = v___x_1000_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3___boxed(lean_object* v_sz_1002_, lean_object* v_i_1003_, lean_object* v_bs_1004_){
_start:
{
size_t v_sz_boxed_1005_; size_t v_i_boxed_1006_; lean_object* v_res_1007_; 
v_sz_boxed_1005_ = lean_unbox_usize(v_sz_1002_);
lean_dec(v_sz_1002_);
v_i_boxed_1006_ = lean_unbox_usize(v_i_1003_);
lean_dec(v_i_1003_);
v_res_1007_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(v_sz_boxed_1005_, v_i_boxed_1006_, v_bs_1004_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eraseQuoteMacroScopes(lean_object* v_stx_1008_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(v_stx_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1(lean_object* v_s_1010_, lean_object* v_inst_1011_, lean_object* v_R_1012_, lean_object* v_a_1013_, uint8_t v_b_1014_, lean_object* v_c_1015_){
_start:
{
uint8_t v___x_1016_; 
v___x_1016_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(v_s_1010_, v_a_1013_, v_b_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___boxed(lean_object* v_s_1017_, lean_object* v_inst_1018_, lean_object* v_R_1019_, lean_object* v_a_1020_, lean_object* v_b_1021_, lean_object* v_c_1022_){
_start:
{
uint8_t v_b_boxed_1023_; uint8_t v_res_1024_; lean_object* v_r_1025_; 
v_b_boxed_1023_ = lean_unbox(v_b_1021_);
v_res_1024_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1(v_s_1017_, v_inst_1018_, v_R_1019_, v_a_1020_, v_b_boxed_1023_, v_c_1022_);
lean_dec_ref(v_s_1017_);
v_r_1025_ = lean_box(v_res_1024_);
return v_r_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(lean_object* v_x_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_){
_start:
{
if (lean_obj_tag(v_x_1026_) == 0)
{
lean_object* v_leading_1029_; lean_object* v_trailing_1030_; lean_object* v_pos_1031_; lean_object* v_endPos_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1059_; 
v_leading_1029_ = lean_ctor_get(v_x_1026_, 0);
v_trailing_1030_ = lean_ctor_get(v_x_1026_, 2);
v_pos_1031_ = lean_ctor_get(v_x_1026_, 1);
v_endPos_1032_ = lean_ctor_get(v_x_1026_, 3);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_x_1026_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1034_ = v_x_1026_;
v_isShared_1035_ = v_isSharedCheck_1059_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_endPos_1032_);
lean_inc(v_trailing_1030_);
lean_inc(v_pos_1031_);
lean_inc(v_leading_1029_);
lean_dec(v_x_1026_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1059_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v_str_1036_; lean_object* v_stopPos_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1057_; 
v_str_1036_ = lean_ctor_get(v_leading_1029_, 0);
v_stopPos_1037_ = lean_ctor_get(v_leading_1029_, 2);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_leading_1029_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v_leading_1029_, 1);
lean_dec(v_unused_1058_);
v___x_1039_ = v_leading_1029_;
v_isShared_1040_ = v_isSharedCheck_1057_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_stopPos_1037_);
lean_inc(v_str_1036_);
lean_dec(v_leading_1029_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1057_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v_str_1041_; lean_object* v_startPos_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1055_; 
v_str_1041_ = lean_ctor_get(v_trailing_1030_, 0);
v_startPos_1042_ = lean_ctor_get(v_trailing_1030_, 1);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_trailing_1030_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; 
v_unused_1056_ = lean_ctor_get(v_trailing_1030_, 2);
lean_dec(v_unused_1056_);
v___x_1044_ = v_trailing_1030_;
v_isShared_1045_ = v_isSharedCheck_1055_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_startPos_1042_);
lean_inc(v_str_1041_);
lean_dec(v_trailing_1030_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1055_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 2, v_stopPos_1037_);
lean_ctor_set(v___x_1044_, 1, v_x_1027_);
lean_ctor_set(v___x_1044_, 0, v_str_1036_);
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_str_1036_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_x_1027_);
lean_ctor_set(v_reuseFailAlloc_1054_, 2, v_stopPos_1037_);
v___x_1047_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
lean_object* v___x_1049_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 2, v_x_1028_);
lean_ctor_set(v___x_1039_, 1, v_startPos_1042_);
lean_ctor_set(v___x_1039_, 0, v_str_1041_);
v___x_1049_ = v___x_1039_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_str_1041_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_startPos_1042_);
lean_ctor_set(v_reuseFailAlloc_1053_, 2, v_x_1028_);
v___x_1049_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1051_; 
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 2, v___x_1049_);
lean_ctor_set(v___x_1034_, 0, v___x_1047_);
v___x_1051_ = v___x_1034_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_pos_1031_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1052_, 3, v_endPos_1032_);
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
}
}
}
else
{
lean_dec(v_x_1028_);
lean_dec(v_x_1027_);
return v_x_1026_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(lean_object* v___x_1060_, lean_object* v___x_1061_, lean_object* v___x_1062_, lean_object* v_a_1063_, lean_object* v_b_1064_){
_start:
{
lean_object* v___x_1065_; uint8_t v_decide_1066_; 
v___x_1065_ = lean_nat_sub(v___x_1060_, v___x_1061_);
v_decide_1066_ = lean_nat_dec_eq(v_a_1063_, v___x_1065_);
lean_dec(v___x_1065_);
if (v_decide_1066_ == 0)
{
uint32_t v___x_1067_; lean_object* v___x_1068_; uint32_t v___x_1069_; uint8_t v___x_1070_; 
v___x_1067_ = 10;
v___x_1068_ = lean_nat_add(v___x_1061_, v_a_1063_);
v___x_1069_ = lean_string_utf8_get_fast(v___x_1062_, v___x_1068_);
v___x_1070_ = lean_uint32_dec_eq(v___x_1069_, v___x_1067_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec(v_a_1063_);
v___x_1071_ = lean_box(0);
v___x_1072_ = lean_string_utf8_next_fast(v___x_1062_, v___x_1068_);
lean_dec(v___x_1068_);
v___x_1073_ = lean_nat_sub(v___x_1072_, v___x_1061_);
v_a_1063_ = v___x_1073_;
v_b_1064_ = v___x_1071_;
goto _start;
}
else
{
lean_object* v___x_1075_; 
lean_dec(v___x_1068_);
v___x_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_a_1063_);
return v___x_1075_;
}
}
else
{
lean_dec(v_a_1063_);
lean_inc(v_b_1064_);
return v_b_1064_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg___boxed(lean_object* v___x_1076_, lean_object* v___x_1077_, lean_object* v___x_1078_, lean_object* v_a_1079_, lean_object* v_b_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v___x_1076_, v___x_1077_, v___x_1078_, v_a_1079_, v_b_1080_);
lean_dec(v_b_1080_);
lean_dec_ref(v___x_1078_);
lean_dec(v___x_1077_);
lean_dec(v___x_1076_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(lean_object* v_trail_1082_){
_start:
{
lean_object* v_str_1083_; lean_object* v_startPos_1084_; lean_object* v_stopPos_1085_; uint8_t v___x_1089_; 
v_str_1083_ = lean_ctor_get(v_trail_1082_, 0);
v_startPos_1084_ = lean_ctor_get(v_trail_1082_, 1);
v_stopPos_1085_ = lean_ctor_get(v_trail_1082_, 2);
v___x_1089_ = lean_string_is_valid_pos(v_str_1083_, v_startPos_1084_);
if (v___x_1089_ == 0)
{
goto v___jp_1086_;
}
else
{
uint8_t v___x_1090_; 
v___x_1090_ = lean_string_is_valid_pos(v_str_1083_, v_stopPos_1085_);
if (v___x_1090_ == 0)
{
goto v___jp_1086_;
}
else
{
uint8_t v___x_1091_; 
v___x_1091_ = lean_nat_dec_le(v_startPos_1084_, v_stopPos_1085_);
if (v___x_1091_ == 0)
{
goto v___jp_1086_;
}
else
{
lean_object* v_searcher_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_searcher_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = lean_box(0);
v___x_1094_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v_stopPos_1085_, v_startPos_1084_, v_str_1083_, v_searcher_1092_, v___x_1093_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_nat_sub(v_stopPos_1085_, v_startPos_1084_);
v___x_1096_ = lean_nat_add(v_startPos_1084_, v___x_1095_);
lean_dec(v___x_1095_);
return v___x_1096_;
}
else
{
lean_object* v_val_1097_; lean_object* v___x_1098_; 
v_val_1097_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_val_1097_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1098_ = lean_nat_add(v_startPos_1084_, v_val_1097_);
lean_dec(v_val_1097_);
return v___x_1098_;
}
}
}
}
v___jp_1086_:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = lean_nat_sub(v_stopPos_1085_, v_startPos_1084_);
v___x_1088_ = lean_nat_add(v_startPos_1084_, v___x_1087_);
lean_dec(v___x_1087_);
return v___x_1088_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop___boxed(lean_object* v_trail_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trail_1099_);
lean_dec_ref(v_trail_1099_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v___x_1103_, lean_object* v___x_1104_, lean_object* v_inst_1105_, lean_object* v_R_1106_, lean_object* v_a_1107_, lean_object* v_b_1108_, lean_object* v_c_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v___x_1101_, v___x_1102_, v___x_1104_, v_a_1107_, v_b_1108_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___boxed(lean_object* v___x_1111_, lean_object* v___x_1112_, lean_object* v___x_1113_, lean_object* v___x_1114_, lean_object* v_inst_1115_, lean_object* v_R_1116_, lean_object* v_a_1117_, lean_object* v_b_1118_, lean_object* v_c_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(v___x_1111_, v___x_1112_, v___x_1113_, v___x_1114_, v_inst_1115_, v_R_1116_, v_a_1117_, v_b_1118_, v_c_1119_);
lean_dec(v_b_1118_);
lean_dec_ref(v___x_1114_);
lean_dec_ref(v___x_1113_);
lean_dec(v___x_1112_);
lean_dec(v___x_1111_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateLeadingAux(lean_object* v_x_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___y_1124_; 
switch(lean_obj_tag(v_x_1121_))
{
case 2:
{
lean_object* v_info_1127_; 
v_info_1127_ = lean_ctor_get(v_x_1121_, 0);
lean_inc(v_info_1127_);
if (lean_obj_tag(v_info_1127_) == 0)
{
lean_object* v_val_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1140_; 
v_val_1128_ = lean_ctor_get(v_x_1121_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1140_ == 0)
{
lean_object* v_unused_1141_; 
v_unused_1141_ = lean_ctor_get(v_x_1121_, 0);
lean_dec(v_unused_1141_);
v___x_1130_ = v_x_1121_;
v_isShared_1131_ = v_isSharedCheck_1140_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_val_1128_);
lean_dec(v_x_1121_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1140_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v_trailing_1132_; lean_object* v_trailStop_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v_trailing_1132_ = lean_ctor_get(v_info_1127_, 2);
v_trailStop_1133_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1132_);
lean_inc(v_trailStop_1133_);
v___x_1134_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1127_, v_a_1122_, v_trailStop_1133_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 0, v___x_1134_);
v___x_1136_ = v___x_1130_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1134_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_val_1128_);
v___x_1136_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v_trailStop_1133_);
return v___x_1138_;
}
}
}
else
{
lean_dec(v_info_1127_);
lean_dec_ref_known(v_x_1121_, 2);
v___y_1124_ = v_a_1122_;
goto v___jp_1123_;
}
}
case 3:
{
lean_object* v_info_1142_; 
v_info_1142_ = lean_ctor_get(v_x_1121_, 0);
lean_inc(v_info_1142_);
if (lean_obj_tag(v_info_1142_) == 0)
{
lean_object* v_rawVal_1143_; lean_object* v_val_1144_; lean_object* v_preresolved_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1157_; 
v_rawVal_1143_ = lean_ctor_get(v_x_1121_, 1);
v_val_1144_ = lean_ctor_get(v_x_1121_, 2);
v_preresolved_1145_ = lean_ctor_get(v_x_1121_, 3);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1157_ == 0)
{
lean_object* v_unused_1158_; 
v_unused_1158_ = lean_ctor_get(v_x_1121_, 0);
lean_dec(v_unused_1158_);
v___x_1147_ = v_x_1121_;
v_isShared_1148_ = v_isSharedCheck_1157_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_preresolved_1145_);
lean_inc(v_val_1144_);
lean_inc(v_rawVal_1143_);
lean_dec(v_x_1121_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1157_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v_trailing_1149_; lean_object* v_trailStop_1150_; lean_object* v___x_1151_; lean_object* v___x_1153_; 
v_trailing_1149_ = lean_ctor_get(v_info_1142_, 2);
v_trailStop_1150_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1149_);
lean_inc(v_trailStop_1150_);
v___x_1151_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1142_, v_a_1122_, v_trailStop_1150_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1151_);
v___x_1153_ = v___x_1147_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_rawVal_1143_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_val_1144_);
lean_ctor_set(v_reuseFailAlloc_1156_, 3, v_preresolved_1145_);
v___x_1153_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
lean_ctor_set(v___x_1155_, 1, v_trailStop_1150_);
return v___x_1155_;
}
}
}
else
{
lean_dec_ref_known(v_x_1121_, 4);
lean_dec(v_info_1142_);
v___y_1124_ = v_a_1122_;
goto v___jp_1123_;
}
}
default: 
{
lean_dec(v_x_1121_);
v___y_1124_ = v_a_1122_;
goto v___jp_1123_;
}
}
v___jp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_box(0);
v___x_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v___y_1124_);
return v___x_1126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
switch(lean_obj_tag(v___y_1159_))
{
case 2:
{
lean_object* v_info_1164_; 
v_info_1164_ = lean_ctor_get(v___y_1159_, 0);
lean_inc(v_info_1164_);
if (lean_obj_tag(v_info_1164_) == 0)
{
lean_object* v_val_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1177_; 
v_val_1165_ = lean_ctor_get(v___y_1159_, 1);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___y_1159_);
if (v_isSharedCheck_1177_ == 0)
{
lean_object* v_unused_1178_; 
v_unused_1178_ = lean_ctor_get(v___y_1159_, 0);
lean_dec(v_unused_1178_);
v___x_1167_ = v___y_1159_;
v_isShared_1168_ = v_isSharedCheck_1177_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_val_1165_);
lean_dec(v___y_1159_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1177_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v_trailing_1169_; lean_object* v_trailStop_1170_; lean_object* v___x_1171_; lean_object* v___x_1173_; 
v_trailing_1169_ = lean_ctor_get(v_info_1164_, 2);
v_trailStop_1170_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1169_);
lean_inc(v_trailStop_1170_);
v___x_1171_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1164_, v___y_1160_, v_trailStop_1170_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1171_);
v___x_1173_ = v___x_1167_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_val_1165_);
v___x_1173_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v_trailStop_1170_);
return v___x_1175_;
}
}
}
else
{
lean_dec(v_info_1164_);
lean_dec_ref_known(v___y_1159_, 2);
goto v___jp_1161_;
}
}
case 3:
{
lean_object* v_info_1179_; 
v_info_1179_ = lean_ctor_get(v___y_1159_, 0);
lean_inc(v_info_1179_);
if (lean_obj_tag(v_info_1179_) == 0)
{
lean_object* v_rawVal_1180_; lean_object* v_val_1181_; lean_object* v_preresolved_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1194_; 
v_rawVal_1180_ = lean_ctor_get(v___y_1159_, 1);
v_val_1181_ = lean_ctor_get(v___y_1159_, 2);
v_preresolved_1182_ = lean_ctor_get(v___y_1159_, 3);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___y_1159_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; 
v_unused_1195_ = lean_ctor_get(v___y_1159_, 0);
lean_dec(v_unused_1195_);
v___x_1184_ = v___y_1159_;
v_isShared_1185_ = v_isSharedCheck_1194_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_preresolved_1182_);
lean_inc(v_val_1181_);
lean_inc(v_rawVal_1180_);
lean_dec(v___y_1159_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1194_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v_trailing_1186_; lean_object* v_trailStop_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
v_trailing_1186_ = lean_ctor_get(v_info_1179_, 2);
v_trailStop_1187_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1186_);
lean_inc(v_trailStop_1187_);
v___x_1188_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1179_, v___y_1160_, v_trailStop_1187_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1188_);
v___x_1190_ = v___x_1184_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_rawVal_1180_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_val_1181_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_preresolved_1182_);
v___x_1190_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v_trailStop_1187_);
return v___x_1192_;
}
}
}
else
{
lean_dec_ref_known(v___y_1159_, 4);
lean_dec(v_info_1179_);
goto v___jp_1161_;
}
}
default: 
{
lean_dec(v___y_1159_);
goto v___jp_1161_;
}
}
v___jp_1161_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = lean_box(0);
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
lean_ctor_set(v___x_1163_, 1, v___y_1160_);
return v___x_1163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(lean_object* v_x_1196_, lean_object* v___y_1197_){
_start:
{
if (lean_obj_tag(v_x_1196_) == 1)
{
lean_object* v_info_1198_; lean_object* v_kind_1199_; lean_object* v_args_1200_; lean_object* v___x_1201_; lean_object* v_fst_1202_; 
v_info_1198_ = lean_ctor_get(v_x_1196_, 0);
lean_inc(v_info_1198_);
v_kind_1199_ = lean_ctor_get(v_x_1196_, 1);
lean_inc(v_kind_1199_);
v_args_1200_ = lean_ctor_get(v_x_1196_, 2);
lean_inc_ref(v_args_1200_);
v___x_1201_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(v_x_1196_, v___y_1197_);
v_fst_1202_ = lean_ctor_get(v___x_1201_, 0);
if (lean_obj_tag(v_fst_1202_) == 0)
{
lean_object* v_snd_1203_; size_t v_sz_1204_; size_t v___x_1205_; lean_object* v___x_1206_; lean_object* v_fst_1207_; lean_object* v_snd_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1216_; 
v_snd_1203_ = lean_ctor_get(v___x_1201_, 1);
lean_inc(v_snd_1203_);
lean_dec_ref(v___x_1201_);
v_sz_1204_ = lean_array_size(v_args_1200_);
v___x_1205_ = ((size_t)0ULL);
v___x_1206_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(v_sz_1204_, v___x_1205_, v_args_1200_, v_snd_1203_);
v_fst_1207_ = lean_ctor_get(v___x_1206_, 0);
v_snd_1208_ = lean_ctor_get(v___x_1206_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1210_ = v___x_1206_;
v_isShared_1211_ = v_isSharedCheck_1216_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_snd_1208_);
lean_inc(v_fst_1207_);
lean_dec(v___x_1206_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1216_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1212_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1212_, 0, v_info_1198_);
lean_ctor_set(v___x_1212_, 1, v_kind_1199_);
lean_ctor_set(v___x_1212_, 2, v_fst_1207_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v___x_1212_);
v___x_1214_ = v___x_1210_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_snd_1208_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
else
{
lean_object* v_snd_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
lean_inc_ref(v_fst_1202_);
lean_dec_ref(v_args_1200_);
lean_dec(v_kind_1199_);
lean_dec(v_info_1198_);
v_snd_1217_ = lean_ctor_get(v___x_1201_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1225_ == 0)
{
lean_object* v_unused_1226_; 
v_unused_1226_ = lean_ctor_get(v___x_1201_, 0);
lean_dec(v_unused_1226_);
v___x_1219_ = v___x_1201_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_snd_1217_);
lean_dec(v___x_1201_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v_val_1221_; lean_object* v___x_1223_; 
v_val_1221_ = lean_ctor_get(v_fst_1202_, 0);
lean_inc(v_val_1221_);
lean_dec_ref_known(v_fst_1202_, 1);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v_val_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_val_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_snd_1217_);
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
else
{
lean_object* v___x_1227_; lean_object* v_fst_1228_; 
lean_inc(v_x_1196_);
v___x_1227_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(v_x_1196_, v___y_1197_);
v_fst_1228_ = lean_ctor_get(v___x_1227_, 0);
if (lean_obj_tag(v_fst_1228_) == 0)
{
lean_object* v_snd_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_snd_1229_ = lean_ctor_get(v___x_1227_, 1);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1236_ == 0)
{
lean_object* v_unused_1237_; 
v_unused_1237_ = lean_ctor_get(v___x_1227_, 0);
lean_dec(v_unused_1237_);
v___x_1231_ = v___x_1227_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_snd_1229_);
lean_dec(v___x_1227_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v_x_1196_);
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_x_1196_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v_snd_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
else
{
lean_object* v_snd_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1246_; 
lean_inc_ref(v_fst_1228_);
lean_dec(v_x_1196_);
v_snd_1238_ = lean_ctor_get(v___x_1227_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v___x_1227_, 0);
lean_dec(v_unused_1247_);
v___x_1240_ = v___x_1227_;
v_isShared_1241_ = v_isSharedCheck_1246_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_snd_1238_);
lean_dec(v___x_1227_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1246_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v_val_1242_; lean_object* v___x_1244_; 
v_val_1242_ = lean_ctor_get(v_fst_1228_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v_fst_1228_, 1);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v_val_1242_);
v___x_1244_ = v___x_1240_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_val_1242_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_snd_1238_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(size_t v_sz_1248_, size_t v_i_1249_, lean_object* v_bs_1250_, lean_object* v___y_1251_){
_start:
{
uint8_t v___x_1252_; 
v___x_1252_ = lean_usize_dec_lt(v_i_1249_, v_sz_1248_);
if (v___x_1252_ == 0)
{
lean_object* v___x_1253_; 
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v_bs_1250_);
lean_ctor_set(v___x_1253_, 1, v___y_1251_);
return v___x_1253_;
}
else
{
lean_object* v_v_1254_; lean_object* v___x_1255_; lean_object* v_fst_1256_; lean_object* v_snd_1257_; lean_object* v___x_1258_; lean_object* v_bs_x27_1259_; size_t v___x_1260_; size_t v___x_1261_; lean_object* v___x_1262_; 
v_v_1254_ = lean_array_uget_borrowed(v_bs_1250_, v_i_1249_);
lean_inc(v_v_1254_);
v___x_1255_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(v_v_1254_, v___y_1251_);
v_fst_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_fst_1256_);
v_snd_1257_ = lean_ctor_get(v___x_1255_, 1);
lean_inc(v_snd_1257_);
lean_dec_ref(v___x_1255_);
v___x_1258_ = lean_unsigned_to_nat(0u);
v_bs_x27_1259_ = lean_array_uset(v_bs_1250_, v_i_1249_, v___x_1258_);
v___x_1260_ = ((size_t)1ULL);
v___x_1261_ = lean_usize_add(v_i_1249_, v___x_1260_);
v___x_1262_ = lean_array_uset(v_bs_x27_1259_, v_i_1249_, v_fst_1256_);
v_i_1249_ = v___x_1261_;
v_bs_1250_ = v___x_1262_;
v___y_1251_ = v_snd_1257_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed(lean_object* v_sz_1264_, lean_object* v_i_1265_, lean_object* v_bs_1266_, lean_object* v___y_1267_){
_start:
{
size_t v_sz_boxed_1268_; size_t v_i_boxed_1269_; lean_object* v_res_1270_; 
v_sz_boxed_1268_ = lean_unbox_usize(v_sz_1264_);
lean_dec(v_sz_1264_);
v_i_boxed_1269_ = lean_unbox_usize(v_i_1265_);
lean_dec(v_i_1265_);
v_res_1270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(v_sz_boxed_1268_, v_i_boxed_1269_, v_bs_1266_, v___y_1267_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_updateLeading(lean_object* v_stx_1271_){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v_fst_1274_; 
v___x_1272_ = lean_unsigned_to_nat(0u);
v___x_1273_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(v_stx_1271_, v___x_1272_);
v_fst_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_fst_1274_);
lean_dec_ref(v___x_1273_);
return v_fst_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_updateTrailing(lean_object* v_trailing_1275_, lean_object* v_x_1276_){
_start:
{
switch(lean_obj_tag(v_x_1276_))
{
case 2:
{
lean_object* v_info_1277_; lean_object* v_val_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1286_; 
v_info_1277_ = lean_ctor_get(v_x_1276_, 0);
v_val_1278_ = lean_ctor_get(v_x_1276_, 1);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_x_1276_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1280_ = v_x_1276_;
v_isShared_1281_ = v_isSharedCheck_1286_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_val_1278_);
lean_inc(v_info_1277_);
lean_dec(v_x_1276_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1286_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1282_ = l_Lean_SourceInfo_updateTrailing(v_trailing_1275_, v_info_1277_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v___x_1282_);
v___x_1284_ = v___x_1280_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v_val_1278_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
case 3:
{
lean_object* v_info_1287_; lean_object* v_rawVal_1288_; lean_object* v_val_1289_; lean_object* v_preresolved_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1298_; 
v_info_1287_ = lean_ctor_get(v_x_1276_, 0);
v_rawVal_1288_ = lean_ctor_get(v_x_1276_, 1);
v_val_1289_ = lean_ctor_get(v_x_1276_, 2);
v_preresolved_1290_ = lean_ctor_get(v_x_1276_, 3);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_x_1276_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1292_ = v_x_1276_;
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_preresolved_1290_);
lean_inc(v_val_1289_);
lean_inc(v_rawVal_1288_);
lean_inc(v_info_1287_);
lean_dec(v_x_1276_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1294_ = l_Lean_SourceInfo_updateTrailing(v_trailing_1275_, v_info_1287_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1294_);
v___x_1296_ = v___x_1292_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_rawVal_1288_);
lean_ctor_set(v_reuseFailAlloc_1297_, 2, v_val_1289_);
lean_ctor_set(v_reuseFailAlloc_1297_, 3, v_preresolved_1290_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
case 1:
{
lean_object* v_info_1299_; lean_object* v_kind_1300_; lean_object* v_args_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v_info_1299_ = lean_ctor_get(v_x_1276_, 0);
v_kind_1300_ = lean_ctor_get(v_x_1276_, 1);
v_args_1301_ = lean_ctor_get(v_x_1276_, 2);
v___x_1302_ = lean_array_get_size(v_args_1301_);
v___x_1303_ = lean_unsigned_to_nat(0u);
v___x_1304_ = lean_nat_dec_eq(v___x_1302_, v___x_1303_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1316_; 
lean_inc_ref(v_args_1301_);
lean_inc(v_kind_1300_);
lean_inc(v_info_1299_);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_x_1276_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; lean_object* v_unused_1318_; lean_object* v_unused_1319_; 
v_unused_1317_ = lean_ctor_get(v_x_1276_, 2);
lean_dec(v_unused_1317_);
v_unused_1318_ = lean_ctor_get(v_x_1276_, 1);
lean_dec(v_unused_1318_);
v_unused_1319_ = lean_ctor_get(v_x_1276_, 0);
lean_dec(v_unused_1319_);
v___x_1306_ = v_x_1276_;
v_isShared_1307_ = v_isSharedCheck_1316_;
goto v_resetjp_1305_;
}
else
{
lean_dec(v_x_1276_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1316_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v_i_1309_; lean_object* v___x_1310_; lean_object* v_last_1311_; lean_object* v_args_1312_; lean_object* v___x_1314_; 
v___x_1308_ = lean_unsigned_to_nat(1u);
v_i_1309_ = lean_nat_sub(v___x_1302_, v___x_1308_);
v___x_1310_ = lean_array_fget_borrowed(v_args_1301_, v_i_1309_);
lean_inc(v___x_1310_);
v_last_1311_ = l_Lean_Syntax_updateTrailing(v_trailing_1275_, v___x_1310_);
v_args_1312_ = lean_array_fset(v_args_1301_, v_i_1309_, v_last_1311_);
lean_dec(v_i_1309_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 2, v_args_1312_);
v___x_1314_ = v___x_1306_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_info_1299_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_kind_1300_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v_args_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
else
{
lean_dec_ref(v_trailing_1275_);
return v_x_1276_;
}
}
default: 
{
lean_dec_ref(v_trailing_1275_);
return v_x_1276_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(lean_object* v_x_1320_, lean_object* v_x_1321_){
_start:
{
if (lean_obj_tag(v_x_1321_) == 0)
{
return v_x_1320_;
}
else
{
lean_object* v_head_1322_; lean_object* v_tail_1323_; lean_object* v___x_1324_; 
v_head_1322_ = lean_ctor_get(v_x_1321_, 0);
lean_inc(v_head_1322_);
v_tail_1323_ = lean_ctor_get(v_x_1321_, 1);
lean_inc(v_tail_1323_);
lean_dec_ref_known(v_x_1321_, 2);
v___x_1324_ = l_Lean_Name_append(v_x_1320_, v_head_1322_);
v_x_1320_ = v___x_1324_;
v_x_1321_ = v_tail_1323_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(lean_object* v_n_1328_, lean_object* v_nFields_x3f_1329_){
_start:
{
if (lean_obj_tag(v_nFields_x3f_1329_) == 1)
{
lean_object* v_val_1330_; lean_object* v_nameComps_1331_; lean_object* v___x_1332_; lean_object* v_nPrefix_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_namePrefix_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v_val_1330_ = lean_ctor_get(v_nFields_x3f_1329_, 0);
v_nameComps_1331_ = l_Lean_Name_components(v_n_1328_);
v___x_1332_ = l_List_lengthTR___redArg(v_nameComps_1331_);
v_nPrefix_1333_ = lean_nat_sub(v___x_1332_, v_val_1330_);
lean_dec(v___x_1332_);
v___x_1334_ = lean_box(0);
v___x_1335_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0));
lean_inc(v_nPrefix_1333_);
lean_inc(v_nameComps_1331_);
v___x_1336_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_nameComps_1331_, v_nameComps_1331_, v_nPrefix_1333_, v___x_1335_);
v_namePrefix_1337_ = l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(v___x_1334_, v___x_1336_);
v___x_1338_ = l_List_drop___redArg(v_nPrefix_1333_, v_nameComps_1331_);
lean_dec(v_nameComps_1331_);
v___x_1339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1339_, 0, v_namePrefix_1337_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
return v___x_1339_;
}
else
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Name_components(v_n_1328_);
return v___x_1340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___boxed(lean_object* v_n_1341_, lean_object* v_nFields_x3f_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(v_n_1341_, v_nFields_x3f_1342_);
lean_dec(v_nFields_x3f_1342_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(lean_object* v_msg_1344_){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_box(0);
v___x_1346_ = lean_panic_fn_borrowed(v___x_1345_, v_msg_1344_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(lean_object* v_x_1347_, lean_object* v_x_1348_){
_start:
{
if (lean_obj_tag(v_x_1348_) == 0)
{
return v_x_1347_;
}
else
{
lean_object* v_head_1349_; lean_object* v_tail_1350_; lean_object* v_startPos_1351_; lean_object* v_stopPos_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v_head_1349_ = lean_ctor_get(v_x_1348_, 0);
v_tail_1350_ = lean_ctor_get(v_x_1348_, 1);
v_startPos_1351_ = lean_ctor_get(v_head_1349_, 1);
v_stopPos_1352_ = lean_ctor_get(v_head_1349_, 2);
v___x_1353_ = lean_nat_sub(v_stopPos_1352_, v_startPos_1351_);
v___x_1354_ = lean_nat_add(v_x_1347_, v___x_1353_);
lean_dec(v___x_1353_);
lean_dec(v_x_1347_);
v___x_1355_ = lean_unsigned_to_nat(1u);
v___x_1356_ = lean_nat_add(v___x_1354_, v___x_1355_);
lean_dec(v___x_1354_);
v_x_1347_ = v___x_1356_;
v_x_1348_ = v_tail_1350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2___boxed(lean_object* v_x_1358_, lean_object* v_x_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(v_x_1358_, v_x_1359_);
lean_dec(v_x_1359_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(lean_object* v_rawVal_1365_, lean_object* v_pos_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_){
_start:
{
if (lean_obj_tag(v_a_1367_) == 0)
{
lean_object* v___x_1369_; 
v___x_1369_ = l_List_reverse___redArg(v_a_1368_);
return v___x_1369_;
}
else
{
lean_object* v_head_1370_; lean_object* v_tail_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1389_; 
v_head_1370_ = lean_ctor_get(v_a_1367_, 0);
v_tail_1371_ = lean_ctor_get(v_a_1367_, 1);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1367_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1373_ = v_a_1367_;
v_isShared_1374_ = v_isSharedCheck_1389_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_tail_1371_);
lean_inc(v_head_1370_);
lean_dec(v_a_1367_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1389_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v_stopPos_1375_; lean_object* v_startPos_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v_info_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v_stopPos_1375_ = lean_ctor_get(v_head_1370_, 2);
lean_inc(v_stopPos_1375_);
lean_dec(v_head_1370_);
v_startPos_1376_ = lean_ctor_get(v_rawVal_1365_, 1);
v___x_1377_ = lean_nat_sub(v_stopPos_1375_, v_startPos_1376_);
lean_dec(v_stopPos_1375_);
v___x_1378_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
v___x_1379_ = lean_nat_add(v___x_1377_, v_pos_1366_);
lean_dec(v___x_1377_);
v___x_1380_ = lean_unsigned_to_nat(1u);
v___x_1381_ = lean_nat_add(v___x_1380_, v___x_1379_);
v_info_1382_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_1382_, 0, v___x_1378_);
lean_ctor_set(v_info_1382_, 1, v___x_1379_);
lean_ctor_set(v_info_1382_, 2, v___x_1378_);
lean_ctor_set(v_info_1382_, 3, v___x_1381_);
v___x_1383_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1));
v___x_1384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1384_, 0, v_info_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 1, v_a_1368_);
lean_ctor_set(v___x_1373_, 0, v___x_1384_);
v___x_1386_ = v___x_1373_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_a_1368_);
v___x_1386_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
v_a_1367_ = v_tail_1371_;
v_a_1368_ = v___x_1386_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___boxed(lean_object* v_rawVal_1390_, lean_object* v_pos_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(v_rawVal_1390_, v_pos_1391_, v_a_1392_, v_a_1393_);
lean_dec(v_pos_1391_);
lean_dec_ref(v_rawVal_1390_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___lam__0(lean_object* v_00___1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
return v___x_1396_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = lean_box(0);
v___x_1398_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___lam__0(v___x_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(lean_object* v_rawVal_1399_, lean_object* v_pos_1400_, lean_object* v_trailing_1401_, lean_object* v_leading_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
if (lean_obj_tag(v_a_1403_) == 0)
{
lean_object* v___x_1405_; 
lean_dec_ref(v_leading_1402_);
lean_dec_ref(v_trailing_1401_);
v___x_1405_ = l_List_reverse___redArg(v_a_1404_);
return v___x_1405_;
}
else
{
lean_object* v_head_1406_; lean_object* v_snd_1407_; lean_object* v_tail_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1438_; 
v_head_1406_ = lean_ctor_get(v_a_1403_, 0);
lean_inc(v_head_1406_);
v_snd_1407_ = lean_ctor_get(v_head_1406_, 1);
lean_inc(v_snd_1407_);
v_tail_1408_ = lean_ctor_get(v_a_1403_, 1);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_a_1403_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; 
v_unused_1439_ = lean_ctor_get(v_a_1403_, 0);
lean_dec(v_unused_1439_);
v___x_1410_ = v_a_1403_;
v_isShared_1411_ = v_isSharedCheck_1438_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_tail_1408_);
lean_dec(v_a_1403_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1438_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v_fst_1412_; lean_object* v_startPos_1413_; lean_object* v_stopPos_1414_; lean_object* v_startPos_1415_; lean_object* v_stopPos_1416_; lean_object* v_off_1417_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1432_; lean_object* v___x_1435_; uint8_t v_decide_1436_; 
v_fst_1412_ = lean_ctor_get(v_head_1406_, 0);
lean_inc(v_fst_1412_);
lean_dec(v_head_1406_);
v_startPos_1413_ = lean_ctor_get(v_snd_1407_, 1);
v_stopPos_1414_ = lean_ctor_get(v_snd_1407_, 2);
v_startPos_1415_ = lean_ctor_get(v_rawVal_1399_, 1);
v_stopPos_1416_ = lean_ctor_get(v_rawVal_1399_, 2);
v_off_1417_ = lean_nat_sub(v_startPos_1413_, v_startPos_1415_);
v___x_1435_ = lean_unsigned_to_nat(0u);
v_decide_1436_ = lean_nat_dec_eq(v_off_1417_, v___x_1435_);
if (v_decide_1436_ == 0)
{
lean_object* v___x_1437_; 
v___x_1437_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0, &l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0);
v___y_1432_ = v___x_1437_;
goto v___jp_1431_;
}
else
{
lean_inc_ref(v_leading_1402_);
v___y_1432_ = v_leading_1402_;
goto v___jp_1431_;
}
v___jp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v_info_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1428_; 
v___x_1421_ = lean_nat_add(v_off_1417_, v_pos_1400_);
lean_dec(v_off_1417_);
v___x_1422_ = lean_nat_sub(v_stopPos_1414_, v_startPos_1413_);
v___x_1423_ = lean_nat_add(v___x_1422_, v___x_1421_);
lean_dec(v___x_1422_);
v_info_1424_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_1424_, 0, v___y_1419_);
lean_ctor_set(v_info_1424_, 1, v___x_1421_);
lean_ctor_set(v_info_1424_, 2, v___y_1420_);
lean_ctor_set(v_info_1424_, 3, v___x_1423_);
v___x_1425_ = lean_box(0);
v___x_1426_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1426_, 0, v_info_1424_);
lean_ctor_set(v___x_1426_, 1, v_snd_1407_);
lean_ctor_set(v___x_1426_, 2, v_fst_1412_);
lean_ctor_set(v___x_1426_, 3, v___x_1425_);
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 1, v_a_1404_);
lean_ctor_set(v___x_1410_, 0, v___x_1426_);
v___x_1428_ = v___x_1410_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1426_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v_a_1404_);
v___x_1428_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
v_a_1403_ = v_tail_1408_;
v_a_1404_ = v___x_1428_;
goto _start;
}
}
v___jp_1431_:
{
uint8_t v_decide_1433_; 
v_decide_1433_ = lean_nat_dec_eq(v_stopPos_1414_, v_stopPos_1416_);
if (v_decide_1433_ == 0)
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0, &l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___closed__0);
v___y_1419_ = v___y_1432_;
v___y_1420_ = v___x_1434_;
goto v___jp_1418_;
}
else
{
lean_inc_ref(v_trailing_1401_);
v___y_1419_ = v___y_1432_;
v___y_1420_ = v_trailing_1401_;
goto v___jp_1418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___boxed(lean_object* v_rawVal_1440_, lean_object* v_pos_1441_, lean_object* v_trailing_1442_, lean_object* v_leading_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(v_rawVal_1440_, v_pos_1441_, v_trailing_1442_, v_leading_1443_, v_a_1444_, v_a_1445_);
lean_dec(v_pos_1441_);
lean_dec_ref(v_rawVal_1440_);
return v_res_1446_;
}
}
static lean_object* _init_l_Lean_Syntax_identComponents_x3f___closed__4(void){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1452_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__3));
v___x_1453_ = lean_unsigned_to_nat(9u);
v___x_1454_ = lean_unsigned_to_nat(358u);
v___x_1455_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__2));
v___x_1456_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__1));
v___x_1457_ = l_mkPanicMessageWithDecl(v___x_1456_, v___x_1455_, v___x_1454_, v___x_1453_, v___x_1452_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f(lean_object* v_stx_1458_, lean_object* v_nFields_x3f_1459_){
_start:
{
if (lean_obj_tag(v_stx_1458_) == 3)
{
lean_object* v_info_1460_; 
v_info_1460_ = lean_ctor_get(v_stx_1458_, 0);
lean_inc(v_info_1460_);
if (lean_obj_tag(v_info_1460_) == 0)
{
lean_object* v_rawVal_1461_; lean_object* v_val_1462_; lean_object* v_leading_1463_; lean_object* v_pos_1464_; lean_object* v_trailing_1465_; lean_object* v_rawComps_1466_; uint8_t v___x_1467_; 
v_rawVal_1461_ = lean_ctor_get(v_stx_1458_, 1);
lean_inc_ref_n(v_rawVal_1461_, 2);
v_val_1462_ = lean_ctor_get(v_stx_1458_, 2);
lean_inc(v_val_1462_);
lean_dec_ref_known(v_stx_1458_, 4);
v_leading_1463_ = lean_ctor_get(v_info_1460_, 0);
lean_inc_ref(v_leading_1463_);
v_pos_1464_ = lean_ctor_get(v_info_1460_, 1);
lean_inc(v_pos_1464_);
v_trailing_1465_ = lean_ctor_get(v_info_1460_, 2);
lean_inc_ref(v_trailing_1465_);
lean_dec_ref_known(v_info_1460_, 4);
v_rawComps_1466_ = l_Lean_Syntax_splitNameLit(v_rawVal_1461_);
v___x_1467_ = l_List_isEmpty___redArg(v_rawComps_1466_);
if (v___x_1467_ == 0)
{
lean_object* v_val_1468_; lean_object* v_nameComps_1469_; lean_object* v___y_1471_; 
v_val_1468_ = l_Lean_Name_eraseMacroScopes(v_val_1462_);
lean_dec(v_val_1462_);
v_nameComps_1469_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(v_val_1468_, v_nFields_x3f_1459_);
if (lean_obj_tag(v_nFields_x3f_1459_) == 1)
{
lean_object* v_val_1485_; lean_object* v_str_1486_; lean_object* v_startPos_1487_; lean_object* v_stopPos_1488_; lean_object* v___x_1489_; lean_object* v_nPrefix_1490_; lean_object* v___y_1492_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v_prefixSz_1498_; lean_object* v___x_1499_; lean_object* v_prefixSz_1500_; lean_object* v___y_1502_; uint8_t v___x_1507_; 
v_val_1485_ = lean_ctor_get(v_nFields_x3f_1459_, 0);
v_str_1486_ = lean_ctor_get(v_rawVal_1461_, 0);
v_startPos_1487_ = lean_ctor_get(v_rawVal_1461_, 1);
v_stopPos_1488_ = lean_ctor_get(v_rawVal_1461_, 2);
v___x_1489_ = l_List_lengthTR___redArg(v_rawComps_1466_);
v_nPrefix_1490_ = lean_nat_sub(v___x_1489_, v_val_1485_);
lean_dec(v___x_1489_);
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__0));
lean_inc(v_nPrefix_1490_);
lean_inc(v_rawComps_1466_);
v___x_1497_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_rawComps_1466_, v_rawComps_1466_, v_nPrefix_1490_, v___x_1496_);
v_prefixSz_1498_ = l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(v___x_1495_, v___x_1497_);
lean_dec(v___x_1497_);
v___x_1499_ = lean_unsigned_to_nat(1u);
v_prefixSz_1500_ = lean_nat_sub(v_prefixSz_1498_, v___x_1499_);
lean_dec(v_prefixSz_1498_);
v___x_1507_ = lean_nat_dec_le(v_prefixSz_1500_, v___x_1495_);
if (v___x_1507_ == 0)
{
uint8_t v___x_1508_; 
v___x_1508_ = lean_nat_dec_le(v_stopPos_1488_, v_startPos_1487_);
if (v___x_1508_ == 0)
{
lean_inc(v_startPos_1487_);
v___y_1502_ = v_startPos_1487_;
goto v___jp_1501_;
}
else
{
lean_inc(v_stopPos_1488_);
v___y_1502_ = v_stopPos_1488_;
goto v___jp_1501_;
}
}
else
{
lean_object* v___x_1509_; 
lean_dec(v_prefixSz_1500_);
v___x_1509_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
v___y_1492_ = v___x_1509_;
goto v___jp_1491_;
}
v___jp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = l_List_drop___redArg(v_nPrefix_1490_, v_rawComps_1466_);
lean_dec(v_rawComps_1466_);
v___x_1494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___y_1492_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___y_1471_ = v___x_1494_;
goto v___jp_1470_;
}
v___jp_1501_:
{
lean_object* v___x_1503_; uint8_t v___x_1504_; 
v___x_1503_ = lean_nat_add(v_startPos_1487_, v_prefixSz_1500_);
lean_dec(v_prefixSz_1500_);
v___x_1504_ = lean_nat_dec_le(v_stopPos_1488_, v___x_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; 
lean_inc_ref(v_str_1486_);
v___x_1505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1505_, 0, v_str_1486_);
lean_ctor_set(v___x_1505_, 1, v___y_1502_);
lean_ctor_set(v___x_1505_, 2, v___x_1503_);
v___y_1492_ = v___x_1505_;
goto v___jp_1491_;
}
else
{
lean_object* v___x_1506_; 
lean_dec(v___x_1503_);
lean_inc(v_stopPos_1488_);
lean_inc_ref(v_str_1486_);
v___x_1506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1506_, 0, v_str_1486_);
lean_ctor_set(v___x_1506_, 1, v___y_1502_);
lean_ctor_set(v___x_1506_, 2, v_stopPos_1488_);
v___y_1492_ = v___x_1506_;
goto v___jp_1491_;
}
}
}
else
{
v___y_1471_ = v_rawComps_1466_;
goto v___jp_1470_;
}
v___jp_1470_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1472_ = l_List_lengthTR___redArg(v_nameComps_1469_);
v___x_1473_ = l_List_lengthTR___redArg(v___y_1471_);
v___x_1474_ = lean_nat_dec_eq(v___x_1472_, v___x_1473_);
lean_dec(v___x_1473_);
lean_dec(v___x_1472_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; 
lean_dec(v___y_1471_);
lean_dec(v_nameComps_1469_);
lean_dec_ref(v_trailing_1465_);
lean_dec(v_pos_1464_);
lean_dec_ref(v_leading_1463_);
lean_dec_ref(v_rawVal_1461_);
v___x_1475_ = lean_box(0);
return v___x_1475_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v_comps_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v_seps_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
lean_inc(v___y_1471_);
v___x_1476_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v_nameComps_1469_, v___y_1471_);
v___x_1477_ = lean_box(0);
v_comps_1478_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(v_rawVal_1461_, v_pos_1464_, v_trailing_1465_, v_leading_1463_, v___x_1476_, v___x_1477_);
v___x_1479_ = lean_array_mk(v___y_1471_);
v___x_1480_ = lean_array_pop(v___x_1479_);
v___x_1481_ = lean_array_to_list(v___x_1480_);
v_seps_1482_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(v_rawVal_1461_, v_pos_1464_, v___x_1481_, v___x_1477_);
lean_dec(v_pos_1464_);
lean_dec_ref(v_rawVal_1461_);
v___x_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1483_, 0, v_comps_1478_);
lean_ctor_set(v___x_1483_, 1, v_seps_1482_);
v___x_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
return v___x_1484_;
}
}
}
else
{
lean_object* v___x_1510_; 
lean_dec(v_rawComps_1466_);
lean_dec_ref(v_trailing_1465_);
lean_dec(v_pos_1464_);
lean_dec_ref(v_leading_1463_);
lean_dec(v_val_1462_);
lean_dec_ref(v_rawVal_1461_);
v___x_1510_ = lean_box(0);
return v___x_1510_;
}
}
else
{
lean_object* v___x_1511_; 
lean_dec_ref_known(v_stx_1458_, 4);
lean_dec(v_info_1460_);
v___x_1511_ = lean_box(0);
return v___x_1511_;
}
}
else
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v_stx_1458_);
v___x_1512_ = lean_obj_once(&l_Lean_Syntax_identComponents_x3f___closed__4, &l_Lean_Syntax_identComponents_x3f___closed__4_once, _init_l_Lean_Syntax_identComponents_x3f___closed__4);
v___x_1513_ = l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(v___x_1512_);
return v___x_1513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f___boxed(lean_object* v_stx_1514_, lean_object* v_nFields_x3f_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_Syntax_identComponents_x3f(v_stx_1514_, v_nFields_x3f_1515_);
lean_dec(v_nFields_x3f_1515_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(lean_object* v_n_1517_, lean_object* v_nFields_x3f_1518_){
_start:
{
if (lean_obj_tag(v_nFields_x3f_1518_) == 1)
{
lean_object* v_val_1519_; lean_object* v_nameComps_1520_; lean_object* v___x_1521_; lean_object* v_nPrefix_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v_namePrefix_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_val_1519_ = lean_ctor_get(v_nFields_x3f_1518_, 0);
v_nameComps_1520_ = l_Lean_Name_components(v_n_1517_);
v___x_1521_ = l_List_lengthTR___redArg(v_nameComps_1520_);
v_nPrefix_1522_ = lean_nat_sub(v___x_1521_, v_val_1519_);
lean_dec(v___x_1521_);
v___x_1523_ = lean_box(0);
v___x_1524_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0));
lean_inc(v_nPrefix_1522_);
lean_inc(v_nameComps_1520_);
v___x_1525_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_nameComps_1520_, v_nameComps_1520_, v_nPrefix_1522_, v___x_1524_);
v_namePrefix_1526_ = l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(v___x_1523_, v___x_1525_);
v___x_1527_ = l_List_drop___redArg(v_nPrefix_1522_, v_nameComps_1520_);
lean_dec(v_nameComps_1520_);
v___x_1528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1528_, 0, v_namePrefix_1526_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
return v___x_1528_;
}
else
{
lean_object* v___x_1529_; 
v___x_1529_ = l_Lean_Name_components(v_n_1517_);
return v___x_1529_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps___boxed(lean_object* v_n_1530_, lean_object* v_nFields_x3f_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_n_1530_, v_nFields_x3f_1531_);
lean_dec(v_nFields_x3f_1531_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_spec__1(lean_object* v_msg_1533_){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = lean_box(0);
v___x_1535_ = lean_panic_fn_borrowed(v___x_1534_, v_msg_1533_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(lean_object* v_info_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_){
_start:
{
if (lean_obj_tag(v_a_1537_) == 0)
{
lean_object* v___x_1539_; 
lean_dec(v_info_1536_);
v___x_1539_ = l_List_reverse___redArg(v_a_1538_);
return v___x_1539_;
}
else
{
lean_object* v_head_1540_; lean_object* v_tail_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1556_; 
v_head_1540_ = lean_ctor_get(v_a_1537_, 0);
v_tail_1541_ = lean_ctor_get(v_a_1537_, 1);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_a_1537_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1543_ = v_a_1537_;
v_isShared_1544_ = v_isSharedCheck_1556_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_tail_1541_);
lean_inc(v_head_1540_);
lean_dec(v_a_1537_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1556_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
uint8_t v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1545_ = 1;
lean_inc(v_head_1540_);
v___x_1546_ = l_Lean_Name_toString(v_head_1540_, v___x_1545_);
v___x_1547_ = lean_unsigned_to_nat(0u);
v___x_1548_ = lean_string_utf8_byte_size(v___x_1546_);
v___x_1549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1546_);
lean_ctor_set(v___x_1549_, 1, v___x_1547_);
lean_ctor_set(v___x_1549_, 2, v___x_1548_);
v___x_1550_ = lean_box(0);
lean_inc(v_info_1536_);
v___x_1551_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1551_, 0, v_info_1536_);
lean_ctor_set(v___x_1551_, 1, v___x_1549_);
lean_ctor_set(v___x_1551_, 2, v_head_1540_);
lean_ctor_set(v___x_1551_, 3, v___x_1550_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 1, v_a_1538_);
lean_ctor_set(v___x_1543_, 0, v___x_1551_);
v___x_1553_ = v___x_1543_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_a_1538_);
v___x_1553_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
v_a_1537_ = v_tail_1541_;
v_a_1538_ = v___x_1553_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Syntax_identComponents___closed__1(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1558_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__3));
v___x_1559_ = lean_unsigned_to_nat(9u);
v___x_1560_ = lean_unsigned_to_nat(393u);
v___x_1561_ = ((lean_object*)(l_Lean_Syntax_identComponents___closed__0));
v___x_1562_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__1));
v___x_1563_ = l_mkPanicMessageWithDecl(v___x_1562_, v___x_1561_, v___x_1560_, v___x_1559_, v___x_1558_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents(lean_object* v_stx_1564_, lean_object* v_nFields_x3f_1565_){
_start:
{
if (lean_obj_tag(v_stx_1564_) == 3)
{
lean_object* v_info_1566_; lean_object* v_rawVal_1567_; lean_object* v_val_1568_; lean_object* v_val_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v_info_1566_ = lean_ctor_get(v_stx_1564_, 0);
lean_inc(v_info_1566_);
v_rawVal_1567_ = lean_ctor_get(v_stx_1564_, 1);
v_val_1568_ = lean_ctor_get(v_stx_1564_, 2);
v_val_1569_ = l_Lean_Name_eraseMacroScopes(v_val_1568_);
v___x_1570_ = l_Lean_Name_getNumParts(v_val_1569_);
v___x_1571_ = lean_unsigned_to_nat(1u);
v___x_1572_ = lean_nat_dec_le(v___x_1570_, v___x_1571_);
lean_dec(v___x_1570_);
if (v___x_1572_ == 0)
{
if (lean_obj_tag(v_info_1566_) == 0)
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lean_Syntax_identComponents_x3f(v_stx_1564_, v_nFields_x3f_1565_);
if (lean_obj_tag(v___x_1573_) == 1)
{
lean_object* v_val_1574_; lean_object* v_fst_1575_; 
lean_dec_ref_known(v_info_1566_, 4);
lean_dec(v_val_1569_);
v_val_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_val_1574_);
lean_dec_ref_known(v___x_1573_, 1);
v_fst_1575_ = lean_ctor_get(v_val_1574_, 0);
lean_inc(v_fst_1575_);
lean_dec(v_val_1574_);
return v_fst_1575_;
}
else
{
lean_object* v_nameComps_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
lean_dec(v___x_1573_);
v_nameComps_1576_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_val_1569_, v_nFields_x3f_1565_);
v___x_1577_ = lean_box(0);
v___x_1578_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(v_info_1566_, v_nameComps_1576_, v___x_1577_);
return v___x_1578_;
}
}
else
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_dec_ref_known(v_stx_1564_, 4);
v___x_1579_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_val_1569_, v_nFields_x3f_1565_);
v___x_1580_ = lean_box(0);
v___x_1581_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(v_info_1566_, v___x_1579_, v___x_1580_);
return v___x_1581_;
}
}
else
{
lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1590_; 
lean_inc_ref(v_rawVal_1567_);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_stx_1564_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; lean_object* v_unused_1592_; lean_object* v_unused_1593_; lean_object* v_unused_1594_; 
v_unused_1591_ = lean_ctor_get(v_stx_1564_, 3);
lean_dec(v_unused_1591_);
v_unused_1592_ = lean_ctor_get(v_stx_1564_, 2);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_stx_1564_, 1);
lean_dec(v_unused_1593_);
v_unused_1594_ = lean_ctor_get(v_stx_1564_, 0);
lean_dec(v_unused_1594_);
v___x_1583_ = v_stx_1564_;
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
else
{
lean_dec(v_stx_1564_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1585_ = lean_box(0);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 3, v___x_1585_);
lean_ctor_set(v___x_1583_, 2, v_val_1569_);
v___x_1587_ = v___x_1583_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_info_1566_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_rawVal_1567_);
lean_ctor_set(v_reuseFailAlloc_1589_, 2, v_val_1569_);
lean_ctor_set(v_reuseFailAlloc_1589_, 3, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v___x_1585_);
return v___x_1588_;
}
}
}
}
else
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
lean_dec(v_stx_1564_);
v___x_1595_ = lean_obj_once(&l_Lean_Syntax_identComponents___closed__1, &l_Lean_Syntax_identComponents___closed__1_once, _init_l_Lean_Syntax_identComponents___closed__1);
v___x_1596_ = l_panic___at___00Lean_Syntax_identComponents_spec__1(v___x_1595_);
return v___x_1596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents___boxed(lean_object* v_stx_1597_, lean_object* v_nFields_x3f_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lean_Syntax_identComponents(v_stx_1597_, v_nFields_x3f_1598_);
lean_dec(v_nFields_x3f_1598_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown(lean_object* v_stx_1600_, uint8_t v_firstChoiceOnly_1601_){
_start:
{
lean_object* v___x_1602_; 
v___x_1602_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1602_, 0, v_stx_1600_);
lean_ctor_set_uint8(v___x_1602_, sizeof(void*)*1, v_firstChoiceOnly_1601_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown___boxed(lean_object* v_stx_1603_, lean_object* v_firstChoiceOnly_1604_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1605_; lean_object* v_res_1606_; 
v_firstChoiceOnly_boxed_1605_ = lean_unbox(v_firstChoiceOnly_1604_);
v_res_1606_ = l_Lean_Syntax_topDown(v_stx_1603_, v_firstChoiceOnly_boxed_1605_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0(lean_object* v_toPure_1607_, lean_object* v_____r_1608_, lean_object* v_b_1609_){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1610_, 0, v_b_1609_);
v___x_1611_ = lean_apply_2(v_toPure_1607_, lean_box(0), v___x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1(lean_object* v___f_1612_, lean_object* v_toPure_1613_, lean_object* v_____s_1614_){
_start:
{
lean_object* v_fst_1615_; 
v_fst_1615_ = lean_ctor_get(v_____s_1614_, 0);
if (lean_obj_tag(v_fst_1615_) == 0)
{
lean_object* v_snd_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_dec(v_toPure_1613_);
v_snd_1616_ = lean_ctor_get(v_____s_1614_, 1);
lean_inc(v_snd_1616_);
lean_dec_ref(v_____s_1614_);
v___x_1617_ = lean_box(0);
v___x_1618_ = lean_apply_2(v___f_1612_, v___x_1617_, v_snd_1616_);
return v___x_1618_;
}
else
{
lean_object* v_val_1619_; lean_object* v___x_1620_; 
lean_inc_ref(v_fst_1615_);
lean_dec_ref(v_____s_1614_);
lean_dec(v___f_1612_);
v_val_1619_ = lean_ctor_get(v_fst_1615_, 0);
lean_inc(v_val_1619_);
lean_dec_ref_known(v_fst_1615_, 1);
v___x_1620_ = lean_apply_2(v_toPure_1613_, lean_box(0), v_val_1619_);
return v___x_1620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2(lean_object* v_snd_1621_, lean_object* v_toPure_1622_, lean_object* v___x_1623_, lean_object* v_____do__lift_1624_){
_start:
{
if (lean_obj_tag(v_____do__lift_1624_) == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
lean_dec(v___x_1623_);
v___x_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_____do__lift_1624_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
lean_ctor_set(v___x_1626_, 1, v_snd_1621_);
v___x_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
v___x_1628_ = lean_apply_2(v_toPure_1622_, lean_box(0), v___x_1627_);
return v___x_1628_;
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1638_; 
lean_dec(v_snd_1621_);
v_a_1629_ = lean_ctor_get(v_____do__lift_1624_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_____do__lift_1624_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1631_ = v_____do__lift_1624_;
v_isShared_1632_ = v_isSharedCheck_1638_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v_____do__lift_1624_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1638_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1633_; lean_object* v___x_1635_; 
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1623_);
lean_ctor_set(v___x_1633_, 1, v_a_1629_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 0, v___x_1633_);
v___x_1635_ = v___x_1631_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
lean_object* v___x_1636_; 
v___x_1636_ = lean_apply_2(v_toPure_1622_, lean_box(0), v___x_1635_);
return v___x_1636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed(lean_object* v_toPure_1639_, lean_object* v___x_1640_, lean_object* v_inst_1641_, lean_object* v_f_1642_, lean_object* v_firstChoiceOnly_1643_, lean_object* v_toBind_1644_, lean_object* v_a_1645_, lean_object* v_x_1646_, lean_object* v___y_1647_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1648_; lean_object* v_res_1649_; 
v_firstChoiceOnly_boxed_1648_ = lean_unbox(v_firstChoiceOnly_1643_);
v_res_1649_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(v_toPure_1639_, v___x_1640_, v_inst_1641_, v_f_1642_, v_firstChoiceOnly_boxed_1648_, v_toBind_1644_, v_a_1645_, v_x_1646_, v___y_1647_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(lean_object* v_toPure_1653_, lean_object* v_stx_1654_, lean_object* v_inst_1655_, lean_object* v_f_1656_, uint8_t v_firstChoiceOnly_1657_, lean_object* v_toBind_1658_, lean_object* v___f_1659_, lean_object* v___x_1660_, lean_object* v___f_1661_, lean_object* v_____do__lift_1662_){
_start:
{
if (lean_obj_tag(v_____do__lift_1662_) == 0)
{
lean_object* v___x_1663_; 
lean_dec(v___f_1661_);
lean_dec(v___f_1659_);
lean_dec(v_toBind_1658_);
lean_dec(v_f_1656_);
lean_dec_ref(v_inst_1655_);
lean_dec(v_stx_1654_);
v___x_1663_ = lean_apply_2(v_toPure_1653_, lean_box(0), v_____do__lift_1662_);
return v___x_1663_;
}
else
{
if (lean_obj_tag(v_stx_1654_) == 1)
{
lean_object* v_a_1664_; lean_object* v_kind_1665_; lean_object* v_args_1666_; 
lean_dec(v___f_1661_);
v_a_1664_ = lean_ctor_get(v_____do__lift_1662_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v_____do__lift_1662_, 1);
v_kind_1665_ = lean_ctor_get(v_stx_1654_, 1);
lean_inc(v_kind_1665_);
v_args_1666_ = lean_ctor_get(v_stx_1654_, 2);
lean_inc_ref(v_args_1666_);
lean_dec_ref_known(v_stx_1654_, 3);
if (v_firstChoiceOnly_1657_ == 0)
{
lean_dec(v_kind_1665_);
goto v___jp_1667_;
}
else
{
lean_object* v___x_1676_; uint8_t v___x_1677_; 
v___x_1676_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1677_ = lean_name_eq(v_kind_1665_, v___x_1676_);
lean_dec(v_kind_1665_);
if (v___x_1677_ == 0)
{
goto v___jp_1667_;
}
else
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
lean_dec(v___f_1659_);
lean_dec(v_toBind_1658_);
lean_dec(v_toPure_1653_);
v___x_1678_ = lean_unsigned_to_nat(0u);
v___x_1679_ = lean_array_get(v___x_1660_, v_args_1666_, v___x_1678_);
lean_dec_ref(v_args_1666_);
v___x_1680_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1655_, v_f_1656_, v_firstChoiceOnly_1657_, v___x_1679_, v_a_1664_);
return v___x_1680_;
}
}
v___jp_1667_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___f_1670_; lean_object* v___x_1671_; size_t v_sz_1672_; size_t v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1668_ = lean_box(0);
v___x_1669_ = lean_box(v_firstChoiceOnly_1657_);
lean_inc(v_toBind_1658_);
lean_inc_ref(v_inst_1655_);
v___f_1670_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed), 9, 6);
lean_closure_set(v___f_1670_, 0, v_toPure_1653_);
lean_closure_set(v___f_1670_, 1, v___x_1668_);
lean_closure_set(v___f_1670_, 2, v_inst_1655_);
lean_closure_set(v___f_1670_, 3, v_f_1656_);
lean_closure_set(v___f_1670_, 4, v___x_1669_);
lean_closure_set(v___f_1670_, 5, v_toBind_1658_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1668_);
lean_ctor_set(v___x_1671_, 1, v_a_1664_);
v_sz_1672_ = lean_array_size(v_args_1666_);
v___x_1673_ = ((size_t)0ULL);
v___x_1674_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1655_, v_args_1666_, v___f_1670_, v_sz_1672_, v___x_1673_, v___x_1671_);
v___x_1675_ = lean_apply_4(v_toBind_1658_, lean_box(0), lean_box(0), v___x_1674_, v___f_1659_);
return v___x_1675_;
}
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
lean_dec(v___f_1659_);
lean_dec(v_toBind_1658_);
lean_dec(v_f_1656_);
lean_dec_ref(v_inst_1655_);
lean_dec(v_stx_1654_);
lean_dec(v_toPure_1653_);
v_a_1681_ = lean_ctor_get(v_____do__lift_1662_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v_____do__lift_1662_, 1);
v___x_1682_ = lean_box(0);
v___x_1683_ = lean_apply_2(v___f_1661_, v___x_1682_, v_a_1681_);
return v___x_1683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed(lean_object* v_toPure_1684_, lean_object* v_stx_1685_, lean_object* v_inst_1686_, lean_object* v_f_1687_, lean_object* v_firstChoiceOnly_1688_, lean_object* v_toBind_1689_, lean_object* v___f_1690_, lean_object* v___x_1691_, lean_object* v___f_1692_, lean_object* v_____do__lift_1693_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1694_; lean_object* v_res_1695_; 
v_firstChoiceOnly_boxed_1694_ = lean_unbox(v_firstChoiceOnly_1688_);
v_res_1695_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(v_toPure_1684_, v_stx_1685_, v_inst_1686_, v_f_1687_, v_firstChoiceOnly_boxed_1694_, v_toBind_1689_, v___f_1690_, v___x_1691_, v___f_1692_, v_____do__lift_1693_);
lean_dec(v___x_1691_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(lean_object* v_inst_1696_, lean_object* v_f_1697_, uint8_t v_firstChoiceOnly_1698_, lean_object* v_stx_1699_, lean_object* v_b_1700_){
_start:
{
lean_object* v_toApplicative_1701_; lean_object* v_toBind_1702_; lean_object* v_toPure_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___f_1706_; lean_object* v___f_1707_; lean_object* v___x_1708_; lean_object* v___f_1709_; lean_object* v___x_1710_; 
v_toApplicative_1701_ = lean_ctor_get(v_inst_1696_, 0);
v_toBind_1702_ = lean_ctor_get(v_inst_1696_, 1);
lean_inc_n(v_toBind_1702_, 2);
v_toPure_1703_ = lean_ctor_get(v_toApplicative_1701_, 1);
lean_inc_n(v_toPure_1703_, 3);
v___x_1704_ = lean_box(0);
lean_inc(v_f_1697_);
lean_inc(v_stx_1699_);
v___x_1705_ = lean_apply_2(v_f_1697_, v_stx_1699_, v_b_1700_);
v___f_1706_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1706_, 0, v_toPure_1703_);
lean_inc_ref(v___f_1706_);
v___f_1707_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1707_, 0, v___f_1706_);
lean_closure_set(v___f_1707_, 1, v_toPure_1703_);
v___x_1708_ = lean_box(v_firstChoiceOnly_1698_);
v___f_1709_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_1709_, 0, v_toPure_1703_);
lean_closure_set(v___f_1709_, 1, v_stx_1699_);
lean_closure_set(v___f_1709_, 2, v_inst_1696_);
lean_closure_set(v___f_1709_, 3, v_f_1697_);
lean_closure_set(v___f_1709_, 4, v___x_1708_);
lean_closure_set(v___f_1709_, 5, v_toBind_1702_);
lean_closure_set(v___f_1709_, 6, v___f_1707_);
lean_closure_set(v___f_1709_, 7, v___x_1704_);
lean_closure_set(v___f_1709_, 8, v___f_1706_);
v___x_1710_ = lean_apply_4(v_toBind_1702_, lean_box(0), lean_box(0), v___x_1705_, v___f_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(lean_object* v_toPure_1711_, lean_object* v___x_1712_, lean_object* v_inst_1713_, lean_object* v_f_1714_, uint8_t v_firstChoiceOnly_1715_, lean_object* v_toBind_1716_, lean_object* v_a_1717_, lean_object* v_x_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_snd_1720_; lean_object* v___f_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_snd_1720_ = lean_ctor_get(v___y_1719_, 1);
lean_inc_n(v_snd_1720_, 2);
lean_dec_ref(v___y_1719_);
v___f_1721_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1721_, 0, v_snd_1720_);
lean_closure_set(v___f_1721_, 1, v_toPure_1711_);
lean_closure_set(v___f_1721_, 2, v___x_1712_);
v___x_1722_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1713_, v_f_1714_, v_firstChoiceOnly_1715_, v_a_1717_, v_snd_1720_);
v___x_1723_ = lean_apply_4(v_toBind_1716_, lean_box(0), lean_box(0), v___x_1722_, v___f_1721_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___boxed(lean_object* v_inst_1724_, lean_object* v_f_1725_, lean_object* v_firstChoiceOnly_1726_, lean_object* v_stx_1727_, lean_object* v_b_1728_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1729_; lean_object* v_res_1730_; 
v_firstChoiceOnly_boxed_1729_ = lean_unbox(v_firstChoiceOnly_1726_);
v_res_1730_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1724_, v_f_1725_, v_firstChoiceOnly_boxed_1729_, v_stx_1727_, v_b_1728_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop(lean_object* v_m_1731_, lean_object* v_inst_1732_, lean_object* v_00_u03b2_1733_, lean_object* v_f_1734_, uint8_t v_firstChoiceOnly_1735_, lean_object* v_stx_1736_, lean_object* v_b_1737_, lean_object* v_inst_1738_){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1732_, v_f_1734_, v_firstChoiceOnly_1735_, v_stx_1736_, v_b_1737_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___boxed(lean_object* v_m_1740_, lean_object* v_inst_1741_, lean_object* v_00_u03b2_1742_, lean_object* v_f_1743_, lean_object* v_firstChoiceOnly_1744_, lean_object* v_stx_1745_, lean_object* v_b_1746_, lean_object* v_inst_1747_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1748_; lean_object* v_res_1749_; 
v_firstChoiceOnly_boxed_1748_ = lean_unbox(v_firstChoiceOnly_1744_);
v_res_1749_ = l_Lean_Syntax_instForInTopDownOfMonad_loop(v_m_1740_, v_inst_1741_, v_00_u03b2_1742_, v_f_1743_, v_firstChoiceOnly_boxed_1748_, v_stx_1745_, v_b_1746_, v_inst_1747_);
lean_dec(v_inst_1747_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0(lean_object* v_toPure_1750_, lean_object* v_____do__lift_1751_){
_start:
{
lean_object* v_a_1752_; lean_object* v___x_1753_; 
v_a_1752_ = lean_ctor_get(v_____do__lift_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref(v_____do__lift_1751_);
v___x_1753_ = lean_apply_2(v_toPure_1750_, lean_box(0), v_a_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1(lean_object* v_inst_1754_, lean_object* v_toBind_1755_, lean_object* v___f_1756_, lean_object* v_00_u03b2_1757_, lean_object* v_x_1758_, lean_object* v_init_1759_, lean_object* v_f_1760_){
_start:
{
uint8_t v_firstChoiceOnly_1761_; lean_object* v_stx_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_firstChoiceOnly_1761_ = lean_ctor_get_uint8(v_x_1758_, sizeof(void*)*1);
v_stx_1762_ = lean_ctor_get(v_x_1758_, 0);
lean_inc(v_stx_1762_);
lean_dec_ref(v_x_1758_);
v___x_1763_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1754_, v_f_1760_, v_firstChoiceOnly_1761_, v_stx_1762_, v_init_1759_);
v___x_1764_ = lean_apply_4(v_toBind_1755_, lean_box(0), lean_box(0), v___x_1763_, v___f_1756_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg(lean_object* v_inst_1765_){
_start:
{
lean_object* v_toApplicative_1766_; lean_object* v_toBind_1767_; lean_object* v_toPure_1768_; lean_object* v___f_1769_; lean_object* v___f_1770_; 
v_toApplicative_1766_ = lean_ctor_get(v_inst_1765_, 0);
v_toBind_1767_ = lean_ctor_get(v_inst_1765_, 1);
lean_inc(v_toBind_1767_);
v_toPure_1768_ = lean_ctor_get(v_toApplicative_1766_, 1);
lean_inc(v_toPure_1768_);
v___f_1769_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1769_, 0, v_toPure_1768_);
v___f_1770_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1), 7, 3);
lean_closure_set(v___f_1770_, 0, v_inst_1765_);
lean_closure_set(v___f_1770_, 1, v_toBind_1767_);
lean_closure_set(v___f_1770_, 2, v___f_1769_);
return v___f_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad(lean_object* v_m_1771_, lean_object* v_inst_1772_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Lean_Syntax_instForInTopDownOfMonad___redArg(v_inst_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(lean_object* v_info_1775_, lean_object* v_val_1776_){
_start:
{
if (lean_obj_tag(v_info_1775_) == 0)
{
lean_object* v_leading_1777_; lean_object* v_trailing_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v_leading_1777_ = lean_ctor_get(v_info_1775_, 0);
lean_inc_ref(v_leading_1777_);
v_trailing_1778_ = lean_ctor_get(v_info_1775_, 2);
lean_inc_ref(v_trailing_1778_);
lean_dec_ref_known(v_info_1775_, 4);
v___x_1779_ = lean_substring_tostring(v_leading_1777_);
v___x_1780_ = lean_string_append(v___x_1779_, v_val_1776_);
v___x_1781_ = lean_substring_tostring(v_trailing_1778_);
v___x_1782_ = lean_string_append(v___x_1780_, v___x_1781_);
lean_dec_ref(v___x_1781_);
return v___x_1782_;
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
lean_dec(v_info_1775_);
v___x_1783_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0));
v___x_1784_ = lean_string_append(v___x_1783_, v_val_1776_);
v___x_1785_ = lean_string_append(v___x_1784_, v___x_1783_);
return v___x_1785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___boxed(lean_object* v_info_1786_, lean_object* v_val_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1786_, v_val_1787_);
lean_dec_ref(v_val_1787_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(uint8_t v_firstChoiceOnly_1789_, lean_object* v_as_1790_, size_t v_sz_1791_, size_t v_i_1792_, lean_object* v_b_1793_){
_start:
{
uint8_t v___x_1794_; 
v___x_1794_ = lean_usize_dec_lt(v_i_1792_, v_sz_1791_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_b_1793_);
return v___x_1795_;
}
else
{
lean_object* v_snd_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1823_; 
v_snd_1796_ = lean_ctor_get(v_b_1793_, 1);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_b_1793_);
if (v_isSharedCheck_1823_ == 0)
{
lean_object* v_unused_1824_; 
v_unused_1824_ = lean_ctor_get(v_b_1793_, 0);
lean_dec(v_unused_1824_);
v___x_1798_ = v_b_1793_;
v_isShared_1799_ = v_isSharedCheck_1823_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_snd_1796_);
lean_dec(v_b_1793_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1823_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_a_1800_; lean_object* v___x_1801_; 
v_a_1800_ = lean_array_uget_borrowed(v_as_1790_, v_i_1792_);
lean_inc(v_snd_1796_);
lean_inc(v_a_1800_);
v___x_1801_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v_firstChoiceOnly_1789_, v_a_1800_, v_snd_1796_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v___x_1802_; 
lean_del_object(v___x_1798_);
lean_dec(v_snd_1796_);
v___x_1802_ = lean_box(0);
return v___x_1802_;
}
else
{
lean_object* v_val_1803_; 
v_val_1803_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_val_1803_);
if (lean_obj_tag(v_val_1803_) == 0)
{
lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1813_; 
v_isSharedCheck_1813_ = !lean_is_exclusive(v_val_1803_);
if (v_isSharedCheck_1813_ == 0)
{
lean_object* v_unused_1814_; 
v_unused_1814_ = lean_ctor_get(v_val_1803_, 0);
lean_dec(v_unused_1814_);
v___x_1805_ = v_val_1803_;
v_isShared_1806_ = v_isSharedCheck_1813_;
goto v_resetjp_1804_;
}
else
{
lean_dec(v_val_1803_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1813_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1801_);
v___x_1808_ = v___x_1798_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v_snd_1796_);
v___x_1808_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1810_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set_tag(v___x_1805_, 1);
lean_ctor_set(v___x_1805_, 0, v___x_1808_);
v___x_1810_ = v___x_1805_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1816_; lean_object* v___x_1818_; 
lean_dec_ref_known(v___x_1801_, 1);
lean_dec(v_snd_1796_);
v_a_1815_ = lean_ctor_get(v_val_1803_, 0);
lean_inc(v_a_1815_);
lean_dec_ref_known(v_val_1803_, 1);
v___x_1816_ = lean_box(0);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v_a_1815_);
lean_ctor_set(v___x_1798_, 0, v___x_1816_);
v___x_1818_ = v___x_1798_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1816_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_a_1815_);
v___x_1818_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
size_t v___x_1819_; size_t v___x_1820_; 
v___x_1819_ = ((size_t)1ULL);
v___x_1820_ = lean_usize_add(v_i_1792_, v___x_1819_);
v_i_1792_ = v___x_1820_;
v_b_1793_ = v___x_1818_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(lean_object* v_val_1825_, lean_object* v_a_1826_, lean_object* v_b_1827_){
_start:
{
lean_object* v_array_1828_; lean_object* v_start_1829_; lean_object* v_stop_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1849_; 
v_array_1828_ = lean_ctor_get(v_a_1826_, 0);
v_start_1829_ = lean_ctor_get(v_a_1826_, 1);
v_stop_1830_ = lean_ctor_get(v_a_1826_, 2);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_a_1826_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1832_ = v_a_1826_;
v_isShared_1833_ = v_isSharedCheck_1849_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_stop_1830_);
lean_inc(v_start_1829_);
lean_inc(v_array_1828_);
lean_dec(v_a_1826_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1849_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
uint8_t v___x_1834_; 
v___x_1834_ = lean_nat_dec_lt(v_start_1829_, v_stop_1830_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_del_object(v___x_1832_);
lean_dec(v_stop_1830_);
lean_dec(v_start_1829_);
lean_dec_ref(v_array_1828_);
v___x_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1835_, 0, v_b_1827_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_array_fget_borrowed(v_array_1828_, v_start_1829_);
lean_inc(v___x_1836_);
v___x_1837_ = l_Lean_Syntax_reprint(v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v___x_1838_; 
lean_del_object(v___x_1832_);
lean_dec(v_stop_1830_);
lean_dec(v_start_1829_);
lean_dec_ref(v_array_1828_);
v___x_1838_ = lean_box(0);
return v___x_1838_;
}
else
{
lean_object* v_val_1839_; uint8_t v___x_1840_; 
v_val_1839_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_val_1839_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1840_ = lean_string_dec_eq(v_val_1825_, v_val_1839_);
lean_dec(v_val_1839_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; 
lean_del_object(v___x_1832_);
lean_dec(v_stop_1830_);
lean_dec(v_start_1829_);
lean_dec_ref(v_array_1828_);
v___x_1841_ = lean_box(0);
return v___x_1841_;
}
else
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
v___x_1842_ = lean_box(0);
v___x_1843_ = lean_unsigned_to_nat(1u);
v___x_1844_ = lean_nat_add(v_start_1829_, v___x_1843_);
lean_dec(v_start_1829_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v___x_1844_);
v___x_1846_ = v___x_1832_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_array_1828_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1844_);
lean_ctor_set(v_reuseFailAlloc_1848_, 2, v_stop_1830_);
v___x_1846_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
v_a_1826_ = v___x_1846_;
v_b_1827_ = v___x_1842_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(uint8_t v_firstChoiceOnly_1850_, lean_object* v_stx_1851_, lean_object* v_b_1852_){
_start:
{
lean_object* v_b_1854_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___x_1868_; lean_object* v_a_1870_; 
v___x_1868_ = lean_box(0);
switch(lean_obj_tag(v_stx_1851_))
{
case 2:
{
lean_object* v_info_1879_; lean_object* v_val_1880_; lean_object* v___x_1881_; lean_object* v_s_1882_; 
v_info_1879_ = lean_ctor_get(v_stx_1851_, 0);
v_val_1880_ = lean_ctor_get(v_stx_1851_, 1);
lean_inc(v_info_1879_);
v___x_1881_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1879_, v_val_1880_);
v_s_1882_ = lean_string_append(v_b_1852_, v___x_1881_);
lean_dec_ref(v___x_1881_);
v_a_1870_ = v_s_1882_;
goto v___jp_1869_;
}
case 3:
{
lean_object* v_rawVal_1883_; lean_object* v_info_1884_; lean_object* v_str_1885_; lean_object* v_startPos_1886_; lean_object* v_stopPos_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v_s_1890_; 
v_rawVal_1883_ = lean_ctor_get(v_stx_1851_, 1);
v_info_1884_ = lean_ctor_get(v_stx_1851_, 0);
v_str_1885_ = lean_ctor_get(v_rawVal_1883_, 0);
v_startPos_1886_ = lean_ctor_get(v_rawVal_1883_, 1);
v_stopPos_1887_ = lean_ctor_get(v_rawVal_1883_, 2);
v___x_1888_ = lean_string_utf8_extract(v_str_1885_, v_startPos_1886_, v_stopPos_1887_);
lean_inc(v_info_1884_);
v___x_1889_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1884_, v___x_1888_);
lean_dec_ref(v___x_1888_);
v_s_1890_ = lean_string_append(v_b_1852_, v___x_1889_);
lean_dec_ref(v___x_1889_);
v_a_1870_ = v_s_1890_;
goto v___jp_1869_;
}
case 1:
{
lean_object* v_kind_1891_; lean_object* v_args_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v_kind_1891_ = lean_ctor_get(v_stx_1851_, 1);
v_args_1892_ = lean_ctor_get(v_stx_1851_, 2);
v___x_1893_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1894_ = lean_name_eq(v_kind_1891_, v___x_1893_);
if (v___x_1894_ == 0)
{
v_a_1870_ = v_b_1852_;
goto v___jp_1869_;
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1895_ = lean_unsigned_to_nat(0u);
v___x_1896_ = lean_array_get_borrowed(v___x_1868_, v_args_1892_, v___x_1895_);
lean_inc(v___x_1896_);
v___x_1897_ = l_Lean_Syntax_reprint(v___x_1896_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v___x_1898_; 
lean_dec_ref_known(v_stx_1851_, 3);
lean_dec_ref(v_b_1852_);
v___x_1898_ = lean_box(0);
return v___x_1898_;
}
else
{
lean_object* v_val_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v_val_1899_ = lean_ctor_get(v___x_1897_, 0);
lean_inc(v_val_1899_);
lean_dec_ref_known(v___x_1897_, 1);
v___x_1900_ = lean_unsigned_to_nat(1u);
v___x_1901_ = lean_array_get_size(v_args_1892_);
lean_inc_ref(v_args_1892_);
v___x_1902_ = l_Array_toSubarray___redArg(v_args_1892_, v___x_1900_, v___x_1901_);
v___x_1903_ = lean_box(0);
v___x_1904_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1899_, v___x_1902_, v___x_1903_);
lean_dec(v_val_1899_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v___x_1905_; 
lean_dec_ref_known(v_stx_1851_, 3);
lean_dec_ref(v_b_1852_);
v___x_1905_ = lean_box(0);
return v___x_1905_;
}
else
{
lean_dec_ref_known(v___x_1904_, 1);
v_a_1870_ = v_b_1852_;
goto v___jp_1869_;
}
}
}
}
default: 
{
v_a_1870_ = v_b_1852_;
goto v___jp_1869_;
}
}
v___jp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1855_, 0, v_b_1854_);
v___x_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
return v___x_1856_;
}
v___jp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; size_t v_sz_1862_; size_t v___x_1863_; lean_object* v___x_1864_; 
v___x_1860_ = lean_box(0);
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1860_);
lean_ctor_set(v___x_1861_, 1, v___y_1858_);
v_sz_1862_ = lean_array_size(v___y_1859_);
v___x_1863_ = ((size_t)0ULL);
v___x_1864_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(v_firstChoiceOnly_1850_, v___y_1859_, v_sz_1862_, v___x_1863_, v___x_1861_);
lean_dec_ref(v___y_1859_);
if (lean_obj_tag(v___x_1864_) == 0)
{
return v___x_1860_;
}
else
{
lean_object* v_val_1865_; lean_object* v_fst_1866_; 
v_val_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_val_1865_);
lean_dec_ref_known(v___x_1864_, 1);
v_fst_1866_ = lean_ctor_get(v_val_1865_, 0);
if (lean_obj_tag(v_fst_1866_) == 0)
{
lean_object* v_snd_1867_; 
v_snd_1867_ = lean_ctor_get(v_val_1865_, 1);
lean_inc(v_snd_1867_);
lean_dec(v_val_1865_);
v_b_1854_ = v_snd_1867_;
goto v___jp_1853_;
}
else
{
lean_inc_ref(v_fst_1866_);
lean_dec(v_val_1865_);
return v_fst_1866_;
}
}
}
v___jp_1869_:
{
if (lean_obj_tag(v_stx_1851_) == 1)
{
if (v_firstChoiceOnly_1850_ == 0)
{
lean_object* v_args_1871_; 
v_args_1871_ = lean_ctor_get(v_stx_1851_, 2);
lean_inc_ref(v_args_1871_);
lean_dec_ref_known(v_stx_1851_, 3);
v___y_1858_ = v_a_1870_;
v___y_1859_ = v_args_1871_;
goto v___jp_1857_;
}
else
{
lean_object* v_kind_1872_; lean_object* v_args_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v_kind_1872_ = lean_ctor_get(v_stx_1851_, 1);
lean_inc(v_kind_1872_);
v_args_1873_ = lean_ctor_get(v_stx_1851_, 2);
lean_inc_ref(v_args_1873_);
lean_dec_ref_known(v_stx_1851_, 3);
v___x_1874_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1875_ = lean_name_eq(v_kind_1872_, v___x_1874_);
lean_dec(v_kind_1872_);
if (v___x_1875_ == 0)
{
v___y_1858_ = v_a_1870_;
v___y_1859_ = v_args_1873_;
goto v___jp_1857_;
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = lean_unsigned_to_nat(0u);
v___x_1877_ = lean_array_get(v___x_1868_, v_args_1873_, v___x_1876_);
lean_dec_ref(v_args_1873_);
v_stx_1851_ = v___x_1877_;
v_b_1852_ = v_a_1870_;
goto _start;
}
}
}
else
{
lean_dec(v_stx_1851_);
v_b_1854_ = v_a_1870_;
goto v___jp_1853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_reprint(lean_object* v_stx_1906_){
_start:
{
lean_object* v_s_1907_; uint8_t v___x_1908_; lean_object* v___x_1909_; 
v_s_1907_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
v___x_1908_ = 1;
v___x_1909_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v___x_1908_, v_stx_1906_, v_s_1907_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v___x_1910_; 
v___x_1910_ = lean_box(0);
return v___x_1910_;
}
else
{
lean_object* v_val_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1919_; 
v_val_1911_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1913_ = v___x_1909_;
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_val_1911_);
lean_dec(v___x_1909_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v_a_1915_; lean_object* v___x_1917_; 
v_a_1915_ = lean_ctor_get(v_val_1911_, 0);
lean_inc(v_a_1915_);
lean_dec(v_val_1911_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 0, v_a_1915_);
v___x_1917_ = v___x_1913_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1915_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg___boxed(lean_object* v_val_1920_, lean_object* v_a_1921_, lean_object* v_b_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1920_, v_a_1921_, v_b_1922_);
lean_dec_ref(v_val_1920_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1___boxed(lean_object* v_firstChoiceOnly_1924_, lean_object* v_as_1925_, lean_object* v_sz_1926_, lean_object* v_i_1927_, lean_object* v_b_1928_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1929_; size_t v_sz_boxed_1930_; size_t v_i_boxed_1931_; lean_object* v_res_1932_; 
v_firstChoiceOnly_boxed_1929_ = lean_unbox(v_firstChoiceOnly_1924_);
v_sz_boxed_1930_ = lean_unbox_usize(v_sz_1926_);
lean_dec(v_sz_1926_);
v_i_boxed_1931_ = lean_unbox_usize(v_i_1927_);
lean_dec(v_i_1927_);
v_res_1932_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(v_firstChoiceOnly_boxed_1929_, v_as_1925_, v_sz_boxed_1930_, v_i_boxed_1931_, v_b_1928_);
lean_dec_ref(v_as_1925_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1___boxed(lean_object* v_firstChoiceOnly_1933_, lean_object* v_stx_1934_, lean_object* v_b_1935_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1936_; lean_object* v_res_1937_; 
v_firstChoiceOnly_boxed_1936_ = lean_unbox(v_firstChoiceOnly_1933_);
v_res_1937_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v_firstChoiceOnly_boxed_1936_, v_stx_1934_, v_b_1935_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(lean_object* v_val_1938_, lean_object* v_inst_1939_, lean_object* v_R_1940_, lean_object* v_a_1941_, lean_object* v_b_1942_, lean_object* v_c_1943_){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1938_, v_a_1941_, v_b_1942_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___boxed(lean_object* v_val_1945_, lean_object* v_inst_1946_, lean_object* v_R_1947_, lean_object* v_a_1948_, lean_object* v_b_1949_, lean_object* v_c_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(v_val_1945_, v_inst_1946_, v_R_1947_, v_a_1948_, v_b_1949_, v_c_1950_);
lean_dec_ref(v_val_1945_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(uint8_t v_firstChoiceOnly_1960_, lean_object* v_stx_1961_){
_start:
{
lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1962_ = lean_box(0);
v___x_1963_ = l_Lean_Syntax_isMissing(v_stx_1961_);
if (v___x_1963_ == 0)
{
if (lean_obj_tag(v_stx_1961_) == 1)
{
lean_object* v_kind_1964_; lean_object* v_args_1965_; 
v_kind_1964_ = lean_ctor_get(v_stx_1961_, 1);
v_args_1965_ = lean_ctor_get(v_stx_1961_, 2);
if (v_firstChoiceOnly_1960_ == 0)
{
goto v___jp_1966_;
}
else
{
lean_object* v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1976_ = lean_name_eq(v_kind_1964_, v___x_1975_);
if (v___x_1976_ == 0)
{
goto v___jp_1966_;
}
else
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1977_ = lean_box(0);
v___x_1978_ = lean_unsigned_to_nat(0u);
v___x_1979_ = lean_array_get_borrowed(v___x_1977_, v_args_1965_, v___x_1978_);
v_stx_1961_ = v___x_1979_;
goto _start;
}
}
v___jp_1966_:
{
lean_object* v___x_1967_; size_t v_sz_1968_; size_t v___x_1969_; lean_object* v___x_1970_; lean_object* v_fst_1971_; 
v___x_1967_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1));
v_sz_1968_ = lean_array_size(v_args_1965_);
v___x_1969_ = ((size_t)0ULL);
v___x_1970_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(v_firstChoiceOnly_1960_, v_args_1965_, v_sz_1968_, v___x_1969_, v___x_1967_);
v_fst_1971_ = lean_ctor_get(v___x_1970_, 0);
if (lean_obj_tag(v_fst_1971_) == 0)
{
lean_object* v_snd_1972_; lean_object* v___x_1973_; 
v_snd_1972_ = lean_ctor_get(v___x_1970_, 1);
lean_inc(v_snd_1972_);
lean_dec_ref(v___x_1970_);
v___x_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1973_, 0, v_snd_1972_);
return v___x_1973_;
}
else
{
lean_object* v_val_1974_; 
lean_inc_ref(v_fst_1971_);
lean_dec_ref(v___x_1970_);
v_val_1974_ = lean_ctor_get(v_fst_1971_, 0);
lean_inc(v_val_1974_);
lean_dec_ref_known(v_fst_1971_, 1);
return v_val_1974_;
}
}
}
else
{
lean_object* v___x_1981_; 
v___x_1981_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2));
return v___x_1981_;
}
}
else
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1982_ = lean_box(v___x_1963_);
v___x_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
v___x_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
lean_ctor_set(v___x_1984_, 1, v___x_1962_);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
return v___x_1985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(uint8_t v_firstChoiceOnly_1986_, lean_object* v_as_1987_, size_t v_sz_1988_, size_t v_i_1989_, lean_object* v_b_1990_){
_start:
{
uint8_t v___x_1991_; 
v___x_1991_ = lean_usize_dec_lt(v_i_1989_, v_sz_1988_);
if (v___x_1991_ == 0)
{
return v_b_1990_;
}
else
{
lean_object* v_snd_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2010_; 
v_snd_1992_ = lean_ctor_get(v_b_1990_, 1);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_b_1990_);
if (v_isSharedCheck_2010_ == 0)
{
lean_object* v_unused_2011_; 
v_unused_2011_ = lean_ctor_get(v_b_1990_, 0);
lean_dec(v_unused_2011_);
v___x_1994_ = v_b_1990_;
v_isShared_1995_ = v_isSharedCheck_2010_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_snd_1992_);
lean_dec(v_b_1990_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2010_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v_a_1996_; lean_object* v___x_1997_; 
v_a_1996_ = lean_array_uget_borrowed(v_as_1987_, v_i_1989_);
v___x_1997_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_1986_, v_a_1996_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v___x_1998_; lean_object* v___x_2000_; 
v___x_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1997_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_1998_);
v___x_2000_ = v___x_1994_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_snd_1992_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2003_; lean_object* v___x_2005_; 
lean_dec(v_snd_1992_);
v_a_2002_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_1997_, 1);
v___x_2003_ = lean_box(0);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 1, v_a_2002_);
lean_ctor_set(v___x_1994_, 0, v___x_2003_);
v___x_2005_ = v___x_1994_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2003_);
lean_ctor_set(v_reuseFailAlloc_2009_, 1, v_a_2002_);
v___x_2005_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
size_t v___x_2006_; size_t v___x_2007_; 
v___x_2006_ = ((size_t)1ULL);
v___x_2007_ = lean_usize_add(v_i_1989_, v___x_2006_);
v_i_1989_ = v___x_2007_;
v_b_1990_ = v___x_2005_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0___boxed(lean_object* v_firstChoiceOnly_2012_, lean_object* v_as_2013_, lean_object* v_sz_2014_, lean_object* v_i_2015_, lean_object* v_b_2016_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_2017_; size_t v_sz_boxed_2018_; size_t v_i_boxed_2019_; lean_object* v_res_2020_; 
v_firstChoiceOnly_boxed_2017_ = lean_unbox(v_firstChoiceOnly_2012_);
v_sz_boxed_2018_ = lean_unbox_usize(v_sz_2014_);
lean_dec(v_sz_2014_);
v_i_boxed_2019_ = lean_unbox_usize(v_i_2015_);
lean_dec(v_i_2015_);
v_res_2020_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(v_firstChoiceOnly_boxed_2017_, v_as_2013_, v_sz_boxed_2018_, v_i_boxed_2019_, v_b_2016_);
lean_dec_ref(v_as_2013_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___boxed(lean_object* v_firstChoiceOnly_2021_, lean_object* v_stx_2022_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_2023_; lean_object* v_res_2024_; 
v_firstChoiceOnly_boxed_2023_ = lean_unbox(v_firstChoiceOnly_2021_);
v_res_2024_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_boxed_2023_, v_stx_2022_);
lean_dec(v_stx_2022_);
return v_res_2024_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasMissing(lean_object* v_stx_2025_){
_start:
{
uint8_t v___x_2026_; lean_object* v___y_2028_; lean_object* v___x_2032_; lean_object* v_a_2033_; 
v___x_2026_ = 0;
v___x_2032_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v___x_2026_, v_stx_2025_);
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref(v___x_2032_);
v___y_2028_ = v_a_2033_;
goto v___jp_2027_;
v___jp_2027_:
{
lean_object* v_fst_2029_; 
v_fst_2029_ = lean_ctor_get(v___y_2028_, 0);
lean_inc(v_fst_2029_);
lean_dec_ref(v___y_2028_);
if (lean_obj_tag(v_fst_2029_) == 0)
{
return v___x_2026_;
}
else
{
lean_object* v_val_2030_; uint8_t v___x_2031_; 
v_val_2030_ = lean_ctor_get(v_fst_2029_, 0);
lean_inc(v_val_2030_);
lean_dec_ref_known(v_fst_2029_, 1);
v___x_2031_ = lean_unbox(v_val_2030_);
lean_dec(v_val_2030_);
return v___x_2031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasMissing___boxed(lean_object* v_stx_2034_){
_start:
{
uint8_t v_res_2035_; lean_object* v_r_2036_; 
v_res_2035_ = l_Lean_Syntax_hasMissing(v_stx_2034_);
lean_dec(v_stx_2034_);
v_r_2036_ = lean_box(v_res_2035_);
return v_r_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(uint8_t v_firstChoiceOnly_2037_, lean_object* v_stx_2038_, lean_object* v_b_2039_){
_start:
{
lean_object* v___x_2040_; 
v___x_2040_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_2037_, v_stx_2038_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___boxed(lean_object* v_firstChoiceOnly_2041_, lean_object* v_stx_2042_, lean_object* v_b_2043_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_2044_; lean_object* v_res_2045_; 
v_firstChoiceOnly_boxed_2044_ = lean_unbox(v_firstChoiceOnly_2041_);
v_res_2045_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(v_firstChoiceOnly_boxed_2044_, v_stx_2042_, v_b_2043_);
lean_dec_ref(v_b_2043_);
lean_dec(v_stx_2042_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f(lean_object* v_stx_2046_, uint8_t v_canonicalOnly_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_Syntax_getPos_x3f(v_stx_2046_, v_canonicalOnly_2047_);
if (lean_obj_tag(v___x_2048_) == 1)
{
lean_object* v_val_2049_; lean_object* v___x_2050_; 
v_val_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_val_2049_);
lean_dec_ref_known(v___x_2048_, 1);
v___x_2050_ = l_Lean_Syntax_getTailPos_x3f(v_stx_2046_, v_canonicalOnly_2047_);
if (lean_obj_tag(v___x_2050_) == 1)
{
lean_object* v_val_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2059_; 
v_val_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_val_2051_);
lean_dec(v___x_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2057_; 
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v_val_2049_);
lean_ctor_set(v___x_2055_, 1, v_val_2051_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2055_);
v___x_2057_ = v___x_2053_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
else
{
lean_object* v___x_2060_; 
lean_dec(v___x_2050_);
lean_dec(v_val_2049_);
v___x_2060_ = lean_box(0);
return v___x_2060_;
}
}
else
{
lean_object* v___x_2061_; 
lean_dec(v___x_2048_);
v___x_2061_ = lean_box(0);
return v___x_2061_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f___boxed(lean_object* v_stx_2062_, lean_object* v_canonicalOnly_2063_){
_start:
{
uint8_t v_canonicalOnly_boxed_2064_; lean_object* v_res_2065_; 
v_canonicalOnly_boxed_2064_ = lean_unbox(v_canonicalOnly_2063_);
v_res_2065_ = l_Lean_Syntax_getRange_x3f(v_stx_2062_, v_canonicalOnly_boxed_2064_);
lean_dec(v_stx_2062_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object* v_stx_2066_, uint8_t v_canonicalOnly_2067_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = l_Lean_Syntax_getPos_x3f(v_stx_2066_, v_canonicalOnly_2067_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v___x_2069_; 
v___x_2069_ = lean_box(0);
return v___x_2069_;
}
else
{
lean_object* v_val_2070_; lean_object* v___x_2071_; 
v_val_2070_ = lean_ctor_get(v___x_2068_, 0);
lean_inc(v_val_2070_);
lean_dec_ref_known(v___x_2068_, 1);
v___x_2071_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_2066_, v_canonicalOnly_2067_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v___x_2072_; 
lean_dec(v_val_2070_);
v___x_2072_ = lean_box(0);
return v___x_2072_;
}
else
{
lean_object* v_val_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2081_; 
v_val_2073_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2075_ = v___x_2071_;
v_isShared_2076_ = v_isSharedCheck_2081_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_val_2073_);
lean_dec(v___x_2071_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2081_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2077_, 0, v_val_2070_);
lean_ctor_set(v___x_2077_, 1, v_val_2073_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v___x_2077_);
v___x_2079_ = v___x_2075_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f___boxed(lean_object* v_stx_2082_, lean_object* v_canonicalOnly_2083_){
_start:
{
uint8_t v_canonicalOnly_boxed_2084_; lean_object* v_res_2085_; 
v_canonicalOnly_boxed_2084_ = lean_unbox(v_canonicalOnly_2083_);
v_res_2085_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_2082_, v_canonicalOnly_boxed_2084_);
lean_dec(v_stx_2082_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange(lean_object* v_range_2086_, uint8_t v_canonical_2087_){
_start:
{
lean_object* v_start_2088_; lean_object* v_stop_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2098_; 
v_start_2088_ = lean_ctor_get(v_range_2086_, 0);
v_stop_2089_ = lean_ctor_get(v_range_2086_, 1);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_range_2086_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2091_ = v_range_2086_;
v_isShared_2092_ = v_isSharedCheck_2098_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_stop_2089_);
lean_inc(v_start_2088_);
lean_dec(v_range_2086_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2098_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2096_; 
v___x_2093_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2093_, 0, v_start_2088_);
lean_ctor_set(v___x_2093_, 1, v_stop_2089_);
lean_ctor_set_uint8(v___x_2093_, sizeof(void*)*2, v_canonical_2087_);
v___x_2094_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
if (v_isShared_2092_ == 0)
{
lean_ctor_set_tag(v___x_2091_, 2);
lean_ctor_set(v___x_2091_, 1, v___x_2094_);
lean_ctor_set(v___x_2091_, 0, v___x_2093_);
v___x_2096_ = v___x_2091_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2093_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v___x_2094_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange___boxed(lean_object* v_range_2099_, lean_object* v_canonical_2100_){
_start:
{
uint8_t v_canonical_boxed_2101_; lean_object* v_res_2102_; 
v_canonical_boxed_2101_ = lean_unbox(v_canonical_2100_);
v_res_2102_ = l_Lean_Syntax_ofRange(v_range_2099_, v_canonical_boxed_2101_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object* v_stx_2105_){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2106_ = ((lean_object*)(l_Lean_Syntax_Traverser_fromSyntax___closed__0));
v___x_2107_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2107_, 0, v_stx_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
lean_ctor_set(v___x_2107_, 2, v___x_2106_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_setCur(lean_object* v_t_2108_, lean_object* v_stx_2109_){
_start:
{
lean_object* v_parents_2110_; lean_object* v_idxs_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
v_parents_2110_ = lean_ctor_get(v_t_2108_, 1);
v_idxs_2111_ = lean_ctor_get(v_t_2108_, 2);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_t_2108_);
if (v_isSharedCheck_2118_ == 0)
{
lean_object* v_unused_2119_; 
v_unused_2119_ = lean_ctor_get(v_t_2108_, 0);
lean_dec(v_unused_2119_);
v___x_2113_ = v_t_2108_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_idxs_2111_);
lean_inc(v_parents_2110_);
lean_dec(v_t_2108_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v_stx_2109_);
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_stx_2109_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_parents_2110_);
lean_ctor_set(v_reuseFailAlloc_2117_, 2, v_idxs_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_down(lean_object* v_t_2120_, lean_object* v_idx_2121_){
_start:
{
lean_object* v_cur_2122_; lean_object* v_parents_2123_; lean_object* v_idxs_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2144_; 
v_cur_2122_ = lean_ctor_get(v_t_2120_, 0);
v_parents_2123_ = lean_ctor_get(v_t_2120_, 1);
v_idxs_2124_ = lean_ctor_get(v_t_2120_, 2);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_t_2120_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2126_ = v_t_2120_;
v_isShared_2127_ = v_isSharedCheck_2144_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_idxs_2124_);
lean_inc(v_parents_2123_);
lean_inc(v_cur_2122_);
lean_dec(v_t_2120_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2144_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2128_ = l_Lean_Syntax_getNumArgs(v_cur_2122_);
v___x_2129_ = lean_nat_dec_lt(v_idx_2121_, v___x_2128_);
lean_dec(v___x_2128_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2130_ = lean_box(0);
v___x_2131_ = lean_array_push(v_parents_2123_, v_cur_2122_);
v___x_2132_ = lean_array_push(v_idxs_2124_, v_idx_2121_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 2, v___x_2132_);
lean_ctor_set(v___x_2126_, 1, v___x_2131_);
lean_ctor_set(v___x_2126_, 0, v___x_2130_);
v___x_2134_ = v___x_2126_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v___x_2131_);
lean_ctor_set(v_reuseFailAlloc_2135_, 2, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
else
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2136_ = l_Lean_Syntax_getArg(v_cur_2122_, v_idx_2121_);
v___x_2137_ = lean_box(0);
v___x_2138_ = l_Lean_Syntax_setArg(v_cur_2122_, v_idx_2121_, v___x_2137_);
v___x_2139_ = lean_array_push(v_parents_2123_, v___x_2138_);
v___x_2140_ = lean_array_push(v_idxs_2124_, v_idx_2121_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 2, v___x_2140_);
lean_ctor_set(v___x_2126_, 1, v___x_2139_);
lean_ctor_set(v___x_2126_, 0, v___x_2136_);
v___x_2142_ = v___x_2126_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2136_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2143_, 2, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_up(lean_object* v_t_2145_){
_start:
{
lean_object* v_cur_2146_; lean_object* v_parents_2147_; lean_object* v_idxs_2148_; lean_object* v___y_2150_; lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; 
v_cur_2146_ = lean_ctor_get(v_t_2145_, 0);
v_parents_2147_ = lean_ctor_get(v_t_2145_, 1);
v_idxs_2148_ = lean_ctor_get(v_t_2145_, 2);
v___x_2154_ = lean_unsigned_to_nat(0u);
v___x_2155_ = lean_array_get_size(v_parents_2147_);
v___x_2156_ = lean_nat_dec_lt(v___x_2154_, v___x_2155_);
if (v___x_2156_ == 0)
{
return v_t_2145_;
}
else
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; 
lean_inc_ref(v_idxs_2148_);
lean_inc_ref(v_parents_2147_);
lean_inc(v_cur_2146_);
lean_dec_ref(v_t_2145_);
v___x_2157_ = lean_box(0);
v___x_2158_ = lean_array_get_size(v_idxs_2148_);
v___x_2159_ = lean_unsigned_to_nat(1u);
v___x_2160_ = lean_nat_sub(v___x_2158_, v___x_2159_);
v___x_2161_ = lean_array_get_borrowed(v___x_2154_, v_idxs_2148_, v___x_2160_);
lean_dec(v___x_2160_);
v___x_2162_ = lean_nat_sub(v___x_2155_, v___x_2159_);
v___x_2163_ = lean_array_get_borrowed(v___x_2157_, v_parents_2147_, v___x_2162_);
lean_dec(v___x_2162_);
v___x_2164_ = l_Lean_Syntax_getNumArgs(v___x_2163_);
v___x_2165_ = lean_nat_dec_lt(v___x_2161_, v___x_2164_);
lean_dec(v___x_2164_);
if (v___x_2165_ == 0)
{
lean_dec(v_cur_2146_);
lean_inc(v___x_2163_);
v___y_2150_ = v___x_2163_;
goto v___jp_2149_;
}
else
{
lean_object* v___x_2166_; 
lean_inc(v___x_2163_);
v___x_2166_ = l_Lean_Syntax_setArg(v___x_2163_, v___x_2161_, v_cur_2146_);
v___y_2150_ = v___x_2166_;
goto v___jp_2149_;
}
}
v___jp_2149_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2151_ = lean_array_pop(v_parents_2147_);
v___x_2152_ = lean_array_pop(v_idxs_2148_);
v___x_2153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2153_, 0, v___y_2150_);
lean_ctor_set(v___x_2153_, 1, v___x_2151_);
lean_ctor_set(v___x_2153_, 2, v___x_2152_);
return v___x_2153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_left(lean_object* v_t_2167_){
_start:
{
lean_object* v_parents_2168_; lean_object* v_idxs_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v_parents_2168_ = lean_ctor_get(v_t_2167_, 1);
v_idxs_2169_ = lean_ctor_get(v_t_2167_, 2);
v___x_2170_ = lean_unsigned_to_nat(0u);
v___x_2171_ = lean_array_get_size(v_parents_2168_);
v___x_2172_ = lean_nat_dec_lt(v___x_2170_, v___x_2171_);
if (v___x_2172_ == 0)
{
return v_t_2167_;
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_inc_ref(v_idxs_2169_);
v___x_2173_ = l_Lean_Syntax_Traverser_up(v_t_2167_);
v___x_2174_ = lean_array_get_size(v_idxs_2169_);
v___x_2175_ = lean_unsigned_to_nat(1u);
v___x_2176_ = lean_nat_sub(v___x_2174_, v___x_2175_);
v___x_2177_ = lean_array_get(v___x_2170_, v_idxs_2169_, v___x_2176_);
lean_dec(v___x_2176_);
lean_dec_ref(v_idxs_2169_);
v___x_2178_ = lean_nat_sub(v___x_2177_, v___x_2175_);
lean_dec(v___x_2177_);
v___x_2179_ = l_Lean_Syntax_Traverser_down(v___x_2173_, v___x_2178_);
return v___x_2179_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_right(lean_object* v_t_2180_){
_start:
{
lean_object* v_parents_2181_; lean_object* v_idxs_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; uint8_t v___x_2185_; 
v_parents_2181_ = lean_ctor_get(v_t_2180_, 1);
v_idxs_2182_ = lean_ctor_get(v_t_2180_, 2);
v___x_2183_ = lean_unsigned_to_nat(0u);
v___x_2184_ = lean_array_get_size(v_parents_2181_);
v___x_2185_ = lean_nat_dec_lt(v___x_2183_, v___x_2184_);
if (v___x_2185_ == 0)
{
return v_t_2180_;
}
else
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
lean_inc_ref(v_idxs_2182_);
v___x_2186_ = l_Lean_Syntax_Traverser_up(v_t_2180_);
v___x_2187_ = lean_array_get_size(v_idxs_2182_);
v___x_2188_ = lean_unsigned_to_nat(1u);
v___x_2189_ = lean_nat_sub(v___x_2187_, v___x_2188_);
v___x_2190_ = lean_array_get(v___x_2183_, v_idxs_2182_, v___x_2189_);
lean_dec(v___x_2189_);
lean_dec_ref(v_idxs_2182_);
v___x_2191_ = lean_nat_add(v___x_2190_, v___x_2188_);
lean_dec(v___x_2190_);
v___x_2192_ = l_Lean_Syntax_Traverser_down(v___x_2186_, v___x_2191_);
return v___x_2192_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(lean_object* v_self_2193_){
_start:
{
lean_object* v_cur_2194_; 
v_cur_2194_ = lean_ctor_get(v_self_2193_, 0);
lean_inc(v_cur_2194_);
return v_cur_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed(lean_object* v_self_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(v_self_2195_);
lean_dec_ref(v_self_2195_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg(lean_object* v_inst_2198_, lean_object* v_t_2199_){
_start:
{
lean_object* v_toApplicative_2200_; lean_object* v_toFunctor_2201_; lean_object* v_map_2202_; lean_object* v_get_2203_; lean_object* v___f_2204_; lean_object* v___x_2205_; 
v_toApplicative_2200_ = lean_ctor_get(v_inst_2198_, 0);
lean_inc_ref(v_toApplicative_2200_);
lean_dec_ref(v_inst_2198_);
v_toFunctor_2201_ = lean_ctor_get(v_toApplicative_2200_, 0);
lean_inc_ref(v_toFunctor_2201_);
lean_dec_ref(v_toApplicative_2200_);
v_map_2202_ = lean_ctor_get(v_toFunctor_2201_, 0);
lean_inc(v_map_2202_);
lean_dec_ref(v_toFunctor_2201_);
v_get_2203_ = lean_ctor_get(v_t_2199_, 0);
lean_inc(v_get_2203_);
lean_dec_ref(v_t_2199_);
v___f_2204_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0));
v___x_2205_ = lean_apply_4(v_map_2202_, lean_box(0), lean_box(0), v___f_2204_, v_get_2203_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur(lean_object* v_m_2206_, lean_object* v_inst_2207_, lean_object* v_t_2208_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l_Lean_Syntax_MonadTraverser_getCur___redArg(v_inst_2207_, v_t_2208_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0(lean_object* v_stx_2210_, lean_object* v_s_2211_){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2212_ = lean_box(0);
v___x_2213_ = l_Lean_Syntax_Traverser_setCur(v_s_2211_, v_stx_2210_);
v___x_2214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2212_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg(lean_object* v_t_2215_, lean_object* v_stx_2216_){
_start:
{
lean_object* v_modifyGet_2217_; lean_object* v___f_2218_; lean_object* v___x_2219_; 
v_modifyGet_2217_ = lean_ctor_get(v_t_2215_, 2);
lean_inc(v_modifyGet_2217_);
lean_dec_ref(v_t_2215_);
v___f_2218_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2218_, 0, v_stx_2216_);
v___x_2219_ = lean_apply_2(v_modifyGet_2217_, lean_box(0), v___f_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur(lean_object* v_m_2220_, lean_object* v_t_2221_, lean_object* v_stx_2222_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = l_Lean_Syntax_MonadTraverser_setCur___redArg(v_t_2221_, v_stx_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0(lean_object* v_idx_2224_, lean_object* v_s_2225_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = lean_box(0);
v___x_2227_ = l_Lean_Syntax_Traverser_down(v_s_2225_, v_idx_2224_);
v___x_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg(lean_object* v_t_2229_, lean_object* v_idx_2230_){
_start:
{
lean_object* v_modifyGet_2231_; lean_object* v___f_2232_; lean_object* v___x_2233_; 
v_modifyGet_2231_ = lean_ctor_get(v_t_2229_, 2);
lean_inc(v_modifyGet_2231_);
lean_dec_ref(v_t_2229_);
v___f_2232_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2232_, 0, v_idx_2230_);
v___x_2233_ = lean_apply_2(v_modifyGet_2231_, lean_box(0), v___f_2232_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown(lean_object* v_m_2234_, lean_object* v_t_2235_, lean_object* v_idx_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Lean_Syntax_MonadTraverser_goDown___redArg(v_t_2235_, v_idx_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0(lean_object* v_s_2238_){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2239_ = lean_box(0);
v___x_2240_ = l_Lean_Syntax_Traverser_up(v_s_2238_);
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2239_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg(lean_object* v_t_2243_){
_start:
{
lean_object* v_modifyGet_2244_; lean_object* v___f_2245_; lean_object* v___x_2246_; 
v_modifyGet_2244_ = lean_ctor_get(v_t_2243_, 2);
lean_inc(v_modifyGet_2244_);
lean_dec_ref(v_t_2243_);
v___f_2245_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0));
v___x_2246_ = lean_apply_2(v_modifyGet_2244_, lean_box(0), v___f_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp(lean_object* v_m_2247_, lean_object* v_t_2248_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Lean_Syntax_MonadTraverser_goUp___redArg(v_t_2248_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0(lean_object* v_s_2250_){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = lean_box(0);
v___x_2252_ = l_Lean_Syntax_Traverser_left(v_s_2250_);
v___x_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2251_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg(lean_object* v_t_2255_){
_start:
{
lean_object* v_modifyGet_2256_; lean_object* v___f_2257_; lean_object* v___x_2258_; 
v_modifyGet_2256_ = lean_ctor_get(v_t_2255_, 2);
lean_inc(v_modifyGet_2256_);
lean_dec_ref(v_t_2255_);
v___f_2257_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0));
v___x_2258_ = lean_apply_2(v_modifyGet_2256_, lean_box(0), v___f_2257_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft(lean_object* v_m_2259_, lean_object* v_t_2260_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_Lean_Syntax_MonadTraverser_goLeft___redArg(v_t_2260_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0(lean_object* v_s_2262_){
_start:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2263_ = lean_box(0);
v___x_2264_ = l_Lean_Syntax_Traverser_right(v_s_2262_);
v___x_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2263_);
lean_ctor_set(v___x_2265_, 1, v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg(lean_object* v_t_2267_){
_start:
{
lean_object* v_modifyGet_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; 
v_modifyGet_2268_ = lean_ctor_get(v_t_2267_, 2);
lean_inc(v_modifyGet_2268_);
lean_dec_ref(v_t_2267_);
v___f_2269_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0));
v___x_2270_ = lean_apply_2(v_modifyGet_2268_, lean_box(0), v___f_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight(lean_object* v_m_2271_, lean_object* v_t_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_Syntax_MonadTraverser_goRight___redArg(v_t_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(lean_object* v_toPure_2274_, lean_object* v_st_2275_){
_start:
{
lean_object* v_idxs_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; 
v_idxs_2276_ = lean_ctor_get(v_st_2275_, 2);
v___x_2277_ = lean_array_get_size(v_idxs_2276_);
v___x_2278_ = lean_unsigned_to_nat(1u);
v___x_2279_ = lean_nat_sub(v___x_2277_, v___x_2278_);
v___x_2280_ = lean_nat_dec_lt(v___x_2279_, v___x_2277_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
lean_dec(v___x_2279_);
v___x_2281_ = lean_unsigned_to_nat(0u);
v___x_2282_ = lean_apply_2(v_toPure_2274_, lean_box(0), v___x_2281_);
return v___x_2282_;
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = lean_array_fget_borrowed(v_idxs_2276_, v___x_2279_);
lean_dec(v___x_2279_);
lean_inc(v___x_2283_);
v___x_2284_ = lean_apply_2(v_toPure_2274_, lean_box(0), v___x_2283_);
return v___x_2284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed(lean_object* v_toPure_2285_, lean_object* v_st_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(v_toPure_2285_, v_st_2286_);
lean_dec_ref(v_st_2286_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg(lean_object* v_inst_2288_, lean_object* v_t_2289_){
_start:
{
lean_object* v_toApplicative_2290_; lean_object* v_toBind_2291_; lean_object* v_get_2292_; lean_object* v_toPure_2293_; lean_object* v___f_2294_; lean_object* v___x_2295_; 
v_toApplicative_2290_ = lean_ctor_get(v_inst_2288_, 0);
lean_inc_ref(v_toApplicative_2290_);
v_toBind_2291_ = lean_ctor_get(v_inst_2288_, 1);
lean_inc(v_toBind_2291_);
lean_dec_ref(v_inst_2288_);
v_get_2292_ = lean_ctor_get(v_t_2289_, 0);
lean_inc(v_get_2292_);
lean_dec_ref(v_t_2289_);
v_toPure_2293_ = lean_ctor_get(v_toApplicative_2290_, 1);
lean_inc(v_toPure_2293_);
lean_dec_ref(v_toApplicative_2290_);
v___f_2294_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2294_, 0, v_toPure_2293_);
v___x_2295_ = lean_apply_4(v_toBind_2291_, lean_box(0), lean_box(0), v_get_2292_, v___f_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx(lean_object* v_m_2296_, lean_object* v_inst_2297_, lean_object* v_t_2298_){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Lean_Syntax_MonadTraverser_getIdx___redArg(v_inst_2297_, v_t_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt(lean_object* v_n_2300_, lean_object* v_i_2301_){
_start:
{
lean_object* v_args_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v_args_2302_ = lean_ctor_get(v_n_2300_, 2);
v___x_2303_ = lean_box(0);
v___x_2304_ = lean_array_get_borrowed(v___x_2303_, v_args_2302_, v_i_2301_);
v___x_2305_ = l_Lean_Syntax_getId(v___x_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt___boxed(lean_object* v_n_2306_, lean_object* v_i_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Lean_SyntaxNode_getIdAt(v_n_2306_, v_i_2307_);
lean_dec(v_i_2307_);
lean_dec(v_n_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkListNode(lean_object* v_args_2309_){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2311_ = lean_box(2);
v___x_2312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
lean_ctor_set(v___x_2312_, 1, v___x_2310_);
lean_ctor_set(v___x_2312_, 2, v_args_2309_);
return v___x_2312_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isQuot(lean_object* v_x_2318_){
_start:
{
if (lean_obj_tag(v_x_2318_) == 1)
{
lean_object* v_kind_2319_; 
v_kind_2319_ = lean_ctor_get(v_x_2318_, 1);
if (lean_obj_tag(v_kind_2319_) == 1)
{
lean_object* v_pre_2320_; lean_object* v_str_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; 
v_pre_2320_ = lean_ctor_get(v_kind_2319_, 0);
v_str_2321_ = lean_ctor_get(v_kind_2319_, 1);
v___x_2322_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__0));
v___x_2323_ = lean_string_dec_eq(v_str_2321_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__1));
v___x_2325_ = lean_string_dec_eq(v_str_2321_, v___x_2324_);
if (v___x_2325_ == 0)
{
return v___x_2325_;
}
else
{
if (lean_obj_tag(v_pre_2320_) == 1)
{
lean_object* v_pre_2326_; 
v_pre_2326_ = lean_ctor_get(v_pre_2320_, 0);
if (lean_obj_tag(v_pre_2326_) == 1)
{
lean_object* v_pre_2327_; 
v_pre_2327_ = lean_ctor_get(v_pre_2326_, 0);
if (lean_obj_tag(v_pre_2327_) == 1)
{
lean_object* v_pre_2328_; 
v_pre_2328_ = lean_ctor_get(v_pre_2327_, 0);
if (lean_obj_tag(v_pre_2328_) == 0)
{
lean_object* v_str_2329_; lean_object* v_str_2330_; lean_object* v_str_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; 
v_str_2329_ = lean_ctor_get(v_pre_2320_, 1);
v_str_2330_ = lean_ctor_get(v_pre_2326_, 1);
v_str_2331_ = lean_ctor_get(v_pre_2327_, 1);
v___x_2332_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__2));
v___x_2333_ = lean_string_dec_eq(v_str_2331_, v___x_2332_);
if (v___x_2333_ == 0)
{
return v___x_2323_;
}
else
{
lean_object* v___x_2334_; uint8_t v___x_2335_; 
v___x_2334_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__3));
v___x_2335_ = lean_string_dec_eq(v_str_2330_, v___x_2334_);
if (v___x_2335_ == 0)
{
return v___x_2335_;
}
else
{
lean_object* v___x_2336_; uint8_t v___x_2337_; 
v___x_2336_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__4));
v___x_2337_ = lean_string_dec_eq(v_str_2329_, v___x_2336_);
return v___x_2337_;
}
}
}
else
{
return v___x_2323_;
}
}
else
{
return v___x_2323_;
}
}
else
{
return v___x_2323_;
}
}
else
{
return v___x_2323_;
}
}
}
else
{
return v___x_2323_;
}
}
else
{
uint8_t v___x_2338_; 
v___x_2338_ = 0;
return v___x_2338_;
}
}
else
{
uint8_t v___x_2339_; 
v___x_2339_ = 0;
return v___x_2339_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isQuot___boxed(lean_object* v_x_2340_){
_start:
{
uint8_t v_res_2341_; lean_object* v_r_2342_; 
v_res_2341_ = l_Lean_Syntax_isQuot(v_x_2340_);
lean_dec(v_x_2340_);
v_r_2342_ = lean_box(v_res_2341_);
return v_r_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getQuotContent(lean_object* v_stx_2348_){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___y_2352_; uint8_t v___x_2358_; 
v___x_2349_ = l_Lean_Syntax_getNumArgs(v_stx_2348_);
v___x_2350_ = lean_unsigned_to_nat(1u);
v___x_2358_ = lean_nat_dec_eq(v___x_2349_, v___x_2350_);
lean_dec(v___x_2349_);
if (v___x_2358_ == 0)
{
v___y_2352_ = v_stx_2348_;
goto v___jp_2351_;
}
else
{
lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2359_ = lean_unsigned_to_nat(0u);
v___x_2360_ = l_Lean_Syntax_getArg(v_stx_2348_, v___x_2359_);
lean_dec(v_stx_2348_);
v___y_2352_ = v___x_2360_;
goto v___jp_2351_;
}
v___jp_2351_:
{
lean_object* v___x_2353_; uint8_t v___x_2354_; 
v___x_2353_ = ((lean_object*)(l_Lean_Syntax_getQuotContent___closed__0));
lean_inc(v___y_2352_);
v___x_2354_ = l_Lean_Syntax_isOfKind(v___y_2352_, v___x_2353_);
if (v___x_2354_ == 0)
{
lean_object* v___x_2355_; 
v___x_2355_ = l_Lean_Syntax_getArg(v___y_2352_, v___x_2350_);
lean_dec(v___y_2352_);
return v___x_2355_;
}
else
{
lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2356_ = lean_unsigned_to_nat(3u);
v___x_2357_ = l_Lean_Syntax_getArg(v___y_2352_, v___x_2356_);
lean_dec(v___y_2352_);
return v___x_2357_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquot(lean_object* v_x_2362_){
_start:
{
if (lean_obj_tag(v_x_2362_) == 1)
{
lean_object* v_kind_2363_; 
v_kind_2363_ = lean_ctor_get(v_x_2362_, 1);
if (lean_obj_tag(v_kind_2363_) == 1)
{
lean_object* v_str_2364_; lean_object* v___x_2365_; uint8_t v___x_2366_; 
v_str_2364_ = lean_ctor_get(v_kind_2363_, 1);
v___x_2365_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2366_ = lean_string_dec_eq(v_str_2364_, v___x_2365_);
return v___x_2366_;
}
else
{
uint8_t v___x_2367_; 
v___x_2367_ = 0;
return v___x_2367_;
}
}
else
{
uint8_t v___x_2368_; 
v___x_2368_ = 0;
return v___x_2368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquot___boxed(lean_object* v_x_2369_){
_start:
{
uint8_t v_res_2370_; lean_object* v_r_2371_; 
v_res_2370_ = l_Lean_Syntax_isAntiquot(v_x_2369_);
lean_dec(v_x_2369_);
v_r_2371_ = lean_box(v_res_2370_);
return v_r_2371_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(lean_object* v___x_2372_, uint8_t v___x_2373_, lean_object* v_as_2374_, size_t v_i_2375_, size_t v_stop_2376_){
_start:
{
uint8_t v___y_2378_; uint8_t v___x_2382_; 
v___x_2382_ = lean_usize_dec_eq(v_i_2375_, v_stop_2376_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2383_ = lean_array_uget_borrowed(v_as_2374_, v_i_2375_);
v___x_2384_ = l_Lean_Syntax_isAntiquot(v___x_2383_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2385_; uint8_t v___x_2386_; 
v___x_2385_ = lean_unsigned_to_nat(0u);
v___x_2386_ = lean_nat_dec_lt(v___x_2385_, v___x_2372_);
v___y_2378_ = v___x_2386_;
goto v___jp_2377_;
}
else
{
v___y_2378_ = v___x_2373_;
goto v___jp_2377_;
}
}
else
{
uint8_t v___x_2387_; 
v___x_2387_ = 0;
return v___x_2387_;
}
v___jp_2377_:
{
if (v___y_2378_ == 0)
{
size_t v___x_2379_; size_t v___x_2380_; 
v___x_2379_ = ((size_t)1ULL);
v___x_2380_ = lean_usize_add(v_i_2375_, v___x_2379_);
v_i_2375_ = v___x_2380_;
goto _start;
}
else
{
return v___y_2378_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0___boxed(lean_object* v___x_2388_, lean_object* v___x_2389_, lean_object* v_as_2390_, lean_object* v_i_2391_, lean_object* v_stop_2392_){
_start:
{
uint8_t v___x_339__boxed_2393_; size_t v_i_boxed_2394_; size_t v_stop_boxed_2395_; uint8_t v_res_2396_; lean_object* v_r_2397_; 
v___x_339__boxed_2393_ = lean_unbox(v___x_2389_);
v_i_boxed_2394_ = lean_unbox_usize(v_i_2391_);
lean_dec(v_i_2391_);
v_stop_boxed_2395_ = lean_unbox_usize(v_stop_2392_);
lean_dec(v_stop_2392_);
v_res_2396_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(v___x_2388_, v___x_339__boxed_2393_, v_as_2390_, v_i_boxed_2394_, v_stop_boxed_2395_);
lean_dec_ref(v_as_2390_);
lean_dec(v___x_2388_);
v_r_2397_ = lean_box(v_res_2396_);
return v_r_2397_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquots(lean_object* v_stx_2398_){
_start:
{
uint8_t v___x_2399_; 
v___x_2399_ = l_Lean_Syntax_isAntiquot(v_stx_2398_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; uint8_t v___x_2401_; 
v___x_2400_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2398_);
v___x_2401_ = l_Lean_Syntax_isOfKind(v_stx_2398_, v___x_2400_);
if (v___x_2401_ == 0)
{
lean_dec(v_stx_2398_);
return v___x_2401_;
}
else
{
lean_object* v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; 
v___x_2402_ = lean_unsigned_to_nat(0u);
v___x_2403_ = l_Lean_Syntax_getNumArgs(v_stx_2398_);
v___x_2404_ = lean_nat_dec_lt(v___x_2402_, v___x_2403_);
if (v___x_2404_ == 0)
{
lean_dec(v___x_2403_);
lean_dec(v_stx_2398_);
return v___x_2404_;
}
else
{
lean_object* v___x_2405_; lean_object* v___x_2406_; uint8_t v___x_2407_; 
v___x_2405_ = l_Lean_Syntax_getArgs(v_stx_2398_);
lean_dec(v_stx_2398_);
v___x_2406_ = lean_array_get_size(v___x_2405_);
v___x_2407_ = lean_nat_dec_lt(v___x_2402_, v___x_2406_);
if (v___x_2407_ == 0)
{
lean_dec_ref(v___x_2405_);
lean_dec(v___x_2403_);
return v___x_2404_;
}
else
{
if (v___x_2407_ == 0)
{
lean_dec_ref(v___x_2405_);
lean_dec(v___x_2403_);
return v___x_2404_;
}
else
{
size_t v___x_2408_; size_t v___x_2409_; uint8_t v___x_2410_; 
v___x_2408_ = ((size_t)0ULL);
v___x_2409_ = lean_usize_of_nat(v___x_2406_);
v___x_2410_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(v___x_2403_, v___x_2399_, v___x_2405_, v___x_2408_, v___x_2409_);
lean_dec_ref(v___x_2405_);
lean_dec(v___x_2403_);
if (v___x_2410_ == 0)
{
return v___x_2407_;
}
else
{
return v___x_2399_;
}
}
}
}
}
}
else
{
lean_dec(v_stx_2398_);
return v___x_2399_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquots___boxed(lean_object* v_stx_2411_){
_start:
{
uint8_t v_res_2412_; lean_object* v_r_2413_; 
v_res_2412_ = l_Lean_Syntax_isAntiquots(v_stx_2411_);
v_r_2413_ = lean_box(v_res_2412_);
return v_r_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object* v_stx_2414_){
_start:
{
lean_object* v___x_2415_; uint8_t v___x_2416_; 
v___x_2415_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2414_);
v___x_2416_ = l_Lean_Syntax_isOfKind(v_stx_2414_, v___x_2415_);
if (v___x_2416_ == 0)
{
return v_stx_2414_;
}
else
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = l_Lean_Syntax_getArg(v_stx_2414_, v___x_2417_);
lean_dec(v_stx_2414_);
return v___x_2418_;
}
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__1(void){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__0));
v___x_2421_ = l_Lean_mkAtom(v___x_2420_);
return v___x_2421_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__3(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2424_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2425_ = lean_unsigned_to_nat(4u);
v___x_2426_ = lean_mk_empty_array_with_capacity(v___x_2425_);
v___x_2427_ = lean_array_push(v___x_2426_, v___x_2424_);
return v___x_2427_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__9(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__8));
v___x_2436_ = l_Lean_mkAtom(v___x_2435_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__10(void){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2437_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__9, &l_Lean_Syntax_mkAntiquotNode___closed__9_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__9);
v___x_2438_ = lean_unsigned_to_nat(2u);
v___x_2439_ = lean_mk_empty_array_with_capacity(v___x_2438_);
v___x_2440_ = lean_array_push(v___x_2439_, v___x_2437_);
return v___x_2440_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__16(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__15));
v___x_2452_ = l_Lean_mkAtom(v___x_2451_);
return v___x_2452_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__18(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__17));
v___x_2455_ = l_Lean_mkAtom(v___x_2454_);
return v___x_2455_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__19(void){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2456_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__16, &l_Lean_Syntax_mkAntiquotNode___closed__16_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__16);
v___x_2457_ = lean_unsigned_to_nat(3u);
v___x_2458_ = lean_mk_empty_array_with_capacity(v___x_2457_);
v___x_2459_ = lean_array_push(v___x_2458_, v___x_2456_);
return v___x_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object* v_kind_2460_, lean_object* v_term_2461_, lean_object* v_nesting_2462_, lean_object* v_name_2463_, uint8_t v_isPseudoKind_2464_){
_start:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v_nesting_2469_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2483_; lean_object* v___y_2484_; lean_object* v___y_2488_; uint8_t v___x_2496_; 
v___x_2465_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2466_ = lean_mk_array(v_nesting_2462_, v___x_2465_);
v___x_2467_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2468_ = lean_box(2);
v_nesting_2469_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_nesting_2469_, 0, v___x_2468_);
lean_ctor_set(v_nesting_2469_, 1, v___x_2467_);
lean_ctor_set(v_nesting_2469_, 2, v___x_2466_);
v___x_2496_ = l_Lean_Syntax_isIdent(v_term_2461_);
if (v___x_2496_ == 0)
{
lean_object* v___x_2497_; uint8_t v___x_2498_; 
v___x_2497_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__12));
lean_inc(v_term_2461_);
v___x_2498_ = l_Lean_Syntax_isOfKind(v_term_2461_, v___x_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2499_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__14));
v___x_2500_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__18, &l_Lean_Syntax_mkAntiquotNode___closed__18_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__18);
v___x_2501_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__19, &l_Lean_Syntax_mkAntiquotNode___closed__19_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__19);
v___x_2502_ = lean_array_push(v___x_2501_, v_term_2461_);
v___x_2503_ = lean_array_push(v___x_2502_, v___x_2500_);
v___x_2504_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2468_);
lean_ctor_set(v___x_2504_, 1, v___x_2499_);
lean_ctor_set(v___x_2504_, 2, v___x_2503_);
v___y_2488_ = v___x_2504_;
goto v___jp_2487_;
}
else
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = lean_unsigned_to_nat(0u);
v___x_2506_ = l_Lean_Syntax_getArg(v_term_2461_, v___x_2505_);
lean_dec(v_term_2461_);
v___y_2488_ = v___x_2506_;
goto v___jp_2487_;
}
}
else
{
v___y_2488_ = v_term_2461_;
goto v___jp_2487_;
}
v___jp_2470_:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
lean_inc(v___y_2473_);
v___x_2474_ = l_Lean_Name_append(v_kind_2460_, v___y_2473_);
v___x_2475_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__2));
v___x_2476_ = l_Lean_Name_append(v___x_2474_, v___x_2475_);
v___x_2477_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__3, &l_Lean_Syntax_mkAntiquotNode___closed__3_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__3);
v___x_2478_ = lean_array_push(v___x_2477_, v_nesting_2469_);
v___x_2479_ = lean_array_push(v___x_2478_, v___y_2471_);
v___x_2480_ = lean_array_push(v___x_2479_, v___y_2472_);
v___x_2481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2468_);
lean_ctor_set(v___x_2481_, 1, v___x_2476_);
lean_ctor_set(v___x_2481_, 2, v___x_2480_);
return v___x_2481_;
}
v___jp_2482_:
{
if (v_isPseudoKind_2464_ == 0)
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_box(0);
v___y_2471_ = v___y_2483_;
v___y_2472_ = v___y_2484_;
v___y_2473_ = v___x_2485_;
goto v___jp_2470_;
}
else
{
lean_object* v___x_2486_; 
v___x_2486_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__5));
v___y_2471_ = v___y_2483_;
v___y_2472_ = v___y_2484_;
v___y_2473_ = v___x_2486_;
goto v___jp_2470_;
}
}
v___jp_2487_:
{
if (lean_obj_tag(v_name_2463_) == 0)
{
lean_object* v___x_2489_; 
v___x_2489_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__3));
v___y_2483_ = v___y_2488_;
v___y_2484_ = v___x_2489_;
goto v___jp_2482_;
}
else
{
lean_object* v_val_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v_val_2490_ = lean_ctor_get(v_name_2463_, 0);
lean_inc(v_val_2490_);
lean_dec_ref_known(v_name_2463_, 1);
v___x_2491_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__7));
v___x_2492_ = l_Lean_mkAtom(v_val_2490_);
v___x_2493_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__10, &l_Lean_Syntax_mkAntiquotNode___closed__10_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__10);
v___x_2494_ = lean_array_push(v___x_2493_, v___x_2492_);
v___x_2495_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2468_);
lean_ctor_set(v___x_2495_, 1, v___x_2491_);
lean_ctor_set(v___x_2495_, 2, v___x_2494_);
v___y_2483_ = v___y_2488_;
v___y_2484_ = v___x_2495_;
goto v___jp_2482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode___boxed(lean_object* v_kind_2507_, lean_object* v_term_2508_, lean_object* v_nesting_2509_, lean_object* v_name_2510_, lean_object* v_isPseudoKind_2511_){
_start:
{
uint8_t v_isPseudoKind_boxed_2512_; lean_object* v_res_2513_; 
v_isPseudoKind_boxed_2512_ = lean_unbox(v_isPseudoKind_2511_);
v_res_2513_ = l_Lean_Syntax_mkAntiquotNode(v_kind_2507_, v_term_2508_, v_nesting_2509_, v_name_2510_, v_isPseudoKind_boxed_2512_);
return v_res_2513_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object* v_stx_2514_){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; uint8_t v___x_2520_; 
v___x_2515_ = lean_unsigned_to_nat(1u);
v___x_2516_ = l_Lean_Syntax_getArg(v_stx_2514_, v___x_2515_);
v___x_2517_ = l_Lean_Syntax_getArgs(v___x_2516_);
lean_dec(v___x_2516_);
v___x_2518_ = lean_array_get_size(v___x_2517_);
lean_dec_ref(v___x_2517_);
v___x_2519_ = lean_unsigned_to_nat(0u);
v___x_2520_ = lean_nat_dec_eq(v___x_2518_, v___x_2519_);
if (v___x_2520_ == 0)
{
uint8_t v___x_2521_; 
v___x_2521_ = 1;
return v___x_2521_;
}
else
{
uint8_t v___x_2522_; 
v___x_2522_ = 0;
return v___x_2522_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isEscapedAntiquot___boxed(lean_object* v_stx_2523_){
_start:
{
uint8_t v_res_2524_; lean_object* v_r_2525_; 
v_res_2524_ = l_Lean_Syntax_isEscapedAntiquot(v_stx_2523_);
lean_dec(v_stx_2523_);
v_r_2525_ = lean_box(v_res_2524_);
return v_r_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_unescapeAntiquot(lean_object* v_stx_2526_){
_start:
{
uint8_t v___x_2527_; 
v___x_2527_ = l_Lean_Syntax_isAntiquot(v_stx_2526_);
if (v___x_2527_ == 0)
{
return v_stx_2526_;
}
else
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2528_ = lean_unsigned_to_nat(1u);
v___x_2529_ = l_Lean_Syntax_getArg(v_stx_2526_, v___x_2528_);
v___x_2530_ = l_Lean_Syntax_getArgs(v___x_2529_);
lean_dec(v___x_2529_);
v___x_2531_ = lean_array_pop(v___x_2530_);
v___x_2532_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2533_ = lean_box(2);
v___x_2534_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
lean_ctor_set(v___x_2534_, 1, v___x_2532_);
lean_ctor_set(v___x_2534_, 2, v___x_2531_);
v___x_2535_ = l_Lean_Syntax_setArg(v_stx_2526_, v___x_2528_, v___x_2534_);
return v___x_2535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object* v_stx_2536_){
_start:
{
lean_object* v___y_2538_; uint8_t v___x_2549_; 
v___x_2549_ = l_Lean_Syntax_isAntiquot(v_stx_2536_);
if (v___x_2549_ == 0)
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_unsigned_to_nat(3u);
v___x_2551_ = l_Lean_Syntax_getArg(v_stx_2536_, v___x_2550_);
v___y_2538_ = v___x_2551_;
goto v___jp_2537_;
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = lean_unsigned_to_nat(2u);
v___x_2553_ = l_Lean_Syntax_getArg(v_stx_2536_, v___x_2552_);
v___y_2538_ = v___x_2553_;
goto v___jp_2537_;
}
v___jp_2537_:
{
uint8_t v___x_2539_; 
v___x_2539_ = l_Lean_Syntax_isIdent(v___y_2538_);
if (v___x_2539_ == 0)
{
uint8_t v___x_2540_; 
v___x_2540_ = l_Lean_Syntax_isAtom(v___y_2538_);
if (v___x_2540_ == 0)
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = lean_unsigned_to_nat(1u);
v___x_2542_ = l_Lean_Syntax_getArg(v___y_2538_, v___x_2541_);
lean_dec(v___y_2538_);
return v___x_2542_;
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2543_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__12));
v___x_2544_ = lean_unsigned_to_nat(1u);
v___x_2545_ = lean_mk_empty_array_with_capacity(v___x_2544_);
v___x_2546_ = lean_array_push(v___x_2545_, v___y_2538_);
v___x_2547_ = lean_box(2);
v___x_2548_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
lean_ctor_set(v___x_2548_, 1, v___x_2543_);
lean_ctor_set(v___x_2548_, 2, v___x_2546_);
return v___x_2548_;
}
}
else
{
return v___y_2538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm___boxed(lean_object* v_stx_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lean_Syntax_getAntiquotTerm(v_stx_2554_);
lean_dec(v_stx_2554_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f(lean_object* v_x_2556_){
_start:
{
if (lean_obj_tag(v_x_2556_) == 1)
{
lean_object* v_kind_2557_; 
v_kind_2557_ = lean_ctor_get(v_x_2556_, 1);
if (lean_obj_tag(v_kind_2557_) == 1)
{
lean_object* v_pre_2558_; lean_object* v_str_2559_; 
v_pre_2558_ = lean_ctor_get(v_kind_2557_, 0);
v_str_2559_ = lean_ctor_get(v_kind_2557_, 1);
if (lean_obj_tag(v_pre_2558_) == 1)
{
lean_object* v_pre_2565_; lean_object* v_str_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; 
v_pre_2565_ = lean_ctor_get(v_pre_2558_, 0);
v_str_2566_ = lean_ctor_get(v_pre_2558_, 1);
v___x_2567_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__4));
v___x_2568_ = lean_string_dec_eq(v_str_2566_, v___x_2567_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; uint8_t v___x_2570_; 
v___x_2569_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2570_ = lean_string_dec_eq(v_str_2559_, v___x_2569_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_box(0);
return v___x_2571_;
}
else
{
goto v___jp_2560_;
}
}
else
{
lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2572_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2573_ = lean_string_dec_eq(v_str_2559_, v___x_2572_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; 
v___x_2574_ = lean_box(0);
return v___x_2574_;
}
else
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2575_ = lean_box(v___x_2573_);
lean_inc(v_pre_2565_);
v___x_2576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2576_, 0, v_pre_2565_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
return v___x_2577_;
}
}
}
else
{
lean_object* v___x_2578_; uint8_t v___x_2579_; 
v___x_2578_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2579_ = lean_string_dec_eq(v_str_2559_, v___x_2578_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_box(0);
return v___x_2580_;
}
else
{
goto v___jp_2560_;
}
}
v___jp_2560_:
{
uint8_t v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2561_ = 0;
v___x_2562_ = lean_box(v___x_2561_);
lean_inc(v_pre_2558_);
v___x_2563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2563_, 0, v_pre_2558_);
lean_ctor_set(v___x_2563_, 1, v___x_2562_);
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
return v___x_2564_;
}
}
else
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_box(0);
return v___x_2581_;
}
}
else
{
lean_object* v___x_2582_; 
v___x_2582_ = lean_box(0);
return v___x_2582_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f___boxed(lean_object* v_x_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lean_Syntax_antiquotKind_x3f(v_x_2583_);
lean_dec(v_x_2583_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(lean_object* v_as_2585_, size_t v_i_2586_, size_t v_stop_2587_, lean_object* v_b_2588_){
_start:
{
lean_object* v___y_2590_; uint8_t v___x_2594_; 
v___x_2594_ = lean_usize_dec_eq(v_i_2586_, v_stop_2587_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2595_ = lean_array_uget_borrowed(v_as_2585_, v_i_2586_);
v___x_2596_ = l_Lean_Syntax_antiquotKind_x3f(v___x_2595_);
if (lean_obj_tag(v___x_2596_) == 0)
{
v___y_2590_ = v_b_2588_;
goto v___jp_2589_;
}
else
{
lean_object* v_val_2597_; lean_object* v___x_2598_; 
v_val_2597_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_val_2597_);
lean_dec_ref_known(v___x_2596_, 1);
v___x_2598_ = lean_array_push(v_b_2588_, v_val_2597_);
v___y_2590_ = v___x_2598_;
goto v___jp_2589_;
}
}
else
{
return v_b_2588_;
}
v___jp_2589_:
{
size_t v___x_2591_; size_t v___x_2592_; 
v___x_2591_ = ((size_t)1ULL);
v___x_2592_ = lean_usize_add(v_i_2586_, v___x_2591_);
v_i_2586_ = v___x_2592_;
v_b_2588_ = v___y_2590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0___boxed(lean_object* v_as_2599_, lean_object* v_i_2600_, lean_object* v_stop_2601_, lean_object* v_b_2602_){
_start:
{
size_t v_i_boxed_2603_; size_t v_stop_boxed_2604_; lean_object* v_res_2605_; 
v_i_boxed_2603_ = lean_unbox_usize(v_i_2600_);
lean_dec(v_i_2600_);
v_stop_boxed_2604_ = lean_unbox_usize(v_stop_2601_);
lean_dec(v_stop_2601_);
v_res_2605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2599_, v_i_boxed_2603_, v_stop_boxed_2604_, v_b_2602_);
lean_dec_ref(v_as_2599_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(lean_object* v_as_2608_, lean_object* v_start_2609_, lean_object* v_stop_2610_){
_start:
{
lean_object* v___x_2611_; uint8_t v___x_2612_; 
v___x_2611_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0));
v___x_2612_ = lean_nat_dec_lt(v_start_2609_, v_stop_2610_);
if (v___x_2612_ == 0)
{
return v___x_2611_;
}
else
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = lean_array_get_size(v_as_2608_);
v___x_2614_ = lean_nat_dec_le(v_stop_2610_, v___x_2613_);
if (v___x_2614_ == 0)
{
uint8_t v___x_2615_; 
v___x_2615_ = lean_nat_dec_lt(v_start_2609_, v___x_2613_);
if (v___x_2615_ == 0)
{
return v___x_2611_;
}
else
{
size_t v___x_2616_; size_t v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = lean_usize_of_nat(v_start_2609_);
v___x_2617_ = lean_usize_of_nat(v___x_2613_);
v___x_2618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2608_, v___x_2616_, v___x_2617_, v___x_2611_);
return v___x_2618_;
}
}
else
{
size_t v___x_2619_; size_t v___x_2620_; lean_object* v___x_2621_; 
v___x_2619_ = lean_usize_of_nat(v_start_2609_);
v___x_2620_ = lean_usize_of_nat(v_stop_2610_);
v___x_2621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2608_, v___x_2619_, v___x_2620_, v___x_2611_);
return v___x_2621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___boxed(lean_object* v_as_2622_, lean_object* v_start_2623_, lean_object* v_stop_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(v_as_2622_, v_start_2623_, v_stop_2624_);
lean_dec(v_stop_2624_);
lean_dec(v_start_2623_);
lean_dec_ref(v_as_2622_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKinds(lean_object* v_stx_2626_){
_start:
{
lean_object* v___x_2627_; uint8_t v___x_2628_; 
v___x_2627_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2626_);
v___x_2628_ = l_Lean_Syntax_isOfKind(v_stx_2626_, v___x_2627_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_Syntax_antiquotKind_x3f(v_stx_2626_);
lean_dec(v_stx_2626_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_box(0);
return v___x_2630_;
}
else
{
lean_object* v_val_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v_val_2631_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_val_2631_);
lean_dec_ref_known(v___x_2629_, 1);
v___x_2632_ = lean_box(0);
v___x_2633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2633_, 0, v_val_2631_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
return v___x_2633_;
}
}
else
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2634_ = l_Lean_Syntax_getArgs(v_stx_2626_);
lean_dec(v_stx_2626_);
v___x_2635_ = lean_unsigned_to_nat(0u);
v___x_2636_ = lean_array_get_size(v___x_2634_);
v___x_2637_ = l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(v___x_2634_, v___x_2635_, v___x_2636_);
lean_dec_ref(v___x_2634_);
v___x_2638_ = lean_array_to_list(v___x_2637_);
return v___x_2638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f(lean_object* v_x_2640_){
_start:
{
if (lean_obj_tag(v_x_2640_) == 1)
{
lean_object* v_kind_2641_; 
v_kind_2641_ = lean_ctor_get(v_x_2640_, 1);
if (lean_obj_tag(v_kind_2641_) == 1)
{
lean_object* v_pre_2642_; lean_object* v_str_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_pre_2642_ = lean_ctor_get(v_kind_2641_, 0);
v_str_2643_ = lean_ctor_get(v_kind_2641_, 1);
v___x_2644_ = ((lean_object*)(l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0));
v___x_2645_ = lean_string_dec_eq(v_str_2643_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; 
v___x_2646_ = lean_box(0);
return v___x_2646_;
}
else
{
lean_object* v___x_2647_; 
lean_inc(v_pre_2642_);
v___x_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2647_, 0, v_pre_2642_);
return v___x_2647_;
}
}
else
{
lean_object* v___x_2648_; 
v___x_2648_ = lean_box(0);
return v___x_2648_;
}
}
else
{
lean_object* v___x_2649_; 
v___x_2649_ = lean_box(0);
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___boxed(lean_object* v_x_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_Syntax_antiquotSpliceKind_x3f(v_x_2650_);
lean_dec(v_x_2650_);
return v_res_2651_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object* v_stx_2652_){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Lean_Syntax_antiquotSpliceKind_x3f(v_stx_2652_);
if (lean_obj_tag(v___x_2653_) == 0)
{
uint8_t v___x_2654_; 
v___x_2654_ = 0;
return v___x_2654_;
}
else
{
uint8_t v___x_2655_; 
lean_dec_ref_known(v___x_2653_, 1);
v___x_2655_ = 1;
return v___x_2655_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSplice___boxed(lean_object* v_stx_2656_){
_start:
{
uint8_t v_res_2657_; lean_object* v_r_2658_; 
v_res_2657_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2656_);
lean_dec(v_stx_2656_);
v_r_2658_ = lean_box(v_res_2657_);
return v_r_2658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents(lean_object* v_stx_2659_){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = lean_unsigned_to_nat(3u);
v___x_2661_ = l_Lean_Syntax_getArg(v_stx_2659_, v___x_2660_);
v___x_2662_ = l_Lean_Syntax_getArgs(v___x_2661_);
lean_dec(v___x_2661_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents___boxed(lean_object* v_stx_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Lean_Syntax_getAntiquotSpliceContents(v_stx_2663_);
lean_dec(v_stx_2663_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix(lean_object* v_stx_2665_){
_start:
{
uint8_t v___x_2666_; 
v___x_2666_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2665_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2667_ = lean_unsigned_to_nat(1u);
v___x_2668_ = l_Lean_Syntax_getArg(v_stx_2665_, v___x_2667_);
return v___x_2668_;
}
else
{
lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2669_ = lean_unsigned_to_nat(5u);
v___x_2670_ = l_Lean_Syntax_getArg(v_stx_2665_, v___x_2669_);
return v___x_2670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix___boxed(lean_object* v_stx_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l_Lean_Syntax_getAntiquotSpliceSuffix(v_stx_2671_);
lean_dec(v_stx_2671_);
return v_res_2672_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__3(void){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__2));
v___x_2678_ = l_Lean_mkAtom(v___x_2677_);
return v___x_2678_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__5(void){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2680_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__4));
v___x_2681_ = l_Lean_mkAtom(v___x_2680_);
return v___x_2681_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__6(void){
_start:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2682_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2683_ = lean_unsigned_to_nat(6u);
v___x_2684_ = lean_mk_empty_array_with_capacity(v___x_2683_);
v___x_2685_ = lean_array_push(v___x_2684_, v___x_2682_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSpliceNode(lean_object* v_kind_2686_, lean_object* v_contents_2687_, lean_object* v_suffix_2688_, lean_object* v_nesting_2689_){
_start:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v_nesting_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2690_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2691_ = lean_mk_array(v_nesting_2689_, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2693_ = lean_box(2);
v_nesting_2694_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_nesting_2694_, 0, v___x_2693_);
lean_ctor_set(v_nesting_2694_, 1, v___x_2692_);
lean_ctor_set(v_nesting_2694_, 2, v___x_2691_);
v___x_2695_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__1));
v___x_2696_ = l_Lean_Name_append(v_kind_2686_, v___x_2695_);
v___x_2697_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__3, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__3_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__3);
v___x_2698_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2693_);
lean_ctor_set(v___x_2698_, 1, v___x_2692_);
lean_ctor_set(v___x_2698_, 2, v_contents_2687_);
v___x_2699_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__5, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__5_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__5);
v___x_2700_ = l_Lean_mkAtom(v_suffix_2688_);
v___x_2701_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__6, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__6_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__6);
v___x_2702_ = lean_array_push(v___x_2701_, v_nesting_2694_);
v___x_2703_ = lean_array_push(v___x_2702_, v___x_2697_);
v___x_2704_ = lean_array_push(v___x_2703_, v___x_2698_);
v___x_2705_ = lean_array_push(v___x_2704_, v___x_2699_);
v___x_2706_ = lean_array_push(v___x_2705_, v___x_2700_);
v___x_2707_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2693_);
lean_ctor_set(v___x_2707_, 1, v___x_2696_);
lean_ctor_set(v___x_2707_, 2, v___x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f(lean_object* v_x_2709_){
_start:
{
if (lean_obj_tag(v_x_2709_) == 1)
{
lean_object* v_kind_2710_; 
v_kind_2710_ = lean_ctor_get(v_x_2709_, 1);
if (lean_obj_tag(v_kind_2710_) == 1)
{
lean_object* v_pre_2711_; lean_object* v_str_2712_; lean_object* v___x_2713_; uint8_t v___x_2714_; 
v_pre_2711_ = lean_ctor_get(v_kind_2710_, 0);
v_str_2712_ = lean_ctor_get(v_kind_2710_, 1);
v___x_2713_ = ((lean_object*)(l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0));
v___x_2714_ = lean_string_dec_eq(v_str_2712_, v___x_2713_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_box(0);
return v___x_2715_;
}
else
{
lean_object* v___x_2716_; 
lean_inc(v_pre_2711_);
v___x_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_pre_2711_);
return v___x_2716_;
}
}
else
{
lean_object* v___x_2717_; 
v___x_2717_ = lean_box(0);
return v___x_2717_;
}
}
else
{
lean_object* v___x_2718_; 
v___x_2718_ = lean_box(0);
return v___x_2718_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___boxed(lean_object* v_x_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Lean_Syntax_antiquotSuffixSplice_x3f(v_x_2719_);
lean_dec(v_x_2719_);
return v_res_2720_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object* v_stx_2721_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lean_Syntax_antiquotSuffixSplice_x3f(v_stx_2721_);
if (lean_obj_tag(v___x_2722_) == 0)
{
uint8_t v___x_2723_; 
v___x_2723_ = 0;
return v___x_2723_;
}
else
{
uint8_t v___x_2724_; 
lean_dec_ref_known(v___x_2722_, 1);
v___x_2724_ = 1;
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSuffixSplice___boxed(lean_object* v_stx_2725_){
_start:
{
uint8_t v_res_2726_; lean_object* v_r_2727_; 
v_res_2726_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_2725_);
lean_dec(v_stx_2725_);
v_r_2727_ = lean_box(v_res_2726_);
return v_r_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner(lean_object* v_stx_2728_){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = lean_unsigned_to_nat(0u);
v___x_2730_ = l_Lean_Syntax_getArg(v_stx_2728_, v___x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner___boxed(lean_object* v_stx_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lean_Syntax_getAntiquotSuffixSpliceInner(v_stx_2731_);
lean_dec(v_stx_2731_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object* v_kind_2735_, lean_object* v_inner_2736_, lean_object* v_suffix_2737_){
_start:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2738_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0));
v___x_2739_ = l_Lean_Name_append(v_kind_2735_, v___x_2738_);
v___x_2740_ = l_Lean_mkAtom(v_suffix_2737_);
v___x_2741_ = lean_unsigned_to_nat(2u);
v___x_2742_ = lean_mk_empty_array_with_capacity(v___x_2741_);
v___x_2743_ = lean_array_push(v___x_2742_, v_inner_2736_);
v___x_2744_ = lean_array_push(v___x_2743_, v___x_2740_);
v___x_2745_ = lean_box(2);
v___x_2746_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2745_);
lean_ctor_set(v___x_2746_, 1, v___x_2739_);
lean_ctor_set(v___x_2746_, 2, v___x_2744_);
return v___x_2746_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object* v_stx_2750_){
_start:
{
lean_object* v___x_2751_; uint8_t v___x_2752_; 
v___x_2751_ = ((lean_object*)(l_Lean_Syntax_isTokenAntiquot___closed__1));
v___x_2752_ = l_Lean_Syntax_isOfKind(v_stx_2750_, v___x_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isTokenAntiquot___boxed(lean_object* v_stx_2753_){
_start:
{
uint8_t v_res_2754_; lean_object* v_r_2755_; 
v_res_2754_ = l_Lean_Syntax_isTokenAntiquot(v_stx_2753_);
v_r_2755_ = lean_box(v_res_2754_);
return v_r_2755_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAnyAntiquot(lean_object* v_stx_2756_){
_start:
{
uint8_t v___x_2757_; 
v___x_2757_ = l_Lean_Syntax_isAntiquot(v_stx_2756_);
if (v___x_2757_ == 0)
{
uint8_t v___x_2758_; 
v___x_2758_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2756_);
if (v___x_2758_ == 0)
{
uint8_t v___x_2759_; 
v___x_2759_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_2756_);
if (v___x_2759_ == 0)
{
uint8_t v___x_2760_; 
v___x_2760_ = l_Lean_Syntax_isTokenAntiquot(v_stx_2756_);
return v___x_2760_;
}
else
{
lean_dec(v_stx_2756_);
return v___x_2759_;
}
}
else
{
lean_dec(v_stx_2756_);
return v___x_2758_;
}
}
else
{
lean_dec(v_stx_2756_);
return v___x_2757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAnyAntiquot___boxed(lean_object* v_stx_2761_){
_start:
{
uint8_t v_res_2762_; lean_object* v_r_2763_; 
v_res_2762_ = l_Lean_Syntax_isAnyAntiquot(v_stx_2761_);
v_r_2763_ = lean_box(v_res_2762_);
return v_r_2763_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(lean_object* v_upperBound_2767_, lean_object* v_stx_2768_, lean_object* v_visit_2769_, lean_object* v_stack_2770_, lean_object* v_accept_2771_, lean_object* v_a_2772_, lean_object* v_b_2773_){
_start:
{
lean_object* v_a_2775_; uint8_t v___x_2779_; 
v___x_2779_ = lean_nat_dec_lt(v_a_2772_, v_upperBound_2767_);
if (v___x_2779_ == 0)
{
lean_dec(v_a_2772_);
lean_dec_ref(v_accept_2771_);
lean_dec(v_stack_2770_);
lean_dec_ref(v_visit_2769_);
lean_dec(v_stx_2768_);
lean_inc_ref(v_b_2773_);
return v_b_2773_;
}
else
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; uint8_t v___x_2784_; 
v___x_2780_ = lean_box(0);
v___x_2781_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0));
v___x_2782_ = l_Lean_Syntax_getArg(v_stx_2768_, v_a_2772_);
lean_inc_ref(v_visit_2769_);
lean_inc(v___x_2782_);
v___x_2783_ = lean_apply_1(v_visit_2769_, v___x_2782_);
v___x_2784_ = lean_unbox(v___x_2783_);
if (v___x_2784_ == 0)
{
lean_dec(v___x_2782_);
v_a_2775_ = v___x_2781_;
goto v___jp_2774_;
}
else
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
lean_inc(v_a_2772_);
lean_inc(v_stx_2768_);
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v_stx_2768_);
lean_ctor_set(v___x_2785_, 1, v_a_2772_);
lean_inc(v_stack_2770_);
v___x_2786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
lean_ctor_set(v___x_2786_, 1, v_stack_2770_);
lean_inc_ref(v_accept_2771_);
lean_inc_ref(v_visit_2769_);
v___x_2787_ = l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(v_visit_2769_, v_accept_2771_, v___x_2786_, v___x_2782_);
if (lean_obj_tag(v___x_2787_) == 1)
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
lean_dec(v_a_2772_);
lean_dec_ref(v_accept_2771_);
lean_dec(v_stack_2770_);
lean_dec_ref(v_visit_2769_);
lean_dec(v_stx_2768_);
v___x_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
v___x_2789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2788_);
lean_ctor_set(v___x_2789_, 1, v___x_2780_);
return v___x_2789_;
}
else
{
lean_dec(v___x_2787_);
v_a_2775_ = v___x_2781_;
goto v___jp_2774_;
}
}
}
v___jp_2774_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = lean_unsigned_to_nat(1u);
v___x_2777_ = lean_nat_add(v_a_2772_, v___x_2776_);
lean_dec(v_a_2772_);
v_a_2772_ = v___x_2777_;
v_b_2773_ = v_a_2775_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(lean_object* v_visit_2790_, lean_object* v_accept_2791_, lean_object* v_stack_2792_, lean_object* v_stx_2793_){
_start:
{
lean_object* v___x_2794_; uint8_t v___x_2795_; 
lean_inc_ref(v_accept_2791_);
lean_inc(v_stx_2793_);
v___x_2794_ = lean_apply_1(v_accept_2791_, v_stx_2793_);
v___x_2795_ = lean_unbox(v___x_2794_);
if (v___x_2795_ == 0)
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v_fst_2801_; 
v___x_2796_ = l_Lean_Syntax_getNumArgs(v_stx_2793_);
v___x_2797_ = lean_unsigned_to_nat(0u);
v___x_2798_ = lean_box(0);
v___x_2799_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0));
v___x_2800_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v___x_2796_, v_stx_2793_, v_visit_2790_, v_stack_2792_, v_accept_2791_, v___x_2797_, v___x_2799_);
lean_dec(v___x_2796_);
v_fst_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_fst_2801_);
lean_dec_ref(v___x_2800_);
if (lean_obj_tag(v_fst_2801_) == 0)
{
return v___x_2798_;
}
else
{
lean_object* v_val_2802_; 
v_val_2802_ = lean_ctor_get(v_fst_2801_, 0);
lean_inc(v_val_2802_);
lean_dec_ref_known(v_fst_2801_, 1);
return v_val_2802_;
}
}
else
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_dec_ref(v_accept_2791_);
lean_dec_ref(v_visit_2790_);
v___x_2803_ = lean_unsigned_to_nat(0u);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v_stx_2793_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
v___x_2805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2804_);
lean_ctor_set(v___x_2805_, 1, v_stack_2792_);
v___x_2806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
return v___x_2806_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg___boxed(lean_object* v_upperBound_2807_, lean_object* v_stx_2808_, lean_object* v_visit_2809_, lean_object* v_stack_2810_, lean_object* v_accept_2811_, lean_object* v_a_2812_, lean_object* v_b_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v_upperBound_2807_, v_stx_2808_, v_visit_2809_, v_stack_2810_, v_accept_2811_, v_a_2812_, v_b_2813_);
lean_dec_ref(v_b_2813_);
lean_dec(v_upperBound_2807_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(lean_object* v_upperBound_2815_, lean_object* v_stx_2816_, lean_object* v_visit_2817_, lean_object* v_stack_2818_, lean_object* v_accept_2819_, lean_object* v_inst_2820_, lean_object* v_R_2821_, lean_object* v_a_2822_, lean_object* v_b_2823_, lean_object* v_c_2824_){
_start:
{
lean_object* v___x_2825_; 
v___x_2825_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v_upperBound_2815_, v_stx_2816_, v_visit_2817_, v_stack_2818_, v_accept_2819_, v_a_2822_, v_b_2823_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___boxed(lean_object* v_upperBound_2826_, lean_object* v_stx_2827_, lean_object* v_visit_2828_, lean_object* v_stack_2829_, lean_object* v_accept_2830_, lean_object* v_inst_2831_, lean_object* v_R_2832_, lean_object* v_a_2833_, lean_object* v_b_2834_, lean_object* v_c_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(v_upperBound_2826_, v_stx_2827_, v_visit_2828_, v_stack_2829_, v_accept_2830_, v_inst_2831_, v_R_2832_, v_a_2833_, v_b_2834_, v_c_2835_);
lean_dec_ref(v_b_2834_);
lean_dec(v_upperBound_2826_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_findStack_x3f(lean_object* v_root_2837_, lean_object* v_visit_2838_, lean_object* v_accept_2839_){
_start:
{
lean_object* v___x_2840_; uint8_t v___x_2841_; 
lean_inc_ref(v_visit_2838_);
lean_inc(v_root_2837_);
v___x_2840_ = lean_apply_1(v_visit_2838_, v_root_2837_);
v___x_2841_ = lean_unbox(v___x_2840_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; 
lean_dec_ref(v_accept_2839_);
lean_dec_ref(v_visit_2838_);
lean_dec(v_root_2837_);
v___x_2842_ = lean_box(0);
return v___x_2842_;
}
else
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = lean_box(0);
v___x_2844_ = l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(v_visit_2838_, v_accept_2839_, v___x_2843_, v_root_2837_);
return v___x_2844_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches___lam__0(uint8_t v___x_2845_, lean_object* v_x_2846_, lean_object* v_p_2847_){
_start:
{
if (lean_obj_tag(v_p_2847_) == 0)
{
lean_dec_ref(v_x_2846_);
return v___x_2845_;
}
else
{
lean_object* v_fst_2848_; lean_object* v_val_2849_; uint8_t v___x_2850_; 
v_fst_2848_ = lean_ctor_get(v_x_2846_, 0);
lean_inc(v_fst_2848_);
lean_dec_ref(v_x_2846_);
v_val_2849_ = lean_ctor_get(v_p_2847_, 0);
v___x_2850_ = l_Lean_Syntax_isOfKind(v_fst_2848_, v_val_2849_);
return v___x_2850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___lam__0___boxed(lean_object* v___x_2851_, lean_object* v_x_2852_, lean_object* v_p_2853_){
_start:
{
uint8_t v___x_123__boxed_2854_; uint8_t v_res_2855_; lean_object* v_r_2856_; 
v___x_123__boxed_2854_ = lean_unbox(v___x_2851_);
v_res_2855_ = l_Lean_Syntax_Stack_matches___lam__0(v___x_123__boxed_2854_, v_x_2852_, v_p_2853_);
lean_dec(v_p_2853_);
v_r_2856_ = lean_box(v_res_2855_);
return v_r_2856_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(lean_object* v_x_2857_){
_start:
{
if (lean_obj_tag(v_x_2857_) == 0)
{
uint8_t v___x_2858_; 
v___x_2858_ = 1;
return v___x_2858_;
}
else
{
lean_object* v_head_2859_; uint8_t v___x_2860_; 
v_head_2859_ = lean_ctor_get(v_x_2857_, 0);
v___x_2860_ = lean_unbox(v_head_2859_);
if (v___x_2860_ == 0)
{
uint8_t v___x_2861_; 
v___x_2861_ = lean_unbox(v_head_2859_);
return v___x_2861_;
}
else
{
lean_object* v_tail_2862_; 
v_tail_2862_ = lean_ctor_get(v_x_2857_, 1);
v_x_2857_ = v_tail_2862_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Syntax_Stack_matches_spec__0___boxed(lean_object* v_x_2864_){
_start:
{
uint8_t v_res_2865_; lean_object* v_r_2866_; 
v_res_2865_ = l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(v_x_2864_);
lean_dec(v_x_2864_);
v_r_2866_ = lean_box(v_res_2865_);
return v_r_2866_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches(lean_object* v_stack_2869_, lean_object* v_pattern_2870_){
_start:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2871_ = l_List_lengthTR___redArg(v_pattern_2870_);
v___x_2872_ = l_List_lengthTR___redArg(v_stack_2869_);
v___x_2873_ = lean_nat_dec_le(v___x_2871_, v___x_2872_);
lean_dec(v___x_2872_);
lean_dec(v___x_2871_);
if (v___x_2873_ == 0)
{
lean_dec(v_pattern_2870_);
lean_dec(v_stack_2869_);
return v___x_2873_;
}
else
{
lean_object* v___x_2874_; lean_object* v___f_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; 
v___x_2874_ = lean_box(v___x_2873_);
v___f_2875_ = lean_alloc_closure((void*)(l_Lean_Syntax_Stack_matches___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2875_, 0, v___x_2874_);
v___x_2876_ = ((lean_object*)(l_Lean_Syntax_Stack_matches___closed__0));
v___x_2877_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_box(0), lean_box(0), lean_box(0), v___f_2875_, v_stack_2869_, v_pattern_2870_, v___x_2876_);
v___x_2878_ = l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(v___x_2877_);
lean_dec(v___x_2877_);
return v___x_2878_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___boxed(lean_object* v_stack_2879_, lean_object* v_pattern_2880_){
_start:
{
uint8_t v_res_2881_; lean_object* v_r_2882_; 
v_res_2881_ = l_Lean_Syntax_Stack_matches(v_stack_2879_, v_pattern_2880_);
v_r_2882_ = lean_box(v_res_2881_);
return v_r_2882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing_x3f(lean_object* v_stx_2883_, lean_object* v_trailing_2884_){
_start:
{
lean_object* v___x_2885_; 
v___x_2885_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_2883_);
if (lean_obj_tag(v___x_2885_) == 1)
{
lean_object* v_val_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2921_; 
v_val_2886_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2888_ = v___x_2885_;
v_isShared_2889_ = v_isSharedCheck_2921_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_val_2886_);
lean_dec(v___x_2885_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2921_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
if (lean_obj_tag(v_val_2886_) == 0)
{
lean_object* v_trailing_2890_; lean_object* v_leading_2891_; lean_object* v_pos_2892_; lean_object* v_endPos_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2919_; 
v_trailing_2890_ = lean_ctor_get(v_val_2886_, 2);
v_leading_2891_ = lean_ctor_get(v_val_2886_, 0);
v_pos_2892_ = lean_ctor_get(v_val_2886_, 1);
v_endPos_2893_ = lean_ctor_get(v_val_2886_, 3);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_val_2886_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2895_ = v_val_2886_;
v_isShared_2896_ = v_isSharedCheck_2919_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_endPos_2893_);
lean_inc(v_trailing_2890_);
lean_inc(v_pos_2892_);
lean_inc(v_leading_2891_);
lean_dec(v_val_2886_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2919_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v_str_2897_; lean_object* v_startPos_2898_; lean_object* v_stopPos_2899_; lean_object* v_startPos_2900_; lean_object* v_stopPos_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2917_; 
v_str_2897_ = lean_ctor_get(v_trailing_2890_, 0);
lean_inc_ref(v_str_2897_);
v_startPos_2898_ = lean_ctor_get(v_trailing_2890_, 1);
lean_inc(v_startPos_2898_);
v_stopPos_2899_ = lean_ctor_get(v_trailing_2890_, 2);
lean_inc(v_stopPos_2899_);
lean_dec_ref(v_trailing_2890_);
v_startPos_2900_ = lean_ctor_get(v_trailing_2884_, 1);
v_stopPos_2901_ = lean_ctor_get(v_trailing_2884_, 2);
v_isSharedCheck_2917_ = !lean_is_exclusive(v_trailing_2884_);
if (v_isSharedCheck_2917_ == 0)
{
lean_object* v_unused_2918_; 
v_unused_2918_ = lean_ctor_get(v_trailing_2884_, 0);
lean_dec(v_unused_2918_);
v___x_2903_ = v_trailing_2884_;
v_isShared_2904_ = v_isSharedCheck_2917_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_stopPos_2901_);
lean_inc(v_startPos_2900_);
lean_dec(v_trailing_2884_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2917_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
uint8_t v_decide_2905_; 
v_decide_2905_ = lean_nat_dec_eq(v_stopPos_2899_, v_startPos_2900_);
lean_dec(v_startPos_2900_);
lean_dec(v_stopPos_2899_);
if (v_decide_2905_ == 0)
{
lean_object* v___x_2906_; 
lean_del_object(v___x_2903_);
lean_dec(v_stopPos_2901_);
lean_dec(v_startPos_2898_);
lean_dec_ref(v_str_2897_);
lean_del_object(v___x_2895_);
lean_dec(v_endPos_2893_);
lean_dec(v_pos_2892_);
lean_dec_ref(v_leading_2891_);
lean_del_object(v___x_2888_);
lean_dec(v_stx_2883_);
v___x_2906_ = lean_box(0);
return v___x_2906_;
}
else
{
lean_object* v_trailing_2908_; 
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 1, v_startPos_2898_);
lean_ctor_set(v___x_2903_, 0, v_str_2897_);
v_trailing_2908_ = v___x_2903_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_str_2897_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v_startPos_2898_);
lean_ctor_set(v_reuseFailAlloc_2916_, 2, v_stopPos_2901_);
v_trailing_2908_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2910_; 
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 2, v_trailing_2908_);
v___x_2910_ = v___x_2895_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_leading_2891_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v_pos_2892_);
lean_ctor_set(v_reuseFailAlloc_2915_, 2, v_trailing_2908_);
lean_ctor_set(v_reuseFailAlloc_2915_, 3, v_endPos_2893_);
v___x_2910_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2911_ = l_Lean_Syntax_setTailInfo(v_stx_2883_, v___x_2910_);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 0, v___x_2911_);
v___x_2913_ = v___x_2888_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2911_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2920_; 
lean_del_object(v___x_2888_);
lean_dec(v_val_2886_);
lean_dec_ref(v_trailing_2884_);
lean_dec(v_stx_2883_);
v___x_2920_ = lean_box(0);
return v___x_2920_;
}
}
}
else
{
lean_object* v___x_2922_; 
lean_dec(v___x_2885_);
lean_dec_ref(v_trailing_2884_);
lean_dec(v_stx_2883_);
v___x_2922_ = lean_box(0);
return v___x_2922_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing(lean_object* v_stx_2923_, lean_object* v_trailing_2924_){
_start:
{
lean_object* v___x_2925_; 
lean_inc(v_stx_2923_);
v___x_2925_ = l_Lean_Syntax_addTrailing_x3f(v_stx_2923_, v_trailing_2924_);
if (lean_obj_tag(v___x_2925_) == 0)
{
return v_stx_2923_;
}
else
{
lean_object* v_val_2926_; 
lean_dec(v_stx_2923_);
v_val_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_val_2926_);
lean_dec_ref_known(v___x_2925_, 1);
return v_val_2926_;
}
}
}
lean_object* runtime_initialize_Init_Data_Slice(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Format(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Slice(uint8_t builtin);
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Lean_Data_Format(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Data_String_Hashable(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Syntax(builtin);
}
#ifdef __cplusplus
}
#endif
