// Lean compiler output
// Module: Std.Time.Duration
// Imports: public import Std.Time.Date public import Init.Data.String.Basic public import Init.Data.String.Length
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
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Std_Time_Second_instReprOffset___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object*);
lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Std_Time_Hour_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object*);
lean_object* l_Std_Time_Second_instOrdOffset___aux__1___boxed(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Minute_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed(lean_object*, lean_object*);
lean_object* l_compareLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprDuration_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "nano"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__12;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "proof"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__14 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__14_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__16_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__17_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__18;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__19;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__20 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__17_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__21 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__21_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprDuration_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprDuration___closed__0 = (const lean_object*)&l_Std_Time_instReprDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprDuration = (const lean_object*)&l_Std_Time_instReprDuration___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instToStringDuration_leftPad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instToStringDuration_leftPad___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration_leftPad___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instToStringDuration___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_instToStringDuration___lam__1___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instToStringDuration___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Std_Time_instToStringDuration___lam__2___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration___lam__2___closed__0_value;
static lean_once_cell_t l_Std_Time_instToStringDuration___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration___lam__2___closed__1;
static const lean_string_object l_Std_Time_instToStringDuration___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Time_instToStringDuration___lam__2___closed__2 = (const lean_object*)&l_Std_Time_instToStringDuration___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__2(lean_object*);
static const lean_closure_object l_Std_Time_instToStringDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instToStringDuration___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instToStringDuration___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instToStringDuration = (const lean_object*)&l_Std_Time_instToStringDuration___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprDuration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprDuration__1___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprDuration__1___closed__0 = (const lean_object*)&l_Std_Time_instReprDuration__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprDuration__1 = (const lean_object*)&l_Std_Time_instReprDuration__1___closed__0_value;
static lean_once_cell_t l_Std_Time_instInhabitedDuration___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedDuration___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedDuration___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedDuration___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedDuration;
LEAN_EXPORT lean_object* l_Std_Time_instOfNatDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdDuration___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__0 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__0_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdDuration___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__1 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__1_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instOrdOffset___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__2 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__2_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__3 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__3_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdDuration___closed__2_value),((lean_object*)&l_Std_Time_instOrdDuration___closed__0_value)} };
static const lean_object* l_Std_Time_instOrdDuration___closed__4 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__4_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdDuration___closed__3_value),((lean_object*)&l_Std_Time_instOrdDuration___closed__1_value)} };
static const lean_object* l_Std_Time_instOrdDuration___closed__5 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__5_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareLex___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdDuration___closed__4_value),((lean_object*)&l_Std_Time_instOrdDuration___closed__5_value)} };
static const lean_object* l_Std_Time_instOrdDuration___closed__6 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Time_instOrdDuration = (const lean_object*)&l_Std_Time_instOrdDuration___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_neg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Duration_ofNanoseconds_spec__1(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_ofNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_ofNanoseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Duration_ofNanoseconds_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_ofMillisecond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_ofMillisecond___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Duration_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_isZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instLE;
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instLT;
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toDays___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_addWeeks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_addWeeks___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset = (const lean_object*)&l_Std_Time_Duration_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset = (const lean_object*)&l_Std_Time_Duration_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__1 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__1 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__2 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__2 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__3 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__3 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__4 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__4 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__5 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__5 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__6 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__6 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSub___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSub___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSub = (const lean_object*)&l_Std_Time_Duration_instHSub___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAdd___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAdd___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAdd = (const lean_object*)&l_Std_Time_Duration_instHAdd___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_ofNanoseconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset = (const lean_object*)&l_Std_Time_Duration_instCoeOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_ofSeconds, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_Offset_toSeconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__0_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__2___closed__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__2 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__1_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Hour_Offset_toSeconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__0_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__3___closed__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__3 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__1_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_Offset_toSeconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_Offset_toDays___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__1_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__1_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__2 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__2_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__2_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__3 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__3_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__4 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__3_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__0_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__5 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__5___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHMulInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHMulInt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHMulInt___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHMulInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHMulInt = (const lean_object*)&l_Std_Time_Duration_instHMulInt___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHMulInt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHMulInt__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHMulInt__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHMulInt__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHMulInt__1 = (const lean_object*)&l_Std_Time_Duration_instHMulInt__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHMulNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHMulNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHMulNat___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHMulNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHMulNat = (const lean_object*)&l_Std_Time_Duration_instHMulNat___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHMulNat__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHMulNat__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHMulNat__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHMulNat__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHMulNat__1 = (const lean_object*)&l_Std_Time_Duration_instHMulNat__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivInt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivInt___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHDivInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHDivInt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHDivInt___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHDivInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHDivInt = (const lean_object*)&l_Std_Time_Duration_instHDivInt___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivNat___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivNat___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHDivNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHDivNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHDivNat___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHDivNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHDivNat = (const lean_object*)&l_Std_Time_Duration_instHDivNat___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHAddPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddPlainTime___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddPlainTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddPlainTime = (const lean_object*)&l_Std_Time_Duration_instHAddPlainTime___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHSubPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubPlainTime___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubPlainTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubPlainTime = (const lean_object*)&l_Std_Time_Duration_instHSubPlainTime___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprDuration_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(8u);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__0));
v___x_34_ = lean_string_length(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__18, &l_Std_Time_instReprDuration_repr___redArg___closed__18_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__18);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___redArg(lean_object* v_x_41_){
_start:
{
lean_object* v_second_42_; lean_object* v_nano_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_84_; 
v_second_42_ = lean_ctor_get(v_x_41_, 0);
v_nano_43_ = lean_ctor_get(v_x_41_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_41_);
if (v_isSharedCheck_84_ == 0)
{
v___x_45_ = v_x_41_;
v_isShared_46_ = v_isSharedCheck_84_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_nano_43_);
lean_inc(v_second_42_);
lean_dec(v_x_41_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_84_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_53_; 
v___x_47_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__5));
v___x_48_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__6));
v___x_49_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__7, &l_Std_Time_instReprDuration_repr___redArg___closed__7_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__7);
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = l_Std_Time_Second_instReprOffset___lam__0(v_second_42_, v___x_50_);
lean_dec(v_second_42_);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 4);
lean_ctor_set(v___x_45_, 1, v___x_51_);
lean_ctor_set(v___x_45_, 0, v___x_49_);
v___x_53_ = v___x_45_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_51_);
v___x_53_ = v_reuseFailAlloc_83_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_54_ = 0;
v___x_55_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_55_, sizeof(void*)*1, v___x_54_);
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_48_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__9));
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_box(1);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__11));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_47_);
v___x_64_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__12, &l_Std_Time_instReprDuration_repr___redArg___closed__12_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__12);
v___x_65_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v_nano_43_, v___x_50_);
lean_dec(v_nano_43_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___x_54_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_63_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_57_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_59_);
v___x_71_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__14));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_47_);
v___x_74_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__16));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__19, &l_Std_Time_instReprDuration_repr___redArg___closed__19_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__19);
v___x_77_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__20));
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_75_);
v___x_79_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__21));
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_76_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_54_);
return v___x_82_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Std_Time_instReprDuration_repr___redArg(v_x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___boxed(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Std_Time_instReprDuration_repr(v_x_88_, v_prec_89_);
lean_dec(v_prec_89_);
return v_res_90_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_second_95_; lean_object* v_nano_96_; lean_object* v_second_97_; lean_object* v_nano_98_; uint8_t v___x_99_; 
v_second_95_ = lean_ctor_get(v_x_93_, 0);
v_nano_96_ = lean_ctor_get(v_x_93_, 1);
v_second_97_ = lean_ctor_get(v_x_94_, 0);
v_nano_98_ = lean_ctor_get(v_x_94_, 1);
v___x_99_ = lean_int_dec_eq(v_second_95_, v_second_97_);
if (v___x_99_ == 0)
{
return v___x_99_;
}
else
{
uint8_t v___x_100_; 
v___x_100_ = lean_int_dec_eq(v_nano_96_, v_nano_98_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration_decEq___boxed(lean_object* v_x_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_101_, v_x_102_);
lean_dec_ref(v_x_102_);
lean_dec_ref(v_x_101_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration(lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_105_, v_x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = l_Std_Time_instDecidableEqDuration(v_x_108_, v_x_109_);
lean_dec_ref(v_x_109_);
lean_dec_ref(v_x_108_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
lean_object* v_zero_114_; uint8_t v_isZero_115_; 
v_zero_114_ = lean_unsigned_to_nat(0u);
v_isZero_115_ = lean_nat_dec_eq(v_x_112_, v_zero_114_);
if (v_isZero_115_ == 1)
{
lean_dec(v_x_112_);
return v_x_113_;
}
else
{
uint32_t v___x_116_; lean_object* v_one_117_; lean_object* v_n_118_; lean_object* v___x_119_; 
v___x_116_ = 48;
v_one_117_ = lean_unsigned_to_nat(1u);
v_n_118_ = lean_nat_sub(v_x_112_, v_one_117_);
lean_dec(v_x_112_);
v___x_119_ = lean_string_push(v_x_113_, v___x_116_);
v_x_112_ = v_n_118_;
v_x_113_ = v___x_119_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object* v_n_122_, lean_object* v_s_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_124_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___x_125_ = lean_string_length(v_s_123_);
v___x_126_ = lean_nat_sub(v_n_122_, v___x_125_);
v___x_127_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(v___x_126_, v___x_124_);
v___x_128_ = lean_string_append(v___x_127_, v_s_123_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad___boxed(lean_object* v_n_129_, lean_object* v_s_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Std_Time_instToStringDuration_leftPad(v_n_129_, v_s_130_);
lean_dec_ref(v_s_130_);
lean_dec(v_n_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__0(lean_object* v_second_132_, lean_object* v_nano_133_, lean_object* v_00___134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v_second_132_);
lean_ctor_set(v___x_136_, 1, v_nano_133_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_135_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__1(lean_object* v_second_139_, lean_object* v_nano_140_, lean_object* v_00___141_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_142_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__1___closed__0));
v___x_143_ = lean_int_neg(v_second_139_);
v___x_144_ = lean_int_neg(v_nano_140_);
v___x_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_143_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__1___boxed(lean_object* v_second_147_, lean_object* v_nano_148_, lean_object* v_00___149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Std_Time_instToStringDuration___lam__1(v_second_147_, v_nano_148_, v_00___149_);
lean_dec(v_nano_148_);
lean_dec(v_second_147_);
return v_res_150_;
}
}
static lean_object* _init_l_Std_Time_instToStringDuration___lam__2___closed__1(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_unsigned_to_nat(0u);
v___x_153_ = lean_nat_to_int(v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__2(lean_object* v_s_155_){
_start:
{
lean_object* v___y_157_; lean_object* v___y_158_; lean_object* v_second_162_; lean_object* v_nano_163_; lean_object* v___y_165_; lean_object* v___x_180_; uint8_t v___x_181_; 
v_second_162_ = lean_ctor_get(v_s_155_, 0);
lean_inc(v_second_162_);
v_nano_163_ = lean_ctor_get(v_s_155_, 1);
lean_inc(v_nano_163_);
lean_dec_ref(v_s_155_);
v___x_180_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_181_ = lean_int_dec_lt(v___x_180_, v_second_162_);
if (v___x_181_ == 0)
{
uint8_t v___x_182_; 
v___x_182_ = lean_int_dec_lt(v_second_162_, v___x_180_);
if (v___x_182_ == 0)
{
uint8_t v___x_183_; 
v___x_183_ = lean_int_dec_lt(v_nano_163_, v___x_180_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_box(0);
lean_inc(v_nano_163_);
v___x_185_ = l_Std_Time_instToStringDuration___lam__0(v_second_162_, v_nano_163_, v___x_184_);
v___y_165_ = v___x_185_;
goto v___jp_164_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = l_Std_Time_instToStringDuration___lam__1(v_second_162_, v_nano_163_, v___x_186_);
lean_dec(v_second_162_);
v___y_165_ = v___x_187_;
goto v___jp_164_;
}
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_box(0);
v___x_189_ = l_Std_Time_instToStringDuration___lam__1(v_second_162_, v_nano_163_, v___x_188_);
lean_dec(v_second_162_);
v___y_165_ = v___x_189_;
goto v___jp_164_;
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_box(0);
lean_inc(v_nano_163_);
v___x_191_ = l_Std_Time_instToStringDuration___lam__0(v_second_162_, v_nano_163_, v___x_190_);
v___y_165_ = v___x_191_;
goto v___jp_164_;
}
v___jp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_string_append(v___y_157_, v___y_158_);
lean_dec_ref(v___y_158_);
v___x_160_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__2___closed__0));
v___x_161_ = lean_string_append(v___x_159_, v___x_160_);
return v___x_161_;
}
v___jp_164_:
{
lean_object* v_snd_166_; lean_object* v_fst_167_; lean_object* v_fst_168_; lean_object* v_snd_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_snd_166_ = lean_ctor_get(v___y_165_, 1);
lean_inc(v_snd_166_);
v_fst_167_ = lean_ctor_get(v___y_165_, 0);
lean_inc(v_fst_167_);
lean_dec_ref(v___y_165_);
v_fst_168_ = lean_ctor_get(v_snd_166_, 0);
lean_inc(v_fst_168_);
v_snd_169_ = lean_ctor_get(v_snd_166_, 1);
lean_inc(v_snd_169_);
lean_dec(v_snd_166_);
v___x_170_ = l_Int_repr(v_fst_168_);
lean_dec(v_fst_168_);
v___x_171_ = lean_string_append(v_fst_167_, v___x_170_);
lean_dec_ref(v___x_170_);
v___x_172_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_173_ = lean_int_dec_eq(v_nano_163_, v___x_172_);
lean_dec(v_nano_163_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_174_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__2___closed__2));
v___x_175_ = lean_unsigned_to_nat(9u);
v___x_176_ = l_Int_repr(v_snd_169_);
lean_dec(v_snd_169_);
v___x_177_ = l_Std_Time_instToStringDuration_leftPad(v___x_175_, v___x_176_);
lean_dec_ref(v___x_176_);
v___x_178_ = lean_string_append(v___x_174_, v___x_177_);
lean_dec_ref(v___x_177_);
v___y_157_ = v___x_171_;
v___y_158_ = v___x_178_;
goto v___jp_156_;
}
else
{
lean_object* v___x_179_; 
lean_dec(v_snd_169_);
v___x_179_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___y_157_ = v___x_171_;
v___y_158_ = v___x_179_;
goto v___jp_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__2(lean_object* v_s_194_, lean_object* v___y_195_){
_start:
{
lean_object* v___y_197_; lean_object* v___y_198_; lean_object* v_second_204_; lean_object* v_nano_205_; lean_object* v___y_207_; lean_object* v___x_222_; uint8_t v___x_223_; 
v_second_204_ = lean_ctor_get(v_s_194_, 0);
lean_inc(v_second_204_);
v_nano_205_ = lean_ctor_get(v_s_194_, 1);
lean_inc(v_nano_205_);
lean_dec_ref(v_s_194_);
v___x_222_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_223_ = lean_int_dec_lt(v___x_222_, v_second_204_);
if (v___x_223_ == 0)
{
uint8_t v___x_224_; 
v___x_224_ = lean_int_dec_lt(v_second_204_, v___x_222_);
if (v___x_224_ == 0)
{
uint8_t v___x_225_; 
v___x_225_ = lean_int_dec_lt(v_nano_205_, v___x_222_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_box(0);
lean_inc(v_nano_205_);
v___x_227_ = l_Std_Time_instToStringDuration___lam__0(v_second_204_, v_nano_205_, v___x_226_);
v___y_207_ = v___x_227_;
goto v___jp_206_;
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(0);
v___x_229_ = l_Std_Time_instToStringDuration___lam__1(v_second_204_, v_nano_205_, v___x_228_);
lean_dec(v_second_204_);
v___y_207_ = v___x_229_;
goto v___jp_206_;
}
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_box(0);
v___x_231_ = l_Std_Time_instToStringDuration___lam__1(v_second_204_, v_nano_205_, v___x_230_);
lean_dec(v_second_204_);
v___y_207_ = v___x_231_;
goto v___jp_206_;
}
}
else
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_box(0);
lean_inc(v_nano_205_);
v___x_233_ = l_Std_Time_instToStringDuration___lam__0(v_second_204_, v_nano_205_, v___x_232_);
v___y_207_ = v___x_233_;
goto v___jp_206_;
}
v___jp_196_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_199_ = lean_string_append(v___y_197_, v___y_198_);
lean_dec_ref(v___y_198_);
v___x_200_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__2___closed__0));
v___x_201_ = lean_string_append(v___x_199_, v___x_200_);
v___x_202_ = l_String_quote(v___x_201_);
v___x_203_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
v___jp_206_:
{
lean_object* v_snd_208_; lean_object* v_fst_209_; lean_object* v_fst_210_; lean_object* v_snd_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_snd_208_ = lean_ctor_get(v___y_207_, 1);
lean_inc(v_snd_208_);
v_fst_209_ = lean_ctor_get(v___y_207_, 0);
lean_inc(v_fst_209_);
lean_dec_ref(v___y_207_);
v_fst_210_ = lean_ctor_get(v_snd_208_, 0);
lean_inc(v_fst_210_);
v_snd_211_ = lean_ctor_get(v_snd_208_, 1);
lean_inc(v_snd_211_);
lean_dec(v_snd_208_);
v___x_212_ = l_Int_repr(v_fst_210_);
lean_dec(v_fst_210_);
v___x_213_ = lean_string_append(v_fst_209_, v___x_212_);
lean_dec_ref(v___x_212_);
v___x_214_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_215_ = lean_int_dec_eq(v_nano_205_, v___x_214_);
lean_dec(v_nano_205_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_216_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__2___closed__2));
v___x_217_ = lean_unsigned_to_nat(9u);
v___x_218_ = l_Int_repr(v_snd_211_);
lean_dec(v_snd_211_);
v___x_219_ = l_Std_Time_instToStringDuration_leftPad(v___x_217_, v___x_218_);
lean_dec_ref(v___x_218_);
v___x_220_ = lean_string_append(v___x_216_, v___x_219_);
lean_dec_ref(v___x_219_);
v___y_197_ = v___x_213_;
v___y_198_ = v___x_220_;
goto v___jp_196_;
}
else
{
lean_object* v___x_221_; 
lean_dec(v_snd_211_);
v___x_221_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___y_197_ = v___x_213_;
v___y_198_ = v___x_221_;
goto v___jp_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__2___boxed(lean_object* v_s_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Std_Time_instReprDuration__1___lam__2(v_s_234_, v___y_235_);
lean_dec(v___y_235_);
return v_res_236_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration___closed__0(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_nat_to_int(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration___closed__1(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_obj_once(&l_Std_Time_instInhabitedDuration___closed__0, &l_Std_Time_instInhabitedDuration___closed__0_once, _init_l_Std_Time_instInhabitedDuration___closed__0);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration(void){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_obj_once(&l_Std_Time_instInhabitedDuration___closed__1, &l_Std_Time_instInhabitedDuration___closed__1_once, _init_l_Std_Time_instInhabitedDuration___closed__1);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOfNatDuration(lean_object* v_n_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_nat_to_int(v_n_244_);
v___x_246_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0(lean_object* v_x_248_){
_start:
{
lean_object* v_second_249_; 
v_second_249_ = lean_ctor_get(v_x_248_, 0);
lean_inc(v_second_249_);
return v_second_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0___boxed(lean_object* v_x_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Std_Time_instOrdDuration___lam__0(v_x_250_);
lean_dec_ref(v_x_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1(lean_object* v_x_252_){
_start:
{
lean_object* v_nano_253_; 
v_nano_253_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_nano_253_);
return v_nano_253_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1___boxed(lean_object* v_x_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_Time_instOrdDuration___lam__1(v_x_254_);
lean_dec_ref(v_x_254_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_neg(lean_object* v_duration_270_){
_start:
{
lean_object* v_second_271_; lean_object* v_nano_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_281_; 
v_second_271_ = lean_ctor_get(v_duration_270_, 0);
v_nano_272_ = lean_ctor_get(v_duration_270_, 1);
v_isSharedCheck_281_ = !lean_is_exclusive(v_duration_270_);
if (v_isSharedCheck_281_ == 0)
{
v___x_274_ = v_duration_270_;
v_isShared_275_ = v_isSharedCheck_281_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_nano_272_);
lean_inc(v_second_271_);
lean_dec(v_duration_270_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_281_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_276_ = lean_int_neg(v_second_271_);
lean_dec(v_second_271_);
v___x_277_ = lean_int_neg(v_nano_272_);
lean_dec(v_nano_272_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_277_);
lean_ctor_set(v___x_274_, 0, v___x_276_);
v___x_279_ = v___x_274_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofSeconds(lean_object* v_s_282_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v_s_282_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Duration_ofNanoseconds_spec__1(lean_object* v_a_285_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = l_Rat_ofInt(v_a_285_);
return v___x_286_;
}
}
static lean_object* _init_l_Std_Time_Duration_ofNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(1000000000u);
v___x_288_ = lean_nat_to_int(v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object* v_s_289_){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_290_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_291_ = lean_int_div(v_s_289_, v___x_290_);
v___x_292_ = lean_int_mod(v_s_289_, v___x_290_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds___boxed(lean_object* v_s_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Std_Time_Duration_ofNanoseconds(v_s_294_);
lean_dec(v_s_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Duration_ofNanoseconds_spec__0(lean_object* v_a_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_nat_to_int(v_a_296_);
v___x_298_ = l_Rat_ofInt(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Std_Time_Duration_ofMillisecond___closed__0(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_unsigned_to_nat(1000000u);
v___x_300_ = lean_nat_to_int(v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond(lean_object* v_s_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_303_ = lean_int_mul(v_s_301_, v___x_302_);
v___x_304_ = l_Std_Time_Duration_ofNanoseconds(v___x_303_);
lean_dec(v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond___boxed(lean_object* v_s_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Std_Time_Duration_ofMillisecond(v_s_305_);
lean_dec(v_s_305_);
return v_res_306_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_isZero(lean_object* v_d_307_){
_start:
{
lean_object* v_second_308_; lean_object* v_nano_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_second_308_ = lean_ctor_get(v_d_307_, 0);
v_nano_309_ = lean_ctor_get(v_d_307_, 1);
v___x_310_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_311_ = lean_int_dec_eq(v_second_308_, v___x_310_);
if (v___x_311_ == 0)
{
return v___x_311_;
}
else
{
uint8_t v___x_312_; 
v___x_312_ = lean_int_dec_eq(v_nano_309_, v___x_310_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_isZero___boxed(lean_object* v_d_313_){
_start:
{
uint8_t v_res_314_; lean_object* v_r_315_; 
v_res_314_ = l_Std_Time_Duration_isZero(v_d_313_);
lean_dec_ref(v_d_313_);
v_r_315_ = lean_box(v_res_314_);
return v_r_315_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds(lean_object* v_duration_316_){
_start:
{
lean_object* v_second_317_; 
v_second_317_ = lean_ctor_get(v_duration_316_, 0);
lean_inc(v_second_317_);
return v_second_317_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds___boxed(lean_object* v_duration_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Std_Time_Duration_toSeconds(v_duration_318_);
lean_dec_ref(v_duration_318_);
return v_res_319_;
}
}
static lean_object* _init_l_Std_Time_Duration_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(1000u);
v___x_321_ = lean_nat_to_int(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds(lean_object* v_duration_322_){
_start:
{
lean_object* v_second_323_; lean_object* v_nano_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v_millis_329_; 
v_second_323_ = lean_ctor_get(v_duration_322_, 0);
v_nano_324_ = lean_ctor_get(v_duration_322_, 1);
v___x_325_ = lean_obj_once(&l_Std_Time_Duration_toMilliseconds___closed__0, &l_Std_Time_Duration_toMilliseconds___closed__0_once, _init_l_Std_Time_Duration_toMilliseconds___closed__0);
v___x_326_ = lean_int_mul(v_second_323_, v___x_325_);
v___x_327_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_328_ = lean_int_ediv(v_nano_324_, v___x_327_);
v_millis_329_ = lean_int_add(v___x_326_, v___x_328_);
lean_dec(v___x_328_);
lean_dec(v___x_326_);
return v_millis_329_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds___boxed(lean_object* v_duration_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_Time_Duration_toMilliseconds(v_duration_330_);
lean_dec_ref(v_duration_330_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds(lean_object* v_duration_332_){
_start:
{
lean_object* v_second_333_; lean_object* v_nano_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_nanos_337_; 
v_second_333_ = lean_ctor_get(v_duration_332_, 0);
v_nano_334_ = lean_ctor_get(v_duration_332_, 1);
v___x_335_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_336_ = lean_int_mul(v_second_333_, v___x_335_);
v_nanos_337_ = lean_int_add(v___x_336_, v_nano_334_);
lean_dec(v___x_336_);
return v_nanos_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds___boxed(lean_object* v_duration_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Std_Time_Duration_toNanoseconds(v_duration_338_);
lean_dec_ref(v_duration_338_);
return v_res_339_;
}
}
static lean_object* _init_l_Std_Time_Duration_instLE(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = lean_box(0);
return v___x_340_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLe(lean_object* v_x_341_, lean_object* v_y_342_){
_start:
{
lean_object* v_second_343_; lean_object* v_nano_344_; lean_object* v_second_345_; lean_object* v_nano_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v_nanos_349_; lean_object* v___x_350_; lean_object* v_nanos_351_; uint8_t v___x_352_; 
v_second_343_ = lean_ctor_get(v_x_341_, 0);
v_nano_344_ = lean_ctor_get(v_x_341_, 1);
v_second_345_ = lean_ctor_get(v_y_342_, 0);
v_nano_346_ = lean_ctor_get(v_y_342_, 1);
v___x_347_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_348_ = lean_int_mul(v_second_343_, v___x_347_);
v_nanos_349_ = lean_int_add(v___x_348_, v_nano_344_);
lean_dec(v___x_348_);
v___x_350_ = lean_int_mul(v_second_345_, v___x_347_);
v_nanos_351_ = lean_int_add(v___x_350_, v_nano_346_);
lean_dec(v___x_350_);
v___x_352_ = lean_int_dec_le(v_nanos_349_, v_nanos_351_);
lean_dec(v_nanos_351_);
lean_dec(v_nanos_349_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLe___boxed(lean_object* v_x_353_, lean_object* v_y_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Std_Time_Duration_instDecidableLe(v_x_353_, v_y_354_);
lean_dec_ref(v_y_354_);
lean_dec_ref(v_x_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
static lean_object* _init_l_Std_Time_Duration_instLT(void){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_box(0);
return v___x_357_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLt(lean_object* v_x_358_, lean_object* v_y_359_){
_start:
{
lean_object* v_second_360_; lean_object* v_nano_361_; lean_object* v_second_362_; lean_object* v_nano_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v_nanos_366_; lean_object* v___x_367_; lean_object* v_nanos_368_; uint8_t v___x_369_; 
v_second_360_ = lean_ctor_get(v_x_358_, 0);
v_nano_361_ = lean_ctor_get(v_x_358_, 1);
v_second_362_ = lean_ctor_get(v_y_359_, 0);
v_nano_363_ = lean_ctor_get(v_y_359_, 1);
v___x_364_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_365_ = lean_int_mul(v_second_360_, v___x_364_);
v_nanos_366_ = lean_int_add(v___x_365_, v_nano_361_);
lean_dec(v___x_365_);
v___x_367_ = lean_int_mul(v_second_362_, v___x_364_);
v_nanos_368_ = lean_int_add(v___x_367_, v_nano_363_);
lean_dec(v___x_367_);
v___x_369_ = lean_int_dec_lt(v_nanos_366_, v_nanos_368_);
lean_dec(v_nanos_368_);
lean_dec(v_nanos_366_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLt___boxed(lean_object* v_x_370_, lean_object* v_y_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l_Std_Time_Duration_instDecidableLt(v_x_370_, v_y_371_);
lean_dec_ref(v_y_371_);
lean_dec_ref(v_x_370_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
static lean_object* _init_l_Std_Time_Duration_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_unsigned_to_nat(60u);
v___x_375_ = lean_nat_to_int(v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes(lean_object* v_tm_376_){
_start:
{
lean_object* v_second_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_second_377_ = lean_ctor_get(v_tm_376_, 0);
v___x_378_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v___x_379_ = lean_int_div(v_second_377_, v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes___boxed(lean_object* v_tm_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Std_Time_Duration_toMinutes(v_tm_380_);
lean_dec_ref(v_tm_380_);
return v_res_381_;
}
}
static lean_object* _init_l_Std_Time_Duration_toDays___closed__0(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_unsigned_to_nat(86400u);
v___x_383_ = lean_nat_to_int(v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays(lean_object* v_tm_384_){
_start:
{
lean_object* v_second_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_second_385_ = lean_ctor_get(v_tm_384_, 0);
v___x_386_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v___x_387_ = lean_int_div(v_second_385_, v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays___boxed(lean_object* v_tm_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Std_Time_Duration_toDays(v_tm_388_);
lean_dec_ref(v_tm_388_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents(lean_object* v_secs_390_, lean_object* v_nanos_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_392_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_393_ = lean_int_mul(v_secs_390_, v___x_392_);
v___x_394_ = l_Std_Time_Nanosecond_Span_toOffset(v_nanos_391_);
v___x_395_ = lean_int_add(v___x_393_, v___x_394_);
lean_dec(v___x_394_);
lean_dec(v___x_393_);
v___x_396_ = l_Std_Time_Duration_ofNanoseconds(v___x_395_);
lean_dec(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents___boxed(lean_object* v_secs_397_, lean_object* v_nanos_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Std_Time_Duration_fromComponents(v_secs_397_, v_nanos_398_);
lean_dec(v_nanos_398_);
lean_dec(v_secs_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_add(lean_object* v_t_u2081_400_, lean_object* v_t_u2082_401_){
_start:
{
lean_object* v_second_402_; lean_object* v_nano_403_; lean_object* v_second_404_; lean_object* v_nano_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_nanos_408_; lean_object* v___x_409_; lean_object* v_nanos_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v_second_402_ = lean_ctor_get(v_t_u2081_400_, 0);
v_nano_403_ = lean_ctor_get(v_t_u2081_400_, 1);
v_second_404_ = lean_ctor_get(v_t_u2082_401_, 0);
v_nano_405_ = lean_ctor_get(v_t_u2082_401_, 1);
v___x_406_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_407_ = lean_int_mul(v_second_402_, v___x_406_);
v_nanos_408_ = lean_int_add(v___x_407_, v_nano_403_);
lean_dec(v___x_407_);
v___x_409_ = lean_int_mul(v_second_404_, v___x_406_);
v_nanos_410_ = lean_int_add(v___x_409_, v_nano_405_);
lean_dec(v___x_409_);
v___x_411_ = lean_int_add(v_nanos_408_, v_nanos_410_);
lean_dec(v_nanos_410_);
lean_dec(v_nanos_408_);
v___x_412_ = l_Std_Time_Duration_ofNanoseconds(v___x_411_);
lean_dec(v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_add___boxed(lean_object* v_t_u2081_413_, lean_object* v_t_u2082_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Std_Time_Duration_add(v_t_u2081_413_, v_t_u2082_414_);
lean_dec_ref(v_t_u2082_414_);
lean_dec_ref(v_t_u2081_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub(lean_object* v_t_u2081_416_, lean_object* v_t_u2082_417_){
_start:
{
lean_object* v_second_418_; lean_object* v_nano_419_; lean_object* v_second_420_; lean_object* v_nano_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v_nanos_426_; lean_object* v___x_427_; lean_object* v_nanos_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_second_418_ = lean_ctor_get(v_t_u2082_417_, 0);
v_nano_419_ = lean_ctor_get(v_t_u2082_417_, 1);
v_second_420_ = lean_ctor_get(v_t_u2081_416_, 0);
v_nano_421_ = lean_ctor_get(v_t_u2081_416_, 1);
v___x_422_ = lean_int_neg(v_second_418_);
v___x_423_ = lean_int_neg(v_nano_419_);
v___x_424_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_425_ = lean_int_mul(v_second_420_, v___x_424_);
v_nanos_426_ = lean_int_add(v___x_425_, v_nano_421_);
lean_dec(v___x_425_);
v___x_427_ = lean_int_mul(v___x_422_, v___x_424_);
lean_dec(v___x_422_);
v_nanos_428_ = lean_int_add(v___x_427_, v___x_423_);
lean_dec(v___x_423_);
lean_dec(v___x_427_);
v___x_429_ = lean_int_add(v_nanos_426_, v_nanos_428_);
lean_dec(v_nanos_428_);
lean_dec(v_nanos_426_);
v___x_430_ = l_Std_Time_Duration_ofNanoseconds(v___x_429_);
lean_dec(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub___boxed(lean_object* v_t_u2081_431_, lean_object* v_t_u2082_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_Time_Duration_sub(v_t_u2081_431_, v_t_u2082_432_);
lean_dec_ref(v_t_u2082_432_);
lean_dec_ref(v_t_u2081_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds(lean_object* v_t_434_, lean_object* v_s_435_){
_start:
{
lean_object* v_second_436_; lean_object* v_nano_437_; lean_object* v___x_438_; lean_object* v_second_439_; lean_object* v_nano_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v_nanos_443_; lean_object* v___x_444_; lean_object* v_nanos_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_second_436_ = lean_ctor_get(v_t_434_, 0);
v_nano_437_ = lean_ctor_get(v_t_434_, 1);
v___x_438_ = l_Std_Time_Duration_ofNanoseconds(v_s_435_);
v_second_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_second_439_);
v_nano_440_ = lean_ctor_get(v___x_438_, 1);
lean_inc(v_nano_440_);
lean_dec_ref(v___x_438_);
v___x_441_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_442_ = lean_int_mul(v_second_436_, v___x_441_);
v_nanos_443_ = lean_int_add(v___x_442_, v_nano_437_);
lean_dec(v___x_442_);
v___x_444_ = lean_int_mul(v_second_439_, v___x_441_);
lean_dec(v_second_439_);
v_nanos_445_ = lean_int_add(v___x_444_, v_nano_440_);
lean_dec(v_nano_440_);
lean_dec(v___x_444_);
v___x_446_ = lean_int_add(v_nanos_443_, v_nanos_445_);
lean_dec(v_nanos_445_);
lean_dec(v_nanos_443_);
v___x_447_ = l_Std_Time_Duration_ofNanoseconds(v___x_446_);
lean_dec(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds___boxed(lean_object* v_t_448_, lean_object* v_s_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Std_Time_Duration_addNanoseconds(v_t_448_, v_s_449_);
lean_dec(v_s_449_);
lean_dec_ref(v_t_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds(lean_object* v_t_451_, lean_object* v_s_452_){
_start:
{
lean_object* v_second_453_; lean_object* v_nano_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v_second_458_; lean_object* v_nano_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v_nanos_462_; lean_object* v___x_463_; lean_object* v_nanos_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_second_453_ = lean_ctor_get(v_t_451_, 0);
v_nano_454_ = lean_ctor_get(v_t_451_, 1);
v___x_455_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_456_ = lean_int_mul(v_s_452_, v___x_455_);
v___x_457_ = l_Std_Time_Duration_ofNanoseconds(v___x_456_);
lean_dec(v___x_456_);
v_second_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_second_458_);
v_nano_459_ = lean_ctor_get(v___x_457_, 1);
lean_inc(v_nano_459_);
lean_dec_ref(v___x_457_);
v___x_460_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_461_ = lean_int_mul(v_second_453_, v___x_460_);
v_nanos_462_ = lean_int_add(v___x_461_, v_nano_454_);
lean_dec(v___x_461_);
v___x_463_ = lean_int_mul(v_second_458_, v___x_460_);
lean_dec(v_second_458_);
v_nanos_464_ = lean_int_add(v___x_463_, v_nano_459_);
lean_dec(v_nano_459_);
lean_dec(v___x_463_);
v___x_465_ = lean_int_add(v_nanos_462_, v_nanos_464_);
lean_dec(v_nanos_464_);
lean_dec(v_nanos_462_);
v___x_466_ = l_Std_Time_Duration_ofNanoseconds(v___x_465_);
lean_dec(v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds___boxed(lean_object* v_t_467_, lean_object* v_s_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Std_Time_Duration_addMilliseconds(v_t_467_, v_s_468_);
lean_dec(v_s_468_);
lean_dec_ref(v_t_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds(lean_object* v_t_470_, lean_object* v_s_471_){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v_second_475_; lean_object* v_nano_476_; lean_object* v_second_477_; lean_object* v_nano_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_nanos_483_; lean_object* v___x_484_; lean_object* v_nanos_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_472_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_473_ = lean_int_mul(v_s_471_, v___x_472_);
v___x_474_ = l_Std_Time_Duration_ofNanoseconds(v___x_473_);
lean_dec(v___x_473_);
v_second_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_second_475_);
v_nano_476_ = lean_ctor_get(v___x_474_, 1);
lean_inc(v_nano_476_);
lean_dec_ref(v___x_474_);
v_second_477_ = lean_ctor_get(v_t_470_, 0);
v_nano_478_ = lean_ctor_get(v_t_470_, 1);
v___x_479_ = lean_int_neg(v_second_475_);
lean_dec(v_second_475_);
v___x_480_ = lean_int_neg(v_nano_476_);
lean_dec(v_nano_476_);
v___x_481_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_482_ = lean_int_mul(v_second_477_, v___x_481_);
v_nanos_483_ = lean_int_add(v___x_482_, v_nano_478_);
lean_dec(v___x_482_);
v___x_484_ = lean_int_mul(v___x_479_, v___x_481_);
lean_dec(v___x_479_);
v_nanos_485_ = lean_int_add(v___x_484_, v___x_480_);
lean_dec(v___x_480_);
lean_dec(v___x_484_);
v___x_486_ = lean_int_add(v_nanos_483_, v_nanos_485_);
lean_dec(v_nanos_485_);
lean_dec(v_nanos_483_);
v___x_487_ = l_Std_Time_Duration_ofNanoseconds(v___x_486_);
lean_dec(v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds___boxed(lean_object* v_t_488_, lean_object* v_s_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_Time_Duration_subMilliseconds(v_t_488_, v_s_489_);
lean_dec(v_s_489_);
lean_dec_ref(v_t_488_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds(lean_object* v_t_491_, lean_object* v_s_492_){
_start:
{
lean_object* v___x_493_; lean_object* v_second_494_; lean_object* v_nano_495_; lean_object* v_second_496_; lean_object* v_nano_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_nanos_502_; lean_object* v___x_503_; lean_object* v_nanos_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_493_ = l_Std_Time_Duration_ofNanoseconds(v_s_492_);
v_second_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_second_494_);
v_nano_495_ = lean_ctor_get(v___x_493_, 1);
lean_inc(v_nano_495_);
lean_dec_ref(v___x_493_);
v_second_496_ = lean_ctor_get(v_t_491_, 0);
v_nano_497_ = lean_ctor_get(v_t_491_, 1);
v___x_498_ = lean_int_neg(v_second_494_);
lean_dec(v_second_494_);
v___x_499_ = lean_int_neg(v_nano_495_);
lean_dec(v_nano_495_);
v___x_500_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_501_ = lean_int_mul(v_second_496_, v___x_500_);
v_nanos_502_ = lean_int_add(v___x_501_, v_nano_497_);
lean_dec(v___x_501_);
v___x_503_ = lean_int_mul(v___x_498_, v___x_500_);
lean_dec(v___x_498_);
v_nanos_504_ = lean_int_add(v___x_503_, v___x_499_);
lean_dec(v___x_499_);
lean_dec(v___x_503_);
v___x_505_ = lean_int_add(v_nanos_502_, v_nanos_504_);
lean_dec(v_nanos_504_);
lean_dec(v_nanos_502_);
v___x_506_ = l_Std_Time_Duration_ofNanoseconds(v___x_505_);
lean_dec(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds___boxed(lean_object* v_t_507_, lean_object* v_s_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Std_Time_Duration_subNanoseconds(v_t_507_, v_s_508_);
lean_dec(v_s_508_);
lean_dec_ref(v_t_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds(lean_object* v_t_510_, lean_object* v_s_511_){
_start:
{
lean_object* v_second_512_; lean_object* v_nano_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v_nanos_517_; lean_object* v___x_518_; lean_object* v_nanos_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v_second_512_ = lean_ctor_get(v_t_510_, 0);
v_nano_513_ = lean_ctor_get(v_t_510_, 1);
v___x_514_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_515_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_516_ = lean_int_mul(v_second_512_, v___x_515_);
v_nanos_517_ = lean_int_add(v___x_516_, v_nano_513_);
lean_dec(v___x_516_);
v___x_518_ = lean_int_mul(v_s_511_, v___x_515_);
v_nanos_519_ = lean_int_add(v___x_518_, v___x_514_);
lean_dec(v___x_518_);
v___x_520_ = lean_int_add(v_nanos_517_, v_nanos_519_);
lean_dec(v_nanos_519_);
lean_dec(v_nanos_517_);
v___x_521_ = l_Std_Time_Duration_ofNanoseconds(v___x_520_);
lean_dec(v___x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds___boxed(lean_object* v_t_522_, lean_object* v_s_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Std_Time_Duration_addSeconds(v_t_522_, v_s_523_);
lean_dec(v_s_523_);
lean_dec_ref(v_t_522_);
return v_res_524_;
}
}
static lean_object* _init_l_Std_Time_Duration_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_526_ = lean_int_neg(v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds(lean_object* v_t_527_, lean_object* v_s_528_){
_start:
{
lean_object* v_second_529_; lean_object* v_nano_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v_nanos_535_; lean_object* v___x_536_; lean_object* v_nanos_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v_second_529_ = lean_ctor_get(v_t_527_, 0);
v_nano_530_ = lean_ctor_get(v_t_527_, 1);
v___x_531_ = lean_int_neg(v_s_528_);
v___x_532_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_533_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_534_ = lean_int_mul(v_second_529_, v___x_533_);
v_nanos_535_ = lean_int_add(v___x_534_, v_nano_530_);
lean_dec(v___x_534_);
v___x_536_ = lean_int_mul(v___x_531_, v___x_533_);
lean_dec(v___x_531_);
v_nanos_537_ = lean_int_add(v___x_536_, v___x_532_);
lean_dec(v___x_536_);
v___x_538_ = lean_int_add(v_nanos_535_, v_nanos_537_);
lean_dec(v_nanos_537_);
lean_dec(v_nanos_535_);
v___x_539_ = l_Std_Time_Duration_ofNanoseconds(v___x_538_);
lean_dec(v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds___boxed(lean_object* v_t_540_, lean_object* v_s_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Std_Time_Duration_subSeconds(v_t_540_, v_s_541_);
lean_dec(v_s_541_);
lean_dec_ref(v_t_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes(lean_object* v_t_543_, lean_object* v_m_544_){
_start:
{
lean_object* v_second_545_; lean_object* v_nano_546_; lean_object* v___x_547_; lean_object* v_seconds_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v_nanos_552_; lean_object* v___x_553_; lean_object* v_nanos_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v_second_545_ = lean_ctor_get(v_t_543_, 0);
v_nano_546_ = lean_ctor_get(v_t_543_, 1);
v___x_547_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v_seconds_548_ = lean_int_mul(v_m_544_, v___x_547_);
v___x_549_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_550_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_551_ = lean_int_mul(v_second_545_, v___x_550_);
v_nanos_552_ = lean_int_add(v___x_551_, v_nano_546_);
lean_dec(v___x_551_);
v___x_553_ = lean_int_mul(v_seconds_548_, v___x_550_);
lean_dec(v_seconds_548_);
v_nanos_554_ = lean_int_add(v___x_553_, v___x_549_);
lean_dec(v___x_553_);
v___x_555_ = lean_int_add(v_nanos_552_, v_nanos_554_);
lean_dec(v_nanos_554_);
lean_dec(v_nanos_552_);
v___x_556_ = l_Std_Time_Duration_ofNanoseconds(v___x_555_);
lean_dec(v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes___boxed(lean_object* v_t_557_, lean_object* v_m_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Std_Time_Duration_addMinutes(v_t_557_, v_m_558_);
lean_dec(v_m_558_);
lean_dec_ref(v_t_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes(lean_object* v_t_560_, lean_object* v_m_561_){
_start:
{
lean_object* v_second_562_; lean_object* v_nano_563_; lean_object* v___x_564_; lean_object* v_seconds_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_nanos_570_; lean_object* v___x_571_; lean_object* v_nanos_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_second_562_ = lean_ctor_get(v_t_560_, 0);
v_nano_563_ = lean_ctor_get(v_t_560_, 1);
v___x_564_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v_seconds_565_ = lean_int_mul(v_m_561_, v___x_564_);
v___x_566_ = lean_int_neg(v_seconds_565_);
lean_dec(v_seconds_565_);
v___x_567_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_568_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_569_ = lean_int_mul(v_second_562_, v___x_568_);
v_nanos_570_ = lean_int_add(v___x_569_, v_nano_563_);
lean_dec(v___x_569_);
v___x_571_ = lean_int_mul(v___x_566_, v___x_568_);
lean_dec(v___x_566_);
v_nanos_572_ = lean_int_add(v___x_571_, v___x_567_);
lean_dec(v___x_571_);
v___x_573_ = lean_int_add(v_nanos_570_, v_nanos_572_);
lean_dec(v_nanos_572_);
lean_dec(v_nanos_570_);
v___x_574_ = l_Std_Time_Duration_ofNanoseconds(v___x_573_);
lean_dec(v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes___boxed(lean_object* v_t_575_, lean_object* v_m_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Std_Time_Duration_subMinutes(v_t_575_, v_m_576_);
lean_dec(v_m_576_);
lean_dec_ref(v_t_575_);
return v_res_577_;
}
}
static lean_object* _init_l_Std_Time_Duration_addHours___closed__0(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_unsigned_to_nat(3600u);
v___x_579_ = lean_nat_to_int(v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours(lean_object* v_t_580_, lean_object* v_h_581_){
_start:
{
lean_object* v_second_582_; lean_object* v_nano_583_; lean_object* v___x_584_; lean_object* v_seconds_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v_nanos_589_; lean_object* v___x_590_; lean_object* v_nanos_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_second_582_ = lean_ctor_get(v_t_580_, 0);
v_nano_583_ = lean_ctor_get(v_t_580_, 1);
v___x_584_ = lean_obj_once(&l_Std_Time_Duration_addHours___closed__0, &l_Std_Time_Duration_addHours___closed__0_once, _init_l_Std_Time_Duration_addHours___closed__0);
v_seconds_585_ = lean_int_mul(v_h_581_, v___x_584_);
v___x_586_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_587_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_588_ = lean_int_mul(v_second_582_, v___x_587_);
v_nanos_589_ = lean_int_add(v___x_588_, v_nano_583_);
lean_dec(v___x_588_);
v___x_590_ = lean_int_mul(v_seconds_585_, v___x_587_);
lean_dec(v_seconds_585_);
v_nanos_591_ = lean_int_add(v___x_590_, v___x_586_);
lean_dec(v___x_590_);
v___x_592_ = lean_int_add(v_nanos_589_, v_nanos_591_);
lean_dec(v_nanos_591_);
lean_dec(v_nanos_589_);
v___x_593_ = l_Std_Time_Duration_ofNanoseconds(v___x_592_);
lean_dec(v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours___boxed(lean_object* v_t_594_, lean_object* v_h_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Std_Time_Duration_addHours(v_t_594_, v_h_595_);
lean_dec(v_h_595_);
lean_dec_ref(v_t_594_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours(lean_object* v_t_597_, lean_object* v_h_598_){
_start:
{
lean_object* v_second_599_; lean_object* v_nano_600_; lean_object* v___x_601_; lean_object* v_seconds_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_nanos_607_; lean_object* v___x_608_; lean_object* v_nanos_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_second_599_ = lean_ctor_get(v_t_597_, 0);
v_nano_600_ = lean_ctor_get(v_t_597_, 1);
v___x_601_ = lean_obj_once(&l_Std_Time_Duration_addHours___closed__0, &l_Std_Time_Duration_addHours___closed__0_once, _init_l_Std_Time_Duration_addHours___closed__0);
v_seconds_602_ = lean_int_mul(v_h_598_, v___x_601_);
v___x_603_ = lean_int_neg(v_seconds_602_);
lean_dec(v_seconds_602_);
v___x_604_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_605_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_606_ = lean_int_mul(v_second_599_, v___x_605_);
v_nanos_607_ = lean_int_add(v___x_606_, v_nano_600_);
lean_dec(v___x_606_);
v___x_608_ = lean_int_mul(v___x_603_, v___x_605_);
lean_dec(v___x_603_);
v_nanos_609_ = lean_int_add(v___x_608_, v___x_604_);
lean_dec(v___x_608_);
v___x_610_ = lean_int_add(v_nanos_607_, v_nanos_609_);
lean_dec(v_nanos_609_);
lean_dec(v_nanos_607_);
v___x_611_ = l_Std_Time_Duration_ofNanoseconds(v___x_610_);
lean_dec(v___x_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours___boxed(lean_object* v_t_612_, lean_object* v_h_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Std_Time_Duration_subHours(v_t_612_, v_h_613_);
lean_dec(v_h_613_);
lean_dec_ref(v_t_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays(lean_object* v_t_615_, lean_object* v_d_616_){
_start:
{
lean_object* v_second_617_; lean_object* v_nano_618_; lean_object* v___x_619_; lean_object* v_seconds_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v_nanos_624_; lean_object* v___x_625_; lean_object* v_nanos_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_second_617_ = lean_ctor_get(v_t_615_, 0);
v_nano_618_ = lean_ctor_get(v_t_615_, 1);
v___x_619_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v_seconds_620_ = lean_int_mul(v_d_616_, v___x_619_);
v___x_621_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_622_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_623_ = lean_int_mul(v_second_617_, v___x_622_);
v_nanos_624_ = lean_int_add(v___x_623_, v_nano_618_);
lean_dec(v___x_623_);
v___x_625_ = lean_int_mul(v_seconds_620_, v___x_622_);
lean_dec(v_seconds_620_);
v_nanos_626_ = lean_int_add(v___x_625_, v___x_621_);
lean_dec(v___x_625_);
v___x_627_ = lean_int_add(v_nanos_624_, v_nanos_626_);
lean_dec(v_nanos_626_);
lean_dec(v_nanos_624_);
v___x_628_ = l_Std_Time_Duration_ofNanoseconds(v___x_627_);
lean_dec(v___x_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays___boxed(lean_object* v_t_629_, lean_object* v_d_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Std_Time_Duration_addDays(v_t_629_, v_d_630_);
lean_dec(v_d_630_);
lean_dec_ref(v_t_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays(lean_object* v_t_632_, lean_object* v_d_633_){
_start:
{
lean_object* v_second_634_; lean_object* v_nano_635_; lean_object* v___x_636_; lean_object* v_seconds_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v_nanos_642_; lean_object* v___x_643_; lean_object* v_nanos_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_second_634_ = lean_ctor_get(v_t_632_, 0);
v_nano_635_ = lean_ctor_get(v_t_632_, 1);
v___x_636_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v_seconds_637_ = lean_int_mul(v_d_633_, v___x_636_);
v___x_638_ = lean_int_neg(v_seconds_637_);
lean_dec(v_seconds_637_);
v___x_639_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_640_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_641_ = lean_int_mul(v_second_634_, v___x_640_);
v_nanos_642_ = lean_int_add(v___x_641_, v_nano_635_);
lean_dec(v___x_641_);
v___x_643_ = lean_int_mul(v___x_638_, v___x_640_);
lean_dec(v___x_638_);
v_nanos_644_ = lean_int_add(v___x_643_, v___x_639_);
lean_dec(v___x_643_);
v___x_645_ = lean_int_add(v_nanos_642_, v_nanos_644_);
lean_dec(v_nanos_644_);
lean_dec(v_nanos_642_);
v___x_646_ = l_Std_Time_Duration_ofNanoseconds(v___x_645_);
lean_dec(v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays___boxed(lean_object* v_t_647_, lean_object* v_d_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Std_Time_Duration_subDays(v_t_647_, v_d_648_);
lean_dec(v_d_648_);
lean_dec_ref(v_t_647_);
return v_res_649_;
}
}
static lean_object* _init_l_Std_Time_Duration_addWeeks___closed__0(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_unsigned_to_nat(604800u);
v___x_651_ = lean_nat_to_int(v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks(lean_object* v_t_652_, lean_object* v_w_653_){
_start:
{
lean_object* v_second_654_; lean_object* v_nano_655_; lean_object* v___x_656_; lean_object* v_seconds_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v_nanos_661_; lean_object* v___x_662_; lean_object* v_nanos_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_second_654_ = lean_ctor_get(v_t_652_, 0);
v_nano_655_ = lean_ctor_get(v_t_652_, 1);
v___x_656_ = lean_obj_once(&l_Std_Time_Duration_addWeeks___closed__0, &l_Std_Time_Duration_addWeeks___closed__0_once, _init_l_Std_Time_Duration_addWeeks___closed__0);
v_seconds_657_ = lean_int_mul(v_w_653_, v___x_656_);
v___x_658_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__2___closed__1, &l_Std_Time_instToStringDuration___lam__2___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__2___closed__1);
v___x_659_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_660_ = lean_int_mul(v_second_654_, v___x_659_);
v_nanos_661_ = lean_int_add(v___x_660_, v_nano_655_);
lean_dec(v___x_660_);
v___x_662_ = lean_int_mul(v_seconds_657_, v___x_659_);
lean_dec(v_seconds_657_);
v_nanos_663_ = lean_int_add(v___x_662_, v___x_658_);
lean_dec(v___x_662_);
v___x_664_ = lean_int_add(v_nanos_661_, v_nanos_663_);
lean_dec(v_nanos_663_);
lean_dec(v_nanos_661_);
v___x_665_ = l_Std_Time_Duration_ofNanoseconds(v___x_664_);
lean_dec(v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks___boxed(lean_object* v_t_666_, lean_object* v_w_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Std_Time_Duration_addWeeks(v_t_666_, v_w_667_);
lean_dec(v_w_667_);
lean_dec_ref(v_t_666_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks(lean_object* v_t_669_, lean_object* v_w_670_){
_start:
{
lean_object* v_second_671_; lean_object* v_nano_672_; lean_object* v___x_673_; lean_object* v_seconds_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_nanos_679_; lean_object* v___x_680_; lean_object* v_nanos_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_second_671_ = lean_ctor_get(v_t_669_, 0);
v_nano_672_ = lean_ctor_get(v_t_669_, 1);
v___x_673_ = lean_obj_once(&l_Std_Time_Duration_addWeeks___closed__0, &l_Std_Time_Duration_addWeeks___closed__0_once, _init_l_Std_Time_Duration_addWeeks___closed__0);
v_seconds_674_ = lean_int_mul(v_w_670_, v___x_673_);
v___x_675_ = lean_int_neg(v_seconds_674_);
lean_dec(v_seconds_674_);
v___x_676_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_677_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_678_ = lean_int_mul(v_second_671_, v___x_677_);
v_nanos_679_ = lean_int_add(v___x_678_, v_nano_672_);
lean_dec(v___x_678_);
v___x_680_ = lean_int_mul(v___x_675_, v___x_677_);
lean_dec(v___x_675_);
v_nanos_681_ = lean_int_add(v___x_680_, v___x_676_);
lean_dec(v___x_680_);
v___x_682_ = lean_int_add(v_nanos_679_, v_nanos_681_);
lean_dec(v_nanos_681_);
lean_dec(v_nanos_679_);
v___x_683_ = l_Std_Time_Duration_ofNanoseconds(v___x_682_);
lean_dec(v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks___boxed(lean_object* v_t_684_, lean_object* v_w_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Std_Time_Duration_subWeeks(v_t_684_, v_w_685_);
lean_dec(v_w_685_);
lean_dec_ref(v_t_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0(lean_object* v_i_746_, lean_object* v_d_747_){
_start:
{
lean_object* v_second_748_; lean_object* v_nano_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_second_748_ = lean_ctor_get(v_d_747_, 0);
v_nano_749_ = lean_ctor_get(v_d_747_, 1);
v___x_750_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_751_ = lean_int_mul(v_second_748_, v___x_750_);
v___x_752_ = lean_int_add(v___x_751_, v_nano_749_);
lean_dec(v___x_751_);
v___x_753_ = lean_int_mul(v___x_752_, v_i_746_);
lean_dec(v___x_752_);
v___x_754_ = l_Std_Time_Duration_ofNanoseconds(v___x_753_);
lean_dec(v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0___boxed(lean_object* v_i_755_, lean_object* v_d_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Std_Time_Duration_instHMulInt___lam__0(v_i_755_, v_d_756_);
lean_dec_ref(v_d_756_);
lean_dec(v_i_755_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0(lean_object* v_d_760_, lean_object* v_i_761_){
_start:
{
lean_object* v_second_762_; lean_object* v_nano_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_second_762_ = lean_ctor_get(v_d_760_, 0);
v_nano_763_ = lean_ctor_get(v_d_760_, 1);
v___x_764_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_765_ = lean_int_mul(v_second_762_, v___x_764_);
v___x_766_ = lean_int_add(v___x_765_, v_nano_763_);
lean_dec(v___x_765_);
v___x_767_ = lean_int_mul(v___x_766_, v_i_761_);
lean_dec(v___x_766_);
v___x_768_ = l_Std_Time_Duration_ofNanoseconds(v___x_767_);
lean_dec(v___x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0___boxed(lean_object* v_d_769_, lean_object* v_i_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Std_Time_Duration_instHMulInt__1___lam__0(v_d_769_, v_i_770_);
lean_dec(v_i_770_);
lean_dec_ref(v_d_769_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat___lam__0(lean_object* v_i_774_, lean_object* v_d_775_){
_start:
{
lean_object* v_second_776_; lean_object* v_nano_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_second_776_ = lean_ctor_get(v_d_775_, 0);
v_nano_777_ = lean_ctor_get(v_d_775_, 1);
v___x_778_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_779_ = lean_int_mul(v_second_776_, v___x_778_);
v___x_780_ = lean_int_add(v___x_779_, v_nano_777_);
lean_dec(v___x_779_);
v___x_781_ = lean_nat_to_int(v_i_774_);
v___x_782_ = lean_int_mul(v___x_780_, v___x_781_);
lean_dec(v___x_781_);
lean_dec(v___x_780_);
v___x_783_ = l_Std_Time_Duration_ofNanoseconds(v___x_782_);
lean_dec(v___x_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat___lam__0___boxed(lean_object* v_i_784_, lean_object* v_d_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Std_Time_Duration_instHMulNat___lam__0(v_i_784_, v_d_785_);
lean_dec_ref(v_d_785_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat__1___lam__0(lean_object* v_d_789_, lean_object* v_i_790_){
_start:
{
lean_object* v_second_791_; lean_object* v_nano_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v_second_791_ = lean_ctor_get(v_d_789_, 0);
v_nano_792_ = lean_ctor_get(v_d_789_, 1);
v___x_793_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_794_ = lean_int_mul(v_second_791_, v___x_793_);
v___x_795_ = lean_int_add(v___x_794_, v_nano_792_);
lean_dec(v___x_794_);
v___x_796_ = lean_nat_to_int(v_i_790_);
v___x_797_ = lean_int_mul(v___x_795_, v___x_796_);
lean_dec(v___x_796_);
lean_dec(v___x_795_);
v___x_798_ = l_Std_Time_Duration_ofNanoseconds(v___x_797_);
lean_dec(v___x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulNat__1___lam__0___boxed(lean_object* v_d_799_, lean_object* v_i_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Std_Time_Duration_instHMulNat__1___lam__0(v_d_799_, v_i_800_);
lean_dec_ref(v_d_799_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivInt___lam__0(lean_object* v_d_804_, lean_object* v_i_805_){
_start:
{
lean_object* v_second_806_; lean_object* v_nano_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_second_806_ = lean_ctor_get(v_d_804_, 0);
v_nano_807_ = lean_ctor_get(v_d_804_, 1);
v___x_808_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_809_ = lean_int_mul(v_second_806_, v___x_808_);
v___x_810_ = lean_int_add(v___x_809_, v_nano_807_);
lean_dec(v___x_809_);
v___x_811_ = lean_int_div(v___x_810_, v_i_805_);
lean_dec(v___x_810_);
v___x_812_ = l_Std_Time_Duration_ofNanoseconds(v___x_811_);
lean_dec(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivInt___lam__0___boxed(lean_object* v_d_813_, lean_object* v_i_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Std_Time_Duration_instHDivInt___lam__0(v_d_813_, v_i_814_);
lean_dec(v_i_814_);
lean_dec_ref(v_d_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivNat___lam__0(lean_object* v_d_818_, lean_object* v_i_819_){
_start:
{
lean_object* v_second_820_; lean_object* v_nano_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_second_820_ = lean_ctor_get(v_d_818_, 0);
v_nano_821_ = lean_ctor_get(v_d_818_, 1);
v___x_822_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_823_ = lean_int_mul(v_second_820_, v___x_822_);
v___x_824_ = lean_int_add(v___x_823_, v_nano_821_);
lean_dec(v___x_823_);
v___x_825_ = lean_nat_to_int(v_i_819_);
v___x_826_ = lean_int_div(v___x_824_, v___x_825_);
lean_dec(v___x_825_);
lean_dec(v___x_824_);
v___x_827_ = l_Std_Time_Duration_ofNanoseconds(v___x_826_);
lean_dec(v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHDivNat___lam__0___boxed(lean_object* v_d_828_, lean_object* v_i_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Std_Time_Duration_instHDivNat___lam__0(v_d_828_, v_i_829_);
lean_dec_ref(v_d_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0(lean_object* v_pt_833_, lean_object* v_d_834_){
_start:
{
lean_object* v_second_835_; lean_object* v_nano_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v_nanos_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_second_835_ = lean_ctor_get(v_d_834_, 0);
v_nano_836_ = lean_ctor_get(v_d_834_, 1);
v___x_837_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_838_ = lean_int_mul(v_second_835_, v___x_837_);
v_nanos_839_ = lean_int_add(v___x_838_, v_nano_836_);
lean_dec(v___x_838_);
v___x_840_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_833_);
v___x_841_ = lean_int_add(v_nanos_839_, v___x_840_);
lean_dec(v___x_840_);
lean_dec(v_nanos_839_);
v___x_842_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_841_);
lean_dec(v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed(lean_object* v_pt_843_, lean_object* v_d_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Std_Time_Duration_instHAddPlainTime___lam__0(v_pt_843_, v_d_844_);
lean_dec_ref(v_d_844_);
lean_dec_ref(v_pt_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0(lean_object* v_pt_848_, lean_object* v_d_849_){
_start:
{
lean_object* v_second_850_; lean_object* v_nano_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v_nanos_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_second_850_ = lean_ctor_get(v_d_849_, 0);
v_nano_851_ = lean_ctor_get(v_d_849_, 1);
v___x_852_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_848_);
v___x_853_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_854_ = lean_int_mul(v_second_850_, v___x_853_);
v_nanos_855_ = lean_int_add(v___x_854_, v_nano_851_);
lean_dec(v___x_854_);
v___x_856_ = lean_int_sub(v___x_852_, v_nanos_855_);
lean_dec(v_nanos_855_);
lean_dec(v___x_852_);
v___x_857_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_856_);
lean_dec(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed(lean_object* v_pt_858_, lean_object* v_d_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Std_Time_Duration_instHSubPlainTime___lam__0(v_pt_858_, v_d_859_);
lean_dec_ref(v_d_859_);
lean_dec_ref(v_pt_858_);
return v_res_860_;
}
}
lean_object* runtime_initialize_Std_Time_Date(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedDuration = _init_l_Std_Time_instInhabitedDuration();
lean_mark_persistent(l_Std_Time_instInhabitedDuration);
l_Std_Time_Duration_instLE = _init_l_Std_Time_Duration_instLE();
lean_mark_persistent(l_Std_Time_Duration_instLE);
l_Std_Time_Duration_instLT = _init_l_Std_Time_Duration_instLT();
lean_mark_persistent(l_Std_Time_Duration_instLT);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Duration(builtin);
}
#ifdef __cplusplus
}
#endif
