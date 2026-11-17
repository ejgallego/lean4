// Lean compiler output
// Module: Lean.Data.Json.Basic
// Imports: public import Init.Data.Range public import Init.Data.OfScientific public import Init.Data.Hashable public import Std.Data.TreeMap.Raw.Basic public import Init.Data.Ord.String import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Nat import Init.Data.String.Substring import Init.Data.ToString.Macro
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
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_float_to_string(double);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint64_t lean_string_hash(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Substring_Raw_nextn(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_negate(double);
uint8_t lean_float_isnan(double);
uint8_t lean_float_isinf(double);
uint8_t lean_float_beq(double, double);
uint8_t lean_float_decLt(double, double);
double lean_float_of_nat(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
double lean_float_mul(double, double);
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instHashableJsonNumber_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instHashableJsonNumber_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_instHashableJsonNumber_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableJsonNumber_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableJsonNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableJsonNumber_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableJsonNumber___closed__0 = (const lean_object*)&l_Lean_instHashableJsonNumber___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableJsonNumber = (const lean_object*)&l_Lean_instHashableJsonNumber___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_JsonNumber_fromNat_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instCoeNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_fromNat, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instCoeNat___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instCoeNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instCoeNat = (const lean_object*)&l_Lean_JsonNumber_instCoeNat___closed__0_value;
static const lean_closure_object l_Lean_JsonNumber_instCoeInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_fromInt, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instCoeInt___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instCoeInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instCoeInt = (const lean_object*)&l_Lean_JsonNumber_instCoeInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__0;
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__1;
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__2;
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__3;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_normalize(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonNumber_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_ltProp;
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instDecidableLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instDecidableLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instOrd___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOrd___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instOrd___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instOrd___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instOrd = (const lean_object*)&l_Lean_JsonNumber_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_JsonNumber_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_JsonNumber_toString___closed__0 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__0_value;
static const lean_string_object l_Lean_JsonNumber_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_JsonNumber_toString___closed__1 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__1_value;
static const lean_string_object l_Lean_JsonNumber_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_JsonNumber_toString___closed__2 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__2_value;
static lean_once_cell_t l_Lean_JsonNumber_toString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_toString___closed__3;
static const lean_string_object l_Lean_JsonNumber_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_JsonNumber_toString___closed__4 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__4_value;
static const lean_string_object l_Lean_JsonNumber_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l_Lean_JsonNumber_toString___closed__5 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instToString___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instToString = (const lean_object*)&l_Lean_JsonNumber_instToString___closed__0_value;
static const lean_string_object l_Lean_JsonNumber_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__0_value;
static const lean_string_object l_Lean_JsonNumber_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__1 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_JsonNumber_instRepr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__1_value)}};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__2 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__2_value;
static const lean_string_object l_Lean_JsonNumber_instRepr___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__3 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_JsonNumber_instRepr___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__4;
static lean_once_cell_t l_Lean_JsonNumber_instRepr___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__5;
static const lean_ctor_object l_Lean_JsonNumber_instRepr___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__6 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_JsonNumber_instRepr___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__3_value)}};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__7 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instRepr___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instRepr = (const lean_object*)&l_Lean_JsonNumber_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instOfScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instOfScientific___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instOfScientific___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instOfScientific___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instOfScientific = (const lean_object*)&l_Lean_JsonNumber_instOfScientific___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instNeg___lam__0(lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instNeg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instNeg___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instNeg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instNeg = (const lean_object*)&l_Lean_JsonNumber_instNeg___closed__0_value;
static lean_once_cell_t l_Lean_JsonNumber_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instInhabited;
static lean_once_cell_t l_Lean_JsonNumber_toFloat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_toFloat___closed__0;
static lean_once_cell_t l_Lean_JsonNumber_toFloat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_toFloat___closed__1;
LEAN_EXPORT double l_Lean_JsonNumber_toFloat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toFloat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Data.Json.Basic"};
static const lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0 = (const lean_object*)&l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0_value;
static const lean_string_object l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "_private.Lean.Data.Json.Basic.0.Lean.JsonNumber.fromPositiveFloat!"};
static const lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1 = (const lean_object*)&l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1_value;
static const lean_string_object l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to parse "};
static const lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2 = (const lean_object*)&l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(double);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___boxed(lean_object*);
static lean_once_cell_t l_Lean_JsonNumber_fromFloat_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_fromFloat_x3f___closed__0;
static lean_once_cell_t l_Lean_JsonNumber_fromFloat_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__1;
static lean_once_cell_t l_Lean_JsonNumber_fromFloat_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_fromFloat_x3f___closed__2;
static const lean_string_object l_Lean_JsonNumber_fromFloat_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-Infinity"};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__3 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__3_value;
static const lean_ctor_object l_Lean_JsonNumber_fromFloat_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__3_value)}};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__4 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__4_value;
static const lean_string_object l_Lean_JsonNumber_fromFloat_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Infinity"};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__5 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__5_value;
static const lean_ctor_object l_Lean_JsonNumber_fromFloat_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__5_value)}};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__6 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__6_value;
static const lean_string_object l_Lean_JsonNumber_fromFloat_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "NaN"};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__7 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__7_value;
static const lean_ctor_object l_Lean_JsonNumber_fromFloat_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__7_value)}};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__8 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f(double);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_strLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_strLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_null_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedJson_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedJson;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__1_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__2_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__2_value)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Json_instBEq___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instBEq___private__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Json_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instBEq___private__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instBEq___closed__0 = (const lean_object*)&l_Lean_Json_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instBEq = (const lean_object*)&l_Lean_Json_instBEq___closed__0_value;
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT uint64_t l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(lean_object*);
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Json_instHashable___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instHashable___private__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Json_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instHashable___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instHashable___closed__0 = (const lean_object*)&l_Lean_Json_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instHashable = (const lean_object*)&l_Lean_Json_instHashable___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_mkObj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instCoeNat___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeNat___closed__0 = (const lean_object*)&l_Lean_Json_instCoeNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeNat = (const lean_object*)&l_Lean_Json_instCoeNat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeInt___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeInt___closed__0 = (const lean_object*)&l_Lean_Json_instCoeInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeInt = (const lean_object*)&l_Lean_Json_instCoeInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeString___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeString___closed__0 = (const lean_object*)&l_Lean_Json_instCoeString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeString = (const lean_object*)&l_Lean_Json_instCoeString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeBool___closed__0 = (const lean_object*)&l_Lean_Json_instCoeBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeBool = (const lean_object*)&l_Lean_Json_instCoeBool___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instOfNat(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Json_isNull(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_isNull___boxed(lean_object*);
static const lean_string_object l_Lean_Json_getObj_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "object expected"};
static const lean_object* l_Lean_Json_getObj_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getObj_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getObj_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getObj_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getObj_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getObj_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObj_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getArr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "array expected"};
static const lean_object* l_Lean_Json_getArr_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getArr_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getArr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getArr_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getArr_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getArr_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getArr_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getStr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "String expected"};
static const lean_object* l_Lean_Json_getStr_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getStr_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getStr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getStr_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getStr_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getStr_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getStr_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Natural number expected"};
static const lean_object* l_Lean_Json_getNat_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getNat_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getNat_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getNat_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getNat_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getNat_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getInt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Integer expected"};
static const lean_object* l_Lean_Json_getInt_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getInt_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getInt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getInt_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getInt_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getInt_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getInt_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getBool_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Bool expected"};
static const lean_object* l_Lean_Json_getBool_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getBool_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getBool_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getBool_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getBool_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getBool_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Json_getNum_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number expected"};
static const lean_object* l_Lean_Json_getNum_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getNum_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getNum_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getNum_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getNum_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getNum_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getNum_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getObjVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "property not found: "};
static const lean_object* l_Lean_Json_getObjVal_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getObjVal_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getObjVal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getObj_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getObjVal_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getObjVal_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_getArrVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "index out of bounds: "};
static const lean_object* l_Lean_Json_getArrVal_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getArrVal_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getArrVal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getArr_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getArrVal_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getArrVal_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getArrVal_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Json_setObjVal_x21_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_setObjVal_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Json.setObjVal!"};
static const lean_object* l_Lean_Json_setObjVal_x21___closed__0 = (const lean_object*)&l_Lean_Json_setObjVal_x21___closed__0_value;
static const lean_string_object l_Lean_Json_setObjVal_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Json.setObjVal!: not an object: {j}"};
static const lean_object* l_Lean_Json_setObjVal_x21___closed__1 = (const lean_object*)&l_Lean_Json_setObjVal_x21___closed__1_value;
static lean_once_cell_t l_Lean_Json_setObjVal_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_setObjVal_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_mergeObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instCoeArrayStructured___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeArrayStructured___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeArrayStructured___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeArrayStructured___closed__0 = (const lean_object*)&l_Lean_Json_instCoeArrayStructured___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeArrayStructured = (const lean_object*)&l_Lean_Json_instCoeArrayStructured___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeRawStringStructured___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeRawStringStructured___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeRawStringStructured___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeRawStringStructured___closed__0 = (const lean_object*)&l_Lean_Json_instCoeRawStringStructured___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeRawStringStructured = (const lean_object*)&l_Lean_Json_instCoeRawStringStructured___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_mantissa_3_; lean_object* v_exponent_4_; lean_object* v_mantissa_5_; lean_object* v_exponent_6_; uint8_t v___x_7_; 
v_mantissa_3_ = lean_ctor_get(v_x_1_, 0);
v_exponent_4_ = lean_ctor_get(v_x_1_, 1);
v_mantissa_5_ = lean_ctor_get(v_x_2_, 0);
v_exponent_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_int_dec_eq(v_mantissa_3_, v_mantissa_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_nat_dec_eq(v_exponent_4_, v_exponent_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber_decEq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_instDecidableEqJsonNumber_decEq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = l_Lean_instDecidableEqJsonNumber_decEq(v_x_13_, v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber___boxed(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = l_Lean_instDecidableEqJsonNumber(v_x_16_, v_x_17_);
lean_dec_ref(v_x_17_);
lean_dec_ref(v_x_16_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
static lean_object* _init_l_Lean_instHashableJsonNumber_hash___closed__0(void){
_start:
{
lean_object* v_natZero_20_; lean_object* v_intZero_21_; 
v_natZero_20_ = lean_unsigned_to_nat(0u);
v_intZero_21_ = lean_nat_to_int(v_natZero_20_);
return v_intZero_21_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableJsonNumber_hash(lean_object* v_x_22_){
_start:
{
lean_object* v_mantissa_23_; lean_object* v_exponent_24_; uint64_t v___x_25_; uint64_t v___y_27_; lean_object* v_intZero_31_; uint8_t v_isNeg_32_; 
v_mantissa_23_ = lean_ctor_get(v_x_22_, 0);
v_exponent_24_ = lean_ctor_get(v_x_22_, 1);
v___x_25_ = 0ULL;
v_intZero_31_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v_isNeg_32_ = lean_int_dec_lt(v_mantissa_23_, v_intZero_31_);
if (v_isNeg_32_ == 0)
{
lean_object* v_a_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint64_t v___x_36_; 
v_a_33_ = lean_nat_abs(v_mantissa_23_);
v___x_34_ = lean_unsigned_to_nat(2u);
v___x_35_ = lean_nat_mul(v___x_34_, v_a_33_);
lean_dec(v_a_33_);
v___x_36_ = lean_uint64_of_nat(v___x_35_);
lean_dec(v___x_35_);
v___y_27_ = v___x_36_;
goto v___jp_26_;
}
else
{
lean_object* v_abs_37_; lean_object* v_one_38_; lean_object* v_a_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint64_t v___x_43_; 
v_abs_37_ = lean_nat_abs(v_mantissa_23_);
v_one_38_ = lean_unsigned_to_nat(1u);
v_a_39_ = lean_nat_sub(v_abs_37_, v_one_38_);
lean_dec(v_abs_37_);
v___x_40_ = lean_unsigned_to_nat(2u);
v___x_41_ = lean_nat_mul(v___x_40_, v_a_39_);
lean_dec(v_a_39_);
v___x_42_ = lean_nat_add(v___x_41_, v_one_38_);
lean_dec(v___x_41_);
v___x_43_ = lean_uint64_of_nat(v___x_42_);
lean_dec(v___x_42_);
v___y_27_ = v___x_43_;
goto v___jp_26_;
}
v___jp_26_:
{
uint64_t v___x_28_; uint64_t v___x_29_; uint64_t v___x_30_; 
v___x_28_ = lean_uint64_mix_hash(v___x_25_, v___y_27_);
v___x_29_ = lean_uint64_of_nat(v_exponent_24_);
v___x_30_ = lean_uint64_mix_hash(v___x_28_, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableJsonNumber_hash___boxed(lean_object* v_x_44_){
_start:
{
uint64_t v_res_45_; lean_object* v_r_46_; 
v_res_45_ = l_Lean_instHashableJsonNumber_hash(v_x_44_);
lean_dec_ref(v_x_44_);
v_r_46_ = lean_box_uint64(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_JsonNumber_fromNat_spec__0(lean_object* v_a_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_nat_to_int(v_a_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromNat(lean_object* v_n_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_nat_to_int(v_n_51_);
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromInt(lean_object* v_n_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_unsigned_to_nat(0u);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v_n_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfNat(lean_object* v_n_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_JsonNumber_fromNat(v_n_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits_loop(lean_object* v_n_64_, lean_object* v_digits_65_){
_start:
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = lean_unsigned_to_nat(9u);
v___x_67_ = lean_nat_dec_le(v_n_64_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_68_ = lean_unsigned_to_nat(10u);
v___x_69_ = lean_nat_div(v_n_64_, v___x_68_);
lean_dec(v_n_64_);
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = lean_nat_add(v_digits_65_, v___x_70_);
lean_dec(v_digits_65_);
v_n_64_ = v___x_69_;
v_digits_65_ = v___x_71_;
goto _start;
}
else
{
lean_dec(v_n_64_);
return v_digits_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(lean_object* v_n_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1u);
v___x_75_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits_loop(v_n_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(lean_object* v_upperBound_76_, lean_object* v_a_77_, lean_object* v_b_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = lean_nat_dec_lt(v_a_77_, v_upperBound_76_);
if (v___x_79_ == 0)
{
lean_dec(v_a_77_);
return v_b_78_;
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = lean_unsigned_to_nat(10u);
v___x_82_ = lean_nat_mod(v_b_78_, v___x_81_);
v___x_83_ = lean_nat_dec_eq(v___x_82_, v___x_80_);
lean_dec(v___x_82_);
if (v___x_83_ == 0)
{
lean_dec(v_a_77_);
return v_b_78_;
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_nat_div(v_b_78_, v___x_81_);
lean_dec(v_b_78_);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_add(v_a_77_, v___x_85_);
lean_dec(v_a_77_);
v_a_77_ = v___x_86_;
v_b_78_ = v___x_84_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg___boxed(lean_object* v_upperBound_88_, lean_object* v_a_89_, lean_object* v_b_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(v_upperBound_88_, v_a_89_, v_b_90_);
lean_dec(v_upperBound_88_);
return v_res_91_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__0, &l_Lean_JsonNumber_normalize___closed__0_once, _init_l_Lean_JsonNumber_normalize___closed__0);
v___x_95_ = lean_int_neg(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_97_ = lean_unsigned_to_nat(0u);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__2, &l_Lean_JsonNumber_normalize___closed__2_once, _init_l_Lean_JsonNumber_normalize___closed__2);
v___x_100_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_normalize(lean_object* v_x_102_){
_start:
{
lean_object* v_mantissa_103_; lean_object* v_exponent_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_128_; 
v_mantissa_103_ = lean_ctor_get(v_x_102_, 0);
v_exponent_104_ = lean_ctor_get(v_x_102_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_102_);
if (v_isSharedCheck_128_ == 0)
{
v___x_106_ = v_x_102_;
v_isShared_107_ = v_isSharedCheck_128_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_exponent_104_);
lean_inc(v_mantissa_103_);
lean_dec(v_x_102_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_128_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___y_110_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_123_ = lean_int_dec_eq(v_mantissa_103_, v___x_122_);
if (v___x_123_ == 0)
{
uint8_t v___x_124_; 
v___x_124_ = lean_int_dec_lt(v___x_122_, v_mantissa_103_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__1, &l_Lean_JsonNumber_normalize___closed__1_once, _init_l_Lean_JsonNumber_normalize___closed__1);
v___y_110_ = v___x_125_;
goto v___jp_109_;
}
else
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__0, &l_Lean_JsonNumber_normalize___closed__0_once, _init_l_Lean_JsonNumber_normalize___closed__0);
v___y_110_ = v___x_126_;
goto v___jp_109_;
}
}
else
{
lean_object* v___x_127_; 
lean_del_object(v___x_106_);
lean_dec(v_exponent_104_);
lean_dec(v_mantissa_103_);
v___x_127_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__3, &l_Lean_JsonNumber_normalize___closed__3_once, _init_l_Lean_JsonNumber_normalize___closed__3);
return v___x_127_;
}
v___jp_109_:
{
lean_object* v_mAbs_111_; lean_object* v_nDigits_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v_mAbs_111_ = lean_nat_abs(v_mantissa_103_);
lean_dec(v_mantissa_103_);
lean_inc(v_mAbs_111_);
v_nDigits_112_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_mAbs_111_);
v___x_113_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(v_nDigits_112_, v___x_108_, v_mAbs_111_);
v___x_114_ = lean_nat_to_int(v_exponent_104_);
v___x_115_ = lean_int_neg(v___x_114_);
lean_dec(v___x_114_);
v___x_116_ = lean_nat_to_int(v_nDigits_112_);
v___x_117_ = lean_int_add(v___x_115_, v___x_116_);
lean_dec(v___x_116_);
lean_dec(v___x_115_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_117_);
lean_ctor_set(v___x_106_, 0, v___x_113_);
v___x_119_ = v___x_106_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v___x_117_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; 
lean_inc(v___y_110_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v___y_110_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
return v___x_120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0(lean_object* v_upperBound_129_, lean_object* v_inst_130_, lean_object* v_R_131_, lean_object* v_a_132_, lean_object* v_b_133_, lean_object* v_c_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(v_upperBound_129_, v_a_132_, v_b_133_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___boxed(lean_object* v_upperBound_136_, lean_object* v_inst_137_, lean_object* v_R_138_, lean_object* v_a_139_, lean_object* v_b_140_, lean_object* v_c_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0(v_upperBound_136_, v_inst_137_, v_R_138_, v_a_139_, v_b_140_, v_c_141_);
lean_dec(v_upperBound_136_);
return v_res_142_;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonNumber_lt(lean_object* v_a_143_, lean_object* v_b_144_){
_start:
{
lean_object* v_fst_146_; lean_object* v_snd_147_; lean_object* v___x_167_; lean_object* v_fst_168_; lean_object* v_snd_169_; lean_object* v___x_170_; lean_object* v_fst_171_; lean_object* v_snd_172_; uint8_t v___x_173_; 
v___x_167_ = l_Lean_JsonNumber_normalize(v_a_143_);
v_fst_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_fst_168_);
v_snd_169_ = lean_ctor_get(v___x_167_, 1);
lean_inc(v_snd_169_);
lean_dec_ref(v___x_167_);
v___x_170_ = l_Lean_JsonNumber_normalize(v_b_144_);
v_fst_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_fst_171_);
v_snd_172_ = lean_ctor_get(v___x_170_, 1);
lean_inc(v_snd_172_);
lean_dec_ref(v___x_170_);
v___x_173_ = lean_int_dec_eq(v_fst_168_, v_fst_171_);
if (v___x_173_ == 0)
{
uint8_t v___x_174_; 
lean_dec(v_snd_172_);
lean_dec(v_snd_169_);
v___x_174_ = lean_int_dec_lt(v_fst_168_, v_fst_171_);
lean_dec(v_fst_171_);
lean_dec(v_fst_168_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; uint8_t v___x_176_; 
lean_dec(v_fst_171_);
v___x_175_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_176_ = lean_int_dec_eq(v_fst_168_, v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__1, &l_Lean_JsonNumber_normalize___closed__1_once, _init_l_Lean_JsonNumber_normalize___closed__1);
v___x_178_ = lean_int_dec_eq(v_fst_168_, v___x_177_);
lean_dec(v_fst_168_);
if (v___x_178_ == 0)
{
v_fst_146_ = v_snd_169_;
v_snd_147_ = v_snd_172_;
goto v___jp_145_;
}
else
{
v_fst_146_ = v_snd_172_;
v_snd_147_ = v_snd_169_;
goto v___jp_145_;
}
}
else
{
uint8_t v___x_179_; 
lean_dec(v_snd_172_);
lean_dec(v_snd_169_);
lean_dec(v_fst_168_);
v___x_179_ = 0;
return v___x_179_;
}
}
v___jp_145_:
{
lean_object* v_fst_148_; lean_object* v_snd_149_; lean_object* v_fst_150_; lean_object* v_snd_151_; uint8_t v___x_152_; 
v_fst_148_ = lean_ctor_get(v_fst_146_, 0);
lean_inc(v_fst_148_);
v_snd_149_ = lean_ctor_get(v_fst_146_, 1);
lean_inc(v_snd_149_);
lean_dec_ref(v_fst_146_);
v_fst_150_ = lean_ctor_get(v_snd_147_, 0);
lean_inc(v_fst_150_);
v_snd_151_ = lean_ctor_get(v_snd_147_, 1);
lean_inc(v_snd_151_);
lean_dec_ref(v_snd_147_);
v___x_152_ = lean_int_dec_lt(v_snd_149_, v_snd_151_);
if (v___x_152_ == 0)
{
uint8_t v___x_153_; 
v___x_153_ = lean_int_dec_lt(v_snd_151_, v_snd_149_);
lean_dec(v_snd_149_);
lean_dec(v_snd_151_);
if (v___x_153_ == 0)
{
lean_object* v_amDigits_154_; lean_object* v_bmDigits_155_; uint8_t v___x_156_; 
lean_inc(v_fst_148_);
v_amDigits_154_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_fst_148_);
lean_inc(v_fst_150_);
v_bmDigits_155_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_fst_150_);
v___x_156_ = lean_nat_dec_lt(v_amDigits_154_, v_bmDigits_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_157_ = lean_unsigned_to_nat(10u);
v___x_158_ = lean_nat_sub(v_amDigits_154_, v_bmDigits_155_);
lean_dec(v_bmDigits_155_);
lean_dec(v_amDigits_154_);
v___x_159_ = lean_nat_pow(v___x_157_, v___x_158_);
lean_dec(v___x_158_);
v___x_160_ = lean_nat_mul(v_fst_150_, v___x_159_);
lean_dec(v___x_159_);
lean_dec(v_fst_150_);
v___x_161_ = lean_nat_dec_lt(v_fst_148_, v___x_160_);
lean_dec(v___x_160_);
lean_dec(v_fst_148_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_162_ = lean_unsigned_to_nat(10u);
v___x_163_ = lean_nat_sub(v_bmDigits_155_, v_amDigits_154_);
lean_dec(v_amDigits_154_);
lean_dec(v_bmDigits_155_);
v___x_164_ = lean_nat_pow(v___x_162_, v___x_163_);
lean_dec(v___x_163_);
v___x_165_ = lean_nat_mul(v_fst_148_, v___x_164_);
lean_dec(v___x_164_);
lean_dec(v_fst_148_);
v___x_166_ = lean_nat_dec_lt(v___x_165_, v_fst_150_);
lean_dec(v_fst_150_);
lean_dec(v___x_165_);
return v___x_166_;
}
}
else
{
lean_dec(v_fst_150_);
lean_dec(v_fst_148_);
return v___x_152_;
}
}
else
{
lean_dec(v_snd_151_);
lean_dec(v_fst_150_);
lean_dec(v_snd_149_);
lean_dec(v_fst_148_);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_lt___boxed(lean_object* v_a_180_, lean_object* v_b_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lean_JsonNumber_lt(v_a_180_, v_b_181_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
static lean_object* _init_l_Lean_JsonNumber_ltProp(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_box(0);
return v___x_184_;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instDecidableLt(lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
uint8_t v___x_187_; 
v___x_187_ = l_Lean_JsonNumber_lt(v_a_185_, v_b_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instDecidableLt___boxed(lean_object* v_a_188_, lean_object* v_b_189_){
_start:
{
uint8_t v_res_190_; lean_object* v_r_191_; 
v_res_190_ = l_Lean_JsonNumber_instDecidableLt(v_a_188_, v_b_189_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instOrd___lam__0(lean_object* v_x_192_, lean_object* v_y_193_){
_start:
{
uint8_t v___x_194_; 
lean_inc_ref(v_y_193_);
lean_inc_ref(v_x_192_);
v___x_194_ = l_Lean_JsonNumber_lt(v_x_192_, v_y_193_);
if (v___x_194_ == 0)
{
uint8_t v___x_195_; 
v___x_195_ = l_Lean_JsonNumber_lt(v_y_193_, v_x_192_);
if (v___x_195_ == 0)
{
uint8_t v___x_196_; 
v___x_196_ = 1;
return v___x_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = 2;
return v___x_197_;
}
}
else
{
uint8_t v___x_198_; 
lean_dec_ref(v_y_193_);
lean_dec_ref(v_x_192_);
v___x_198_ = 0;
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOrd___lam__0___boxed(lean_object* v_x_199_, lean_object* v_y_200_){
_start:
{
uint8_t v_res_201_; lean_object* v_r_202_; 
v_res_201_ = l_Lean_JsonNumber_instOrd___lam__0(v_x_199_, v_y_200_);
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(lean_object* v_s_205_, lean_object* v_begPos_206_, lean_object* v_i_207_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_208_ = lean_unsigned_to_nat(1u);
v___x_209_ = lean_nat_add(v_begPos_206_, v___x_208_);
v___x_210_ = lean_nat_dec_le(v___x_209_, v_i_207_);
lean_dec(v___x_209_);
if (v___x_210_ == 0)
{
return v_i_207_;
}
else
{
lean_object* v_i_x27_211_; uint32_t v_c_212_; uint32_t v___x_213_; uint8_t v___x_214_; 
v_i_x27_211_ = lean_string_utf8_prev(v_s_205_, v_i_207_);
v_c_212_ = lean_string_utf8_get(v_s_205_, v_i_x27_211_);
v___x_213_ = 48;
v___x_214_ = lean_uint32_dec_eq(v_c_212_, v___x_213_);
if (v___x_214_ == 0)
{
lean_dec(v_i_x27_211_);
return v_i_207_;
}
else
{
lean_dec(v_i_207_);
v_i_207_ = v_i_x27_211_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0___boxed(lean_object* v_s_216_, lean_object* v_begPos_217_, lean_object* v_i_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(v_s_216_, v_begPos_217_, v_i_218_);
lean_dec(v_begPos_217_);
lean_dec_ref(v_s_216_);
return v_res_219_;
}
}
static lean_object* _init_l_Lean_JsonNumber_toString___closed__3(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(9u);
v___x_224_ = lean_nat_to_int(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toString(lean_object* v_x_227_){
_start:
{
lean_object* v___y_229_; lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v_mantissa_238_; lean_object* v_exponent_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_277_; uint8_t v___x_286_; 
v_mantissa_238_ = lean_ctor_get(v_x_227_, 0);
lean_inc(v_mantissa_238_);
v_exponent_239_ = lean_ctor_get(v_x_227_, 1);
lean_inc(v_exponent_239_);
lean_dec_ref(v_x_227_);
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_286_ = lean_int_dec_eq(v_mantissa_238_, v___x_241_);
if (v___x_286_ == 0)
{
uint8_t v___x_287_; 
v___x_287_ = lean_nat_dec_eq(v_exponent_239_, v___x_240_);
if (v___x_287_ == 0)
{
uint8_t v___x_288_; 
v___x_288_ = lean_int_dec_le(v___x_241_, v_mantissa_238_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__4));
v___y_277_ = v___x_289_;
goto v___jp_276_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__2));
v___y_277_ = v___x_290_;
goto v___jp_276_;
}
}
else
{
lean_object* v___x_291_; 
lean_dec(v_exponent_239_);
v___x_291_ = l_Int_repr(v_mantissa_238_);
lean_dec(v_mantissa_238_);
return v___x_291_;
}
}
else
{
lean_object* v___x_292_; 
lean_dec(v_exponent_239_);
lean_dec(v_mantissa_238_);
v___x_292_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__5));
return v___x_292_;
}
v___jp_228_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
lean_inc_ref(v___y_231_);
v___x_233_ = lean_string_append(v___y_231_, v___y_230_);
lean_dec_ref(v___y_230_);
v___x_234_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__0));
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
v___x_236_ = lean_string_append(v___x_235_, v___y_229_);
lean_dec_ref(v___y_229_);
v___x_237_ = lean_string_append(v___x_236_, v___y_232_);
lean_dec_ref(v___y_232_);
return v___x_237_;
}
v___jp_242_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v_e_255_; lean_object* v_right_256_; uint8_t v___x_257_; 
v___x_248_ = lean_nat_mod(v___y_244_, v___y_245_);
lean_dec(v___y_244_);
v___x_249_ = lean_nat_add(v___y_245_, v___x_248_);
lean_dec(v___x_248_);
lean_dec(v___y_245_);
v___x_250_ = l_Nat_reprFast(v___x_249_);
v___x_251_ = lean_string_utf8_byte_size(v___x_250_);
lean_inc_ref(v___x_250_);
v___x_252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_240_);
lean_ctor_set(v___x_252_, 2, v___x_251_);
v___x_253_ = lean_unsigned_to_nat(1u);
v___x_254_ = l_Substring_Raw_nextn(v___x_252_, v___x_253_, v___x_240_);
lean_dec_ref_known(v___x_252_, 3);
v_e_255_ = l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(v___x_250_, v___x_254_, v___x_251_);
v_right_256_ = lean_string_utf8_extract(v___x_250_, v___x_254_, v_e_255_);
lean_dec(v_e_255_);
lean_dec(v___x_254_);
lean_dec_ref(v___x_250_);
v___x_257_ = lean_int_dec_eq(v___y_243_, v___x_241_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_258_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__1));
v___x_259_ = l_Int_repr(v___y_243_);
lean_dec(v___y_243_);
v___x_260_ = lean_string_append(v___x_258_, v___x_259_);
lean_dec_ref(v___x_259_);
v___y_229_ = v_right_256_;
v___y_230_ = v___y_246_;
v___y_231_ = v___y_247_;
v___y_232_ = v___x_260_;
goto v___jp_228_;
}
else
{
lean_object* v___x_261_; 
lean_dec(v___y_243_);
v___x_261_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__2));
v___y_229_ = v_right_256_;
v___y_230_ = v___y_246_;
v___y_231_ = v___y_247_;
v___y_232_ = v___x_261_;
goto v___jp_228_;
}
}
v___jp_262_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v_e_x27_269_; lean_object* v___x_270_; lean_object* v_left_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_266_ = lean_unsigned_to_nat(10u);
v___x_267_ = lean_nat_abs(v___y_265_);
v___x_268_ = lean_nat_sub(v_exponent_239_, v___x_267_);
lean_dec(v___x_267_);
lean_dec(v_exponent_239_);
v_e_x27_269_ = lean_nat_pow(v___x_266_, v___x_268_);
lean_dec(v___x_268_);
v___x_270_ = lean_nat_div(v___y_263_, v_e_x27_269_);
v_left_271_ = l_Nat_reprFast(v___x_270_);
v___x_272_ = lean_nat_mod(v___y_263_, v_e_x27_269_);
v___x_273_ = lean_nat_dec_eq(v___x_272_, v___x_240_);
lean_dec(v___x_272_);
if (v___x_273_ == 0)
{
v___y_243_ = v___y_265_;
v___y_244_ = v___y_263_;
v___y_245_ = v_e_x27_269_;
v___y_246_ = v_left_271_;
v___y_247_ = v___y_264_;
goto v___jp_242_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = lean_int_dec_eq(v___y_265_, v___x_241_);
if (v___x_274_ == 0)
{
v___y_243_ = v___y_265_;
v___y_244_ = v___y_263_;
v___y_245_ = v_e_x27_269_;
v___y_246_ = v_left_271_;
v___y_247_ = v___y_264_;
goto v___jp_242_;
}
else
{
lean_object* v___x_275_; 
lean_dec(v_e_x27_269_);
lean_dec(v___y_265_);
lean_dec(v___y_263_);
lean_inc_ref(v___y_264_);
v___x_275_ = lean_string_append(v___y_264_, v_left_271_);
lean_dec_ref(v_left_271_);
return v___x_275_;
}
}
}
v___jp_276_:
{
lean_object* v_m_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v_exp_284_; uint8_t v___x_285_; 
v_m_278_ = lean_nat_abs(v_mantissa_238_);
lean_dec(v_mantissa_238_);
v___x_279_ = lean_obj_once(&l_Lean_JsonNumber_toString___closed__3, &l_Lean_JsonNumber_toString___closed__3_once, _init_l_Lean_JsonNumber_toString___closed__3);
lean_inc(v_m_278_);
v___x_280_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_m_278_);
v___x_281_ = lean_nat_to_int(v___x_280_);
v___x_282_ = lean_int_add(v___x_279_, v___x_281_);
lean_dec(v___x_281_);
lean_inc(v_exponent_239_);
v___x_283_ = lean_nat_to_int(v_exponent_239_);
v_exp_284_ = lean_int_sub(v___x_282_, v___x_283_);
lean_dec(v___x_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_int_dec_lt(v_exp_284_, v___x_241_);
if (v___x_285_ == 0)
{
lean_dec(v_exp_284_);
v___y_263_ = v_m_278_;
v___y_264_ = v___y_277_;
v___y_265_ = v___x_241_;
goto v___jp_262_;
}
else
{
v___y_263_ = v_m_278_;
v___y_264_ = v___y_277_;
v___y_265_ = v_exp_284_;
goto v___jp_262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl(lean_object* v_x_293_, lean_object* v_x_294_){
_start:
{
lean_object* v_mantissa_295_; lean_object* v_exponent_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_309_; 
v_mantissa_295_ = lean_ctor_get(v_x_293_, 0);
v_exponent_296_ = lean_ctor_get(v_x_293_, 1);
v_isSharedCheck_309_ = !lean_is_exclusive(v_x_293_);
if (v_isSharedCheck_309_ == 0)
{
v___x_298_ = v_x_293_;
v_isShared_299_ = v_isSharedCheck_309_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_exponent_296_);
lean_inc(v_mantissa_295_);
lean_dec(v_x_293_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_309_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_300_ = lean_unsigned_to_nat(10u);
v___x_301_ = lean_nat_sub(v_x_294_, v_exponent_296_);
v___x_302_ = lean_nat_pow(v___x_300_, v___x_301_);
lean_dec(v___x_301_);
v___x_303_ = lean_nat_to_int(v___x_302_);
v___x_304_ = lean_int_mul(v_mantissa_295_, v___x_303_);
lean_dec(v___x_303_);
lean_dec(v_mantissa_295_);
v___x_305_ = lean_nat_sub(v_exponent_296_, v_x_294_);
lean_dec(v_exponent_296_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 1, v___x_305_);
lean_ctor_set(v___x_298_, 0, v___x_304_);
v___x_307_ = v___x_298_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_304_);
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
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl___boxed(lean_object* v_x_310_, lean_object* v_x_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_JsonNumber_shiftl(v_x_310_, v_x_311_);
lean_dec(v_x_311_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr(lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
lean_object* v_mantissa_315_; lean_object* v_exponent_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_324_; 
v_mantissa_315_ = lean_ctor_get(v_x_313_, 0);
v_exponent_316_ = lean_ctor_get(v_x_313_, 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v_x_313_);
if (v_isSharedCheck_324_ == 0)
{
v___x_318_ = v_x_313_;
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_exponent_316_);
lean_inc(v_mantissa_315_);
lean_dec(v_x_313_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_320_ = lean_nat_add(v_exponent_316_, v_x_314_);
lean_dec(v_exponent_316_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_320_);
v___x_322_ = v___x_318_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_mantissa_315_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr___boxed(lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_JsonNumber_shiftr(v_x_325_, v_x_326_);
lean_dec(v_x_326_);
return v_res_327_;
}
}
static lean_object* _init_l_Lean_JsonNumber_instRepr___lam__0___closed__4(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__0));
v___x_336_ = lean_string_length(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_JsonNumber_instRepr___lam__0___closed__5(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l_Lean_JsonNumber_instRepr___lam__0___closed__4, &l_Lean_JsonNumber_instRepr___lam__0___closed__4_once, _init_l_Lean_JsonNumber_instRepr___lam__0___closed__4);
v___x_338_ = lean_nat_to_int(v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0(lean_object* v_x_343_, lean_object* v_x_344_){
_start:
{
lean_object* v_mantissa_345_; lean_object* v_exponent_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_375_; 
v_mantissa_345_ = lean_ctor_get(v_x_343_, 0);
v_exponent_346_ = lean_ctor_get(v_x_343_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_375_ == 0)
{
v___x_348_ = v_x_343_;
v_isShared_349_ = v_isSharedCheck_375_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_exponent_346_);
lean_inc(v_mantissa_345_);
lean_dec(v_x_343_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_375_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___y_351_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_369_ = lean_int_dec_lt(v_mantissa_345_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = l_Int_repr(v_mantissa_345_);
lean_dec(v_mantissa_345_);
v___x_371_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
v___y_351_ = v___x_371_;
goto v___jp_350_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = l_Int_repr(v_mantissa_345_);
lean_dec(v_mantissa_345_);
v___x_373_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
v___x_374_ = l_Repr_addAppParen(v___x_373_, v___x_367_);
v___y_351_ = v___x_374_;
goto v___jp_350_;
}
v___jp_350_:
{
lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_352_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__2));
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 5);
lean_ctor_set(v___x_348_, 1, v___x_352_);
lean_ctor_set(v___x_348_, 0, v___y_351_);
v___x_354_ = v___x_348_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___y_351_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v___x_352_);
v___x_354_ = v_reuseFailAlloc_366_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; lean_object* v___x_365_; 
v___x_355_ = l_Nat_reprFast(v_exponent_346_);
v___x_356_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
v___x_357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_354_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
v___x_358_ = lean_obj_once(&l_Lean_JsonNumber_instRepr___lam__0___closed__5, &l_Lean_JsonNumber_instRepr___lam__0___closed__5_once, _init_l_Lean_JsonNumber_instRepr___lam__0___closed__5);
v___x_359_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__6));
v___x_360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_357_);
v___x_361_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__7));
v___x_362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_358_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = 0;
v___x_365_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*1, v___x_364_);
return v___x_365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0___boxed(lean_object* v_x_376_, lean_object* v_x_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_JsonNumber_instRepr___lam__0(v_x_376_, v_x_377_);
lean_dec(v_x_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0(lean_object* v_mantissa_381_, uint8_t v_exponentSign_382_, lean_object* v_decimalExponent_383_){
_start:
{
if (v_exponentSign_382_ == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_384_ = lean_unsigned_to_nat(10u);
v___x_385_ = lean_nat_pow(v___x_384_, v_decimalExponent_383_);
lean_dec(v_decimalExponent_383_);
v___x_386_ = lean_nat_mul(v_mantissa_381_, v___x_385_);
lean_dec(v___x_385_);
lean_dec(v_mantissa_381_);
v___x_387_ = lean_nat_to_int(v___x_386_);
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
return v___x_389_;
}
else
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_nat_to_int(v_mantissa_381_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v_decimalExponent_383_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0___boxed(lean_object* v_mantissa_392_, lean_object* v_exponentSign_393_, lean_object* v_decimalExponent_394_){
_start:
{
uint8_t v_exponentSign_boxed_395_; lean_object* v_res_396_; 
v_exponentSign_boxed_395_ = lean_unbox(v_exponentSign_393_);
v_res_396_ = l_Lean_JsonNumber_instOfScientific___lam__0(v_mantissa_392_, v_exponentSign_boxed_395_, v_decimalExponent_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instNeg___lam__0(lean_object* v_jn_399_){
_start:
{
lean_object* v_mantissa_400_; lean_object* v_exponent_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_409_; 
v_mantissa_400_ = lean_ctor_get(v_jn_399_, 0);
v_exponent_401_ = lean_ctor_get(v_jn_399_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_jn_399_);
if (v_isSharedCheck_409_ == 0)
{
v___x_403_ = v_jn_399_;
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_exponent_401_);
lean_inc(v_mantissa_400_);
lean_dec(v_jn_399_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_405_ = lean_int_neg(v_mantissa_400_);
lean_dec(v_mantissa_400_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_405_);
v___x_407_ = v___x_403_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_exponent_401_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
static lean_object* _init_l_Lean_JsonNumber_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = l_Lean_JsonNumber_fromNat(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_JsonNumber_instInhabited(void){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_obj_once(&l_Lean_JsonNumber_instInhabited___closed__0, &l_Lean_JsonNumber_instInhabited___closed__0_once, _init_l_Lean_JsonNumber_instInhabited___closed__0);
return v___x_414_;
}
}
static double _init_l_Lean_JsonNumber_toFloat___closed__0(void){
_start:
{
lean_object* v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; double v___x_418_; 
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = 1;
v___x_417_ = lean_unsigned_to_nat(10u);
v___x_418_ = l_Float_ofScientific(v___x_417_, v___x_416_, v___x_415_);
return v___x_418_;
}
}
static double _init_l_Lean_JsonNumber_toFloat___closed__1(void){
_start:
{
double v___x_419_; double v___x_420_; 
v___x_419_ = lean_float_once(&l_Lean_JsonNumber_toFloat___closed__0, &l_Lean_JsonNumber_toFloat___closed__0_once, _init_l_Lean_JsonNumber_toFloat___closed__0);
v___x_420_ = lean_float_negate(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT double l_Lean_JsonNumber_toFloat(lean_object* v_x_421_){
_start:
{
lean_object* v_mantissa_422_; lean_object* v_exponent_423_; double v___y_425_; lean_object* v___x_430_; uint8_t v___x_431_; 
v_mantissa_422_ = lean_ctor_get(v_x_421_, 0);
lean_inc(v_mantissa_422_);
v_exponent_423_ = lean_ctor_get(v_x_421_, 1);
lean_inc(v_exponent_423_);
lean_dec_ref(v_x_421_);
v___x_430_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_431_ = lean_int_dec_le(v___x_430_, v_mantissa_422_);
if (v___x_431_ == 0)
{
double v___x_432_; 
v___x_432_ = lean_float_once(&l_Lean_JsonNumber_toFloat___closed__1, &l_Lean_JsonNumber_toFloat___closed__1_once, _init_l_Lean_JsonNumber_toFloat___closed__1);
v___y_425_ = v___x_432_;
goto v___jp_424_;
}
else
{
lean_object* v___x_433_; lean_object* v___x_434_; double v___x_435_; 
v___x_433_ = lean_unsigned_to_nat(10u);
v___x_434_ = lean_unsigned_to_nat(1u);
v___x_435_ = l_Float_ofScientific(v___x_433_, v___x_431_, v___x_434_);
v___y_425_ = v___x_435_;
goto v___jp_424_;
}
v___jp_424_:
{
lean_object* v___x_426_; uint8_t v___x_427_; double v___x_428_; double v___x_429_; 
v___x_426_ = lean_nat_abs(v_mantissa_422_);
lean_dec(v_mantissa_422_);
v___x_427_ = 1;
v___x_428_ = l_Float_ofScientific(v___x_426_, v___x_427_, v_exponent_423_);
v___x_429_ = lean_float_mul(v___y_425_, v___x_428_);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toFloat___boxed(lean_object* v_x_436_){
_start:
{
double v_res_437_; lean_object* v_r_438_; 
v_res_437_ = l_Lean_JsonNumber_toFloat(v_x_436_);
v_r_438_ = lean_box_float(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21_spec__0(lean_object* v_msg_439_){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = l_Lean_JsonNumber_instInhabited;
v___x_441_ = lean_panic_fn_borrowed(v___x_440_, v_msg_439_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(double v_x_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_float_to_string(v_x_445_);
v___x_447_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v___x_446_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_448_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0));
v___x_449_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1));
v___x_450_ = lean_unsigned_to_nat(166u);
v___x_451_ = lean_unsigned_to_nat(12u);
v___x_452_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2));
v___x_453_ = lean_string_append(v___x_452_, v___x_446_);
lean_dec_ref(v___x_446_);
v___x_454_ = l_mkPanicMessageWithDecl(v___x_448_, v___x_449_, v___x_450_, v___x_451_, v___x_453_);
lean_dec_ref(v___x_453_);
v___x_455_ = l_panic___at___00__private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21_spec__0(v___x_454_);
return v___x_455_;
}
else
{
lean_object* v_val_456_; lean_object* v_snd_457_; lean_object* v_fst_458_; uint8_t v___x_459_; 
lean_dec_ref(v___x_446_);
v_val_456_ = lean_ctor_get(v___x_447_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v___x_447_, 1);
v_snd_457_ = lean_ctor_get(v_val_456_, 1);
lean_inc(v_snd_457_);
v_fst_458_ = lean_ctor_get(v_snd_457_, 0);
v___x_459_ = lean_unbox(v_fst_458_);
if (v___x_459_ == 0)
{
lean_object* v_fst_460_; lean_object* v_snd_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_473_; 
v_fst_460_ = lean_ctor_get(v_val_456_, 0);
lean_inc(v_fst_460_);
lean_dec(v_val_456_);
v_snd_461_ = lean_ctor_get(v_snd_457_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_snd_457_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; 
v_unused_474_ = lean_ctor_get(v_snd_457_, 0);
lean_dec(v_unused_474_);
v___x_463_ = v_snd_457_;
v_isShared_464_ = v_isSharedCheck_473_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_snd_461_);
lean_dec(v_snd_457_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_473_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_465_ = lean_unsigned_to_nat(10u);
v___x_466_ = lean_nat_pow(v___x_465_, v_snd_461_);
lean_dec(v_snd_461_);
v___x_467_ = lean_nat_mul(v_fst_460_, v___x_466_);
lean_dec(v___x_466_);
lean_dec(v_fst_460_);
v___x_468_ = lean_nat_to_int(v___x_467_);
v___x_469_ = lean_unsigned_to_nat(0u);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 1, v___x_469_);
lean_ctor_set(v___x_463_, 0, v___x_468_);
v___x_471_ = v___x_463_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
else
{
lean_object* v_fst_475_; lean_object* v_snd_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_484_; 
v_fst_475_ = lean_ctor_get(v_val_456_, 0);
lean_inc(v_fst_475_);
lean_dec(v_val_456_);
v_snd_476_ = lean_ctor_get(v_snd_457_, 1);
v_isSharedCheck_484_ = !lean_is_exclusive(v_snd_457_);
if (v_isSharedCheck_484_ == 0)
{
lean_object* v_unused_485_; 
v_unused_485_ = lean_ctor_get(v_snd_457_, 0);
lean_dec(v_unused_485_);
v___x_478_ = v_snd_457_;
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_snd_476_);
lean_dec(v_snd_457_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_480_ = lean_nat_to_int(v_fst_475_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_480_);
v___x_482_ = v___x_478_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_snd_476_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___boxed(lean_object* v_x_486_){
_start:
{
double v_x_boxed_487_; lean_object* v_res_488_; 
v_x_boxed_487_ = lean_unbox_float(v_x_486_);
lean_dec_ref(v_x_486_);
v_res_488_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(v_x_boxed_487_);
return v_res_488_;
}
}
static double _init_l_Lean_JsonNumber_fromFloat_x3f___closed__0(void){
_start:
{
lean_object* v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; double v___x_492_; 
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = 1;
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = l_Float_ofScientific(v___x_491_, v___x_490_, v___x_489_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_JsonNumber_fromFloat_x3f___closed__1(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_obj_once(&l_Lean_JsonNumber_instInhabited___closed__0, &l_Lean_JsonNumber_instInhabited___closed__0_once, _init_l_Lean_JsonNumber_instInhabited___closed__0);
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
static double _init_l_Lean_JsonNumber_fromFloat_x3f___closed__2(void){
_start:
{
lean_object* v___x_495_; double v___x_496_; 
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = lean_float_of_nat(v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f(double v_x_506_){
_start:
{
uint8_t v___x_507_; 
v___x_507_ = lean_float_isnan(v_x_506_);
if (v___x_507_ == 0)
{
uint8_t v___x_508_; 
v___x_508_ = lean_float_isinf(v_x_506_);
if (v___x_508_ == 0)
{
double v___x_509_; uint8_t v___x_510_; 
v___x_509_ = lean_float_once(&l_Lean_JsonNumber_fromFloat_x3f___closed__0, &l_Lean_JsonNumber_fromFloat_x3f___closed__0_once, _init_l_Lean_JsonNumber_fromFloat_x3f___closed__0);
v___x_510_ = lean_float_beq(v_x_506_, v___x_509_);
if (v___x_510_ == 0)
{
uint8_t v___x_511_; 
v___x_511_ = lean_float_decLt(v_x_506_, v___x_509_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(v_x_506_);
v___x_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
else
{
double v___x_514_; lean_object* v___x_515_; lean_object* v_mantissa_516_; lean_object* v_exponent_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_526_; 
v___x_514_ = lean_float_negate(v_x_506_);
v___x_515_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(v___x_514_);
v_mantissa_516_ = lean_ctor_get(v___x_515_, 0);
v_exponent_517_ = lean_ctor_get(v___x_515_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_526_ == 0)
{
v___x_519_ = v___x_515_;
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_exponent_517_);
lean_inc(v_mantissa_516_);
lean_dec(v___x_515_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = lean_int_neg(v_mantissa_516_);
lean_dec(v_mantissa_516_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_521_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_exponent_517_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
}
}
else
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&l_Lean_JsonNumber_fromFloat_x3f___closed__1, &l_Lean_JsonNumber_fromFloat_x3f___closed__1_once, _init_l_Lean_JsonNumber_fromFloat_x3f___closed__1);
return v___x_527_;
}
}
else
{
double v___x_528_; uint8_t v___x_529_; 
v___x_528_ = lean_float_once(&l_Lean_JsonNumber_fromFloat_x3f___closed__2, &l_Lean_JsonNumber_fromFloat_x3f___closed__2_once, _init_l_Lean_JsonNumber_fromFloat_x3f___closed__2);
v___x_529_ = lean_float_decLt(v___x_528_, v_x_506_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
v___x_530_ = ((lean_object*)(l_Lean_JsonNumber_fromFloat_x3f___closed__4));
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
v___x_531_ = ((lean_object*)(l_Lean_JsonNumber_fromFloat_x3f___closed__6));
return v___x_531_;
}
}
}
else
{
lean_object* v___x_532_; 
v___x_532_ = ((lean_object*)(l_Lean_JsonNumber_fromFloat_x3f___closed__8));
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f___boxed(lean_object* v_x_533_){
_start:
{
double v_x_boxed_534_; lean_object* v_res_535_; 
v_x_boxed_534_ = lean_unbox_float(v_x_533_);
lean_dec_ref(v_x_533_);
v_res_535_ = l_Lean_JsonNumber_fromFloat_x3f(v_x_boxed_534_);
return v_res_535_;
}
}
LEAN_EXPORT uint8_t l_Lean_strLt(lean_object* v_a_536_, lean_object* v_b_537_){
_start:
{
uint8_t v___x_538_; 
v___x_538_ = lean_string_dec_lt(v_a_536_, v_b_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_strLt___boxed(lean_object* v_a_539_, lean_object* v_b_540_){
_start:
{
uint8_t v_res_541_; lean_object* v_r_542_; 
v_res_541_ = l_Lean_strLt(v_a_539_, v_b_540_);
lean_dec_ref(v_b_540_);
lean_dec_ref(v_a_539_);
v_r_542_ = lean_box(v_res_541_);
return v_r_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl(lean_object* v_x_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = lean_obj_tag_nat(v_x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl___boxed(lean_object* v_x_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Json_ctorIdx___impl(v_x_545_);
lean_dec(v_x_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___redArg(lean_object* v_t_547_, lean_object* v_k_548_){
_start:
{
switch(lean_obj_tag(v_t_547_))
{
case 0:
{
return v_k_548_;
}
case 1:
{
uint8_t v_b_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_b_549_ = lean_ctor_get_uint8(v_t_547_, 0);
lean_dec_ref_known(v_t_547_, 0);
v___x_550_ = lean_box(v_b_549_);
v___x_551_ = lean_apply_1(v_k_548_, v___x_550_);
return v___x_551_;
}
case 5:
{
lean_object* v_kvPairs_552_; lean_object* v___x_553_; 
v_kvPairs_552_ = lean_ctor_get(v_t_547_, 0);
lean_inc(v_kvPairs_552_);
lean_dec_ref_known(v_t_547_, 1);
v___x_553_ = lean_apply_1(v_k_548_, v_kvPairs_552_);
return v___x_553_;
}
default: 
{
lean_object* v_n_554_; lean_object* v___x_555_; 
v_n_554_ = lean_ctor_get(v_t_547_, 0);
lean_inc_ref(v_n_554_);
lean_dec(v_t_547_);
v___x_555_ = lean_apply_1(v_k_548_, v_n_554_);
return v___x_555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim(lean_object* v_motive__1_556_, lean_object* v_ctorIdx_557_, lean_object* v_t_558_, lean_object* v_h_559_, lean_object* v_k_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = l_Lean_Json_ctorElim___redArg(v_t_558_, v_k_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___boxed(lean_object* v_motive__1_562_, lean_object* v_ctorIdx_563_, lean_object* v_t_564_, lean_object* v_h_565_, lean_object* v_k_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Json_ctorElim(v_motive__1_562_, v_ctorIdx_563_, v_t_564_, v_h_565_, v_k_566_);
lean_dec(v_ctorIdx_563_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_null_elim___redArg(lean_object* v_t_568_, lean_object* v_null_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lean_Json_ctorElim___redArg(v_t_568_, v_null_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_null_elim(lean_object* v_motive__1_571_, lean_object* v_t_572_, lean_object* v_h_573_, lean_object* v_null_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Lean_Json_ctorElim___redArg(v_t_572_, v_null_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim___redArg(lean_object* v_t_576_, lean_object* v_bool_577_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_Json_ctorElim___redArg(v_t_576_, v_bool_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim(lean_object* v_motive__1_579_, lean_object* v_t_580_, lean_object* v_h_581_, lean_object* v_bool_582_){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_Json_ctorElim___redArg(v_t_580_, v_bool_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_num_elim___redArg(lean_object* v_t_584_, lean_object* v_num_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Json_ctorElim___redArg(v_t_584_, v_num_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_num_elim(lean_object* v_motive__1_587_, lean_object* v_t_588_, lean_object* v_h_589_, lean_object* v_num_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_Json_ctorElim___redArg(v_t_588_, v_num_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_str_elim___redArg(lean_object* v_t_592_, lean_object* v_str_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Json_ctorElim___redArg(v_t_592_, v_str_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_str_elim(lean_object* v_motive__1_595_, lean_object* v_t_596_, lean_object* v_h_597_, lean_object* v_str_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Json_ctorElim___redArg(v_t_596_, v_str_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim___redArg(lean_object* v_t_600_, lean_object* v_arr_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lean_Json_ctorElim___redArg(v_t_600_, v_arr_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim(lean_object* v_motive__1_603_, lean_object* v_t_604_, lean_object* v_h_605_, lean_object* v_arr_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_Json_ctorElim___redArg(v_t_604_, v_arr_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim___redArg(lean_object* v_t_608_, lean_object* v_obj_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Json_ctorElim___redArg(v_t_608_, v_obj_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim(lean_object* v_motive__1_611_, lean_object* v_t_612_, lean_object* v_h_613_, lean_object* v_obj_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_Json_ctorElim___redArg(v_t_612_, v_obj_614_);
return v___x_615_;
}
}
static lean_object* _init_l_Lean_instInhabitedJson_default(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = lean_box(0);
return v___x_616_;
}
}
static lean_object* _init_l_Lean_instInhabitedJson(void){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = lean_box(0);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(lean_object* v_init_618_, lean_object* v_x_619_){
_start:
{
if (lean_obj_tag(v_x_619_) == 0)
{
lean_object* v_l_620_; lean_object* v_r_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_l_620_ = lean_ctor_get(v_x_619_, 3);
v_r_621_ = lean_ctor_get(v_x_619_, 4);
v___x_622_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v_init_618_, v_l_620_);
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_nat_add(v___x_622_, v___x_623_);
lean_dec(v___x_622_);
v_init_618_ = v___x_624_;
v_x_619_ = v_r_621_;
goto _start;
}
else
{
return v_init_618_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1___boxed(lean_object* v_init_626_, lean_object* v_x_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v_init_626_, v_x_627_);
lean_dec(v_x_627_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(lean_object* v_t_629_, lean_object* v_k_630_){
_start:
{
if (lean_obj_tag(v_t_629_) == 0)
{
lean_object* v_k_631_; lean_object* v_v_632_; lean_object* v_l_633_; lean_object* v_r_634_; uint8_t v___x_635_; 
v_k_631_ = lean_ctor_get(v_t_629_, 1);
v_v_632_ = lean_ctor_get(v_t_629_, 2);
v_l_633_ = lean_ctor_get(v_t_629_, 3);
v_r_634_ = lean_ctor_get(v_t_629_, 4);
v___x_635_ = lean_string_compare(v_k_630_, v_k_631_);
switch(v___x_635_)
{
case 0:
{
v_t_629_ = v_l_633_;
goto _start;
}
case 1:
{
lean_object* v___x_637_; 
lean_inc(v_v_632_);
v___x_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_637_, 0, v_v_632_);
return v___x_637_;
}
default: 
{
v_t_629_ = v_r_634_;
goto _start;
}
}
}
else
{
lean_object* v___x_639_; 
v___x_639_ = lean_box(0);
return v___x_639_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg___boxed(lean_object* v_t_640_, lean_object* v_k_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_t_640_, v_k_641_);
lean_dec_ref(v_k_641_);
lean_dec(v_t_640_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(lean_object* v_szA_654_, lean_object* v_szB_655_, lean_object* v_kvPairs_656_, lean_object* v_init_657_, lean_object* v_x_658_){
_start:
{
if (lean_obj_tag(v_x_658_) == 0)
{
lean_object* v_k_659_; lean_object* v_v_660_; lean_object* v_l_661_; lean_object* v_r_662_; uint8_t v___x_663_; lean_object* v___x_664_; 
v_k_659_ = lean_ctor_get(v_x_658_, 1);
v_v_660_ = lean_ctor_get(v_x_658_, 2);
v_l_661_ = lean_ctor_get(v_x_658_, 3);
v_r_662_ = lean_ctor_get(v_x_658_, 4);
v___x_663_ = lean_nat_dec_eq(v_szA_654_, v_szB_655_);
v___x_664_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(v_szA_654_, v_szB_655_, v_kvPairs_656_, v_init_657_, v_l_661_);
if (lean_obj_tag(v___x_664_) == 0)
{
return v___x_664_;
}
else
{
lean_object* v___x_665_; uint8_t v___y_667_; lean_object* v___x_670_; 
lean_dec_ref_known(v___x_664_, 1);
v___x_665_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0));
v___x_670_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_kvPairs_656_, v_k_659_);
if (lean_obj_tag(v___x_670_) == 0)
{
v___y_667_ = v___x_663_;
goto v___jp_666_;
}
else
{
lean_object* v_val_671_; uint8_t v___x_672_; 
v_val_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_val_671_);
lean_dec_ref_known(v___x_670_, 1);
v___x_672_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v_v_660_, v_val_671_);
lean_dec(v_val_671_);
if (v___x_672_ == 0)
{
v___y_667_ = v___x_663_;
goto v___jp_666_;
}
else
{
v_init_657_ = v___x_665_;
v_x_658_ = v_r_662_;
goto _start;
}
}
v___jp_666_:
{
if (v___y_667_ == 0)
{
v_init_657_ = v___x_665_;
v_x_658_ = v_r_662_;
goto _start;
}
else
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__3));
return v___x_669_;
}
}
}
}
else
{
lean_object* v___x_674_; 
v___x_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_674_, 0, v_init_657_);
return v___x_674_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(lean_object* v_x_675_, lean_object* v_x_676_){
_start:
{
switch(lean_obj_tag(v_x_675_))
{
case 0:
{
if (lean_obj_tag(v_x_676_) == 0)
{
uint8_t v___x_677_; 
v___x_677_ = 1;
return v___x_677_;
}
else
{
uint8_t v___x_678_; 
v___x_678_ = 0;
return v___x_678_;
}
}
case 1:
{
if (lean_obj_tag(v_x_676_) == 1)
{
uint8_t v_b_679_; 
v_b_679_ = lean_ctor_get_uint8(v_x_676_, 0);
if (v_b_679_ == 0)
{
uint8_t v_b_680_; 
v_b_680_ = lean_ctor_get_uint8(v_x_675_, 0);
if (v_b_680_ == 0)
{
uint8_t v___x_681_; 
v___x_681_ = 1;
return v___x_681_;
}
else
{
return v_b_679_;
}
}
else
{
uint8_t v_b_682_; 
v_b_682_ = lean_ctor_get_uint8(v_x_675_, 0);
return v_b_682_;
}
}
else
{
uint8_t v___x_683_; 
v___x_683_ = 0;
return v___x_683_;
}
}
case 2:
{
if (lean_obj_tag(v_x_676_) == 2)
{
lean_object* v_n_684_; lean_object* v_n_685_; uint8_t v___x_686_; 
v_n_684_ = lean_ctor_get(v_x_675_, 0);
v_n_685_ = lean_ctor_get(v_x_676_, 0);
v___x_686_ = l_Lean_instDecidableEqJsonNumber_decEq(v_n_684_, v_n_685_);
return v___x_686_;
}
else
{
uint8_t v___x_687_; 
v___x_687_ = 0;
return v___x_687_;
}
}
case 3:
{
if (lean_obj_tag(v_x_676_) == 3)
{
lean_object* v_s_688_; lean_object* v_s_689_; uint8_t v___x_690_; 
v_s_688_ = lean_ctor_get(v_x_675_, 0);
v_s_689_ = lean_ctor_get(v_x_676_, 0);
v___x_690_ = lean_string_dec_eq(v_s_688_, v_s_689_);
return v___x_690_;
}
else
{
uint8_t v___x_691_; 
v___x_691_ = 0;
return v___x_691_;
}
}
case 4:
{
if (lean_obj_tag(v_x_676_) == 4)
{
lean_object* v_elems_692_; lean_object* v_elems_693_; lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v_elems_692_ = lean_ctor_get(v_x_675_, 0);
v_elems_693_ = lean_ctor_get(v_x_676_, 0);
v___x_694_ = lean_array_get_size(v_elems_692_);
v___x_695_ = lean_array_get_size(v_elems_693_);
v___x_696_ = lean_nat_dec_eq(v___x_694_, v___x_695_);
if (v___x_696_ == 0)
{
return v___x_696_;
}
else
{
uint8_t v___x_697_; 
v___x_697_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(v_elems_692_, v_elems_693_, v___x_694_);
return v___x_697_;
}
}
else
{
uint8_t v___x_698_; 
v___x_698_ = 0;
return v___x_698_;
}
}
default: 
{
if (lean_obj_tag(v_x_676_) == 5)
{
lean_object* v_kvPairs_699_; lean_object* v_kvPairs_700_; lean_object* v___x_701_; lean_object* v_szA_702_; lean_object* v_szB_703_; uint8_t v___x_704_; lean_object* v___y_706_; 
v_kvPairs_699_ = lean_ctor_get(v_x_675_, 0);
v_kvPairs_700_ = lean_ctor_get(v_x_676_, 0);
v___x_701_ = lean_unsigned_to_nat(0u);
v_szA_702_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v___x_701_, v_kvPairs_699_);
v_szB_703_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v___x_701_, v_kvPairs_700_);
v___x_704_ = lean_nat_dec_eq(v_szA_702_, v_szB_703_);
if (v___x_704_ == 0)
{
lean_dec(v_szB_703_);
lean_dec(v_szA_702_);
return v___x_704_;
}
else
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v_a_712_; 
v___x_710_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0));
v___x_711_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(v_szA_702_, v_szB_703_, v_kvPairs_700_, v___x_710_, v_kvPairs_699_);
lean_dec(v_szB_703_);
lean_dec(v_szA_702_);
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref(v___x_711_);
v___y_706_ = v_a_712_;
goto v___jp_705_;
}
v___jp_705_:
{
lean_object* v_fst_707_; 
v_fst_707_ = lean_ctor_get(v___y_706_, 0);
lean_inc(v_fst_707_);
lean_dec_ref(v___y_706_);
if (lean_obj_tag(v_fst_707_) == 0)
{
return v___x_704_;
}
else
{
lean_object* v_val_708_; uint8_t v___x_709_; 
v_val_708_ = lean_ctor_get(v_fst_707_, 0);
lean_inc(v_val_708_);
lean_dec_ref_known(v_fst_707_, 1);
v___x_709_ = lean_unbox(v_val_708_);
lean_dec(v_val_708_);
return v___x_709_;
}
}
}
else
{
uint8_t v___x_713_; 
v___x_713_ = 0;
return v___x_713_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(lean_object* v_xs_714_, lean_object* v_ys_715_, lean_object* v_x_716_){
_start:
{
lean_object* v_zero_717_; uint8_t v_isZero_718_; 
v_zero_717_ = lean_unsigned_to_nat(0u);
v_isZero_718_ = lean_nat_dec_eq(v_x_716_, v_zero_717_);
if (v_isZero_718_ == 1)
{
lean_dec(v_x_716_);
return v_isZero_718_;
}
else
{
lean_object* v_one_719_; lean_object* v_n_720_; lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v_one_719_ = lean_unsigned_to_nat(1u);
v_n_720_ = lean_nat_sub(v_x_716_, v_one_719_);
lean_dec(v_x_716_);
v___x_721_ = lean_array_fget_borrowed(v_xs_714_, v_n_720_);
v___x_722_ = lean_array_fget_borrowed(v_ys_715_, v_n_720_);
v___x_723_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v___x_721_, v___x_722_);
if (v___x_723_ == 0)
{
lean_dec(v_n_720_);
return v___x_723_;
}
else
{
v_x_716_ = v_n_720_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg___boxed(lean_object* v_xs_725_, lean_object* v_ys_726_, lean_object* v_x_727_){
_start:
{
uint8_t v_res_728_; lean_object* v_r_729_; 
v_res_728_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(v_xs_725_, v_ys_726_, v_x_727_);
lean_dec_ref(v_ys_726_);
lean_dec_ref(v_xs_725_);
v_r_729_ = lean_box(v_res_728_);
return v_r_729_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___boxed(lean_object* v_szA_730_, lean_object* v_szB_731_, lean_object* v_kvPairs_732_, lean_object* v_init_733_, lean_object* v_x_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(v_szA_730_, v_szB_731_, v_kvPairs_732_, v_init_733_, v_x_734_);
lean_dec(v_x_734_);
lean_dec(v_kvPairs_732_);
lean_dec(v_szB_731_);
lean_dec(v_szA_730_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27___boxed(lean_object* v_x_736_, lean_object* v_x_737_){
_start:
{
uint8_t v_res_738_; lean_object* v_r_739_; 
v_res_738_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v_x_736_, v_x_737_);
lean_dec(v_x_737_);
lean_dec(v_x_736_);
v_r_739_ = lean_box(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0(lean_object* v_xs_740_, lean_object* v_ys_741_, lean_object* v_hsz_742_, lean_object* v_x_743_, lean_object* v_x_744_){
_start:
{
uint8_t v___x_745_; 
v___x_745_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(v_xs_740_, v_ys_741_, v_x_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___boxed(lean_object* v_xs_746_, lean_object* v_ys_747_, lean_object* v_hsz_748_, lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
uint8_t v_res_751_; lean_object* v_r_752_; 
v_res_751_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0(v_xs_746_, v_ys_747_, v_hsz_748_, v_x_749_, v_x_750_);
lean_dec_ref(v_ys_747_);
lean_dec_ref(v_xs_746_);
v_r_752_ = lean_box(v_res_751_);
return v_r_752_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1(lean_object* v_init_753_, lean_object* v_t_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v_init_753_, v_t_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1___boxed(lean_object* v_init_756_, lean_object* v_t_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1(v_init_756_, v_t_757_);
lean_dec(v_t_757_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2(lean_object* v_00_u03b4_759_, lean_object* v_t_760_, lean_object* v_k_761_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_t_760_, v_k_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___boxed(lean_object* v_00_u03b4_763_, lean_object* v_t_764_, lean_object* v_k_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2(v_00_u03b4_763_, v_t_764_, v_k_765_);
lean_dec_ref(v_k_765_);
lean_dec(v_t_764_);
return v_res_766_;
}
}
LEAN_EXPORT uint8_t l_Lean_Json_instBEq___private__1(lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
uint8_t v___x_769_; 
v___x_769_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v_a_767_, v_a_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instBEq___private__1___boxed(lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
uint8_t v_res_772_; lean_object* v_r_773_; 
v_res_772_ = l_Lean_Json_instBEq___private__1(v_a_770_, v_a_771_);
lean_dec(v_a_771_);
lean_dec(v_a_770_);
v_r_773_ = lean_box(v_res_772_);
return v_r_773_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(lean_object* v_as_776_, size_t v_i_777_, size_t v_stop_778_, uint64_t v_b_779_){
_start:
{
uint8_t v___x_780_; 
v___x_780_ = lean_usize_dec_eq(v_i_777_, v_stop_778_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; uint64_t v___x_782_; uint64_t v___x_783_; size_t v___x_784_; size_t v___x_785_; 
v___x_781_ = lean_array_uget_borrowed(v_as_776_, v_i_777_);
v___x_782_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v___x_781_);
v___x_783_ = lean_uint64_mix_hash(v_b_779_, v___x_782_);
v___x_784_ = ((size_t)1ULL);
v___x_785_ = lean_usize_add(v_i_777_, v___x_784_);
v_i_777_ = v___x_785_;
v_b_779_ = v___x_783_;
goto _start;
}
else
{
return v_b_779_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(lean_object* v_x_787_){
_start:
{
switch(lean_obj_tag(v_x_787_))
{
case 0:
{
uint64_t v___x_788_; 
v___x_788_ = 11ULL;
return v___x_788_;
}
case 1:
{
uint8_t v_b_789_; 
v_b_789_ = lean_ctor_get_uint8(v_x_787_, 0);
if (v_b_789_ == 0)
{
uint64_t v___x_790_; 
v___x_790_ = 889925284873970544ULL;
return v___x_790_;
}
else
{
uint64_t v___x_791_; 
v___x_791_ = 7849220421742680397ULL;
return v___x_791_;
}
}
case 2:
{
lean_object* v_n_792_; uint64_t v___x_793_; uint64_t v___x_794_; uint64_t v___x_795_; 
v_n_792_ = lean_ctor_get(v_x_787_, 0);
v___x_793_ = 17ULL;
v___x_794_ = l_Lean_instHashableJsonNumber_hash(v_n_792_);
v___x_795_ = lean_uint64_mix_hash(v___x_793_, v___x_794_);
return v___x_795_;
}
case 3:
{
lean_object* v_s_796_; uint64_t v___x_797_; uint64_t v___x_798_; uint64_t v___x_799_; 
v_s_796_ = lean_ctor_get(v_x_787_, 0);
v___x_797_ = 19ULL;
v___x_798_ = lean_string_hash(v_s_796_);
v___x_799_ = lean_uint64_mix_hash(v___x_797_, v___x_798_);
return v___x_799_;
}
case 4:
{
lean_object* v_elems_800_; lean_object* v___x_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_elems_800_ = lean_ctor_get(v_x_787_, 0);
v___x_801_ = lean_unsigned_to_nat(0u);
v___x_802_ = lean_array_get_size(v_elems_800_);
v___x_803_ = lean_nat_dec_lt(v___x_801_, v___x_802_);
if (v___x_803_ == 0)
{
uint64_t v___x_804_; 
v___x_804_ = 179905158410471120ULL;
return v___x_804_;
}
else
{
uint64_t v___x_805_; uint64_t v___x_806_; size_t v___x_807_; size_t v___x_808_; uint64_t v___x_809_; uint64_t v___x_810_; 
v___x_805_ = 23ULL;
v___x_806_ = 7ULL;
v___x_807_ = ((size_t)0ULL);
v___x_808_ = lean_usize_of_nat(v___x_802_);
v___x_809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(v_elems_800_, v___x_807_, v___x_808_, v___x_806_);
v___x_810_ = lean_uint64_mix_hash(v___x_805_, v___x_809_);
return v___x_810_;
}
}
default: 
{
lean_object* v_kvPairs_811_; uint64_t v___x_812_; uint64_t v___x_813_; uint64_t v___x_814_; uint64_t v___x_815_; 
v_kvPairs_811_ = lean_ctor_get(v_x_787_, 0);
v___x_812_ = 29ULL;
v___x_813_ = 7ULL;
v___x_814_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v___x_813_, v_kvPairs_811_);
v___x_815_ = lean_uint64_mix_hash(v___x_812_, v___x_814_);
return v___x_815_;
}
}
}
}
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(uint64_t v_init_816_, lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
lean_object* v_k_818_; lean_object* v_v_819_; lean_object* v_l_820_; lean_object* v_r_821_; uint64_t v___x_822_; uint64_t v___x_823_; uint64_t v___x_824_; uint64_t v___x_825_; uint64_t v___x_826_; 
v_k_818_ = lean_ctor_get(v_x_817_, 1);
v_v_819_ = lean_ctor_get(v_x_817_, 2);
v_l_820_ = lean_ctor_get(v_x_817_, 3);
v_r_821_ = lean_ctor_get(v_x_817_, 4);
v___x_822_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v_init_816_, v_l_820_);
v___x_823_ = lean_string_hash(v_k_818_);
v___x_824_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v_v_819_);
v___x_825_ = lean_uint64_mix_hash(v___x_823_, v___x_824_);
v___x_826_ = lean_uint64_mix_hash(v___x_822_, v___x_825_);
v_init_816_ = v___x_826_;
v_x_817_ = v_r_821_;
goto _start;
}
else
{
return v_init_816_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1___boxed(lean_object* v_init_828_, lean_object* v_x_829_){
_start:
{
uint64_t v_init_boxed_830_; uint64_t v_res_831_; lean_object* v_r_832_; 
v_init_boxed_830_ = lean_unbox_uint64(v_init_828_);
lean_dec_ref(v_init_828_);
v_res_831_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v_init_boxed_830_, v_x_829_);
lean_dec(v_x_829_);
v_r_832_ = lean_box_uint64(v_res_831_);
return v_r_832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0___boxed(lean_object* v_as_833_, lean_object* v_i_834_, lean_object* v_stop_835_, lean_object* v_b_836_){
_start:
{
size_t v_i_boxed_837_; size_t v_stop_boxed_838_; uint64_t v_b_boxed_839_; uint64_t v_res_840_; lean_object* v_r_841_; 
v_i_boxed_837_ = lean_unbox_usize(v_i_834_);
lean_dec(v_i_834_);
v_stop_boxed_838_ = lean_unbox_usize(v_stop_835_);
lean_dec(v_stop_835_);
v_b_boxed_839_ = lean_unbox_uint64(v_b_836_);
lean_dec_ref(v_b_836_);
v_res_840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(v_as_833_, v_i_boxed_837_, v_stop_boxed_838_, v_b_boxed_839_);
lean_dec_ref(v_as_833_);
v_r_841_ = lean_box_uint64(v_res_840_);
return v_r_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27___boxed(lean_object* v_x_842_){
_start:
{
uint64_t v_res_843_; lean_object* v_r_844_; 
v_res_843_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v_x_842_);
lean_dec(v_x_842_);
v_r_844_ = lean_box_uint64(v_res_843_);
return v_r_844_;
}
}
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1(uint64_t v_init_845_, lean_object* v_t_846_){
_start:
{
uint64_t v___x_847_; 
v___x_847_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v_init_845_, v_t_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1___boxed(lean_object* v_init_848_, lean_object* v_t_849_){
_start:
{
uint64_t v_init_boxed_850_; uint64_t v_res_851_; lean_object* v_r_852_; 
v_init_boxed_850_ = lean_unbox_uint64(v_init_848_);
lean_dec_ref(v_init_848_);
v_res_851_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1(v_init_boxed_850_, v_t_849_);
lean_dec(v_t_849_);
v_r_852_ = lean_box_uint64(v_res_851_);
return v_r_852_;
}
}
LEAN_EXPORT uint64_t l_Lean_Json_instHashable___private__1(lean_object* v_a_853_){
_start:
{
uint64_t v___x_854_; 
v___x_854_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v_a_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instHashable___private__1___boxed(lean_object* v_a_855_){
_start:
{
uint64_t v_res_856_; lean_object* v_r_857_; 
v_res_856_ = l_Lean_Json_instHashable___private__1(v_a_855_);
lean_dec(v_a_855_);
v_r_857_ = lean_box_uint64(v_res_856_);
return v_r_857_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(lean_object* v_k_860_, lean_object* v_v_861_, lean_object* v_t_862_){
_start:
{
if (lean_obj_tag(v_t_862_) == 0)
{
lean_object* v_size_863_; lean_object* v_k_864_; lean_object* v_v_865_; lean_object* v_l_866_; lean_object* v_r_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_1147_; 
v_size_863_ = lean_ctor_get(v_t_862_, 0);
v_k_864_ = lean_ctor_get(v_t_862_, 1);
v_v_865_ = lean_ctor_get(v_t_862_, 2);
v_l_866_ = lean_ctor_get(v_t_862_, 3);
v_r_867_ = lean_ctor_get(v_t_862_, 4);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_t_862_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_869_ = v_t_862_;
v_isShared_870_ = v_isSharedCheck_1147_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_r_867_);
lean_inc(v_l_866_);
lean_inc(v_v_865_);
lean_inc(v_k_864_);
lean_inc(v_size_863_);
lean_dec(v_t_862_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_1147_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
uint8_t v___x_871_; 
v___x_871_ = lean_string_compare(v_k_860_, v_k_864_);
switch(v___x_871_)
{
case 0:
{
lean_object* v_impl_872_; lean_object* v___x_873_; 
lean_dec(v_size_863_);
v_impl_872_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_k_860_, v_v_861_, v_l_866_);
v___x_873_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_867_) == 0)
{
lean_object* v_size_874_; lean_object* v_size_875_; lean_object* v_k_876_; lean_object* v_v_877_; lean_object* v_l_878_; lean_object* v_r_879_; lean_object* v___x_880_; lean_object* v___x_881_; uint8_t v___x_882_; 
v_size_874_ = lean_ctor_get(v_r_867_, 0);
v_size_875_ = lean_ctor_get(v_impl_872_, 0);
v_k_876_ = lean_ctor_get(v_impl_872_, 1);
v_v_877_ = lean_ctor_get(v_impl_872_, 2);
v_l_878_ = lean_ctor_get(v_impl_872_, 3);
v_r_879_ = lean_ctor_get(v_impl_872_, 4);
lean_inc(v_r_879_);
v___x_880_ = lean_unsigned_to_nat(3u);
v___x_881_ = lean_nat_mul(v___x_880_, v_size_874_);
v___x_882_ = lean_nat_dec_lt(v___x_881_, v_size_875_);
lean_dec(v___x_881_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
lean_dec(v_r_879_);
v___x_883_ = lean_nat_add(v___x_873_, v_size_875_);
v___x_884_ = lean_nat_add(v___x_883_, v_size_874_);
lean_dec(v___x_883_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 3, v_impl_872_);
lean_ctor_set(v___x_869_, 0, v___x_884_);
v___x_886_ = v___x_869_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_887_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_887_, 3, v_impl_872_);
lean_ctor_set(v_reuseFailAlloc_887_, 4, v_r_867_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
else
{
lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_953_; 
lean_inc(v_l_878_);
lean_inc(v_v_877_);
lean_inc(v_k_876_);
lean_inc(v_size_875_);
v_isSharedCheck_953_ = !lean_is_exclusive(v_impl_872_);
if (v_isSharedCheck_953_ == 0)
{
lean_object* v_unused_954_; lean_object* v_unused_955_; lean_object* v_unused_956_; lean_object* v_unused_957_; lean_object* v_unused_958_; 
v_unused_954_ = lean_ctor_get(v_impl_872_, 4);
lean_dec(v_unused_954_);
v_unused_955_ = lean_ctor_get(v_impl_872_, 3);
lean_dec(v_unused_955_);
v_unused_956_ = lean_ctor_get(v_impl_872_, 2);
lean_dec(v_unused_956_);
v_unused_957_ = lean_ctor_get(v_impl_872_, 1);
lean_dec(v_unused_957_);
v_unused_958_ = lean_ctor_get(v_impl_872_, 0);
lean_dec(v_unused_958_);
v___x_889_ = v_impl_872_;
v_isShared_890_ = v_isSharedCheck_953_;
goto v_resetjp_888_;
}
else
{
lean_dec(v_impl_872_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_953_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v_size_891_; lean_object* v_size_892_; lean_object* v_k_893_; lean_object* v_v_894_; lean_object* v_l_895_; lean_object* v_r_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v_size_891_ = lean_ctor_get(v_l_878_, 0);
v_size_892_ = lean_ctor_get(v_r_879_, 0);
v_k_893_ = lean_ctor_get(v_r_879_, 1);
v_v_894_ = lean_ctor_get(v_r_879_, 2);
v_l_895_ = lean_ctor_get(v_r_879_, 3);
v_r_896_ = lean_ctor_get(v_r_879_, 4);
v___x_897_ = lean_unsigned_to_nat(2u);
v___x_898_ = lean_nat_mul(v___x_897_, v_size_891_);
v___x_899_ = lean_nat_dec_lt(v_size_892_, v___x_898_);
lean_dec(v___x_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_928_; 
lean_inc(v_r_896_);
lean_inc(v_l_895_);
lean_inc(v_v_894_);
lean_inc(v_k_893_);
v_isSharedCheck_928_ = !lean_is_exclusive(v_r_879_);
if (v_isSharedCheck_928_ == 0)
{
lean_object* v_unused_929_; lean_object* v_unused_930_; lean_object* v_unused_931_; lean_object* v_unused_932_; lean_object* v_unused_933_; 
v_unused_929_ = lean_ctor_get(v_r_879_, 4);
lean_dec(v_unused_929_);
v_unused_930_ = lean_ctor_get(v_r_879_, 3);
lean_dec(v_unused_930_);
v_unused_931_ = lean_ctor_get(v_r_879_, 2);
lean_dec(v_unused_931_);
v_unused_932_ = lean_ctor_get(v_r_879_, 1);
lean_dec(v_unused_932_);
v_unused_933_ = lean_ctor_get(v_r_879_, 0);
lean_dec(v_unused_933_);
v___x_901_ = v_r_879_;
v_isShared_902_ = v_isSharedCheck_928_;
goto v_resetjp_900_;
}
else
{
lean_dec(v_r_879_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_928_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___x_916_; lean_object* v___y_918_; 
v___x_903_ = lean_nat_add(v___x_873_, v_size_875_);
lean_dec(v_size_875_);
v___x_904_ = lean_nat_add(v___x_903_, v_size_874_);
lean_dec(v___x_903_);
v___x_916_ = lean_nat_add(v___x_873_, v_size_891_);
if (lean_obj_tag(v_l_895_) == 0)
{
lean_object* v_size_926_; 
v_size_926_ = lean_ctor_get(v_l_895_, 0);
lean_inc(v_size_926_);
v___y_918_ = v_size_926_;
goto v___jp_917_;
}
else
{
lean_object* v___x_927_; 
v___x_927_ = lean_unsigned_to_nat(0u);
v___y_918_ = v___x_927_;
goto v___jp_917_;
}
v___jp_905_:
{
lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_909_ = lean_nat_add(v___y_907_, v___y_908_);
lean_dec(v___y_908_);
lean_dec(v___y_907_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 4, v_r_867_);
lean_ctor_set(v___x_901_, 3, v_r_896_);
lean_ctor_set(v___x_901_, 2, v_v_865_);
lean_ctor_set(v___x_901_, 1, v_k_864_);
lean_ctor_set(v___x_901_, 0, v___x_909_);
v___x_911_ = v___x_901_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_915_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_915_, 3, v_r_896_);
lean_ctor_set(v_reuseFailAlloc_915_, 4, v_r_867_);
v___x_911_ = v_reuseFailAlloc_915_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_913_; 
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 4, v___x_911_);
lean_ctor_set(v___x_889_, 3, v___y_906_);
lean_ctor_set(v___x_889_, 2, v_v_894_);
lean_ctor_set(v___x_889_, 1, v_k_893_);
lean_ctor_set(v___x_889_, 0, v___x_904_);
v___x_913_ = v___x_889_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v_k_893_);
lean_ctor_set(v_reuseFailAlloc_914_, 2, v_v_894_);
lean_ctor_set(v_reuseFailAlloc_914_, 3, v___y_906_);
lean_ctor_set(v_reuseFailAlloc_914_, 4, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
v___jp_917_:
{
lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_919_ = lean_nat_add(v___x_916_, v___y_918_);
lean_dec(v___y_918_);
lean_dec(v___x_916_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v_l_895_);
lean_ctor_set(v___x_869_, 3, v_l_878_);
lean_ctor_set(v___x_869_, 2, v_v_877_);
lean_ctor_set(v___x_869_, 1, v_k_876_);
lean_ctor_set(v___x_869_, 0, v___x_919_);
v___x_921_ = v___x_869_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_919_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_k_876_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_v_877_);
lean_ctor_set(v_reuseFailAlloc_925_, 3, v_l_878_);
lean_ctor_set(v_reuseFailAlloc_925_, 4, v_l_895_);
v___x_921_ = v_reuseFailAlloc_925_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
lean_object* v___x_922_; 
v___x_922_ = lean_nat_add(v___x_873_, v_size_874_);
if (lean_obj_tag(v_r_896_) == 0)
{
lean_object* v_size_923_; 
v_size_923_ = lean_ctor_get(v_r_896_, 0);
lean_inc(v_size_923_);
v___y_906_ = v___x_921_;
v___y_907_ = v___x_922_;
v___y_908_ = v_size_923_;
goto v___jp_905_;
}
else
{
lean_object* v___x_924_; 
v___x_924_ = lean_unsigned_to_nat(0u);
v___y_906_ = v___x_921_;
v___y_907_ = v___x_922_;
v___y_908_ = v___x_924_;
goto v___jp_905_;
}
}
}
}
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
lean_del_object(v___x_869_);
v___x_934_ = lean_nat_add(v___x_873_, v_size_875_);
lean_dec(v_size_875_);
v___x_935_ = lean_nat_add(v___x_934_, v_size_874_);
lean_dec(v___x_934_);
v___x_936_ = lean_nat_add(v___x_873_, v_size_874_);
v___x_937_ = lean_nat_add(v___x_936_, v_size_892_);
lean_dec(v___x_936_);
lean_inc_ref(v_r_867_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 4, v_r_867_);
lean_ctor_set(v___x_889_, 3, v_r_879_);
lean_ctor_set(v___x_889_, 2, v_v_865_);
lean_ctor_set(v___x_889_, 1, v_k_864_);
lean_ctor_set(v___x_889_, 0, v___x_937_);
v___x_939_ = v___x_889_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_952_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_952_, 3, v_r_879_);
lean_ctor_set(v_reuseFailAlloc_952_, 4, v_r_867_);
v___x_939_ = v_reuseFailAlloc_952_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
v_isSharedCheck_946_ = !lean_is_exclusive(v_r_867_);
if (v_isSharedCheck_946_ == 0)
{
lean_object* v_unused_947_; lean_object* v_unused_948_; lean_object* v_unused_949_; lean_object* v_unused_950_; lean_object* v_unused_951_; 
v_unused_947_ = lean_ctor_get(v_r_867_, 4);
lean_dec(v_unused_947_);
v_unused_948_ = lean_ctor_get(v_r_867_, 3);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_r_867_, 2);
lean_dec(v_unused_949_);
v_unused_950_ = lean_ctor_get(v_r_867_, 1);
lean_dec(v_unused_950_);
v_unused_951_ = lean_ctor_get(v_r_867_, 0);
lean_dec(v_unused_951_);
v___x_941_ = v_r_867_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_dec(v_r_867_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 4, v___x_939_);
lean_ctor_set(v___x_941_, 3, v_l_878_);
lean_ctor_set(v___x_941_, 2, v_v_877_);
lean_ctor_set(v___x_941_, 1, v_k_876_);
lean_ctor_set(v___x_941_, 0, v___x_935_);
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_k_876_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v_v_877_);
lean_ctor_set(v_reuseFailAlloc_945_, 3, v_l_878_);
lean_ctor_set(v_reuseFailAlloc_945_, 4, v___x_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_959_; 
v_l_959_ = lean_ctor_get(v_impl_872_, 3);
if (lean_obj_tag(v_l_959_) == 0)
{
lean_object* v_r_960_; lean_object* v_k_961_; lean_object* v_v_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_973_; 
lean_inc_ref(v_l_959_);
v_r_960_ = lean_ctor_get(v_impl_872_, 4);
v_k_961_ = lean_ctor_get(v_impl_872_, 1);
v_v_962_ = lean_ctor_get(v_impl_872_, 2);
v_isSharedCheck_973_ = !lean_is_exclusive(v_impl_872_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; lean_object* v_unused_975_; 
v_unused_974_ = lean_ctor_get(v_impl_872_, 3);
lean_dec(v_unused_974_);
v_unused_975_ = lean_ctor_get(v_impl_872_, 0);
lean_dec(v_unused_975_);
v___x_964_ = v_impl_872_;
v_isShared_965_ = v_isSharedCheck_973_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_r_960_);
lean_inc(v_v_962_);
lean_inc(v_k_961_);
lean_dec(v_impl_872_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_973_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_966_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_960_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 3, v_r_960_);
lean_ctor_set(v___x_964_, 2, v_v_865_);
lean_ctor_set(v___x_964_, 1, v_k_864_);
lean_ctor_set(v___x_964_, 0, v___x_873_);
v___x_968_ = v___x_964_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_972_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_972_, 3, v_r_960_);
lean_ctor_set(v_reuseFailAlloc_972_, 4, v_r_960_);
v___x_968_ = v_reuseFailAlloc_972_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_970_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v___x_968_);
lean_ctor_set(v___x_869_, 3, v_l_959_);
lean_ctor_set(v___x_869_, 2, v_v_962_);
lean_ctor_set(v___x_869_, 1, v_k_961_);
lean_ctor_set(v___x_869_, 0, v___x_966_);
v___x_970_ = v___x_869_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_k_961_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v_v_962_);
lean_ctor_set(v_reuseFailAlloc_971_, 3, v_l_959_);
lean_ctor_set(v_reuseFailAlloc_971_, 4, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
else
{
lean_object* v_r_976_; 
v_r_976_ = lean_ctor_get(v_impl_872_, 4);
lean_inc(v_r_976_);
if (lean_obj_tag(v_r_976_) == 0)
{
lean_object* v_k_977_; lean_object* v_v_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_1001_; 
lean_inc(v_l_959_);
v_k_977_ = lean_ctor_get(v_impl_872_, 1);
v_v_978_ = lean_ctor_get(v_impl_872_, 2);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_impl_872_);
if (v_isSharedCheck_1001_ == 0)
{
lean_object* v_unused_1002_; lean_object* v_unused_1003_; lean_object* v_unused_1004_; 
v_unused_1002_ = lean_ctor_get(v_impl_872_, 4);
lean_dec(v_unused_1002_);
v_unused_1003_ = lean_ctor_get(v_impl_872_, 3);
lean_dec(v_unused_1003_);
v_unused_1004_ = lean_ctor_get(v_impl_872_, 0);
lean_dec(v_unused_1004_);
v___x_980_ = v_impl_872_;
v_isShared_981_ = v_isSharedCheck_1001_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_v_978_);
lean_inc(v_k_977_);
lean_dec(v_impl_872_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_1001_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v_k_982_; lean_object* v_v_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_997_; 
v_k_982_ = lean_ctor_get(v_r_976_, 1);
v_v_983_ = lean_ctor_get(v_r_976_, 2);
v_isSharedCheck_997_ = !lean_is_exclusive(v_r_976_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; lean_object* v_unused_999_; lean_object* v_unused_1000_; 
v_unused_998_ = lean_ctor_get(v_r_976_, 4);
lean_dec(v_unused_998_);
v_unused_999_ = lean_ctor_get(v_r_976_, 3);
lean_dec(v_unused_999_);
v_unused_1000_ = lean_ctor_get(v_r_976_, 0);
lean_dec(v_unused_1000_);
v___x_985_ = v_r_976_;
v_isShared_986_ = v_isSharedCheck_997_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_v_983_);
lean_inc(v_k_982_);
lean_dec(v_r_976_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_997_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_987_ = lean_unsigned_to_nat(3u);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 4, v_l_959_);
lean_ctor_set(v___x_985_, 3, v_l_959_);
lean_ctor_set(v___x_985_, 2, v_v_978_);
lean_ctor_set(v___x_985_, 1, v_k_977_);
lean_ctor_set(v___x_985_, 0, v___x_873_);
v___x_989_ = v___x_985_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v_k_977_);
lean_ctor_set(v_reuseFailAlloc_996_, 2, v_v_978_);
lean_ctor_set(v_reuseFailAlloc_996_, 3, v_l_959_);
lean_ctor_set(v_reuseFailAlloc_996_, 4, v_l_959_);
v___x_989_ = v_reuseFailAlloc_996_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_object* v___x_991_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 4, v_l_959_);
lean_ctor_set(v___x_980_, 2, v_v_865_);
lean_ctor_set(v___x_980_, 1, v_k_864_);
lean_ctor_set(v___x_980_, 0, v___x_873_);
v___x_991_ = v___x_980_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_995_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_995_, 3, v_l_959_);
lean_ctor_set(v_reuseFailAlloc_995_, 4, v_l_959_);
v___x_991_ = v_reuseFailAlloc_995_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_993_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v___x_991_);
lean_ctor_set(v___x_869_, 3, v___x_989_);
lean_ctor_set(v___x_869_, 2, v_v_983_);
lean_ctor_set(v___x_869_, 1, v_k_982_);
lean_ctor_set(v___x_869_, 0, v___x_987_);
v___x_993_ = v___x_869_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_987_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_k_982_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v_v_983_);
lean_ctor_set(v_reuseFailAlloc_994_, 3, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_994_, 4, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
}
else
{
lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_1005_ = lean_unsigned_to_nat(2u);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v_r_976_);
lean_ctor_set(v___x_869_, 3, v_impl_872_);
lean_ctor_set(v___x_869_, 0, v___x_1005_);
v___x_1007_ = v___x_869_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1008_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1008_, 3, v_impl_872_);
lean_ctor_set(v_reuseFailAlloc_1008_, 4, v_r_976_);
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
case 1:
{
lean_object* v___x_1010_; 
lean_dec(v_v_865_);
lean_dec(v_k_864_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 2, v_v_861_);
lean_ctor_set(v___x_869_, 1, v_k_860_);
v___x_1010_ = v___x_869_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_size_863_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_k_860_);
lean_ctor_set(v_reuseFailAlloc_1011_, 2, v_v_861_);
lean_ctor_set(v_reuseFailAlloc_1011_, 3, v_l_866_);
lean_ctor_set(v_reuseFailAlloc_1011_, 4, v_r_867_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
default: 
{
lean_object* v_impl_1012_; lean_object* v___x_1013_; 
lean_dec(v_size_863_);
v_impl_1012_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_k_860_, v_v_861_, v_r_867_);
v___x_1013_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_866_) == 0)
{
lean_object* v_size_1014_; lean_object* v_size_1015_; lean_object* v_k_1016_; lean_object* v_v_1017_; lean_object* v_l_1018_; lean_object* v_r_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v_size_1014_ = lean_ctor_get(v_l_866_, 0);
v_size_1015_ = lean_ctor_get(v_impl_1012_, 0);
v_k_1016_ = lean_ctor_get(v_impl_1012_, 1);
v_v_1017_ = lean_ctor_get(v_impl_1012_, 2);
v_l_1018_ = lean_ctor_get(v_impl_1012_, 3);
lean_inc(v_l_1018_);
v_r_1019_ = lean_ctor_get(v_impl_1012_, 4);
v___x_1020_ = lean_unsigned_to_nat(3u);
v___x_1021_ = lean_nat_mul(v___x_1020_, v_size_1014_);
v___x_1022_ = lean_nat_dec_lt(v___x_1021_, v_size_1015_);
lean_dec(v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1026_; 
lean_dec(v_l_1018_);
v___x_1023_ = lean_nat_add(v___x_1013_, v_size_1014_);
v___x_1024_ = lean_nat_add(v___x_1023_, v_size_1015_);
lean_dec(v___x_1023_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v_impl_1012_);
lean_ctor_set(v___x_869_, 0, v___x_1024_);
v___x_1026_ = v___x_869_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1024_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1027_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1027_, 3, v_l_866_);
lean_ctor_set(v_reuseFailAlloc_1027_, 4, v_impl_1012_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
else
{
lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1091_; 
lean_inc(v_r_1019_);
lean_inc(v_v_1017_);
lean_inc(v_k_1016_);
lean_inc(v_size_1015_);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_impl_1012_);
if (v_isSharedCheck_1091_ == 0)
{
lean_object* v_unused_1092_; lean_object* v_unused_1093_; lean_object* v_unused_1094_; lean_object* v_unused_1095_; lean_object* v_unused_1096_; 
v_unused_1092_ = lean_ctor_get(v_impl_1012_, 4);
lean_dec(v_unused_1092_);
v_unused_1093_ = lean_ctor_get(v_impl_1012_, 3);
lean_dec(v_unused_1093_);
v_unused_1094_ = lean_ctor_get(v_impl_1012_, 2);
lean_dec(v_unused_1094_);
v_unused_1095_ = lean_ctor_get(v_impl_1012_, 1);
lean_dec(v_unused_1095_);
v_unused_1096_ = lean_ctor_get(v_impl_1012_, 0);
lean_dec(v_unused_1096_);
v___x_1029_ = v_impl_1012_;
v_isShared_1030_ = v_isSharedCheck_1091_;
goto v_resetjp_1028_;
}
else
{
lean_dec(v_impl_1012_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1091_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v_size_1031_; lean_object* v_k_1032_; lean_object* v_v_1033_; lean_object* v_l_1034_; lean_object* v_r_1035_; lean_object* v_size_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_size_1031_ = lean_ctor_get(v_l_1018_, 0);
v_k_1032_ = lean_ctor_get(v_l_1018_, 1);
v_v_1033_ = lean_ctor_get(v_l_1018_, 2);
v_l_1034_ = lean_ctor_get(v_l_1018_, 3);
v_r_1035_ = lean_ctor_get(v_l_1018_, 4);
v_size_1036_ = lean_ctor_get(v_r_1019_, 0);
v___x_1037_ = lean_unsigned_to_nat(2u);
v___x_1038_ = lean_nat_mul(v___x_1037_, v_size_1036_);
v___x_1039_ = lean_nat_dec_lt(v_size_1031_, v___x_1038_);
lean_dec(v___x_1038_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1067_; 
lean_inc(v_r_1035_);
lean_inc(v_l_1034_);
lean_inc(v_v_1033_);
lean_inc(v_k_1032_);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_l_1018_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; lean_object* v_unused_1069_; lean_object* v_unused_1070_; lean_object* v_unused_1071_; lean_object* v_unused_1072_; 
v_unused_1068_ = lean_ctor_get(v_l_1018_, 4);
lean_dec(v_unused_1068_);
v_unused_1069_ = lean_ctor_get(v_l_1018_, 3);
lean_dec(v_unused_1069_);
v_unused_1070_ = lean_ctor_get(v_l_1018_, 2);
lean_dec(v_unused_1070_);
v_unused_1071_ = lean_ctor_get(v_l_1018_, 1);
lean_dec(v_unused_1071_);
v_unused_1072_ = lean_ctor_get(v_l_1018_, 0);
lean_dec(v_unused_1072_);
v___x_1041_ = v_l_1018_;
v_isShared_1042_ = v_isSharedCheck_1067_;
goto v_resetjp_1040_;
}
else
{
lean_dec(v_l_1018_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1067_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1057_; 
v___x_1043_ = lean_nat_add(v___x_1013_, v_size_1014_);
v___x_1044_ = lean_nat_add(v___x_1043_, v_size_1015_);
lean_dec(v_size_1015_);
if (lean_obj_tag(v_l_1034_) == 0)
{
lean_object* v_size_1065_; 
v_size_1065_ = lean_ctor_get(v_l_1034_, 0);
lean_inc(v_size_1065_);
v___y_1057_ = v_size_1065_;
goto v___jp_1056_;
}
else
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_unsigned_to_nat(0u);
v___y_1057_ = v___x_1066_;
goto v___jp_1056_;
}
v___jp_1045_:
{
lean_object* v___x_1049_; lean_object* v___x_1051_; 
v___x_1049_ = lean_nat_add(v___y_1046_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec(v___y_1046_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 4, v_r_1019_);
lean_ctor_set(v___x_1041_, 3, v_r_1035_);
lean_ctor_set(v___x_1041_, 2, v_v_1017_);
lean_ctor_set(v___x_1041_, 1, v_k_1016_);
lean_ctor_set(v___x_1041_, 0, v___x_1049_);
v___x_1051_ = v___x_1041_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v_k_1016_);
lean_ctor_set(v_reuseFailAlloc_1055_, 2, v_v_1017_);
lean_ctor_set(v_reuseFailAlloc_1055_, 3, v_r_1035_);
lean_ctor_set(v_reuseFailAlloc_1055_, 4, v_r_1019_);
v___x_1051_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
lean_object* v___x_1053_; 
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 4, v___x_1051_);
lean_ctor_set(v___x_1029_, 3, v___y_1047_);
lean_ctor_set(v___x_1029_, 2, v_v_1033_);
lean_ctor_set(v___x_1029_, 1, v_k_1032_);
lean_ctor_set(v___x_1029_, 0, v___x_1044_);
v___x_1053_ = v___x_1029_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1044_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_k_1032_);
lean_ctor_set(v_reuseFailAlloc_1054_, 2, v_v_1033_);
lean_ctor_set(v_reuseFailAlloc_1054_, 3, v___y_1047_);
lean_ctor_set(v_reuseFailAlloc_1054_, 4, v___x_1051_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
v___jp_1056_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = lean_nat_add(v___x_1043_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec(v___x_1043_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v_l_1034_);
lean_ctor_set(v___x_869_, 0, v___x_1058_);
v___x_1060_ = v___x_869_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1064_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1064_, 3, v_l_866_);
lean_ctor_set(v_reuseFailAlloc_1064_, 4, v_l_1034_);
v___x_1060_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_nat_add(v___x_1013_, v_size_1036_);
if (lean_obj_tag(v_r_1035_) == 0)
{
lean_object* v_size_1062_; 
v_size_1062_ = lean_ctor_get(v_r_1035_, 0);
lean_inc(v_size_1062_);
v___y_1046_ = v___x_1061_;
v___y_1047_ = v___x_1060_;
v___y_1048_ = v_size_1062_;
goto v___jp_1045_;
}
else
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_unsigned_to_nat(0u);
v___y_1046_ = v___x_1061_;
v___y_1047_ = v___x_1060_;
v___y_1048_ = v___x_1063_;
goto v___jp_1045_;
}
}
}
}
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
lean_del_object(v___x_869_);
v___x_1073_ = lean_nat_add(v___x_1013_, v_size_1014_);
v___x_1074_ = lean_nat_add(v___x_1073_, v_size_1015_);
lean_dec(v_size_1015_);
v___x_1075_ = lean_nat_add(v___x_1073_, v_size_1031_);
lean_dec(v___x_1073_);
lean_inc_ref(v_l_866_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 4, v_l_1018_);
lean_ctor_set(v___x_1029_, 3, v_l_866_);
lean_ctor_set(v___x_1029_, 2, v_v_865_);
lean_ctor_set(v___x_1029_, 1, v_k_864_);
lean_ctor_set(v___x_1029_, 0, v___x_1075_);
v___x_1077_ = v___x_1029_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1090_, 3, v_l_866_);
lean_ctor_set(v_reuseFailAlloc_1090_, 4, v_l_1018_);
v___x_1077_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
v_isSharedCheck_1084_ = !lean_is_exclusive(v_l_866_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; lean_object* v_unused_1086_; lean_object* v_unused_1087_; lean_object* v_unused_1088_; lean_object* v_unused_1089_; 
v_unused_1085_ = lean_ctor_get(v_l_866_, 4);
lean_dec(v_unused_1085_);
v_unused_1086_ = lean_ctor_get(v_l_866_, 3);
lean_dec(v_unused_1086_);
v_unused_1087_ = lean_ctor_get(v_l_866_, 2);
lean_dec(v_unused_1087_);
v_unused_1088_ = lean_ctor_get(v_l_866_, 1);
lean_dec(v_unused_1088_);
v_unused_1089_ = lean_ctor_get(v_l_866_, 0);
lean_dec(v_unused_1089_);
v___x_1079_ = v_l_866_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_dec(v_l_866_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 4, v_r_1019_);
lean_ctor_set(v___x_1079_, 3, v___x_1077_);
lean_ctor_set(v___x_1079_, 2, v_v_1017_);
lean_ctor_set(v___x_1079_, 1, v_k_1016_);
lean_ctor_set(v___x_1079_, 0, v___x_1074_);
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_k_1016_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v_v_1017_);
lean_ctor_set(v_reuseFailAlloc_1083_, 3, v___x_1077_);
lean_ctor_set(v_reuseFailAlloc_1083_, 4, v_r_1019_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1097_; 
v_l_1097_ = lean_ctor_get(v_impl_1012_, 3);
lean_inc(v_l_1097_);
if (lean_obj_tag(v_l_1097_) == 0)
{
lean_object* v_r_1098_; lean_object* v_k_1099_; lean_object* v_v_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1123_; 
v_r_1098_ = lean_ctor_get(v_impl_1012_, 4);
v_k_1099_ = lean_ctor_get(v_impl_1012_, 1);
v_v_1100_ = lean_ctor_get(v_impl_1012_, 2);
v_isSharedCheck_1123_ = !lean_is_exclusive(v_impl_1012_);
if (v_isSharedCheck_1123_ == 0)
{
lean_object* v_unused_1124_; lean_object* v_unused_1125_; 
v_unused_1124_ = lean_ctor_get(v_impl_1012_, 3);
lean_dec(v_unused_1124_);
v_unused_1125_ = lean_ctor_get(v_impl_1012_, 0);
lean_dec(v_unused_1125_);
v___x_1102_ = v_impl_1012_;
v_isShared_1103_ = v_isSharedCheck_1123_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_r_1098_);
lean_inc(v_v_1100_);
lean_inc(v_k_1099_);
lean_dec(v_impl_1012_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1123_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v_k_1104_; lean_object* v_v_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1119_; 
v_k_1104_ = lean_ctor_get(v_l_1097_, 1);
v_v_1105_ = lean_ctor_get(v_l_1097_, 2);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_l_1097_);
if (v_isSharedCheck_1119_ == 0)
{
lean_object* v_unused_1120_; lean_object* v_unused_1121_; lean_object* v_unused_1122_; 
v_unused_1120_ = lean_ctor_get(v_l_1097_, 4);
lean_dec(v_unused_1120_);
v_unused_1121_ = lean_ctor_get(v_l_1097_, 3);
lean_dec(v_unused_1121_);
v_unused_1122_ = lean_ctor_get(v_l_1097_, 0);
lean_dec(v_unused_1122_);
v___x_1107_ = v_l_1097_;
v_isShared_1108_ = v_isSharedCheck_1119_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_v_1105_);
lean_inc(v_k_1104_);
lean_dec(v_l_1097_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1119_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1109_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1098_, 2);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 4, v_r_1098_);
lean_ctor_set(v___x_1107_, 3, v_r_1098_);
lean_ctor_set(v___x_1107_, 2, v_v_865_);
lean_ctor_set(v___x_1107_, 1, v_k_864_);
lean_ctor_set(v___x_1107_, 0, v___x_1013_);
v___x_1111_ = v___x_1107_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1013_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1118_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1118_, 3, v_r_1098_);
lean_ctor_set(v_reuseFailAlloc_1118_, 4, v_r_1098_);
v___x_1111_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1113_; 
lean_inc(v_r_1098_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 3, v_r_1098_);
lean_ctor_set(v___x_1102_, 0, v___x_1013_);
v___x_1113_ = v___x_1102_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1013_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_k_1099_);
lean_ctor_set(v_reuseFailAlloc_1117_, 2, v_v_1100_);
lean_ctor_set(v_reuseFailAlloc_1117_, 3, v_r_1098_);
lean_ctor_set(v_reuseFailAlloc_1117_, 4, v_r_1098_);
v___x_1113_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1115_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v___x_1113_);
lean_ctor_set(v___x_869_, 3, v___x_1111_);
lean_ctor_set(v___x_869_, 2, v_v_1105_);
lean_ctor_set(v___x_869_, 1, v_k_1104_);
lean_ctor_set(v___x_869_, 0, v___x_1109_);
v___x_1115_ = v___x_869_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_k_1104_);
lean_ctor_set(v_reuseFailAlloc_1116_, 2, v_v_1105_);
lean_ctor_set(v_reuseFailAlloc_1116_, 3, v___x_1111_);
lean_ctor_set(v_reuseFailAlloc_1116_, 4, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
}
else
{
lean_object* v_r_1126_; 
v_r_1126_ = lean_ctor_get(v_impl_1012_, 4);
lean_inc(v_r_1126_);
if (lean_obj_tag(v_r_1126_) == 0)
{
lean_object* v_k_1127_; lean_object* v_v_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1139_; 
v_k_1127_ = lean_ctor_get(v_impl_1012_, 1);
v_v_1128_ = lean_ctor_get(v_impl_1012_, 2);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_impl_1012_);
if (v_isSharedCheck_1139_ == 0)
{
lean_object* v_unused_1140_; lean_object* v_unused_1141_; lean_object* v_unused_1142_; 
v_unused_1140_ = lean_ctor_get(v_impl_1012_, 4);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v_impl_1012_, 3);
lean_dec(v_unused_1141_);
v_unused_1142_ = lean_ctor_get(v_impl_1012_, 0);
lean_dec(v_unused_1142_);
v___x_1130_ = v_impl_1012_;
v_isShared_1131_ = v_isSharedCheck_1139_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_v_1128_);
lean_inc(v_k_1127_);
lean_dec(v_impl_1012_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1139_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1134_; 
v___x_1132_ = lean_unsigned_to_nat(3u);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v_l_1097_);
lean_ctor_set(v___x_1130_, 2, v_v_865_);
lean_ctor_set(v___x_1130_, 1, v_k_864_);
lean_ctor_set(v___x_1130_, 0, v___x_1013_);
v___x_1134_ = v___x_1130_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1013_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1138_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1138_, 3, v_l_1097_);
lean_ctor_set(v_reuseFailAlloc_1138_, 4, v_l_1097_);
v___x_1134_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1136_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v_r_1126_);
lean_ctor_set(v___x_869_, 3, v___x_1134_);
lean_ctor_set(v___x_869_, 2, v_v_1128_);
lean_ctor_set(v___x_869_, 1, v_k_1127_);
lean_ctor_set(v___x_869_, 0, v___x_1132_);
v___x_1136_ = v___x_869_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1132_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_k_1127_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_v_1128_);
lean_ctor_set(v_reuseFailAlloc_1137_, 3, v___x_1134_);
lean_ctor_set(v_reuseFailAlloc_1137_, 4, v_r_1126_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1143_ = lean_unsigned_to_nat(2u);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 4, v_impl_1012_);
lean_ctor_set(v___x_869_, 3, v_r_1126_);
lean_ctor_set(v___x_869_, 0, v___x_1143_);
v___x_1145_ = v___x_869_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1143_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v_k_864_);
lean_ctor_set(v_reuseFailAlloc_1146_, 2, v_v_865_);
lean_ctor_set(v_reuseFailAlloc_1146_, 3, v_r_1126_);
lean_ctor_set(v_reuseFailAlloc_1146_, 4, v_impl_1012_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
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
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = lean_unsigned_to_nat(1u);
v___x_1149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v_k_860_);
lean_ctor_set(v___x_1149_, 2, v_v_861_);
lean_ctor_set(v___x_1149_, 3, v_t_862_);
lean_ctor_set(v___x_1149_, 4, v_t_862_);
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(lean_object* v_as_x27_1150_, lean_object* v_b_1151_){
_start:
{
if (lean_obj_tag(v_as_x27_1150_) == 0)
{
return v_b_1151_;
}
else
{
lean_object* v_head_1152_; lean_object* v_tail_1153_; lean_object* v_fst_1154_; lean_object* v_snd_1155_; lean_object* v_r_1156_; 
v_head_1152_ = lean_ctor_get(v_as_x27_1150_, 0);
v_tail_1153_ = lean_ctor_get(v_as_x27_1150_, 1);
v_fst_1154_ = lean_ctor_get(v_head_1152_, 0);
v_snd_1155_ = lean_ctor_get(v_head_1152_, 1);
lean_inc(v_snd_1155_);
lean_inc(v_fst_1154_);
v_r_1156_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_fst_1154_, v_snd_1155_, v_b_1151_);
v_as_x27_1150_ = v_tail_1153_;
v_b_1151_ = v_r_1156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg___boxed(lean_object* v_as_x27_1158_, lean_object* v_b_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(v_as_x27_1158_, v_b_1159_);
lean_dec(v_as_x27_1158_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_mkObj(lean_object* v_o_1161_){
_start:
{
lean_object* v_r_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v_r_1162_ = lean_box(1);
v___x_1163_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(v_o_1161_, v_r_1162_);
v___x_1164_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_mkObj___boxed(lean_object* v_o_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Json_mkObj(v_o_1165_);
lean_dec(v_o_1165_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0(lean_object* v_00_u03b2_1167_, lean_object* v_k_1168_, lean_object* v_v_1169_, lean_object* v_t_1170_, lean_object* v_hl_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_k_1168_, v_v_1169_, v_t_1170_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1(lean_object* v_as_1173_, lean_object* v_as_x27_1174_, lean_object* v_b_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(v_as_x27_1174_, v_b_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___boxed(lean_object* v_as_1178_, lean_object* v_as_x27_1179_, lean_object* v_b_1180_, lean_object* v_a_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1(v_as_1178_, v_as_x27_1179_, v_b_1180_, v_a_1181_);
lean_dec(v_as_x27_1179_);
lean_dec(v_as_1178_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeNat___lam__0(lean_object* v_n_1183_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = l_Lean_JsonNumber_fromNat(v_n_1183_);
v___x_1185_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeInt___lam__0(lean_object* v_n_1188_){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = l_Lean_JsonNumber_fromInt(v_n_1188_);
v___x_1190_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeString___lam__0(lean_object* v_s_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1194_, 0, v_s_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0(uint8_t v_b_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1198_, 0, v_b_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0___boxed(lean_object* v_b_1199_){
_start:
{
uint8_t v_b_boxed_1200_; lean_object* v_res_1201_; 
v_b_boxed_1200_ = lean_unbox(v_b_1199_);
v_res_1201_ = l_Lean_Json_instCoeBool___lam__0(v_b_boxed_1200_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instOfNat(lean_object* v_n_1204_){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = l_Lean_JsonNumber_fromNat(v_n_1204_);
v___x_1206_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT uint8_t l_Lean_Json_isNull(lean_object* v_x_1207_){
_start:
{
if (lean_obj_tag(v_x_1207_) == 0)
{
uint8_t v___x_1208_; 
v___x_1208_ = 1;
return v___x_1208_;
}
else
{
uint8_t v___x_1209_; 
v___x_1209_ = 0;
return v___x_1209_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_isNull___boxed(lean_object* v_x_1210_){
_start:
{
uint8_t v_res_1211_; lean_object* v_r_1212_; 
v_res_1211_ = l_Lean_Json_isNull(v_x_1210_);
lean_dec(v_x_1210_);
v_r_1212_ = lean_box(v_res_1211_);
return v_r_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObj_x3f(lean_object* v_x_1216_){
_start:
{
if (lean_obj_tag(v_x_1216_) == 5)
{
lean_object* v_kvPairs_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_kvPairs_1217_ = lean_ctor_get(v_x_1216_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_x_1216_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v_x_1216_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_kvPairs_1217_);
lean_dec(v_x_1216_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 1);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_kvPairs_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v___x_1225_; 
lean_dec(v_x_1216_);
v___x_1225_ = ((lean_object*)(l_Lean_Json_getObj_x3f___closed__1));
return v___x_1225_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getArr_x3f(lean_object* v_x_1229_){
_start:
{
if (lean_obj_tag(v_x_1229_) == 4)
{
lean_object* v_elems_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
v_elems_1230_ = lean_ctor_get(v_x_1229_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_x_1229_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v_x_1229_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_elems_1230_);
lean_dec(v_x_1229_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
lean_ctor_set_tag(v___x_1232_, 1);
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_elems_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
else
{
lean_object* v___x_1238_; 
lean_dec(v_x_1229_);
v___x_1238_ = ((lean_object*)(l_Lean_Json_getArr_x3f___closed__1));
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getStr_x3f(lean_object* v_x_1242_){
_start:
{
if (lean_obj_tag(v_x_1242_) == 3)
{
lean_object* v_s_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
v_s_1243_ = lean_ctor_get(v_x_1242_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_x_1242_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v_x_1242_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_s_1243_);
lean_dec(v_x_1242_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 1);
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_s_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
else
{
lean_object* v___x_1251_; 
lean_dec(v_x_1242_);
v___x_1251_ = ((lean_object*)(l_Lean_Json_getStr_x3f___closed__1));
return v___x_1251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getNat_x3f(lean_object* v_x_1255_){
_start:
{
if (lean_obj_tag(v_x_1255_) == 2)
{
lean_object* v_n_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1272_; 
v_n_1258_ = lean_ctor_get(v_x_1255_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1255_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1260_ = v_x_1255_;
v_isShared_1261_ = v_isSharedCheck_1272_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_n_1258_);
lean_dec(v_x_1255_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1272_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v_mantissa_1262_; lean_object* v_exponent_1263_; lean_object* v_natZero_1264_; lean_object* v_intZero_1265_; uint8_t v_isNeg_1266_; 
v_mantissa_1262_ = lean_ctor_get(v_n_1258_, 0);
lean_inc(v_mantissa_1262_);
v_exponent_1263_ = lean_ctor_get(v_n_1258_, 1);
lean_inc(v_exponent_1263_);
lean_dec_ref(v_n_1258_);
v_natZero_1264_ = lean_unsigned_to_nat(0u);
v_intZero_1265_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v_isNeg_1266_ = lean_int_dec_lt(v_mantissa_1262_, v_intZero_1265_);
if (v_isNeg_1266_ == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = lean_nat_dec_eq(v_exponent_1263_, v_natZero_1264_);
lean_dec(v_exponent_1263_);
if (v___x_1267_ == 0)
{
lean_dec(v_mantissa_1262_);
lean_del_object(v___x_1260_);
goto v___jp_1256_;
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; 
v_a_1268_ = lean_nat_abs(v_mantissa_1262_);
lean_dec(v_mantissa_1262_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set_tag(v___x_1260_, 1);
lean_ctor_set(v___x_1260_, 0, v_a_1268_);
v___x_1270_ = v___x_1260_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
else
{
lean_dec(v_exponent_1263_);
lean_dec(v_mantissa_1262_);
lean_del_object(v___x_1260_);
goto v___jp_1256_;
}
}
}
else
{
lean_dec(v_x_1255_);
goto v___jp_1256_;
}
v___jp_1256_:
{
lean_object* v___x_1257_; 
v___x_1257_ = ((lean_object*)(l_Lean_Json_getNat_x3f___closed__1));
return v___x_1257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getInt_x3f(lean_object* v_x_1276_){
_start:
{
if (lean_obj_tag(v_x_1276_) == 2)
{
lean_object* v_n_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1290_; 
v_n_1279_ = lean_ctor_get(v_x_1276_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_x_1276_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1281_ = v_x_1276_;
v_isShared_1282_ = v_isSharedCheck_1290_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_n_1279_);
lean_dec(v_x_1276_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1290_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v_mantissa_1283_; lean_object* v_exponent_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; 
v_mantissa_1283_ = lean_ctor_get(v_n_1279_, 0);
lean_inc(v_mantissa_1283_);
v_exponent_1284_ = lean_ctor_get(v_n_1279_, 1);
lean_inc(v_exponent_1284_);
lean_dec_ref(v_n_1279_);
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = lean_nat_dec_eq(v_exponent_1284_, v___x_1285_);
lean_dec(v_exponent_1284_);
if (v___x_1286_ == 0)
{
lean_dec(v_mantissa_1283_);
lean_del_object(v___x_1281_);
goto v___jp_1277_;
}
else
{
lean_object* v___x_1288_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set_tag(v___x_1281_, 1);
lean_ctor_set(v___x_1281_, 0, v_mantissa_1283_);
v___x_1288_ = v___x_1281_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_mantissa_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
else
{
lean_dec(v_x_1276_);
goto v___jp_1277_;
}
v___jp_1277_:
{
lean_object* v___x_1278_; 
v___x_1278_ = ((lean_object*)(l_Lean_Json_getInt_x3f___closed__1));
return v___x_1278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f(lean_object* v_x_1294_){
_start:
{
if (lean_obj_tag(v_x_1294_) == 1)
{
uint8_t v_b_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v_b_1295_ = lean_ctor_get_uint8(v_x_1294_, 0);
v___x_1296_ = lean_box(v_b_1295_);
v___x_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
else
{
lean_object* v___x_1298_; 
v___x_1298_ = ((lean_object*)(l_Lean_Json_getBool_x3f___closed__1));
return v___x_1298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object* v_x_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lean_Json_getBool_x3f(v_x_1299_);
lean_dec(v_x_1299_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getNum_x3f(lean_object* v_x_1304_){
_start:
{
if (lean_obj_tag(v_x_1304_) == 2)
{
lean_object* v_n_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
v_n_1305_ = lean_ctor_get(v_x_1304_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v_x_1304_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1307_ = v_x_1304_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_n_1305_);
lean_dec(v_x_1304_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set_tag(v___x_1307_, 1);
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_n_1305_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
else
{
lean_object* v___x_1313_; 
lean_dec(v_x_1304_);
v___x_1313_ = ((lean_object*)(l_Lean_Json_getNum_x3f___closed__1));
return v___x_1313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f(lean_object* v_x_1317_, lean_object* v_x_1318_){
_start:
{
if (lean_obj_tag(v_x_1317_) == 5)
{
lean_object* v_kvPairs_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1337_; 
v_kvPairs_1319_ = lean_ctor_get(v_x_1317_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1321_ = v_x_1317_;
v_isShared_1322_ = v_isSharedCheck_1337_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_kvPairs_1319_);
lean_dec(v_x_1317_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1337_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_kvPairs_1319_, v_x_1318_);
lean_dec(v_kvPairs_1319_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1324_ = ((lean_object*)(l_Lean_Json_getObjVal_x3f___closed__0));
v___x_1325_ = lean_string_append(v___x_1324_, v_x_1318_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set_tag(v___x_1321_, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1325_);
v___x_1327_ = v___x_1321_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
else
{
lean_object* v_val_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_del_object(v___x_1321_);
v_val_1329_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1323_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_val_1329_);
lean_dec(v___x_1323_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_val_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
else
{
lean_object* v___x_1338_; 
lean_dec(v_x_1317_);
v___x_1338_ = ((lean_object*)(l_Lean_Json_getObjVal_x3f___closed__1));
return v___x_1338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f___boxed(lean_object* v_x_1339_, lean_object* v_x_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lean_Json_getObjVal_x3f(v_x_1339_, v_x_1340_);
lean_dec_ref(v_x_1340_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getArrVal_x3f(lean_object* v_x_1345_, lean_object* v_x_1346_){
_start:
{
if (lean_obj_tag(v_x_1345_) == 4)
{
lean_object* v_elems_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1363_; 
v_elems_1347_ = lean_ctor_get(v_x_1345_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_x_1345_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1349_ = v_x_1345_;
v_isShared_1350_ = v_isSharedCheck_1363_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_elems_1347_);
lean_dec(v_x_1345_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1363_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = lean_array_get_size(v_elems_1347_);
v___x_1352_ = lean_nat_dec_lt(v_x_1346_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1357_; 
lean_dec_ref(v_elems_1347_);
v___x_1353_ = ((lean_object*)(l_Lean_Json_getArrVal_x3f___closed__0));
v___x_1354_ = l_Nat_reprFast(v_x_1346_);
v___x_1355_ = lean_string_append(v___x_1353_, v___x_1354_);
lean_dec_ref(v___x_1354_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set_tag(v___x_1349_, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1355_);
v___x_1357_ = v___x_1349_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v___x_1355_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1359_ = lean_array_fget(v_elems_1347_, v_x_1346_);
lean_dec(v_x_1346_);
lean_dec_ref(v_elems_1347_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set_tag(v___x_1349_, 1);
lean_ctor_set(v___x_1349_, 0, v___x_1359_);
v___x_1361_ = v___x_1349_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1359_);
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
else
{
lean_object* v___x_1364_; 
lean_dec(v_x_1346_);
lean_dec(v_x_1345_);
v___x_1364_ = ((lean_object*)(l_Lean_Json_getArrVal_x3f___closed__1));
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD(lean_object* v_j_1365_, lean_object* v_k_1366_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = l_Lean_Json_getObjVal_x3f(v_j_1365_, v_k_1366_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1368_; 
lean_dec_ref_known(v___x_1367_, 1);
v___x_1368_ = lean_box(0);
return v___x_1368_;
}
else
{
lean_object* v_a_1369_; 
v_a_1369_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1369_);
lean_dec_ref_known(v___x_1367_, 1);
return v_a_1369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD___boxed(lean_object* v_j_1370_, lean_object* v_k_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_Json_getObjValD(v_j_1370_, v_k_1371_);
lean_dec_ref(v_k_1371_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Json_setObjVal_x21_spec__1(lean_object* v_msg_1373_){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_box(0);
v___x_1375_ = lean_panic_fn_borrowed(v___x_1374_, v_msg_1373_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(lean_object* v_msg_1376_){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = lean_box(1);
v___x_1378_ = lean_panic_fn_borrowed(v___x_1377_, v_msg_1376_);
return v___x_1378_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1382_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2));
v___x_1383_ = lean_unsigned_to_nat(35u);
v___x_1384_ = lean_unsigned_to_nat(182u);
v___x_1385_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1));
v___x_1386_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1387_ = l_mkPanicMessageWithDecl(v___x_1386_, v___x_1385_, v___x_1384_, v___x_1383_, v___x_1382_);
return v___x_1387_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1388_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2));
v___x_1389_ = lean_unsigned_to_nat(21u);
v___x_1390_ = lean_unsigned_to_nat(183u);
v___x_1391_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1));
v___x_1392_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1393_ = l_mkPanicMessageWithDecl(v___x_1392_, v___x_1391_, v___x_1390_, v___x_1389_, v___x_1388_);
return v___x_1393_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1396_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6));
v___x_1397_ = lean_unsigned_to_nat(35u);
v___x_1398_ = lean_unsigned_to_nat(276u);
v___x_1399_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5));
v___x_1400_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1401_ = l_mkPanicMessageWithDecl(v___x_1400_, v___x_1399_, v___x_1398_, v___x_1397_, v___x_1396_);
return v___x_1401_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1402_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6));
v___x_1403_ = lean_unsigned_to_nat(21u);
v___x_1404_ = lean_unsigned_to_nat(277u);
v___x_1405_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5));
v___x_1406_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1407_ = l_mkPanicMessageWithDecl(v___x_1406_, v___x_1405_, v___x_1404_, v___x_1403_, v___x_1402_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(lean_object* v_k_1408_, lean_object* v_v_1409_, lean_object* v_t_1410_){
_start:
{
if (lean_obj_tag(v_t_1410_) == 0)
{
lean_object* v_size_1411_; lean_object* v_k_1412_; lean_object* v_v_1413_; lean_object* v_l_1414_; lean_object* v_r_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1771_; 
v_size_1411_ = lean_ctor_get(v_t_1410_, 0);
v_k_1412_ = lean_ctor_get(v_t_1410_, 1);
v_v_1413_ = lean_ctor_get(v_t_1410_, 2);
v_l_1414_ = lean_ctor_get(v_t_1410_, 3);
v_r_1415_ = lean_ctor_get(v_t_1410_, 4);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_t_1410_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1417_ = v_t_1410_;
v_isShared_1418_ = v_isSharedCheck_1771_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_r_1415_);
lean_inc(v_l_1414_);
lean_inc(v_v_1413_);
lean_inc(v_k_1412_);
lean_inc(v_size_1411_);
lean_dec(v_t_1410_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1771_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
uint8_t v___x_1419_; 
v___x_1419_ = lean_string_compare(v_k_1408_, v_k_1412_);
switch(v___x_1419_)
{
case 0:
{
lean_object* v___x_1420_; 
lean_dec(v_size_1411_);
v___x_1420_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1408_, v_v_1409_, v_l_1414_);
if (lean_obj_tag(v_r_1415_) == 0)
{
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_size_1421_; lean_object* v_size_1422_; lean_object* v_k_1423_; lean_object* v_v_1424_; lean_object* v_l_1425_; lean_object* v_r_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v_size_1421_ = lean_ctor_get(v_r_1415_, 0);
v_size_1422_ = lean_ctor_get(v___x_1420_, 0);
v_k_1423_ = lean_ctor_get(v___x_1420_, 1);
v_v_1424_ = lean_ctor_get(v___x_1420_, 2);
v_l_1425_ = lean_ctor_get(v___x_1420_, 3);
v_r_1426_ = lean_ctor_get(v___x_1420_, 4);
lean_inc(v_r_1426_);
v___x_1427_ = lean_unsigned_to_nat(3u);
v___x_1428_ = lean_nat_mul(v___x_1427_, v_size_1421_);
v___x_1429_ = lean_nat_dec_lt(v___x_1428_, v_size_1422_);
lean_dec(v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
lean_dec(v_r_1426_);
v___x_1430_ = lean_unsigned_to_nat(1u);
v___x_1431_ = lean_nat_add(v___x_1430_, v_size_1422_);
v___x_1432_ = lean_nat_add(v___x_1431_, v_size_1421_);
lean_dec(v___x_1431_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 3, v___x_1420_);
lean_ctor_set(v___x_1417_, 0, v___x_1432_);
v___x_1434_ = v___x_1417_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1435_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1435_, 3, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1435_, 4, v_r_1415_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
else
{
lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1507_; 
lean_inc(v_l_1425_);
lean_inc(v_v_1424_);
lean_inc(v_k_1423_);
lean_inc(v_size_1422_);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1507_ == 0)
{
lean_object* v_unused_1508_; lean_object* v_unused_1509_; lean_object* v_unused_1510_; lean_object* v_unused_1511_; lean_object* v_unused_1512_; 
v_unused_1508_ = lean_ctor_get(v___x_1420_, 4);
lean_dec(v_unused_1508_);
v_unused_1509_ = lean_ctor_get(v___x_1420_, 3);
lean_dec(v_unused_1509_);
v_unused_1510_ = lean_ctor_get(v___x_1420_, 2);
lean_dec(v_unused_1510_);
v_unused_1511_ = lean_ctor_get(v___x_1420_, 1);
lean_dec(v_unused_1511_);
v_unused_1512_ = lean_ctor_get(v___x_1420_, 0);
lean_dec(v_unused_1512_);
v___x_1437_ = v___x_1420_;
v_isShared_1438_ = v_isSharedCheck_1507_;
goto v_resetjp_1436_;
}
else
{
lean_dec(v___x_1420_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1507_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
if (lean_obj_tag(v_l_1425_) == 0)
{
if (lean_obj_tag(v_r_1426_) == 0)
{
lean_object* v_size_1439_; lean_object* v_size_1440_; lean_object* v_k_1441_; lean_object* v_v_1442_; lean_object* v_l_1443_; lean_object* v_r_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v_size_1439_ = lean_ctor_get(v_l_1425_, 0);
v_size_1440_ = lean_ctor_get(v_r_1426_, 0);
v_k_1441_ = lean_ctor_get(v_r_1426_, 1);
v_v_1442_ = lean_ctor_get(v_r_1426_, 2);
v_l_1443_ = lean_ctor_get(v_r_1426_, 3);
v_r_1444_ = lean_ctor_get(v_r_1426_, 4);
v___x_1445_ = lean_unsigned_to_nat(2u);
v___x_1446_ = lean_nat_mul(v___x_1445_, v_size_1439_);
v___x_1447_ = lean_nat_dec_lt(v_size_1440_, v___x_1446_);
lean_dec(v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1477_; 
lean_inc(v_r_1444_);
lean_inc(v_l_1443_);
lean_inc(v_v_1442_);
lean_inc(v_k_1441_);
v_isSharedCheck_1477_ = !lean_is_exclusive(v_r_1426_);
if (v_isSharedCheck_1477_ == 0)
{
lean_object* v_unused_1478_; lean_object* v_unused_1479_; lean_object* v_unused_1480_; lean_object* v_unused_1481_; lean_object* v_unused_1482_; 
v_unused_1478_ = lean_ctor_get(v_r_1426_, 4);
lean_dec(v_unused_1478_);
v_unused_1479_ = lean_ctor_get(v_r_1426_, 3);
lean_dec(v_unused_1479_);
v_unused_1480_ = lean_ctor_get(v_r_1426_, 2);
lean_dec(v_unused_1480_);
v_unused_1481_ = lean_ctor_get(v_r_1426_, 1);
lean_dec(v_unused_1481_);
v_unused_1482_ = lean_ctor_get(v_r_1426_, 0);
lean_dec(v_unused_1482_);
v___x_1449_ = v_r_1426_;
v_isShared_1450_ = v_isSharedCheck_1477_;
goto v_resetjp_1448_;
}
else
{
lean_dec(v_r_1426_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1477_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___x_1465_; lean_object* v___y_1467_; 
v___x_1451_ = lean_unsigned_to_nat(1u);
v___x_1452_ = lean_nat_add(v___x_1451_, v_size_1422_);
lean_dec(v_size_1422_);
v___x_1453_ = lean_nat_add(v___x_1452_, v_size_1421_);
lean_dec(v___x_1452_);
v___x_1465_ = lean_nat_add(v___x_1451_, v_size_1439_);
if (lean_obj_tag(v_l_1443_) == 0)
{
lean_object* v_size_1475_; 
v_size_1475_ = lean_ctor_get(v_l_1443_, 0);
lean_inc(v_size_1475_);
v___y_1467_ = v_size_1475_;
goto v___jp_1466_;
}
else
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_unsigned_to_nat(0u);
v___y_1467_ = v___x_1476_;
goto v___jp_1466_;
}
v___jp_1454_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = lean_nat_add(v___y_1455_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec(v___y_1455_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 4, v_r_1415_);
lean_ctor_set(v___x_1449_, 3, v_r_1444_);
lean_ctor_set(v___x_1449_, 2, v_v_1413_);
lean_ctor_set(v___x_1449_, 1, v_k_1412_);
lean_ctor_set(v___x_1449_, 0, v___x_1458_);
v___x_1460_ = v___x_1449_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1458_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1464_, 3, v_r_1444_);
lean_ctor_set(v_reuseFailAlloc_1464_, 4, v_r_1415_);
v___x_1460_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1462_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 4, v___x_1460_);
lean_ctor_set(v___x_1437_, 3, v___y_1456_);
lean_ctor_set(v___x_1437_, 2, v_v_1442_);
lean_ctor_set(v___x_1437_, 1, v_k_1441_);
lean_ctor_set(v___x_1437_, 0, v___x_1453_);
v___x_1462_ = v___x_1437_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1453_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v_k_1441_);
lean_ctor_set(v_reuseFailAlloc_1463_, 2, v_v_1442_);
lean_ctor_set(v_reuseFailAlloc_1463_, 3, v___y_1456_);
lean_ctor_set(v_reuseFailAlloc_1463_, 4, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
v___jp_1466_:
{
lean_object* v___x_1468_; lean_object* v___x_1470_; 
v___x_1468_ = lean_nat_add(v___x_1465_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec(v___x_1465_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v_l_1443_);
lean_ctor_set(v___x_1417_, 3, v_l_1425_);
lean_ctor_set(v___x_1417_, 2, v_v_1424_);
lean_ctor_set(v___x_1417_, 1, v_k_1423_);
lean_ctor_set(v___x_1417_, 0, v___x_1468_);
v___x_1470_ = v___x_1417_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v___x_1468_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v_k_1423_);
lean_ctor_set(v_reuseFailAlloc_1474_, 2, v_v_1424_);
lean_ctor_set(v_reuseFailAlloc_1474_, 3, v_l_1425_);
lean_ctor_set(v_reuseFailAlloc_1474_, 4, v_l_1443_);
v___x_1470_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_nat_add(v___x_1451_, v_size_1421_);
if (lean_obj_tag(v_r_1444_) == 0)
{
lean_object* v_size_1472_; 
v_size_1472_ = lean_ctor_get(v_r_1444_, 0);
lean_inc(v_size_1472_);
v___y_1455_ = v___x_1471_;
v___y_1456_ = v___x_1470_;
v___y_1457_ = v_size_1472_;
goto v___jp_1454_;
}
else
{
lean_object* v___x_1473_; 
v___x_1473_ = lean_unsigned_to_nat(0u);
v___y_1455_ = v___x_1471_;
v___y_1456_ = v___x_1470_;
v___y_1457_ = v___x_1473_;
goto v___jp_1454_;
}
}
}
}
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1489_; 
lean_del_object(v___x_1417_);
v___x_1483_ = lean_unsigned_to_nat(1u);
v___x_1484_ = lean_nat_add(v___x_1483_, v_size_1422_);
lean_dec(v_size_1422_);
v___x_1485_ = lean_nat_add(v___x_1484_, v_size_1421_);
lean_dec(v___x_1484_);
v___x_1486_ = lean_nat_add(v___x_1483_, v_size_1421_);
v___x_1487_ = lean_nat_add(v___x_1486_, v_size_1440_);
lean_dec(v___x_1486_);
lean_inc_ref(v_r_1415_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 4, v_r_1415_);
lean_ctor_set(v___x_1437_, 3, v_r_1426_);
lean_ctor_set(v___x_1437_, 2, v_v_1413_);
lean_ctor_set(v___x_1437_, 1, v_k_1412_);
lean_ctor_set(v___x_1437_, 0, v___x_1487_);
v___x_1489_ = v___x_1437_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1487_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1502_, 3, v_r_1426_);
lean_ctor_set(v_reuseFailAlloc_1502_, 4, v_r_1415_);
v___x_1489_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
v_isSharedCheck_1496_ = !lean_is_exclusive(v_r_1415_);
if (v_isSharedCheck_1496_ == 0)
{
lean_object* v_unused_1497_; lean_object* v_unused_1498_; lean_object* v_unused_1499_; lean_object* v_unused_1500_; lean_object* v_unused_1501_; 
v_unused_1497_ = lean_ctor_get(v_r_1415_, 4);
lean_dec(v_unused_1497_);
v_unused_1498_ = lean_ctor_get(v_r_1415_, 3);
lean_dec(v_unused_1498_);
v_unused_1499_ = lean_ctor_get(v_r_1415_, 2);
lean_dec(v_unused_1499_);
v_unused_1500_ = lean_ctor_get(v_r_1415_, 1);
lean_dec(v_unused_1500_);
v_unused_1501_ = lean_ctor_get(v_r_1415_, 0);
lean_dec(v_unused_1501_);
v___x_1491_ = v_r_1415_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_dec(v_r_1415_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 4, v___x_1489_);
lean_ctor_set(v___x_1491_, 3, v_l_1425_);
lean_ctor_set(v___x_1491_, 2, v_v_1424_);
lean_ctor_set(v___x_1491_, 1, v_k_1423_);
lean_ctor_set(v___x_1491_, 0, v___x_1485_);
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_k_1423_);
lean_ctor_set(v_reuseFailAlloc_1495_, 2, v_v_1424_);
lean_ctor_set(v_reuseFailAlloc_1495_, 3, v_l_1425_);
lean_ctor_set(v_reuseFailAlloc_1495_, 4, v___x_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
}
else
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
lean_dec_ref_known(v_l_1425_, 5);
lean_del_object(v___x_1437_);
lean_dec(v_v_1424_);
lean_dec(v_k_1423_);
lean_dec(v_size_1422_);
lean_dec_ref_known(v_r_1415_, 5);
lean_del_object(v___x_1417_);
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
v___x_1503_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3);
v___x_1504_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1503_);
return v___x_1504_;
}
}
else
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_del_object(v___x_1437_);
lean_dec(v_r_1426_);
lean_dec(v_v_1424_);
lean_dec(v_k_1423_);
lean_dec(v_size_1422_);
lean_dec_ref_known(v_r_1415_, 5);
lean_del_object(v___x_1417_);
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
v___x_1505_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4);
v___x_1506_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1505_);
return v___x_1506_;
}
}
}
}
else
{
lean_object* v_size_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1517_; 
v_size_1513_ = lean_ctor_get(v_r_1415_, 0);
v___x_1514_ = lean_unsigned_to_nat(1u);
v___x_1515_ = lean_nat_add(v___x_1514_, v_size_1513_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 3, v___x_1420_);
lean_ctor_set(v___x_1417_, 0, v___x_1515_);
v___x_1517_ = v___x_1417_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
lean_ctor_set(v_reuseFailAlloc_1518_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1518_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1518_, 3, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1518_, 4, v_r_1415_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
else
{
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_l_1519_; 
v_l_1519_ = lean_ctor_get(v___x_1420_, 3);
if (lean_obj_tag(v_l_1519_) == 0)
{
lean_object* v_r_1520_; 
lean_inc_ref(v_l_1519_);
v_r_1520_ = lean_ctor_get(v___x_1420_, 4);
lean_inc(v_r_1520_);
if (lean_obj_tag(v_r_1520_) == 0)
{
lean_object* v_size_1521_; lean_object* v_k_1522_; lean_object* v_v_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1537_; 
v_size_1521_ = lean_ctor_get(v___x_1420_, 0);
v_k_1522_ = lean_ctor_get(v___x_1420_, 1);
v_v_1523_ = lean_ctor_get(v___x_1420_, 2);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1537_ == 0)
{
lean_object* v_unused_1538_; lean_object* v_unused_1539_; 
v_unused_1538_ = lean_ctor_get(v___x_1420_, 4);
lean_dec(v_unused_1538_);
v_unused_1539_ = lean_ctor_get(v___x_1420_, 3);
lean_dec(v_unused_1539_);
v___x_1525_ = v___x_1420_;
v_isShared_1526_ = v_isSharedCheck_1537_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_v_1523_);
lean_inc(v_k_1522_);
lean_inc(v_size_1521_);
lean_dec(v___x_1420_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1537_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v_size_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v_size_1527_ = lean_ctor_get(v_r_1520_, 0);
v___x_1528_ = lean_unsigned_to_nat(1u);
v___x_1529_ = lean_nat_add(v___x_1528_, v_size_1521_);
lean_dec(v_size_1521_);
v___x_1530_ = lean_nat_add(v___x_1528_, v_size_1527_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 4, v_r_1415_);
lean_ctor_set(v___x_1525_, 3, v_r_1520_);
lean_ctor_set(v___x_1525_, 2, v_v_1413_);
lean_ctor_set(v___x_1525_, 1, v_k_1412_);
lean_ctor_set(v___x_1525_, 0, v___x_1530_);
v___x_1532_ = v___x_1525_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_r_1520_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v_r_1415_);
v___x_1532_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1532_);
lean_ctor_set(v___x_1417_, 3, v_l_1519_);
lean_ctor_set(v___x_1417_, 2, v_v_1523_);
lean_ctor_set(v___x_1417_, 1, v_k_1522_);
lean_ctor_set(v___x_1417_, 0, v___x_1529_);
v___x_1534_ = v___x_1417_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1529_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_k_1522_);
lean_ctor_set(v_reuseFailAlloc_1535_, 2, v_v_1523_);
lean_ctor_set(v_reuseFailAlloc_1535_, 3, v_l_1519_);
lean_ctor_set(v_reuseFailAlloc_1535_, 4, v___x_1532_);
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
lean_object* v_k_1540_; lean_object* v_v_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1553_; 
v_k_1540_ = lean_ctor_get(v___x_1420_, 1);
v_v_1541_ = lean_ctor_get(v___x_1420_, 2);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1553_ == 0)
{
lean_object* v_unused_1554_; lean_object* v_unused_1555_; lean_object* v_unused_1556_; 
v_unused_1554_ = lean_ctor_get(v___x_1420_, 4);
lean_dec(v_unused_1554_);
v_unused_1555_ = lean_ctor_get(v___x_1420_, 3);
lean_dec(v_unused_1555_);
v_unused_1556_ = lean_ctor_get(v___x_1420_, 0);
lean_dec(v_unused_1556_);
v___x_1543_ = v___x_1420_;
v_isShared_1544_ = v_isSharedCheck_1553_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_v_1541_);
lean_inc(v_k_1540_);
lean_dec(v___x_1420_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1553_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1548_; 
v___x_1545_ = lean_unsigned_to_nat(3u);
v___x_1546_ = lean_unsigned_to_nat(1u);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 3, v_r_1520_);
lean_ctor_set(v___x_1543_, 2, v_v_1413_);
lean_ctor_set(v___x_1543_, 1, v_k_1412_);
lean_ctor_set(v___x_1543_, 0, v___x_1546_);
v___x_1548_ = v___x_1543_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1546_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1552_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1552_, 3, v_r_1520_);
lean_ctor_set(v_reuseFailAlloc_1552_, 4, v_r_1520_);
v___x_1548_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
lean_object* v___x_1550_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1548_);
lean_ctor_set(v___x_1417_, 3, v_l_1519_);
lean_ctor_set(v___x_1417_, 2, v_v_1541_);
lean_ctor_set(v___x_1417_, 1, v_k_1540_);
lean_ctor_set(v___x_1417_, 0, v___x_1545_);
v___x_1550_ = v___x_1417_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1545_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v_k_1540_);
lean_ctor_set(v_reuseFailAlloc_1551_, 2, v_v_1541_);
lean_ctor_set(v_reuseFailAlloc_1551_, 3, v_l_1519_);
lean_ctor_set(v_reuseFailAlloc_1551_, 4, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
}
else
{
lean_object* v_r_1557_; 
v_r_1557_ = lean_ctor_get(v___x_1420_, 4);
lean_inc(v_r_1557_);
if (lean_obj_tag(v_r_1557_) == 0)
{
lean_object* v_k_1558_; lean_object* v_v_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1583_; 
lean_inc(v_l_1519_);
v_k_1558_ = lean_ctor_get(v___x_1420_, 1);
v_v_1559_ = lean_ctor_get(v___x_1420_, 2);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; lean_object* v_unused_1585_; lean_object* v_unused_1586_; 
v_unused_1584_ = lean_ctor_get(v___x_1420_, 4);
lean_dec(v_unused_1584_);
v_unused_1585_ = lean_ctor_get(v___x_1420_, 3);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v___x_1420_, 0);
lean_dec(v_unused_1586_);
v___x_1561_ = v___x_1420_;
v_isShared_1562_ = v_isSharedCheck_1583_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_v_1559_);
lean_inc(v_k_1558_);
lean_dec(v___x_1420_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1583_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_k_1563_; lean_object* v_v_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1579_; 
v_k_1563_ = lean_ctor_get(v_r_1557_, 1);
v_v_1564_ = lean_ctor_get(v_r_1557_, 2);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_r_1557_);
if (v_isSharedCheck_1579_ == 0)
{
lean_object* v_unused_1580_; lean_object* v_unused_1581_; lean_object* v_unused_1582_; 
v_unused_1580_ = lean_ctor_get(v_r_1557_, 4);
lean_dec(v_unused_1580_);
v_unused_1581_ = lean_ctor_get(v_r_1557_, 3);
lean_dec(v_unused_1581_);
v_unused_1582_ = lean_ctor_get(v_r_1557_, 0);
lean_dec(v_unused_1582_);
v___x_1566_ = v_r_1557_;
v_isShared_1567_ = v_isSharedCheck_1579_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_v_1564_);
lean_inc(v_k_1563_);
lean_dec(v_r_1557_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1579_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
v___x_1568_ = lean_unsigned_to_nat(3u);
v___x_1569_ = lean_unsigned_to_nat(1u);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 4, v_l_1519_);
lean_ctor_set(v___x_1566_, 3, v_l_1519_);
lean_ctor_set(v___x_1566_, 2, v_v_1559_);
lean_ctor_set(v___x_1566_, 1, v_k_1558_);
lean_ctor_set(v___x_1566_, 0, v___x_1569_);
v___x_1571_ = v___x_1566_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1578_, 1, v_k_1558_);
lean_ctor_set(v_reuseFailAlloc_1578_, 2, v_v_1559_);
lean_ctor_set(v_reuseFailAlloc_1578_, 3, v_l_1519_);
lean_ctor_set(v_reuseFailAlloc_1578_, 4, v_l_1519_);
v___x_1571_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
lean_object* v___x_1573_; 
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 4, v_l_1519_);
lean_ctor_set(v___x_1561_, 2, v_v_1413_);
lean_ctor_set(v___x_1561_, 1, v_k_1412_);
lean_ctor_set(v___x_1561_, 0, v___x_1569_);
v___x_1573_ = v___x_1561_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1577_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1577_, 3, v_l_1519_);
lean_ctor_set(v_reuseFailAlloc_1577_, 4, v_l_1519_);
v___x_1573_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
lean_object* v___x_1575_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1573_);
lean_ctor_set(v___x_1417_, 3, v___x_1571_);
lean_ctor_set(v___x_1417_, 2, v_v_1564_);
lean_ctor_set(v___x_1417_, 1, v_k_1563_);
lean_ctor_set(v___x_1417_, 0, v___x_1568_);
v___x_1575_ = v___x_1417_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1568_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_k_1563_);
lean_ctor_set(v_reuseFailAlloc_1576_, 2, v_v_1564_);
lean_ctor_set(v_reuseFailAlloc_1576_, 3, v___x_1571_);
lean_ctor_set(v_reuseFailAlloc_1576_, 4, v___x_1573_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
}
else
{
lean_object* v___x_1587_; lean_object* v___x_1589_; 
v___x_1587_ = lean_unsigned_to_nat(2u);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v_r_1557_);
lean_ctor_set(v___x_1417_, 3, v___x_1420_);
lean_ctor_set(v___x_1417_, 0, v___x_1587_);
v___x_1589_ = v___x_1417_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1590_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1590_, 3, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1590_, 4, v_r_1557_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
else
{
lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1591_ = lean_unsigned_to_nat(1u);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1420_);
lean_ctor_set(v___x_1417_, 3, v___x_1420_);
lean_ctor_set(v___x_1417_, 0, v___x_1591_);
v___x_1593_ = v___x_1417_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1594_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1594_, 3, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1594_, 4, v___x_1420_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
case 1:
{
lean_object* v___x_1596_; 
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 2, v_v_1409_);
lean_ctor_set(v___x_1417_, 1, v_k_1408_);
v___x_1596_ = v___x_1417_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_size_1411_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_k_1408_);
lean_ctor_set(v_reuseFailAlloc_1597_, 2, v_v_1409_);
lean_ctor_set(v_reuseFailAlloc_1597_, 3, v_l_1414_);
lean_ctor_set(v_reuseFailAlloc_1597_, 4, v_r_1415_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
default: 
{
lean_object* v___x_1598_; 
lean_dec(v_size_1411_);
v___x_1598_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1408_, v_v_1409_, v_r_1415_);
if (lean_obj_tag(v_l_1414_) == 0)
{
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_size_1599_; lean_object* v_size_1600_; lean_object* v_k_1601_; lean_object* v_v_1602_; lean_object* v_l_1603_; lean_object* v_r_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; uint8_t v___x_1607_; 
v_size_1599_ = lean_ctor_get(v_l_1414_, 0);
v_size_1600_ = lean_ctor_get(v___x_1598_, 0);
v_k_1601_ = lean_ctor_get(v___x_1598_, 1);
v_v_1602_ = lean_ctor_get(v___x_1598_, 2);
v_l_1603_ = lean_ctor_get(v___x_1598_, 3);
lean_inc(v_l_1603_);
v_r_1604_ = lean_ctor_get(v___x_1598_, 4);
v___x_1605_ = lean_unsigned_to_nat(3u);
v___x_1606_ = lean_nat_mul(v___x_1605_, v_size_1599_);
v___x_1607_ = lean_nat_dec_lt(v___x_1606_, v_size_1600_);
lean_dec(v___x_1606_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1612_; 
lean_dec(v_l_1603_);
v___x_1608_ = lean_unsigned_to_nat(1u);
v___x_1609_ = lean_nat_add(v___x_1608_, v_size_1599_);
v___x_1610_ = lean_nat_add(v___x_1609_, v_size_1600_);
lean_dec(v___x_1609_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1598_);
lean_ctor_set(v___x_1417_, 0, v___x_1610_);
v___x_1612_ = v___x_1417_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v_l_1414_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v___x_1598_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
else
{
lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1683_; 
lean_inc(v_r_1604_);
lean_inc(v_v_1602_);
lean_inc(v_k_1601_);
lean_inc(v_size_1600_);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1683_ == 0)
{
lean_object* v_unused_1684_; lean_object* v_unused_1685_; lean_object* v_unused_1686_; lean_object* v_unused_1687_; lean_object* v_unused_1688_; 
v_unused_1684_ = lean_ctor_get(v___x_1598_, 4);
lean_dec(v_unused_1684_);
v_unused_1685_ = lean_ctor_get(v___x_1598_, 3);
lean_dec(v_unused_1685_);
v_unused_1686_ = lean_ctor_get(v___x_1598_, 2);
lean_dec(v_unused_1686_);
v_unused_1687_ = lean_ctor_get(v___x_1598_, 1);
lean_dec(v_unused_1687_);
v_unused_1688_ = lean_ctor_get(v___x_1598_, 0);
lean_dec(v_unused_1688_);
v___x_1615_ = v___x_1598_;
v_isShared_1616_ = v_isSharedCheck_1683_;
goto v_resetjp_1614_;
}
else
{
lean_dec(v___x_1598_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1683_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
if (lean_obj_tag(v_l_1603_) == 0)
{
if (lean_obj_tag(v_r_1604_) == 0)
{
lean_object* v_size_1617_; lean_object* v_k_1618_; lean_object* v_v_1619_; lean_object* v_l_1620_; lean_object* v_r_1621_; lean_object* v_size_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; 
v_size_1617_ = lean_ctor_get(v_l_1603_, 0);
v_k_1618_ = lean_ctor_get(v_l_1603_, 1);
v_v_1619_ = lean_ctor_get(v_l_1603_, 2);
v_l_1620_ = lean_ctor_get(v_l_1603_, 3);
v_r_1621_ = lean_ctor_get(v_l_1603_, 4);
v_size_1622_ = lean_ctor_get(v_r_1604_, 0);
v___x_1623_ = lean_unsigned_to_nat(2u);
v___x_1624_ = lean_nat_mul(v___x_1623_, v_size_1622_);
v___x_1625_ = lean_nat_dec_lt(v_size_1617_, v___x_1624_);
lean_dec(v___x_1624_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1654_; 
lean_inc(v_r_1621_);
lean_inc(v_l_1620_);
lean_inc(v_v_1619_);
lean_inc(v_k_1618_);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_l_1603_);
if (v_isSharedCheck_1654_ == 0)
{
lean_object* v_unused_1655_; lean_object* v_unused_1656_; lean_object* v_unused_1657_; lean_object* v_unused_1658_; lean_object* v_unused_1659_; 
v_unused_1655_ = lean_ctor_get(v_l_1603_, 4);
lean_dec(v_unused_1655_);
v_unused_1656_ = lean_ctor_get(v_l_1603_, 3);
lean_dec(v_unused_1656_);
v_unused_1657_ = lean_ctor_get(v_l_1603_, 2);
lean_dec(v_unused_1657_);
v_unused_1658_ = lean_ctor_get(v_l_1603_, 1);
lean_dec(v_unused_1658_);
v_unused_1659_ = lean_ctor_get(v_l_1603_, 0);
lean_dec(v_unused_1659_);
v___x_1627_ = v_l_1603_;
v_isShared_1628_ = v_isSharedCheck_1654_;
goto v_resetjp_1626_;
}
else
{
lean_dec(v_l_1603_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1654_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1644_; 
v___x_1629_ = lean_unsigned_to_nat(1u);
v___x_1630_ = lean_nat_add(v___x_1629_, v_size_1599_);
v___x_1631_ = lean_nat_add(v___x_1630_, v_size_1600_);
lean_dec(v_size_1600_);
if (lean_obj_tag(v_l_1620_) == 0)
{
lean_object* v_size_1652_; 
v_size_1652_ = lean_ctor_get(v_l_1620_, 0);
lean_inc(v_size_1652_);
v___y_1644_ = v_size_1652_;
goto v___jp_1643_;
}
else
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_unsigned_to_nat(0u);
v___y_1644_ = v___x_1653_;
goto v___jp_1643_;
}
v___jp_1632_:
{
lean_object* v___x_1636_; lean_object* v___x_1638_; 
v___x_1636_ = lean_nat_add(v___y_1634_, v___y_1635_);
lean_dec(v___y_1635_);
lean_dec(v___y_1634_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 4, v_r_1604_);
lean_ctor_set(v___x_1627_, 3, v_r_1621_);
lean_ctor_set(v___x_1627_, 2, v_v_1602_);
lean_ctor_set(v___x_1627_, 1, v_k_1601_);
lean_ctor_set(v___x_1627_, 0, v___x_1636_);
v___x_1638_ = v___x_1627_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_k_1601_);
lean_ctor_set(v_reuseFailAlloc_1642_, 2, v_v_1602_);
lean_ctor_set(v_reuseFailAlloc_1642_, 3, v_r_1621_);
lean_ctor_set(v_reuseFailAlloc_1642_, 4, v_r_1604_);
v___x_1638_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 4, v___x_1638_);
lean_ctor_set(v___x_1615_, 3, v___y_1633_);
lean_ctor_set(v___x_1615_, 2, v_v_1619_);
lean_ctor_set(v___x_1615_, 1, v_k_1618_);
lean_ctor_set(v___x_1615_, 0, v___x_1631_);
v___x_1640_ = v___x_1615_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1631_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_k_1618_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_v_1619_);
lean_ctor_set(v_reuseFailAlloc_1641_, 3, v___y_1633_);
lean_ctor_set(v_reuseFailAlloc_1641_, 4, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
v___jp_1643_:
{
lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1645_ = lean_nat_add(v___x_1630_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec(v___x_1630_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v_l_1620_);
lean_ctor_set(v___x_1417_, 0, v___x_1645_);
v___x_1647_ = v___x_1417_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1645_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1651_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1651_, 3, v_l_1414_);
lean_ctor_set(v_reuseFailAlloc_1651_, 4, v_l_1620_);
v___x_1647_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_nat_add(v___x_1629_, v_size_1622_);
if (lean_obj_tag(v_r_1621_) == 0)
{
lean_object* v_size_1649_; 
v_size_1649_ = lean_ctor_get(v_r_1621_, 0);
lean_inc(v_size_1649_);
v___y_1633_ = v___x_1647_;
v___y_1634_ = v___x_1648_;
v___y_1635_ = v_size_1649_;
goto v___jp_1632_;
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_unsigned_to_nat(0u);
v___y_1633_ = v___x_1647_;
v___y_1634_ = v___x_1648_;
v___y_1635_ = v___x_1650_;
goto v___jp_1632_;
}
}
}
}
}
else
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
lean_del_object(v___x_1417_);
v___x_1660_ = lean_unsigned_to_nat(1u);
v___x_1661_ = lean_nat_add(v___x_1660_, v_size_1599_);
v___x_1662_ = lean_nat_add(v___x_1661_, v_size_1600_);
lean_dec(v_size_1600_);
v___x_1663_ = lean_nat_add(v___x_1661_, v_size_1617_);
lean_dec(v___x_1661_);
lean_inc_ref(v_l_1414_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 4, v_l_1603_);
lean_ctor_set(v___x_1615_, 3, v_l_1414_);
lean_ctor_set(v___x_1615_, 2, v_v_1413_);
lean_ctor_set(v___x_1615_, 1, v_k_1412_);
lean_ctor_set(v___x_1615_, 0, v___x_1663_);
v___x_1665_ = v___x_1615_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1678_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1678_, 3, v_l_1414_);
lean_ctor_set(v_reuseFailAlloc_1678_, 4, v_l_1603_);
v___x_1665_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
v_isSharedCheck_1672_ = !lean_is_exclusive(v_l_1414_);
if (v_isSharedCheck_1672_ == 0)
{
lean_object* v_unused_1673_; lean_object* v_unused_1674_; lean_object* v_unused_1675_; lean_object* v_unused_1676_; lean_object* v_unused_1677_; 
v_unused_1673_ = lean_ctor_get(v_l_1414_, 4);
lean_dec(v_unused_1673_);
v_unused_1674_ = lean_ctor_get(v_l_1414_, 3);
lean_dec(v_unused_1674_);
v_unused_1675_ = lean_ctor_get(v_l_1414_, 2);
lean_dec(v_unused_1675_);
v_unused_1676_ = lean_ctor_get(v_l_1414_, 1);
lean_dec(v_unused_1676_);
v_unused_1677_ = lean_ctor_get(v_l_1414_, 0);
lean_dec(v_unused_1677_);
v___x_1667_ = v_l_1414_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_dec(v_l_1414_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 4, v_r_1604_);
lean_ctor_set(v___x_1667_, 3, v___x_1665_);
lean_ctor_set(v___x_1667_, 2, v_v_1602_);
lean_ctor_set(v___x_1667_, 1, v_k_1601_);
lean_ctor_set(v___x_1667_, 0, v___x_1662_);
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_k_1601_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_v_1602_);
lean_ctor_set(v_reuseFailAlloc_1671_, 3, v___x_1665_);
lean_ctor_set(v_reuseFailAlloc_1671_, 4, v_r_1604_);
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
else
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
lean_dec_ref_known(v_l_1603_, 5);
lean_del_object(v___x_1615_);
lean_dec(v_v_1602_);
lean_dec(v_k_1601_);
lean_dec(v_size_1600_);
lean_dec_ref_known(v_l_1414_, 5);
lean_del_object(v___x_1417_);
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
v___x_1679_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7);
v___x_1680_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1679_);
return v___x_1680_;
}
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
lean_del_object(v___x_1615_);
lean_dec(v_r_1604_);
lean_dec(v_v_1602_);
lean_dec(v_k_1601_);
lean_dec(v_size_1600_);
lean_dec_ref_known(v_l_1414_, 5);
lean_del_object(v___x_1417_);
lean_dec(v_v_1413_);
lean_dec(v_k_1412_);
v___x_1681_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8);
v___x_1682_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1681_);
return v___x_1682_;
}
}
}
}
else
{
lean_object* v_size_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1693_; 
v_size_1689_ = lean_ctor_get(v_l_1414_, 0);
v___x_1690_ = lean_unsigned_to_nat(1u);
v___x_1691_ = lean_nat_add(v___x_1690_, v_size_1689_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1598_);
lean_ctor_set(v___x_1417_, 0, v___x_1691_);
v___x_1693_ = v___x_1417_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1694_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1694_, 3, v_l_1414_);
lean_ctor_set(v_reuseFailAlloc_1694_, 4, v___x_1598_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
else
{
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_l_1695_; 
v_l_1695_ = lean_ctor_get(v___x_1598_, 3);
lean_inc(v_l_1695_);
if (lean_obj_tag(v_l_1695_) == 0)
{
lean_object* v_r_1696_; 
v_r_1696_ = lean_ctor_get(v___x_1598_, 4);
lean_inc(v_r_1696_);
if (lean_obj_tag(v_r_1696_) == 0)
{
lean_object* v_size_1697_; lean_object* v_k_1698_; lean_object* v_v_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1713_; 
v_size_1697_ = lean_ctor_get(v___x_1598_, 0);
v_k_1698_ = lean_ctor_get(v___x_1598_, 1);
v_v_1699_ = lean_ctor_get(v___x_1598_, 2);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; lean_object* v_unused_1715_; 
v_unused_1714_ = lean_ctor_get(v___x_1598_, 4);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v___x_1598_, 3);
lean_dec(v_unused_1715_);
v___x_1701_ = v___x_1598_;
v_isShared_1702_ = v_isSharedCheck_1713_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_v_1699_);
lean_inc(v_k_1698_);
lean_inc(v_size_1697_);
lean_dec(v___x_1598_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1713_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v_size_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1708_; 
v_size_1703_ = lean_ctor_get(v_l_1695_, 0);
v___x_1704_ = lean_unsigned_to_nat(1u);
v___x_1705_ = lean_nat_add(v___x_1704_, v_size_1697_);
lean_dec(v_size_1697_);
v___x_1706_ = lean_nat_add(v___x_1704_, v_size_1703_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 4, v_l_1695_);
lean_ctor_set(v___x_1701_, 3, v_l_1414_);
lean_ctor_set(v___x_1701_, 2, v_v_1413_);
lean_ctor_set(v___x_1701_, 1, v_k_1412_);
lean_ctor_set(v___x_1701_, 0, v___x_1706_);
v___x_1708_ = v___x_1701_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1712_, 3, v_l_1414_);
lean_ctor_set(v_reuseFailAlloc_1712_, 4, v_l_1695_);
v___x_1708_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
lean_object* v___x_1710_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v_r_1696_);
lean_ctor_set(v___x_1417_, 3, v___x_1708_);
lean_ctor_set(v___x_1417_, 2, v_v_1699_);
lean_ctor_set(v___x_1417_, 1, v_k_1698_);
lean_ctor_set(v___x_1417_, 0, v___x_1705_);
v___x_1710_ = v___x_1417_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1705_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_k_1698_);
lean_ctor_set(v_reuseFailAlloc_1711_, 2, v_v_1699_);
lean_ctor_set(v_reuseFailAlloc_1711_, 3, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1711_, 4, v_r_1696_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
else
{
lean_object* v_k_1716_; lean_object* v_v_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1741_; 
v_k_1716_ = lean_ctor_get(v___x_1598_, 1);
v_v_1717_ = lean_ctor_get(v___x_1598_, 2);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1741_ == 0)
{
lean_object* v_unused_1742_; lean_object* v_unused_1743_; lean_object* v_unused_1744_; 
v_unused_1742_ = lean_ctor_get(v___x_1598_, 4);
lean_dec(v_unused_1742_);
v_unused_1743_ = lean_ctor_get(v___x_1598_, 3);
lean_dec(v_unused_1743_);
v_unused_1744_ = lean_ctor_get(v___x_1598_, 0);
lean_dec(v_unused_1744_);
v___x_1719_ = v___x_1598_;
v_isShared_1720_ = v_isSharedCheck_1741_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_v_1717_);
lean_inc(v_k_1716_);
lean_dec(v___x_1598_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1741_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v_k_1721_; lean_object* v_v_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1737_; 
v_k_1721_ = lean_ctor_get(v_l_1695_, 1);
v_v_1722_ = lean_ctor_get(v_l_1695_, 2);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_l_1695_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; lean_object* v_unused_1739_; lean_object* v_unused_1740_; 
v_unused_1738_ = lean_ctor_get(v_l_1695_, 4);
lean_dec(v_unused_1738_);
v_unused_1739_ = lean_ctor_get(v_l_1695_, 3);
lean_dec(v_unused_1739_);
v_unused_1740_ = lean_ctor_get(v_l_1695_, 0);
lean_dec(v_unused_1740_);
v___x_1724_ = v_l_1695_;
v_isShared_1725_ = v_isSharedCheck_1737_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_v_1722_);
lean_inc(v_k_1721_);
lean_dec(v_l_1695_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1737_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1726_ = lean_unsigned_to_nat(3u);
v___x_1727_ = lean_unsigned_to_nat(1u);
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 4, v_r_1696_);
lean_ctor_set(v___x_1724_, 3, v_r_1696_);
lean_ctor_set(v___x_1724_, 2, v_v_1413_);
lean_ctor_set(v___x_1724_, 1, v_k_1412_);
lean_ctor_set(v___x_1724_, 0, v___x_1727_);
v___x_1729_ = v___x_1724_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1727_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1736_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1736_, 3, v_r_1696_);
lean_ctor_set(v_reuseFailAlloc_1736_, 4, v_r_1696_);
v___x_1729_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1731_; 
if (v_isShared_1720_ == 0)
{
lean_ctor_set(v___x_1719_, 3, v_r_1696_);
lean_ctor_set(v___x_1719_, 0, v___x_1727_);
v___x_1731_ = v___x_1719_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1727_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v_k_1716_);
lean_ctor_set(v_reuseFailAlloc_1735_, 2, v_v_1717_);
lean_ctor_set(v_reuseFailAlloc_1735_, 3, v_r_1696_);
lean_ctor_set(v_reuseFailAlloc_1735_, 4, v_r_1696_);
v___x_1731_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1733_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1731_);
lean_ctor_set(v___x_1417_, 3, v___x_1729_);
lean_ctor_set(v___x_1417_, 2, v_v_1722_);
lean_ctor_set(v___x_1417_, 1, v_k_1721_);
lean_ctor_set(v___x_1417_, 0, v___x_1726_);
v___x_1733_ = v___x_1417_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v_k_1721_);
lean_ctor_set(v_reuseFailAlloc_1734_, 2, v_v_1722_);
lean_ctor_set(v_reuseFailAlloc_1734_, 3, v___x_1729_);
lean_ctor_set(v_reuseFailAlloc_1734_, 4, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1745_; 
v_r_1745_ = lean_ctor_get(v___x_1598_, 4);
lean_inc(v_r_1745_);
if (lean_obj_tag(v_r_1745_) == 0)
{
lean_object* v_k_1746_; lean_object* v_v_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1759_; 
v_k_1746_ = lean_ctor_get(v___x_1598_, 1);
v_v_1747_ = lean_ctor_get(v___x_1598_, 2);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1759_ == 0)
{
lean_object* v_unused_1760_; lean_object* v_unused_1761_; lean_object* v_unused_1762_; 
v_unused_1760_ = lean_ctor_get(v___x_1598_, 4);
lean_dec(v_unused_1760_);
v_unused_1761_ = lean_ctor_get(v___x_1598_, 3);
lean_dec(v_unused_1761_);
v_unused_1762_ = lean_ctor_get(v___x_1598_, 0);
lean_dec(v_unused_1762_);
v___x_1749_ = v___x_1598_;
v_isShared_1750_ = v_isSharedCheck_1759_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_v_1747_);
lean_inc(v_k_1746_);
lean_dec(v___x_1598_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1759_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1751_ = lean_unsigned_to_nat(3u);
v___x_1752_ = lean_unsigned_to_nat(1u);
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 4, v_l_1695_);
lean_ctor_set(v___x_1749_, 2, v_v_1413_);
lean_ctor_set(v___x_1749_, 1, v_k_1412_);
lean_ctor_set(v___x_1749_, 0, v___x_1752_);
v___x_1754_ = v___x_1749_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1752_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1758_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1758_, 3, v_l_1695_);
lean_ctor_set(v_reuseFailAlloc_1758_, 4, v_l_1695_);
v___x_1754_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v_r_1745_);
lean_ctor_set(v___x_1417_, 3, v___x_1754_);
lean_ctor_set(v___x_1417_, 2, v_v_1747_);
lean_ctor_set(v___x_1417_, 1, v_k_1746_);
lean_ctor_set(v___x_1417_, 0, v___x_1751_);
v___x_1756_ = v___x_1417_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1757_, 1, v_k_1746_);
lean_ctor_set(v_reuseFailAlloc_1757_, 2, v_v_1747_);
lean_ctor_set(v_reuseFailAlloc_1757_, 3, v___x_1754_);
lean_ctor_set(v_reuseFailAlloc_1757_, 4, v_r_1745_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1765_; 
v___x_1763_ = lean_unsigned_to_nat(2u);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1598_);
lean_ctor_set(v___x_1417_, 3, v_r_1745_);
lean_ctor_set(v___x_1417_, 0, v___x_1763_);
v___x_1765_ = v___x_1417_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1766_, 3, v_r_1745_);
lean_ctor_set(v_reuseFailAlloc_1766_, 4, v___x_1598_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1769_; 
v___x_1767_ = lean_unsigned_to_nat(1u);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1598_);
lean_ctor_set(v___x_1417_, 3, v___x_1598_);
lean_ctor_set(v___x_1417_, 0, v___x_1767_);
v___x_1769_ = v___x_1417_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v_k_1412_);
lean_ctor_set(v_reuseFailAlloc_1770_, 2, v_v_1413_);
lean_ctor_set(v_reuseFailAlloc_1770_, 3, v___x_1598_);
lean_ctor_set(v_reuseFailAlloc_1770_, 4, v___x_1598_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_unsigned_to_nat(1u);
v___x_1773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
lean_ctor_set(v___x_1773_, 1, v_k_1408_);
lean_ctor_set(v___x_1773_, 2, v_v_1409_);
lean_ctor_set(v___x_1773_, 3, v_t_1410_);
lean_ctor_set(v___x_1773_, 4, v_t_1410_);
return v___x_1773_;
}
}
}
static lean_object* _init_l_Lean_Json_setObjVal_x21___closed__2(void){
_start:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1776_ = ((lean_object*)(l_Lean_Json_setObjVal_x21___closed__1));
v___x_1777_ = lean_unsigned_to_nat(21u);
v___x_1778_ = lean_unsigned_to_nat(292u);
v___x_1779_ = ((lean_object*)(l_Lean_Json_setObjVal_x21___closed__0));
v___x_1780_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0));
v___x_1781_ = l_mkPanicMessageWithDecl(v___x_1780_, v___x_1779_, v___x_1778_, v___x_1777_, v___x_1776_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_setObjVal_x21(lean_object* v_x_1782_, lean_object* v_x_1783_, lean_object* v_x_1784_){
_start:
{
if (lean_obj_tag(v_x_1782_) == 5)
{
lean_object* v_kvPairs_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1793_; 
v_kvPairs_1785_ = lean_ctor_get(v_x_1782_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v_x_1782_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1787_ = v_x_1782_;
v_isShared_1788_ = v_isSharedCheck_1793_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_kvPairs_1785_);
lean_dec(v_x_1782_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1793_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1789_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_x_1783_, v_x_1784_, v_kvPairs_1785_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1789_);
v___x_1791_ = v___x_1787_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec(v_x_1784_);
lean_dec_ref(v_x_1783_);
lean_dec(v_x_1782_);
v___x_1794_ = lean_obj_once(&l_Lean_Json_setObjVal_x21___closed__2, &l_Lean_Json_setObjVal_x21___closed__2_once, _init_l_Lean_Json_setObjVal_x21___closed__2);
v___x_1795_ = l_panic___at___00Lean_Json_setObjVal_x21_spec__1(v___x_1794_);
return v___x_1795_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0(lean_object* v_00_u03b2_1796_, lean_object* v_msg_1797_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v_msg_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0(lean_object* v_00_u03b2_1799_, lean_object* v_k_1800_, lean_object* v_v_1801_, lean_object* v_t_1802_){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1800_, v_v_1801_, v_t_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(lean_object* v_init_1804_, lean_object* v_x_1805_){
_start:
{
if (lean_obj_tag(v_x_1805_) == 0)
{
lean_object* v_k_1806_; lean_object* v_v_1807_; lean_object* v_l_1808_; lean_object* v_r_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v_k_1806_ = lean_ctor_get(v_x_1805_, 1);
lean_inc(v_k_1806_);
v_v_1807_ = lean_ctor_get(v_x_1805_, 2);
lean_inc(v_v_1807_);
v_l_1808_ = lean_ctor_get(v_x_1805_, 3);
lean_inc(v_l_1808_);
v_r_1809_ = lean_ctor_get(v_x_1805_, 4);
lean_inc(v_r_1809_);
lean_dec_ref_known(v_x_1805_, 5);
v___x_1810_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(v_init_1804_, v_l_1808_);
v___x_1811_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1806_, v_v_1807_, v___x_1810_);
v_init_1804_ = v___x_1811_;
v_x_1805_ = v_r_1809_;
goto _start;
}
else
{
return v_init_1804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_mergeObj(lean_object* v_x_1813_, lean_object* v_x_1814_){
_start:
{
if (lean_obj_tag(v_x_1813_) == 5)
{
if (lean_obj_tag(v_x_1814_) == 5)
{
lean_object* v_kvPairs_1815_; lean_object* v_kvPairs_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1824_; 
v_kvPairs_1815_ = lean_ctor_get(v_x_1813_, 0);
lean_inc(v_kvPairs_1815_);
lean_dec_ref_known(v_x_1813_, 1);
v_kvPairs_1816_ = lean_ctor_get(v_x_1814_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_x_1814_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1818_ = v_x_1814_;
v_isShared_1819_ = v_isSharedCheck_1824_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_kvPairs_1816_);
lean_dec(v_x_1814_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1824_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1820_; lean_object* v___x_1822_; 
v___x_1820_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(v_kvPairs_1815_, v_kvPairs_1816_);
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1820_);
v___x_1822_ = v___x_1818_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
else
{
lean_dec_ref_known(v_x_1813_, 1);
return v_x_1814_;
}
}
else
{
lean_dec(v_x_1813_);
return v_x_1814_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0(lean_object* v_init_1825_, lean_object* v_t_1826_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(v_init_1825_, v_t_1826_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl(lean_object* v_x_1828_){
_start:
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_obj_tag_nat(v_x_1828_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl___boxed(lean_object* v_x_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_Json_Structured_ctorIdx___impl(v_x_1830_);
lean_dec_ref(v_x_1830_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___redArg(lean_object* v_t_1832_, lean_object* v_k_1833_){
_start:
{
if (lean_obj_tag(v_t_1832_) == 0)
{
lean_object* v_elems_1834_; lean_object* v___x_1835_; 
v_elems_1834_ = lean_ctor_get(v_t_1832_, 0);
lean_inc_ref(v_elems_1834_);
lean_dec_ref_known(v_t_1832_, 1);
v___x_1835_ = lean_apply_1(v_k_1833_, v_elems_1834_);
return v___x_1835_;
}
else
{
lean_object* v_kvPairs_1836_; lean_object* v___x_1837_; 
v_kvPairs_1836_ = lean_ctor_get(v_t_1832_, 0);
lean_inc(v_kvPairs_1836_);
lean_dec_ref_known(v_t_1832_, 1);
v___x_1837_ = lean_apply_1(v_k_1833_, v_kvPairs_1836_);
return v___x_1837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim(lean_object* v_motive_1838_, lean_object* v_ctorIdx_1839_, lean_object* v_t_1840_, lean_object* v_h_1841_, lean_object* v_k_1842_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1840_, v_k_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___boxed(lean_object* v_motive_1844_, lean_object* v_ctorIdx_1845_, lean_object* v_t_1846_, lean_object* v_h_1847_, lean_object* v_k_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Json_Structured_ctorElim(v_motive_1844_, v_ctorIdx_1845_, v_t_1846_, v_h_1847_, v_k_1848_);
lean_dec(v_ctorIdx_1845_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim___redArg(lean_object* v_t_1850_, lean_object* v_arr_1851_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1850_, v_arr_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim(lean_object* v_motive_1853_, lean_object* v_t_1854_, lean_object* v_h_1855_, lean_object* v_arr_1856_){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1854_, v_arr_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim___redArg(lean_object* v_t_1858_, lean_object* v_obj_1859_){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1858_, v_obj_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim(lean_object* v_motive_1861_, lean_object* v_t_1862_, lean_object* v_h_1863_, lean_object* v_obj_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1862_, v_obj_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeArrayStructured___lam__0(lean_object* v_elems_1866_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1867_, 0, v_elems_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeRawStringStructured___lam__0(lean_object* v_kvPairs_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_kvPairs_1870_);
return v___x_1871_;
}
}
lean_object* runtime_initialize_Init_Data_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_OfScientific(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeMap_Raw_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Substring(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_OfScientific(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeMap_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Substring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_JsonNumber_ltProp = _init_l_Lean_JsonNumber_ltProp();
lean_mark_persistent(l_Lean_JsonNumber_ltProp);
l_Lean_JsonNumber_instInhabited = _init_l_Lean_JsonNumber_instInhabited();
lean_mark_persistent(l_Lean_JsonNumber_instInhabited);
l_Lean_instInhabitedJson_default = _init_l_Lean_instInhabitedJson_default();
lean_mark_persistent(l_Lean_instInhabitedJson_default);
l_Lean_instInhabitedJson = _init_l_Lean_instInhabitedJson();
lean_mark_persistent(l_Lean_instInhabitedJson);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range(uint8_t builtin);
lean_object* initialize_Init_Data_OfScientific(uint8_t builtin);
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Std_Data_TreeMap_Raw_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_String(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* initialize_Init_Data_String_Substring(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_OfScientific(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeMap_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Substring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
