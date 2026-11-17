// Lean compiler output
// Module: Std.Time.DateTime.WallTime
// Imports: public import Init.System.IO public import Std.Time.Duration
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
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
extern lean_object* l_Std_Time_instOrdDuration;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprWallTime_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__9_value;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__11;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__14;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprWallTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprWallTime_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprWallTime___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprWallTime = (const lean_object*)&l_Std_Time_instReprWallTime___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedWallTime_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedWallTime_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedWallTime_default;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instInhabitedWallTime_default_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedWallTime;
LEAN_EXPORT lean_object* l_Std_Time_instLEWallTime;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeWallTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instLTWallTime;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtWallTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdWallTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdWallTime___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdWallTime___closed__0 = (const lean_object*)&l_Std_Time_instOrdWallTime___closed__0_value;
static lean_once_cell_t l_Std_Time_instOrdWallTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdWallTime___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime;
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instToStringWallTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instToStringWallTime___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instToStringWallTime___closed__0 = (const lean_object*)&l_Std_Time_instToStringWallTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instToStringWallTime = (const lean_object*)&l_Std_Time_instToStringWallTime___closed__0_value;
static const lean_string_object l_Std_Time_instReprWallTime__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "WallTime.ofNanoseconds "};
static const lean_object* l_Std_Time_instReprWallTime__1___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime__1___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprWallTime__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime__1___lam__0___closed__0_value)}};
static const lean_object* l_Std_Time_instReprWallTime__1___lam__0___closed__1 = (const lean_object*)&l_Std_Time_instReprWallTime__1___lam__0___closed__1_value;
static lean_once_cell_t l_Std_Time_instReprWallTime__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime__1___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprWallTime__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprWallTime__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprWallTime__1___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprWallTime__1 = (const lean_object*)&l_Std_Time_instReprWallTime__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_toDays___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_ofMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_ofMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration___boxed(lean_object*);
static const lean_closure_object l_Std_Time_WallTime_instHAddDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddDuration___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddDuration = (const lean_object*)&l_Std_Time_WallTime_instHAddDuration___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubDuration___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubDuration = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__1 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__1 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__2 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__2 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__3 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__3 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__4 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__4 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__5 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__5 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__6 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__6 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__6___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_WallTime_instHSubDuration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_instHSubDuration__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubDuration__1___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubDuration__1 = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprWallTime_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__0(lean_object* v_second_4_, lean_object* v_nano_5_, lean_object* v_00___6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___lam__0___closed__0));
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v_second_4_);
lean_ctor_set(v___x_8_, 1, v_nano_5_);
v___x_9_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_9_, 0, v___x_7_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__1(lean_object* v_second_11_, lean_object* v_nano_12_, lean_object* v_00___13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_14_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___lam__1___closed__0));
v___x_15_ = lean_int_neg(v_second_11_);
v___x_16_ = lean_int_neg(v_nano_12_);
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_14_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg___lam__1___boxed(lean_object* v_second_19_, lean_object* v_nano_20_, lean_object* v_00___21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Std_Time_instReprWallTime_repr___redArg___lam__1(v_second_19_, v_nano_20_, v_00___21_);
lean_dec(v_nano_20_);
lean_dec(v_second_19_);
return v_res_22_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(7u);
v___x_37_ = lean_nat_to_int(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__0));
v___x_41_ = lean_string_length(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__10, &l_Std_Time_instReprWallTime_repr___redArg___closed__10_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__10);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_unsigned_to_nat(0u);
v___x_49_ = lean_nat_to_int(v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg(lean_object* v_x_51_){
_start:
{
lean_object* v_second_52_; lean_object* v_nano_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_108_; 
v_second_52_ = lean_ctor_get(v_x_51_, 0);
v_nano_53_ = lean_ctor_get(v_x_51_, 1);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_51_);
if (v_isSharedCheck_108_ == 0)
{
v___x_55_ = v_x_51_;
v_isShared_56_ = v_isSharedCheck_108_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_nano_53_);
lean_inc(v_second_52_);
lean_dec(v_x_51_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_108_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___y_60_; lean_object* v___y_61_; lean_object* v___y_81_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_57_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__6));
v___x_58_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__7, &l_Std_Time_instReprWallTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7);
v___x_96_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_97_ = lean_int_dec_lt(v___x_96_, v_second_52_);
if (v___x_97_ == 0)
{
uint8_t v___x_98_; 
v___x_98_ = lean_int_dec_lt(v_second_52_, v___x_96_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = lean_int_dec_lt(v_nano_53_, v___x_96_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_box(0);
lean_inc(v_nano_53_);
v___x_101_ = l_Std_Time_instReprWallTime_repr___redArg___lam__0(v_second_52_, v_nano_53_, v___x_100_);
v___y_81_ = v___x_101_;
goto v___jp_80_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_box(0);
v___x_103_ = l_Std_Time_instReprWallTime_repr___redArg___lam__1(v_second_52_, v_nano_53_, v___x_102_);
lean_dec(v_second_52_);
v___y_81_ = v___x_103_;
goto v___jp_80_;
}
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_box(0);
v___x_105_ = l_Std_Time_instReprWallTime_repr___redArg___lam__1(v_second_52_, v_nano_53_, v___x_104_);
lean_dec(v_second_52_);
v___y_81_ = v___x_105_;
goto v___jp_80_;
}
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_box(0);
lean_inc(v_nano_53_);
v___x_107_ = l_Std_Time_instReprWallTime_repr___redArg___lam__0(v_second_52_, v_nano_53_, v___x_106_);
v___y_81_ = v___x_107_;
goto v___jp_80_;
}
v___jp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_62_ = lean_string_append(v___y_60_, v___y_61_);
lean_dec_ref(v___y_61_);
v___x_63_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__8));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
v___x_65_ = l_String_quote(v___x_64_);
v___x_66_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
if (v_isShared_56_ == 0)
{
lean_ctor_set_tag(v___x_55_, 4);
lean_ctor_set(v___x_55_, 1, v___x_66_);
lean_ctor_set(v___x_55_, 0, v___x_58_);
v___x_68_ = v___x_55_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v___x_66_);
v___x_68_ = v_reuseFailAlloc_79_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_69_ = 0;
v___x_70_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set_uint8(v___x_70_, sizeof(void*)*1, v___x_69_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_57_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__11, &l_Std_Time_instReprWallTime_repr___redArg___closed__11_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__11);
v___x_73_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__12));
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_71_);
v___x_75_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__13));
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_72_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_78_, sizeof(void*)*1, v___x_69_);
return v___x_78_;
}
}
v___jp_80_:
{
lean_object* v_snd_82_; lean_object* v_fst_83_; lean_object* v_fst_84_; lean_object* v_snd_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_snd_82_ = lean_ctor_get(v___y_81_, 1);
lean_inc(v_snd_82_);
v_fst_83_ = lean_ctor_get(v___y_81_, 0);
lean_inc(v_fst_83_);
lean_dec_ref(v___y_81_);
v_fst_84_ = lean_ctor_get(v_snd_82_, 0);
lean_inc(v_fst_84_);
v_snd_85_ = lean_ctor_get(v_snd_82_, 1);
lean_inc(v_snd_85_);
lean_dec(v_snd_82_);
v___x_86_ = l_Int_repr(v_fst_84_);
lean_dec(v_fst_84_);
v___x_87_ = lean_string_append(v_fst_83_, v___x_86_);
lean_dec_ref(v___x_86_);
v___x_88_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_89_ = lean_int_dec_eq(v_nano_53_, v___x_88_);
lean_dec(v_nano_53_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_90_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__15));
v___x_91_ = lean_unsigned_to_nat(9u);
v___x_92_ = l_Int_repr(v_snd_85_);
lean_dec(v_snd_85_);
v___x_93_ = l_Std_Time_instToStringDuration_leftPad(v___x_91_, v___x_92_);
lean_dec_ref(v___x_92_);
v___x_94_ = lean_string_append(v___x_90_, v___x_93_);
lean_dec_ref(v___x_93_);
v___y_60_ = v___x_87_;
v___y_61_ = v___x_94_;
goto v___jp_59_;
}
else
{
lean_object* v___x_95_; 
lean_dec(v_snd_85_);
v___x_95_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___lam__0___closed__0));
v___y_60_ = v___x_87_;
v___y_61_ = v___x_95_;
goto v___jp_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr(lean_object* v_x_109_, lean_object* v_prec_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Std_Time_instReprWallTime_repr___redArg(v_x_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___boxed(lean_object* v_x_112_, lean_object* v_prec_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Std_Time_instReprWallTime_repr(v_x_112_, v_prec_113_);
lean_dec(v_prec_113_);
return v_res_114_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime_decEq(lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_117_, v_x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime_decEq___boxed(lean_object* v_x_120_, lean_object* v_x_121_){
_start:
{
uint8_t v_res_122_; lean_object* v_r_123_; 
v_res_122_ = l_Std_Time_instDecidableEqWallTime_decEq(v_x_120_, v_x_121_);
lean_dec_ref(v_x_121_);
lean_dec_ref(v_x_120_);
v_r_123_ = lean_box(v_res_122_);
return v_r_123_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime(lean_object* v_x_124_, lean_object* v_x_125_){
_start:
{
uint8_t v___x_126_; 
v___x_126_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_124_, v_x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime___boxed(lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
uint8_t v_res_129_; lean_object* v_r_130_; 
v_res_129_ = l_Std_Time_instDecidableEqWallTime(v_x_127_, v_x_128_);
lean_dec_ref(v_x_128_);
lean_dec_ref(v_x_127_);
v_r_130_ = lean_box(v_res_129_);
return v_r_130_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedWallTime_default___closed__0(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedWallTime_default(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_obj_once(&l_Std_Time_instInhabitedWallTime_default___closed__0, &l_Std_Time_instInhabitedWallTime_default___closed__0_once, _init_l_Std_Time_instInhabitedWallTime_default___closed__0);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instInhabitedWallTime_default_spec__0(lean_object* v_a_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_nat_to_int(v_a_134_);
v___x_136_ = l_Rat_ofInt(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedWallTime(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Std_Time_instInhabitedWallTime_default;
return v___x_137_;
}
}
static lean_object* _init_l_Std_Time_instLEWallTime(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_box(0);
return v___x_138_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeWallTime(lean_object* v_x_139_, lean_object* v_y_140_){
_start:
{
uint8_t v___x_141_; 
v___x_141_ = l_Std_Time_Duration_instDecidableLe(v_x_139_, v_y_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeWallTime___boxed(lean_object* v_x_142_, lean_object* v_y_143_){
_start:
{
uint8_t v_res_144_; lean_object* v_r_145_; 
v_res_144_ = l_Std_Time_instDecidableLeWallTime(v_x_142_, v_y_143_);
lean_dec_ref(v_y_143_);
lean_dec_ref(v_x_142_);
v_r_145_ = lean_box(v_res_144_);
return v_r_145_;
}
}
static lean_object* _init_l_Std_Time_instLTWallTime(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_box(0);
return v___x_146_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtWallTime(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = l_Std_Time_Duration_instDecidableLt(v_x_147_, v_y_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtWallTime___boxed(lean_object* v_x_150_, lean_object* v_y_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = l_Std_Time_instDecidableLtWallTime(v_x_150_, v_y_151_);
lean_dec_ref(v_y_151_);
lean_dec_ref(v_x_150_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0(lean_object* v_x_154_){
_start:
{
lean_inc_ref(v_x_154_);
return v_x_154_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0___boxed(lean_object* v_x_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Std_Time_instOrdWallTime___lam__0(v_x_155_);
lean_dec_ref(v_x_155_);
return v_res_156_;
}
}
static lean_object* _init_l_Std_Time_instOrdWallTime___closed__1(void){
_start:
{
lean_object* v___f_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___f_158_ = ((lean_object*)(l_Std_Time_instOrdWallTime___closed__0));
v___x_159_ = l_Std_Time_instOrdDuration;
v___x_160_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_160_, 0, lean_box(0));
lean_closure_set(v___x_160_, 1, lean_box(0));
lean_closure_set(v___x_160_, 2, v___x_159_);
lean_closure_set(v___x_160_, 3, v___f_158_);
return v___x_160_;
}
}
static lean_object* _init_l_Std_Time_instOrdWallTime(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_obj_once(&l_Std_Time_instOrdWallTime___closed__1, &l_Std_Time_instOrdWallTime___closed__1_once, _init_l_Std_Time_instOrdWallTime___closed__1);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0(lean_object* v_s_162_){
_start:
{
lean_object* v_second_163_; lean_object* v___x_164_; 
v_second_163_ = lean_ctor_get(v_s_162_, 0);
v___x_164_ = l_Int_repr(v_second_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0___boxed(lean_object* v_s_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Std_Time_instToStringWallTime___lam__0(v_s_165_);
lean_dec_ref(v_s_165_);
return v_res_166_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(1000000000u);
v___x_173_ = lean_nat_to_int(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0(lean_object* v_s_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_second_176_; lean_object* v_nano_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_191_; 
v_second_176_ = lean_ctor_get(v_s_174_, 0);
v_nano_177_ = lean_ctor_get(v_s_174_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v_s_174_);
if (v_isSharedCheck_191_ == 0)
{
v___x_179_ = v_s_174_;
v_isShared_180_ = v_isSharedCheck_191_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_nano_177_);
lean_inc(v_second_176_);
lean_dec(v_s_174_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_191_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v_nanos_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_181_ = ((lean_object*)(l_Std_Time_instReprWallTime__1___lam__0___closed__1));
v___x_182_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_183_ = lean_int_mul(v_second_176_, v___x_182_);
lean_dec(v_second_176_);
v_nanos_184_ = lean_int_add(v___x_183_, v_nano_177_);
lean_dec(v_nano_177_);
lean_dec(v___x_183_);
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v_nanos_184_, v___x_185_);
lean_dec(v_nanos_184_);
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 5);
lean_ctor_set(v___x_179_, 1, v___x_186_);
lean_ctor_set(v___x_179_, 0, v___x_181_);
v___x_188_ = v___x_179_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_186_);
v___x_188_ = v_reuseFailAlloc_190_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; 
v___x_189_ = l_Repr_addAppParen(v___x_188_, v___y_175_);
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0___boxed(lean_object* v_s_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Std_Time_instReprWallTime__1___lam__0(v_s_192_, v___y_193_);
lean_dec(v___y_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration(lean_object* v_duration_197_){
_start:
{
lean_inc_ref(v_duration_197_);
return v_duration_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration___boxed(lean_object* v_duration_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Std_Time_WallTime_ofDuration(v_duration_198_);
lean_dec_ref(v_duration_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofSeconds(lean_object* v_secs_200_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v_secs_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds(lean_object* v_nanos_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds___boxed(lean_object* v_nanos_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Std_Time_WallTime_ofNanoseconds(v_nanos_205_);
lean_dec(v_nanos_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds(lean_object* v_wt_207_){
_start:
{
lean_object* v_second_208_; 
v_second_208_ = lean_ctor_get(v_wt_207_, 0);
lean_inc(v_second_208_);
return v_second_208_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds___boxed(lean_object* v_wt_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Std_Time_WallTime_toSeconds(v_wt_209_);
lean_dec_ref(v_wt_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds(lean_object* v_wt_211_){
_start:
{
lean_object* v_second_212_; lean_object* v_nano_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v_nanos_216_; 
v_second_212_ = lean_ctor_get(v_wt_211_, 0);
v_nano_213_ = lean_ctor_get(v_wt_211_, 1);
v___x_214_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_215_ = lean_int_mul(v_second_212_, v___x_214_);
v_nanos_216_ = lean_int_add(v___x_215_, v_nano_213_);
lean_dec(v___x_215_);
return v_nanos_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds___boxed(lean_object* v_wt_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Std_Time_WallTime_toNanoseconds(v_wt_217_);
lean_dec_ref(v_wt_217_);
return v_res_218_;
}
}
static lean_object* _init_l_Std_Time_WallTime_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(60u);
v___x_220_ = lean_nat_to_int(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes(lean_object* v_tm_221_){
_start:
{
lean_object* v_second_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_second_222_ = lean_ctor_get(v_tm_221_, 0);
v___x_223_ = lean_obj_once(&l_Std_Time_WallTime_toMinutes___closed__0, &l_Std_Time_WallTime_toMinutes___closed__0_once, _init_l_Std_Time_WallTime_toMinutes___closed__0);
v___x_224_ = lean_int_div(v_second_222_, v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes___boxed(lean_object* v_tm_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Std_Time_WallTime_toMinutes(v_tm_225_);
lean_dec_ref(v_tm_225_);
return v_res_226_;
}
}
static lean_object* _init_l_Std_Time_WallTime_toDays___closed__0(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_unsigned_to_nat(86400u);
v___x_228_ = lean_nat_to_int(v___x_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays(lean_object* v_tm_229_){
_start:
{
lean_object* v_second_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_second_230_ = lean_ctor_get(v_tm_229_, 0);
v___x_231_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_232_ = lean_int_div(v_second_230_, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays___boxed(lean_object* v_tm_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Std_Time_WallTime_toDays(v_tm_233_);
lean_dec_ref(v_tm_233_);
return v_res_234_;
}
}
static lean_object* _init_l_Std_Time_WallTime_ofMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(1000000u);
v___x_236_ = lean_nat_to_int(v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds(lean_object* v_milli_237_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_239_ = lean_int_mul(v_milli_237_, v___x_238_);
v___x_240_ = l_Std_Time_Duration_ofNanoseconds(v___x_239_);
lean_dec(v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds___boxed(lean_object* v_milli_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Std_Time_WallTime_ofMilliseconds(v_milli_241_);
lean_dec(v_milli_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds(lean_object* v_tm_243_){
_start:
{
lean_object* v_second_244_; lean_object* v_nano_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_second_244_ = lean_ctor_get(v_tm_243_, 0);
v_nano_245_ = lean_ctor_get(v_tm_243_, 1);
v___x_246_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_247_ = lean_int_mul(v_second_244_, v___x_246_);
v___x_248_ = lean_int_add(v___x_247_, v_nano_245_);
lean_dec(v___x_247_);
v___x_249_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_250_ = lean_int_div(v___x_248_, v___x_249_);
lean_dec(v___x_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds___boxed(lean_object* v_tm_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Std_Time_WallTime_toMilliseconds(v_tm_251_);
lean_dec_ref(v_tm_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds(lean_object* v_t_253_, lean_object* v_s_254_){
_start:
{
lean_object* v_second_255_; lean_object* v_nano_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_second_260_; lean_object* v_nano_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_nanos_264_; lean_object* v___x_265_; lean_object* v_nanos_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_second_255_ = lean_ctor_get(v_t_253_, 0);
v_nano_256_ = lean_ctor_get(v_t_253_, 1);
v___x_257_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_258_ = lean_int_mul(v_s_254_, v___x_257_);
v___x_259_ = l_Std_Time_Duration_ofNanoseconds(v___x_258_);
lean_dec(v___x_258_);
v_second_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_second_260_);
v_nano_261_ = lean_ctor_get(v___x_259_, 1);
lean_inc(v_nano_261_);
lean_dec_ref(v___x_259_);
v___x_262_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_263_ = lean_int_mul(v_second_255_, v___x_262_);
v_nanos_264_ = lean_int_add(v___x_263_, v_nano_256_);
lean_dec(v___x_263_);
v___x_265_ = lean_int_mul(v_second_260_, v___x_262_);
lean_dec(v_second_260_);
v_nanos_266_ = lean_int_add(v___x_265_, v_nano_261_);
lean_dec(v_nano_261_);
lean_dec(v___x_265_);
v___x_267_ = lean_int_add(v_nanos_264_, v_nanos_266_);
lean_dec(v_nanos_266_);
lean_dec(v_nanos_264_);
v___x_268_ = l_Std_Time_Duration_ofNanoseconds(v___x_267_);
lean_dec(v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds___boxed(lean_object* v_t_269_, lean_object* v_s_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Std_Time_WallTime_addMilliseconds(v_t_269_, v_s_270_);
lean_dec(v_s_270_);
lean_dec_ref(v_t_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds(lean_object* v_t_272_, lean_object* v_s_273_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_second_277_; lean_object* v_nano_278_; lean_object* v_second_279_; lean_object* v_nano_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v_nanos_285_; lean_object* v___x_286_; lean_object* v_nanos_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_274_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_275_ = lean_int_mul(v_s_273_, v___x_274_);
v___x_276_ = l_Std_Time_Duration_ofNanoseconds(v___x_275_);
lean_dec(v___x_275_);
v_second_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_second_277_);
v_nano_278_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_nano_278_);
lean_dec_ref(v___x_276_);
v_second_279_ = lean_ctor_get(v_t_272_, 0);
v_nano_280_ = lean_ctor_get(v_t_272_, 1);
v___x_281_ = lean_int_neg(v_second_277_);
lean_dec(v_second_277_);
v___x_282_ = lean_int_neg(v_nano_278_);
lean_dec(v_nano_278_);
v___x_283_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_284_ = lean_int_mul(v_second_279_, v___x_283_);
v_nanos_285_ = lean_int_add(v___x_284_, v_nano_280_);
lean_dec(v___x_284_);
v___x_286_ = lean_int_mul(v___x_281_, v___x_283_);
lean_dec(v___x_281_);
v_nanos_287_ = lean_int_add(v___x_286_, v___x_282_);
lean_dec(v___x_282_);
lean_dec(v___x_286_);
v___x_288_ = lean_int_add(v_nanos_285_, v_nanos_287_);
lean_dec(v_nanos_287_);
lean_dec(v_nanos_285_);
v___x_289_ = l_Std_Time_Duration_ofNanoseconds(v___x_288_);
lean_dec(v___x_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds___boxed(lean_object* v_t_290_, lean_object* v_s_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Std_Time_WallTime_subMilliseconds(v_t_290_, v_s_291_);
lean_dec(v_s_291_);
lean_dec_ref(v_t_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds(lean_object* v_t_293_, lean_object* v_s_294_){
_start:
{
lean_object* v_second_295_; lean_object* v_nano_296_; lean_object* v___x_297_; lean_object* v_second_298_; lean_object* v_nano_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_nanos_302_; lean_object* v___x_303_; lean_object* v_nanos_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v_second_295_ = lean_ctor_get(v_t_293_, 0);
v_nano_296_ = lean_ctor_get(v_t_293_, 1);
v___x_297_ = l_Std_Time_Duration_ofNanoseconds(v_s_294_);
v_second_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_second_298_);
v_nano_299_ = lean_ctor_get(v___x_297_, 1);
lean_inc(v_nano_299_);
lean_dec_ref(v___x_297_);
v___x_300_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_301_ = lean_int_mul(v_second_295_, v___x_300_);
v_nanos_302_ = lean_int_add(v___x_301_, v_nano_296_);
lean_dec(v___x_301_);
v___x_303_ = lean_int_mul(v_second_298_, v___x_300_);
lean_dec(v_second_298_);
v_nanos_304_ = lean_int_add(v___x_303_, v_nano_299_);
lean_dec(v_nano_299_);
lean_dec(v___x_303_);
v___x_305_ = lean_int_add(v_nanos_302_, v_nanos_304_);
lean_dec(v_nanos_304_);
lean_dec(v_nanos_302_);
v___x_306_ = l_Std_Time_Duration_ofNanoseconds(v___x_305_);
lean_dec(v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds___boxed(lean_object* v_t_307_, lean_object* v_s_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Std_Time_WallTime_addNanoseconds(v_t_307_, v_s_308_);
lean_dec(v_s_308_);
lean_dec_ref(v_t_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds(lean_object* v_t_310_, lean_object* v_s_311_){
_start:
{
lean_object* v___x_312_; lean_object* v_second_313_; lean_object* v_nano_314_; lean_object* v_second_315_; lean_object* v_nano_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v_nanos_321_; lean_object* v___x_322_; lean_object* v_nanos_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_312_ = l_Std_Time_Duration_ofNanoseconds(v_s_311_);
v_second_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_second_313_);
v_nano_314_ = lean_ctor_get(v___x_312_, 1);
lean_inc(v_nano_314_);
lean_dec_ref(v___x_312_);
v_second_315_ = lean_ctor_get(v_t_310_, 0);
v_nano_316_ = lean_ctor_get(v_t_310_, 1);
v___x_317_ = lean_int_neg(v_second_313_);
lean_dec(v_second_313_);
v___x_318_ = lean_int_neg(v_nano_314_);
lean_dec(v_nano_314_);
v___x_319_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_320_ = lean_int_mul(v_second_315_, v___x_319_);
v_nanos_321_ = lean_int_add(v___x_320_, v_nano_316_);
lean_dec(v___x_320_);
v___x_322_ = lean_int_mul(v___x_317_, v___x_319_);
lean_dec(v___x_317_);
v_nanos_323_ = lean_int_add(v___x_322_, v___x_318_);
lean_dec(v___x_318_);
lean_dec(v___x_322_);
v___x_324_ = lean_int_add(v_nanos_321_, v_nanos_323_);
lean_dec(v_nanos_323_);
lean_dec(v_nanos_321_);
v___x_325_ = l_Std_Time_Duration_ofNanoseconds(v___x_324_);
lean_dec(v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds___boxed(lean_object* v_t_326_, lean_object* v_s_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Std_Time_WallTime_subNanoseconds(v_t_326_, v_s_327_);
lean_dec(v_s_327_);
lean_dec_ref(v_t_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds(lean_object* v_t_329_, lean_object* v_s_330_){
_start:
{
lean_object* v_second_331_; lean_object* v_nano_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v_nanos_336_; lean_object* v___x_337_; lean_object* v_nanos_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_second_331_ = lean_ctor_get(v_t_329_, 0);
v_nano_332_ = lean_ctor_get(v_t_329_, 1);
v___x_333_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_334_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_335_ = lean_int_mul(v_second_331_, v___x_334_);
v_nanos_336_ = lean_int_add(v___x_335_, v_nano_332_);
lean_dec(v___x_335_);
v___x_337_ = lean_int_mul(v_s_330_, v___x_334_);
v_nanos_338_ = lean_int_add(v___x_337_, v___x_333_);
lean_dec(v___x_337_);
v___x_339_ = lean_int_add(v_nanos_336_, v_nanos_338_);
lean_dec(v_nanos_338_);
lean_dec(v_nanos_336_);
v___x_340_ = l_Std_Time_Duration_ofNanoseconds(v___x_339_);
lean_dec(v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds___boxed(lean_object* v_t_341_, lean_object* v_s_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Std_Time_WallTime_addSeconds(v_t_341_, v_s_342_);
lean_dec(v_s_342_);
lean_dec_ref(v_t_341_);
return v_res_343_;
}
}
static lean_object* _init_l_Std_Time_WallTime_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_345_ = lean_int_neg(v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds(lean_object* v_t_346_, lean_object* v_s_347_){
_start:
{
lean_object* v_second_348_; lean_object* v_nano_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_nanos_354_; lean_object* v___x_355_; lean_object* v_nanos_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_second_348_ = lean_ctor_get(v_t_346_, 0);
v_nano_349_ = lean_ctor_get(v_t_346_, 1);
v___x_350_ = lean_int_neg(v_s_347_);
v___x_351_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_352_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_353_ = lean_int_mul(v_second_348_, v___x_352_);
v_nanos_354_ = lean_int_add(v___x_353_, v_nano_349_);
lean_dec(v___x_353_);
v___x_355_ = lean_int_mul(v___x_350_, v___x_352_);
lean_dec(v___x_350_);
v_nanos_356_ = lean_int_add(v___x_355_, v___x_351_);
lean_dec(v___x_355_);
v___x_357_ = lean_int_add(v_nanos_354_, v_nanos_356_);
lean_dec(v_nanos_356_);
lean_dec(v_nanos_354_);
v___x_358_ = l_Std_Time_Duration_ofNanoseconds(v___x_357_);
lean_dec(v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds___boxed(lean_object* v_t_359_, lean_object* v_s_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Std_Time_WallTime_subSeconds(v_t_359_, v_s_360_);
lean_dec(v_s_360_);
lean_dec_ref(v_t_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes(lean_object* v_t_362_, lean_object* v_m_363_){
_start:
{
lean_object* v_second_364_; lean_object* v_nano_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_nanos_371_; lean_object* v___x_372_; lean_object* v_nanos_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_second_364_ = lean_ctor_get(v_t_362_, 0);
v_nano_365_ = lean_ctor_get(v_t_362_, 1);
v___x_366_ = lean_obj_once(&l_Std_Time_WallTime_toMinutes___closed__0, &l_Std_Time_WallTime_toMinutes___closed__0_once, _init_l_Std_Time_WallTime_toMinutes___closed__0);
v___x_367_ = lean_int_mul(v_m_363_, v___x_366_);
v___x_368_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_369_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_370_ = lean_int_mul(v_second_364_, v___x_369_);
v_nanos_371_ = lean_int_add(v___x_370_, v_nano_365_);
lean_dec(v___x_370_);
v___x_372_ = lean_int_mul(v___x_367_, v___x_369_);
lean_dec(v___x_367_);
v_nanos_373_ = lean_int_add(v___x_372_, v___x_368_);
lean_dec(v___x_372_);
v___x_374_ = lean_int_add(v_nanos_371_, v_nanos_373_);
lean_dec(v_nanos_373_);
lean_dec(v_nanos_371_);
v___x_375_ = l_Std_Time_Duration_ofNanoseconds(v___x_374_);
lean_dec(v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes___boxed(lean_object* v_t_376_, lean_object* v_m_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Std_Time_WallTime_addMinutes(v_t_376_, v_m_377_);
lean_dec(v_m_377_);
lean_dec_ref(v_t_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes(lean_object* v_t_379_, lean_object* v_m_380_){
_start:
{
lean_object* v_second_381_; lean_object* v_nano_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v_nanos_389_; lean_object* v___x_390_; lean_object* v_nanos_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_second_381_ = lean_ctor_get(v_t_379_, 0);
v_nano_382_ = lean_ctor_get(v_t_379_, 1);
v___x_383_ = lean_obj_once(&l_Std_Time_WallTime_toMinutes___closed__0, &l_Std_Time_WallTime_toMinutes___closed__0_once, _init_l_Std_Time_WallTime_toMinutes___closed__0);
v___x_384_ = lean_int_mul(v_m_380_, v___x_383_);
v___x_385_ = lean_int_neg(v___x_384_);
lean_dec(v___x_384_);
v___x_386_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_387_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_388_ = lean_int_mul(v_second_381_, v___x_387_);
v_nanos_389_ = lean_int_add(v___x_388_, v_nano_382_);
lean_dec(v___x_388_);
v___x_390_ = lean_int_mul(v___x_385_, v___x_387_);
lean_dec(v___x_385_);
v_nanos_391_ = lean_int_add(v___x_390_, v___x_386_);
lean_dec(v___x_390_);
v___x_392_ = lean_int_add(v_nanos_389_, v_nanos_391_);
lean_dec(v_nanos_391_);
lean_dec(v_nanos_389_);
v___x_393_ = l_Std_Time_Duration_ofNanoseconds(v___x_392_);
lean_dec(v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes___boxed(lean_object* v_t_394_, lean_object* v_m_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Std_Time_WallTime_subMinutes(v_t_394_, v_m_395_);
lean_dec(v_m_395_);
lean_dec_ref(v_t_394_);
return v_res_396_;
}
}
static lean_object* _init_l_Std_Time_WallTime_addHours___closed__0(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_unsigned_to_nat(3600u);
v___x_398_ = lean_nat_to_int(v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours(lean_object* v_t_399_, lean_object* v_h_400_){
_start:
{
lean_object* v_second_401_; lean_object* v_nano_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_nanos_408_; lean_object* v___x_409_; lean_object* v_nanos_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v_second_401_ = lean_ctor_get(v_t_399_, 0);
v_nano_402_ = lean_ctor_get(v_t_399_, 1);
v___x_403_ = lean_obj_once(&l_Std_Time_WallTime_addHours___closed__0, &l_Std_Time_WallTime_addHours___closed__0_once, _init_l_Std_Time_WallTime_addHours___closed__0);
v___x_404_ = lean_int_mul(v_h_400_, v___x_403_);
v___x_405_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_406_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_407_ = lean_int_mul(v_second_401_, v___x_406_);
v_nanos_408_ = lean_int_add(v___x_407_, v_nano_402_);
lean_dec(v___x_407_);
v___x_409_ = lean_int_mul(v___x_404_, v___x_406_);
lean_dec(v___x_404_);
v_nanos_410_ = lean_int_add(v___x_409_, v___x_405_);
lean_dec(v___x_409_);
v___x_411_ = lean_int_add(v_nanos_408_, v_nanos_410_);
lean_dec(v_nanos_410_);
lean_dec(v_nanos_408_);
v___x_412_ = l_Std_Time_Duration_ofNanoseconds(v___x_411_);
lean_dec(v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours___boxed(lean_object* v_t_413_, lean_object* v_h_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Std_Time_WallTime_addHours(v_t_413_, v_h_414_);
lean_dec(v_h_414_);
lean_dec_ref(v_t_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours(lean_object* v_t_416_, lean_object* v_h_417_){
_start:
{
lean_object* v_second_418_; lean_object* v_nano_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v_nanos_426_; lean_object* v___x_427_; lean_object* v_nanos_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_second_418_ = lean_ctor_get(v_t_416_, 0);
v_nano_419_ = lean_ctor_get(v_t_416_, 1);
v___x_420_ = lean_obj_once(&l_Std_Time_WallTime_addHours___closed__0, &l_Std_Time_WallTime_addHours___closed__0_once, _init_l_Std_Time_WallTime_addHours___closed__0);
v___x_421_ = lean_int_mul(v_h_417_, v___x_420_);
v___x_422_ = lean_int_neg(v___x_421_);
lean_dec(v___x_421_);
v___x_423_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_424_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_425_ = lean_int_mul(v_second_418_, v___x_424_);
v_nanos_426_ = lean_int_add(v___x_425_, v_nano_419_);
lean_dec(v___x_425_);
v___x_427_ = lean_int_mul(v___x_422_, v___x_424_);
lean_dec(v___x_422_);
v_nanos_428_ = lean_int_add(v___x_427_, v___x_423_);
lean_dec(v___x_427_);
v___x_429_ = lean_int_add(v_nanos_426_, v_nanos_428_);
lean_dec(v_nanos_428_);
lean_dec(v_nanos_426_);
v___x_430_ = l_Std_Time_Duration_ofNanoseconds(v___x_429_);
lean_dec(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours___boxed(lean_object* v_t_431_, lean_object* v_h_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_Time_WallTime_subHours(v_t_431_, v_h_432_);
lean_dec(v_h_432_);
lean_dec_ref(v_t_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays(lean_object* v_t_434_, lean_object* v_d_435_){
_start:
{
lean_object* v_second_436_; lean_object* v_nano_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v_nanos_443_; lean_object* v___x_444_; lean_object* v_nanos_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_second_436_ = lean_ctor_get(v_t_434_, 0);
v_nano_437_ = lean_ctor_get(v_t_434_, 1);
v___x_438_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_439_ = lean_int_mul(v_d_435_, v___x_438_);
v___x_440_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_441_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_442_ = lean_int_mul(v_second_436_, v___x_441_);
v_nanos_443_ = lean_int_add(v___x_442_, v_nano_437_);
lean_dec(v___x_442_);
v___x_444_ = lean_int_mul(v___x_439_, v___x_441_);
lean_dec(v___x_439_);
v_nanos_445_ = lean_int_add(v___x_444_, v___x_440_);
lean_dec(v___x_444_);
v___x_446_ = lean_int_add(v_nanos_443_, v_nanos_445_);
lean_dec(v_nanos_445_);
lean_dec(v_nanos_443_);
v___x_447_ = l_Std_Time_Duration_ofNanoseconds(v___x_446_);
lean_dec(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays___boxed(lean_object* v_t_448_, lean_object* v_d_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Std_Time_WallTime_addDays(v_t_448_, v_d_449_);
lean_dec(v_d_449_);
lean_dec_ref(v_t_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays(lean_object* v_t_451_, lean_object* v_d_452_){
_start:
{
lean_object* v_second_453_; lean_object* v_nano_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v_nanos_461_; lean_object* v___x_462_; lean_object* v_nanos_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_second_453_ = lean_ctor_get(v_t_451_, 0);
v_nano_454_ = lean_ctor_get(v_t_451_, 1);
v___x_455_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_456_ = lean_int_mul(v_d_452_, v___x_455_);
v___x_457_ = lean_int_neg(v___x_456_);
lean_dec(v___x_456_);
v___x_458_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_459_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_460_ = lean_int_mul(v_second_453_, v___x_459_);
v_nanos_461_ = lean_int_add(v___x_460_, v_nano_454_);
lean_dec(v___x_460_);
v___x_462_ = lean_int_mul(v___x_457_, v___x_459_);
lean_dec(v___x_457_);
v_nanos_463_ = lean_int_add(v___x_462_, v___x_458_);
lean_dec(v___x_462_);
v___x_464_ = lean_int_add(v_nanos_461_, v_nanos_463_);
lean_dec(v_nanos_463_);
lean_dec(v_nanos_461_);
v___x_465_ = l_Std_Time_Duration_ofNanoseconds(v___x_464_);
lean_dec(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays___boxed(lean_object* v_t_466_, lean_object* v_d_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_Time_WallTime_subDays(v_t_466_, v_d_467_);
lean_dec(v_d_467_);
lean_dec_ref(v_t_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks(lean_object* v_t_469_, lean_object* v_d_470_){
_start:
{
lean_object* v_second_471_; lean_object* v_nano_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v_nanos_480_; lean_object* v___x_481_; lean_object* v_nanos_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_second_471_ = lean_ctor_get(v_t_469_, 0);
v_nano_472_ = lean_ctor_get(v_t_469_, 1);
v___x_473_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__7, &l_Std_Time_instReprWallTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7);
v___x_474_ = lean_int_mul(v_d_470_, v___x_473_);
v___x_475_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_476_ = lean_int_mul(v___x_474_, v___x_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_478_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_479_ = lean_int_mul(v_second_471_, v___x_478_);
v_nanos_480_ = lean_int_add(v___x_479_, v_nano_472_);
lean_dec(v___x_479_);
v___x_481_ = lean_int_mul(v___x_476_, v___x_478_);
lean_dec(v___x_476_);
v_nanos_482_ = lean_int_add(v___x_481_, v___x_477_);
lean_dec(v___x_481_);
v___x_483_ = lean_int_add(v_nanos_480_, v_nanos_482_);
lean_dec(v_nanos_482_);
lean_dec(v_nanos_480_);
v___x_484_ = l_Std_Time_Duration_ofNanoseconds(v___x_483_);
lean_dec(v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks___boxed(lean_object* v_t_485_, lean_object* v_d_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Std_Time_WallTime_addWeeks(v_t_485_, v_d_486_);
lean_dec(v_d_486_);
lean_dec_ref(v_t_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks(lean_object* v_t_488_, lean_object* v_d_489_){
_start:
{
lean_object* v_second_490_; lean_object* v_nano_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_nanos_500_; lean_object* v___x_501_; lean_object* v_nanos_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v_second_490_ = lean_ctor_get(v_t_488_, 0);
v_nano_491_ = lean_ctor_get(v_t_488_, 1);
v___x_492_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__7, &l_Std_Time_instReprWallTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7);
v___x_493_ = lean_int_mul(v_d_489_, v___x_492_);
v___x_494_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_495_ = lean_int_mul(v___x_493_, v___x_494_);
lean_dec(v___x_493_);
v___x_496_ = lean_int_neg(v___x_495_);
lean_dec(v___x_495_);
v___x_497_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_498_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_499_ = lean_int_mul(v_second_490_, v___x_498_);
v_nanos_500_ = lean_int_add(v___x_499_, v_nano_491_);
lean_dec(v___x_499_);
v___x_501_ = lean_int_mul(v___x_496_, v___x_498_);
lean_dec(v___x_496_);
v_nanos_502_ = lean_int_add(v___x_501_, v___x_497_);
lean_dec(v___x_501_);
v___x_503_ = lean_int_add(v_nanos_500_, v_nanos_502_);
lean_dec(v_nanos_502_);
lean_dec(v_nanos_500_);
v___x_504_ = l_Std_Time_Duration_ofNanoseconds(v___x_503_);
lean_dec(v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks___boxed(lean_object* v_t_505_, lean_object* v_d_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Std_Time_WallTime_subWeeks(v_t_505_, v_d_506_);
lean_dec(v_d_506_);
lean_dec_ref(v_t_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration(lean_object* v_t_508_, lean_object* v_d_509_){
_start:
{
lean_object* v_second_510_; lean_object* v_nano_511_; lean_object* v_second_512_; lean_object* v_nano_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v_nanos_516_; lean_object* v___x_517_; lean_object* v_nanos_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_second_510_ = lean_ctor_get(v_t_508_, 0);
v_nano_511_ = lean_ctor_get(v_t_508_, 1);
v_second_512_ = lean_ctor_get(v_d_509_, 0);
v_nano_513_ = lean_ctor_get(v_d_509_, 1);
v___x_514_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_515_ = lean_int_mul(v_second_510_, v___x_514_);
v_nanos_516_ = lean_int_add(v___x_515_, v_nano_511_);
lean_dec(v___x_515_);
v___x_517_ = lean_int_mul(v_second_512_, v___x_514_);
v_nanos_518_ = lean_int_add(v___x_517_, v_nano_513_);
lean_dec(v___x_517_);
v___x_519_ = lean_int_add(v_nanos_516_, v_nanos_518_);
lean_dec(v_nanos_518_);
lean_dec(v_nanos_516_);
v___x_520_ = l_Std_Time_Duration_ofNanoseconds(v___x_519_);
lean_dec(v___x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration___boxed(lean_object* v_t_521_, lean_object* v_d_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Std_Time_WallTime_addDuration(v_t_521_, v_d_522_);
lean_dec_ref(v_d_522_);
lean_dec_ref(v_t_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration(lean_object* v_t_524_, lean_object* v_d_525_){
_start:
{
lean_object* v_second_526_; lean_object* v_nano_527_; lean_object* v_second_528_; lean_object* v_nano_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v_nanos_534_; lean_object* v___x_535_; lean_object* v_nanos_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_second_526_ = lean_ctor_get(v_d_525_, 0);
v_nano_527_ = lean_ctor_get(v_d_525_, 1);
v_second_528_ = lean_ctor_get(v_t_524_, 0);
v_nano_529_ = lean_ctor_get(v_t_524_, 1);
v___x_530_ = lean_int_neg(v_second_526_);
v___x_531_ = lean_int_neg(v_nano_527_);
v___x_532_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_533_ = lean_int_mul(v_second_528_, v___x_532_);
v_nanos_534_ = lean_int_add(v___x_533_, v_nano_529_);
lean_dec(v___x_533_);
v___x_535_ = lean_int_mul(v___x_530_, v___x_532_);
lean_dec(v___x_530_);
v_nanos_536_ = lean_int_add(v___x_535_, v___x_531_);
lean_dec(v___x_531_);
lean_dec(v___x_535_);
v___x_537_ = lean_int_add(v_nanos_534_, v_nanos_536_);
lean_dec(v_nanos_536_);
lean_dec(v_nanos_534_);
v___x_538_ = l_Std_Time_Duration_ofNanoseconds(v___x_537_);
lean_dec(v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration___boxed(lean_object* v_t_539_, lean_object* v_d_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Std_Time_WallTime_subDuration(v_t_539_, v_d_540_);
lean_dec_ref(v_d_540_);
lean_dec_ref(v_t_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration(lean_object* v_wt_542_){
_start:
{
lean_inc_ref(v_wt_542_);
return v_wt_542_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration___boxed(lean_object* v_wt_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Std_Time_WallTime_toDuration(v_wt_543_);
lean_dec_ref(v_wt_543_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0(lean_object* v_x_577_, lean_object* v_y_578_){
_start:
{
lean_object* v_second_579_; lean_object* v_nano_580_; lean_object* v_second_581_; lean_object* v_nano_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v_nanos_587_; lean_object* v___x_588_; lean_object* v_nanos_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v_second_579_ = lean_ctor_get(v_y_578_, 0);
v_nano_580_ = lean_ctor_get(v_y_578_, 1);
v_second_581_ = lean_ctor_get(v_x_577_, 0);
v_nano_582_ = lean_ctor_get(v_x_577_, 1);
v___x_583_ = lean_int_neg(v_second_579_);
v___x_584_ = lean_int_neg(v_nano_580_);
v___x_585_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_586_ = lean_int_mul(v_second_581_, v___x_585_);
v_nanos_587_ = lean_int_add(v___x_586_, v_nano_582_);
lean_dec(v___x_586_);
v___x_588_ = lean_int_mul(v___x_583_, v___x_585_);
lean_dec(v___x_583_);
v_nanos_589_ = lean_int_add(v___x_588_, v___x_584_);
lean_dec(v___x_584_);
lean_dec(v___x_588_);
v___x_590_ = lean_int_add(v_nanos_587_, v_nanos_589_);
lean_dec(v_nanos_589_);
lean_dec(v_nanos_587_);
v___x_591_ = l_Std_Time_Duration_ofNanoseconds(v___x_590_);
lean_dec(v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0___boxed(lean_object* v_x_592_, lean_object* v_y_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Std_Time_WallTime_instHSubDuration__1___lam__0(v_x_592_, v_y_593_);
lean_dec_ref(v_y_593_);
lean_dec_ref(v_x_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instOfNat(lean_object* v_n_597_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_598_ = lean_nat_to_int(v_n_597_);
v___x_599_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
return v___x_600_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_DateTime_WallTime(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedWallTime_default = _init_l_Std_Time_instInhabitedWallTime_default();
lean_mark_persistent(l_Std_Time_instInhabitedWallTime_default);
l_Std_Time_instInhabitedWallTime = _init_l_Std_Time_instInhabitedWallTime();
lean_mark_persistent(l_Std_Time_instInhabitedWallTime);
l_Std_Time_instLEWallTime = _init_l_Std_Time_instLEWallTime();
lean_mark_persistent(l_Std_Time_instLEWallTime);
l_Std_Time_instLTWallTime = _init_l_Std_Time_instLTWallTime();
lean_mark_persistent(l_Std_Time_instLTWallTime);
l_Std_Time_instOrdWallTime = _init_l_Std_Time_instOrdWallTime();
lean_mark_persistent(l_Std_Time_instOrdWallTime);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_DateTime_WallTime(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Time_Duration(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_DateTime_WallTime(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_DateTime_WallTime(builtin);
}
#ifdef __cplusplus
}
#endif
