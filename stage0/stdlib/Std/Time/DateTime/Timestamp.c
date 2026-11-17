// Lean compiler output
// Module: Std.Time.DateTime.Timestamp
// Imports: public import Init.System.IO public import Std.Time.Duration public import Std.Time.DateTime.WallTime
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
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
extern lean_object* l_Std_Time_instOrdDuration;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprTimestamp_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__9_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__11;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__14;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprTimestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprTimestamp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprTimestamp___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprTimestamp = (const lean_object*)&l_Std_Time_instReprTimestamp___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedTimestamp_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedTimestamp_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedTimestamp_default;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instInhabitedTimestamp_default_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedTimestamp;
LEAN_EXPORT lean_object* l_Std_Time_instLETimestamp;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instLTTimestamp;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instToStringTimestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instToStringTimestamp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instToStringTimestamp___closed__0 = (const lean_object*)&l_Std_Time_instToStringTimestamp___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instToStringTimestamp = (const lean_object*)&l_Std_Time_instToStringTimestamp___closed__0_value;
static const lean_string_object l_Std_Time_instReprTimestamp__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Timestamp.ofNanoseconds "};
static const lean_object* l_Std_Time_instReprTimestamp__1___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp__1___lam__0___closed__0_value)}};
static const lean_object* l_Std_Time_instReprTimestamp__1___lam__0___closed__1 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___lam__0___closed__1_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp__1___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprTimestamp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprTimestamp__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprTimestamp__1___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprTimestamp__1 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdTimestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdTimestamp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdTimestamp___closed__0 = (const lean_object*)&l_Std_Time_instOrdTimestamp___closed__0_value;
static lean_once_cell_t l_Std_Time_instOrdTimestamp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdTimestamp___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp;
lean_object* lean_get_current_time();
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_now___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofSecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Timestamp_instHAddDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddDuration___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddDuration = (const lean_object*)&l_Std_Time_Timestamp_instHAddDuration___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubDuration___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubDuration = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__1 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__1 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__2 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__2 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__3 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__3 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__4 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__4 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__5 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__5 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__6 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__6 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__6___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Timestamp_instHSubDuration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_instHSubDuration__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubDuration__1___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubDuration__1 = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprTimestamp_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__0(lean_object* v_second_4_, lean_object* v_nano_5_, lean_object* v_00___6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___lam__0___closed__0));
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v_second_4_);
lean_ctor_set(v___x_8_, 1, v_nano_5_);
v___x_9_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_9_, 0, v___x_7_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__1(lean_object* v_second_11_, lean_object* v_nano_12_, lean_object* v_00___13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_14_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___lam__1___closed__0));
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
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg___lam__1___boxed(lean_object* v_second_19_, lean_object* v_nano_20_, lean_object* v_00___21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Std_Time_instReprTimestamp_repr___redArg___lam__1(v_second_19_, v_nano_20_, v_00___21_);
lean_dec(v_nano_20_);
lean_dec(v_second_19_);
return v_res_22_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(7u);
v___x_37_ = lean_nat_to_int(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__0));
v___x_41_ = lean_string_length(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__10, &l_Std_Time_instReprTimestamp_repr___redArg___closed__10_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__10);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_unsigned_to_nat(0u);
v___x_49_ = lean_nat_to_int(v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg(lean_object* v_x_51_){
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
v___x_57_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__6));
v___x_58_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__7, &l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7);
v___x_96_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
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
v___x_101_ = l_Std_Time_instReprTimestamp_repr___redArg___lam__0(v_second_52_, v_nano_53_, v___x_100_);
v___y_81_ = v___x_101_;
goto v___jp_80_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_box(0);
v___x_103_ = l_Std_Time_instReprTimestamp_repr___redArg___lam__1(v_second_52_, v_nano_53_, v___x_102_);
lean_dec(v_second_52_);
v___y_81_ = v___x_103_;
goto v___jp_80_;
}
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_box(0);
v___x_105_ = l_Std_Time_instReprTimestamp_repr___redArg___lam__1(v_second_52_, v_nano_53_, v___x_104_);
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
v___x_107_ = l_Std_Time_instReprTimestamp_repr___redArg___lam__0(v_second_52_, v_nano_53_, v___x_106_);
v___y_81_ = v___x_107_;
goto v___jp_80_;
}
v___jp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_62_ = lean_string_append(v___y_60_, v___y_61_);
lean_dec_ref(v___y_61_);
v___x_63_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__8));
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
v___x_72_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__11, &l_Std_Time_instReprTimestamp_repr___redArg___closed__11_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__11);
v___x_73_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__12));
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_71_);
v___x_75_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__13));
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
v___x_88_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_89_ = lean_int_dec_eq(v_nano_53_, v___x_88_);
lean_dec(v_nano_53_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_90_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__15));
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
v___x_95_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___lam__0___closed__0));
v___y_60_ = v___x_87_;
v___y_61_ = v___x_95_;
goto v___jp_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr(lean_object* v_x_109_, lean_object* v_prec_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Std_Time_instReprTimestamp_repr___redArg(v_x_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___boxed(lean_object* v_x_112_, lean_object* v_prec_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Std_Time_instReprTimestamp_repr(v_x_112_, v_prec_113_);
lean_dec(v_prec_113_);
return v_res_114_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp_decEq(lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_117_, v_x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp_decEq___boxed(lean_object* v_x_120_, lean_object* v_x_121_){
_start:
{
uint8_t v_res_122_; lean_object* v_r_123_; 
v_res_122_ = l_Std_Time_instDecidableEqTimestamp_decEq(v_x_120_, v_x_121_);
lean_dec_ref(v_x_121_);
lean_dec_ref(v_x_120_);
v_r_123_ = lean_box(v_res_122_);
return v_r_123_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp(lean_object* v_x_124_, lean_object* v_x_125_){
_start:
{
uint8_t v___x_126_; 
v___x_126_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_124_, v_x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp___boxed(lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
uint8_t v_res_129_; lean_object* v_r_130_; 
v_res_129_ = l_Std_Time_instDecidableEqTimestamp(v_x_127_, v_x_128_);
lean_dec_ref(v_x_128_);
lean_dec_ref(v_x_127_);
v_r_130_ = lean_box(v_res_129_);
return v_r_130_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimestamp_default___closed__0(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimestamp_default(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_obj_once(&l_Std_Time_instInhabitedTimestamp_default___closed__0, &l_Std_Time_instInhabitedTimestamp_default___closed__0_once, _init_l_Std_Time_instInhabitedTimestamp_default___closed__0);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instInhabitedTimestamp_default_spec__0(lean_object* v_a_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_nat_to_int(v_a_134_);
v___x_136_ = l_Rat_ofInt(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimestamp(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Std_Time_instInhabitedTimestamp_default;
return v___x_137_;
}
}
static lean_object* _init_l_Std_Time_instLETimestamp(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_box(0);
return v___x_138_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeTimestamp(lean_object* v_x_139_, lean_object* v_y_140_){
_start:
{
uint8_t v___x_141_; 
v___x_141_ = l_Std_Time_Duration_instDecidableLe(v_x_139_, v_y_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeTimestamp___boxed(lean_object* v_x_142_, lean_object* v_y_143_){
_start:
{
uint8_t v_res_144_; lean_object* v_r_145_; 
v_res_144_ = l_Std_Time_instDecidableLeTimestamp(v_x_142_, v_y_143_);
lean_dec_ref(v_y_143_);
lean_dec_ref(v_x_142_);
v_r_145_ = lean_box(v_res_144_);
return v_r_145_;
}
}
static lean_object* _init_l_Std_Time_instLTTimestamp(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_box(0);
return v___x_146_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtTimestamp(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = l_Std_Time_Duration_instDecidableLt(v_x_147_, v_y_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtTimestamp___boxed(lean_object* v_x_150_, lean_object* v_y_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = l_Std_Time_instDecidableLtTimestamp(v_x_150_, v_y_151_);
lean_dec_ref(v_y_151_);
lean_dec_ref(v_x_150_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0(lean_object* v_s_154_){
_start:
{
lean_object* v_second_155_; lean_object* v___x_156_; 
v_second_155_ = lean_ctor_get(v_s_154_, 0);
v___x_156_ = l_Int_repr(v_second_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0___boxed(lean_object* v_s_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Std_Time_instToStringTimestamp___lam__0(v_s_157_);
lean_dec_ref(v_s_157_);
return v_res_158_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(1000000000u);
v___x_165_ = lean_nat_to_int(v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0(lean_object* v_s_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_second_168_; lean_object* v_nano_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_183_; 
v_second_168_ = lean_ctor_get(v_s_166_, 0);
v_nano_169_ = lean_ctor_get(v_s_166_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v_s_166_);
if (v_isSharedCheck_183_ == 0)
{
v___x_171_ = v_s_166_;
v_isShared_172_ = v_isSharedCheck_183_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_nano_169_);
lean_inc(v_second_168_);
lean_dec(v_s_166_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_183_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v_nanos_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_173_ = ((lean_object*)(l_Std_Time_instReprTimestamp__1___lam__0___closed__1));
v___x_174_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_175_ = lean_int_mul(v_second_168_, v___x_174_);
lean_dec(v_second_168_);
v_nanos_176_ = lean_int_add(v___x_175_, v_nano_169_);
lean_dec(v_nano_169_);
lean_dec(v___x_175_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v_nanos_176_, v___x_177_);
lean_dec(v_nanos_176_);
if (v_isShared_172_ == 0)
{
lean_ctor_set_tag(v___x_171_, 5);
lean_ctor_set(v___x_171_, 1, v___x_178_);
lean_ctor_set(v___x_171_, 0, v___x_173_);
v___x_180_ = v___x_171_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_182_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_181_; 
v___x_181_ = l_Repr_addAppParen(v___x_180_, v___y_167_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0___boxed(lean_object* v_s_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Std_Time_instReprTimestamp__1___lam__0(v_s_184_, v___y_185_);
lean_dec(v___y_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0(lean_object* v_x_189_){
_start:
{
lean_inc_ref(v_x_189_);
return v_x_189_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0___boxed(lean_object* v_x_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Std_Time_instOrdTimestamp___lam__0(v_x_190_);
lean_dec_ref(v_x_190_);
return v_res_191_;
}
}
static lean_object* _init_l_Std_Time_instOrdTimestamp___closed__1(void){
_start:
{
lean_object* v___f_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___f_193_ = ((lean_object*)(l_Std_Time_instOrdTimestamp___closed__0));
v___x_194_ = l_Std_Time_instOrdDuration;
v___x_195_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_195_, 0, lean_box(0));
lean_closure_set(v___x_195_, 1, lean_box(0));
lean_closure_set(v___x_195_, 2, v___x_194_);
lean_closure_set(v___x_195_, 3, v___f_193_);
return v___x_195_;
}
}
static lean_object* _init_l_Std_Time_instOrdTimestamp(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_obj_once(&l_Std_Time_instOrdTimestamp___closed__1, &l_Std_Time_instOrdTimestamp___closed__1_once, _init_l_Std_Time_instOrdTimestamp___closed__1);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_now___boxed(lean_object* v_a_00___x40___internal___hyg_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = lean_get_current_time();
return v_res_199_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_unsigned_to_nat(60u);
v___x_201_ = lean_nat_to_int(v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch(lean_object* v_tm_202_){
_start:
{
lean_object* v_second_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v_second_203_ = lean_ctor_get(v_tm_202_, 0);
v___x_204_ = lean_obj_once(&l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0);
v___x_205_ = lean_int_div(v_second_203_, v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___boxed(lean_object* v_tm_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_Time_Timestamp_toMinutesSinceUnixEpoch(v_tm_206_);
lean_dec_ref(v_tm_206_);
return v_res_207_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(86400u);
v___x_209_ = lean_nat_to_int(v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch(lean_object* v_tm_210_){
_start:
{
lean_object* v_second_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_second_211_ = lean_ctor_get(v_tm_210_, 0);
v___x_212_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_213_ = lean_int_div(v_second_211_, v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch___boxed(lean_object* v_tm_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Std_Time_Timestamp_toDaysSinceUnixEpoch(v_tm_214_);
lean_dec_ref(v_tm_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofSecondsSinceUnixEpoch(lean_object* v_secs_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v_secs_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch(lean_object* v_nanos_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch___boxed(lean_object* v_nanos_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch(v_nanos_221_);
lean_dec(v_nanos_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch(lean_object* v_duration_223_){
_start:
{
lean_inc_ref(v_duration_223_);
return v_duration_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch___boxed(lean_object* v_duration_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Std_Time_Timestamp_ofDurationSinceUnixEpoch(v_duration_224_);
lean_dec_ref(v_duration_224_);
return v_res_225_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(1000000u);
v___x_227_ = lean_nat_to_int(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch(lean_object* v_milli_228_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_230_ = lean_int_mul(v_milli_228_, v___x_229_);
v___x_231_ = l_Std_Time_Duration_ofNanoseconds(v___x_230_);
lean_dec(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___boxed(lean_object* v_milli_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch(v_milli_232_);
lean_dec(v_milli_232_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch(lean_object* v_t_234_){
_start:
{
lean_object* v_second_235_; 
v_second_235_ = lean_ctor_get(v_t_234_, 0);
lean_inc(v_second_235_);
return v_second_235_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch___boxed(lean_object* v_t_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Std_Time_Timestamp_toSecondsSinceUnixEpoch(v_t_236_);
lean_dec_ref(v_t_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch(lean_object* v_tm_238_){
_start:
{
lean_object* v_second_239_; lean_object* v_nano_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_nanos_243_; 
v_second_239_ = lean_ctor_get(v_tm_238_, 0);
v_nano_240_ = lean_ctor_get(v_tm_238_, 1);
v___x_241_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_242_ = lean_int_mul(v_second_239_, v___x_241_);
v_nanos_243_ = lean_int_add(v___x_242_, v_nano_240_);
lean_dec(v___x_242_);
return v_nanos_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch___boxed(lean_object* v_tm_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch(v_tm_244_);
lean_dec_ref(v_tm_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch(lean_object* v_tm_246_){
_start:
{
lean_object* v_second_247_; lean_object* v_nano_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_second_247_ = lean_ctor_get(v_tm_246_, 0);
v_nano_248_ = lean_ctor_get(v_tm_246_, 1);
v___x_249_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_250_ = lean_int_mul(v_second_247_, v___x_249_);
v___x_251_ = lean_int_add(v___x_250_, v_nano_248_);
lean_dec(v___x_250_);
v___x_252_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_253_ = lean_int_div(v___x_251_, v___x_252_);
lean_dec(v___x_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch___boxed(lean_object* v_tm_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch(v_tm_254_);
lean_dec_ref(v_tm_254_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since(lean_object* v_f_256_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_get_current_time();
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_279_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_279_ == 0)
{
v___x_261_ = v___x_258_;
v_isShared_262_ = v_isSharedCheck_279_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_279_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v_second_263_; lean_object* v_nano_264_; lean_object* v_second_265_; lean_object* v_nano_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_nanos_271_; lean_object* v___x_272_; lean_object* v_nanos_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v_second_263_ = lean_ctor_get(v_f_256_, 0);
v_nano_264_ = lean_ctor_get(v_f_256_, 1);
v_second_265_ = lean_ctor_get(v_a_259_, 0);
lean_inc(v_second_265_);
v_nano_266_ = lean_ctor_get(v_a_259_, 1);
lean_inc(v_nano_266_);
lean_dec(v_a_259_);
v___x_267_ = lean_int_neg(v_second_263_);
v___x_268_ = lean_int_neg(v_nano_264_);
v___x_269_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_270_ = lean_int_mul(v_second_265_, v___x_269_);
lean_dec(v_second_265_);
v_nanos_271_ = lean_int_add(v___x_270_, v_nano_266_);
lean_dec(v_nano_266_);
lean_dec(v___x_270_);
v___x_272_ = lean_int_mul(v___x_267_, v___x_269_);
lean_dec(v___x_267_);
v_nanos_273_ = lean_int_add(v___x_272_, v___x_268_);
lean_dec(v___x_268_);
lean_dec(v___x_272_);
v___x_274_ = lean_int_add(v_nanos_271_, v_nanos_273_);
lean_dec(v_nanos_273_);
lean_dec(v_nanos_271_);
v___x_275_ = l_Std_Time_Duration_ofNanoseconds(v___x_274_);
lean_dec(v___x_274_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_275_);
v___x_277_ = v___x_261_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
v_a_280_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_287_ == 0)
{
v___x_282_ = v___x_258_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_258_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since___boxed(lean_object* v_f_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Std_Time_Timestamp_since(v_f_288_);
lean_dec_ref(v_f_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch(lean_object* v_tm_291_){
_start:
{
lean_inc_ref(v_tm_291_);
return v_tm_291_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch___boxed(lean_object* v_tm_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Std_Time_Timestamp_toDurationSinceUnixEpoch(v_tm_292_);
lean_dec_ref(v_tm_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds(lean_object* v_t_294_, lean_object* v_s_295_){
_start:
{
lean_object* v_second_296_; lean_object* v_nano_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v_second_301_; lean_object* v_nano_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v_nanos_305_; lean_object* v___x_306_; lean_object* v_nanos_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v_second_296_ = lean_ctor_get(v_t_294_, 0);
v_nano_297_ = lean_ctor_get(v_t_294_, 1);
v___x_298_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_299_ = lean_int_mul(v_s_295_, v___x_298_);
v___x_300_ = l_Std_Time_Duration_ofNanoseconds(v___x_299_);
lean_dec(v___x_299_);
v_second_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_second_301_);
v_nano_302_ = lean_ctor_get(v___x_300_, 1);
lean_inc(v_nano_302_);
lean_dec_ref(v___x_300_);
v___x_303_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_304_ = lean_int_mul(v_second_296_, v___x_303_);
v_nanos_305_ = lean_int_add(v___x_304_, v_nano_297_);
lean_dec(v___x_304_);
v___x_306_ = lean_int_mul(v_second_301_, v___x_303_);
lean_dec(v_second_301_);
v_nanos_307_ = lean_int_add(v___x_306_, v_nano_302_);
lean_dec(v_nano_302_);
lean_dec(v___x_306_);
v___x_308_ = lean_int_add(v_nanos_305_, v_nanos_307_);
lean_dec(v_nanos_307_);
lean_dec(v_nanos_305_);
v___x_309_ = l_Std_Time_Duration_ofNanoseconds(v___x_308_);
lean_dec(v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds___boxed(lean_object* v_t_310_, lean_object* v_s_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Std_Time_Timestamp_addMilliseconds(v_t_310_, v_s_311_);
lean_dec(v_s_311_);
lean_dec_ref(v_t_310_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds(lean_object* v_t_313_, lean_object* v_s_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v_second_318_; lean_object* v_nano_319_; lean_object* v_second_320_; lean_object* v_nano_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v_nanos_326_; lean_object* v___x_327_; lean_object* v_nanos_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_315_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_316_ = lean_int_mul(v_s_314_, v___x_315_);
v___x_317_ = l_Std_Time_Duration_ofNanoseconds(v___x_316_);
lean_dec(v___x_316_);
v_second_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_second_318_);
v_nano_319_ = lean_ctor_get(v___x_317_, 1);
lean_inc(v_nano_319_);
lean_dec_ref(v___x_317_);
v_second_320_ = lean_ctor_get(v_t_313_, 0);
v_nano_321_ = lean_ctor_get(v_t_313_, 1);
v___x_322_ = lean_int_neg(v_second_318_);
lean_dec(v_second_318_);
v___x_323_ = lean_int_neg(v_nano_319_);
lean_dec(v_nano_319_);
v___x_324_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_325_ = lean_int_mul(v_second_320_, v___x_324_);
v_nanos_326_ = lean_int_add(v___x_325_, v_nano_321_);
lean_dec(v___x_325_);
v___x_327_ = lean_int_mul(v___x_322_, v___x_324_);
lean_dec(v___x_322_);
v_nanos_328_ = lean_int_add(v___x_327_, v___x_323_);
lean_dec(v___x_323_);
lean_dec(v___x_327_);
v___x_329_ = lean_int_add(v_nanos_326_, v_nanos_328_);
lean_dec(v_nanos_328_);
lean_dec(v_nanos_326_);
v___x_330_ = l_Std_Time_Duration_ofNanoseconds(v___x_329_);
lean_dec(v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds___boxed(lean_object* v_t_331_, lean_object* v_s_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Std_Time_Timestamp_subMilliseconds(v_t_331_, v_s_332_);
lean_dec(v_s_332_);
lean_dec_ref(v_t_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds(lean_object* v_t_334_, lean_object* v_s_335_){
_start:
{
lean_object* v_second_336_; lean_object* v_nano_337_; lean_object* v___x_338_; lean_object* v_second_339_; lean_object* v_nano_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v_nanos_343_; lean_object* v___x_344_; lean_object* v_nanos_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_second_336_ = lean_ctor_get(v_t_334_, 0);
v_nano_337_ = lean_ctor_get(v_t_334_, 1);
v___x_338_ = l_Std_Time_Duration_ofNanoseconds(v_s_335_);
v_second_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_second_339_);
v_nano_340_ = lean_ctor_get(v___x_338_, 1);
lean_inc(v_nano_340_);
lean_dec_ref(v___x_338_);
v___x_341_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_342_ = lean_int_mul(v_second_336_, v___x_341_);
v_nanos_343_ = lean_int_add(v___x_342_, v_nano_337_);
lean_dec(v___x_342_);
v___x_344_ = lean_int_mul(v_second_339_, v___x_341_);
lean_dec(v_second_339_);
v_nanos_345_ = lean_int_add(v___x_344_, v_nano_340_);
lean_dec(v_nano_340_);
lean_dec(v___x_344_);
v___x_346_ = lean_int_add(v_nanos_343_, v_nanos_345_);
lean_dec(v_nanos_345_);
lean_dec(v_nanos_343_);
v___x_347_ = l_Std_Time_Duration_ofNanoseconds(v___x_346_);
lean_dec(v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds___boxed(lean_object* v_t_348_, lean_object* v_s_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Std_Time_Timestamp_addNanoseconds(v_t_348_, v_s_349_);
lean_dec(v_s_349_);
lean_dec_ref(v_t_348_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds(lean_object* v_t_351_, lean_object* v_s_352_){
_start:
{
lean_object* v___x_353_; lean_object* v_second_354_; lean_object* v_nano_355_; lean_object* v_second_356_; lean_object* v_nano_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_nanos_362_; lean_object* v___x_363_; lean_object* v_nanos_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_353_ = l_Std_Time_Duration_ofNanoseconds(v_s_352_);
v_second_354_ = lean_ctor_get(v___x_353_, 0);
lean_inc(v_second_354_);
v_nano_355_ = lean_ctor_get(v___x_353_, 1);
lean_inc(v_nano_355_);
lean_dec_ref(v___x_353_);
v_second_356_ = lean_ctor_get(v_t_351_, 0);
v_nano_357_ = lean_ctor_get(v_t_351_, 1);
v___x_358_ = lean_int_neg(v_second_354_);
lean_dec(v_second_354_);
v___x_359_ = lean_int_neg(v_nano_355_);
lean_dec(v_nano_355_);
v___x_360_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_361_ = lean_int_mul(v_second_356_, v___x_360_);
v_nanos_362_ = lean_int_add(v___x_361_, v_nano_357_);
lean_dec(v___x_361_);
v___x_363_ = lean_int_mul(v___x_358_, v___x_360_);
lean_dec(v___x_358_);
v_nanos_364_ = lean_int_add(v___x_363_, v___x_359_);
lean_dec(v___x_359_);
lean_dec(v___x_363_);
v___x_365_ = lean_int_add(v_nanos_362_, v_nanos_364_);
lean_dec(v_nanos_364_);
lean_dec(v_nanos_362_);
v___x_366_ = l_Std_Time_Duration_ofNanoseconds(v___x_365_);
lean_dec(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds___boxed(lean_object* v_t_367_, lean_object* v_s_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Std_Time_Timestamp_subNanoseconds(v_t_367_, v_s_368_);
lean_dec(v_s_368_);
lean_dec_ref(v_t_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds(lean_object* v_t_370_, lean_object* v_s_371_){
_start:
{
lean_object* v_second_372_; lean_object* v_nano_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v_nanos_377_; lean_object* v___x_378_; lean_object* v_nanos_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v_second_372_ = lean_ctor_get(v_t_370_, 0);
v_nano_373_ = lean_ctor_get(v_t_370_, 1);
v___x_374_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_375_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_376_ = lean_int_mul(v_second_372_, v___x_375_);
v_nanos_377_ = lean_int_add(v___x_376_, v_nano_373_);
lean_dec(v___x_376_);
v___x_378_ = lean_int_mul(v_s_371_, v___x_375_);
v_nanos_379_ = lean_int_add(v___x_378_, v___x_374_);
lean_dec(v___x_378_);
v___x_380_ = lean_int_add(v_nanos_377_, v_nanos_379_);
lean_dec(v_nanos_379_);
lean_dec(v_nanos_377_);
v___x_381_ = l_Std_Time_Duration_ofNanoseconds(v___x_380_);
lean_dec(v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds___boxed(lean_object* v_t_382_, lean_object* v_s_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Std_Time_Timestamp_addSeconds(v_t_382_, v_s_383_);
lean_dec(v_s_383_);
lean_dec_ref(v_t_382_);
return v_res_384_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_386_ = lean_int_neg(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds(lean_object* v_t_387_, lean_object* v_s_388_){
_start:
{
lean_object* v_second_389_; lean_object* v_nano_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v_nanos_395_; lean_object* v___x_396_; lean_object* v_nanos_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_second_389_ = lean_ctor_get(v_t_387_, 0);
v_nano_390_ = lean_ctor_get(v_t_387_, 1);
v___x_391_ = lean_int_neg(v_s_388_);
v___x_392_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_393_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_394_ = lean_int_mul(v_second_389_, v___x_393_);
v_nanos_395_ = lean_int_add(v___x_394_, v_nano_390_);
lean_dec(v___x_394_);
v___x_396_ = lean_int_mul(v___x_391_, v___x_393_);
lean_dec(v___x_391_);
v_nanos_397_ = lean_int_add(v___x_396_, v___x_392_);
lean_dec(v___x_396_);
v___x_398_ = lean_int_add(v_nanos_395_, v_nanos_397_);
lean_dec(v_nanos_397_);
lean_dec(v_nanos_395_);
v___x_399_ = l_Std_Time_Duration_ofNanoseconds(v___x_398_);
lean_dec(v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds___boxed(lean_object* v_t_400_, lean_object* v_s_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Std_Time_Timestamp_subSeconds(v_t_400_, v_s_401_);
lean_dec(v_s_401_);
lean_dec_ref(v_t_400_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes(lean_object* v_t_403_, lean_object* v_m_404_){
_start:
{
lean_object* v_second_405_; lean_object* v_nano_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v_nanos_412_; lean_object* v___x_413_; lean_object* v_nanos_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v_second_405_ = lean_ctor_get(v_t_403_, 0);
v_nano_406_ = lean_ctor_get(v_t_403_, 1);
v___x_407_ = lean_obj_once(&l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0);
v___x_408_ = lean_int_mul(v_m_404_, v___x_407_);
v___x_409_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_410_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_411_ = lean_int_mul(v_second_405_, v___x_410_);
v_nanos_412_ = lean_int_add(v___x_411_, v_nano_406_);
lean_dec(v___x_411_);
v___x_413_ = lean_int_mul(v___x_408_, v___x_410_);
lean_dec(v___x_408_);
v_nanos_414_ = lean_int_add(v___x_413_, v___x_409_);
lean_dec(v___x_413_);
v___x_415_ = lean_int_add(v_nanos_412_, v_nanos_414_);
lean_dec(v_nanos_414_);
lean_dec(v_nanos_412_);
v___x_416_ = l_Std_Time_Duration_ofNanoseconds(v___x_415_);
lean_dec(v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes___boxed(lean_object* v_t_417_, lean_object* v_m_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Std_Time_Timestamp_addMinutes(v_t_417_, v_m_418_);
lean_dec(v_m_418_);
lean_dec_ref(v_t_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes(lean_object* v_t_420_, lean_object* v_m_421_){
_start:
{
lean_object* v_second_422_; lean_object* v_nano_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v_nanos_430_; lean_object* v___x_431_; lean_object* v_nanos_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_second_422_ = lean_ctor_get(v_t_420_, 0);
v_nano_423_ = lean_ctor_get(v_t_420_, 1);
v___x_424_ = lean_obj_once(&l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0);
v___x_425_ = lean_int_mul(v_m_421_, v___x_424_);
v___x_426_ = lean_int_neg(v___x_425_);
lean_dec(v___x_425_);
v___x_427_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_428_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_429_ = lean_int_mul(v_second_422_, v___x_428_);
v_nanos_430_ = lean_int_add(v___x_429_, v_nano_423_);
lean_dec(v___x_429_);
v___x_431_ = lean_int_mul(v___x_426_, v___x_428_);
lean_dec(v___x_426_);
v_nanos_432_ = lean_int_add(v___x_431_, v___x_427_);
lean_dec(v___x_431_);
v___x_433_ = lean_int_add(v_nanos_430_, v_nanos_432_);
lean_dec(v_nanos_432_);
lean_dec(v_nanos_430_);
v___x_434_ = l_Std_Time_Duration_ofNanoseconds(v___x_433_);
lean_dec(v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes___boxed(lean_object* v_t_435_, lean_object* v_m_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Std_Time_Timestamp_subMinutes(v_t_435_, v_m_436_);
lean_dec(v_m_436_);
lean_dec_ref(v_t_435_);
return v_res_437_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_addHours___closed__0(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_unsigned_to_nat(3600u);
v___x_439_ = lean_nat_to_int(v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours(lean_object* v_t_440_, lean_object* v_h_441_){
_start:
{
lean_object* v_second_442_; lean_object* v_nano_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_nanos_449_; lean_object* v___x_450_; lean_object* v_nanos_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_second_442_ = lean_ctor_get(v_t_440_, 0);
v_nano_443_ = lean_ctor_get(v_t_440_, 1);
v___x_444_ = lean_obj_once(&l_Std_Time_Timestamp_addHours___closed__0, &l_Std_Time_Timestamp_addHours___closed__0_once, _init_l_Std_Time_Timestamp_addHours___closed__0);
v___x_445_ = lean_int_mul(v_h_441_, v___x_444_);
v___x_446_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_447_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_448_ = lean_int_mul(v_second_442_, v___x_447_);
v_nanos_449_ = lean_int_add(v___x_448_, v_nano_443_);
lean_dec(v___x_448_);
v___x_450_ = lean_int_mul(v___x_445_, v___x_447_);
lean_dec(v___x_445_);
v_nanos_451_ = lean_int_add(v___x_450_, v___x_446_);
lean_dec(v___x_450_);
v___x_452_ = lean_int_add(v_nanos_449_, v_nanos_451_);
lean_dec(v_nanos_451_);
lean_dec(v_nanos_449_);
v___x_453_ = l_Std_Time_Duration_ofNanoseconds(v___x_452_);
lean_dec(v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours___boxed(lean_object* v_t_454_, lean_object* v_h_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_Time_Timestamp_addHours(v_t_454_, v_h_455_);
lean_dec(v_h_455_);
lean_dec_ref(v_t_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours(lean_object* v_t_457_, lean_object* v_h_458_){
_start:
{
lean_object* v_second_459_; lean_object* v_nano_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_nanos_467_; lean_object* v___x_468_; lean_object* v_nanos_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_second_459_ = lean_ctor_get(v_t_457_, 0);
v_nano_460_ = lean_ctor_get(v_t_457_, 1);
v___x_461_ = lean_obj_once(&l_Std_Time_Timestamp_addHours___closed__0, &l_Std_Time_Timestamp_addHours___closed__0_once, _init_l_Std_Time_Timestamp_addHours___closed__0);
v___x_462_ = lean_int_mul(v_h_458_, v___x_461_);
v___x_463_ = lean_int_neg(v___x_462_);
lean_dec(v___x_462_);
v___x_464_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_465_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_466_ = lean_int_mul(v_second_459_, v___x_465_);
v_nanos_467_ = lean_int_add(v___x_466_, v_nano_460_);
lean_dec(v___x_466_);
v___x_468_ = lean_int_mul(v___x_463_, v___x_465_);
lean_dec(v___x_463_);
v_nanos_469_ = lean_int_add(v___x_468_, v___x_464_);
lean_dec(v___x_468_);
v___x_470_ = lean_int_add(v_nanos_467_, v_nanos_469_);
lean_dec(v_nanos_469_);
lean_dec(v_nanos_467_);
v___x_471_ = l_Std_Time_Duration_ofNanoseconds(v___x_470_);
lean_dec(v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours___boxed(lean_object* v_t_472_, lean_object* v_h_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Std_Time_Timestamp_subHours(v_t_472_, v_h_473_);
lean_dec(v_h_473_);
lean_dec_ref(v_t_472_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays(lean_object* v_t_475_, lean_object* v_d_476_){
_start:
{
lean_object* v_second_477_; lean_object* v_nano_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v_nanos_484_; lean_object* v___x_485_; lean_object* v_nanos_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_second_477_ = lean_ctor_get(v_t_475_, 0);
v_nano_478_ = lean_ctor_get(v_t_475_, 1);
v___x_479_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_480_ = lean_int_mul(v_d_476_, v___x_479_);
v___x_481_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_482_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_483_ = lean_int_mul(v_second_477_, v___x_482_);
v_nanos_484_ = lean_int_add(v___x_483_, v_nano_478_);
lean_dec(v___x_483_);
v___x_485_ = lean_int_mul(v___x_480_, v___x_482_);
lean_dec(v___x_480_);
v_nanos_486_ = lean_int_add(v___x_485_, v___x_481_);
lean_dec(v___x_485_);
v___x_487_ = lean_int_add(v_nanos_484_, v_nanos_486_);
lean_dec(v_nanos_486_);
lean_dec(v_nanos_484_);
v___x_488_ = l_Std_Time_Duration_ofNanoseconds(v___x_487_);
lean_dec(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays___boxed(lean_object* v_t_489_, lean_object* v_d_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Std_Time_Timestamp_addDays(v_t_489_, v_d_490_);
lean_dec(v_d_490_);
lean_dec_ref(v_t_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays(lean_object* v_t_492_, lean_object* v_d_493_){
_start:
{
lean_object* v_second_494_; lean_object* v_nano_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_nanos_502_; lean_object* v___x_503_; lean_object* v_nanos_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_second_494_ = lean_ctor_get(v_t_492_, 0);
v_nano_495_ = lean_ctor_get(v_t_492_, 1);
v___x_496_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_497_ = lean_int_mul(v_d_493_, v___x_496_);
v___x_498_ = lean_int_neg(v___x_497_);
lean_dec(v___x_497_);
v___x_499_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_500_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_501_ = lean_int_mul(v_second_494_, v___x_500_);
v_nanos_502_ = lean_int_add(v___x_501_, v_nano_495_);
lean_dec(v___x_501_);
v___x_503_ = lean_int_mul(v___x_498_, v___x_500_);
lean_dec(v___x_498_);
v_nanos_504_ = lean_int_add(v___x_503_, v___x_499_);
lean_dec(v___x_503_);
v___x_505_ = lean_int_add(v_nanos_502_, v_nanos_504_);
lean_dec(v_nanos_504_);
lean_dec(v_nanos_502_);
v___x_506_ = l_Std_Time_Duration_ofNanoseconds(v___x_505_);
lean_dec(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays___boxed(lean_object* v_t_507_, lean_object* v_d_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Std_Time_Timestamp_subDays(v_t_507_, v_d_508_);
lean_dec(v_d_508_);
lean_dec_ref(v_t_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks(lean_object* v_t_510_, lean_object* v_d_511_){
_start:
{
lean_object* v_second_512_; lean_object* v_nano_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v_nanos_521_; lean_object* v___x_522_; lean_object* v_nanos_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v_second_512_ = lean_ctor_get(v_t_510_, 0);
v_nano_513_ = lean_ctor_get(v_t_510_, 1);
v___x_514_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__7, &l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7);
v___x_515_ = lean_int_mul(v_d_511_, v___x_514_);
v___x_516_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_517_ = lean_int_mul(v___x_515_, v___x_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_519_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_520_ = lean_int_mul(v_second_512_, v___x_519_);
v_nanos_521_ = lean_int_add(v___x_520_, v_nano_513_);
lean_dec(v___x_520_);
v___x_522_ = lean_int_mul(v___x_517_, v___x_519_);
lean_dec(v___x_517_);
v_nanos_523_ = lean_int_add(v___x_522_, v___x_518_);
lean_dec(v___x_522_);
v___x_524_ = lean_int_add(v_nanos_521_, v_nanos_523_);
lean_dec(v_nanos_523_);
lean_dec(v_nanos_521_);
v___x_525_ = l_Std_Time_Duration_ofNanoseconds(v___x_524_);
lean_dec(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks___boxed(lean_object* v_t_526_, lean_object* v_d_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Std_Time_Timestamp_addWeeks(v_t_526_, v_d_527_);
lean_dec(v_d_527_);
lean_dec_ref(v_t_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks(lean_object* v_t_529_, lean_object* v_d_530_){
_start:
{
lean_object* v_second_531_; lean_object* v_nano_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v_nanos_541_; lean_object* v___x_542_; lean_object* v_nanos_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_second_531_ = lean_ctor_get(v_t_529_, 0);
v_nano_532_ = lean_ctor_get(v_t_529_, 1);
v___x_533_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__7, &l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7);
v___x_534_ = lean_int_mul(v_d_530_, v___x_533_);
v___x_535_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_536_ = lean_int_mul(v___x_534_, v___x_535_);
lean_dec(v___x_534_);
v___x_537_ = lean_int_neg(v___x_536_);
lean_dec(v___x_536_);
v___x_538_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_539_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_540_ = lean_int_mul(v_second_531_, v___x_539_);
v_nanos_541_ = lean_int_add(v___x_540_, v_nano_532_);
lean_dec(v___x_540_);
v___x_542_ = lean_int_mul(v___x_537_, v___x_539_);
lean_dec(v___x_537_);
v_nanos_543_ = lean_int_add(v___x_542_, v___x_538_);
lean_dec(v___x_542_);
v___x_544_ = lean_int_add(v_nanos_541_, v_nanos_543_);
lean_dec(v_nanos_543_);
lean_dec(v_nanos_541_);
v___x_545_ = l_Std_Time_Duration_ofNanoseconds(v___x_544_);
lean_dec(v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks___boxed(lean_object* v_t_546_, lean_object* v_d_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Std_Time_Timestamp_subWeeks(v_t_546_, v_d_547_);
lean_dec(v_d_547_);
lean_dec_ref(v_t_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration(lean_object* v_t_549_, lean_object* v_d_550_){
_start:
{
lean_object* v_second_551_; lean_object* v_nano_552_; lean_object* v_second_553_; lean_object* v_nano_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v_nanos_557_; lean_object* v___x_558_; lean_object* v_nanos_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_second_551_ = lean_ctor_get(v_t_549_, 0);
v_nano_552_ = lean_ctor_get(v_t_549_, 1);
v_second_553_ = lean_ctor_get(v_d_550_, 0);
v_nano_554_ = lean_ctor_get(v_d_550_, 1);
v___x_555_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_556_ = lean_int_mul(v_second_551_, v___x_555_);
v_nanos_557_ = lean_int_add(v___x_556_, v_nano_552_);
lean_dec(v___x_556_);
v___x_558_ = lean_int_mul(v_second_553_, v___x_555_);
v_nanos_559_ = lean_int_add(v___x_558_, v_nano_554_);
lean_dec(v___x_558_);
v___x_560_ = lean_int_add(v_nanos_557_, v_nanos_559_);
lean_dec(v_nanos_559_);
lean_dec(v_nanos_557_);
v___x_561_ = l_Std_Time_Duration_ofNanoseconds(v___x_560_);
lean_dec(v___x_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration___boxed(lean_object* v_t_562_, lean_object* v_d_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Std_Time_Timestamp_addDuration(v_t_562_, v_d_563_);
lean_dec_ref(v_d_563_);
lean_dec_ref(v_t_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration(lean_object* v_t_565_, lean_object* v_d_566_){
_start:
{
lean_object* v_second_567_; lean_object* v_nano_568_; lean_object* v_second_569_; lean_object* v_nano_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_nanos_575_; lean_object* v___x_576_; lean_object* v_nanos_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_second_567_ = lean_ctor_get(v_d_566_, 0);
v_nano_568_ = lean_ctor_get(v_d_566_, 1);
v_second_569_ = lean_ctor_get(v_t_565_, 0);
v_nano_570_ = lean_ctor_get(v_t_565_, 1);
v___x_571_ = lean_int_neg(v_second_567_);
v___x_572_ = lean_int_neg(v_nano_568_);
v___x_573_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_574_ = lean_int_mul(v_second_569_, v___x_573_);
v_nanos_575_ = lean_int_add(v___x_574_, v_nano_570_);
lean_dec(v___x_574_);
v___x_576_ = lean_int_mul(v___x_571_, v___x_573_);
lean_dec(v___x_571_);
v_nanos_577_ = lean_int_add(v___x_576_, v___x_572_);
lean_dec(v___x_572_);
lean_dec(v___x_576_);
v___x_578_ = lean_int_add(v_nanos_575_, v_nanos_577_);
lean_dec(v_nanos_577_);
lean_dec(v_nanos_575_);
v___x_579_ = l_Std_Time_Duration_ofNanoseconds(v___x_578_);
lean_dec(v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration___boxed(lean_object* v_t_580_, lean_object* v_d_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Std_Time_Timestamp_subDuration(v_t_580_, v_d_581_);
lean_dec_ref(v_d_581_);
lean_dec_ref(v_t_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0(lean_object* v_x_615_, lean_object* v_y_616_){
_start:
{
lean_object* v_second_617_; lean_object* v_nano_618_; lean_object* v_second_619_; lean_object* v_nano_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v_nanos_625_; lean_object* v___x_626_; lean_object* v_nanos_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v_second_617_ = lean_ctor_get(v_y_616_, 0);
v_nano_618_ = lean_ctor_get(v_y_616_, 1);
v_second_619_ = lean_ctor_get(v_x_615_, 0);
v_nano_620_ = lean_ctor_get(v_x_615_, 1);
v___x_621_ = lean_int_neg(v_second_617_);
v___x_622_ = lean_int_neg(v_nano_618_);
v___x_623_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_624_ = lean_int_mul(v_second_619_, v___x_623_);
v_nanos_625_ = lean_int_add(v___x_624_, v_nano_620_);
lean_dec(v___x_624_);
v___x_626_ = lean_int_mul(v___x_621_, v___x_623_);
lean_dec(v___x_621_);
v_nanos_627_ = lean_int_add(v___x_626_, v___x_622_);
lean_dec(v___x_622_);
lean_dec(v___x_626_);
v___x_628_ = lean_int_add(v_nanos_625_, v_nanos_627_);
lean_dec(v_nanos_627_);
lean_dec(v_nanos_625_);
v___x_629_ = l_Std_Time_Duration_ofNanoseconds(v___x_628_);
lean_dec(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0___boxed(lean_object* v_x_630_, lean_object* v_y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Std_Time_Timestamp_instHSubDuration__1___lam__0(v_x_630_, v_y_631_);
lean_dec_ref(v_y_631_);
lean_dec_ref(v_x_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instOfNat(lean_object* v_n_635_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_nat_to_int(v_n_635_);
v___x_637_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
return v___x_638_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_DateTime_Timestamp(uint8_t builtin) {
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
res = runtime_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedTimestamp_default = _init_l_Std_Time_instInhabitedTimestamp_default();
lean_mark_persistent(l_Std_Time_instInhabitedTimestamp_default);
l_Std_Time_instInhabitedTimestamp = _init_l_Std_Time_instInhabitedTimestamp();
lean_mark_persistent(l_Std_Time_instInhabitedTimestamp);
l_Std_Time_instLETimestamp = _init_l_Std_Time_instLETimestamp();
lean_mark_persistent(l_Std_Time_instLETimestamp);
l_Std_Time_instLTTimestamp = _init_l_Std_Time_instLTTimestamp();
lean_mark_persistent(l_Std_Time_instLTTimestamp);
l_Std_Time_instOrdTimestamp = _init_l_Std_Time_instOrdTimestamp();
lean_mark_persistent(l_Std_Time_instOrdTimestamp);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_DateTime_Timestamp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Time_Duration(uint8_t builtin);
lean_object* initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_DateTime_Timestamp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_DateTime_Timestamp(builtin);
}
#ifdef __cplusplus
}
#endif
