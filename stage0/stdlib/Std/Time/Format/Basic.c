// Lean compiler output
// Module: Std.Time.Format.Basic
// Imports: public import Std.Time.Zoned public import Std.Time.Format.Modifier public import Std.Time.Format.DateFormat import Init.Data.String.TakeDrop import Init.Data.String.Search
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
lean_object* l_Std_Time_parseModifier(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Internal_Parsec_String_Parser_run___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Time_DateFormat_enUS;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_String_pstring(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
extern lean_object* l_Std_Time_TimeZone_Offset_zero;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_String_Slice_toNat_x21(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Std_Time_Weekday_ofOrdinal(lean_object*);
lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
extern lean_object* l_Std_Time_TimeZone_GMT;
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Std_Time_TimeZone_Offset_toIsoString(lean_object*, uint8_t);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Std_Time_HourMarker_toAbsolute(uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDateTime_toWallTime(lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_Second_instOfNatOrdinal(uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDate_toEpochDay(lean_object*);
lean_object* l_Std_Time_PlainDate_ofEpochDay(lean_object*);
lean_object* l_Std_Time_PlainDate_weekYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_ValidDate_ofOrdinal(uint8_t, lean_object*);
extern lean_object* l_Std_Time_instInhabitedDateTime;
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
uint8_t l_Std_Time_Year_Offset_era(lean_object*);
lean_object* l_Std_Time_PlainDate_dayOfYear(lean_object*);
lean_object* l_Std_Time_PlainDate_quarter(lean_object*);
lean_object* l_Std_Time_PlainDate_weekOfYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDate_weekOfMonth(lean_object*, uint8_t);
uint8_t l_Std_Time_PlainDate_weekday(lean_object*);
lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth(lean_object*);
uint8_t l_Std_Time_HourMarker_ofOrdinal(lean_object*);
lean_object* l_Std_Time_Hour_Ordinal_toRelative(lean_object*);
lean_object* l_Std_Time_Hour_Ordinal_shiftTo1BasedHour(lean_object*);
lean_object* l_Std_Time_PlainTime_toMilliseconds(lean_object*);
lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_instReprModifier_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprFormatPart_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Time.FormatPart.string"};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__0 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__0_value)}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__1 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__2 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__2_value;
static lean_once_cell_t l_Std_Time_instReprFormatPart_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprFormatPart_repr___closed__3;
static lean_once_cell_t l_Std_Time_instReprFormatPart_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprFormatPart_repr___closed__4;
static const lean_string_object l_Std_Time_instReprFormatPart_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.FormatPart.modifier"};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__5 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__5_value)}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__6 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__6_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__7 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprFormatPart_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprFormatPart___closed__0 = (const lean_object*)&l_Std_Time_instReprFormatPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprFormatPart = (const lean_object*)&l_Std_Time_instReprFormatPart___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instCoeStringFormatPart___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_instCoeStringFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instCoeStringFormatPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instCoeStringFormatPart___closed__0 = (const lean_object*)&l_Std_Time_instCoeStringFormatPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instCoeStringFormatPart = (const lean_object*)&l_Std_Time_instCoeStringFormatPart___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instCoeModifierFormatPart___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_instCoeModifierFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instCoeModifierFormatPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instCoeModifierFormatPart___closed__0 = (const lean_object*)&l_Std_Time_instCoeModifierFormatPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instCoeModifierFormatPart = (const lean_object*)&l_Std_Time_instCoeModifierFormatPart___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_instCoeTimeZone___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_Awareness_instCoeTimeZone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Awareness_instCoeTimeZone___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Awareness_instCoeTimeZone___closed__0 = (const lean_object*)&l_Std_Time_Awareness_instCoeTimeZone___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Awareness_instCoeTimeZone = (const lean_object*)&l_Std_Time_Awareness_instCoeTimeZone___closed__0_value;
static lean_once_cell_t l_Std_Time_instInhabitedFormatConfig_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedFormatConfig_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedFormatConfig_default;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedFormatConfig;
static lean_once_cell_t l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg();
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedGenericFormat_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedGenericFormat_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg();
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '\"'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '''"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(uint32_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '\\'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4_value;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5_value;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__6 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__6_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_pad_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__0;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_markerOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerOfIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodOfIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodOfIndex___boxed(lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_dropSeconds_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GMT"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_classifyDayPeriod___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyDayPeriod___closed__0;
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_classifyExtendedDayPeriod___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyExtendedDayPeriod___closed__0;
static lean_once_cell_t l_Std_Time_classifyExtendedDayPeriod___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyExtendedDayPeriod___closed__1;
static lean_once_cell_t l_Std_Time_classifyExtendedDayPeriod___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyExtendedDayPeriod___closed__2;
LEAN_EXPORT uint8_t l_Std_Time_classifyExtendedDayPeriod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_classifyExtendedDayPeriod___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_formatWith_spec__0(lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "unk"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no match"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value)} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_parseMonthShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_digitRunLength(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "expected: +"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__1_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '-'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__2_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__3_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '+'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__4 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__4_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__5 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseZoneId(lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "need a natural number in the interval of "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " to "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: ':'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid hour offset: "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ". Must be between 0 and 23."};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid second offset: "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ". Must be between 0 and 59."};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid minute offset: "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_isNumericModifier(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_isNumericModifier___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseField(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits(lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "need a natural number in the interval of 1 to 7"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_FormatType_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_FormatType_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0_value)} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSome_x3f___at___00__private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSome_x3f___at___00__private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__0;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__2;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__5;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__6;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__7;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__9;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__10;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__11;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__13;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__14;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__15;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__4(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_GenericFormat_spec_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.Format.Basic"};
static const lean_object* l_Std_Time_GenericFormat_spec_x21___closed__0 = (const lean_object*)&l_Std_Time_GenericFormat_spec_x21___closed__0_value;
static const lean_string_object l_Std_Time_GenericFormat_spec_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.GenericFormat.spec!"};
static const lean_object* l_Std_Time_GenericFormat_spec_x21___closed__1 = (const lean_object*)&l_Std_Time_GenericFormat_spec_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "could not parse the date"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*37 + 0, .m_other = 37, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid date."};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Time_GenericFormat_parse_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Time.GenericFormat.parse!"};
static const lean_object* l_Std_Time_GenericFormat_parse_x21___closed__0 = (const lean_object*)&l_Std_Time_GenericFormat_parse_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Time.GenericFormat.parseBuilder!"};
static const lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0 = (const lean_object*)&l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatParts___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Std_Time_FormatPart_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_val_7_; lean_object* v___x_8_; 
v_val_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_val_7_);
lean_dec_ref(v_t_5_);
v___x_8_ = lean_apply_1(v_k_6_, v_val_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_Time_FormatPart_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim___redArg(lean_object* v_t_21_, lean_object* v_string_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_21_, v_string_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_string_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_25_, v_string_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim___redArg(lean_object* v_t_29_, lean_object* v_modifier_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_29_, v_modifier_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_modifier_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_33_, v_modifier_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instReprFormatPart_repr___closed__3(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(2u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Std_Time_instReprFormatPart_repr___closed__4(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr(lean_object* v_x_53_, lean_object* v_prec_54_){
_start:
{
if (lean_obj_tag(v_x_53_) == 0)
{
lean_object* v_val_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_75_; 
v_val_55_ = lean_ctor_get(v_x_53_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_75_ == 0)
{
v___x_57_ = v_x_53_;
v_isShared_58_ = v_isSharedCheck_75_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_val_55_);
lean_dec(v_x_53_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_75_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___y_60_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(1024u);
v___x_72_ = lean_nat_dec_le(v___x_71_, v_prec_54_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__3, &l_Std_Time_instReprFormatPart_repr___closed__3_once, _init_l_Std_Time_instReprFormatPart_repr___closed__3);
v___y_60_ = v___x_73_;
goto v___jp_59_;
}
else
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___y_60_ = v___x_74_;
goto v___jp_59_;
}
v___jp_59_:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_61_ = ((lean_object*)(l_Std_Time_instReprFormatPart_repr___closed__2));
v___x_62_ = l_String_quote(v_val_55_);
if (v_isShared_58_ == 0)
{
lean_ctor_set_tag(v___x_57_, 3);
lean_ctor_set(v___x_57_, 0, v___x_62_);
v___x_64_ = v___x_57_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_70_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_61_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
lean_inc(v___y_60_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___y_60_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = 0;
v___x_68_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_68_, sizeof(void*)*1, v___x_67_);
v___x_69_ = l_Repr_addAppParen(v___x_68_, v_prec_54_);
return v___x_69_;
}
}
}
}
else
{
lean_object* v_modifier_76_; lean_object* v___y_78_; lean_object* v___x_87_; uint8_t v___x_88_; 
v_modifier_76_ = lean_ctor_get(v_x_53_, 0);
lean_inc_ref(v_modifier_76_);
lean_dec_ref_known(v_x_53_, 1);
v___x_87_ = lean_unsigned_to_nat(1024u);
v___x_88_ = lean_nat_dec_le(v___x_87_, v_prec_54_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__3, &l_Std_Time_instReprFormatPart_repr___closed__3_once, _init_l_Std_Time_instReprFormatPart_repr___closed__3);
v___y_78_ = v___x_89_;
goto v___jp_77_;
}
else
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___y_78_ = v___x_90_;
goto v___jp_77_;
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_79_ = ((lean_object*)(l_Std_Time_instReprFormatPart_repr___closed__7));
v___x_80_ = lean_unsigned_to_nat(1024u);
v___x_81_ = l_Std_Time_instReprModifier_repr(v_modifier_76_, v___x_80_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_79_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
lean_inc(v___y_78_);
v___x_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_83_, 0, v___y_78_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = 0;
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___x_84_);
v___x_86_ = l_Repr_addAppParen(v___x_85_, v_prec_54_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr___boxed(lean_object* v_x_91_, lean_object* v_prec_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Std_Time_instReprFormatPart_repr(v_x_91_, v_prec_92_);
lean_dec(v_prec_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instCoeStringFormatPart___lam__0(lean_object* v_val_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v_val_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instCoeModifierFormatPart___lam__0(lean_object* v_modifier_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v_modifier_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl(lean_object* v_x_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_tag_nat(v_x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl___boxed(lean_object* v_x_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Time_Awareness_ctorIdx___impl(v_x_106_);
lean_dec(v_x_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___redArg(lean_object* v_t_108_, lean_object* v_k_109_){
_start:
{
if (lean_obj_tag(v_t_108_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_111_; 
v_a_110_ = lean_ctor_get(v_t_108_, 0);
lean_inc_ref(v_a_110_);
lean_dec_ref_known(v_t_108_, 1);
v___x_111_ = lean_apply_1(v_k_109_, v_a_110_);
return v___x_111_;
}
else
{
return v_k_109_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim(lean_object* v_motive_112_, lean_object* v_ctorIdx_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_k_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_114_, v_k_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___boxed(lean_object* v_motive_118_, lean_object* v_ctorIdx_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_k_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Std_Time_Awareness_ctorElim(v_motive_118_, v_ctorIdx_119_, v_t_120_, v_h_121_, v_k_122_);
lean_dec(v_ctorIdx_119_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim___redArg(lean_object* v_t_124_, lean_object* v_only_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_124_, v_only_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim(lean_object* v_motive_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_only_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_128_, v_only_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim___redArg(lean_object* v_t_132_, lean_object* v_any_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_132_, v_any_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim(lean_object* v_motive_135_, lean_object* v_t_136_, lean_object* v_h_137_, lean_object* v_any_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_136_, v_any_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_instCoeTimeZone___lam__0(lean_object* v_a_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_141_, 0, v_a_140_);
return v___x_141_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedFormatConfig_default___closed__0(void){
_start:
{
lean_object* v___x_144_; uint8_t v___x_145_; lean_object* v___x_146_; 
v___x_144_ = l_Std_Time_DateFormat_enUS;
v___x_145_ = 0;
v___x_146_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set_uint8(v___x_146_, sizeof(void*)*1, v___x_145_);
return v___x_146_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedFormatConfig_default(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&l_Std_Time_instInhabitedFormatConfig_default___closed__0, &l_Std_Time_instInhabitedFormatConfig_default___closed__0_once, _init_l_Std_Time_instInhabitedFormatConfig_default___closed__0);
return v___x_147_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedFormatConfig(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Std_Time_instInhabitedFormatConfig_default;
return v___x_148_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_box(0);
v___x_150_ = l_Std_Time_instInhabitedFormatConfig_default;
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_149_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg(){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg___boxed(lean_object* v___dummy_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Std_Time_instInhabitedGenericFormat_default___redArg();
return v_res_155_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Std_Time_instInhabitedGenericFormat_default___redArg();
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default(lean_object* v_awareness_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___boxed(lean_object* v_awareness_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Std_Time_instInhabitedGenericFormat_default(v_awareness_159_);
lean_dec(v_awareness_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg(){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg___boxed(lean_object* v___dummy_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Std_Time_instInhabitedGenericFormat___redArg();
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat(lean_object* v_a_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___boxed(lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Std_Time_instInhabitedGenericFormat(v_a_167_);
lean_dec(v_a_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(lean_object* v_a_169_, lean_object* v_f_170_, lean_object* v___y_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_apply_1(v_a_169_, v___y_171_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_pos_173_; lean_object* v_res_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_182_; 
v_pos_173_ = lean_ctor_get(v___x_172_, 0);
v_res_174_ = lean_ctor_get(v___x_172_, 1);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_182_ == 0)
{
v___x_176_ = v___x_172_;
v_isShared_177_ = v_isSharedCheck_182_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_res_174_);
lean_inc(v_pos_173_);
lean_dec(v___x_172_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_182_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_178_ = lean_apply_1(v_f_170_, v_res_174_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_178_);
v___x_180_ = v___x_176_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_pos_173_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
lean_object* v_pos_183_; lean_object* v_err_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_f_170_);
v_pos_183_ = lean_ctor_get(v___x_172_, 0);
v_err_184_ = lean_ctor_get(v___x_172_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_172_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_err_184_);
lean_inc(v_pos_183_);
lean_dec(v___x_172_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_pos_183_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_err_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1(lean_object* v_00_u03b1_192_, lean_object* v_00_u03b2_193_, lean_object* v_a_194_, lean_object* v_f_195_, lean_object* v___y_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v_a_194_, v_f_195_, v___y_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(lean_object* v_acc_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_fst_203_; lean_object* v_snd_204_; lean_object* v_pos_206_; lean_object* v_snd_207_; lean_object* v_err_208_; lean_object* v___x_212_; uint8_t v_decide_213_; 
v_fst_203_ = lean_ctor_get(v_a_202_, 0);
v_snd_204_ = lean_ctor_get(v_a_202_, 1);
lean_inc(v_snd_204_);
v___x_212_ = lean_string_utf8_byte_size(v_fst_203_);
v_decide_213_ = lean_nat_dec_eq(v_snd_204_, v___x_212_);
if (v_decide_213_ == 0)
{
uint32_t v___x_214_; uint32_t v_c_215_; uint8_t v___x_216_; 
v___x_214_ = 34;
v_c_215_ = lean_string_utf8_get_fast(v_fst_203_, v_snd_204_);
v___x_216_ = lean_uint32_dec_eq(v_c_215_, v___x_214_);
if (v___x_216_ == 0)
{
lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_226_; 
lean_inc(v_fst_203_);
v_isSharedCheck_226_ = !lean_is_exclusive(v_a_202_);
if (v_isSharedCheck_226_ == 0)
{
lean_object* v_unused_227_; lean_object* v_unused_228_; 
v_unused_227_ = lean_ctor_get(v_a_202_, 1);
lean_dec(v_unused_227_);
v_unused_228_ = lean_ctor_get(v_a_202_, 0);
lean_dec(v_unused_228_);
v___x_218_ = v_a_202_;
v_isShared_219_ = v_isSharedCheck_226_;
goto v_resetjp_217_;
}
else
{
lean_dec(v_a_202_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_226_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v_it_x27_222_; 
v___x_220_ = lean_string_utf8_next_fast(v_fst_203_, v_snd_204_);
lean_dec(v_snd_204_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___x_220_);
v_it_x27_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_fst_203_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v___x_220_);
v_it_x27_222_ = v_reuseFailAlloc_225_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
lean_object* v___x_223_; 
v___x_223_ = lean_string_push(v_acc_201_, v_c_215_);
v_acc_201_ = v___x_223_;
v_a_202_ = v_it_x27_222_;
goto _start;
}
}
}
else
{
lean_object* v___x_229_; 
v___x_229_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_204_);
v_pos_206_ = v_a_202_;
v_snd_207_ = v_snd_204_;
v_err_208_ = v___x_229_;
goto v___jp_205_;
}
}
else
{
lean_object* v___x_230_; 
v___x_230_ = lean_box(0);
lean_inc(v_snd_204_);
v_pos_206_ = v_a_202_;
v_snd_207_ = v_snd_204_;
v_err_208_ = v___x_230_;
goto v___jp_205_;
}
v___jp_205_:
{
uint8_t v_decide_209_; 
v_decide_209_ = lean_nat_dec_eq(v_snd_204_, v_snd_207_);
lean_dec(v_snd_207_);
lean_dec(v_snd_204_);
if (v_decide_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec_ref(v_acc_201_);
lean_inc(v_err_208_);
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v_pos_206_);
lean_ctor_set(v___x_210_, 1, v_err_208_);
return v___x_210_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v_pos_206_);
lean_ctor_set(v___x_211_, 1, v_acc_201_);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(lean_object* v_acc_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v_pos_236_; lean_object* v_snd_237_; lean_object* v_err_238_; lean_object* v___x_242_; uint8_t v_decide_243_; 
v_fst_233_ = lean_ctor_get(v_a_232_, 0);
v_snd_234_ = lean_ctor_get(v_a_232_, 1);
lean_inc(v_snd_234_);
v___x_242_ = lean_string_utf8_byte_size(v_fst_233_);
v_decide_243_ = lean_nat_dec_eq(v_snd_234_, v___x_242_);
if (v_decide_243_ == 0)
{
uint32_t v___x_244_; uint32_t v_c_245_; uint8_t v___x_246_; 
v___x_244_ = 34;
v_c_245_ = lean_string_utf8_get_fast(v_fst_233_, v_snd_234_);
v___x_246_ = lean_uint32_dec_eq(v_c_245_, v___x_244_);
if (v___x_246_ == 0)
{
lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_256_; 
lean_inc(v_fst_233_);
v_isSharedCheck_256_ = !lean_is_exclusive(v_a_232_);
if (v_isSharedCheck_256_ == 0)
{
lean_object* v_unused_257_; lean_object* v_unused_258_; 
v_unused_257_ = lean_ctor_get(v_a_232_, 1);
lean_dec(v_unused_257_);
v_unused_258_ = lean_ctor_get(v_a_232_, 0);
lean_dec(v_unused_258_);
v___x_248_ = v_a_232_;
v_isShared_249_ = v_isSharedCheck_256_;
goto v_resetjp_247_;
}
else
{
lean_dec(v_a_232_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_256_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_250_; lean_object* v_it_x27_252_; 
v___x_250_ = lean_string_utf8_next_fast(v_fst_233_, v_snd_234_);
lean_dec(v_snd_234_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 1, v___x_250_);
v_it_x27_252_ = v___x_248_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v___x_250_);
v_it_x27_252_ = v_reuseFailAlloc_255_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_string_push(v_acc_231_, v_c_245_);
v___x_254_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(v___x_253_, v_it_x27_252_);
return v___x_254_;
}
}
}
else
{
lean_object* v___x_259_; 
v___x_259_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_234_);
v_pos_236_ = v_a_232_;
v_snd_237_ = v_snd_234_;
v_err_238_ = v___x_259_;
goto v___jp_235_;
}
}
else
{
lean_object* v___x_260_; 
v___x_260_ = lean_box(0);
lean_inc(v_snd_234_);
v_pos_236_ = v_a_232_;
v_snd_237_ = v_snd_234_;
v_err_238_ = v___x_260_;
goto v___jp_235_;
}
v___jp_235_:
{
uint8_t v_decide_239_; 
v_decide_239_ = lean_nat_dec_eq(v_snd_234_, v_snd_237_);
lean_dec(v_snd_237_);
lean_dec(v_snd_234_);
if (v_decide_239_ == 0)
{
lean_object* v___x_240_; 
lean_dec_ref(v_acc_231_);
lean_inc(v_err_238_);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v_pos_236_);
lean_ctor_set(v___x_240_, 1, v_err_238_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v_pos_236_);
lean_ctor_set(v___x_241_, 1, v_acc_231_);
return v___x_241_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(uint32_t v___x_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_fst_267_; lean_object* v_snd_268_; lean_object* v___x_269_; uint8_t v_decide_270_; 
v_fst_267_ = lean_ctor_get(v___y_266_, 0);
v_snd_268_ = lean_ctor_get(v___y_266_, 1);
v___x_269_ = lean_string_utf8_byte_size(v_fst_267_);
v_decide_270_ = lean_nat_dec_eq(v_snd_268_, v___x_269_);
if (v_decide_270_ == 0)
{
uint32_t v_c_271_; uint8_t v___x_272_; 
v_c_271_ = lean_string_utf8_get_fast(v_fst_267_, v_snd_268_);
v___x_272_ = lean_uint32_dec_eq(v_c_271_, v___x_265_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1));
v___x_274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_274_, 0, v___y_266_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
return v___x_274_;
}
else
{
lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_327_; 
lean_inc(v_snd_268_);
lean_inc(v_fst_267_);
v_isSharedCheck_327_ = !lean_is_exclusive(v___y_266_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; lean_object* v_unused_329_; 
v_unused_328_ = lean_ctor_get(v___y_266_, 1);
lean_dec(v_unused_328_);
v_unused_329_ = lean_ctor_get(v___y_266_, 0);
lean_dec(v_unused_329_);
v___x_276_ = v___y_266_;
v_isShared_277_ = v_isSharedCheck_327_;
goto v_resetjp_275_;
}
else
{
lean_dec(v___y_266_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_327_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v_it_x27_280_; 
v___x_278_ = lean_string_utf8_next_fast(v_fst_267_, v_snd_268_);
lean_dec(v_snd_268_);
lean_inc(v_fst_267_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_278_);
v_it_x27_280_ = v___x_276_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_fst_267_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_278_);
v_it_x27_280_ = v_reuseFailAlloc_326_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
uint8_t v_decide_281_; 
v_decide_281_ = lean_nat_dec_eq(v___x_278_, v___x_269_);
if (v_decide_281_ == 0)
{
uint32_t v___x_282_; uint8_t v___x_283_; 
v___x_282_ = lean_string_utf8_get_fast(v_fst_267_, v___x_278_);
v___x_283_ = lean_uint32_dec_eq(v___x_282_, v___x_265_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
lean_dec_ref(v_it_x27_280_);
v___x_284_ = lean_string_utf8_next_fast(v_fst_267_, v___x_278_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v_fst_267_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_287_ = lean_string_push(v___x_286_, v___x_282_);
v___x_288_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(v___x_287_, v___x_285_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_pos_289_; lean_object* v_res_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_321_; 
v_pos_289_ = lean_ctor_get(v___x_288_, 0);
v_res_290_ = lean_ctor_get(v___x_288_, 1);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_321_ == 0)
{
v___x_292_ = v___x_288_;
v_isShared_293_ = v_isSharedCheck_321_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_res_290_);
lean_inc(v_pos_289_);
lean_dec(v___x_288_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_321_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v_fst_294_; lean_object* v_snd_295_; lean_object* v___x_296_; uint8_t v_decide_297_; 
v_fst_294_ = lean_ctor_get(v_pos_289_, 0);
v_snd_295_ = lean_ctor_get(v_pos_289_, 1);
v___x_296_ = lean_string_utf8_byte_size(v_fst_294_);
v_decide_297_ = lean_nat_dec_eq(v_snd_295_, v___x_296_);
if (v_decide_297_ == 0)
{
uint32_t v_c_298_; uint8_t v___x_299_; 
v_c_298_ = lean_string_utf8_get_fast(v_fst_294_, v_snd_295_);
v___x_299_ = lean_uint32_dec_eq(v_c_298_, v___x_265_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; lean_object* v___x_302_; 
lean_dec(v_res_290_);
v___x_300_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1));
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 1);
lean_ctor_set(v___x_292_, 1, v___x_300_);
v___x_302_ = v___x_292_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_pos_289_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
else
{
lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_314_; 
lean_inc(v_snd_295_);
lean_inc(v_fst_294_);
v_isSharedCheck_314_ = !lean_is_exclusive(v_pos_289_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; lean_object* v_unused_316_; 
v_unused_315_ = lean_ctor_get(v_pos_289_, 1);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_pos_289_, 0);
lean_dec(v_unused_316_);
v___x_305_ = v_pos_289_;
v_isShared_306_ = v_isSharedCheck_314_;
goto v_resetjp_304_;
}
else
{
lean_dec(v_pos_289_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_314_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v_it_x27_309_; 
v___x_307_ = lean_string_utf8_next_fast(v_fst_294_, v_snd_295_);
lean_dec(v_snd_295_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 1, v___x_307_);
v_it_x27_309_ = v___x_305_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_fst_294_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___x_307_);
v_it_x27_309_ = v_reuseFailAlloc_313_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_311_; 
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v_it_x27_309_);
v___x_311_ = v___x_292_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_it_x27_309_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_res_290_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
}
else
{
lean_object* v___x_317_; lean_object* v___x_319_; 
lean_dec(v_res_290_);
v___x_317_ = lean_box(0);
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 1);
lean_ctor_set(v___x_292_, 1, v___x_317_);
v___x_319_ = v___x_292_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_pos_289_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
else
{
return v___x_288_;
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v_fst_267_);
v___x_322_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_323_, 0, v_it_x27_280_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
return v___x_323_;
}
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec(v_fst_267_);
v___x_324_ = lean_box(0);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v_it_x27_280_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
return v___x_325_;
}
}
}
}
}
else
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_box(0);
v___x_331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_331_, 0, v___y_266_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed(lean_object* v___x_332_, lean_object* v___y_333_){
_start:
{
uint32_t v___x_11507__boxed_334_; lean_object* v_res_335_; 
v___x_11507__boxed_334_ = lean_unbox_uint32(v___x_332_);
lean_dec(v___x_332_);
v_res_335_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(v___x_11507__boxed_334_, v___y_333_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(lean_object* v_acc_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_fst_338_; lean_object* v_snd_339_; lean_object* v_pos_341_; lean_object* v_snd_342_; lean_object* v_err_343_; lean_object* v___x_347_; uint8_t v_decide_348_; 
v_fst_338_ = lean_ctor_get(v_a_337_, 0);
v_snd_339_ = lean_ctor_get(v_a_337_, 1);
lean_inc(v_snd_339_);
v___x_347_ = lean_string_utf8_byte_size(v_fst_338_);
v_decide_348_ = lean_nat_dec_eq(v_snd_339_, v___x_347_);
if (v_decide_348_ == 0)
{
uint32_t v___x_349_; uint32_t v_c_350_; uint8_t v___x_351_; 
v___x_349_ = 39;
v_c_350_ = lean_string_utf8_get_fast(v_fst_338_, v_snd_339_);
v___x_351_ = lean_uint32_dec_eq(v_c_350_, v___x_349_);
if (v___x_351_ == 0)
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_361_; 
lean_inc(v_fst_338_);
v_isSharedCheck_361_ = !lean_is_exclusive(v_a_337_);
if (v_isSharedCheck_361_ == 0)
{
lean_object* v_unused_362_; lean_object* v_unused_363_; 
v_unused_362_ = lean_ctor_get(v_a_337_, 1);
lean_dec(v_unused_362_);
v_unused_363_ = lean_ctor_get(v_a_337_, 0);
lean_dec(v_unused_363_);
v___x_353_ = v_a_337_;
v_isShared_354_ = v_isSharedCheck_361_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_a_337_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_361_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v_it_x27_357_; 
v___x_355_ = lean_string_utf8_next_fast(v_fst_338_, v_snd_339_);
lean_dec(v_snd_339_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v___x_355_);
v_it_x27_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_fst_338_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v___x_355_);
v_it_x27_357_ = v_reuseFailAlloc_360_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; 
v___x_358_ = lean_string_push(v_acc_336_, v_c_350_);
v_acc_336_ = v___x_358_;
v_a_337_ = v_it_x27_357_;
goto _start;
}
}
}
else
{
lean_object* v___x_364_; 
v___x_364_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_339_);
v_pos_341_ = v_a_337_;
v_snd_342_ = v_snd_339_;
v_err_343_ = v___x_364_;
goto v___jp_340_;
}
}
else
{
lean_object* v___x_365_; 
v___x_365_ = lean_box(0);
lean_inc(v_snd_339_);
v_pos_341_ = v_a_337_;
v_snd_342_ = v_snd_339_;
v_err_343_ = v___x_365_;
goto v___jp_340_;
}
v___jp_340_:
{
uint8_t v_decide_344_; 
v_decide_344_ = lean_nat_dec_eq(v_snd_339_, v_snd_342_);
lean_dec(v_snd_342_);
lean_dec(v_snd_339_);
if (v_decide_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec_ref(v_acc_336_);
lean_inc(v_err_343_);
v___x_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_345_, 0, v_pos_341_);
lean_ctor_set(v___x_345_, 1, v_err_343_);
return v___x_345_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v_pos_341_);
lean_ctor_set(v___x_346_, 1, v_acc_336_);
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(lean_object* v_acc_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_fst_368_; lean_object* v_snd_369_; lean_object* v_pos_371_; lean_object* v_snd_372_; lean_object* v_err_373_; lean_object* v___x_377_; uint8_t v_decide_378_; 
v_fst_368_ = lean_ctor_get(v_a_367_, 0);
v_snd_369_ = lean_ctor_get(v_a_367_, 1);
lean_inc(v_snd_369_);
v___x_377_ = lean_string_utf8_byte_size(v_fst_368_);
v_decide_378_ = lean_nat_dec_eq(v_snd_369_, v___x_377_);
if (v_decide_378_ == 0)
{
uint32_t v___x_379_; uint32_t v_c_380_; uint8_t v___x_381_; 
v___x_379_ = 39;
v_c_380_ = lean_string_utf8_get_fast(v_fst_368_, v_snd_369_);
v___x_381_ = lean_uint32_dec_eq(v_c_380_, v___x_379_);
if (v___x_381_ == 0)
{
lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_391_; 
lean_inc(v_fst_368_);
v_isSharedCheck_391_ = !lean_is_exclusive(v_a_367_);
if (v_isSharedCheck_391_ == 0)
{
lean_object* v_unused_392_; lean_object* v_unused_393_; 
v_unused_392_ = lean_ctor_get(v_a_367_, 1);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_a_367_, 0);
lean_dec(v_unused_393_);
v___x_383_ = v_a_367_;
v_isShared_384_ = v_isSharedCheck_391_;
goto v_resetjp_382_;
}
else
{
lean_dec(v_a_367_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_391_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_385_; lean_object* v_it_x27_387_; 
v___x_385_ = lean_string_utf8_next_fast(v_fst_368_, v_snd_369_);
lean_dec(v_snd_369_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 1, v___x_385_);
v_it_x27_387_ = v___x_383_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_fst_368_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v___x_385_);
v_it_x27_387_ = v_reuseFailAlloc_390_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lean_string_push(v_acc_366_, v_c_380_);
v___x_389_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(v___x_388_, v_it_x27_387_);
return v___x_389_;
}
}
}
else
{
lean_object* v___x_394_; 
v___x_394_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_369_);
v_pos_371_ = v_a_367_;
v_snd_372_ = v_snd_369_;
v_err_373_ = v___x_394_;
goto v___jp_370_;
}
}
else
{
lean_object* v___x_395_; 
v___x_395_ = lean_box(0);
lean_inc(v_snd_369_);
v_pos_371_ = v_a_367_;
v_snd_372_ = v_snd_369_;
v_err_373_ = v___x_395_;
goto v___jp_370_;
}
v___jp_370_:
{
uint8_t v_decide_374_; 
v_decide_374_ = lean_nat_dec_eq(v_snd_369_, v_snd_372_);
lean_dec(v_snd_372_);
lean_dec(v_snd_369_);
if (v_decide_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec_ref(v_acc_366_);
lean_inc(v_err_373_);
v___x_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_375_, 0, v_pos_371_);
lean_ctor_set(v___x_375_, 1, v_err_373_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v_pos_371_);
lean_ctor_set(v___x_376_, 1, v_acc_366_);
return v___x_376_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(uint32_t v___x_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_fst_401_; lean_object* v_snd_402_; lean_object* v___x_403_; uint8_t v_decide_404_; 
v_fst_401_ = lean_ctor_get(v___y_400_, 0);
v_snd_402_ = lean_ctor_get(v___y_400_, 1);
v___x_403_ = lean_string_utf8_byte_size(v_fst_401_);
v_decide_404_ = lean_nat_dec_eq(v_snd_402_, v___x_403_);
if (v_decide_404_ == 0)
{
uint32_t v_c_405_; uint8_t v___x_406_; 
v_c_405_ = lean_string_utf8_get_fast(v_fst_401_, v_snd_402_);
v___x_406_ = lean_uint32_dec_eq(v_c_405_, v___x_399_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1));
v___x_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_408_, 0, v___y_400_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
return v___x_408_;
}
else
{
lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_461_; 
lean_inc(v_snd_402_);
lean_inc(v_fst_401_);
v_isSharedCheck_461_ = !lean_is_exclusive(v___y_400_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; lean_object* v_unused_463_; 
v_unused_462_ = lean_ctor_get(v___y_400_, 1);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v___y_400_, 0);
lean_dec(v_unused_463_);
v___x_410_ = v___y_400_;
v_isShared_411_ = v_isSharedCheck_461_;
goto v_resetjp_409_;
}
else
{
lean_dec(v___y_400_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_461_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v_it_x27_414_; 
v___x_412_ = lean_string_utf8_next_fast(v_fst_401_, v_snd_402_);
lean_dec(v_snd_402_);
lean_inc(v_fst_401_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 1, v___x_412_);
v_it_x27_414_ = v___x_410_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_fst_401_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v___x_412_);
v_it_x27_414_ = v_reuseFailAlloc_460_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
uint8_t v_decide_415_; 
v_decide_415_ = lean_nat_dec_eq(v___x_412_, v___x_403_);
if (v_decide_415_ == 0)
{
uint32_t v___x_416_; uint8_t v___x_417_; 
v___x_416_ = lean_string_utf8_get_fast(v_fst_401_, v___x_412_);
v___x_417_ = lean_uint32_dec_eq(v___x_416_, v___x_399_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec_ref(v_it_x27_414_);
v___x_418_ = lean_string_utf8_next_fast(v_fst_401_, v___x_412_);
v___x_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_419_, 0, v_fst_401_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_421_ = lean_string_push(v___x_420_, v___x_416_);
v___x_422_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(v___x_421_, v___x_419_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_pos_423_; lean_object* v_res_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_455_; 
v_pos_423_ = lean_ctor_get(v___x_422_, 0);
v_res_424_ = lean_ctor_get(v___x_422_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_455_ == 0)
{
v___x_426_ = v___x_422_;
v_isShared_427_ = v_isSharedCheck_455_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_res_424_);
lean_inc(v_pos_423_);
lean_dec(v___x_422_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_455_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v_fst_428_; lean_object* v_snd_429_; lean_object* v___x_430_; uint8_t v_decide_431_; 
v_fst_428_ = lean_ctor_get(v_pos_423_, 0);
v_snd_429_ = lean_ctor_get(v_pos_423_, 1);
v___x_430_ = lean_string_utf8_byte_size(v_fst_428_);
v_decide_431_ = lean_nat_dec_eq(v_snd_429_, v___x_430_);
if (v_decide_431_ == 0)
{
uint32_t v_c_432_; uint8_t v___x_433_; 
v_c_432_ = lean_string_utf8_get_fast(v_fst_428_, v_snd_429_);
v___x_433_ = lean_uint32_dec_eq(v_c_432_, v___x_399_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_436_; 
lean_dec(v_res_424_);
v___x_434_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1));
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 1);
lean_ctor_set(v___x_426_, 1, v___x_434_);
v___x_436_ = v___x_426_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_pos_423_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
else
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_448_; 
lean_inc(v_snd_429_);
lean_inc(v_fst_428_);
v_isSharedCheck_448_ = !lean_is_exclusive(v_pos_423_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; lean_object* v_unused_450_; 
v_unused_449_ = lean_ctor_get(v_pos_423_, 1);
lean_dec(v_unused_449_);
v_unused_450_ = lean_ctor_get(v_pos_423_, 0);
lean_dec(v_unused_450_);
v___x_439_ = v_pos_423_;
v_isShared_440_ = v_isSharedCheck_448_;
goto v_resetjp_438_;
}
else
{
lean_dec(v_pos_423_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_448_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v_it_x27_443_; 
v___x_441_ = lean_string_utf8_next_fast(v_fst_428_, v_snd_429_);
lean_dec(v_snd_429_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 1, v___x_441_);
v_it_x27_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_fst_428_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v___x_441_);
v_it_x27_443_ = v_reuseFailAlloc_447_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_445_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v_it_x27_443_);
v___x_445_ = v___x_426_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_it_x27_443_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_res_424_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
else
{
lean_object* v___x_451_; lean_object* v___x_453_; 
lean_dec(v_res_424_);
v___x_451_ = lean_box(0);
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 1);
lean_ctor_set(v___x_426_, 1, v___x_451_);
v___x_453_ = v___x_426_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_pos_423_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
return v___x_422_;
}
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v_fst_401_);
v___x_456_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_457_, 0, v_it_x27_414_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
return v___x_457_;
}
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; 
lean_dec(v_fst_401_);
v___x_458_ = lean_box(0);
v___x_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_459_, 0, v_it_x27_414_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
return v___x_459_;
}
}
}
}
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_box(0);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v___y_400_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed(lean_object* v___x_466_, lean_object* v___y_467_){
_start:
{
uint32_t v___x_11750__boxed_468_; lean_object* v_res_469_; 
v___x_11750__boxed_468_ = lean_unbox_uint32(v___x_466_);
lean_dec(v___x_466_);
v_res_469_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(v___x_11750__boxed_468_, v___y_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(lean_object* v_acc_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_fst_472_; lean_object* v_snd_473_; lean_object* v_pos_475_; lean_object* v_snd_476_; lean_object* v_err_477_; lean_object* v___x_483_; uint8_t v_decide_484_; 
v_fst_472_ = lean_ctor_get(v_a_471_, 0);
v_snd_473_ = lean_ctor_get(v_a_471_, 1);
lean_inc(v_snd_473_);
v___x_483_ = lean_string_utf8_byte_size(v_fst_472_);
v_decide_484_ = lean_nat_dec_eq(v_snd_473_, v___x_483_);
if (v_decide_484_ == 0)
{
uint32_t v___x_485_; uint32_t v___x_486_; uint32_t v_c_487_; lean_object* v___x_488_; lean_object* v_it_x27_489_; uint32_t v___x_500_; uint8_t v___x_501_; 
v___x_485_ = 39;
v___x_486_ = 34;
v_c_487_ = lean_string_utf8_get_fast(v_fst_472_, v_snd_473_);
v___x_488_ = lean_string_utf8_next_fast(v_fst_472_, v_snd_473_);
lean_inc(v_fst_472_);
v_it_x27_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_489_, 0, v_fst_472_);
lean_ctor_set(v_it_x27_489_, 1, v___x_488_);
v___x_500_ = 65;
v___x_501_ = lean_uint32_dec_le(v___x_500_, v_c_487_);
if (v___x_501_ == 0)
{
goto v___jp_495_;
}
else
{
uint32_t v___x_502_; uint8_t v___x_503_; 
v___x_502_ = 90;
v___x_503_ = lean_uint32_dec_le(v_c_487_, v___x_502_);
if (v___x_503_ == 0)
{
goto v___jp_495_;
}
else
{
lean_dec_ref_known(v_it_x27_489_, 2);
goto v___jp_481_;
}
}
v___jp_490_:
{
uint8_t v___x_491_; 
v___x_491_ = lean_uint32_dec_eq(v_c_487_, v___x_485_);
if (v___x_491_ == 0)
{
uint8_t v___x_492_; 
v___x_492_ = lean_uint32_dec_eq(v_c_487_, v___x_486_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
lean_dec(v_snd_473_);
lean_dec_ref(v_a_471_);
v___x_493_ = lean_string_push(v_acc_470_, v_c_487_);
v_acc_470_ = v___x_493_;
v_a_471_ = v_it_x27_489_;
goto _start;
}
else
{
lean_dec_ref_known(v_it_x27_489_, 2);
goto v___jp_481_;
}
}
else
{
lean_dec_ref_known(v_it_x27_489_, 2);
goto v___jp_481_;
}
}
v___jp_495_:
{
uint32_t v___x_496_; uint8_t v___x_497_; 
v___x_496_ = 97;
v___x_497_ = lean_uint32_dec_le(v___x_496_, v_c_487_);
if (v___x_497_ == 0)
{
goto v___jp_490_;
}
else
{
uint32_t v___x_498_; uint8_t v___x_499_; 
v___x_498_ = 122;
v___x_499_ = lean_uint32_dec_le(v_c_487_, v___x_498_);
if (v___x_499_ == 0)
{
goto v___jp_490_;
}
else
{
lean_dec_ref_known(v_it_x27_489_, 2);
goto v___jp_481_;
}
}
}
}
else
{
lean_object* v___x_504_; 
v___x_504_ = lean_box(0);
lean_inc(v_snd_473_);
v_pos_475_ = v_a_471_;
v_snd_476_ = v_snd_473_;
v_err_477_ = v___x_504_;
goto v___jp_474_;
}
v___jp_474_:
{
uint8_t v_decide_478_; 
v_decide_478_ = lean_nat_dec_eq(v_snd_473_, v_snd_476_);
lean_dec(v_snd_476_);
lean_dec(v_snd_473_);
if (v_decide_478_ == 0)
{
lean_object* v___x_479_; 
lean_dec_ref(v_acc_470_);
lean_inc(v_err_477_);
v___x_479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_479_, 0, v_pos_475_);
lean_ctor_set(v___x_479_, 1, v_err_477_);
return v___x_479_;
}
else
{
lean_object* v___x_480_; 
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v_pos_475_);
lean_ctor_set(v___x_480_, 1, v_acc_470_);
return v___x_480_;
}
}
v___jp_481_:
{
lean_object* v___x_482_; 
v___x_482_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_473_);
v_pos_475_ = v_a_471_;
v_snd_476_ = v_snd_473_;
v_err_477_ = v___x_482_;
goto v___jp_474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(uint32_t v___x_505_, uint32_t v___x_506_, lean_object* v___y_507_){
_start:
{
lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_513_; uint8_t v_decide_514_; 
v_fst_511_ = lean_ctor_get(v___y_507_, 0);
v_snd_512_ = lean_ctor_get(v___y_507_, 1);
v___x_513_ = lean_string_utf8_byte_size(v_fst_511_);
v_decide_514_ = lean_nat_dec_eq(v_snd_512_, v___x_513_);
if (v_decide_514_ == 0)
{
uint32_t v_c_515_; lean_object* v___x_516_; lean_object* v_it_x27_517_; uint32_t v___x_529_; uint8_t v___x_530_; 
v_c_515_ = lean_string_utf8_get_fast(v_fst_511_, v_snd_512_);
v___x_516_ = lean_string_utf8_next_fast(v_fst_511_, v_snd_512_);
lean_inc(v_fst_511_);
v_it_x27_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_517_, 0, v_fst_511_);
lean_ctor_set(v_it_x27_517_, 1, v___x_516_);
v___x_529_ = 65;
v___x_530_ = lean_uint32_dec_le(v___x_529_, v_c_515_);
if (v___x_530_ == 0)
{
goto v___jp_524_;
}
else
{
uint32_t v___x_531_; uint8_t v___x_532_; 
v___x_531_ = 90;
v___x_532_ = lean_uint32_dec_le(v_c_515_, v___x_531_);
if (v___x_532_ == 0)
{
goto v___jp_524_;
}
else
{
lean_dec_ref_known(v_it_x27_517_, 2);
goto v___jp_508_;
}
}
v___jp_518_:
{
uint8_t v___x_519_; 
v___x_519_ = lean_uint32_dec_eq(v_c_515_, v___x_505_);
if (v___x_519_ == 0)
{
uint8_t v___x_520_; 
v___x_520_ = lean_uint32_dec_eq(v_c_515_, v___x_506_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
lean_dec_ref(v___y_507_);
v___x_521_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_522_ = lean_string_push(v___x_521_, v_c_515_);
v___x_523_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(v___x_522_, v_it_x27_517_);
return v___x_523_;
}
else
{
lean_dec_ref_known(v_it_x27_517_, 2);
goto v___jp_508_;
}
}
else
{
lean_dec_ref_known(v_it_x27_517_, 2);
goto v___jp_508_;
}
}
v___jp_524_:
{
uint32_t v___x_525_; uint8_t v___x_526_; 
v___x_525_ = 97;
v___x_526_ = lean_uint32_dec_le(v___x_525_, v_c_515_);
if (v___x_526_ == 0)
{
goto v___jp_518_;
}
else
{
uint32_t v___x_527_; uint8_t v___x_528_; 
v___x_527_ = 122;
v___x_528_ = lean_uint32_dec_le(v_c_515_, v___x_527_);
if (v___x_528_ == 0)
{
goto v___jp_518_;
}
else
{
lean_dec_ref_known(v_it_x27_517_, 2);
goto v___jp_508_;
}
}
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_box(0);
v___x_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_534_, 0, v___y_507_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
return v___x_534_;
}
v___jp_508_:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_510_, 0, v___y_507_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
return v___x_510_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed(lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v___y_537_){
_start:
{
uint32_t v___x_11941__boxed_538_; uint32_t v___x_11942__boxed_539_; lean_object* v_res_540_; 
v___x_11941__boxed_538_ = lean_unbox_uint32(v___x_535_);
lean_dec(v___x_535_);
v___x_11942__boxed_539_ = lean_unbox_uint32(v___x_536_);
lean_dec(v___x_536_);
v_res_540_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(v___x_11941__boxed_538_, v___x_11942__boxed_539_, v___y_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(uint32_t v___y_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_543_ = lean_string_push(v___x_542_, v___y_541_);
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed(lean_object* v___y_545_){
_start:
{
uint32_t v___y_11998__boxed_546_; lean_object* v_res_547_; 
v___y_11998__boxed_546_ = lean_unbox_uint32(v___y_545_);
lean_dec(v___y_545_);
v_res_547_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(v___y_11998__boxed_546_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4(lean_object* v___y_548_){
_start:
{
lean_object* v_fst_549_; lean_object* v_snd_550_; lean_object* v___x_551_; uint8_t v_decide_552_; 
v_fst_549_ = lean_ctor_get(v___y_548_, 0);
v_snd_550_ = lean_ctor_get(v___y_548_, 1);
v___x_551_ = lean_string_utf8_byte_size(v_fst_549_);
v_decide_552_ = lean_nat_dec_eq(v_snd_550_, v___x_551_);
if (v_decide_552_ == 0)
{
lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_563_; 
lean_inc(v_snd_550_);
lean_inc(v_fst_549_);
v_isSharedCheck_563_ = !lean_is_exclusive(v___y_548_);
if (v_isSharedCheck_563_ == 0)
{
lean_object* v_unused_564_; lean_object* v_unused_565_; 
v_unused_564_ = lean_ctor_get(v___y_548_, 1);
lean_dec(v_unused_564_);
v_unused_565_ = lean_ctor_get(v___y_548_, 0);
lean_dec(v_unused_565_);
v___x_554_ = v___y_548_;
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
else
{
lean_dec(v___y_548_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
uint32_t v_c_556_; lean_object* v___x_557_; lean_object* v_it_x27_559_; 
v_c_556_ = lean_string_utf8_get_fast(v_fst_549_, v_snd_550_);
v___x_557_ = lean_string_utf8_next_fast(v_fst_549_, v_snd_550_);
lean_dec(v_snd_550_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___x_557_);
v_it_x27_559_ = v___x_554_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_fst_549_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v___x_557_);
v_it_x27_559_ = v_reuseFailAlloc_562_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_box_uint32(v_c_556_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_it_x27_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
return v___x_561_;
}
}
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_box(0);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v___y_548_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
return v___x_567_;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_568_; lean_object* v___x_569_; 
v___x_568_ = 34;
v___x_569_ = lean_box_uint32(v___x_568_);
return v___x_569_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0(void){
_start:
{
lean_object* v___x_570_; lean_object* v___f_571_; 
v___x_570_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
v___f_571_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed), 2, 1);
lean_closure_set(v___f_571_, 0, v___x_570_);
return v___f_571_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_572_; lean_object* v___x_573_; 
v___x_572_ = 39;
v___x_573_ = lean_box_uint32(v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1(void){
_start:
{
lean_object* v___x_574_; lean_object* v___f_575_; 
v___x_574_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
v___f_575_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed), 2, 1);
lean_closure_set(v___f_575_, 0, v___x_574_);
return v___f_575_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___f_578_; 
v___x_576_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
v___x_577_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
v___f_578_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed), 3, 2);
lean_closure_set(v___f_578_, 0, v___x_576_);
lean_closure_set(v___f_578_, 1, v___x_577_);
return v___f_578_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(lean_object* v_a_584_){
_start:
{
lean_object* v___x_585_; 
lean_inc_ref(v_a_584_);
v___x_585_ = l_Std_Time_parseModifier(v_a_584_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_pos_586_; lean_object* v_res_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_595_; 
lean_dec_ref(v_a_584_);
v_pos_586_ = lean_ctor_get(v___x_585_, 0);
v_res_587_ = lean_ctor_get(v___x_585_, 1);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_595_ == 0)
{
v___x_589_ = v___x_585_;
v_isShared_590_ = v_isSharedCheck_595_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_res_587_);
lean_inc(v_pos_586_);
lean_dec(v___x_585_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_595_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_591_, 0, v_res_587_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v___x_591_);
v___x_593_ = v___x_589_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_pos_586_);
lean_ctor_set(v_reuseFailAlloc_594_, 1, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
else
{
lean_object* v_pos_596_; lean_object* v_err_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_654_; 
v_pos_596_ = lean_ctor_get(v___x_585_, 0);
v_err_597_ = lean_ctor_get(v___x_585_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_654_ == 0)
{
v___x_599_ = v___x_585_;
v_isShared_600_ = v_isSharedCheck_654_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_err_597_);
lean_inc(v_pos_596_);
lean_dec(v___x_585_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_654_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v_snd_601_; lean_object* v_fst_602_; lean_object* v_snd_603_; uint8_t v_decide_604_; 
v_snd_601_ = lean_ctor_get(v_a_584_, 1);
lean_inc(v_snd_601_);
lean_dec_ref(v_a_584_);
v_fst_602_ = lean_ctor_get(v_pos_596_, 0);
v_snd_603_ = lean_ctor_get(v_pos_596_, 1);
v_decide_604_ = lean_nat_dec_eq(v_snd_601_, v_snd_603_);
lean_dec(v_snd_601_);
if (v_decide_604_ == 0)
{
lean_object* v___x_606_; 
if (v_isShared_600_ == 0)
{
v___x_606_ = v___x_599_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_pos_596_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_err_597_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
else
{
lean_object* v___f_608_; lean_object* v___y_610_; lean_object* v_pos_611_; lean_object* v_snd_612_; lean_object* v___x_626_; uint8_t v_decide_627_; 
lean_inc(v_snd_603_);
lean_dec(v_err_597_);
v___f_608_ = ((lean_object*)(l_Std_Time_instCoeStringFormatPart___closed__0));
v___x_626_ = lean_string_utf8_byte_size(v_fst_602_);
v_decide_627_ = lean_nat_dec_eq(v_snd_603_, v___x_626_);
if (v_decide_627_ == 0)
{
uint32_t v___x_628_; uint32_t v_c_629_; uint8_t v___x_630_; 
v___x_628_ = 92;
v_c_629_ = lean_string_utf8_get_fast(v_fst_602_, v_snd_603_);
v___x_630_ = lean_uint32_dec_eq(v_c_629_, v___x_628_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_631_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4));
lean_inc(v_pos_596_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_631_);
v___x_633_ = v___x_599_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_pos_596_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_inc(v_snd_603_);
v___y_610_ = v___x_633_;
v_pos_611_ = v_pos_596_;
v_snd_612_ = v_snd_603_;
goto v___jp_609_;
}
}
else
{
lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_647_; 
lean_inc(v_fst_602_);
lean_del_object(v___x_599_);
v_isSharedCheck_647_ = !lean_is_exclusive(v_pos_596_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; lean_object* v_unused_649_; 
v_unused_648_ = lean_ctor_get(v_pos_596_, 1);
lean_dec(v_unused_648_);
v_unused_649_ = lean_ctor_get(v_pos_596_, 0);
lean_dec(v_unused_649_);
v___x_636_ = v_pos_596_;
v_isShared_637_ = v_isSharedCheck_647_;
goto v_resetjp_635_;
}
else
{
lean_dec(v_pos_596_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_647_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___x_640_; lean_object* v_it_x27_642_; 
v___f_638_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5));
v___f_639_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__6));
v___x_640_ = lean_string_utf8_next_fast(v_fst_602_, v_snd_603_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 1, v___x_640_);
v_it_x27_642_ = v___x_636_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_fst_602_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v___x_640_);
v_it_x27_642_ = v_reuseFailAlloc_646_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_643_; 
v___x_643_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_639_, v___f_638_, v_it_x27_642_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_dec(v_snd_603_);
return v___x_643_;
}
else
{
lean_object* v_pos_644_; lean_object* v_snd_645_; 
v_pos_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_pos_644_);
v_snd_645_ = lean_ctor_get(v_pos_644_, 1);
lean_inc(v_snd_645_);
v___y_610_ = v___x_643_;
v_pos_611_ = v_pos_644_;
v_snd_612_ = v_snd_645_;
goto v___jp_609_;
}
}
}
}
}
else
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = lean_box(0);
lean_inc(v_pos_596_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_650_);
v___x_652_ = v___x_599_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_pos_596_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_inc(v_snd_603_);
v___y_610_ = v___x_652_;
v_pos_611_ = v_pos_596_;
v_snd_612_ = v_snd_603_;
goto v___jp_609_;
}
}
v___jp_609_:
{
uint8_t v_decide_613_; 
v_decide_613_ = lean_nat_dec_eq(v_snd_603_, v_snd_612_);
lean_dec(v_snd_603_);
if (v_decide_613_ == 0)
{
lean_dec(v_snd_612_);
lean_dec_ref(v_pos_611_);
return v___y_610_;
}
else
{
lean_object* v___f_614_; lean_object* v___x_615_; 
lean_dec_ref(v___y_610_);
v___f_614_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0);
v___x_615_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_614_, v___f_608_, v_pos_611_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_dec(v_snd_612_);
return v___x_615_;
}
else
{
lean_object* v_pos_616_; lean_object* v_snd_617_; uint8_t v_decide_618_; 
v_pos_616_ = lean_ctor_get(v___x_615_, 0);
v_snd_617_ = lean_ctor_get(v_pos_616_, 1);
v_decide_618_ = lean_nat_dec_eq(v_snd_612_, v_snd_617_);
lean_dec(v_snd_612_);
if (v_decide_618_ == 0)
{
return v___x_615_;
}
else
{
lean_object* v___f_619_; lean_object* v___x_620_; 
lean_inc(v_snd_617_);
lean_inc(v_pos_616_);
lean_dec_ref_known(v___x_615_, 2);
v___f_619_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1);
v___x_620_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_619_, v___f_608_, v_pos_616_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_dec(v_snd_617_);
return v___x_620_;
}
else
{
lean_object* v_pos_621_; lean_object* v_snd_622_; uint8_t v_decide_623_; 
v_pos_621_ = lean_ctor_get(v___x_620_, 0);
v_snd_622_ = lean_ctor_get(v_pos_621_, 1);
v_decide_623_ = lean_nat_dec_eq(v_snd_617_, v_snd_622_);
lean_dec(v_snd_617_);
if (v_decide_623_ == 0)
{
return v___x_620_;
}
else
{
lean_object* v___f_624_; lean_object* v___x_625_; 
lean_inc(v_pos_621_);
lean_dec_ref_known(v___x_620_, 2);
v___f_624_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2);
v___x_625_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_624_, v___f_608_, v_pos_621_);
return v___x_625_;
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
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(lean_object* v_acc_655_, lean_object* v_a_656_){
_start:
{
lean_object* v___x_657_; 
lean_inc_ref(v_a_656_);
v___x_657_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(v_a_656_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_pos_658_; lean_object* v_res_659_; lean_object* v___x_660_; 
lean_dec_ref(v_a_656_);
v_pos_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_pos_658_);
v_res_659_ = lean_ctor_get(v___x_657_, 1);
lean_inc(v_res_659_);
lean_dec_ref_known(v___x_657_, 2);
v___x_660_ = lean_array_push(v_acc_655_, v_res_659_);
v_acc_655_ = v___x_660_;
v_a_656_ = v_pos_658_;
goto _start;
}
else
{
lean_object* v_pos_662_; lean_object* v_err_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_676_; 
v_pos_662_ = lean_ctor_get(v___x_657_, 0);
v_err_663_ = lean_ctor_get(v___x_657_, 1);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_676_ == 0)
{
v___x_665_ = v___x_657_;
v_isShared_666_ = v_isSharedCheck_676_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_err_663_);
lean_inc(v_pos_662_);
lean_dec(v___x_657_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_676_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v_snd_667_; lean_object* v_snd_668_; uint8_t v_decide_669_; 
v_snd_667_ = lean_ctor_get(v_a_656_, 1);
lean_inc(v_snd_667_);
lean_dec_ref(v_a_656_);
v_snd_668_ = lean_ctor_get(v_pos_662_, 1);
v_decide_669_ = lean_nat_dec_eq(v_snd_667_, v_snd_668_);
lean_dec(v_snd_667_);
if (v_decide_669_ == 0)
{
lean_object* v___x_671_; 
lean_dec_ref(v_acc_655_);
if (v_isShared_666_ == 0)
{
v___x_671_ = v___x_665_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_pos_662_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_err_663_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
else
{
lean_object* v___x_674_; 
lean_dec(v_err_663_);
if (v_isShared_666_ == 0)
{
lean_ctor_set_tag(v___x_665_, 0);
lean_ctor_set(v___x_665_, 1, v_acc_655_);
v___x_674_ = v___x_665_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_pos_662_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_acc_655_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser(lean_object* v_a_682_){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0));
v___x_684_ = l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(v___x_683_, v_a_682_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_pos_685_; lean_object* v_res_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_702_; 
v_pos_685_ = lean_ctor_get(v___x_684_, 0);
v_res_686_ = lean_ctor_get(v___x_684_, 1);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_702_ == 0)
{
v___x_688_ = v___x_684_;
v_isShared_689_ = v_isSharedCheck_702_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_res_686_);
lean_inc(v_pos_685_);
lean_dec(v___x_684_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_702_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_fst_690_; lean_object* v_snd_691_; lean_object* v___x_692_; uint8_t v_decide_693_; 
v_fst_690_ = lean_ctor_get(v_pos_685_, 0);
v_snd_691_ = lean_ctor_get(v_pos_685_, 1);
v___x_692_ = lean_string_utf8_byte_size(v_fst_690_);
v_decide_693_ = lean_nat_dec_eq(v_snd_691_, v___x_692_);
if (v_decide_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_696_; 
lean_dec(v_res_686_);
v___x_694_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_689_ == 0)
{
lean_ctor_set_tag(v___x_688_, 1);
lean_ctor_set(v___x_688_, 1, v___x_694_);
v___x_696_ = v___x_688_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_pos_685_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
else
{
lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_698_ = lean_array_to_list(v_res_686_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 1, v___x_698_);
v___x_700_ = v___x_688_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_pos_685_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
else
{
lean_object* v_pos_703_; lean_object* v_err_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
v_pos_703_ = lean_ctor_get(v___x_684_, 0);
v_err_704_ = lean_ctor_get(v___x_684_, 1);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_684_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_err_704_);
lean_inc(v_pos_703_);
lean_dec(v___x_684_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_pos_703_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_err_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(uint32_t v_a_712_, lean_object* v_x_713_, lean_object* v_x_714_){
_start:
{
lean_object* v_zero_715_; uint8_t v_isZero_716_; 
v_zero_715_ = lean_unsigned_to_nat(0u);
v_isZero_716_ = lean_nat_dec_eq(v_x_713_, v_zero_715_);
if (v_isZero_716_ == 1)
{
lean_dec(v_x_713_);
return v_x_714_;
}
else
{
lean_object* v_one_717_; lean_object* v_n_718_; lean_object* v___x_719_; 
v_one_717_ = lean_unsigned_to_nat(1u);
v_n_718_ = lean_nat_sub(v_x_713_, v_one_717_);
lean_dec(v_x_713_);
v___x_719_ = lean_string_push(v_x_714_, v_a_712_);
v_x_713_ = v_n_718_;
v_x_714_ = v___x_719_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1___boxed(lean_object* v_a_721_, lean_object* v_x_722_, lean_object* v_x_723_){
_start:
{
uint32_t v_a_boxed_724_; lean_object* v_res_725_; 
v_a_boxed_724_ = lean_unbox_uint32(v_a_721_);
lean_dec(v_a_721_);
v_res_725_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_boxed_724_, v_x_722_, v_x_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(lean_object* v___x_726_, lean_object* v_s_727_, lean_object* v_a_728_, lean_object* v_b_729_){
_start:
{
uint8_t v_decide_730_; 
v_decide_730_ = lean_nat_dec_eq(v_a_728_, v___x_726_);
if (v_decide_730_ == 0)
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = lean_string_utf8_next_fast(v_s_727_, v_a_728_);
lean_dec(v_a_728_);
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = lean_nat_add(v_b_729_, v___x_732_);
lean_dec(v_b_729_);
v_a_728_ = v___x_731_;
v_b_729_ = v___x_733_;
goto _start;
}
else
{
lean_dec(v_a_728_);
return v_b_729_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg___boxed(lean_object* v___x_735_, lean_object* v_s_736_, lean_object* v_a_737_, lean_object* v_b_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_735_, v_s_736_, v_a_737_, v_b_738_);
lean_dec_ref(v_s_736_);
lean_dec(v___x_735_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(lean_object* v_n_740_, uint32_t v_a_741_, lean_object* v_s_742_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_743_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = lean_string_utf8_byte_size(v_s_742_);
v___x_746_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_745_, v_s_742_, v___x_744_, v___x_744_);
v___x_747_ = lean_nat_sub(v_n_740_, v___x_746_);
lean_dec(v___x_746_);
v___x_748_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_741_, v___x_747_, v___x_743_);
v___x_749_ = lean_string_append(v___x_748_, v_s_742_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii___boxed(lean_object* v_n_750_, lean_object* v_a_751_, lean_object* v_s_752_){
_start:
{
uint32_t v_a_boxed_753_; lean_object* v_res_754_; 
v_a_boxed_753_ = lean_unbox_uint32(v_a_751_);
lean_dec(v_a_751_);
v_res_754_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v_n_750_, v_a_boxed_753_, v_s_752_);
lean_dec_ref(v_s_752_);
lean_dec(v_n_750_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(lean_object* v___x_755_, lean_object* v___x_756_, lean_object* v_s_757_, lean_object* v_inst_758_, lean_object* v_R_759_, lean_object* v_a_760_, lean_object* v_b_761_, lean_object* v_c_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_755_, v_s_757_, v_a_760_, v_b_761_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___boxed(lean_object* v___x_764_, lean_object* v___x_765_, lean_object* v_s_766_, lean_object* v_inst_767_, lean_object* v_R_768_, lean_object* v_a_769_, lean_object* v_b_770_, lean_object* v_c_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(v___x_764_, v___x_765_, v_s_766_, v_inst_767_, v_R_768_, v_a_769_, v_b_770_, v_c_771_);
lean_dec_ref(v_s_766_);
lean_dec_ref(v___x_765_);
lean_dec(v___x_764_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(lean_object* v_n_773_, uint32_t v_a_774_, lean_object* v_s_775_){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_776_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = lean_string_utf8_byte_size(v_s_775_);
v___x_779_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_778_, v_s_775_, v___x_777_, v___x_777_);
v___x_780_ = lean_nat_sub(v_n_773_, v___x_779_);
lean_dec(v___x_779_);
v___x_781_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_774_, v___x_780_, v___x_776_);
v___x_782_ = lean_string_append(v_s_775_, v___x_781_);
lean_dec_ref(v___x_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii___boxed(lean_object* v_n_783_, lean_object* v_a_784_, lean_object* v_s_785_){
_start:
{
uint32_t v_a_boxed_786_; lean_object* v_res_787_; 
v_a_boxed_786_ = lean_unbox_uint32(v_a_784_);
lean_dec(v_a_784_);
v_res_787_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_n_783_, v_a_boxed_786_, v_s_785_);
lean_dec(v_n_783_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_pad_spec__0(lean_object* v_x_788_, lean_object* v_x_789_){
_start:
{
lean_object* v_zero_790_; uint8_t v_isZero_791_; 
v_zero_790_ = lean_unsigned_to_nat(0u);
v_isZero_791_ = lean_nat_dec_eq(v_x_788_, v_zero_790_);
if (v_isZero_791_ == 1)
{
lean_dec(v_x_788_);
return v_x_789_;
}
else
{
uint32_t v___x_792_; lean_object* v_one_793_; lean_object* v_n_794_; lean_object* v___x_795_; 
v___x_792_ = 48;
v_one_793_ = lean_unsigned_to_nat(1u);
v_n_794_ = lean_nat_sub(v_x_788_, v_one_793_);
lean_dec(v_x_788_);
v___x_795_ = lean_string_push(v_x_789_, v___x_792_);
v_x_788_ = v_n_794_;
v_x_789_ = v___x_795_;
goto _start;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0(void){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = lean_nat_to_int(v___x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad(lean_object* v_size_800_, lean_object* v_n_801_){
_start:
{
lean_object* v___x_802_; lean_object* v_digits_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v_padded_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_802_ = lean_nat_abs(v_n_801_);
v_digits_803_ = l_Nat_reprFast(v___x_802_);
v___x_804_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_805_ = lean_string_length(v_digits_803_);
v___x_806_ = lean_nat_sub(v_size_800_, v___x_805_);
v___x_807_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_pad_spec__0(v___x_806_, v___x_804_);
v_padded_808_ = lean_string_append(v___x_807_, v_digits_803_);
lean_dec_ref(v_digits_803_);
v___x_809_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_810_ = lean_int_dec_lt(v_n_801_, v___x_809_);
if (v___x_810_ == 0)
{
return v_padded_808_;
}
else
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_812_ = lean_string_append(v___x_811_, v_padded_808_);
lean_dec_ref(v_padded_808_);
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___boxed(lean_object* v_size_813_, lean_object* v_n_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_size_813_, v_n_814_);
lean_dec(v_n_814_);
lean_dec(v_size_813_);
return v_res_815_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__0(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(9999u);
v___x_817_ = lean_nat_to_int(v___x_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear(lean_object* v_n_819_){
_start:
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__0);
v___x_821_ = lean_int_dec_lt(v___x_820_, v_n_819_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_unsigned_to_nat(4u);
v___x_823_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_822_, v_n_819_);
return v___x_823_;
}
else
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_824_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__1));
v___x_825_ = l_Int_repr(v_n_819_);
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
lean_dec_ref(v___x_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___boxed(lean_object* v_n_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear(v_n_827_);
lean_dec(v_n_827_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(lean_object* v_symbols_829_, uint8_t v_x_830_){
_start:
{
switch(v_x_830_)
{
case 1:
{
lean_object* v_monthLong_831_; 
v_monthLong_831_ = lean_ctor_get(v_symbols_829_, 0);
lean_inc_ref(v_monthLong_831_);
return v_monthLong_831_;
}
case 2:
{
lean_object* v_monthNarrow_832_; 
v_monthNarrow_832_ = lean_ctor_get(v_symbols_829_, 2);
lean_inc_ref(v_monthNarrow_832_);
return v_monthNarrow_832_;
}
default: 
{
lean_object* v_monthShort_833_; 
v_monthShort_833_ = lean_ctor_get(v_symbols_829_, 1);
lean_inc_ref(v_monthShort_833_);
return v_monthShort_833_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthNames___boxed(lean_object* v_symbols_834_, lean_object* v_x_835_){
_start:
{
uint8_t v_x_30__boxed_836_; lean_object* v_res_837_; 
v_x_30__boxed_836_ = lean_unbox(v_x_835_);
v_res_837_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(v_symbols_834_, v_x_30__boxed_836_);
lean_dec_ref(v_symbols_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(lean_object* v_symbols_838_, uint8_t v_x_839_){
_start:
{
switch(v_x_839_)
{
case 0:
{
lean_object* v_weekdayShort_840_; 
v_weekdayShort_840_ = lean_ctor_get(v_symbols_838_, 4);
lean_inc_ref(v_weekdayShort_840_);
return v_weekdayShort_840_;
}
case 1:
{
lean_object* v_weekdayLong_841_; 
v_weekdayLong_841_ = lean_ctor_get(v_symbols_838_, 3);
lean_inc_ref(v_weekdayLong_841_);
return v_weekdayLong_841_;
}
case 2:
{
lean_object* v_weekdayNarrow_842_; 
v_weekdayNarrow_842_ = lean_ctor_get(v_symbols_838_, 5);
lean_inc_ref(v_weekdayNarrow_842_);
return v_weekdayNarrow_842_;
}
default: 
{
lean_object* v_weekdayTwoLetter_843_; 
v_weekdayTwoLetter_843_ = lean_ctor_get(v_symbols_838_, 6);
lean_inc_ref(v_weekdayTwoLetter_843_);
return v_weekdayTwoLetter_843_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames___boxed(lean_object* v_symbols_844_, lean_object* v_x_845_){
_start:
{
uint8_t v_x_32__boxed_846_; lean_object* v_res_847_; 
v_x_32__boxed_846_ = lean_unbox(v_x_845_);
v_res_847_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_844_, v_x_32__boxed_846_);
lean_dec_ref(v_symbols_844_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraNames(lean_object* v_symbols_848_, uint8_t v_x_849_){
_start:
{
switch(v_x_849_)
{
case 1:
{
lean_object* v_eraLong_850_; 
v_eraLong_850_ = lean_ctor_get(v_symbols_848_, 8);
lean_inc_ref(v_eraLong_850_);
return v_eraLong_850_;
}
case 2:
{
lean_object* v_eraNarrow_851_; 
v_eraNarrow_851_ = lean_ctor_get(v_symbols_848_, 9);
lean_inc_ref(v_eraNarrow_851_);
return v_eraNarrow_851_;
}
default: 
{
lean_object* v_eraShort_852_; 
v_eraShort_852_ = lean_ctor_get(v_symbols_848_, 7);
lean_inc_ref(v_eraShort_852_);
return v_eraShort_852_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraNames___boxed(lean_object* v_symbols_853_, lean_object* v_x_854_){
_start:
{
uint8_t v_x_30__boxed_855_; lean_object* v_res_856_; 
v_x_30__boxed_855_ = lean_unbox(v_x_854_);
v_res_856_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraNames(v_symbols_853_, v_x_30__boxed_855_);
lean_dec_ref(v_symbols_853_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(lean_object* v_symbols_857_, uint8_t v_x_858_){
_start:
{
switch(v_x_858_)
{
case 0:
{
lean_object* v_quarterShort_859_; 
v_quarterShort_859_ = lean_ctor_get(v_symbols_857_, 10);
lean_inc_ref(v_quarterShort_859_);
return v_quarterShort_859_;
}
case 1:
{
lean_object* v_quarterLong_860_; 
v_quarterLong_860_ = lean_ctor_get(v_symbols_857_, 11);
lean_inc_ref(v_quarterLong_860_);
return v_quarterLong_860_;
}
default: 
{
lean_object* v_quarterNarrow_861_; 
v_quarterNarrow_861_ = lean_ctor_get(v_symbols_857_, 12);
lean_inc_ref(v_quarterNarrow_861_);
return v_quarterNarrow_861_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames___boxed(lean_object* v_symbols_862_, lean_object* v_x_863_){
_start:
{
uint8_t v_x_30__boxed_864_; lean_object* v_res_865_; 
v_x_30__boxed_864_ = lean_unbox(v_x_863_);
v_res_865_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(v_symbols_862_, v_x_30__boxed_864_);
lean_dec_ref(v_symbols_862_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerNames(lean_object* v_symbols_866_, uint8_t v_x_867_){
_start:
{
switch(v_x_867_)
{
case 1:
{
lean_object* v_amLong_868_; lean_object* v_pmLong_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_amLong_868_ = lean_ctor_get(v_symbols_866_, 15);
lean_inc_ref(v_amLong_868_);
v_pmLong_869_ = lean_ctor_get(v_symbols_866_, 16);
lean_inc_ref(v_pmLong_869_);
lean_dec_ref(v_symbols_866_);
v___x_870_ = lean_unsigned_to_nat(2u);
v___x_871_ = lean_mk_empty_array_with_capacity(v___x_870_);
v___x_872_ = lean_array_push(v___x_871_, v_amLong_868_);
v___x_873_ = lean_array_push(v___x_872_, v_pmLong_869_);
return v___x_873_;
}
case 2:
{
lean_object* v_amNarrow_874_; lean_object* v_pmNarrow_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_amNarrow_874_ = lean_ctor_get(v_symbols_866_, 17);
lean_inc_ref(v_amNarrow_874_);
v_pmNarrow_875_ = lean_ctor_get(v_symbols_866_, 18);
lean_inc_ref(v_pmNarrow_875_);
lean_dec_ref(v_symbols_866_);
v___x_876_ = lean_unsigned_to_nat(2u);
v___x_877_ = lean_mk_empty_array_with_capacity(v___x_876_);
v___x_878_ = lean_array_push(v___x_877_, v_amNarrow_874_);
v___x_879_ = lean_array_push(v___x_878_, v_pmNarrow_875_);
return v___x_879_;
}
default: 
{
lean_object* v_amShort_880_; lean_object* v_pmShort_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_amShort_880_ = lean_ctor_get(v_symbols_866_, 13);
lean_inc_ref(v_amShort_880_);
v_pmShort_881_ = lean_ctor_get(v_symbols_866_, 14);
lean_inc_ref(v_pmShort_881_);
lean_dec_ref(v_symbols_866_);
v___x_882_ = lean_unsigned_to_nat(2u);
v___x_883_ = lean_mk_empty_array_with_capacity(v___x_882_);
v___x_884_ = lean_array_push(v___x_883_, v_amShort_880_);
v___x_885_ = lean_array_push(v___x_884_, v_pmShort_881_);
return v___x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerNames___boxed(lean_object* v_symbols_886_, lean_object* v_x_887_){
_start:
{
uint8_t v_x_95__boxed_888_; lean_object* v_res_889_; 
v_x_95__boxed_888_ = lean_unbox(v_x_887_);
v_res_889_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerNames(v_symbols_886_, v_x_95__boxed_888_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames(lean_object* v_symbols_890_, uint8_t v_text_891_){
_start:
{
lean_object* v___y_893_; 
switch(v_text_891_)
{
case 1:
{
lean_object* v_dayPeriodLong_904_; 
v_dayPeriodLong_904_ = lean_ctor_get(v_symbols_890_, 20);
lean_inc_ref(v_dayPeriodLong_904_);
lean_dec_ref(v_symbols_890_);
v___y_893_ = v_dayPeriodLong_904_;
goto v___jp_892_;
}
case 2:
{
lean_object* v_dayPeriodNarrow_905_; 
v_dayPeriodNarrow_905_ = lean_ctor_get(v_symbols_890_, 21);
lean_inc_ref(v_dayPeriodNarrow_905_);
lean_dec_ref(v_symbols_890_);
v___y_893_ = v_dayPeriodNarrow_905_;
goto v___jp_892_;
}
default: 
{
lean_object* v_dayPeriodShort_906_; 
v_dayPeriodShort_906_ = lean_ctor_get(v_symbols_890_, 19);
lean_inc_ref(v_dayPeriodShort_906_);
lean_dec_ref(v_symbols_890_);
v___y_893_ = v_dayPeriodShort_906_;
goto v___jp_892_;
}
}
v___jp_892_:
{
lean_object* v_am_894_; lean_object* v_pm_895_; lean_object* v_noon_896_; lean_object* v_midnight_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_am_894_ = lean_ctor_get(v___y_893_, 0);
lean_inc_ref(v_am_894_);
v_pm_895_ = lean_ctor_get(v___y_893_, 1);
lean_inc_ref(v_pm_895_);
v_noon_896_ = lean_ctor_get(v___y_893_, 2);
lean_inc_ref(v_noon_896_);
v_midnight_897_ = lean_ctor_get(v___y_893_, 3);
lean_inc_ref(v_midnight_897_);
lean_dec_ref(v___y_893_);
v___x_898_ = lean_unsigned_to_nat(4u);
v___x_899_ = lean_mk_empty_array_with_capacity(v___x_898_);
v___x_900_ = lean_array_push(v___x_899_, v_midnight_897_);
v___x_901_ = lean_array_push(v___x_900_, v_noon_896_);
v___x_902_ = lean_array_push(v___x_901_, v_am_894_);
v___x_903_ = lean_array_push(v___x_902_, v_pm_895_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames___boxed(lean_object* v_symbols_907_, lean_object* v_text_908_){
_start:
{
uint8_t v_text_boxed_909_; lean_object* v_res_910_; 
v_text_boxed_909_ = lean_unbox(v_text_908_);
v_res_910_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames(v_symbols_907_, v_text_boxed_909_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames(lean_object* v_symbols_911_, uint8_t v_x_912_){
_start:
{
switch(v_x_912_)
{
case 1:
{
lean_object* v_extendedDayPeriodLong_913_; 
v_extendedDayPeriodLong_913_ = lean_ctor_get(v_symbols_911_, 23);
lean_inc_ref(v_extendedDayPeriodLong_913_);
return v_extendedDayPeriodLong_913_;
}
case 2:
{
lean_object* v_extendedDayPeriodNarrow_914_; 
v_extendedDayPeriodNarrow_914_ = lean_ctor_get(v_symbols_911_, 24);
lean_inc_ref(v_extendedDayPeriodNarrow_914_);
return v_extendedDayPeriodNarrow_914_;
}
default: 
{
lean_object* v_extendedDayPeriodShort_915_; 
v_extendedDayPeriodShort_915_ = lean_ctor_get(v_symbols_911_, 22);
lean_inc_ref(v_extendedDayPeriodShort_915_);
return v_extendedDayPeriodShort_915_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames___boxed(lean_object* v_symbols_916_, lean_object* v_x_917_){
_start:
{
uint8_t v_x_30__boxed_918_; lean_object* v_res_919_; 
v_x_30__boxed_918_ = lean_unbox(v_x_917_);
v_res_919_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames(v_symbols_916_, v_x_30__boxed_918_);
lean_dec_ref(v_symbols_916_);
return v_res_919_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_921_ = lean_int_neg(v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex(lean_object* v_month_922_){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0);
v___x_924_ = lean_int_add(v_month_922_, v___x_923_);
v___x_925_ = l_Int_toNat(v___x_924_);
lean_dec(v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___boxed(lean_object* v_month_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex(v_month_926_);
lean_dec(v_month_926_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex_spec__0(lean_object* v_a_928_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = lean_nat_to_int(v_a_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex(lean_object* v_i_930_){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_nat_to_int(v_i_930_);
v___x_932_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_933_ = lean_int_add(v___x_931_, v___x_932_);
lean_dec(v___x_931_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex(uint8_t v_weekday_934_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_935_ = l_Std_Time_Weekday_toOrdinal(v_weekday_934_);
v___x_936_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0);
v___x_937_ = lean_int_add(v___x_935_, v___x_936_);
lean_dec(v___x_935_);
v___x_938_ = l_Int_toNat(v___x_937_);
lean_dec(v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex___boxed(lean_object* v_weekday_939_){
_start:
{
uint8_t v_weekday_boxed_940_; lean_object* v_res_941_; 
v_weekday_boxed_940_ = lean_unbox(v_weekday_939_);
v_res_941_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex(v_weekday_boxed_940_);
return v_res_941_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(lean_object* v_i_942_){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_943_ = lean_nat_to_int(v_i_942_);
v___x_944_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_945_ = lean_int_add(v___x_943_, v___x_944_);
lean_dec(v___x_943_);
v___x_946_ = l_Std_Time_Weekday_ofOrdinal(v___x_945_);
lean_dec(v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex___boxed(lean_object* v_i_947_){
_start:
{
uint8_t v_res_948_; lean_object* v_r_949_; 
v_res_948_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(v_i_947_);
v_r_949_ = lean_box(v_res_948_);
return v_r_949_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(uint8_t v_x_950_){
_start:
{
if (v_x_950_ == 0)
{
lean_object* v___x_951_; 
v___x_951_ = lean_unsigned_to_nat(0u);
return v___x_951_;
}
else
{
lean_object* v___x_952_; 
v___x_952_ = lean_unsigned_to_nat(1u);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex___boxed(lean_object* v_x_953_){
_start:
{
uint8_t v_x_40__boxed_954_; lean_object* v_res_955_; 
v_x_40__boxed_954_ = lean_unbox(v_x_953_);
v_res_955_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_x_40__boxed_954_);
return v_res_955_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(lean_object* v_i_956_){
_start:
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_nat_dec_eq(v_i_956_, v___x_957_);
if (v___x_958_ == 0)
{
uint8_t v___x_959_; 
v___x_959_ = 1;
return v___x_959_;
}
else
{
uint8_t v___x_960_; 
v___x_960_ = 0;
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex___boxed(lean_object* v_i_961_){
_start:
{
uint8_t v_res_962_; lean_object* v_r_963_; 
v_res_962_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(v_i_961_);
lean_dec(v_i_961_);
v_r_963_ = lean_box(v_res_962_);
return v_r_963_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex(lean_object* v_quarter_964_){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_965_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0);
v___x_966_ = lean_int_add(v_quarter_964_, v___x_965_);
v___x_967_ = l_Int_toNat(v___x_966_);
lean_dec(v___x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex___boxed(lean_object* v_quarter_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex(v_quarter_968_);
lean_dec(v_quarter_968_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterOfIndex(lean_object* v_i_970_){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_971_ = lean_nat_to_int(v_i_970_);
v___x_972_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_973_ = lean_int_add(v___x_971_, v___x_972_);
lean_dec(v___x_971_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerIndex(uint8_t v_x_974_){
_start:
{
if (v_x_974_ == 0)
{
lean_object* v___x_975_; 
v___x_975_ = lean_unsigned_to_nat(0u);
return v___x_975_;
}
else
{
lean_object* v___x_976_; 
v___x_976_ = lean_unsigned_to_nat(1u);
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerIndex___boxed(lean_object* v_x_977_){
_start:
{
uint8_t v_x_40__boxed_978_; lean_object* v_res_979_; 
v_x_40__boxed_978_ = lean_unbox(v_x_977_);
v_res_979_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerIndex(v_x_40__boxed_978_);
return v_res_979_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_markerOfIndex(lean_object* v_i_980_){
_start:
{
lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_nat_dec_eq(v_i_980_, v___x_981_);
if (v___x_982_ == 0)
{
uint8_t v___x_983_; 
v___x_983_ = 1;
return v___x_983_;
}
else
{
uint8_t v___x_984_; 
v___x_984_ = 0;
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_markerOfIndex___boxed(lean_object* v_i_985_){
_start:
{
uint8_t v_res_986_; lean_object* v_r_987_; 
v_res_986_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerOfIndex(v_i_985_);
lean_dec(v_i_985_);
v_r_987_ = lean_box(v_res_986_);
return v_r_987_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodIndex(uint8_t v_x_988_){
_start:
{
switch(v_x_988_)
{
case 0:
{
lean_object* v___x_989_; 
v___x_989_ = lean_unsigned_to_nat(2u);
return v___x_989_;
}
case 1:
{
lean_object* v___x_990_; 
v___x_990_ = lean_unsigned_to_nat(3u);
return v___x_990_;
}
case 2:
{
lean_object* v___x_991_; 
v___x_991_ = lean_unsigned_to_nat(1u);
return v___x_991_;
}
default: 
{
lean_object* v___x_992_; 
v___x_992_ = lean_unsigned_to_nat(0u);
return v___x_992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodIndex___boxed(lean_object* v_x_993_){
_start:
{
uint8_t v_x_76__boxed_994_; lean_object* v_res_995_; 
v_x_76__boxed_994_ = lean_unbox(v_x_993_);
v_res_995_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodIndex(v_x_76__boxed_994_);
return v_res_995_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodOfIndex(lean_object* v_x_996_){
_start:
{
lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = lean_nat_dec_eq(v_x_996_, v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1000_ = lean_nat_dec_eq(v_x_996_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1001_ = lean_unsigned_to_nat(2u);
v___x_1002_ = lean_nat_dec_eq(v_x_996_, v___x_1001_);
if (v___x_1002_ == 0)
{
uint8_t v___x_1003_; 
v___x_1003_ = 1;
return v___x_1003_;
}
else
{
uint8_t v___x_1004_; 
v___x_1004_ = 0;
return v___x_1004_;
}
}
else
{
uint8_t v___x_1005_; 
v___x_1005_ = 2;
return v___x_1005_;
}
}
else
{
uint8_t v___x_1006_; 
v___x_1006_ = 3;
return v___x_1006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodOfIndex___boxed(lean_object* v_x_1007_){
_start:
{
uint8_t v_res_1008_; lean_object* v_r_1009_; 
v_res_1008_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodOfIndex(v_x_1007_);
lean_dec(v_x_1007_);
v_r_1009_ = lean_box(v_res_1008_);
return v_r_1009_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(uint8_t v_x_1010_){
_start:
{
switch(v_x_1010_)
{
case 0:
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_unsigned_to_nat(0u);
return v___x_1011_;
}
case 1:
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_unsigned_to_nat(1u);
return v___x_1012_;
}
case 2:
{
lean_object* v___x_1013_; 
v___x_1013_ = lean_unsigned_to_nat(2u);
return v___x_1013_;
}
case 3:
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_unsigned_to_nat(3u);
return v___x_1014_;
}
case 4:
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_unsigned_to_nat(4u);
return v___x_1015_;
}
default: 
{
lean_object* v___x_1016_; 
v___x_1016_ = lean_unsigned_to_nat(5u);
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex___boxed(lean_object* v_x_1017_){
_start:
{
uint8_t v_x_112__boxed_1018_; lean_object* v_res_1019_; 
v_x_112__boxed_1018_ = lean_unbox(v_x_1017_);
v_res_1019_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(v_x_112__boxed_1018_);
return v_res_1019_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodOfIndex(lean_object* v_x_1020_){
_start:
{
lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_1021_ = lean_unsigned_to_nat(0u);
v___x_1022_ = lean_nat_dec_eq(v_x_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; uint8_t v___x_1024_; 
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = lean_nat_dec_eq(v_x_1020_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; uint8_t v___x_1026_; 
v___x_1025_ = lean_unsigned_to_nat(2u);
v___x_1026_ = lean_nat_dec_eq(v_x_1020_, v___x_1025_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; uint8_t v___x_1028_; 
v___x_1027_ = lean_unsigned_to_nat(3u);
v___x_1028_ = lean_nat_dec_eq(v_x_1020_, v___x_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1029_ = lean_unsigned_to_nat(4u);
v___x_1030_ = lean_nat_dec_eq(v_x_1020_, v___x_1029_);
if (v___x_1030_ == 0)
{
uint8_t v___x_1031_; 
v___x_1031_ = 5;
return v___x_1031_;
}
else
{
uint8_t v___x_1032_; 
v___x_1032_ = 4;
return v___x_1032_;
}
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = 3;
return v___x_1033_;
}
}
else
{
uint8_t v___x_1034_; 
v___x_1034_ = 2;
return v___x_1034_;
}
}
else
{
uint8_t v___x_1035_; 
v___x_1035_ = 1;
return v___x_1035_;
}
}
else
{
uint8_t v___x_1036_; 
v___x_1036_ = 0;
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodOfIndex___boxed(lean_object* v_x_1037_){
_start:
{
uint8_t v_res_1038_; lean_object* v_r_1039_; 
v_res_1038_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodOfIndex(v_x_1037_);
lean_dec(v_x_1037_);
v_r_1039_ = lean_box(v_res_1038_);
return v_r_1039_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___closed__0(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_unsigned_to_nat(60u);
v___x_1041_ = lean_nat_to_int(v___x_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds(lean_object* v_offset_1042_){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1043_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___closed__0);
v___x_1044_ = lean_int_div(v_offset_1042_, v___x_1043_);
v___x_1045_ = lean_int_mul(v___x_1044_, v___x_1043_);
lean_dec(v___x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds___boxed(lean_object* v_offset_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds(v_offset_1046_);
lean_dec(v_offset_1046_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_dropSeconds_spec__0(lean_object* v_a_1048_){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = lean_nat_to_int(v_a_1048_);
v___x_1050_ = l_Rat_ofInt(v___x_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX(lean_object* v_offset_1051_, uint8_t v_x_1052_){
_start:
{
switch(v_x_1052_)
{
case 0:
{
lean_object* v___x_1053_; uint8_t v___x_1054_; lean_object* v_hourMinute_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1053_ = l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds(v_offset_1051_);
v___x_1054_ = 0;
v_hourMinute_1055_ = l_Std_Time_TimeZone_Offset_toIsoString(v___x_1053_, v___x_1054_);
v___x_1056_ = lean_nat_abs(v_offset_1051_);
lean_dec(v_offset_1051_);
v___x_1057_ = lean_unsigned_to_nat(60u);
v___x_1058_ = lean_nat_div(v___x_1056_, v___x_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_nat_mod(v___x_1058_, v___x_1057_);
lean_dec(v___x_1058_);
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_nat_dec_eq(v___x_1059_, v___x_1060_);
lean_dec(v___x_1059_);
if (v___x_1061_ == 0)
{
return v_hourMinute_1055_;
}
else
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1062_ = lean_unsigned_to_nat(2u);
v___x_1063_ = lean_string_utf8_byte_size(v_hourMinute_1055_);
lean_inc_ref(v_hourMinute_1055_);
v___x_1064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1064_, 0, v_hourMinute_1055_);
lean_ctor_set(v___x_1064_, 1, v___x_1060_);
lean_ctor_set(v___x_1064_, 2, v___x_1063_);
v___x_1065_ = l_String_Slice_Pos_prevn(v___x_1064_, v___x_1063_, v___x_1062_);
lean_dec_ref_known(v___x_1064_, 3);
v___x_1066_ = lean_string_utf8_extract_fast(v_hourMinute_1055_, v___x_1060_, v___x_1065_);
lean_dec(v___x_1065_);
lean_dec_ref(v_hourMinute_1055_);
return v___x_1066_;
}
}
case 1:
{
lean_object* v___x_1067_; uint8_t v___x_1068_; lean_object* v___x_1069_; 
v___x_1067_ = l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds(v_offset_1051_);
lean_dec(v_offset_1051_);
v___x_1068_ = 0;
v___x_1069_ = l_Std_Time_TimeZone_Offset_toIsoString(v___x_1067_, v___x_1068_);
return v___x_1069_;
}
case 2:
{
lean_object* v___x_1070_; uint8_t v___x_1071_; lean_object* v___x_1072_; 
v___x_1070_ = l___private_Std_Time_Format_Basic_0__Std_Time_dropSeconds(v_offset_1051_);
lean_dec(v_offset_1051_);
v___x_1071_ = 1;
v___x_1072_ = l_Std_Time_TimeZone_Offset_toIsoString(v___x_1070_, v___x_1071_);
return v___x_1072_;
}
case 3:
{
uint8_t v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = 0;
v___x_1074_ = l_Std_Time_TimeZone_Offset_toIsoString(v_offset_1051_, v___x_1073_);
return v___x_1074_;
}
default: 
{
uint8_t v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = 1;
v___x_1076_ = l_Std_Time_TimeZone_Offset_toIsoString(v_offset_1051_, v___x_1075_);
return v___x_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX___boxed(lean_object* v_offset_1077_, lean_object* v_x_1078_){
_start:
{
uint8_t v_x_177__boxed_1079_; lean_object* v_res_1080_; 
v_x_177__boxed_1079_ = lean_unbox(v_x_1078_);
v_res_1080_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX(v_offset_1077_, v_x_177__boxed_1079_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset(lean_object* v_offset_1082_){
_start:
{
lean_object* v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1084_ = lean_int_dec_eq(v_offset_1082_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1085_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
v___x_1086_ = 1;
v___x_1087_ = l_Std_Time_TimeZone_Offset_toIsoString(v_offset_1082_, v___x_1086_);
v___x_1088_ = lean_string_append(v___x_1085_, v___x_1087_);
lean_dec_ref(v___x_1087_);
return v___x_1088_;
}
else
{
lean_object* v___x_1089_; 
lean_dec(v_offset_1082_);
v___x_1089_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(lean_object* v_label_1090_, lean_object* v_offset_1091_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1104_ = lean_string_utf8_byte_size(v_label_1090_);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_dec_le(v___x_1105_, v___x_1104_);
if (v___x_1106_ == 0)
{
goto v___jp_1097_;
}
else
{
lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1107_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__1));
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lean_string_memcmp(v_label_1090_, v___x_1107_, v___x_1108_, v___x_1108_, v___x_1105_);
if (v___x_1109_ == 0)
{
goto v___jp_1097_;
}
else
{
goto v___jp_1092_;
}
}
v___jp_1092_:
{
lean_object* v___x_1093_; uint8_t v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1093_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
v___x_1094_ = 1;
v___x_1095_ = l_Std_Time_TimeZone_Offset_toIsoString(v_offset_1091_, v___x_1094_);
v___x_1096_ = lean_string_append(v___x_1093_, v___x_1095_);
lean_dec_ref(v___x_1095_);
return v___x_1096_;
}
v___jp_1097_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1098_ = lean_string_utf8_byte_size(v_label_1090_);
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = lean_nat_dec_le(v___x_1099_, v___x_1098_);
if (v___x_1100_ == 0)
{
lean_dec(v_offset_1091_);
lean_inc_ref(v_label_1090_);
return v_label_1090_;
}
else
{
lean_object* v___x_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; 
v___x_1101_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1103_ = lean_string_memcmp(v_label_1090_, v___x_1101_, v___x_1102_, v___x_1102_, v___x_1099_);
if (v___x_1103_ == 0)
{
lean_dec(v_offset_1091_);
lean_inc_ref(v_label_1090_);
return v_label_1090_;
}
else
{
goto v___jp_1092_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel___boxed(lean_object* v_label_1110_, lean_object* v_offset_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(v_label_1110_, v_offset_1111_);
lean_dec_ref(v_label_1110_);
return v_res_1112_;
}
}
static lean_object* _init_l_Std_Time_classifyDayPeriod___closed__0(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_unsigned_to_nat(12u);
v___x_1114_ = lean_nat_to_int(v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod(lean_object* v_hour_1115_, lean_object* v_minute_1116_, lean_object* v_second_1117_){
_start:
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1131_ = lean_int_dec_eq(v_hour_1115_, v___x_1130_);
if (v___x_1131_ == 0)
{
goto v___jp_1123_;
}
else
{
uint8_t v___x_1132_; 
v___x_1132_ = lean_int_dec_eq(v_minute_1116_, v___x_1130_);
if (v___x_1132_ == 0)
{
goto v___jp_1123_;
}
else
{
uint8_t v___x_1133_; 
v___x_1133_ = lean_int_dec_eq(v_second_1117_, v___x_1130_);
if (v___x_1133_ == 0)
{
goto v___jp_1123_;
}
else
{
uint8_t v___x_1134_; 
v___x_1134_ = 3;
return v___x_1134_;
}
}
}
v___jp_1118_:
{
lean_object* v___x_1119_; uint8_t v___x_1120_; 
v___x_1119_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1120_ = lean_int_dec_lt(v_hour_1115_, v___x_1119_);
if (v___x_1120_ == 0)
{
uint8_t v___x_1121_; 
v___x_1121_ = 1;
return v___x_1121_;
}
else
{
uint8_t v___x_1122_; 
v___x_1122_ = 0;
return v___x_1122_;
}
}
v___jp_1123_:
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1124_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1125_ = lean_int_dec_eq(v_hour_1115_, v___x_1124_);
if (v___x_1125_ == 0)
{
goto v___jp_1118_;
}
else
{
lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1126_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1127_ = lean_int_dec_eq(v_minute_1116_, v___x_1126_);
if (v___x_1127_ == 0)
{
goto v___jp_1118_;
}
else
{
uint8_t v___x_1128_; 
v___x_1128_ = lean_int_dec_eq(v_second_1117_, v___x_1126_);
if (v___x_1128_ == 0)
{
goto v___jp_1118_;
}
else
{
uint8_t v___x_1129_; 
v___x_1129_ = 2;
return v___x_1129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___boxed(lean_object* v_hour_1135_, lean_object* v_minute_1136_, lean_object* v_second_1137_){
_start:
{
uint8_t v_res_1138_; lean_object* v_r_1139_; 
v_res_1138_ = l_Std_Time_classifyDayPeriod(v_hour_1135_, v_minute_1136_, v_second_1137_);
lean_dec(v_second_1137_);
lean_dec(v_minute_1136_);
lean_dec(v_hour_1135_);
v_r_1139_ = lean_box(v_res_1138_);
return v_r_1139_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__0(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_unsigned_to_nat(6u);
v___x_1141_ = lean_nat_to_int(v___x_1140_);
return v___x_1141_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__1(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_unsigned_to_nat(18u);
v___x_1143_ = lean_nat_to_int(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__2(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_unsigned_to_nat(21u);
v___x_1145_ = lean_nat_to_int(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyExtendedDayPeriod(lean_object* v_hour_1146_, lean_object* v_minute_1147_, lean_object* v_second_1148_){
_start:
{
lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1170_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1171_ = lean_int_dec_eq(v_hour_1146_, v___x_1170_);
if (v___x_1171_ == 0)
{
goto v___jp_1163_;
}
else
{
uint8_t v___x_1172_; 
v___x_1172_ = lean_int_dec_eq(v_minute_1147_, v___x_1170_);
if (v___x_1172_ == 0)
{
goto v___jp_1163_;
}
else
{
uint8_t v___x_1173_; 
v___x_1173_ = lean_int_dec_eq(v_second_1148_, v___x_1170_);
if (v___x_1173_ == 0)
{
goto v___jp_1163_;
}
else
{
uint8_t v___x_1174_; 
v___x_1174_ = 0;
return v___x_1174_;
}
}
}
v___jp_1149_:
{
lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1150_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__0, &l_Std_Time_classifyExtendedDayPeriod___closed__0_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__0);
v___x_1151_ = lean_int_dec_lt(v_hour_1146_, v___x_1150_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; uint8_t v___x_1153_; 
v___x_1152_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1153_ = lean_int_dec_lt(v_hour_1146_, v___x_1152_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1154_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__1, &l_Std_Time_classifyExtendedDayPeriod___closed__1_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__1);
v___x_1155_ = lean_int_dec_lt(v_hour_1146_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; uint8_t v___x_1157_; 
v___x_1156_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__2, &l_Std_Time_classifyExtendedDayPeriod___closed__2_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__2);
v___x_1157_ = lean_int_dec_lt(v_hour_1146_, v___x_1156_);
if (v___x_1157_ == 0)
{
uint8_t v___x_1158_; 
v___x_1158_ = 1;
return v___x_1158_;
}
else
{
uint8_t v___x_1159_; 
v___x_1159_ = 5;
return v___x_1159_;
}
}
else
{
uint8_t v___x_1160_; 
v___x_1160_ = 4;
return v___x_1160_;
}
}
else
{
uint8_t v___x_1161_; 
v___x_1161_ = 2;
return v___x_1161_;
}
}
else
{
uint8_t v___x_1162_; 
v___x_1162_ = 1;
return v___x_1162_;
}
}
v___jp_1163_:
{
lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1164_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1165_ = lean_int_dec_eq(v_hour_1146_, v___x_1164_);
if (v___x_1165_ == 0)
{
goto v___jp_1149_;
}
else
{
lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1167_ = lean_int_dec_eq(v_minute_1147_, v___x_1166_);
if (v___x_1167_ == 0)
{
goto v___jp_1149_;
}
else
{
uint8_t v___x_1168_; 
v___x_1168_ = lean_int_dec_eq(v_second_1148_, v___x_1166_);
if (v___x_1168_ == 0)
{
goto v___jp_1149_;
}
else
{
uint8_t v___x_1169_; 
v___x_1169_ = 3;
return v___x_1169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyExtendedDayPeriod___boxed(lean_object* v_hour_1175_, lean_object* v_minute_1176_, lean_object* v_second_1177_){
_start:
{
uint8_t v_res_1178_; lean_object* v_r_1179_; 
v_res_1178_ = l_Std_Time_classifyExtendedDayPeriod(v_hour_1175_, v_minute_1176_, v_second_1177_);
lean_dec(v_second_1177_);
lean_dec(v_minute_1176_);
lean_dec(v_hour_1175_);
v_r_1179_ = lean_box(v_res_1178_);
return v_r_1179_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_formatWith_spec__0(lean_object* v_a_1180_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Rat_ofInt(v_a_1180_);
return v___x_1181_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_unsigned_to_nat(1000000000u);
v___x_1183_ = lean_nat_to_int(v___x_1182_);
return v___x_1183_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_unsigned_to_nat(100u);
v___x_1186_ = lean_nat_to_int(v___x_1185_);
return v___x_1186_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_unsigned_to_nat(7u);
v___x_1188_ = lean_nat_to_int(v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(lean_object* v_dateformat_1191_, lean_object* v_modifier_1192_, lean_object* v_data_1193_){
_start:
{
lean_object* v_fst_1195_; lean_object* v_snd_1196_; 
switch(lean_obj_tag(v_modifier_1192_))
{
case 0:
{
uint8_t v_presentation_1234_; lean_object* v_symbols_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_presentation_1234_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v_symbols_1235_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1235_);
lean_dec_ref(v_dateformat_1191_);
v___x_1236_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraNames(v_symbols_1235_, v_presentation_1234_);
lean_dec_ref(v_symbols_1235_);
v___x_1237_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1238_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v___x_1237_);
v___x_1239_ = lean_array_fget(v___x_1236_, v___x_1238_);
lean_dec(v___x_1238_);
lean_dec_ref(v___x_1236_);
return v___x_1239_;
}
case 1:
{
lean_object* v_presentation_1240_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1240_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1240_);
lean_dec_ref_known(v_modifier_1192_, 1);
switch(lean_obj_tag(v_presentation_1240_))
{
case 0:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = lean_unsigned_to_nat(0u);
v___x_1242_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1241_, v_data_1193_);
lean_dec(v_data_1193_);
return v___x_1242_;
}
case 1:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1243_ = lean_unsigned_to_nat(2u);
v___x_1244_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_1245_ = lean_int_emod(v_data_1193_, v___x_1244_);
lean_dec(v_data_1193_);
v___x_1246_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1243_, v___x_1245_);
lean_dec(v___x_1245_);
return v___x_1246_;
}
case 2:
{
lean_object* v___x_1247_; 
v___x_1247_ = l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear(v_data_1193_);
lean_dec(v_data_1193_);
return v___x_1247_;
}
default: 
{
lean_object* v_num_1248_; lean_object* v___x_1249_; 
v_num_1248_ = lean_ctor_get(v_presentation_1240_, 0);
lean_inc(v_num_1248_);
lean_dec_ref_known(v_presentation_1240_, 1);
v___x_1249_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1248_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_num_1248_);
return v___x_1249_;
}
}
}
case 2:
{
lean_object* v_presentation_1250_; lean_object* v___x_1251_; lean_object* v___y_1253_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1250_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1250_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1262_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1263_ = lean_int_dec_le(v_data_1193_, v___x_1262_);
if (v___x_1263_ == 0)
{
v___y_1253_ = v_data_1193_;
goto v___jp_1252_;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_int_neg(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1265_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1266_ = lean_int_add(v___x_1264_, v___x_1265_);
lean_dec(v___x_1264_);
v___y_1253_ = v___x_1266_;
goto v___jp_1252_;
}
v___jp_1252_:
{
switch(lean_obj_tag(v_presentation_1250_))
{
case 0:
{
lean_object* v___x_1254_; 
v___x_1254_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1251_, v___y_1253_);
lean_dec(v___y_1253_);
return v___x_1254_;
}
case 1:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1255_ = lean_unsigned_to_nat(2u);
v___x_1256_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_1257_ = lean_int_emod(v___y_1253_, v___x_1256_);
lean_dec(v___y_1253_);
v___x_1258_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1255_, v___x_1257_);
lean_dec(v___x_1257_);
return v___x_1258_;
}
case 2:
{
lean_object* v___x_1259_; 
v___x_1259_ = l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear(v___y_1253_);
lean_dec(v___y_1253_);
return v___x_1259_;
}
default: 
{
lean_object* v_num_1260_; lean_object* v___x_1261_; 
v_num_1260_ = lean_ctor_get(v_presentation_1250_, 0);
lean_inc(v_num_1260_);
lean_dec_ref_known(v_presentation_1250_, 1);
v___x_1261_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1260_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec(v_num_1260_);
return v___x_1261_;
}
}
}
}
case 3:
{
lean_object* v_presentation_1267_; lean_object* v_snd_1268_; lean_object* v___x_1269_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1267_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1267_);
lean_dec_ref_known(v_modifier_1192_, 1);
v_snd_1268_ = lean_ctor_get(v_data_1193_, 1);
lean_inc(v_snd_1268_);
lean_dec(v_data_1193_);
v___x_1269_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1267_, v_snd_1268_);
lean_dec(v_snd_1268_);
lean_dec(v_presentation_1267_);
return v___x_1269_;
}
case 4:
{
lean_object* v_presentation_1270_; 
v_presentation_1270_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc_ref(v_presentation_1270_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1270_) == 0)
{
lean_object* v_val_1271_; lean_object* v___x_1272_; 
lean_dec_ref(v_dateformat_1191_);
v_val_1271_ = lean_ctor_get(v_presentation_1270_, 0);
lean_inc(v_val_1271_);
lean_dec_ref_known(v_presentation_1270_, 1);
v___x_1272_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1271_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_val_1271_);
return v___x_1272_;
}
else
{
lean_object* v_val_1273_; lean_object* v_symbols_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v_val_1273_ = lean_ctor_get(v_presentation_1270_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v_presentation_1270_, 1);
v_symbols_1274_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1274_);
lean_dec_ref(v_dateformat_1191_);
v___x_1275_ = lean_unbox(v_val_1273_);
lean_dec(v_val_1273_);
v___x_1276_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(v_symbols_1274_, v___x_1275_);
lean_dec_ref(v_symbols_1274_);
v___x_1277_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1278_ = lean_array_fget(v___x_1276_, v___x_1277_);
lean_dec(v___x_1277_);
lean_dec_ref(v___x_1276_);
return v___x_1278_;
}
}
case 5:
{
lean_object* v_presentation_1279_; 
v_presentation_1279_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc_ref(v_presentation_1279_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1279_) == 0)
{
lean_object* v_val_1280_; lean_object* v___x_1281_; 
lean_dec_ref(v_dateformat_1191_);
v_val_1280_ = lean_ctor_get(v_presentation_1279_, 0);
lean_inc(v_val_1280_);
lean_dec_ref_known(v_presentation_1279_, 1);
v___x_1281_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1280_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_val_1280_);
return v___x_1281_;
}
else
{
lean_object* v_val_1282_; lean_object* v_symbols_1283_; uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_val_1282_ = lean_ctor_get(v_presentation_1279_, 0);
lean_inc(v_val_1282_);
lean_dec_ref_known(v_presentation_1279_, 1);
v_symbols_1283_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1283_);
lean_dec_ref(v_dateformat_1191_);
v___x_1284_ = lean_unbox(v_val_1282_);
lean_dec(v_val_1282_);
v___x_1285_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(v_symbols_1283_, v___x_1284_);
lean_dec_ref(v_symbols_1283_);
v___x_1286_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1287_ = lean_array_fget(v___x_1285_, v___x_1286_);
lean_dec(v___x_1286_);
lean_dec_ref(v___x_1285_);
return v___x_1287_;
}
}
case 6:
{
lean_object* v_presentation_1288_; lean_object* v___x_1289_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1288_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1288_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1289_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1288_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1288_);
return v___x_1289_;
}
case 7:
{
lean_object* v_presentation_1290_; 
v_presentation_1290_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc_ref(v_presentation_1290_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1290_) == 0)
{
lean_object* v_val_1291_; lean_object* v___x_1292_; 
lean_dec_ref(v_dateformat_1191_);
v_val_1291_ = lean_ctor_get(v_presentation_1290_, 0);
lean_inc(v_val_1291_);
lean_dec_ref_known(v_presentation_1290_, 1);
v___x_1292_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1291_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_val_1291_);
return v___x_1292_;
}
else
{
lean_object* v_val_1293_; lean_object* v_symbols_1294_; uint8_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v_val_1293_ = lean_ctor_get(v_presentation_1290_, 0);
lean_inc(v_val_1293_);
lean_dec_ref_known(v_presentation_1290_, 1);
v_symbols_1294_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1294_);
lean_dec_ref(v_dateformat_1191_);
v___x_1295_ = lean_unbox(v_val_1293_);
lean_dec(v_val_1293_);
v___x_1296_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(v_symbols_1294_, v___x_1295_);
lean_dec_ref(v_symbols_1294_);
v___x_1297_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1298_ = lean_array_fget(v___x_1296_, v___x_1297_);
lean_dec(v___x_1297_);
lean_dec_ref(v___x_1296_);
return v___x_1298_;
}
}
case 8:
{
lean_object* v_presentation_1299_; 
v_presentation_1299_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc_ref(v_presentation_1299_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1299_) == 0)
{
lean_object* v_val_1300_; lean_object* v___x_1301_; 
lean_dec_ref(v_dateformat_1191_);
v_val_1300_ = lean_ctor_get(v_presentation_1299_, 0);
lean_inc(v_val_1300_);
lean_dec_ref_known(v_presentation_1299_, 1);
v___x_1301_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1300_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_val_1300_);
return v___x_1301_;
}
else
{
lean_object* v_val_1302_; lean_object* v_symbols_1303_; uint8_t v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_val_1302_ = lean_ctor_get(v_presentation_1299_, 0);
lean_inc(v_val_1302_);
lean_dec_ref_known(v_presentation_1299_, 1);
v_symbols_1303_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1303_);
lean_dec_ref(v_dateformat_1191_);
v___x_1304_ = lean_unbox(v_val_1302_);
lean_dec(v_val_1302_);
v___x_1305_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(v_symbols_1303_, v___x_1304_);
lean_dec_ref(v_symbols_1303_);
v___x_1306_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterIndex(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1307_ = lean_array_fget(v___x_1305_, v___x_1306_);
lean_dec(v___x_1306_);
lean_dec_ref(v___x_1305_);
return v___x_1307_;
}
}
case 9:
{
lean_object* v_presentation_1308_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1308_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1308_);
lean_dec_ref_known(v_modifier_1192_, 1);
switch(lean_obj_tag(v_presentation_1308_))
{
case 0:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_unsigned_to_nat(0u);
v___x_1310_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1309_, v_data_1193_);
lean_dec(v_data_1193_);
return v___x_1310_;
}
case 1:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1311_ = lean_unsigned_to_nat(2u);
v___x_1312_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_1313_ = lean_int_emod(v_data_1193_, v___x_1312_);
lean_dec(v_data_1193_);
v___x_1314_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1311_, v___x_1313_);
lean_dec(v___x_1313_);
return v___x_1314_;
}
case 2:
{
lean_object* v___x_1315_; 
v___x_1315_ = l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear(v_data_1193_);
lean_dec(v_data_1193_);
return v___x_1315_;
}
default: 
{
lean_object* v_num_1316_; lean_object* v___x_1317_; 
v_num_1316_ = lean_ctor_get(v_presentation_1308_, 0);
lean_inc(v_num_1316_);
lean_dec_ref_known(v_presentation_1308_, 1);
v___x_1317_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1316_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_num_1316_);
return v___x_1317_;
}
}
}
case 10:
{
lean_object* v_presentation_1318_; lean_object* v___x_1319_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1318_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1318_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1319_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1318_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1318_);
return v___x_1319_;
}
case 11:
{
lean_object* v_presentation_1320_; lean_object* v___x_1321_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1320_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1320_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1321_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1320_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1320_);
return v___x_1321_;
}
case 12:
{
uint8_t v_presentation_1322_; lean_object* v_symbols_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v_presentation_1322_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v_symbols_1323_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1323_);
lean_dec_ref(v_dateformat_1191_);
v___x_1324_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_1323_, v_presentation_1322_);
lean_dec_ref(v_symbols_1323_);
v___x_1325_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1326_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex(v___x_1325_);
v___x_1327_ = lean_array_fget(v___x_1324_, v___x_1326_);
lean_dec(v___x_1326_);
lean_dec_ref(v___x_1324_);
return v___x_1327_;
}
case 13:
{
lean_object* v_presentation_1328_; 
v_presentation_1328_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc_ref(v_presentation_1328_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1328_) == 0)
{
lean_object* v_val_1329_; uint8_t v_firstDayOfWeek_1330_; lean_object* v_firstOrd_1331_; uint8_t v___x_1332_; lean_object* v_dayOrd_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v_val_1329_ = lean_ctor_get(v_presentation_1328_, 0);
lean_inc(v_val_1329_);
lean_dec_ref_known(v_presentation_1328_, 1);
v_firstDayOfWeek_1330_ = lean_ctor_get_uint8(v_dateformat_1191_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_1191_);
v_firstOrd_1331_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_1330_);
v___x_1332_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v_dayOrd_1333_ = l_Std_Time_Weekday_toOrdinal(v___x_1332_);
v___x_1334_ = lean_int_sub(v_dayOrd_1333_, v_firstOrd_1331_);
lean_dec(v_firstOrd_1331_);
lean_dec(v_dayOrd_1333_);
v___x_1335_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3);
v___x_1336_ = lean_int_add(v___x_1334_, v___x_1335_);
lean_dec(v___x_1334_);
v___x_1337_ = lean_int_emod(v___x_1336_, v___x_1335_);
lean_dec(v___x_1336_);
v___x_1338_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1339_ = lean_int_add(v___x_1337_, v___x_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1329_, v___x_1339_);
lean_dec(v___x_1339_);
lean_dec(v_val_1329_);
return v___x_1340_;
}
else
{
lean_object* v_val_1341_; lean_object* v_symbols_1342_; uint8_t v___x_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v_val_1341_ = lean_ctor_get(v_presentation_1328_, 0);
lean_inc(v_val_1341_);
lean_dec_ref_known(v_presentation_1328_, 1);
v_symbols_1342_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1342_);
lean_dec_ref(v_dateformat_1191_);
v___x_1343_ = lean_unbox(v_val_1341_);
lean_dec(v_val_1341_);
v___x_1344_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_1342_, v___x_1343_);
lean_dec_ref(v_symbols_1342_);
v___x_1345_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1346_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex(v___x_1345_);
v___x_1347_ = lean_array_fget(v___x_1344_, v___x_1346_);
lean_dec(v___x_1346_);
lean_dec_ref(v___x_1344_);
return v___x_1347_;
}
}
case 14:
{
lean_object* v_presentation_1348_; 
v_presentation_1348_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc_ref(v_presentation_1348_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1348_) == 0)
{
lean_object* v_val_1349_; uint8_t v_firstDayOfWeek_1350_; lean_object* v_firstOrd_1351_; uint8_t v___x_1352_; lean_object* v_dayOrd_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v_val_1349_ = lean_ctor_get(v_presentation_1348_, 0);
lean_inc(v_val_1349_);
lean_dec_ref_known(v_presentation_1348_, 1);
v_firstDayOfWeek_1350_ = lean_ctor_get_uint8(v_dateformat_1191_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_1191_);
v_firstOrd_1351_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_1350_);
v___x_1352_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v_dayOrd_1353_ = l_Std_Time_Weekday_toOrdinal(v___x_1352_);
v___x_1354_ = lean_int_sub(v_dayOrd_1353_, v_firstOrd_1351_);
lean_dec(v_firstOrd_1351_);
lean_dec(v_dayOrd_1353_);
v___x_1355_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3);
v___x_1356_ = lean_int_add(v___x_1354_, v___x_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_int_emod(v___x_1356_, v___x_1355_);
lean_dec(v___x_1356_);
v___x_1358_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1359_ = lean_int_add(v___x_1357_, v___x_1358_);
lean_dec(v___x_1357_);
v___x_1360_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1349_, v___x_1359_);
lean_dec(v___x_1359_);
lean_dec(v_val_1349_);
return v___x_1360_;
}
else
{
lean_object* v_val_1361_; lean_object* v_symbols_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; uint8_t v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v_val_1361_ = lean_ctor_get(v_presentation_1348_, 0);
lean_inc(v_val_1361_);
lean_dec_ref_known(v_presentation_1348_, 1);
v_symbols_1362_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1362_);
lean_dec_ref(v_dateformat_1191_);
v___x_1363_ = lean_unbox(v_val_1361_);
lean_dec(v_val_1361_);
v___x_1364_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_1362_, v___x_1363_);
lean_dec_ref(v_symbols_1362_);
v___x_1365_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1366_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayIndex(v___x_1365_);
v___x_1367_ = lean_array_fget(v___x_1364_, v___x_1366_);
lean_dec(v___x_1366_);
lean_dec_ref(v___x_1364_);
return v___x_1367_;
}
}
case 15:
{
lean_object* v_presentation_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1368_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1368_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1369_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1368_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1368_);
return v___x_1369_;
}
case 16:
{
uint8_t v_presentation_1370_; lean_object* v_symbols_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v_presentation_1370_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v_symbols_1371_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1371_);
lean_dec_ref(v_dateformat_1191_);
v___x_1372_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerNames(v_symbols_1371_, v_presentation_1370_);
v___x_1373_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1374_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerIndex(v___x_1373_);
v___x_1375_ = lean_array_fget(v___x_1372_, v___x_1374_);
lean_dec(v___x_1374_);
lean_dec_ref(v___x_1372_);
return v___x_1375_;
}
case 17:
{
uint8_t v_presentation_1376_; lean_object* v_symbols_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_presentation_1376_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v_symbols_1377_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1377_);
lean_dec_ref(v_dateformat_1191_);
v___x_1378_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames(v_symbols_1377_, v_presentation_1376_);
v___x_1379_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1380_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodIndex(v___x_1379_);
v___x_1381_ = lean_array_fget(v___x_1378_, v___x_1380_);
lean_dec(v___x_1380_);
lean_dec_ref(v___x_1378_);
return v___x_1381_;
}
case 18:
{
uint8_t v_presentation_1382_; lean_object* v_symbols_1383_; lean_object* v___x_1384_; uint8_t v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v_presentation_1382_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v_symbols_1383_ = lean_ctor_get(v_dateformat_1191_, 1);
lean_inc_ref(v_symbols_1383_);
lean_dec_ref(v_dateformat_1191_);
v___x_1384_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames(v_symbols_1383_, v_presentation_1382_);
lean_dec_ref(v_symbols_1383_);
v___x_1385_ = lean_unbox(v_data_1193_);
lean_dec(v_data_1193_);
v___x_1386_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(v___x_1385_);
v___x_1387_ = lean_array_fget(v___x_1384_, v___x_1386_);
lean_dec(v___x_1386_);
lean_dec_ref(v___x_1384_);
return v___x_1387_;
}
case 19:
{
lean_object* v_presentation_1388_; lean_object* v___x_1389_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1388_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1388_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1389_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1388_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1388_);
return v___x_1389_;
}
case 20:
{
lean_object* v_presentation_1390_; lean_object* v___x_1391_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1390_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1390_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1391_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1390_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1390_);
return v___x_1391_;
}
case 21:
{
lean_object* v_presentation_1392_; lean_object* v___x_1393_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1392_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1392_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1393_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1392_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1392_);
return v___x_1393_;
}
case 22:
{
lean_object* v_presentation_1394_; lean_object* v___x_1395_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1394_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1394_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1395_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1394_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1394_);
return v___x_1395_;
}
case 23:
{
lean_object* v_presentation_1396_; lean_object* v___x_1397_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1396_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1396_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1397_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1396_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1396_);
return v___x_1397_;
}
case 24:
{
lean_object* v_presentation_1398_; lean_object* v___x_1399_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1398_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1398_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1399_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1398_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1398_);
return v___x_1399_;
}
case 25:
{
lean_object* v_presentation_1400_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1400_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1400_);
lean_dec_ref_known(v_modifier_1192_, 1);
if (lean_obj_tag(v_presentation_1400_) == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = lean_unsigned_to_nat(9u);
v___x_1402_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1401_, v_data_1193_);
lean_dec(v_data_1193_);
return v___x_1402_;
}
else
{
lean_object* v_digits_1403_; lean_object* v___x_1404_; uint32_t v___x_1405_; lean_object* v___x_1406_; lean_object* v_s_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v_digits_1403_ = lean_ctor_get(v_presentation_1400_, 0);
lean_inc(v_digits_1403_);
lean_dec_ref_known(v_presentation_1400_, 1);
v___x_1404_ = lean_unsigned_to_nat(9u);
v___x_1405_ = 48;
v___x_1406_ = l_Int_repr(v_data_1193_);
lean_dec(v_data_1193_);
v_s_1407_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1404_, v___x_1405_, v___x_1406_);
lean_dec_ref(v___x_1406_);
v___x_1408_ = lean_unsigned_to_nat(0u);
v___x_1409_ = lean_string_utf8_byte_size(v_s_1407_);
lean_inc_ref(v_s_1407_);
v___x_1410_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1410_, 0, v_s_1407_);
lean_ctor_set(v___x_1410_, 1, v___x_1408_);
lean_ctor_set(v___x_1410_, 2, v___x_1409_);
v___x_1411_ = l_String_Slice_Pos_nextn(v___x_1410_, v___x_1408_, v_digits_1403_);
lean_dec_ref_known(v___x_1410_, 3);
v___x_1412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1412_, 0, v_s_1407_);
lean_ctor_set(v___x_1412_, 1, v___x_1408_);
lean_ctor_set(v___x_1412_, 2, v___x_1411_);
v___x_1413_ = l_String_Slice_toString(v___x_1412_);
lean_dec_ref_known(v___x_1412_, 3);
return v___x_1413_;
}
}
case 26:
{
lean_object* v_presentation_1414_; lean_object* v___x_1415_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1414_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1414_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1415_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1414_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1414_);
return v___x_1415_;
}
case 27:
{
lean_object* v_presentation_1416_; lean_object* v___x_1417_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1416_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1416_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1417_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1416_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1416_);
return v___x_1417_;
}
case 28:
{
lean_object* v_presentation_1418_; lean_object* v___x_1419_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1418_ = lean_ctor_get(v_modifier_1192_, 0);
lean_inc(v_presentation_1418_);
lean_dec_ref_known(v_modifier_1192_, 1);
v___x_1419_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1418_, v_data_1193_);
lean_dec(v_data_1193_);
lean_dec(v_presentation_1418_);
return v___x_1419_;
}
case 29:
{
uint8_t v_presentation_1420_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1420_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
if (v_presentation_1420_ == 0)
{
lean_object* v___x_1421_; 
lean_dec(v_data_1193_);
v___x_1421_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
return v___x_1421_;
}
else
{
return v_data_1193_;
}
}
case 32:
{
uint8_t v_presentation_1422_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1422_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
if (v_presentation_1422_ == 0)
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1423_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1424_ = lean_int_dec_eq(v_data_1193_, v___x_1423_);
if (v___x_1424_ == 0)
{
uint8_t v___x_1425_; 
v___x_1425_ = lean_int_dec_le(v___x_1423_, v_data_1193_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1427_ = lean_int_neg(v_data_1193_);
lean_dec(v_data_1193_);
v_fst_1195_ = v___x_1426_;
v_snd_1196_ = v___x_1427_;
goto v___jp_1194_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_padFourDigitYear___closed__1));
v_fst_1195_ = v___x_1428_;
v_snd_1196_ = v_data_1193_;
goto v___jp_1194_;
}
}
else
{
lean_object* v___x_1429_; 
lean_dec(v_data_1193_);
v___x_1429_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
return v___x_1429_;
}
}
else
{
lean_object* v___x_1430_; 
v___x_1430_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset(v_data_1193_);
return v___x_1430_;
}
}
case 33:
{
uint8_t v_presentation_1431_; lean_object* v___x_1432_; uint8_t v___x_1433_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1431_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v___x_1432_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1433_ = lean_int_dec_eq(v_data_1193_, v___x_1432_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; 
v___x_1434_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX(v_data_1193_, v_presentation_1431_);
return v___x_1434_;
}
else
{
lean_object* v___x_1435_; 
lean_dec(v_data_1193_);
v___x_1435_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5));
return v___x_1435_;
}
}
case 34:
{
uint8_t v_presentation_1436_; lean_object* v___x_1437_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1436_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
v___x_1437_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatOffsetX(v_data_1193_, v_presentation_1436_);
return v___x_1437_;
}
case 35:
{
uint8_t v_presentation_1438_; 
lean_dec_ref(v_dateformat_1191_);
v_presentation_1438_ = lean_ctor_get_uint8(v_modifier_1192_, 0);
lean_dec_ref_known(v_modifier_1192_, 0);
switch(v_presentation_1438_)
{
case 0:
{
uint8_t v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = 0;
v___x_1440_ = l_Std_Time_TimeZone_Offset_toIsoString(v_data_1193_, v___x_1439_);
return v___x_1440_;
}
case 1:
{
lean_object* v___x_1441_; 
v___x_1441_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset(v_data_1193_);
return v___x_1441_;
}
default: 
{
lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1443_ = lean_int_dec_eq(v_data_1193_, v___x_1442_);
if (v___x_1443_ == 0)
{
uint8_t v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = 1;
v___x_1445_ = l_Std_Time_TimeZone_Offset_toIsoString(v_data_1193_, v___x_1444_);
return v___x_1445_;
}
else
{
lean_object* v___x_1446_; 
lean_dec(v_data_1193_);
v___x_1446_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5));
return v___x_1446_;
}
}
}
}
default: 
{
lean_dec_ref(v_modifier_1192_);
lean_dec_ref(v_dateformat_1191_);
return v_data_1193_;
}
}
v___jp_1194_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v_t_1199_; lean_object* v_hour_1200_; lean_object* v_minute_1201_; lean_object* v_second_1202_; lean_object* v___x_1203_; uint32_t v___x_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1197_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1198_ = lean_int_mul(v_snd_1196_, v___x_1197_);
lean_dec(v_snd_1196_);
v_t_1199_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_1198_);
lean_dec(v___x_1198_);
v_hour_1200_ = lean_ctor_get(v_t_1199_, 0);
lean_inc(v_hour_1200_);
v_minute_1201_ = lean_ctor_get(v_t_1199_, 1);
lean_inc(v_minute_1201_);
v_second_1202_ = lean_ctor_get(v_t_1199_, 2);
lean_inc(v_second_1202_);
lean_dec_ref(v_t_1199_);
v___x_1203_ = lean_unsigned_to_nat(2u);
v___x_1204_ = 48;
v___x_1205_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1206_ = lean_int_dec_eq(v_second_1202_, v___x_1205_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1207_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
v___x_1208_ = lean_string_append(v___x_1207_, v_fst_1195_);
v___x_1209_ = l_Int_repr(v_hour_1200_);
lean_dec(v_hour_1200_);
v___x_1210_ = lean_string_append(v___x_1208_, v___x_1209_);
lean_dec_ref(v___x_1209_);
v___x_1211_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1));
v___x_1212_ = lean_string_append(v___x_1210_, v___x_1211_);
v___x_1213_ = l_Int_repr(v_minute_1201_);
lean_dec(v_minute_1201_);
v___x_1214_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1203_, v___x_1204_, v___x_1213_);
lean_dec_ref(v___x_1213_);
v___x_1215_ = lean_string_append(v___x_1212_, v___x_1214_);
lean_dec_ref(v___x_1214_);
v___x_1216_ = lean_string_append(v___x_1215_, v___x_1211_);
v___x_1217_ = l_Int_repr(v_second_1202_);
lean_dec(v_second_1202_);
v___x_1218_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1203_, v___x_1204_, v___x_1217_);
lean_dec_ref(v___x_1217_);
v___x_1219_ = lean_string_append(v___x_1216_, v___x_1218_);
lean_dec_ref(v___x_1218_);
return v___x_1219_;
}
else
{
uint8_t v___x_1220_; 
lean_dec(v_second_1202_);
v___x_1220_ = lean_int_dec_eq(v_minute_1201_, v___x_1205_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1221_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
v___x_1222_ = lean_string_append(v___x_1221_, v_fst_1195_);
v___x_1223_ = l_Int_repr(v_hour_1200_);
lean_dec(v_hour_1200_);
v___x_1224_ = lean_string_append(v___x_1222_, v___x_1223_);
lean_dec_ref(v___x_1223_);
v___x_1225_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1));
v___x_1226_ = lean_string_append(v___x_1224_, v___x_1225_);
v___x_1227_ = l_Int_repr(v_minute_1201_);
lean_dec(v_minute_1201_);
v___x_1228_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1203_, v___x_1204_, v___x_1227_);
lean_dec_ref(v___x_1227_);
v___x_1229_ = lean_string_append(v___x_1226_, v___x_1228_);
lean_dec_ref(v___x_1228_);
return v___x_1229_;
}
else
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_dec(v_minute_1201_);
v___x_1230_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
v___x_1231_ = lean_string_append(v___x_1230_, v_fst_1195_);
v___x_1232_ = l_Int_repr(v_hour_1200_);
lean_dec(v_hour_1200_);
v___x_1233_ = lean_string_append(v___x_1231_, v___x_1232_);
lean_dec_ref(v___x_1232_);
return v___x_1233_;
}
}
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = lean_unsigned_to_nat(4u);
v___x_1448_ = lean_nat_to_int(v___x_1447_);
return v___x_1448_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1(void){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_unsigned_to_nat(400u);
v___x_1450_ = lean_nat_to_int(v___x_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f(lean_object* v_dateformat_1453_, lean_object* v_date_x3f_1454_, lean_object* v_time_x3f_1455_, lean_object* v_zone_x3f_1456_, lean_object* v_modifier_1457_){
_start:
{
switch(lean_obj_tag(v_modifier_1457_))
{
case 0:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_box(0);
return v___x_1458_;
}
else
{
lean_object* v_val_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1469_; 
v_val_1459_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1461_ = v_date_x3f_1454_;
v_isShared_1462_ = v_isSharedCheck_1469_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_val_1459_);
lean_dec(v_date_x3f_1454_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1469_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v_year_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
v_year_1463_ = lean_ctor_get(v_val_1459_, 0);
lean_inc(v_year_1463_);
lean_dec(v_val_1459_);
v___x_1464_ = l_Std_Time_Year_Offset_era(v_year_1463_);
lean_dec(v_year_1463_);
v___x_1465_ = lean_box(v___x_1464_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 0, v___x_1465_);
v___x_1467_ = v___x_1461_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
case 1:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_box(0);
return v___x_1470_;
}
else
{
lean_object* v_val_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1479_; 
v_val_1471_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1473_ = v_date_x3f_1454_;
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_val_1471_);
lean_dec(v_date_x3f_1454_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v_year_1475_; lean_object* v___x_1477_; 
v_year_1475_ = lean_ctor_get(v_val_1471_, 0);
lean_inc(v_year_1475_);
lean_dec(v_val_1471_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v_year_1475_);
v___x_1477_ = v___x_1473_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_year_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
case 2:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_box(0);
return v___x_1480_;
}
else
{
lean_object* v_val_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1489_; 
v_val_1481_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1483_ = v_date_x3f_1454_;
v_isShared_1484_ = v_isSharedCheck_1489_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_val_1481_);
lean_dec(v_date_x3f_1454_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1489_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v_year_1485_; lean_object* v___x_1487_; 
v_year_1485_ = lean_ctor_get(v_val_1481_, 0);
lean_inc(v_year_1485_);
lean_dec(v_val_1481_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v_year_1485_);
v___x_1487_ = v___x_1483_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_year_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
case 3:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_box(0);
return v___x_1490_;
}
else
{
lean_object* v_val_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1514_; 
v_val_1491_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1493_ = v_date_x3f_1454_;
v_isShared_1494_ = v_isSharedCheck_1514_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_val_1491_);
lean_dec(v_date_x3f_1454_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1514_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
uint8_t v___y_1496_; lean_object* v_year_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v_year_1503_ = lean_ctor_get(v_val_1491_, 0);
v___x_1504_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0);
v___x_1505_ = lean_int_mod(v_year_1503_, v___x_1504_);
v___x_1506_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1507_ = lean_int_dec_eq(v___x_1505_, v___x_1506_);
lean_dec(v___x_1505_);
if (v___x_1507_ == 0)
{
v___y_1496_ = v___x_1507_;
goto v___jp_1495_;
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1508_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_1509_ = lean_int_mod(v_year_1503_, v___x_1508_);
v___x_1510_ = lean_int_dec_eq(v___x_1509_, v___x_1506_);
lean_dec(v___x_1509_);
if (v___x_1510_ == 0)
{
v___y_1496_ = v___x_1507_;
goto v___jp_1495_;
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; 
v___x_1511_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1);
v___x_1512_ = lean_int_mod(v_year_1503_, v___x_1511_);
v___x_1513_ = lean_int_dec_eq(v___x_1512_, v___x_1506_);
lean_dec(v___x_1512_);
v___y_1496_ = v___x_1513_;
goto v___jp_1495_;
}
}
v___jp_1495_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1497_ = l_Std_Time_PlainDate_dayOfYear(v_val_1491_);
lean_dec(v_val_1491_);
v___x_1498_ = lean_box(v___y_1496_);
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
lean_ctor_set(v___x_1499_, 1, v___x_1497_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v___x_1499_);
v___x_1501_ = v___x_1493_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
case 4:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1515_; 
v___x_1515_ = lean_box(0);
return v___x_1515_;
}
else
{
lean_object* v_val_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1524_; 
v_val_1516_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1518_ = v_date_x3f_1454_;
v_isShared_1519_ = v_isSharedCheck_1524_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_val_1516_);
lean_dec(v_date_x3f_1454_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1524_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v_month_1520_; lean_object* v___x_1522_; 
v_month_1520_ = lean_ctor_get(v_val_1516_, 1);
lean_inc(v_month_1520_);
lean_dec(v_val_1516_);
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 0, v_month_1520_);
v___x_1522_ = v___x_1518_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_month_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
case 5:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_box(0);
return v___x_1525_;
}
else
{
lean_object* v_val_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1534_; 
v_val_1526_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1528_ = v_date_x3f_1454_;
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_val_1526_);
lean_dec(v_date_x3f_1454_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v_month_1530_; lean_object* v___x_1532_; 
v_month_1530_ = lean_ctor_get(v_val_1526_, 1);
lean_inc(v_month_1530_);
lean_dec(v_val_1526_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v_month_1530_);
v___x_1532_ = v___x_1528_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_month_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
case 6:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_box(0);
return v___x_1535_;
}
else
{
lean_object* v_val_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1544_; 
v_val_1536_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1538_ = v_date_x3f_1454_;
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_val_1536_);
lean_dec(v_date_x3f_1454_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v_day_1540_; lean_object* v___x_1542_; 
v_day_1540_ = lean_ctor_get(v_val_1536_, 2);
lean_inc(v_day_1540_);
lean_dec(v_val_1536_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 0, v_day_1540_);
v___x_1542_ = v___x_1538_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_day_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
case 7:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1545_; 
v___x_1545_ = lean_box(0);
return v___x_1545_;
}
else
{
lean_object* v_val_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1554_; 
v_val_1546_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1548_ = v_date_x3f_1454_;
v_isShared_1549_ = v_isSharedCheck_1554_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_val_1546_);
lean_dec(v_date_x3f_1454_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1554_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1550_; lean_object* v___x_1552_; 
v___x_1550_ = l_Std_Time_PlainDate_quarter(v_val_1546_);
lean_dec(v_val_1546_);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1550_);
v___x_1552_ = v___x_1548_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
case 8:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_box(0);
return v___x_1555_;
}
else
{
lean_object* v_val_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1564_; 
v_val_1556_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1558_ = v_date_x3f_1454_;
v_isShared_1559_ = v_isSharedCheck_1564_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_val_1556_);
lean_dec(v_date_x3f_1454_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1564_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; lean_object* v___x_1562_; 
v___x_1560_ = l_Std_Time_PlainDate_quarter(v_val_1556_);
lean_dec(v_val_1556_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 0, v___x_1560_);
v___x_1562_ = v___x_1558_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
case 9:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1565_; 
v___x_1565_ = lean_box(0);
return v___x_1565_;
}
else
{
uint8_t v_firstDayOfWeek_1566_; lean_object* v_minimalDaysInFirstWeek_1567_; lean_object* v_val_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1576_; 
v_firstDayOfWeek_1566_ = lean_ctor_get_uint8(v_dateformat_1453_, sizeof(void*)*2);
v_minimalDaysInFirstWeek_1567_ = lean_ctor_get(v_dateformat_1453_, 0);
v_val_1568_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1570_ = v_date_x3f_1454_;
v_isShared_1571_ = v_isSharedCheck_1576_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_val_1568_);
lean_dec(v_date_x3f_1454_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1576_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1572_; lean_object* v___x_1574_; 
v___x_1572_ = l_Std_Time_PlainDate_weekYear(v_val_1568_, v_firstDayOfWeek_1566_, v_minimalDaysInFirstWeek_1567_);
if (v_isShared_1571_ == 0)
{
lean_ctor_set(v___x_1570_, 0, v___x_1572_);
v___x_1574_ = v___x_1570_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v___x_1572_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
case 10:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_box(0);
return v___x_1577_;
}
else
{
uint8_t v_firstDayOfWeek_1578_; lean_object* v_minimalDaysInFirstWeek_1579_; lean_object* v_val_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1588_; 
v_firstDayOfWeek_1578_ = lean_ctor_get_uint8(v_dateformat_1453_, sizeof(void*)*2);
v_minimalDaysInFirstWeek_1579_ = lean_ctor_get(v_dateformat_1453_, 0);
v_val_1580_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1582_ = v_date_x3f_1454_;
v_isShared_1583_ = v_isSharedCheck_1588_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_val_1580_);
lean_dec(v_date_x3f_1454_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1588_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1584_ = l_Std_Time_PlainDate_weekOfYear(v_val_1580_, v_firstDayOfWeek_1578_, v_minimalDaysInFirstWeek_1579_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v___x_1584_);
v___x_1586_ = v___x_1582_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
case 11:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1589_; 
v___x_1589_ = lean_box(0);
return v___x_1589_;
}
else
{
uint8_t v_firstDayOfWeek_1590_; lean_object* v_val_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1599_; 
v_firstDayOfWeek_1590_ = lean_ctor_get_uint8(v_dateformat_1453_, sizeof(void*)*2);
v_val_1591_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1593_ = v_date_x3f_1454_;
v_isShared_1594_ = v_isSharedCheck_1599_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_val_1591_);
lean_dec(v_date_x3f_1454_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1599_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1595_; lean_object* v___x_1597_; 
v___x_1595_ = l_Std_Time_PlainDate_weekOfMonth(v_val_1591_, v_firstDayOfWeek_1590_);
if (v_isShared_1594_ == 0)
{
lean_ctor_set(v___x_1593_, 0, v___x_1595_);
v___x_1597_ = v___x_1593_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1595_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
case 12:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_box(0);
return v___x_1600_;
}
else
{
lean_object* v_val_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1610_; 
v_val_1601_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1603_ = v_date_x3f_1454_;
v_isShared_1604_ = v_isSharedCheck_1610_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_val_1601_);
lean_dec(v_date_x3f_1454_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1610_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
uint8_t v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1608_; 
v___x_1605_ = l_Std_Time_PlainDate_weekday(v_val_1601_);
v___x_1606_ = lean_box(v___x_1605_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v___x_1606_);
v___x_1608_ = v___x_1603_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v___x_1606_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
case 13:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_box(0);
return v___x_1611_;
}
else
{
lean_object* v_val_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1621_; 
v_val_1612_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1614_ = v_date_x3f_1454_;
v_isShared_1615_ = v_isSharedCheck_1621_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_val_1612_);
lean_dec(v_date_x3f_1454_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1621_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
uint8_t v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1619_; 
v___x_1616_ = l_Std_Time_PlainDate_weekday(v_val_1612_);
v___x_1617_ = lean_box(v___x_1616_);
if (v_isShared_1615_ == 0)
{
lean_ctor_set(v___x_1614_, 0, v___x_1617_);
v___x_1619_ = v___x_1614_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1617_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
case 14:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_box(0);
return v___x_1622_;
}
else
{
lean_object* v_val_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1632_; 
v_val_1623_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1625_ = v_date_x3f_1454_;
v_isShared_1626_ = v_isSharedCheck_1632_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_val_1623_);
lean_dec(v_date_x3f_1454_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1632_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
uint8_t v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1630_; 
v___x_1627_ = l_Std_Time_PlainDate_weekday(v_val_1623_);
v___x_1628_ = lean_box(v___x_1627_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1628_);
v___x_1630_ = v___x_1625_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
case 15:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_time_x3f_1455_);
if (lean_obj_tag(v_date_x3f_1454_) == 0)
{
lean_object* v___x_1633_; 
v___x_1633_ = lean_box(0);
return v___x_1633_;
}
else
{
lean_object* v_val_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1642_; 
v_val_1634_ = lean_ctor_get(v_date_x3f_1454_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_date_x3f_1454_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1636_ = v_date_x3f_1454_;
v_isShared_1637_ = v_isSharedCheck_1642_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_val_1634_);
lean_dec(v_date_x3f_1454_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1642_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1638_; lean_object* v___x_1640_; 
v___x_1638_ = l_Std_Time_PlainDate_alignedWeekOfMonth(v_val_1634_);
lean_dec(v_val_1634_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1638_);
v___x_1640_ = v___x_1636_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
case 16:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1643_; 
v___x_1643_ = lean_box(0);
return v___x_1643_;
}
else
{
lean_object* v_val_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1654_; 
v_val_1644_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1646_ = v_time_x3f_1455_;
v_isShared_1647_ = v_isSharedCheck_1654_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_val_1644_);
lean_dec(v_time_x3f_1455_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1654_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v_hour_1648_; uint8_t v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
v_hour_1648_ = lean_ctor_get(v_val_1644_, 0);
lean_inc(v_hour_1648_);
lean_dec(v_val_1644_);
v___x_1649_ = l_Std_Time_HourMarker_ofOrdinal(v_hour_1648_);
lean_dec(v_hour_1648_);
v___x_1650_ = lean_box(v___x_1649_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 0, v___x_1650_);
v___x_1652_ = v___x_1646_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
case 17:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_box(0);
return v___x_1655_;
}
else
{
lean_object* v_val_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1668_; 
v_val_1656_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1658_ = v_time_x3f_1455_;
v_isShared_1659_ = v_isSharedCheck_1668_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_val_1656_);
lean_dec(v_time_x3f_1455_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1668_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v_hour_1660_; lean_object* v_minute_1661_; lean_object* v_second_1662_; uint8_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1666_; 
v_hour_1660_ = lean_ctor_get(v_val_1656_, 0);
lean_inc(v_hour_1660_);
v_minute_1661_ = lean_ctor_get(v_val_1656_, 1);
lean_inc(v_minute_1661_);
v_second_1662_ = lean_ctor_get(v_val_1656_, 2);
lean_inc(v_second_1662_);
lean_dec(v_val_1656_);
v___x_1663_ = l_Std_Time_classifyDayPeriod(v_hour_1660_, v_minute_1661_, v_second_1662_);
lean_dec(v_second_1662_);
lean_dec(v_minute_1661_);
lean_dec(v_hour_1660_);
v___x_1664_ = lean_box(v___x_1663_);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v___x_1664_);
v___x_1666_ = v___x_1658_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
case 18:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_box(0);
return v___x_1669_;
}
else
{
lean_object* v_val_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1682_; 
v_val_1670_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1672_ = v_time_x3f_1455_;
v_isShared_1673_ = v_isSharedCheck_1682_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_val_1670_);
lean_dec(v_time_x3f_1455_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1682_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_hour_1674_; lean_object* v_minute_1675_; lean_object* v_second_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1680_; 
v_hour_1674_ = lean_ctor_get(v_val_1670_, 0);
lean_inc(v_hour_1674_);
v_minute_1675_ = lean_ctor_get(v_val_1670_, 1);
lean_inc(v_minute_1675_);
v_second_1676_ = lean_ctor_get(v_val_1670_, 2);
lean_inc(v_second_1676_);
lean_dec(v_val_1670_);
v___x_1677_ = l_Std_Time_classifyExtendedDayPeriod(v_hour_1674_, v_minute_1675_, v_second_1676_);
lean_dec(v_second_1676_);
lean_dec(v_minute_1675_);
lean_dec(v_hour_1674_);
v___x_1678_ = lean_box(v___x_1677_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1678_);
v___x_1680_ = v___x_1672_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
case 19:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_box(0);
return v___x_1683_;
}
else
{
lean_object* v_val_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1693_; 
v_val_1684_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1686_ = v_time_x3f_1455_;
v_isShared_1687_ = v_isSharedCheck_1693_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_val_1684_);
lean_dec(v_time_x3f_1455_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1693_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_hour_1688_; lean_object* v___x_1689_; lean_object* v___x_1691_; 
v_hour_1688_ = lean_ctor_get(v_val_1684_, 0);
lean_inc(v_hour_1688_);
lean_dec(v_val_1684_);
v___x_1689_ = l_Std_Time_Hour_Ordinal_toRelative(v_hour_1688_);
lean_dec(v_hour_1688_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 0, v___x_1689_);
v___x_1691_ = v___x_1686_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1689_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
case 20:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_box(0);
return v___x_1694_;
}
else
{
lean_object* v_val_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1705_; 
v_val_1695_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1697_ = v_time_x3f_1455_;
v_isShared_1698_ = v_isSharedCheck_1705_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_val_1695_);
lean_dec(v_time_x3f_1455_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1705_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v_hour_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1703_; 
v_hour_1699_ = lean_ctor_get(v_val_1695_, 0);
lean_inc(v_hour_1699_);
lean_dec(v_val_1695_);
v___x_1700_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1701_ = lean_int_emod(v_hour_1699_, v___x_1700_);
lean_dec(v_hour_1699_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1701_);
v___x_1703_ = v___x_1697_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v___x_1701_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
case 21:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_box(0);
return v___x_1706_;
}
else
{
lean_object* v_val_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1716_; 
v_val_1707_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1709_ = v_time_x3f_1455_;
v_isShared_1710_ = v_isSharedCheck_1716_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_val_1707_);
lean_dec(v_time_x3f_1455_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1716_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v_hour_1711_; lean_object* v___x_1712_; lean_object* v___x_1714_; 
v_hour_1711_ = lean_ctor_get(v_val_1707_, 0);
lean_inc(v_hour_1711_);
lean_dec(v_val_1707_);
v___x_1712_ = l_Std_Time_Hour_Ordinal_shiftTo1BasedHour(v_hour_1711_);
lean_dec(v_hour_1711_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1712_);
v___x_1714_ = v___x_1709_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
case 22:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_box(0);
return v___x_1717_;
}
else
{
lean_object* v_val_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1726_; 
v_val_1718_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1720_ = v_time_x3f_1455_;
v_isShared_1721_ = v_isSharedCheck_1726_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_val_1718_);
lean_dec(v_time_x3f_1455_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1726_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v_hour_1722_; lean_object* v___x_1724_; 
v_hour_1722_ = lean_ctor_get(v_val_1718_, 0);
lean_inc(v_hour_1722_);
lean_dec(v_val_1718_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v_hour_1722_);
v___x_1724_ = v___x_1720_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_hour_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
case 23:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_box(0);
return v___x_1727_;
}
else
{
lean_object* v_val_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1736_; 
v_val_1728_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1730_ = v_time_x3f_1455_;
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_val_1728_);
lean_dec(v_time_x3f_1455_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v_minute_1732_; lean_object* v___x_1734_; 
v_minute_1732_ = lean_ctor_get(v_val_1728_, 1);
lean_inc(v_minute_1732_);
lean_dec(v_val_1728_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v_minute_1732_);
v___x_1734_ = v___x_1730_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_minute_1732_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
case 24:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_box(0);
return v___x_1737_;
}
else
{
lean_object* v_val_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1746_; 
v_val_1738_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1740_ = v_time_x3f_1455_;
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_val_1738_);
lean_dec(v_time_x3f_1455_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v_second_1742_; lean_object* v___x_1744_; 
v_second_1742_ = lean_ctor_get(v_val_1738_, 2);
lean_inc(v_second_1742_);
lean_dec(v_val_1738_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v_second_1742_);
v___x_1744_ = v___x_1740_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_second_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
case 25:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_box(0);
return v___x_1747_;
}
else
{
lean_object* v_val_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1756_; 
v_val_1748_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1750_ = v_time_x3f_1455_;
v_isShared_1751_ = v_isSharedCheck_1756_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_val_1748_);
lean_dec(v_time_x3f_1455_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1756_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v_nanosecond_1752_; lean_object* v___x_1754_; 
v_nanosecond_1752_ = lean_ctor_get(v_val_1748_, 3);
lean_inc(v_nanosecond_1752_);
lean_dec(v_val_1748_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v_nanosecond_1752_);
v___x_1754_ = v___x_1750_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_nanosecond_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
case 26:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_box(0);
return v___x_1757_;
}
else
{
lean_object* v_val_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1766_; 
v_val_1758_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1760_ = v_time_x3f_1455_;
v_isShared_1761_ = v_isSharedCheck_1766_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_val_1758_);
lean_dec(v_time_x3f_1455_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1766_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1762_ = l_Std_Time_PlainTime_toMilliseconds(v_val_1758_);
lean_dec(v_val_1758_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1762_);
v___x_1764_ = v___x_1760_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
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
case 27:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_box(0);
return v___x_1767_;
}
else
{
lean_object* v_val_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1776_; 
v_val_1768_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1770_ = v_time_x3f_1455_;
v_isShared_1771_ = v_isSharedCheck_1776_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_val_1768_);
lean_dec(v_time_x3f_1455_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1776_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v_nanosecond_1772_; lean_object* v___x_1774_; 
v_nanosecond_1772_ = lean_ctor_get(v_val_1768_, 3);
lean_inc(v_nanosecond_1772_);
lean_dec(v_val_1768_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v_nanosecond_1772_);
v___x_1774_ = v___x_1770_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_nanosecond_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
case 28:
{
lean_dec(v_zone_x3f_1456_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_time_x3f_1455_) == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_box(0);
return v___x_1777_;
}
else
{
lean_object* v_val_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1786_; 
v_val_1778_ = lean_ctor_get(v_time_x3f_1455_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_time_x3f_1455_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1780_ = v_time_x3f_1455_;
v_isShared_1781_ = v_isSharedCheck_1786_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_val_1778_);
lean_dec(v_time_x3f_1455_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1786_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1784_; 
v___x_1782_ = l_Std_Time_PlainTime_toNanoseconds(v_val_1778_);
lean_dec(v_val_1778_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v___x_1782_);
v___x_1784_ = v___x_1780_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
case 29:
{
uint8_t v_presentation_1787_; 
lean_dec(v_time_x3f_1455_);
lean_dec(v_date_x3f_1454_);
v_presentation_1787_ = lean_ctor_get_uint8(v_modifier_1457_, 0);
if (v_presentation_1787_ == 0)
{
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_box(0);
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; 
lean_dec_ref_known(v_zone_x3f_1456_, 1);
v___x_1789_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__2));
return v___x_1789_;
}
}
else
{
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1790_; 
v___x_1790_ = lean_box(0);
return v___x_1790_;
}
else
{
lean_object* v_val_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1801_; 
v_val_1791_ = lean_ctor_get(v_zone_x3f_1456_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_zone_x3f_1456_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1793_ = v_zone_x3f_1456_;
v_isShared_1794_ = v_isSharedCheck_1801_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_val_1791_);
lean_dec(v_zone_x3f_1456_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1801_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v_offset_1795_; lean_object* v_name_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
v_offset_1795_ = lean_ctor_get(v_val_1791_, 0);
lean_inc(v_offset_1795_);
v_name_1796_ = lean_ctor_get(v_val_1791_, 1);
lean_inc_ref(v_name_1796_);
lean_dec(v_val_1791_);
v___x_1797_ = l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(v_name_1796_, v_offset_1795_);
lean_dec_ref(v_name_1796_);
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 0, v___x_1797_);
v___x_1799_ = v___x_1793_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
case 30:
{
uint8_t v_presentation_1802_; 
lean_dec(v_time_x3f_1455_);
lean_dec(v_date_x3f_1454_);
v_presentation_1802_ = lean_ctor_get_uint8(v_modifier_1457_, 0);
if (v_presentation_1802_ == 0)
{
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_box(0);
return v___x_1803_;
}
else
{
lean_object* v_val_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1814_; 
v_val_1804_ = lean_ctor_get(v_zone_x3f_1456_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_zone_x3f_1456_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1806_ = v_zone_x3f_1456_;
v_isShared_1807_ = v_isSharedCheck_1814_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_val_1804_);
lean_dec(v_zone_x3f_1456_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1814_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v_offset_1808_; lean_object* v_abbreviation_1809_; lean_object* v___x_1810_; lean_object* v___x_1812_; 
v_offset_1808_ = lean_ctor_get(v_val_1804_, 0);
lean_inc(v_offset_1808_);
v_abbreviation_1809_ = lean_ctor_get(v_val_1804_, 2);
lean_inc_ref(v_abbreviation_1809_);
lean_dec(v_val_1804_);
v___x_1810_ = l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(v_abbreviation_1809_, v_offset_1808_);
lean_dec_ref(v_abbreviation_1809_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v___x_1810_);
v___x_1812_ = v___x_1806_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
else
{
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1815_; 
v___x_1815_ = lean_box(0);
return v___x_1815_;
}
else
{
lean_object* v_val_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1826_; 
v_val_1816_ = lean_ctor_get(v_zone_x3f_1456_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_zone_x3f_1456_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1818_ = v_zone_x3f_1456_;
v_isShared_1819_ = v_isSharedCheck_1826_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_val_1816_);
lean_dec(v_zone_x3f_1456_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1826_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v_offset_1820_; lean_object* v_name_1821_; lean_object* v___x_1822_; lean_object* v___x_1824_; 
v_offset_1820_ = lean_ctor_get(v_val_1816_, 0);
lean_inc(v_offset_1820_);
v_name_1821_ = lean_ctor_get(v_val_1816_, 1);
lean_inc_ref(v_name_1821_);
lean_dec(v_val_1816_);
v___x_1822_ = l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(v_name_1821_, v_offset_1820_);
lean_dec_ref(v_name_1821_);
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1822_);
v___x_1824_ = v___x_1818_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
}
case 31:
{
uint8_t v_presentation_1827_; 
lean_dec(v_time_x3f_1455_);
lean_dec(v_date_x3f_1454_);
v_presentation_1827_ = lean_ctor_get_uint8(v_modifier_1457_, 0);
if (v_presentation_1827_ == 0)
{
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1828_; 
v___x_1828_ = lean_box(0);
return v___x_1828_;
}
else
{
lean_object* v_val_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1839_; 
v_val_1829_ = lean_ctor_get(v_zone_x3f_1456_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v_zone_x3f_1456_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1831_ = v_zone_x3f_1456_;
v_isShared_1832_ = v_isSharedCheck_1839_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_val_1829_);
lean_dec(v_zone_x3f_1456_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1839_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v_offset_1833_; lean_object* v_abbreviation_1834_; lean_object* v___x_1835_; lean_object* v___x_1837_; 
v_offset_1833_ = lean_ctor_get(v_val_1829_, 0);
lean_inc(v_offset_1833_);
v_abbreviation_1834_ = lean_ctor_get(v_val_1829_, 2);
lean_inc_ref(v_abbreviation_1834_);
lean_dec(v_val_1829_);
v___x_1835_ = l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(v_abbreviation_1834_, v_offset_1833_);
lean_dec_ref(v_abbreviation_1834_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1835_);
v___x_1837_ = v___x_1831_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
else
{
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_box(0);
return v___x_1840_;
}
else
{
lean_object* v_val_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1851_; 
v_val_1841_ = lean_ctor_get(v_zone_x3f_1456_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_zone_x3f_1456_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1843_ = v_zone_x3f_1456_;
v_isShared_1844_ = v_isSharedCheck_1851_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_val_1841_);
lean_dec(v_zone_x3f_1456_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1851_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v_offset_1845_; lean_object* v_name_1846_; lean_object* v___x_1847_; lean_object* v___x_1849_; 
v_offset_1845_ = lean_ctor_get(v_val_1841_, 0);
lean_inc(v_offset_1845_);
v_name_1846_ = lean_ctor_get(v_val_1841_, 1);
lean_inc_ref(v_name_1846_);
lean_dec(v_val_1841_);
v___x_1847_ = l___private_Std_Time_Format_Basic_0__Std_Time_zoneLabel(v_name_1846_, v_offset_1845_);
lean_dec_ref(v_name_1846_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1847_);
v___x_1849_ = v___x_1843_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
default: 
{
lean_dec(v_time_x3f_1455_);
lean_dec(v_date_x3f_1454_);
if (lean_obj_tag(v_zone_x3f_1456_) == 0)
{
lean_object* v___x_1852_; 
v___x_1852_ = lean_box(0);
return v___x_1852_;
}
else
{
lean_object* v_val_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1861_; 
v_val_1853_ = lean_ctor_get(v_zone_x3f_1456_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v_zone_x3f_1456_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1855_ = v_zone_x3f_1456_;
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_val_1853_);
lean_dec(v_zone_x3f_1456_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v_offset_1857_; lean_object* v___x_1859_; 
v_offset_1857_ = lean_ctor_get(v_val_1853_, 0);
lean_inc(v_offset_1857_);
lean_dec(v_val_1853_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v_offset_1857_);
v___x_1859_ = v___x_1855_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_offset_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___boxed(lean_object* v_dateformat_1862_, lean_object* v_date_x3f_1863_, lean_object* v_time_x3f_1864_, lean_object* v_zone_x3f_1865_, lean_object* v_modifier_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f(v_dateformat_1862_, v_date_x3f_1863_, v_time_x3f_1864_, v_zone_x3f_1865_, v_modifier_1866_);
lean_dec_ref(v_modifier_1866_);
lean_dec_ref(v_dateformat_1862_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0(lean_object* v___x_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1868_);
v___x_1871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1871_, 0, v___y_1869_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0(lean_object* v___x_1872_, lean_object* v_b_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_fst_1875_; lean_object* v_snd_1876_; lean_object* v___x_1877_; 
v_fst_1875_ = lean_ctor_get(v___x_1872_, 0);
lean_inc(v_fst_1875_);
v_snd_1876_ = lean_ctor_get(v___x_1872_, 1);
lean_inc(v_snd_1876_);
lean_dec_ref(v___x_1872_);
lean_inc_ref(v___y_1874_);
v___x_1877_ = lean_apply_1(v_b_1873_, v___y_1874_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_dec(v_snd_1876_);
lean_dec(v_fst_1875_);
lean_dec_ref(v___y_1874_);
return v___x_1877_;
}
else
{
lean_object* v_pos_1878_; lean_object* v_snd_1879_; lean_object* v_snd_1880_; uint8_t v_decide_1881_; 
v_pos_1878_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_pos_1878_);
v_snd_1879_ = lean_ctor_get(v___y_1874_, 1);
lean_inc(v_snd_1879_);
lean_dec_ref(v___y_1874_);
v_snd_1880_ = lean_ctor_get(v_pos_1878_, 1);
v_decide_1881_ = lean_nat_dec_eq(v_snd_1879_, v_snd_1880_);
lean_dec(v_snd_1879_);
if (v_decide_1881_ == 0)
{
lean_dec(v_pos_1878_);
lean_dec(v_snd_1876_);
lean_dec(v_fst_1875_);
return v___x_1877_;
}
else
{
lean_object* v___x_1882_; 
lean_dec_ref_known(v___x_1877_, 2);
v___x_1882_ = l_Std_Internal_Parsec_String_pstring(v_fst_1875_, v_pos_1878_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_pos_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
v_pos_1883_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1890_ == 0)
{
lean_object* v_unused_1891_; 
v_unused_1891_ = lean_ctor_get(v___x_1882_, 1);
lean_dec(v_unused_1891_);
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_pos_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 1, v_snd_1876_);
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_pos_1883_);
lean_ctor_set(v_reuseFailAlloc_1889_, 1, v_snd_1876_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
else
{
lean_object* v_pos_1892_; lean_object* v_err_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec(v_snd_1876_);
v_pos_1892_ = lean_ctor_get(v___x_1882_, 0);
v_err_1893_ = lean_ctor_get(v___x_1882_, 1);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1882_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_err_1893_);
lean_inc(v_pos_1892_);
lean_dec(v___x_1882_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_pos_1892_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v_err_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(lean_object* v_as_1901_, size_t v_i_1902_, size_t v_stop_1903_, lean_object* v_b_1904_, lean_object* v___y_1905_){
_start:
{
uint8_t v___x_1906_; 
v___x_1906_ = lean_usize_dec_eq(v_i_1902_, v_stop_1903_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; lean_object* v___f_1908_; size_t v___x_1909_; size_t v___x_1910_; 
v___x_1907_ = lean_array_uget_borrowed(v_as_1901_, v_i_1902_);
lean_inc(v___x_1907_);
v___f_1908_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1908_, 0, v___x_1907_);
lean_closure_set(v___f_1908_, 1, v_b_1904_);
v___x_1909_ = ((size_t)1ULL);
v___x_1910_ = lean_usize_add(v_i_1902_, v___x_1909_);
v_i_1902_ = v___x_1910_;
v_b_1904_ = v___f_1908_;
goto _start;
}
else
{
lean_object* v___x_1912_; 
v___x_1912_ = lean_apply_1(v_b_1904_, v___y_1905_);
return v___x_1912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___boxed(lean_object* v_as_1913_, lean_object* v_i_1914_, lean_object* v_stop_1915_, lean_object* v_b_1916_, lean_object* v___y_1917_){
_start:
{
size_t v_i_boxed_1918_; size_t v_stop_boxed_1919_; lean_object* v_res_1920_; 
v_i_boxed_1918_ = lean_unbox_usize(v_i_1914_);
lean_dec(v_i_1914_);
v_stop_boxed_1919_ = lean_unbox_usize(v_stop_1915_);
lean_dec(v_stop_1915_);
v_res_1920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_as_1913_, v_i_boxed_1918_, v_stop_boxed_1919_, v_b_1916_, v___y_1917_);
lean_dec_ref(v_as_1913_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(lean_object* v_pairs_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1928_ = lean_unsigned_to_nat(0u);
v___x_1929_ = lean_array_get_size(v_pairs_1926_);
v___x_1930_ = lean_nat_dec_lt(v___x_1928_, v___x_1929_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1));
v___x_1932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1932_, 0, v_a_1927_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
return v___x_1932_;
}
else
{
lean_object* v___f_1933_; size_t v___x_1934_; size_t v___x_1935_; lean_object* v___x_1936_; 
v___f_1933_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2));
v___x_1934_ = ((size_t)0ULL);
v___x_1935_ = lean_usize_of_nat(v___x_1929_);
v___x_1936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_pairs_1926_, v___x_1934_, v___x_1935_, v___f_1933_, v_a_1927_);
return v___x_1936_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___boxed(lean_object* v_pairs_1937_, lean_object* v_a_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_1937_, v_a_1938_);
lean_dec_ref(v_pairs_1937_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(lean_object* v_00_u03b1_1940_, lean_object* v_pairs_1941_, lean_object* v_a_1942_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_1941_, v_a_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___boxed(lean_object* v_00_u03b1_1944_, lean_object* v_pairs_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(v_00_u03b1_1944_, v_pairs_1945_, v_a_1946_);
lean_dec_ref(v_pairs_1945_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(lean_object* v_00_u03b1_1948_, lean_object* v_as_1949_, size_t v_i_1950_, size_t v_stop_1951_, lean_object* v_b_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_as_1949_, v_i_1950_, v_stop_1951_, v_b_1952_, v___y_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___boxed(lean_object* v_00_u03b1_1955_, lean_object* v_as_1956_, lean_object* v_i_1957_, lean_object* v_stop_1958_, lean_object* v_b_1959_, lean_object* v___y_1960_){
_start:
{
size_t v_i_boxed_1961_; size_t v_stop_boxed_1962_; lean_object* v_res_1963_; 
v_i_boxed_1961_ = lean_unbox_usize(v_i_1957_);
lean_dec(v_i_1957_);
v_stop_boxed_1962_ = lean_unbox_usize(v_stop_1958_);
lean_dec(v_stop_1958_);
v_res_1963_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(v_00_u03b1_1955_, v_as_1956_, v_i_boxed_1961_, v_stop_boxed_1962_, v_b_1959_, v___y_1960_);
lean_dec_ref(v_as_1956_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg(size_t v_sz_1964_, size_t v_i_1965_, lean_object* v_bs_1966_){
_start:
{
uint8_t v___x_1967_; 
v___x_1967_ = lean_usize_dec_lt(v_i_1965_, v_sz_1964_);
if (v___x_1967_ == 0)
{
return v_bs_1966_;
}
else
{
lean_object* v_v_1968_; lean_object* v___x_1969_; lean_object* v_bs_x27_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; size_t v___x_1973_; size_t v___x_1974_; lean_object* v___x_1975_; 
v_v_1968_ = lean_array_uget(v_bs_1966_, v_i_1965_);
v___x_1969_ = lean_unsigned_to_nat(0u);
v_bs_x27_1970_ = lean_array_uset(v_bs_1966_, v_i_1965_, v___x_1969_);
v___x_1971_ = lean_usize_to_nat(v_i_1965_);
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_v_1968_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
v___x_1973_ = ((size_t)1ULL);
v___x_1974_ = lean_usize_add(v_i_1965_, v___x_1973_);
v___x_1975_ = lean_array_uset(v_bs_x27_1970_, v_i_1965_, v___x_1972_);
v_i_1965_ = v___x_1974_;
v_bs_1966_ = v___x_1975_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg___boxed(lean_object* v_sz_1977_, lean_object* v_i_1978_, lean_object* v_bs_1979_){
_start:
{
size_t v_sz_boxed_1980_; size_t v_i_boxed_1981_; lean_object* v_res_1982_; 
v_sz_boxed_1980_ = lean_unbox_usize(v_sz_1977_);
lean_dec(v_sz_1977_);
v_i_boxed_1981_ = lean_unbox_usize(v_i_1978_);
lean_dec(v_i_1978_);
v_res_1982_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg(v_sz_boxed_1980_, v_i_boxed_1981_, v_bs_1979_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseName(lean_object* v_n_1983_, lean_object* v_names_1984_, lean_object* v_a_1985_){
_start:
{
size_t v_sz_1986_; size_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_sz_1986_ = lean_array_size(v_names_1984_);
v___x_1987_ = ((size_t)0ULL);
v___x_1988_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg(v_sz_1986_, v___x_1987_, v_names_1984_);
v___x_1989_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_1988_, v_a_1985_);
lean_dec_ref(v___x_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseName___boxed(lean_object* v_n_1990_, lean_object* v_names_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v_n_1990_, v_names_1991_, v_a_1992_);
lean_dec(v_n_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0(lean_object* v_n_1994_, lean_object* v_as_1995_, size_t v_sz_1996_, size_t v_i_1997_, lean_object* v_bs_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___redArg(v_sz_1996_, v_i_1997_, v_bs_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0___boxed(lean_object* v_n_2000_, lean_object* v_as_2001_, lean_object* v_sz_2002_, lean_object* v_i_2003_, lean_object* v_bs_2004_){
_start:
{
size_t v_sz_boxed_2005_; size_t v_i_boxed_2006_; lean_object* v_res_2007_; 
v_sz_boxed_2005_ = lean_unbox_usize(v_sz_2002_);
lean_dec(v_sz_2002_);
v_i_boxed_2006_ = lean_unbox_usize(v_i_2003_);
lean_dec(v_i_2003_);
v_res_2007_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseName_spec__0(v_n_2000_, v_as_2001_, v_sz_boxed_2005_, v_i_boxed_2006_, v_bs_2004_);
lean_dec_ref(v_as_2001_);
lean_dec(v_n_2000_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_parseMonthShort(lean_object* v_symbols_2008_, lean_object* v_a_2009_){
_start:
{
lean_object* v_monthShort_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v_monthShort_2010_ = lean_ctor_get(v_symbols_2008_, 1);
lean_inc_ref(v_monthShort_2010_);
lean_dec_ref(v_symbols_2008_);
v___x_2011_ = lean_unsigned_to_nat(12u);
v___x_2012_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_2011_, v_monthShort_2010_, v_a_2009_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_pos_2013_; lean_object* v_res_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2022_; 
v_pos_2013_ = lean_ctor_get(v___x_2012_, 0);
v_res_2014_ = lean_ctor_get(v___x_2012_, 1);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2016_ = v___x_2012_;
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_res_2014_);
lean_inc(v_pos_2013_);
lean_dec(v___x_2012_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2018_; lean_object* v___x_2020_; 
v___x_2018_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex(v_res_2014_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 1, v___x_2018_);
v___x_2020_ = v___x_2016_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_pos_2013_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v___x_2018_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
else
{
lean_object* v_pos_2023_; lean_object* v_err_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
v_pos_2023_ = lean_ctor_get(v___x_2012_, 0);
v_err_2024_ = lean_ctor_get(v___x_2012_, 1);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_2012_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_err_2024_);
lean_inc(v_pos_2023_);
lean_dec(v___x_2012_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_pos_2023_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v_err_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(lean_object* v_parse_2032_, lean_object* v_size_2033_, lean_object* v_acc_2034_, lean_object* v_count_2035_, lean_object* v_a_2036_){
_start:
{
uint8_t v___x_2037_; 
v___x_2037_ = lean_nat_dec_le(v_size_2033_, v_count_2035_);
if (v___x_2037_ == 0)
{
lean_object* v___x_2038_; 
lean_inc_ref(v_parse_2032_);
v___x_2038_ = lean_apply_1(v_parse_2032_, v_a_2036_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_pos_2039_; lean_object* v_res_2040_; uint32_t v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v_pos_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_pos_2039_);
v_res_2040_ = lean_ctor_get(v___x_2038_, 1);
lean_inc(v_res_2040_);
lean_dec_ref_known(v___x_2038_, 2);
v___x_2041_ = lean_unbox_uint32(v_res_2040_);
lean_dec(v_res_2040_);
v___x_2042_ = lean_string_push(v_acc_2034_, v___x_2041_);
v___x_2043_ = lean_unsigned_to_nat(1u);
v___x_2044_ = lean_nat_add(v_count_2035_, v___x_2043_);
lean_dec(v_count_2035_);
v_acc_2034_ = v___x_2042_;
v_count_2035_ = v___x_2044_;
v_a_2036_ = v_pos_2039_;
goto _start;
}
else
{
lean_object* v_pos_2046_; lean_object* v_err_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_dec(v_count_2035_);
lean_dec_ref(v_acc_2034_);
lean_dec_ref(v_parse_2032_);
v_pos_2046_ = lean_ctor_get(v___x_2038_, 0);
v_err_2047_ = lean_ctor_get(v___x_2038_, 1);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2038_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_err_2047_);
lean_inc(v_pos_2046_);
lean_dec(v___x_2038_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_pos_2046_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_err_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v___x_2055_; 
lean_dec(v_count_2035_);
lean_dec_ref(v_parse_2032_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v_a_2036_);
lean_ctor_set(v___x_2055_, 1, v_acc_2034_);
return v___x_2055_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go___boxed(lean_object* v_parse_2056_, lean_object* v_size_2057_, lean_object* v_acc_2058_, lean_object* v_count_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(v_parse_2056_, v_size_2057_, v_acc_2058_, v_count_2059_, v_a_2060_);
lean_dec(v_size_2057_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(lean_object* v_parse_2062_, lean_object* v_size_2063_, lean_object* v_a_2064_){
_start:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2065_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_2066_ = lean_unsigned_to_nat(0u);
v___x_2067_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(v_parse_2062_, v_size_2063_, v___x_2065_, v___x_2066_, v_a_2064_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars___boxed(lean_object* v_parse_2068_, lean_object* v_size_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v_parse_2068_, v_size_2069_, v_a_2070_);
lean_dec(v_size_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(lean_object* v_parser_2072_, lean_object* v_a_2073_){
_start:
{
lean_object* v_pos_2075_; lean_object* v_res_2076_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2108_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
lean_inc_ref(v_a_2073_);
v___x_2109_ = l_Std_Internal_Parsec_String_pstring(v___x_2108_, v_a_2073_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_pos_2110_; lean_object* v_res_2111_; lean_object* v___x_2112_; 
lean_dec_ref(v_a_2073_);
v_pos_2110_ = lean_ctor_get(v___x_2109_, 0);
lean_inc(v_pos_2110_);
v_res_2111_ = lean_ctor_get(v___x_2109_, 1);
lean_inc(v_res_2111_);
lean_dec_ref_known(v___x_2109_, 2);
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_res_2111_);
v_pos_2075_ = v_pos_2110_;
v_res_2076_ = v___x_2112_;
goto v___jp_2074_;
}
else
{
lean_object* v_pos_2113_; lean_object* v_err_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2125_; 
v_pos_2113_ = lean_ctor_get(v___x_2109_, 0);
v_err_2114_ = lean_ctor_get(v___x_2109_, 1);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2116_ = v___x_2109_;
v_isShared_2117_ = v_isSharedCheck_2125_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_err_2114_);
lean_inc(v_pos_2113_);
lean_dec(v___x_2109_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2125_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v_snd_2118_; lean_object* v_snd_2119_; uint8_t v_decide_2120_; 
v_snd_2118_ = lean_ctor_get(v_a_2073_, 1);
lean_inc(v_snd_2118_);
lean_dec_ref(v_a_2073_);
v_snd_2119_ = lean_ctor_get(v_pos_2113_, 1);
v_decide_2120_ = lean_nat_dec_eq(v_snd_2118_, v_snd_2119_);
lean_dec(v_snd_2118_);
if (v_decide_2120_ == 0)
{
lean_object* v___x_2122_; 
lean_dec_ref(v_parser_2072_);
if (v_isShared_2117_ == 0)
{
v___x_2122_ = v___x_2116_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_pos_2113_);
lean_ctor_set(v_reuseFailAlloc_2123_, 1, v_err_2114_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
else
{
lean_object* v___x_2124_; 
lean_del_object(v___x_2116_);
lean_dec(v_err_2114_);
v___x_2124_ = lean_box(0);
v_pos_2075_ = v_pos_2113_;
v_res_2076_ = v___x_2124_;
goto v___jp_2074_;
}
}
}
v___jp_2074_:
{
lean_object* v___x_2077_; 
v___x_2077_ = lean_apply_1(v_parser_2072_, v_pos_2075_);
if (lean_obj_tag(v___x_2077_) == 0)
{
if (lean_obj_tag(v_res_2076_) == 0)
{
lean_object* v_pos_2078_; lean_object* v_res_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2087_; 
v_pos_2078_ = lean_ctor_get(v___x_2077_, 0);
v_res_2079_ = lean_ctor_get(v___x_2077_, 1);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2081_ = v___x_2077_;
v_isShared_2082_ = v_isSharedCheck_2087_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_res_2079_);
lean_inc(v_pos_2078_);
lean_dec(v___x_2077_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2087_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2083_ = lean_nat_to_int(v_res_2079_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v___x_2083_);
v___x_2085_ = v___x_2081_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_pos_2078_);
lean_ctor_set(v_reuseFailAlloc_2086_, 1, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
else
{
lean_object* v_pos_2088_; lean_object* v_res_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2098_; 
lean_dec_ref_known(v_res_2076_, 1);
v_pos_2088_ = lean_ctor_get(v___x_2077_, 0);
v_res_2089_ = lean_ctor_get(v___x_2077_, 1);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2091_ = v___x_2077_;
v_isShared_2092_ = v_isSharedCheck_2098_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_res_2089_);
lean_inc(v_pos_2088_);
lean_dec(v___x_2077_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2098_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2096_; 
v___x_2093_ = lean_nat_to_int(v_res_2089_);
v___x_2094_ = lean_int_neg(v___x_2093_);
lean_dec(v___x_2093_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 1, v___x_2094_);
v___x_2096_ = v___x_2091_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_pos_2088_);
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
else
{
lean_object* v_pos_2099_; lean_object* v_err_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2107_; 
lean_dec(v_res_2076_);
v_pos_2099_ = lean_ctor_get(v___x_2077_, 0);
v_err_2100_ = lean_ctor_get(v___x_2077_, 1);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2102_ = v___x_2077_;
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_err_2100_);
lean_inc(v_pos_2099_);
lean_dec(v___x_2077_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2105_; 
if (v_isShared_2103_ == 0)
{
v___x_2105_ = v___x_2102_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_pos_2099_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v_err_2100_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum_go(lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v_zero_2132_; uint8_t v_isZero_2133_; 
v_zero_2132_ = lean_unsigned_to_nat(0u);
v_isZero_2133_ = lean_nat_dec_eq(v_a_2126_, v_zero_2132_);
if (v_isZero_2133_ == 1)
{
lean_object* v___x_2134_; 
lean_dec(v_a_2126_);
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v_a_2128_);
lean_ctor_set(v___x_2134_, 1, v_a_2127_);
return v___x_2134_;
}
else
{
lean_object* v_fst_2135_; lean_object* v_snd_2136_; lean_object* v___x_2137_; uint8_t v_decide_2138_; 
v_fst_2135_ = lean_ctor_get(v_a_2128_, 0);
v_snd_2136_ = lean_ctor_get(v_a_2128_, 1);
v___x_2137_ = lean_string_utf8_byte_size(v_fst_2135_);
v_decide_2138_ = lean_nat_dec_eq(v_snd_2136_, v___x_2137_);
if (v_decide_2138_ == 0)
{
uint32_t v_c_2139_; uint32_t v___x_2140_; uint8_t v___x_2141_; 
v_c_2139_ = lean_string_utf8_get_fast(v_fst_2135_, v_snd_2136_);
v___x_2140_ = 48;
v___x_2141_ = lean_uint32_dec_le(v___x_2140_, v_c_2139_);
if (v___x_2141_ == 0)
{
lean_dec(v_a_2127_);
lean_dec(v_a_2126_);
goto v___jp_2129_;
}
else
{
uint32_t v___x_2142_; uint8_t v___x_2143_; 
v___x_2142_ = 57;
v___x_2143_ = lean_uint32_dec_le(v_c_2139_, v___x_2142_);
if (v___x_2143_ == 0)
{
lean_dec(v_a_2127_);
lean_dec(v_a_2126_);
goto v___jp_2129_;
}
else
{
lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2160_; 
lean_inc(v_snd_2136_);
lean_inc(v_fst_2135_);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_a_2128_);
if (v_isSharedCheck_2160_ == 0)
{
lean_object* v_unused_2161_; lean_object* v_unused_2162_; 
v_unused_2161_ = lean_ctor_get(v_a_2128_, 1);
lean_dec(v_unused_2161_);
v_unused_2162_ = lean_ctor_get(v_a_2128_, 0);
lean_dec(v_unused_2162_);
v___x_2145_ = v_a_2128_;
v_isShared_2146_ = v_isSharedCheck_2160_;
goto v_resetjp_2144_;
}
else
{
lean_dec(v_a_2128_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2160_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v_one_2147_; lean_object* v_n_2148_; lean_object* v___x_2149_; lean_object* v_it_x27_2151_; 
v_one_2147_ = lean_unsigned_to_nat(1u);
v_n_2148_ = lean_nat_sub(v_a_2126_, v_one_2147_);
lean_dec(v_a_2126_);
v___x_2149_ = lean_string_utf8_next_fast(v_fst_2135_, v_snd_2136_);
lean_dec(v_snd_2136_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 1, v___x_2149_);
v_it_x27_2151_ = v___x_2145_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_fst_2135_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v___x_2149_);
v_it_x27_2151_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2152_ = lean_unsigned_to_nat(10u);
v___x_2153_ = lean_nat_mul(v___x_2152_, v_a_2127_);
lean_dec(v_a_2127_);
v___x_2154_ = lean_uint32_to_nat(v_c_2139_);
v___x_2155_ = lean_unsigned_to_nat(48u);
v___x_2156_ = lean_nat_sub(v___x_2154_, v___x_2155_);
lean_dec(v___x_2154_);
v___x_2157_ = lean_nat_add(v___x_2153_, v___x_2156_);
lean_dec(v___x_2156_);
lean_dec(v___x_2153_);
v_a_2126_ = v_n_2148_;
v_a_2127_ = v___x_2157_;
v_a_2128_ = v_it_x27_2151_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
lean_dec(v_a_2127_);
lean_dec(v_a_2126_);
v___x_2163_ = lean_box(0);
v___x_2164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2128_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
return v___x_2164_;
}
}
v___jp_2129_:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v_a_2128_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
return v___x_2131_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(lean_object* v_size_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2167_ = lean_unsigned_to_nat(0u);
v___x_2168_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum_go(v_size_2165_, v___x_2167_, v_a_2166_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___lam__0(lean_object* v___y_2169_){
_start:
{
lean_object* v_fst_2173_; lean_object* v_snd_2174_; lean_object* v___x_2175_; uint8_t v_decide_2176_; 
v_fst_2173_ = lean_ctor_get(v___y_2169_, 0);
v_snd_2174_ = lean_ctor_get(v___y_2169_, 1);
v___x_2175_ = lean_string_utf8_byte_size(v_fst_2173_);
v_decide_2176_ = lean_nat_dec_eq(v_snd_2174_, v___x_2175_);
if (v_decide_2176_ == 0)
{
uint32_t v_c_2177_; lean_object* v___x_2178_; lean_object* v_it_x27_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; uint32_t v___x_2182_; uint8_t v___x_2183_; 
v_c_2177_ = lean_string_utf8_get_fast(v_fst_2173_, v_snd_2174_);
v___x_2178_ = lean_string_utf8_next_fast(v_fst_2173_, v_snd_2174_);
lean_inc(v_fst_2173_);
v_it_x27_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2179_, 0, v_fst_2173_);
lean_ctor_set(v_it_x27_2179_, 1, v___x_2178_);
v___x_2180_ = lean_box_uint32(v_c_2177_);
v___x_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2181_, 0, v_it_x27_2179_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = 48;
v___x_2183_ = lean_uint32_dec_le(v___x_2182_, v_c_2177_);
if (v___x_2183_ == 0)
{
lean_dec_ref_known(v___x_2181_, 2);
goto v___jp_2170_;
}
else
{
uint32_t v___x_2184_; uint8_t v___x_2185_; 
v___x_2184_ = 57;
v___x_2185_ = lean_uint32_dec_le(v_c_2177_, v___x_2184_);
if (v___x_2185_ == 0)
{
lean_dec_ref_known(v___x_2181_, 2);
goto v___jp_2170_;
}
else
{
lean_dec_ref(v___y_2169_);
return v___x_2181_;
}
}
}
else
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = lean_box(0);
v___x_2187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___y_2169_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
return v___x_2187_;
}
v___jp_2170_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2171_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_2172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___y_2169_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(lean_object* v_acc_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v_fst_2190_; lean_object* v_snd_2191_; lean_object* v_pos_2193_; lean_object* v_snd_2194_; lean_object* v_err_2195_; lean_object* v___x_2201_; uint8_t v_decide_2202_; 
v_fst_2190_ = lean_ctor_get(v_a_2189_, 0);
v_snd_2191_ = lean_ctor_get(v_a_2189_, 1);
lean_inc(v_snd_2191_);
v___x_2201_ = lean_string_utf8_byte_size(v_fst_2190_);
v_decide_2202_ = lean_nat_dec_eq(v_snd_2191_, v___x_2201_);
if (v_decide_2202_ == 0)
{
uint32_t v_c_2203_; uint32_t v___x_2204_; uint8_t v___x_2205_; 
v_c_2203_ = lean_string_utf8_get_fast(v_fst_2190_, v_snd_2191_);
v___x_2204_ = 48;
v___x_2205_ = lean_uint32_dec_le(v___x_2204_, v_c_2203_);
if (v___x_2205_ == 0)
{
goto v___jp_2199_;
}
else
{
uint32_t v___x_2206_; uint8_t v___x_2207_; 
v___x_2206_ = 57;
v___x_2207_ = lean_uint32_dec_le(v_c_2203_, v___x_2206_);
if (v___x_2207_ == 0)
{
goto v___jp_2199_;
}
else
{
lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2217_; 
lean_inc(v_fst_2190_);
v_isSharedCheck_2217_ = !lean_is_exclusive(v_a_2189_);
if (v_isSharedCheck_2217_ == 0)
{
lean_object* v_unused_2218_; lean_object* v_unused_2219_; 
v_unused_2218_ = lean_ctor_get(v_a_2189_, 1);
lean_dec(v_unused_2218_);
v_unused_2219_ = lean_ctor_get(v_a_2189_, 0);
lean_dec(v_unused_2219_);
v___x_2209_ = v_a_2189_;
v_isShared_2210_ = v_isSharedCheck_2217_;
goto v_resetjp_2208_;
}
else
{
lean_dec(v_a_2189_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2217_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; lean_object* v_it_x27_2213_; 
v___x_2211_ = lean_string_utf8_next_fast(v_fst_2190_, v_snd_2191_);
lean_dec(v_snd_2191_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___x_2211_);
v_it_x27_2213_ = v___x_2209_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_fst_2190_);
lean_ctor_set(v_reuseFailAlloc_2216_, 1, v___x_2211_);
v_it_x27_2213_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2214_; 
v___x_2214_ = lean_string_push(v_acc_2188_, v_c_2203_);
v_acc_2188_ = v___x_2214_;
v_a_2189_ = v_it_x27_2213_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_box(0);
lean_inc(v_snd_2191_);
v_pos_2193_ = v_a_2189_;
v_snd_2194_ = v_snd_2191_;
v_err_2195_ = v___x_2220_;
goto v___jp_2192_;
}
v___jp_2192_:
{
uint8_t v_decide_2196_; 
v_decide_2196_ = lean_nat_dec_eq(v_snd_2191_, v_snd_2194_);
lean_dec(v_snd_2194_);
lean_dec(v_snd_2191_);
if (v_decide_2196_ == 0)
{
lean_object* v___x_2197_; 
lean_dec_ref(v_acc_2188_);
lean_inc(v_err_2195_);
v___x_2197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2197_, 0, v_pos_2193_);
lean_ctor_set(v___x_2197_, 1, v_err_2195_);
return v___x_2197_;
}
else
{
lean_object* v___x_2198_; 
v___x_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2198_, 0, v_pos_2193_);
lean_ctor_set(v___x_2198_, 1, v_acc_2188_);
return v___x_2198_;
}
}
v___jp_2199_:
{
lean_object* v___x_2200_; 
v___x_2200_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_2191_);
v_pos_2193_ = v_a_2189_;
v_snd_2194_ = v_snd_2191_;
v_err_2195_ = v___x_2200_;
goto v___jp_2192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(lean_object* v_size_2222_, lean_object* v_a_2223_){
_start:
{
lean_object* v___f_2224_; lean_object* v___x_2225_; 
v___f_2224_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___closed__0));
v___x_2225_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_2224_, v_size_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_pos_2226_; lean_object* v_res_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v_pos_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_pos_2226_);
v_res_2227_ = lean_ctor_get(v___x_2225_, 1);
lean_inc(v_res_2227_);
lean_dec_ref_known(v___x_2225_, 2);
v___x_2228_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_2229_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(v___x_2228_, v_pos_2226_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_pos_2230_; lean_object* v_res_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2243_; 
v_pos_2230_ = lean_ctor_get(v___x_2229_, 0);
v_res_2231_ = lean_ctor_get(v___x_2229_, 1);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2233_ = v___x_2229_;
v_isShared_2234_ = v_isSharedCheck_2243_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_res_2231_);
lean_inc(v_pos_2230_);
lean_dec(v___x_2229_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2243_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2241_; 
v___x_2235_ = lean_string_append(v_res_2227_, v_res_2231_);
lean_dec(v_res_2231_);
v___x_2236_ = lean_unsigned_to_nat(0u);
v___x_2237_ = lean_string_utf8_byte_size(v___x_2235_);
v___x_2238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2235_);
lean_ctor_set(v___x_2238_, 1, v___x_2236_);
lean_ctor_set(v___x_2238_, 2, v___x_2237_);
v___x_2239_ = l_String_Slice_toNat_x21(v___x_2238_);
lean_dec_ref_known(v___x_2238_, 3);
if (v_isShared_2234_ == 0)
{
lean_ctor_set(v___x_2233_, 1, v___x_2239_);
v___x_2241_ = v___x_2233_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_pos_2230_);
lean_ctor_set(v_reuseFailAlloc_2242_, 1, v___x_2239_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
else
{
lean_object* v_pos_2244_; lean_object* v_err_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec(v_res_2227_);
v_pos_2244_ = lean_ctor_get(v___x_2229_, 0);
v_err_2245_ = lean_ctor_get(v___x_2229_, 1);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2229_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_err_2245_);
lean_inc(v_pos_2244_);
lean_dec(v___x_2229_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_pos_2244_);
lean_ctor_set(v_reuseFailAlloc_2251_, 1, v_err_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
else
{
lean_object* v_pos_2253_; lean_object* v_err_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
v_pos_2253_ = lean_ctor_get(v___x_2225_, 0);
v_err_2254_ = lean_ctor_get(v___x_2225_, 1);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2256_ = v___x_2225_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_err_2254_);
lean_inc(v_pos_2253_);
lean_dec(v___x_2225_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_pos_2253_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v_err_2254_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___boxed(lean_object* v_size_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v_size_2262_, v_a_2263_);
lean_dec(v_size_2262_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(lean_object* v_size_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2267_ = lean_unsigned_to_nat(1u);
v___x_2268_ = lean_nat_dec_eq(v_size_2265_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; 
v___x_2269_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_size_2265_, v_a_2266_);
return v___x_2269_;
}
else
{
lean_object* v___x_2270_; 
lean_dec(v_size_2265_);
v___x_2270_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v___x_2267_, v_a_2266_);
return v___x_2270_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_digitRunLength(lean_object* v_it_2271_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
lean_inc_ref(v_it_2271_);
v___x_2273_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(v___x_2272_, v_it_2271_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_res_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2282_; 
v_res_2274_ = lean_ctor_get(v___x_2273_, 1);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2282_ == 0)
{
lean_object* v_unused_2283_; 
v_unused_2283_ = lean_ctor_get(v___x_2273_, 0);
lean_dec(v_unused_2283_);
v___x_2276_ = v___x_2273_;
v_isShared_2277_ = v_isSharedCheck_2282_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_res_2274_);
lean_dec(v___x_2273_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2282_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2280_; 
v___x_2278_ = lean_string_length(v_res_2274_);
lean_dec(v_res_2274_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 1, v___x_2278_);
lean_ctor_set(v___x_2276_, 0, v_it_2271_);
v___x_2280_ = v___x_2276_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_it_2271_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v___x_2278_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
else
{
lean_object* v_err_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
v_err_2284_ = lean_ctor_get(v___x_2273_, 1);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2291_ == 0)
{
lean_object* v_unused_2292_; 
v_unused_2292_ = lean_ctor_get(v___x_2273_, 0);
lean_dec(v_unused_2292_);
v___x_2286_ = v___x_2273_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_err_2284_);
lean_dec(v___x_2273_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v_it_2271_);
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_it_2271_);
lean_ctor_set(v_reuseFailAlloc_2290_, 1, v_err_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(lean_object* v_width_2293_, lean_object* v_reserve_2294_, lean_object* v_a_2295_){
_start:
{
if (lean_obj_tag(v_reserve_2294_) == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_width_2293_, v_a_2295_);
return v___x_2296_;
}
else
{
lean_object* v_val_2297_; lean_object* v___x_2298_; 
v_val_2297_ = lean_ctor_get(v_reserve_2294_, 0);
v___x_2298_ = l___private_Std_Time_Format_Basic_0__Std_Time_digitRunLength(v_a_2295_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_pos_2299_; lean_object* v_res_2300_; lean_object* v___x_2301_; uint8_t v___x_2302_; 
v_pos_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_pos_2299_);
v_res_2300_ = lean_ctor_get(v___x_2298_, 1);
lean_inc(v_res_2300_);
lean_dec_ref_known(v___x_2298_, 2);
v___x_2301_ = lean_nat_sub(v_res_2300_, v_val_2297_);
lean_dec(v_res_2300_);
v___x_2302_ = lean_nat_dec_le(v_width_2293_, v___x_2301_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
lean_dec(v___x_2301_);
v___x_2303_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_width_2293_, v_pos_2299_);
return v___x_2303_;
}
else
{
lean_object* v___x_2304_; 
lean_dec(v_width_2293_);
v___x_2304_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_2301_, v_pos_2299_);
return v___x_2304_;
}
}
else
{
lean_dec(v_width_2293_);
return v___x_2298_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum___boxed(lean_object* v_width_2305_, lean_object* v_reserve_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(v_width_2305_, v_reserve_2306_, v_a_2307_);
lean_dec(v_reserve_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear(uint8_t v_negative_2318_, lean_object* v_reserve_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v___y_2322_; lean_object* v___y_2323_; lean_object* v___y_2324_; lean_object* v_pos_2329_; lean_object* v_val_2330_; lean_object* v_fst_2344_; lean_object* v_snd_2345_; lean_object* v_pos_2347_; lean_object* v_snd_2348_; lean_object* v_err_2349_; lean_object* v_pos_2367_; lean_object* v_fst_2368_; lean_object* v_snd_2369_; lean_object* v_err_2370_; lean_object* v___x_2383_; uint8_t v_decide_2384_; 
v_fst_2344_ = lean_ctor_get(v_a_2320_, 0);
lean_inc(v_fst_2344_);
v_snd_2345_ = lean_ctor_get(v_a_2320_, 1);
lean_inc(v_snd_2345_);
v___x_2383_ = lean_string_utf8_byte_size(v_fst_2344_);
v_decide_2384_ = lean_nat_dec_eq(v_snd_2345_, v___x_2383_);
if (v_decide_2384_ == 0)
{
uint32_t v___x_2385_; uint32_t v_c_2386_; uint8_t v___x_2387_; 
v___x_2385_ = 43;
v_c_2386_ = lean_string_utf8_get_fast(v_fst_2344_, v_snd_2345_);
v___x_2387_ = lean_uint32_dec_eq(v_c_2386_, v___x_2385_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; 
v___x_2388_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__5));
lean_inc(v_snd_2345_);
v_pos_2367_ = v_a_2320_;
v_fst_2368_ = v_fst_2344_;
v_snd_2369_ = v_snd_2345_;
v_err_2370_ = v___x_2388_;
goto v___jp_2366_;
}
else
{
lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2397_; 
v_isSharedCheck_2397_ = !lean_is_exclusive(v_a_2320_);
if (v_isSharedCheck_2397_ == 0)
{
lean_object* v_unused_2398_; lean_object* v_unused_2399_; 
v_unused_2398_ = lean_ctor_get(v_a_2320_, 1);
lean_dec(v_unused_2398_);
v_unused_2399_ = lean_ctor_get(v_a_2320_, 0);
lean_dec(v_unused_2399_);
v___x_2390_ = v_a_2320_;
v_isShared_2391_ = v_isSharedCheck_2397_;
goto v_resetjp_2389_;
}
else
{
lean_dec(v_a_2320_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2397_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v_it_x27_2394_; 
v___x_2392_ = lean_string_utf8_next_fast(v_fst_2344_, v_snd_2345_);
lean_dec(v_snd_2345_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 1, v___x_2392_);
v_it_x27_2394_ = v___x_2390_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_fst_2344_);
lean_ctor_set(v_reuseFailAlloc_2396_, 1, v___x_2392_);
v_it_x27_2394_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v_pos_2329_ = v_it_x27_2394_;
v_val_2330_ = v___x_2395_;
goto v___jp_2328_;
}
}
}
}
else
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_box(0);
lean_inc(v_snd_2345_);
v_pos_2367_ = v_a_2320_;
v_fst_2368_ = v_fst_2344_;
v_snd_2369_ = v_snd_2345_;
v_err_2370_ = v___x_2400_;
goto v___jp_2366_;
}
v___jp_2321_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = lean_nat_to_int(v___y_2322_);
v___x_2326_ = lean_int_mul(v___y_2324_, v___x_2325_);
lean_dec(v___x_2325_);
v___x_2327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___y_2323_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
return v___x_2327_;
}
v___jp_2328_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = lean_unsigned_to_nat(4u);
v___x_2332_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(v___x_2331_, v_reserve_2319_, v_pos_2329_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_pos_2333_; lean_object* v_res_2334_; 
v_pos_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_pos_2333_);
v_res_2334_ = lean_ctor_get(v___x_2332_, 1);
lean_inc(v_res_2334_);
lean_dec_ref_known(v___x_2332_, 2);
v___y_2322_ = v_res_2334_;
v___y_2323_ = v_pos_2333_;
v___y_2324_ = v_val_2330_;
goto v___jp_2321_;
}
else
{
lean_object* v_pos_2335_; lean_object* v_err_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
v_pos_2335_ = lean_ctor_get(v___x_2332_, 0);
v_err_2336_ = lean_ctor_get(v___x_2332_, 1);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2332_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_err_2336_);
lean_inc(v_pos_2335_);
lean_dec(v___x_2332_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_pos_2335_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v_err_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
v___jp_2346_:
{
uint8_t v_decide_2350_; 
v_decide_2350_ = lean_nat_dec_eq(v_snd_2345_, v_snd_2348_);
lean_dec(v_snd_2348_);
lean_dec(v_snd_2345_);
if (v_decide_2350_ == 0)
{
lean_object* v___x_2351_; 
lean_inc(v_err_2349_);
v___x_2351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2351_, 0, v_pos_2347_);
lean_ctor_set(v___x_2351_, 1, v_err_2349_);
return v___x_2351_;
}
else
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2352_ = lean_unsigned_to_nat(4u);
v___x_2353_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_2352_, v_pos_2347_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_pos_2354_; lean_object* v_res_2355_; lean_object* v___x_2356_; 
v_pos_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_pos_2354_);
v_res_2355_ = lean_ctor_get(v___x_2353_, 1);
lean_inc(v_res_2355_);
lean_dec_ref_known(v___x_2353_, 2);
v___x_2356_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___y_2322_ = v_res_2355_;
v___y_2323_ = v_pos_2354_;
v___y_2324_ = v___x_2356_;
goto v___jp_2321_;
}
else
{
lean_object* v_pos_2357_; lean_object* v_err_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
v_pos_2357_ = lean_ctor_get(v___x_2353_, 0);
v_err_2358_ = lean_ctor_get(v___x_2353_, 1);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2353_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_err_2358_);
lean_inc(v_pos_2357_);
lean_dec(v___x_2353_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_pos_2357_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v_err_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
v___jp_2366_:
{
uint8_t v_decide_2371_; 
v_decide_2371_ = lean_nat_dec_eq(v_snd_2345_, v_snd_2369_);
if (v_decide_2371_ == 0)
{
lean_dec(v_fst_2368_);
v_pos_2347_ = v_pos_2367_;
v_snd_2348_ = v_snd_2369_;
v_err_2349_ = v_err_2370_;
goto v___jp_2346_;
}
else
{
if (v_negative_2318_ == 0)
{
lean_object* v___x_2372_; 
lean_dec(v_fst_2368_);
v___x_2372_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__1));
v_pos_2347_ = v_pos_2367_;
v_snd_2348_ = v_snd_2369_;
v_err_2349_ = v___x_2372_;
goto v___jp_2346_;
}
else
{
lean_object* v___x_2373_; uint8_t v_decide_2374_; 
v___x_2373_ = lean_string_utf8_byte_size(v_fst_2368_);
v_decide_2374_ = lean_nat_dec_eq(v_snd_2369_, v___x_2373_);
if (v_decide_2374_ == 0)
{
uint32_t v___x_2375_; uint32_t v_c_2376_; uint8_t v___x_2377_; 
v___x_2375_ = 45;
v_c_2376_ = lean_string_utf8_get_fast(v_fst_2368_, v_snd_2369_);
v___x_2377_ = lean_uint32_dec_eq(v_c_2376_, v___x_2375_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; 
lean_dec(v_fst_2368_);
v___x_2378_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__3));
v_pos_2347_ = v_pos_2367_;
v_snd_2348_ = v_snd_2369_;
v_err_2349_ = v___x_2378_;
goto v___jp_2346_;
}
else
{
lean_object* v___x_2379_; lean_object* v_it_x27_2380_; lean_object* v___x_2381_; 
lean_dec_ref(v_pos_2367_);
lean_dec(v_snd_2345_);
v___x_2379_ = lean_string_utf8_next_fast(v_fst_2368_, v_snd_2369_);
lean_dec(v_snd_2369_);
v_it_x27_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2380_, 0, v_fst_2368_);
lean_ctor_set(v_it_x27_2380_, 1, v___x_2379_);
v___x_2381_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0);
v_pos_2329_ = v_it_x27_2380_;
v_val_2330_ = v___x_2381_;
goto v___jp_2328_;
}
}
else
{
lean_object* v___x_2382_; 
lean_dec(v_fst_2368_);
v___x_2382_ = lean_box(0);
v_pos_2347_ = v_pos_2367_;
v_snd_2348_ = v_snd_2369_;
v_err_2349_ = v___x_2382_;
goto v___jp_2346_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___boxed(lean_object* v_negative_2401_, lean_object* v_reserve_2402_, lean_object* v_a_2403_){
_start:
{
uint8_t v_negative_boxed_2404_; lean_object* v_res_2405_; 
v_negative_boxed_2404_ = lean_unbox(v_negative_2401_);
v_res_2405_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear(v_negative_boxed_2404_, v_reserve_2402_, v_a_2403_);
lean_dec(v_reserve_2402_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(lean_object* v_size_2406_, lean_object* v_pad_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v___f_2409_; lean_object* v___x_2410_; 
v___f_2409_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___closed__0));
v___x_2410_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_2409_, v_size_2406_, v_a_2408_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_pos_2411_; lean_object* v_res_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2425_; 
v_pos_2411_ = lean_ctor_get(v___x_2410_, 0);
v_res_2412_ = lean_ctor_get(v___x_2410_, 1);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2414_ = v___x_2410_;
v_isShared_2415_ = v_isSharedCheck_2425_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_res_2412_);
lean_inc(v_pos_2411_);
lean_dec(v___x_2410_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2425_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
uint32_t v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2416_ = 48;
v___x_2417_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_pad_2407_, v___x_2416_, v_res_2412_);
v___x_2418_ = lean_unsigned_to_nat(0u);
v___x_2419_ = lean_string_utf8_byte_size(v___x_2417_);
v___x_2420_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2417_);
lean_ctor_set(v___x_2420_, 1, v___x_2418_);
lean_ctor_set(v___x_2420_, 2, v___x_2419_);
v___x_2421_ = l_String_Slice_toNat_x21(v___x_2420_);
lean_dec_ref_known(v___x_2420_, 3);
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 1, v___x_2421_);
v___x_2423_ = v___x_2414_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_pos_2411_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
else
{
lean_object* v_pos_2426_; lean_object* v_err_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
v_pos_2426_ = lean_ctor_get(v___x_2410_, 0);
v_err_2427_ = lean_ctor_get(v___x_2410_, 1);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2410_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_err_2427_);
lean_inc(v_pos_2426_);
lean_dec(v___x_2410_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_pos_2426_);
lean_ctor_set(v_reuseFailAlloc_2433_, 1, v_err_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed(lean_object* v_size_2435_, lean_object* v_pad_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(v_size_2435_, v_pad_2436_, v_a_2437_);
lean_dec(v_pad_2436_);
lean_dec(v_size_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(lean_object* v_acc_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_pos_2442_; uint32_t v_res_2443_; lean_object* v_fst_2446_; lean_object* v_snd_2447_; lean_object* v_pos_2449_; lean_object* v_snd_2450_; lean_object* v_err_2451_; lean_object* v___x_2455_; uint8_t v_decide_2456_; 
v_fst_2446_ = lean_ctor_get(v_a_2440_, 0);
v_snd_2447_ = lean_ctor_get(v_a_2440_, 1);
lean_inc(v_snd_2447_);
v___x_2455_ = lean_string_utf8_byte_size(v_fst_2446_);
v_decide_2456_ = lean_nat_dec_eq(v_snd_2447_, v___x_2455_);
if (v_decide_2456_ == 0)
{
uint32_t v_c_2457_; lean_object* v___x_2458_; lean_object* v_it_x27_2459_; uint32_t v___x_2482_; uint8_t v___x_2483_; 
v_c_2457_ = lean_string_utf8_get_fast(v_fst_2446_, v_snd_2447_);
v___x_2458_ = lean_string_utf8_next_fast(v_fst_2446_, v_snd_2447_);
lean_inc(v_fst_2446_);
v_it_x27_2459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2459_, 0, v_fst_2446_);
lean_ctor_set(v_it_x27_2459_, 1, v___x_2458_);
v___x_2482_ = 65;
v___x_2483_ = lean_uint32_dec_le(v___x_2482_, v_c_2457_);
if (v___x_2483_ == 0)
{
goto v___jp_2477_;
}
else
{
uint32_t v___x_2484_; uint8_t v___x_2485_; 
v___x_2484_ = 90;
v___x_2485_ = lean_uint32_dec_le(v_c_2457_, v___x_2484_);
if (v___x_2485_ == 0)
{
goto v___jp_2477_;
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
v___jp_2460_:
{
uint32_t v___x_2461_; uint8_t v___x_2462_; 
v___x_2461_ = 95;
v___x_2462_ = lean_uint32_dec_eq(v_c_2457_, v___x_2461_);
if (v___x_2462_ == 0)
{
uint32_t v___x_2463_; uint8_t v___x_2464_; 
v___x_2463_ = 45;
v___x_2464_ = lean_uint32_dec_eq(v_c_2457_, v___x_2463_);
if (v___x_2464_ == 0)
{
uint32_t v___x_2465_; uint8_t v___x_2466_; 
v___x_2465_ = 43;
v___x_2466_ = lean_uint32_dec_eq(v_c_2457_, v___x_2465_);
if (v___x_2466_ == 0)
{
uint32_t v___x_2467_; uint8_t v___x_2468_; 
v___x_2467_ = 47;
v___x_2468_ = lean_uint32_dec_eq(v_c_2457_, v___x_2467_);
if (v___x_2468_ == 0)
{
uint32_t v___x_2469_; uint8_t v___x_2470_; 
v___x_2469_ = 58;
v___x_2470_ = lean_uint32_dec_eq(v_c_2457_, v___x_2469_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; 
lean_dec_ref_known(v_it_x27_2459_, 2);
v___x_2471_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_2447_);
v_pos_2449_ = v_a_2440_;
v_snd_2450_ = v_snd_2447_;
v_err_2451_ = v___x_2471_;
goto v___jp_2448_;
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
v___jp_2472_:
{
uint32_t v___x_2473_; uint8_t v___x_2474_; 
v___x_2473_ = 48;
v___x_2474_ = lean_uint32_dec_le(v___x_2473_, v_c_2457_);
if (v___x_2474_ == 0)
{
goto v___jp_2460_;
}
else
{
uint32_t v___x_2475_; uint8_t v___x_2476_; 
v___x_2475_ = 57;
v___x_2476_ = lean_uint32_dec_le(v_c_2457_, v___x_2475_);
if (v___x_2476_ == 0)
{
goto v___jp_2460_;
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
}
v___jp_2477_:
{
uint32_t v___x_2478_; uint8_t v___x_2479_; 
v___x_2478_ = 97;
v___x_2479_ = lean_uint32_dec_le(v___x_2478_, v_c_2457_);
if (v___x_2479_ == 0)
{
goto v___jp_2472_;
}
else
{
uint32_t v___x_2480_; uint8_t v___x_2481_; 
v___x_2480_ = 122;
v___x_2481_ = lean_uint32_dec_le(v_c_2457_, v___x_2480_);
if (v___x_2481_ == 0)
{
goto v___jp_2472_;
}
else
{
lean_dec(v_snd_2447_);
lean_dec_ref(v_a_2440_);
v_pos_2442_ = v_it_x27_2459_;
v_res_2443_ = v_c_2457_;
goto v___jp_2441_;
}
}
}
}
else
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_box(0);
lean_inc(v_snd_2447_);
v_pos_2449_ = v_a_2440_;
v_snd_2450_ = v_snd_2447_;
v_err_2451_ = v___x_2486_;
goto v___jp_2448_;
}
v___jp_2441_:
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_string_push(v_acc_2439_, v_res_2443_);
v_acc_2439_ = v___x_2444_;
v_a_2440_ = v_pos_2442_;
goto _start;
}
v___jp_2448_:
{
uint8_t v_decide_2452_; 
v_decide_2452_ = lean_nat_dec_eq(v_snd_2447_, v_snd_2450_);
lean_dec(v_snd_2450_);
lean_dec(v_snd_2447_);
if (v_decide_2452_ == 0)
{
lean_object* v___x_2453_; 
lean_dec_ref(v_acc_2439_);
lean_inc(v_err_2451_);
v___x_2453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2453_, 0, v_pos_2449_);
lean_ctor_set(v___x_2453_, 1, v_err_2451_);
return v___x_2453_;
}
else
{
lean_object* v___x_2454_; 
v___x_2454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2454_, 0, v_pos_2449_);
lean_ctor_set(v___x_2454_, 1, v_acc_2439_);
return v___x_2454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(lean_object* v_acc_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_pos_2490_; uint32_t v_res_2491_; lean_object* v_fst_2494_; lean_object* v_snd_2495_; lean_object* v_pos_2497_; lean_object* v_snd_2498_; lean_object* v_err_2499_; lean_object* v___x_2503_; uint8_t v_decide_2504_; 
v_fst_2494_ = lean_ctor_get(v_a_2488_, 0);
v_snd_2495_ = lean_ctor_get(v_a_2488_, 1);
lean_inc(v_snd_2495_);
v___x_2503_ = lean_string_utf8_byte_size(v_fst_2494_);
v_decide_2504_ = lean_nat_dec_eq(v_snd_2495_, v___x_2503_);
if (v_decide_2504_ == 0)
{
uint32_t v_c_2505_; lean_object* v___x_2506_; lean_object* v_it_x27_2507_; uint32_t v___x_2530_; uint8_t v___x_2531_; 
v_c_2505_ = lean_string_utf8_get_fast(v_fst_2494_, v_snd_2495_);
v___x_2506_ = lean_string_utf8_next_fast(v_fst_2494_, v_snd_2495_);
lean_inc(v_fst_2494_);
v_it_x27_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2507_, 0, v_fst_2494_);
lean_ctor_set(v_it_x27_2507_, 1, v___x_2506_);
v___x_2530_ = 65;
v___x_2531_ = lean_uint32_dec_le(v___x_2530_, v_c_2505_);
if (v___x_2531_ == 0)
{
goto v___jp_2525_;
}
else
{
uint32_t v___x_2532_; uint8_t v___x_2533_; 
v___x_2532_ = 90;
v___x_2533_ = lean_uint32_dec_le(v_c_2505_, v___x_2532_);
if (v___x_2533_ == 0)
{
goto v___jp_2525_;
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
v___jp_2508_:
{
uint32_t v___x_2509_; uint8_t v___x_2510_; 
v___x_2509_ = 95;
v___x_2510_ = lean_uint32_dec_eq(v_c_2505_, v___x_2509_);
if (v___x_2510_ == 0)
{
uint32_t v___x_2511_; uint8_t v___x_2512_; 
v___x_2511_ = 45;
v___x_2512_ = lean_uint32_dec_eq(v_c_2505_, v___x_2511_);
if (v___x_2512_ == 0)
{
uint32_t v___x_2513_; uint8_t v___x_2514_; 
v___x_2513_ = 43;
v___x_2514_ = lean_uint32_dec_eq(v_c_2505_, v___x_2513_);
if (v___x_2514_ == 0)
{
uint32_t v___x_2515_; uint8_t v___x_2516_; 
v___x_2515_ = 47;
v___x_2516_ = lean_uint32_dec_eq(v_c_2505_, v___x_2515_);
if (v___x_2516_ == 0)
{
uint32_t v___x_2517_; uint8_t v___x_2518_; 
v___x_2517_ = 58;
v___x_2518_ = lean_uint32_dec_eq(v_c_2505_, v___x_2517_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; 
lean_dec_ref_known(v_it_x27_2507_, 2);
v___x_2519_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_2495_);
v_pos_2497_ = v_a_2488_;
v_snd_2498_ = v_snd_2495_;
v_err_2499_ = v___x_2519_;
goto v___jp_2496_;
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
v___jp_2520_:
{
uint32_t v___x_2521_; uint8_t v___x_2522_; 
v___x_2521_ = 48;
v___x_2522_ = lean_uint32_dec_le(v___x_2521_, v_c_2505_);
if (v___x_2522_ == 0)
{
goto v___jp_2508_;
}
else
{
uint32_t v___x_2523_; uint8_t v___x_2524_; 
v___x_2523_ = 57;
v___x_2524_ = lean_uint32_dec_le(v_c_2505_, v___x_2523_);
if (v___x_2524_ == 0)
{
goto v___jp_2508_;
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
}
v___jp_2525_:
{
uint32_t v___x_2526_; uint8_t v___x_2527_; 
v___x_2526_ = 97;
v___x_2527_ = lean_uint32_dec_le(v___x_2526_, v_c_2505_);
if (v___x_2527_ == 0)
{
goto v___jp_2520_;
}
else
{
uint32_t v___x_2528_; uint8_t v___x_2529_; 
v___x_2528_ = 122;
v___x_2529_ = lean_uint32_dec_le(v_c_2505_, v___x_2528_);
if (v___x_2529_ == 0)
{
goto v___jp_2520_;
}
else
{
lean_dec(v_snd_2495_);
lean_dec_ref(v_a_2488_);
v_pos_2490_ = v_it_x27_2507_;
v_res_2491_ = v_c_2505_;
goto v___jp_2489_;
}
}
}
}
else
{
lean_object* v___x_2534_; 
v___x_2534_ = lean_box(0);
lean_inc(v_snd_2495_);
v_pos_2497_ = v_a_2488_;
v_snd_2498_ = v_snd_2495_;
v_err_2499_ = v___x_2534_;
goto v___jp_2496_;
}
v___jp_2489_:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = lean_string_push(v_acc_2487_, v_res_2491_);
v___x_2493_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(v___x_2492_, v_pos_2490_);
return v___x_2493_;
}
v___jp_2496_:
{
uint8_t v_decide_2500_; 
v_decide_2500_ = lean_nat_dec_eq(v_snd_2495_, v_snd_2498_);
lean_dec(v_snd_2498_);
lean_dec(v_snd_2495_);
if (v_decide_2500_ == 0)
{
lean_object* v___x_2501_; 
lean_dec_ref(v_acc_2487_);
lean_inc(v_err_2499_);
v___x_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2501_, 0, v_pos_2497_);
lean_ctor_set(v___x_2501_, 1, v_err_2499_);
return v___x_2501_;
}
else
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v_pos_2497_);
lean_ctor_set(v___x_2502_, 1, v_acc_2487_);
return v___x_2502_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(lean_object* v_a_2535_){
_start:
{
lean_object* v_fst_2536_; lean_object* v_snd_2537_; lean_object* v___x_2538_; uint8_t v_decide_2539_; 
v_fst_2536_ = lean_ctor_get(v_a_2535_, 0);
v_snd_2537_ = lean_ctor_get(v_a_2535_, 1);
v___x_2538_ = lean_string_utf8_byte_size(v_fst_2536_);
v_decide_2539_ = lean_nat_dec_eq(v_snd_2537_, v___x_2538_);
if (v_decide_2539_ == 0)
{
uint32_t v_c_2540_; lean_object* v___x_2541_; uint32_t v___x_2570_; uint8_t v___x_2571_; 
v_c_2540_ = lean_string_utf8_get_fast(v_fst_2536_, v_snd_2537_);
v___x_2541_ = lean_string_utf8_next_fast(v_fst_2536_, v_snd_2537_);
v___x_2570_ = 65;
v___x_2571_ = lean_uint32_dec_le(v___x_2570_, v_c_2540_);
if (v___x_2571_ == 0)
{
goto v___jp_2565_;
}
else
{
uint32_t v___x_2572_; uint8_t v___x_2573_; 
v___x_2572_ = 90;
v___x_2573_ = lean_uint32_dec_le(v_c_2540_, v___x_2572_);
if (v___x_2573_ == 0)
{
goto v___jp_2565_;
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
v___jp_2542_:
{
lean_object* v_it_x27_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_it_x27_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2543_, 0, v_fst_2536_);
lean_ctor_set(v_it_x27_2543_, 1, v___x_2541_);
v___x_2544_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_2545_ = lean_string_push(v___x_2544_, v_c_2540_);
v___x_2546_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(v___x_2545_, v_it_x27_2543_);
return v___x_2546_;
}
v___jp_2547_:
{
uint32_t v___x_2548_; uint8_t v___x_2549_; 
v___x_2548_ = 95;
v___x_2549_ = lean_uint32_dec_eq(v_c_2540_, v___x_2548_);
if (v___x_2549_ == 0)
{
uint32_t v___x_2550_; uint8_t v___x_2551_; 
v___x_2550_ = 45;
v___x_2551_ = lean_uint32_dec_eq(v_c_2540_, v___x_2550_);
if (v___x_2551_ == 0)
{
uint32_t v___x_2552_; uint8_t v___x_2553_; 
v___x_2552_ = 43;
v___x_2553_ = lean_uint32_dec_eq(v_c_2540_, v___x_2552_);
if (v___x_2553_ == 0)
{
uint32_t v___x_2554_; uint8_t v___x_2555_; 
v___x_2554_ = 47;
v___x_2555_ = lean_uint32_dec_eq(v_c_2540_, v___x_2554_);
if (v___x_2555_ == 0)
{
uint32_t v___x_2556_; uint8_t v___x_2557_; 
v___x_2556_ = 58;
v___x_2557_ = lean_uint32_dec_eq(v_c_2540_, v___x_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_2559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2535_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
return v___x_2559_;
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
v___jp_2560_:
{
uint32_t v___x_2561_; uint8_t v___x_2562_; 
v___x_2561_ = 48;
v___x_2562_ = lean_uint32_dec_le(v___x_2561_, v_c_2540_);
if (v___x_2562_ == 0)
{
goto v___jp_2547_;
}
else
{
uint32_t v___x_2563_; uint8_t v___x_2564_; 
v___x_2563_ = 57;
v___x_2564_ = lean_uint32_dec_le(v_c_2540_, v___x_2563_);
if (v___x_2564_ == 0)
{
goto v___jp_2547_;
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
}
v___jp_2565_:
{
uint32_t v___x_2566_; uint8_t v___x_2567_; 
v___x_2566_ = 97;
v___x_2567_ = lean_uint32_dec_le(v___x_2566_, v_c_2540_);
if (v___x_2567_ == 0)
{
goto v___jp_2560_;
}
else
{
uint32_t v___x_2568_; uint8_t v___x_2569_; 
v___x_2568_ = 122;
v___x_2569_ = lean_uint32_dec_le(v_c_2540_, v___x_2568_);
if (v___x_2569_ == 0)
{
goto v___jp_2560_;
}
else
{
lean_inc(v_fst_2536_);
lean_dec_ref(v_a_2535_);
goto v___jp_2542_;
}
}
}
}
else
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = lean_box(0);
v___x_2575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2575_, 0, v_a_2535_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
return v___x_2575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseZoneId(lean_object* v_a_2576_){
_start:
{
lean_object* v___x_2577_; lean_object* v_name_2578_; lean_object* v___x_2579_; 
v___x_2577_ = l_Std_Time_TimeZone_GMT;
v_name_2578_ = lean_ctor_get(v___x_2577_, 1);
lean_inc_ref(v_a_2576_);
lean_inc_ref(v_name_2578_);
v___x_2579_ = l_Std_Internal_Parsec_String_pstring(v_name_2578_, v_a_2576_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_dec_ref(v_a_2576_);
return v___x_2579_;
}
else
{
lean_object* v_pos_2580_; lean_object* v_snd_2581_; lean_object* v_snd_2582_; uint8_t v_decide_2583_; 
v_pos_2580_ = lean_ctor_get(v___x_2579_, 0);
v_snd_2581_ = lean_ctor_get(v_a_2576_, 1);
lean_inc(v_snd_2581_);
lean_dec_ref(v_a_2576_);
v_snd_2582_ = lean_ctor_get(v_pos_2580_, 1);
v_decide_2583_ = lean_nat_dec_eq(v_snd_2581_, v_snd_2582_);
lean_dec(v_snd_2581_);
if (v_decide_2583_ == 0)
{
return v___x_2579_;
}
else
{
lean_object* v___x_2584_; 
lean_inc(v_pos_2580_);
lean_dec_ref_known(v___x_2579_, 2);
v___x_2584_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(v_pos_2580_);
return v___x_2584_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(lean_object* v_n_2587_, lean_object* v_m_2588_, lean_object* v_parser_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = lean_apply_1(v_parser_2589_, v_a_2590_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_pos_2592_; lean_object* v_res_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2613_; 
v_pos_2592_ = lean_ctor_get(v___x_2591_, 0);
v_res_2593_ = lean_ctor_get(v___x_2591_, 1);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2595_ = v___x_2591_;
v_isShared_2596_ = v_isSharedCheck_2613_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_res_2593_);
lean_inc(v_pos_2592_);
lean_dec(v___x_2591_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2613_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
uint8_t v___x_2609_; 
v___x_2609_ = lean_nat_dec_le(v_n_2587_, v_res_2593_);
if (v___x_2609_ == 0)
{
lean_dec(v_res_2593_);
goto v___jp_2597_;
}
else
{
uint8_t v___x_2610_; 
v___x_2610_ = lean_nat_dec_le(v_res_2593_, v_m_2588_);
if (v___x_2610_ == 0)
{
lean_dec(v_res_2593_);
goto v___jp_2597_;
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_del_object(v___x_2595_);
lean_dec(v_m_2588_);
lean_dec(v_n_2587_);
v___x_2611_ = lean_nat_to_int(v_res_2593_);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v_pos_2592_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
return v___x_2612_;
}
}
v___jp_2597_:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2607_; 
v___x_2598_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0));
v___x_2599_ = l_Nat_reprFast(v_n_2587_);
v___x_2600_ = lean_string_append(v___x_2598_, v___x_2599_);
lean_dec_ref(v___x_2599_);
v___x_2601_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1));
v___x_2602_ = lean_string_append(v___x_2600_, v___x_2601_);
v___x_2603_ = l_Nat_reprFast(v_m_2588_);
v___x_2604_ = lean_string_append(v___x_2602_, v___x_2603_);
lean_dec_ref(v___x_2603_);
v___x_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
if (v_isShared_2596_ == 0)
{
lean_ctor_set_tag(v___x_2595_, 1);
lean_ctor_set(v___x_2595_, 1, v___x_2605_);
v___x_2607_ = v___x_2595_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_pos_2592_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v___x_2605_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
}
else
{
lean_object* v_pos_2614_; lean_object* v_err_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v_m_2588_);
lean_dec(v_n_2587_);
v_pos_2614_ = lean_ctor_get(v___x_2591_, 0);
v_err_2615_ = lean_ctor_get(v___x_2591_, 1);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2591_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_err_2615_);
lean_inc(v_pos_2614_);
lean_dec(v___x_2591_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_pos_2614_);
lean_ctor_set(v_reuseFailAlloc_2621_, 1, v_err_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(lean_object* v_a_2623_){
_start:
{
lean_object* v_fst_2627_; lean_object* v_snd_2628_; lean_object* v___x_2629_; uint8_t v_decide_2630_; 
v_fst_2627_ = lean_ctor_get(v_a_2623_, 0);
v_snd_2628_ = lean_ctor_get(v_a_2623_, 1);
v___x_2629_ = lean_string_utf8_byte_size(v_fst_2627_);
v_decide_2630_ = lean_nat_dec_eq(v_snd_2628_, v___x_2629_);
if (v_decide_2630_ == 0)
{
uint32_t v_c_2631_; uint32_t v___x_2632_; uint8_t v___x_2633_; 
v_c_2631_ = lean_string_utf8_get_fast(v_fst_2627_, v_snd_2628_);
v___x_2632_ = 48;
v___x_2633_ = lean_uint32_dec_le(v___x_2632_, v_c_2631_);
if (v___x_2633_ == 0)
{
goto v___jp_2624_;
}
else
{
uint32_t v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = 57;
v___x_2635_ = lean_uint32_dec_le(v_c_2631_, v___x_2634_);
if (v___x_2635_ == 0)
{
goto v___jp_2624_;
}
else
{
lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2671_; 
lean_inc(v_snd_2628_);
lean_inc(v_fst_2627_);
v_isSharedCheck_2671_ = !lean_is_exclusive(v_a_2623_);
if (v_isSharedCheck_2671_ == 0)
{
lean_object* v_unused_2672_; lean_object* v_unused_2673_; 
v_unused_2672_ = lean_ctor_get(v_a_2623_, 1);
lean_dec(v_unused_2672_);
v_unused_2673_ = lean_ctor_get(v_a_2623_, 0);
lean_dec(v_unused_2673_);
v___x_2637_ = v_a_2623_;
v_isShared_2638_ = v_isSharedCheck_2671_;
goto v_resetjp_2636_;
}
else
{
lean_dec(v_a_2623_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2671_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v_pos_2641_; lean_object* v_snd_2642_; lean_object* v_err_2643_; lean_object* v_it_x27_2651_; 
v___x_2639_ = lean_string_utf8_next_fast(v_fst_2627_, v_snd_2628_);
lean_dec(v_snd_2628_);
lean_inc(v_fst_2627_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 1, v___x_2639_);
v_it_x27_2651_ = v___x_2637_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_fst_2627_);
lean_ctor_set(v_reuseFailAlloc_2670_, 1, v___x_2639_);
v_it_x27_2651_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2650_;
}
v___jp_2640_:
{
uint8_t v_decide_2644_; 
v_decide_2644_ = lean_nat_dec_eq(v___x_2639_, v_snd_2642_);
lean_dec(v_snd_2642_);
if (v_decide_2644_ == 0)
{
lean_object* v___x_2645_; 
lean_inc(v_err_2643_);
v___x_2645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2645_, 0, v_pos_2641_);
lean_ctor_set(v___x_2645_, 1, v_err_2643_);
return v___x_2645_;
}
else
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2646_ = lean_uint32_to_nat(v_c_2631_);
v___x_2647_ = lean_unsigned_to_nat(48u);
v___x_2648_ = lean_nat_sub(v___x_2646_, v___x_2647_);
lean_dec(v___x_2646_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v_pos_2641_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
return v___x_2649_;
}
}
v_reusejp_2650_:
{
uint8_t v_decide_2654_; 
v_decide_2654_ = lean_nat_dec_eq(v___x_2639_, v___x_2629_);
if (v_decide_2654_ == 0)
{
uint32_t v___x_2655_; uint8_t v___x_2656_; 
v___x_2655_ = lean_string_utf8_get_fast(v_fst_2627_, v___x_2639_);
v___x_2656_ = lean_uint32_dec_le(v___x_2632_, v___x_2655_);
if (v___x_2656_ == 0)
{
lean_dec(v_fst_2627_);
goto v___jp_2652_;
}
else
{
uint8_t v___x_2657_; 
v___x_2657_ = lean_uint32_dec_le(v___x_2655_, v___x_2634_);
if (v___x_2657_ == 0)
{
lean_dec(v_fst_2627_);
goto v___jp_2652_;
}
else
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
lean_dec_ref(v_it_x27_2651_);
v___x_2658_ = lean_unsigned_to_nat(48u);
v___x_2659_ = lean_string_utf8_next_fast(v_fst_2627_, v___x_2639_);
v___x_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2660_, 0, v_fst_2627_);
lean_ctor_set(v___x_2660_, 1, v___x_2659_);
v___x_2661_ = lean_uint32_to_nat(v_c_2631_);
v___x_2662_ = lean_nat_sub(v___x_2661_, v___x_2658_);
lean_dec(v___x_2661_);
v___x_2663_ = lean_unsigned_to_nat(10u);
v___x_2664_ = lean_nat_mul(v___x_2662_, v___x_2663_);
lean_dec(v___x_2662_);
v___x_2665_ = lean_uint32_to_nat(v___x_2655_);
v___x_2666_ = lean_nat_sub(v___x_2665_, v___x_2658_);
lean_dec(v___x_2665_);
v___x_2667_ = lean_nat_add(v___x_2664_, v___x_2666_);
lean_dec(v___x_2666_);
lean_dec(v___x_2664_);
v___x_2668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2660_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
return v___x_2668_;
}
}
}
else
{
lean_object* v___x_2669_; 
lean_dec(v_fst_2627_);
v___x_2669_ = lean_box(0);
v_pos_2641_ = v_it_x27_2651_;
v_snd_2642_ = v___x_2639_;
v_err_2643_ = v___x_2669_;
goto v___jp_2640_;
}
v___jp_2652_:
{
lean_object* v___x_2653_; 
v___x_2653_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v_pos_2641_ = v_it_x27_2651_;
v_snd_2642_ = v___x_2639_;
v_err_2643_ = v___x_2653_;
goto v___jp_2640_;
}
}
}
}
}
}
else
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2674_ = lean_box(0);
v___x_2675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2675_, 0, v_a_2623_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
return v___x_2675_;
}
v___jp_2624_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_2626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2626_, 0, v_a_2623_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
return v___x_2626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(uint8_t v_x_2676_){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = lean_box(v_x_2676_);
v___x_2678_ = lean_obj_tag_nat(v___x_2677_);
lean_dec(v___x_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl___boxed(lean_object* v_x_2679_){
_start:
{
uint8_t v_x_4__boxed_2680_; lean_object* v_res_2681_; 
v_x_4__boxed_2680_ = lean_unbox(v_x_2679_);
v_res_2681_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(v_x_4__boxed_2680_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(lean_object* v_k_2682_){
_start:
{
lean_inc(v_k_2682_);
return v_k_2682_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg___boxed(lean_object* v_k_2683_){
_start:
{
lean_object* v_res_2684_; 
v_res_2684_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(v_k_2683_);
lean_dec(v_k_2683_);
return v_res_2684_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(lean_object* v_motive_2685_, lean_object* v_ctorIdx_2686_, uint8_t v_t_2687_, lean_object* v_h_2688_, lean_object* v_k_2689_){
_start:
{
lean_inc(v_k_2689_);
return v_k_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___boxed(lean_object* v_motive_2690_, lean_object* v_ctorIdx_2691_, lean_object* v_t_2692_, lean_object* v_h_2693_, lean_object* v_k_2694_){
_start:
{
uint8_t v_t_boxed_2695_; lean_object* v_res_2696_; 
v_t_boxed_2695_ = lean_unbox(v_t_2692_);
v_res_2696_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(v_motive_2690_, v_ctorIdx_2691_, v_t_boxed_2695_, v_h_2693_, v_k_2694_);
lean_dec(v_k_2694_);
lean_dec(v_ctorIdx_2691_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(lean_object* v_yes_2697_){
_start:
{
lean_inc(v_yes_2697_);
return v_yes_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg___boxed(lean_object* v_yes_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(v_yes_2698_);
lean_dec(v_yes_2698_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(lean_object* v_motive_2700_, uint8_t v_t_2701_, lean_object* v_h_2702_, lean_object* v_yes_2703_){
_start:
{
lean_inc(v_yes_2703_);
return v_yes_2703_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___boxed(lean_object* v_motive_2704_, lean_object* v_t_2705_, lean_object* v_h_2706_, lean_object* v_yes_2707_){
_start:
{
uint8_t v_t_boxed_2708_; lean_object* v_res_2709_; 
v_t_boxed_2708_ = lean_unbox(v_t_2705_);
v_res_2709_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(v_motive_2704_, v_t_boxed_2708_, v_h_2706_, v_yes_2707_);
lean_dec(v_yes_2707_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(lean_object* v_no_2710_){
_start:
{
lean_inc(v_no_2710_);
return v_no_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg___boxed(lean_object* v_no_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(v_no_2711_);
lean_dec(v_no_2711_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(lean_object* v_motive_2713_, uint8_t v_t_2714_, lean_object* v_h_2715_, lean_object* v_no_2716_){
_start:
{
lean_inc(v_no_2716_);
return v_no_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___boxed(lean_object* v_motive_2717_, lean_object* v_t_2718_, lean_object* v_h_2719_, lean_object* v_no_2720_){
_start:
{
uint8_t v_t_boxed_2721_; lean_object* v_res_2722_; 
v_t_boxed_2721_ = lean_unbox(v_t_2718_);
v_res_2722_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(v_motive_2717_, v_t_boxed_2721_, v_h_2719_, v_no_2720_);
lean_dec(v_no_2720_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(lean_object* v_optional_2723_){
_start:
{
lean_inc(v_optional_2723_);
return v_optional_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg___boxed(lean_object* v_optional_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(v_optional_2724_);
lean_dec(v_optional_2724_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(lean_object* v_motive_2726_, uint8_t v_t_2727_, lean_object* v_h_2728_, lean_object* v_optional_2729_){
_start:
{
lean_inc(v_optional_2729_);
return v_optional_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___boxed(lean_object* v_motive_2730_, lean_object* v_t_2731_, lean_object* v_h_2732_, lean_object* v_optional_2733_){
_start:
{
uint8_t v_t_boxed_2734_; lean_object* v_res_2735_; 
v_t_boxed_2734_ = lean_unbox(v_t_2731_);
v_res_2735_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(v_motive_2730_, v_t_boxed_2734_, v_h_2732_, v_optional_2733_);
lean_dec(v_optional_2733_);
return v_res_2735_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = 58;
v___x_2740_ = lean_box_uint32(v___x_2739_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(uint8_t v_withColon_2741_, lean_object* v___y_2742_){
_start:
{
if (v_withColon_2741_ == 0)
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
v___x_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___y_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
return v___x_2744_;
}
else
{
lean_object* v_fst_2745_; lean_object* v_snd_2746_; lean_object* v___x_2747_; uint8_t v_decide_2748_; 
v_fst_2745_ = lean_ctor_get(v___y_2742_, 0);
v_snd_2746_ = lean_ctor_get(v___y_2742_, 1);
v___x_2747_ = lean_string_utf8_byte_size(v_fst_2745_);
v_decide_2748_ = lean_nat_dec_eq(v_snd_2746_, v___x_2747_);
if (v_decide_2748_ == 0)
{
uint32_t v___x_2749_; uint32_t v_c_2750_; uint8_t v___x_2751_; 
v___x_2749_ = 58;
v_c_2750_ = lean_string_utf8_get_fast(v_fst_2745_, v_snd_2746_);
v___x_2751_ = lean_uint32_dec_eq(v_c_2750_, v___x_2749_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1));
v___x_2753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___y_2742_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
return v___x_2753_;
}
else
{
lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2763_; 
lean_inc(v_snd_2746_);
lean_inc(v_fst_2745_);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___y_2742_);
if (v_isSharedCheck_2763_ == 0)
{
lean_object* v_unused_2764_; lean_object* v_unused_2765_; 
v_unused_2764_ = lean_ctor_get(v___y_2742_, 1);
lean_dec(v_unused_2764_);
v_unused_2765_ = lean_ctor_get(v___y_2742_, 0);
lean_dec(v_unused_2765_);
v___x_2755_ = v___y_2742_;
v_isShared_2756_ = v_isSharedCheck_2763_;
goto v_resetjp_2754_;
}
else
{
lean_dec(v___y_2742_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2763_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v_it_x27_2759_; 
v___x_2757_ = lean_string_utf8_next_fast(v_fst_2745_, v_snd_2746_);
lean_dec(v_snd_2746_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 1, v___x_2757_);
v_it_x27_2759_ = v___x_2755_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_fst_2745_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v___x_2757_);
v_it_x27_2759_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
v___x_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2761_, 0, v_it_x27_2759_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
return v___x_2761_;
}
}
}
}
else
{
lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2766_ = lean_box(0);
v___x_2767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___y_2742_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
return v___x_2767_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed(lean_object* v_withColon_2768_, lean_object* v___y_2769_){
_start:
{
uint8_t v_withColon_boxed_2770_; lean_object* v_res_2771_; 
v_withColon_boxed_2770_ = lean_unbox(v_withColon_2768_);
v_res_2771_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(v_withColon_boxed_2770_, v___y_2769_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1(lean_object* v_a_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2774_ = lean_nat_to_int(v_a_2772_);
v___x_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___y_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(lean_object* v___y_2776_, lean_object* v___f_2777_, lean_object* v_n_2778_, uint8_t v_reason_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v_pos_2782_; lean_object* v_err_2783_; 
switch(v_reason_2779_)
{
case 0:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_apply_1(v___y_2776_, v___y_2780_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_pos_2800_; lean_object* v___x_2801_; 
v_pos_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_pos_2800_);
lean_dec_ref_known(v___x_2799_, 2);
v___x_2801_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_2800_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_pos_2802_; lean_object* v_res_2803_; lean_object* v___x_2804_; 
v_pos_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_pos_2802_);
v_res_2803_ = lean_ctor_get(v___x_2801_, 1);
lean_inc(v_res_2803_);
lean_dec_ref_known(v___x_2801_, 2);
v___x_2804_ = lean_apply_2(v___f_2777_, v_res_2803_, v_pos_2802_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_pos_2805_; lean_object* v_res_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2814_; 
v_pos_2805_ = lean_ctor_get(v___x_2804_, 0);
v_res_2806_ = lean_ctor_get(v___x_2804_, 1);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2808_ = v___x_2804_;
v_isShared_2809_ = v_isSharedCheck_2814_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_res_2806_);
lean_inc(v_pos_2805_);
lean_dec(v___x_2804_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2814_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2810_, 0, v_res_2806_);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 1, v___x_2810_);
v___x_2812_ = v___x_2808_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_pos_2805_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v___x_2810_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
else
{
lean_object* v_pos_2815_; lean_object* v_err_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
v_pos_2815_ = lean_ctor_get(v___x_2804_, 0);
v_err_2816_ = lean_ctor_get(v___x_2804_, 1);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2818_ = v___x_2804_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_err_2816_);
lean_inc(v_pos_2815_);
lean_dec(v___x_2804_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2821_; 
if (v_isShared_2819_ == 0)
{
v___x_2821_ = v___x_2818_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_pos_2815_);
lean_ctor_set(v_reuseFailAlloc_2822_, 1, v_err_2816_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
}
else
{
lean_object* v_pos_2824_; lean_object* v_err_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec_ref(v___f_2777_);
v_pos_2824_ = lean_ctor_get(v___x_2801_, 0);
v_err_2825_ = lean_ctor_get(v___x_2801_, 1);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2801_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_err_2825_);
lean_inc(v_pos_2824_);
lean_dec(v___x_2801_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_pos_2824_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_err_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_pos_2833_; lean_object* v_err_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v___f_2777_);
v_pos_2833_ = lean_ctor_get(v___x_2799_, 0);
v_err_2834_ = lean_ctor_get(v___x_2799_, 1);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2799_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_err_2834_);
lean_inc(v_pos_2833_);
lean_dec(v___x_2799_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_pos_2833_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v_err_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
case 1:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
lean_dec_ref(v___f_2777_);
lean_dec_ref(v___y_2776_);
v___x_2842_ = lean_box(0);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___y_2780_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
return v___x_2843_;
}
default: 
{
lean_object* v___x_2844_; 
lean_inc_ref(v___y_2780_);
v___x_2844_ = lean_apply_1(v___y_2776_, v___y_2780_);
if (lean_obj_tag(v___x_2844_) == 0)
{
lean_object* v_pos_2845_; lean_object* v___x_2846_; 
v_pos_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_pos_2845_);
lean_dec_ref_known(v___x_2844_, 2);
v___x_2846_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_2845_);
if (lean_obj_tag(v___x_2846_) == 0)
{
lean_object* v_pos_2847_; lean_object* v_res_2848_; lean_object* v___x_2849_; 
v_pos_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_pos_2847_);
v_res_2848_ = lean_ctor_get(v___x_2846_, 1);
lean_inc(v_res_2848_);
lean_dec_ref_known(v___x_2846_, 2);
v___x_2849_ = lean_apply_2(v___f_2777_, v_res_2848_, v_pos_2847_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_pos_2850_; lean_object* v_res_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2859_; 
lean_dec_ref(v___y_2780_);
v_pos_2850_ = lean_ctor_get(v___x_2849_, 0);
v_res_2851_ = lean_ctor_get(v___x_2849_, 1);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2853_ = v___x_2849_;
v_isShared_2854_ = v_isSharedCheck_2859_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_res_2851_);
lean_inc(v_pos_2850_);
lean_dec(v___x_2849_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2859_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2855_; lean_object* v___x_2857_; 
v___x_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2855_, 0, v_res_2851_);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 1, v___x_2855_);
v___x_2857_ = v___x_2853_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_pos_2850_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v___x_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
else
{
lean_object* v_pos_2860_; lean_object* v_err_2861_; 
v_pos_2860_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_pos_2860_);
v_err_2861_ = lean_ctor_get(v___x_2849_, 1);
lean_inc(v_err_2861_);
lean_dec_ref_known(v___x_2849_, 2);
v_pos_2782_ = v_pos_2860_;
v_err_2783_ = v_err_2861_;
goto v___jp_2781_;
}
}
else
{
lean_object* v_pos_2862_; lean_object* v_err_2863_; 
lean_dec_ref(v___f_2777_);
v_pos_2862_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_pos_2862_);
v_err_2863_ = lean_ctor_get(v___x_2846_, 1);
lean_inc(v_err_2863_);
lean_dec_ref_known(v___x_2846_, 2);
v_pos_2782_ = v_pos_2862_;
v_err_2783_ = v_err_2863_;
goto v___jp_2781_;
}
}
else
{
lean_object* v_pos_2864_; lean_object* v_err_2865_; 
lean_dec_ref(v___f_2777_);
v_pos_2864_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_pos_2864_);
v_err_2865_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_err_2865_);
lean_dec_ref_known(v___x_2844_, 2);
v_pos_2782_ = v_pos_2864_;
v_err_2783_ = v_err_2865_;
goto v___jp_2781_;
}
}
}
v___jp_2781_:
{
lean_object* v_snd_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2797_; 
v_snd_2784_ = lean_ctor_get(v___y_2780_, 1);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___y_2780_);
if (v_isSharedCheck_2797_ == 0)
{
lean_object* v_unused_2798_; 
v_unused_2798_ = lean_ctor_get(v___y_2780_, 0);
lean_dec(v_unused_2798_);
v___x_2786_ = v___y_2780_;
v_isShared_2787_ = v_isSharedCheck_2797_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_snd_2784_);
lean_dec(v___y_2780_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2797_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v_snd_2788_; uint8_t v_decide_2789_; 
v_snd_2788_ = lean_ctor_get(v_pos_2782_, 1);
v_decide_2789_ = lean_nat_dec_eq(v_snd_2784_, v_snd_2788_);
lean_dec(v_snd_2784_);
if (v_decide_2789_ == 0)
{
lean_object* v___x_2791_; 
if (v_isShared_2787_ == 0)
{
lean_ctor_set_tag(v___x_2786_, 1);
lean_ctor_set(v___x_2786_, 1, v_err_2783_);
lean_ctor_set(v___x_2786_, 0, v_pos_2782_);
v___x_2791_ = v___x_2786_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_pos_2782_);
lean_ctor_set(v_reuseFailAlloc_2792_, 1, v_err_2783_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
else
{
lean_object* v___x_2793_; lean_object* v___x_2795_; 
lean_dec(v_err_2783_);
v___x_2793_ = lean_box(0);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 1, v___x_2793_);
lean_ctor_set(v___x_2786_, 0, v_pos_2782_);
v___x_2795_ = v___x_2786_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_pos_2782_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2___boxed(lean_object* v___y_2866_, lean_object* v___f_2867_, lean_object* v_n_2868_, lean_object* v_reason_2869_, lean_object* v___y_2870_){
_start:
{
uint8_t v_reason_boxed_2871_; lean_object* v_res_2872_; 
v_reason_boxed_2871_ = lean_unbox(v_reason_2869_);
v_res_2872_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_2866_, v___f_2867_, v_n_2868_, v_reason_boxed_2871_, v___y_2870_);
lean_dec_ref(v_n_2868_);
return v_res_2872_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = lean_unsigned_to_nat(3600u);
v___x_2876_ = lean_nat_to_int(v___x_2875_);
return v___x_2876_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4(void){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = lean_unsigned_to_nat(1u);
v___x_2879_ = l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_dropSeconds_spec__0(v___x_2878_);
return v___x_2879_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5(void){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2880_ = lean_unsigned_to_nat(59u);
v___x_2881_ = lean_nat_to_int(v___x_2880_);
return v___x_2881_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8(void){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = lean_unsigned_to_nat(23u);
v___x_2885_ = lean_nat_to_int(v___x_2884_);
return v___x_2885_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9(void){
_start:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2886_ = lean_unsigned_to_nat(60u);
v___x_2887_ = l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_dropSeconds_spec__0(v___x_2886_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(uint8_t v_withMinutes_2889_, uint8_t v_withSeconds_2890_, uint8_t v_withColon_2891_, lean_object* v_a_2892_){
_start:
{
lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2904_; lean_object* v___y_2905_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v_fst_2934_; lean_object* v_snd_2935_; lean_object* v___x_2936_; lean_object* v___y_2937_; lean_object* v___f_2938_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v_pos_2985_; lean_object* v_res_2986_; lean_object* v_pos_3044_; lean_object* v_fst_3045_; lean_object* v_snd_3046_; lean_object* v_err_3047_; lean_object* v___x_3062_; uint8_t v_decide_3063_; 
v_fst_2934_ = lean_ctor_get(v_a_2892_, 0);
lean_inc(v_fst_2934_);
v_snd_2935_ = lean_ctor_get(v_a_2892_, 1);
lean_inc(v_snd_2935_);
v___x_2936_ = lean_box(v_withColon_2891_);
v___y_2937_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed), 2, 1);
lean_closure_set(v___y_2937_, 0, v___x_2936_);
v___f_2938_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3));
v___x_3062_ = lean_string_utf8_byte_size(v_fst_2934_);
v_decide_3063_ = lean_nat_dec_eq(v_snd_2935_, v___x_3062_);
if (v_decide_3063_ == 0)
{
uint32_t v___x_3064_; uint32_t v_c_3065_; uint8_t v___x_3066_; 
v___x_3064_ = 43;
v_c_3065_ = lean_string_utf8_get_fast(v_fst_2934_, v_snd_2935_);
v___x_3066_ = lean_uint32_dec_eq(v_c_3065_, v___x_3064_);
if (v___x_3066_ == 0)
{
lean_object* v___x_3067_; 
v___x_3067_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__5));
lean_inc(v_snd_2935_);
v_pos_3044_ = v_a_2892_;
v_fst_3045_ = v_fst_2934_;
v_snd_3046_ = v_snd_2935_;
v_err_3047_ = v___x_3067_;
goto v___jp_3043_;
}
else
{
lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3076_; 
v_isSharedCheck_3076_ = !lean_is_exclusive(v_a_2892_);
if (v_isSharedCheck_3076_ == 0)
{
lean_object* v_unused_3077_; lean_object* v_unused_3078_; 
v_unused_3077_ = lean_ctor_get(v_a_2892_, 1);
lean_dec(v_unused_3077_);
v_unused_3078_ = lean_ctor_get(v_a_2892_, 0);
lean_dec(v_unused_3078_);
v___x_3069_ = v_a_2892_;
v_isShared_3070_ = v_isSharedCheck_3076_;
goto v_resetjp_3068_;
}
else
{
lean_dec(v_a_2892_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3076_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3071_; lean_object* v_it_x27_3073_; 
v___x_3071_ = lean_string_utf8_next_fast(v_fst_2934_, v_snd_2935_);
lean_dec(v_snd_2935_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 1, v___x_3071_);
v_it_x27_3073_ = v___x_3069_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_fst_2934_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v___x_3071_);
v_it_x27_3073_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v_pos_2985_ = v_it_x27_3073_;
v_res_2986_ = v___x_3074_;
goto v___jp_2984_;
}
}
}
}
else
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_box(0);
lean_inc(v_snd_2935_);
v_pos_3044_ = v_a_2892_;
v_fst_3045_ = v_fst_2934_;
v_snd_3046_ = v_snd_2935_;
v_err_3047_ = v___x_3079_;
goto v___jp_3043_;
}
v___jp_2893_:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2896_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0));
v___x_2897_ = l_Int_repr(v___y_2895_);
lean_dec(v___y_2895_);
v___x_2898_ = lean_string_append(v___x_2896_, v___x_2897_);
lean_dec_ref(v___x_2897_);
v___x_2899_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1));
v___x_2900_ = lean_string_append(v___x_2898_, v___x_2899_);
v___x_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
v___x_2902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2902_, 0, v___y_2894_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
return v___x_2902_;
}
v___jp_2903_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2908_ = lean_int_add(v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec(v___y_2906_);
v___x_2909_ = lean_int_mul(v___x_2908_, v___y_2904_);
lean_dec(v___x_2908_);
v___x_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___y_2905_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
return v___x_2910_;
}
v___jp_2911_:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2919_ = lean_nat_to_int(v___y_2916_);
v___x_2920_ = lean_int_mul(v___y_2918_, v___x_2919_);
lean_dec(v___x_2919_);
lean_dec(v___y_2918_);
v___x_2921_ = lean_int_add(v___y_2914_, v___x_2920_);
lean_dec(v___x_2920_);
lean_dec(v___y_2914_);
if (lean_obj_tag(v___y_2912_) == 0)
{
lean_inc(v___y_2915_);
v___y_2904_ = v___y_2913_;
v___y_2905_ = v___y_2917_;
v___y_2906_ = v___x_2921_;
v___y_2907_ = v___y_2915_;
goto v___jp_2903_;
}
else
{
lean_object* v_val_2922_; 
v_val_2922_ = lean_ctor_get(v___y_2912_, 0);
lean_inc(v_val_2922_);
lean_dec_ref_known(v___y_2912_, 1);
v___y_2904_ = v___y_2913_;
v___y_2905_ = v___y_2917_;
v___y_2906_ = v___x_2921_;
v___y_2907_ = v_val_2922_;
goto v___jp_2903_;
}
}
v___jp_2923_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2);
v___x_2932_ = lean_int_mul(v___y_2924_, v___x_2931_);
lean_dec(v___y_2924_);
if (lean_obj_tag(v___y_2927_) == 0)
{
lean_inc(v___y_2928_);
v___y_2912_ = v___y_2925_;
v___y_2913_ = v___y_2926_;
v___y_2914_ = v___x_2932_;
v___y_2915_ = v___y_2928_;
v___y_2916_ = v___y_2929_;
v___y_2917_ = v___y_2930_;
v___y_2918_ = v___y_2928_;
goto v___jp_2911_;
}
else
{
lean_object* v_val_2933_; 
v_val_2933_ = lean_ctor_get(v___y_2927_, 0);
lean_inc(v_val_2933_);
lean_dec_ref_known(v___y_2927_, 1);
v___y_2912_ = v___y_2925_;
v___y_2913_ = v___y_2926_;
v___y_2914_ = v___x_2932_;
v___y_2915_ = v___y_2928_;
v___y_2916_ = v___y_2929_;
v___y_2917_ = v___y_2930_;
v___y_2918_ = v_val_2933_;
goto v___jp_2911_;
}
}
v___jp_2939_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4);
v___x_2947_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_2937_, v___f_2938_, v___x_2946_, v_withSeconds_2890_, v___y_2945_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_res_2948_; 
v_res_2948_ = lean_ctor_get(v___x_2947_, 1);
lean_inc(v_res_2948_);
if (lean_obj_tag(v_res_2948_) == 1)
{
lean_object* v_pos_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2972_; 
v_pos_2949_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2972_ == 0)
{
lean_object* v_unused_2973_; 
v_unused_2973_ = lean_ctor_get(v___x_2947_, 1);
lean_dec(v_unused_2973_);
v___x_2951_ = v___x_2947_;
v_isShared_2952_ = v_isSharedCheck_2972_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_pos_2949_);
lean_dec(v___x_2947_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2972_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v_val_2953_; lean_object* v___x_2954_; uint8_t v___x_2955_; 
v_val_2953_ = lean_ctor_get(v_res_2948_, 0);
v___x_2954_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_2955_ = lean_int_dec_lt(v___x_2954_, v_val_2953_);
if (v___x_2955_ == 0)
{
lean_del_object(v___x_2951_);
v___y_2924_ = v___y_2940_;
v___y_2925_ = v_res_2948_;
v___y_2926_ = v___y_2941_;
v___y_2927_ = v___y_2943_;
v___y_2928_ = v___y_2942_;
v___y_2929_ = v___y_2944_;
v___y_2930_ = v_pos_2949_;
goto v___jp_2923_;
}
else
{
lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2970_; 
lean_inc(v_val_2953_);
lean_dec(v___y_2944_);
lean_dec(v___y_2943_);
lean_dec(v___y_2940_);
v_isSharedCheck_2970_ = !lean_is_exclusive(v_res_2948_);
if (v_isSharedCheck_2970_ == 0)
{
lean_object* v_unused_2971_; 
v_unused_2971_ = lean_ctor_get(v_res_2948_, 0);
lean_dec(v_unused_2971_);
v___x_2957_ = v_res_2948_;
v_isShared_2958_ = v_isSharedCheck_2970_;
goto v_resetjp_2956_;
}
else
{
lean_dec(v_res_2948_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2970_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2965_; 
v___x_2959_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6));
v___x_2960_ = l_Int_repr(v_val_2953_);
lean_dec(v_val_2953_);
v___x_2961_ = lean_string_append(v___x_2959_, v___x_2960_);
lean_dec_ref(v___x_2960_);
v___x_2962_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7));
v___x_2963_ = lean_string_append(v___x_2961_, v___x_2962_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v___x_2963_);
v___x_2965_ = v___x_2957_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2963_);
v___x_2965_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2967_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set_tag(v___x_2951_, 1);
lean_ctor_set(v___x_2951_, 1, v___x_2965_);
v___x_2967_ = v___x_2951_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_pos_2949_);
lean_ctor_set(v_reuseFailAlloc_2968_, 1, v___x_2965_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
}
}
else
{
lean_object* v_pos_2974_; 
v_pos_2974_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_pos_2974_);
lean_dec_ref_known(v___x_2947_, 2);
v___y_2924_ = v___y_2940_;
v___y_2925_ = v_res_2948_;
v___y_2926_ = v___y_2941_;
v___y_2927_ = v___y_2943_;
v___y_2928_ = v___y_2942_;
v___y_2929_ = v___y_2944_;
v___y_2930_ = v_pos_2974_;
goto v___jp_2923_;
}
}
else
{
lean_object* v_pos_2975_; lean_object* v_err_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2983_; 
lean_dec(v___y_2944_);
lean_dec(v___y_2943_);
lean_dec(v___y_2940_);
v_pos_2975_ = lean_ctor_get(v___x_2947_, 0);
v_err_2976_ = lean_ctor_get(v___x_2947_, 1);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2978_ = v___x_2947_;
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_err_2976_);
lean_inc(v_pos_2975_);
lean_dec(v___x_2947_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_pos_2975_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v_err_2976_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
}
v___jp_2984_:
{
lean_object* v___x_2987_; 
v___x_2987_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_2985_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_pos_2988_; lean_object* v_res_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; 
v_pos_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_pos_2988_);
v_res_2989_ = lean_ctor_get(v___x_2987_, 1);
lean_inc(v_res_2989_);
lean_dec_ref_known(v___x_2987_, 2);
v___x_2990_ = lean_nat_to_int(v_res_2989_);
v___x_2991_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_2992_ = lean_int_dec_lt(v___x_2990_, v___x_2991_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2993_; uint8_t v___x_2994_; 
v___x_2993_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8);
v___x_2994_ = lean_int_dec_lt(v___x_2993_, v___x_2990_);
if (v___x_2994_ == 0)
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2995_ = lean_unsigned_to_nat(60u);
v___x_2996_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9);
lean_inc_ref(v___y_2937_);
v___x_2997_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_2937_, v___f_2938_, v___x_2996_, v_withMinutes_2889_, v_pos_2988_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v_res_2998_; 
v_res_2998_ = lean_ctor_get(v___x_2997_, 1);
lean_inc(v_res_2998_);
if (lean_obj_tag(v_res_2998_) == 1)
{
lean_object* v_pos_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3022_; 
v_pos_2999_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3022_ == 0)
{
lean_object* v_unused_3023_; 
v_unused_3023_ = lean_ctor_get(v___x_2997_, 1);
lean_dec(v_unused_3023_);
v___x_3001_ = v___x_2997_;
v_isShared_3002_ = v_isSharedCheck_3022_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_pos_2999_);
lean_dec(v___x_2997_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3022_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v_val_3003_; lean_object* v___x_3004_; uint8_t v___x_3005_; 
v_val_3003_ = lean_ctor_get(v_res_2998_, 0);
v___x_3004_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_3005_ = lean_int_dec_lt(v___x_3004_, v_val_3003_);
if (v___x_3005_ == 0)
{
lean_del_object(v___x_3001_);
v___y_2940_ = v___x_2990_;
v___y_2941_ = v_res_2986_;
v___y_2942_ = v___x_2991_;
v___y_2943_ = v_res_2998_;
v___y_2944_ = v___x_2995_;
v___y_2945_ = v_pos_2999_;
goto v___jp_2939_;
}
else
{
lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3020_; 
lean_inc(v_val_3003_);
lean_dec(v___x_2990_);
lean_dec_ref(v___y_2937_);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_res_2998_);
if (v_isSharedCheck_3020_ == 0)
{
lean_object* v_unused_3021_; 
v_unused_3021_ = lean_ctor_get(v_res_2998_, 0);
lean_dec(v_unused_3021_);
v___x_3007_ = v_res_2998_;
v_isShared_3008_ = v_isSharedCheck_3020_;
goto v_resetjp_3006_;
}
else
{
lean_dec(v_res_2998_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3020_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3015_; 
v___x_3009_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10));
v___x_3010_ = l_Int_repr(v_val_3003_);
lean_dec(v_val_3003_);
v___x_3011_ = lean_string_append(v___x_3009_, v___x_3010_);
lean_dec_ref(v___x_3010_);
v___x_3012_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7));
v___x_3013_ = lean_string_append(v___x_3011_, v___x_3012_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 0, v___x_3013_);
v___x_3015_ = v___x_3007_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
lean_object* v___x_3017_; 
if (v_isShared_3002_ == 0)
{
lean_ctor_set_tag(v___x_3001_, 1);
lean_ctor_set(v___x_3001_, 1, v___x_3015_);
v___x_3017_ = v___x_3001_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_pos_2999_);
lean_ctor_set(v_reuseFailAlloc_3018_, 1, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3024_; 
v_pos_3024_ = lean_ctor_get(v___x_2997_, 0);
lean_inc(v_pos_3024_);
lean_dec_ref_known(v___x_2997_, 2);
v___y_2940_ = v___x_2990_;
v___y_2941_ = v_res_2986_;
v___y_2942_ = v___x_2991_;
v___y_2943_ = v_res_2998_;
v___y_2944_ = v___x_2995_;
v___y_2945_ = v_pos_3024_;
goto v___jp_2939_;
}
}
else
{
lean_object* v_pos_3025_; lean_object* v_err_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
lean_dec(v___x_2990_);
lean_dec_ref(v___y_2937_);
v_pos_3025_ = lean_ctor_get(v___x_2997_, 0);
v_err_3026_ = lean_ctor_get(v___x_2997_, 1);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_2997_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_err_3026_);
lean_inc(v_pos_3025_);
lean_dec(v___x_2997_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_pos_3025_);
lean_ctor_set(v_reuseFailAlloc_3032_, 1, v_err_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
else
{
lean_dec_ref(v___y_2937_);
v___y_2894_ = v_pos_2988_;
v___y_2895_ = v___x_2990_;
goto v___jp_2893_;
}
}
else
{
lean_dec_ref(v___y_2937_);
v___y_2894_ = v_pos_2988_;
v___y_2895_ = v___x_2990_;
goto v___jp_2893_;
}
}
else
{
lean_object* v_pos_3034_; lean_object* v_err_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
lean_dec_ref(v___y_2937_);
v_pos_3034_ = lean_ctor_get(v___x_2987_, 0);
v_err_3035_ = lean_ctor_get(v___x_2987_, 1);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3037_ = v___x_2987_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_err_3035_);
lean_inc(v_pos_3034_);
lean_dec(v___x_2987_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_pos_3034_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v_err_3035_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
v___jp_3043_:
{
uint8_t v_decide_3048_; 
v_decide_3048_ = lean_nat_dec_eq(v_snd_2935_, v_snd_3046_);
lean_dec(v_snd_2935_);
if (v_decide_3048_ == 0)
{
lean_object* v___x_3049_; 
lean_dec(v_snd_3046_);
lean_dec(v_fst_3045_);
lean_dec_ref(v___y_2937_);
lean_inc(v_err_3047_);
v___x_3049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3049_, 0, v_pos_3044_);
lean_ctor_set(v___x_3049_, 1, v_err_3047_);
return v___x_3049_;
}
else
{
lean_object* v___x_3050_; uint8_t v_decide_3051_; 
v___x_3050_ = lean_string_utf8_byte_size(v_fst_3045_);
v_decide_3051_ = lean_nat_dec_eq(v_snd_3046_, v___x_3050_);
if (v_decide_3051_ == 0)
{
uint32_t v___x_3052_; uint32_t v_c_3053_; uint8_t v___x_3054_; 
v___x_3052_ = 45;
v_c_3053_ = lean_string_utf8_get_fast(v_fst_3045_, v_snd_3046_);
v___x_3054_ = lean_uint32_dec_eq(v_c_3053_, v___x_3052_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
lean_dec(v_snd_3046_);
lean_dec(v_fst_3045_);
lean_dec_ref(v___y_2937_);
v___x_3055_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear___closed__3));
v___x_3056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3056_, 0, v_pos_3044_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
return v___x_3056_;
}
else
{
lean_object* v___x_3057_; lean_object* v_it_x27_3058_; lean_object* v___x_3059_; 
lean_dec_ref(v_pos_3044_);
v___x_3057_ = lean_string_utf8_next_fast(v_fst_3045_, v_snd_3046_);
lean_dec(v_snd_3046_);
v_it_x27_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3058_, 0, v_fst_3045_);
lean_ctor_set(v_it_x27_3058_, 1, v___x_3057_);
v___x_3059_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_monthIndex___closed__0);
v_pos_2985_ = v_it_x27_3058_;
v_res_2986_ = v___x_3059_;
goto v___jp_2984_;
}
}
else
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
lean_dec(v_snd_3046_);
lean_dec(v_fst_3045_);
lean_dec_ref(v___y_2937_);
v___x_3060_ = lean_box(0);
v___x_3061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3061_, 0, v_pos_3044_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
return v___x_3061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___boxed(lean_object* v_withMinutes_3080_, lean_object* v_withSeconds_3081_, lean_object* v_withColon_3082_, lean_object* v_a_3083_){
_start:
{
uint8_t v_withMinutes_boxed_3084_; uint8_t v_withSeconds_boxed_3085_; uint8_t v_withColon_boxed_3086_; lean_object* v_res_3087_; 
v_withMinutes_boxed_3084_ = lean_unbox(v_withMinutes_3080_);
v_withSeconds_boxed_3085_ = lean_unbox(v_withSeconds_3081_);
v_withColon_boxed_3086_ = lean_unbox(v_withColon_3082_);
v_res_3087_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v_withMinutes_boxed_3084_, v_withSeconds_boxed_3085_, v_withColon_boxed_3086_, v_a_3083_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX(uint8_t v_x_3088_, lean_object* v_a_3089_){
_start:
{
lean_object* v___y_3091_; 
switch(v_x_3088_)
{
case 0:
{
uint8_t v___x_3096_; uint8_t v___x_3097_; uint8_t v___x_3098_; lean_object* v___x_3099_; 
v___x_3096_ = 2;
v___x_3097_ = 1;
v___x_3098_ = 0;
v___x_3099_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_3096_, v___x_3097_, v___x_3098_, v_a_3089_);
return v___x_3099_;
}
case 1:
{
uint8_t v___x_3100_; uint8_t v___x_3101_; uint8_t v___x_3102_; lean_object* v___x_3103_; 
v___x_3100_ = 0;
v___x_3101_ = 1;
v___x_3102_ = 0;
v___x_3103_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_3100_, v___x_3101_, v___x_3102_, v_a_3089_);
return v___x_3103_;
}
case 3:
{
uint8_t v___x_3104_; uint8_t v___x_3105_; uint8_t v___x_3106_; lean_object* v___x_3107_; 
v___x_3104_ = 0;
v___x_3105_ = 2;
v___x_3106_ = 0;
v___x_3107_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_3104_, v___x_3105_, v___x_3106_, v_a_3089_);
return v___x_3107_;
}
default: 
{
v___y_3091_ = v_a_3089_;
goto v___jp_3090_;
}
}
v___jp_3090_:
{
uint8_t v___x_3092_; uint8_t v___x_3093_; uint8_t v___x_3094_; lean_object* v___x_3095_; 
v___x_3092_ = 0;
v___x_3093_ = 2;
v___x_3094_ = 1;
v___x_3095_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_3092_, v___x_3093_, v___x_3094_, v___y_3091_);
return v___x_3095_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX___boxed(lean_object* v_x_3108_, lean_object* v_a_3109_){
_start:
{
uint8_t v_x_88__boxed_3110_; lean_object* v_res_3111_; 
v_x_88__boxed_3110_ = lean_unbox(v_x_3108_);
v_res_3111_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX(v_x_88__boxed_3110_, v_a_3109_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset(uint8_t v_minutes_3112_, lean_object* v_a_3113_){
_start:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3114_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatGmtOffset___closed__0));
v___x_3115_ = l_Std_Internal_Parsec_String_pstring(v___x_3114_, v_a_3113_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_pos_3116_; uint8_t v___x_3117_; uint8_t v___x_3118_; lean_object* v___x_3119_; 
v_pos_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc_n(v_pos_3116_, 2);
lean_dec_ref_known(v___x_3115_, 2);
v___x_3117_ = 2;
v___x_3118_ = 1;
v___x_3119_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v_minutes_3112_, v___x_3117_, v___x_3118_, v_pos_3116_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_dec(v_pos_3116_);
return v___x_3119_;
}
else
{
lean_object* v_pos_3120_; lean_object* v_snd_3121_; lean_object* v_snd_3122_; uint8_t v_decide_3123_; 
v_pos_3120_ = lean_ctor_get(v___x_3119_, 0);
v_snd_3121_ = lean_ctor_get(v_pos_3116_, 1);
lean_inc(v_snd_3121_);
lean_dec(v_pos_3116_);
v_snd_3122_ = lean_ctor_get(v_pos_3120_, 1);
v_decide_3123_ = lean_nat_dec_eq(v_snd_3121_, v_snd_3122_);
lean_dec(v_snd_3121_);
if (v_decide_3123_ == 0)
{
return v___x_3119_;
}
else
{
lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3131_; 
lean_inc(v_pos_3120_);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3131_ == 0)
{
lean_object* v_unused_3132_; lean_object* v_unused_3133_; 
v_unused_3132_ = lean_ctor_get(v___x_3119_, 1);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v___x_3119_, 0);
lean_dec(v_unused_3133_);
v___x_3125_ = v___x_3119_;
v_isShared_3126_ = v_isSharedCheck_3131_;
goto v_resetjp_3124_;
}
else
{
lean_dec(v___x_3119_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3131_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3127_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_3126_ == 0)
{
lean_ctor_set_tag(v___x_3125_, 0);
lean_ctor_set(v___x_3125_, 1, v___x_3127_);
v___x_3129_ = v___x_3125_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_pos_3120_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
else
{
lean_object* v_pos_3134_; lean_object* v_err_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3142_; 
v_pos_3134_ = lean_ctor_get(v___x_3115_, 0);
v_err_3135_ = lean_ctor_get(v___x_3115_, 1);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3137_ = v___x_3115_;
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_err_3135_);
lean_inc(v_pos_3134_);
lean_dec(v___x_3115_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3140_; 
if (v_isShared_3138_ == 0)
{
v___x_3140_ = v___x_3137_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_pos_3134_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v_err_3135_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset___boxed(lean_object* v_minutes_3143_, lean_object* v_a_3144_){
_start:
{
uint8_t v_minutes_boxed_3145_; lean_object* v_res_3146_; 
v_minutes_boxed_3145_ = lean_unbox(v_minutes_3143_);
v_res_3146_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset(v_minutes_boxed_3145_, v_a_3144_);
return v_res_3146_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_isNumericModifier(lean_object* v_x_3147_){
_start:
{
switch(lean_obj_tag(v_x_3147_))
{
case 2:
{
uint8_t v___x_3148_; 
v___x_3148_ = 1;
return v___x_3148_;
}
case 1:
{
uint8_t v___x_3149_; 
v___x_3149_ = 1;
return v___x_3149_;
}
case 9:
{
uint8_t v___x_3150_; 
v___x_3150_ = 1;
return v___x_3150_;
}
case 3:
{
uint8_t v___x_3151_; 
v___x_3151_ = 1;
return v___x_3151_;
}
case 6:
{
uint8_t v___x_3152_; 
v___x_3152_ = 1;
return v___x_3152_;
}
case 10:
{
uint8_t v___x_3153_; 
v___x_3153_ = 1;
return v___x_3153_;
}
case 11:
{
uint8_t v___x_3154_; 
v___x_3154_ = 1;
return v___x_3154_;
}
case 15:
{
uint8_t v___x_3155_; 
v___x_3155_ = 1;
return v___x_3155_;
}
case 19:
{
uint8_t v___x_3156_; 
v___x_3156_ = 1;
return v___x_3156_;
}
case 20:
{
uint8_t v___x_3157_; 
v___x_3157_ = 1;
return v___x_3157_;
}
case 21:
{
uint8_t v___x_3158_; 
v___x_3158_ = 1;
return v___x_3158_;
}
case 22:
{
uint8_t v___x_3159_; 
v___x_3159_ = 1;
return v___x_3159_;
}
case 23:
{
uint8_t v___x_3160_; 
v___x_3160_ = 1;
return v___x_3160_;
}
case 24:
{
uint8_t v___x_3161_; 
v___x_3161_ = 1;
return v___x_3161_;
}
case 25:
{
uint8_t v___x_3162_; 
v___x_3162_ = 1;
return v___x_3162_;
}
case 26:
{
uint8_t v___x_3163_; 
v___x_3163_ = 1;
return v___x_3163_;
}
case 27:
{
uint8_t v___x_3164_; 
v___x_3164_ = 1;
return v___x_3164_;
}
case 28:
{
uint8_t v___x_3165_; 
v___x_3165_ = 1;
return v___x_3165_;
}
case 4:
{
lean_object* v_presentation_3166_; 
v_presentation_3166_ = lean_ctor_get(v_x_3147_, 0);
if (lean_obj_tag(v_presentation_3166_) == 0)
{
uint8_t v___x_3167_; 
v___x_3167_ = 1;
return v___x_3167_;
}
else
{
uint8_t v___x_3168_; 
v___x_3168_ = 0;
return v___x_3168_;
}
}
case 5:
{
lean_object* v_presentation_3169_; 
v_presentation_3169_ = lean_ctor_get(v_x_3147_, 0);
if (lean_obj_tag(v_presentation_3169_) == 0)
{
uint8_t v___x_3170_; 
v___x_3170_ = 1;
return v___x_3170_;
}
else
{
uint8_t v___x_3171_; 
v___x_3171_ = 0;
return v___x_3171_;
}
}
case 7:
{
lean_object* v_presentation_3172_; 
v_presentation_3172_ = lean_ctor_get(v_x_3147_, 0);
if (lean_obj_tag(v_presentation_3172_) == 0)
{
uint8_t v___x_3173_; 
v___x_3173_ = 1;
return v___x_3173_;
}
else
{
uint8_t v___x_3174_; 
v___x_3174_ = 0;
return v___x_3174_;
}
}
case 8:
{
lean_object* v_presentation_3175_; 
v_presentation_3175_ = lean_ctor_get(v_x_3147_, 0);
if (lean_obj_tag(v_presentation_3175_) == 0)
{
uint8_t v___x_3176_; 
v___x_3176_ = 1;
return v___x_3176_;
}
else
{
uint8_t v___x_3177_; 
v___x_3177_ = 0;
return v___x_3177_;
}
}
case 13:
{
lean_object* v_presentation_3178_; 
v_presentation_3178_ = lean_ctor_get(v_x_3147_, 0);
if (lean_obj_tag(v_presentation_3178_) == 0)
{
uint8_t v___x_3179_; 
v___x_3179_ = 1;
return v___x_3179_;
}
else
{
uint8_t v___x_3180_; 
v___x_3180_ = 0;
return v___x_3180_;
}
}
case 14:
{
lean_object* v_presentation_3181_; 
v_presentation_3181_ = lean_ctor_get(v_x_3147_, 0);
if (lean_obj_tag(v_presentation_3181_) == 0)
{
uint8_t v___x_3182_; 
v___x_3182_ = 1;
return v___x_3182_;
}
else
{
uint8_t v___x_3183_; 
v___x_3183_ = 0;
return v___x_3183_;
}
}
default: 
{
uint8_t v___x_3184_; 
v___x_3184_ = 0;
return v___x_3184_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_isNumericModifier___boxed(lean_object* v_x_3185_){
_start:
{
uint8_t v_res_3186_; lean_object* v_r_3187_; 
v_res_3186_ = l___private_Std_Time_Format_Basic_0__Std_Time_isNumericModifier(v_x_3185_);
lean_dec_ref(v_x_3185_);
v_r_3187_ = lean_box(v_res_3186_);
return v_r_3187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(lean_object* v_digits_3188_, lean_object* v_p_3189_){
_start:
{
uint8_t v___x_3190_; 
v___x_3190_ = lean_nat_dec_le(v_digits_3188_, v_p_3189_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3191_; 
lean_dec(v_p_3189_);
v___x_3191_ = lean_box(0);
return v___x_3191_;
}
else
{
lean_object* v___x_3192_; 
v___x_3192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3192_, 0, v_p_3189_);
return v___x_3192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering___boxed(lean_object* v_digits_3193_, lean_object* v_p_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v_digits_3193_, v_p_3194_);
lean_dec(v_digits_3193_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits(lean_object* v_x_3202_){
_start:
{
lean_object* v_p_3208_; lean_object* v_p_3212_; 
switch(lean_obj_tag(v_x_3202_))
{
case 2:
{
lean_object* v_presentation_3215_; 
v_presentation_3215_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3215_);
lean_dec_ref_known(v_x_3202_, 1);
switch(lean_obj_tag(v_presentation_3215_))
{
case 1:
{
goto v___jp_3203_;
}
case 2:
{
goto v___jp_3205_;
}
default: 
{
lean_object* v___x_3216_; 
lean_dec(v_presentation_3215_);
v___x_3216_ = lean_box(0);
return v___x_3216_;
}
}
}
case 1:
{
lean_object* v_presentation_3217_; 
v_presentation_3217_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3217_);
lean_dec_ref_known(v_x_3202_, 1);
switch(lean_obj_tag(v_presentation_3217_))
{
case 1:
{
goto v___jp_3203_;
}
case 2:
{
goto v___jp_3205_;
}
default: 
{
lean_object* v___x_3218_; 
lean_dec(v_presentation_3217_);
v___x_3218_ = lean_box(0);
return v___x_3218_;
}
}
}
case 9:
{
lean_object* v_presentation_3219_; 
v_presentation_3219_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3219_);
lean_dec_ref_known(v_x_3202_, 1);
switch(lean_obj_tag(v_presentation_3219_))
{
case 1:
{
goto v___jp_3203_;
}
case 2:
{
goto v___jp_3205_;
}
default: 
{
lean_object* v___x_3220_; 
lean_dec(v_presentation_3219_);
v___x_3220_ = lean_box(0);
return v___x_3220_;
}
}
}
case 25:
{
lean_object* v_presentation_3221_; 
v_presentation_3221_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3221_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3221_) == 0)
{
lean_object* v___x_3222_; 
v___x_3222_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__2));
return v___x_3222_;
}
else
{
lean_object* v_digits_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
v_digits_3223_ = lean_ctor_get(v_presentation_3221_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v_presentation_3221_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v_presentation_3221_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_digits_3223_);
lean_dec(v_presentation_3221_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_digits_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
case 7:
{
lean_object* v_presentation_3231_; 
v_presentation_3231_ = lean_ctor_get(v_x_3202_, 0);
lean_inc_ref(v_presentation_3231_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3231_) == 0)
{
lean_object* v_val_3232_; 
v_val_3232_ = lean_ctor_get(v_presentation_3231_, 0);
lean_inc(v_val_3232_);
lean_dec_ref_known(v_presentation_3231_, 1);
v_p_3208_ = v_val_3232_;
goto v___jp_3207_;
}
else
{
lean_object* v___x_3233_; 
lean_dec_ref(v_presentation_3231_);
v___x_3233_ = lean_box(0);
return v___x_3233_;
}
}
case 8:
{
lean_object* v_presentation_3234_; 
v_presentation_3234_ = lean_ctor_get(v_x_3202_, 0);
lean_inc_ref(v_presentation_3234_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3234_) == 0)
{
lean_object* v_val_3235_; 
v_val_3235_ = lean_ctor_get(v_presentation_3234_, 0);
lean_inc(v_val_3235_);
lean_dec_ref_known(v_presentation_3234_, 1);
v_p_3208_ = v_val_3235_;
goto v___jp_3207_;
}
else
{
lean_object* v___x_3236_; 
lean_dec_ref(v_presentation_3234_);
v___x_3236_ = lean_box(0);
return v___x_3236_;
}
}
case 13:
{
lean_object* v_presentation_3237_; 
v_presentation_3237_ = lean_ctor_get(v_x_3202_, 0);
lean_inc_ref(v_presentation_3237_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3237_) == 0)
{
lean_object* v_val_3238_; 
v_val_3238_ = lean_ctor_get(v_presentation_3237_, 0);
lean_inc(v_val_3238_);
lean_dec_ref_known(v_presentation_3237_, 1);
v_p_3208_ = v_val_3238_;
goto v___jp_3207_;
}
else
{
lean_object* v___x_3239_; 
lean_dec_ref(v_presentation_3237_);
v___x_3239_ = lean_box(0);
return v___x_3239_;
}
}
case 14:
{
lean_object* v_presentation_3240_; 
v_presentation_3240_ = lean_ctor_get(v_x_3202_, 0);
lean_inc_ref(v_presentation_3240_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3240_) == 0)
{
lean_object* v_val_3241_; 
v_val_3241_ = lean_ctor_get(v_presentation_3240_, 0);
lean_inc(v_val_3241_);
lean_dec_ref_known(v_presentation_3240_, 1);
v_p_3208_ = v_val_3241_;
goto v___jp_3207_;
}
else
{
lean_object* v___x_3242_; 
lean_dec_ref(v_presentation_3240_);
v___x_3242_ = lean_box(0);
return v___x_3242_;
}
}
case 11:
{
lean_object* v_presentation_3243_; 
v_presentation_3243_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3243_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3208_ = v_presentation_3243_;
goto v___jp_3207_;
}
case 15:
{
lean_object* v_presentation_3244_; 
v_presentation_3244_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3244_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3208_ = v_presentation_3244_;
goto v___jp_3207_;
}
case 6:
{
lean_object* v_presentation_3245_; 
v_presentation_3245_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3245_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3245_;
goto v___jp_3211_;
}
case 10:
{
lean_object* v_presentation_3246_; 
v_presentation_3246_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3246_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3246_;
goto v___jp_3211_;
}
case 19:
{
lean_object* v_presentation_3247_; 
v_presentation_3247_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3247_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3247_;
goto v___jp_3211_;
}
case 20:
{
lean_object* v_presentation_3248_; 
v_presentation_3248_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3248_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3248_;
goto v___jp_3211_;
}
case 21:
{
lean_object* v_presentation_3249_; 
v_presentation_3249_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3249_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3249_;
goto v___jp_3211_;
}
case 22:
{
lean_object* v_presentation_3250_; 
v_presentation_3250_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3250_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3250_;
goto v___jp_3211_;
}
case 23:
{
lean_object* v_presentation_3251_; 
v_presentation_3251_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3251_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3251_;
goto v___jp_3211_;
}
case 24:
{
lean_object* v_presentation_3252_; 
v_presentation_3252_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3252_);
lean_dec_ref_known(v_x_3202_, 1);
v_p_3212_ = v_presentation_3252_;
goto v___jp_3211_;
}
case 4:
{
lean_object* v_presentation_3253_; 
v_presentation_3253_ = lean_ctor_get(v_x_3202_, 0);
lean_inc_ref(v_presentation_3253_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3253_) == 0)
{
lean_object* v_val_3254_; 
v_val_3254_ = lean_ctor_get(v_presentation_3253_, 0);
lean_inc(v_val_3254_);
lean_dec_ref_known(v_presentation_3253_, 1);
v_p_3212_ = v_val_3254_;
goto v___jp_3211_;
}
else
{
lean_object* v___x_3255_; 
lean_dec_ref(v_presentation_3253_);
v___x_3255_ = lean_box(0);
return v___x_3255_;
}
}
case 5:
{
lean_object* v_presentation_3256_; 
v_presentation_3256_ = lean_ctor_get(v_x_3202_, 0);
lean_inc_ref(v_presentation_3256_);
lean_dec_ref_known(v_x_3202_, 1);
if (lean_obj_tag(v_presentation_3256_) == 0)
{
lean_object* v_val_3257_; 
v_val_3257_ = lean_ctor_get(v_presentation_3256_, 0);
lean_inc(v_val_3257_);
lean_dec_ref_known(v_presentation_3256_, 1);
v_p_3212_ = v_val_3257_;
goto v___jp_3211_;
}
else
{
lean_object* v___x_3258_; 
lean_dec_ref(v_presentation_3256_);
v___x_3258_ = lean_box(0);
return v___x_3258_;
}
}
case 3:
{
lean_object* v_presentation_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v_presentation_3259_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3259_);
lean_dec_ref_known(v_x_3202_, 1);
v___x_3260_ = lean_unsigned_to_nat(3u);
v___x_3261_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v___x_3260_, v_presentation_3259_);
return v___x_3261_;
}
case 26:
{
lean_object* v_presentation_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v_presentation_3262_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3262_);
lean_dec_ref_known(v_x_3202_, 1);
v___x_3263_ = lean_unsigned_to_nat(8u);
v___x_3264_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v___x_3263_, v_presentation_3262_);
return v___x_3264_;
}
case 27:
{
lean_object* v_presentation_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; 
v_presentation_3265_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3265_);
lean_dec_ref_known(v_x_3202_, 1);
v___x_3266_ = lean_unsigned_to_nat(9u);
v___x_3267_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v___x_3266_, v_presentation_3265_);
return v___x_3267_;
}
case 28:
{
lean_object* v_presentation_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v_presentation_3268_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_presentation_3268_);
lean_dec_ref_known(v_x_3202_, 1);
v___x_3269_ = lean_unsigned_to_nat(14u);
v___x_3270_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v___x_3269_, v_presentation_3268_);
return v___x_3270_;
}
default: 
{
lean_object* v___x_3271_; 
lean_dec_ref(v_x_3202_);
v___x_3271_ = lean_box(0);
return v___x_3271_;
}
}
v___jp_3203_:
{
lean_object* v___x_3204_; 
v___x_3204_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__0));
return v___x_3204_;
}
v___jp_3205_:
{
lean_object* v___x_3206_; 
v___x_3206_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits___closed__1));
return v___x_3206_;
}
v___jp_3207_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = lean_unsigned_to_nat(1u);
v___x_3210_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v___x_3209_, v_p_3208_);
return v___x_3210_;
}
v___jp_3211_:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3213_ = lean_unsigned_to_nat(2u);
v___x_3214_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits_covering(v___x_3213_, v_p_3212_);
return v___x_3214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseField(lean_object* v_m_3272_, lean_object* v_width_3273_, lean_object* v_reserve_3274_, lean_object* v_a_3275_){
_start:
{
lean_object* v___x_3276_; 
v___x_3276_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits(v_m_3272_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v___x_3277_; 
v___x_3277_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(v_width_3273_, v_reserve_3274_, v_a_3275_);
return v___x_3277_;
}
else
{
lean_object* v_val_3278_; lean_object* v___x_3279_; 
lean_dec(v_width_3273_);
v_val_3278_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_val_3278_);
lean_dec_ref_known(v___x_3276_, 1);
v___x_3279_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_val_3278_, v_a_3275_);
return v___x_3279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed(lean_object* v_m_3280_, lean_object* v_width_3281_, lean_object* v_reserve_3282_, lean_object* v_a_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseField(v_m_3280_, v_width_3281_, v_reserve_3282_, v_a_3283_);
lean_dec(v_reserve_3282_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits(lean_object* v_x_3287_){
_start:
{
if (lean_obj_tag(v_x_3287_) == 1)
{
lean_object* v_head_3290_; 
v_head_3290_ = lean_ctor_get(v_x_3287_, 0);
lean_inc(v_head_3290_);
if (lean_obj_tag(v_head_3290_) == 1)
{
lean_object* v_tail_3291_; lean_object* v_modifier_3292_; uint8_t v___x_3293_; 
v_tail_3291_ = lean_ctor_get(v_x_3287_, 1);
lean_inc(v_tail_3291_);
lean_dec_ref_known(v_x_3287_, 2);
v_modifier_3292_ = lean_ctor_get(v_head_3290_, 0);
lean_inc_ref(v_modifier_3292_);
lean_dec_ref_known(v_head_3290_, 1);
v___x_3293_ = l___private_Std_Time_Format_Basic_0__Std_Time_isNumericModifier(v_modifier_3292_);
if (v___x_3293_ == 0)
{
lean_object* v___x_3294_; 
lean_dec_ref(v_modifier_3292_);
lean_dec(v_tail_3291_);
v___x_3294_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits___closed__0));
return v___x_3294_;
}
else
{
lean_object* v___x_3295_; 
v___x_3295_ = l___private_Std_Time_Format_Basic_0__Std_Time_fixedDigits(v_modifier_3292_);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_dec(v_tail_3291_);
return v___x_3295_;
}
else
{
lean_object* v_val_3296_; lean_object* v___x_3297_; 
v_val_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_val_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v___x_3297_ = l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits(v_tail_3291_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_dec(v_val_3296_);
return v___x_3297_;
}
else
{
lean_object* v_val_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3306_; 
v_val_3298_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3300_ = v___x_3297_;
v_isShared_3301_ = v_isSharedCheck_3306_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_val_3298_);
lean_dec(v___x_3297_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3306_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3302_; lean_object* v___x_3304_; 
v___x_3302_ = lean_nat_add(v_val_3296_, v_val_3298_);
lean_dec(v_val_3298_);
lean_dec(v_val_3296_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 0, v___x_3302_);
v___x_3304_ = v___x_3300_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v___x_3302_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
}
}
}
else
{
lean_dec(v_head_3290_);
lean_dec_ref_known(v_x_3287_, 2);
goto v___jp_3288_;
}
}
else
{
lean_dec(v_x_3287_);
goto v___jp_3288_;
}
v___jp_3288_:
{
lean_object* v___x_3289_; 
v___x_3289_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits___closed__0));
return v___x_3289_;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0(void){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = lean_unsigned_to_nat(2000u);
v___x_3308_ = lean_nat_to_int(v___x_3307_);
return v___x_3308_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3(void){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3312_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3313_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3);
v___x_3314_ = lean_int_sub(v___x_3313_, v___x_3312_);
return v___x_3314_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4(void){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v_range_3317_; 
v___x_3315_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3316_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3);
v_range_3317_ = lean_int_add(v___x_3316_, v___x_3315_);
return v_range_3317_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(lean_object* v_config_3320_, lean_object* v_reserve_3321_, lean_object* v_x_3322_, lean_object* v_a_3323_){
_start:
{
lean_object* v___y_3325_; 
switch(lean_obj_tag(v_x_3322_))
{
case 0:
{
lean_object* v_dateformat_3328_; uint8_t v_presentation_3329_; lean_object* v_symbols_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
lean_dec(v_reserve_3321_);
v_dateformat_3328_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3328_);
lean_dec_ref(v_config_3320_);
v_presentation_3329_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
v_symbols_3330_ = lean_ctor_get(v_dateformat_3328_, 1);
lean_inc_ref(v_symbols_3330_);
lean_dec_ref(v_dateformat_3328_);
v___x_3331_ = lean_unsigned_to_nat(2u);
v___x_3332_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraNames(v_symbols_3330_, v_presentation_3329_);
lean_dec_ref(v_symbols_3330_);
v___x_3333_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3331_, v___x_3332_, v_a_3323_);
if (lean_obj_tag(v___x_3333_) == 0)
{
lean_object* v_pos_3334_; lean_object* v_res_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3344_; 
v_pos_3334_ = lean_ctor_get(v___x_3333_, 0);
v_res_3335_ = lean_ctor_get(v___x_3333_, 1);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3337_ = v___x_3333_;
v_isShared_3338_ = v_isSharedCheck_3344_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_res_3335_);
lean_inc(v_pos_3334_);
lean_dec(v___x_3333_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3344_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
uint8_t v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3342_; 
v___x_3339_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(v_res_3335_);
lean_dec(v_res_3335_);
v___x_3340_ = lean_box(v___x_3339_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 1, v___x_3340_);
v___x_3342_ = v___x_3337_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_pos_3334_);
lean_ctor_set(v_reuseFailAlloc_3343_, 1, v___x_3340_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
else
{
lean_object* v_pos_3345_; lean_object* v_err_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
v_pos_3345_ = lean_ctor_get(v___x_3333_, 0);
v_err_3346_ = lean_ctor_get(v___x_3333_, 1);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3333_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_err_3346_);
lean_inc(v_pos_3345_);
lean_dec(v___x_3333_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_pos_3345_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_err_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
case 1:
{
lean_object* v_presentation_3354_; 
lean_dec_ref(v_config_3320_);
v_presentation_3354_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3354_);
lean_dec_ref_known(v_x_3322_, 1);
switch(lean_obj_tag(v_presentation_3354_))
{
case 0:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3355_ = lean_unsigned_to_nat(1u);
v___x_3356_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum___boxed), 3, 2);
lean_closure_set(v___x_3356_, 0, v___x_3355_);
lean_closure_set(v___x_3356_, 1, v_reserve_3321_);
v___x_3357_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3356_, v_a_3323_);
return v___x_3357_;
}
case 1:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
lean_dec(v_reserve_3321_);
v___x_3358_ = lean_unsigned_to_nat(2u);
v___x_3359_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3358_, v_a_3323_);
if (lean_obj_tag(v___x_3359_) == 0)
{
lean_object* v_pos_3360_; lean_object* v_res_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3371_; 
v_pos_3360_ = lean_ctor_get(v___x_3359_, 0);
v_res_3361_ = lean_ctor_get(v___x_3359_, 1);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3359_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3363_ = v___x_3359_;
v_isShared_3364_ = v_isSharedCheck_3371_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_res_3361_);
lean_inc(v_pos_3360_);
lean_dec(v___x_3359_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3371_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3369_; 
v___x_3365_ = lean_nat_to_int(v_res_3361_);
v___x_3366_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0);
v___x_3367_ = lean_int_add(v___x_3366_, v___x_3365_);
lean_dec(v___x_3365_);
if (v_isShared_3364_ == 0)
{
lean_ctor_set(v___x_3363_, 1, v___x_3367_);
v___x_3369_ = v___x_3363_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_pos_3360_);
lean_ctor_set(v_reuseFailAlloc_3370_, 1, v___x_3367_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
else
{
lean_object* v_pos_3372_; lean_object* v_err_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
v_pos_3372_ = lean_ctor_get(v___x_3359_, 0);
v_err_3373_ = lean_ctor_get(v___x_3359_, 1);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3359_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3359_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_err_3373_);
lean_inc(v_pos_3372_);
lean_dec(v___x_3359_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_pos_3372_);
lean_ctor_set(v_reuseFailAlloc_3379_, 1, v_err_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
case 2:
{
uint8_t v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = 1;
v___x_3382_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear(v___x_3381_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
return v___x_3382_;
}
default: 
{
lean_object* v_num_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v_num_3383_ = lean_ctor_get(v_presentation_3354_, 0);
lean_inc(v_num_3383_);
lean_dec_ref_known(v_presentation_3354_, 1);
v___x_3384_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum___boxed), 3, 2);
lean_closure_set(v___x_3384_, 0, v_num_3383_);
lean_closure_set(v___x_3384_, 1, v_reserve_3321_);
v___x_3385_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3384_, v_a_3323_);
return v___x_3385_;
}
}
}
case 2:
{
lean_object* v_presentation_3386_; 
lean_dec_ref(v_config_3320_);
v_presentation_3386_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3386_);
lean_dec_ref_known(v_x_3322_, 1);
switch(lean_obj_tag(v_presentation_3386_))
{
case 0:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = lean_unsigned_to_nat(1u);
v___x_3388_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(v___x_3387_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_pos_3389_; lean_object* v_res_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3398_; 
v_pos_3389_ = lean_ctor_get(v___x_3388_, 0);
v_res_3390_ = lean_ctor_get(v___x_3388_, 1);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3392_ = v___x_3388_;
v_isShared_3393_ = v_isSharedCheck_3398_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_res_3390_);
lean_inc(v_pos_3389_);
lean_dec(v___x_3388_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3398_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3394_; lean_object* v___x_3396_; 
v___x_3394_ = lean_nat_to_int(v_res_3390_);
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 1, v___x_3394_);
v___x_3396_ = v___x_3392_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_pos_3389_);
lean_ctor_set(v_reuseFailAlloc_3397_, 1, v___x_3394_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
else
{
lean_object* v_pos_3399_; lean_object* v_err_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3407_; 
v_pos_3399_ = lean_ctor_get(v___x_3388_, 0);
v_err_3400_ = lean_ctor_get(v___x_3388_, 1);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3402_ = v___x_3388_;
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_err_3400_);
lean_inc(v_pos_3399_);
lean_dec(v___x_3388_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_pos_3399_);
lean_ctor_set(v_reuseFailAlloc_3406_, 1, v_err_3400_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
}
}
case 1:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
lean_dec(v_reserve_3321_);
v___x_3408_ = lean_unsigned_to_nat(2u);
v___x_3409_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3408_, v_a_3323_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_pos_3410_; lean_object* v_res_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3421_; 
v_pos_3410_ = lean_ctor_get(v___x_3409_, 0);
v_res_3411_ = lean_ctor_get(v___x_3409_, 1);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3413_ = v___x_3409_;
v_isShared_3414_ = v_isSharedCheck_3421_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_res_3411_);
lean_inc(v_pos_3410_);
lean_dec(v___x_3409_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3421_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3415_ = lean_nat_to_int(v_res_3411_);
v___x_3416_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0);
v___x_3417_ = lean_int_add(v___x_3416_, v___x_3415_);
lean_dec(v___x_3415_);
if (v_isShared_3414_ == 0)
{
lean_ctor_set(v___x_3413_, 1, v___x_3417_);
v___x_3419_ = v___x_3413_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_pos_3410_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
else
{
lean_object* v_pos_3422_; lean_object* v_err_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
v_pos_3422_ = lean_ctor_get(v___x_3409_, 0);
v_err_3423_ = lean_ctor_get(v___x_3409_, 1);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3409_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_err_3423_);
lean_inc(v_pos_3422_);
lean_dec(v___x_3409_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_pos_3422_);
lean_ctor_set(v_reuseFailAlloc_3429_, 1, v_err_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
case 2:
{
uint8_t v___x_3431_; lean_object* v___x_3432_; 
v___x_3431_ = 0;
v___x_3432_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear(v___x_3431_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
return v___x_3432_;
}
default: 
{
lean_object* v_num_3433_; lean_object* v___x_3434_; 
v_num_3433_ = lean_ctor_get(v_presentation_3386_, 0);
lean_inc(v_num_3433_);
lean_dec_ref_known(v_presentation_3386_, 1);
v___x_3434_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum(v_num_3433_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
if (lean_obj_tag(v___x_3434_) == 0)
{
lean_object* v_pos_3435_; lean_object* v_res_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3444_; 
v_pos_3435_ = lean_ctor_get(v___x_3434_, 0);
v_res_3436_ = lean_ctor_get(v___x_3434_, 1);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3434_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3438_ = v___x_3434_;
v_isShared_3439_ = v_isSharedCheck_3444_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_res_3436_);
lean_inc(v_pos_3435_);
lean_dec(v___x_3434_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3444_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3440_; lean_object* v___x_3442_; 
v___x_3440_ = lean_nat_to_int(v_res_3436_);
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 1, v___x_3440_);
v___x_3442_ = v___x_3438_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_pos_3435_);
lean_ctor_set(v_reuseFailAlloc_3443_, 1, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
else
{
lean_object* v_pos_3445_; lean_object* v_err_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3453_; 
v_pos_3445_ = lean_ctor_get(v___x_3434_, 0);
v_err_3446_ = lean_ctor_get(v___x_3434_, 1);
v_isSharedCheck_3453_ = !lean_is_exclusive(v___x_3434_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3448_ = v___x_3434_;
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_err_3446_);
lean_inc(v_pos_3445_);
lean_dec(v___x_3434_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3451_; 
if (v_isShared_3449_ == 0)
{
v___x_3451_ = v___x_3448_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_pos_3445_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_err_3446_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
}
}
case 3:
{
lean_object* v_presentation_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
lean_dec_ref(v_config_3320_);
v_presentation_3454_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3454_);
v___x_3455_ = lean_unsigned_to_nat(1u);
v___x_3456_ = lean_unsigned_to_nat(366u);
v___x_3457_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3457_, 0, v_x_3322_);
lean_closure_set(v___x_3457_, 1, v_presentation_3454_);
lean_closure_set(v___x_3457_, 2, v_reserve_3321_);
v___x_3458_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3455_, v___x_3456_, v___x_3457_, v_a_3323_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_pos_3459_; lean_object* v_res_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3470_; 
v_pos_3459_ = lean_ctor_get(v___x_3458_, 0);
v_res_3460_ = lean_ctor_get(v___x_3458_, 1);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3462_ = v___x_3458_;
v_isShared_3463_ = v_isSharedCheck_3470_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_res_3460_);
lean_inc(v_pos_3459_);
lean_dec(v___x_3458_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3470_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
uint8_t v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3468_; 
v___x_3464_ = 1;
v___x_3465_ = lean_box(v___x_3464_);
v___x_3466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
lean_ctor_set(v___x_3466_, 1, v_res_3460_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 1, v___x_3466_);
v___x_3468_ = v___x_3462_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_pos_3459_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v___x_3466_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
else
{
lean_object* v_pos_3471_; lean_object* v_err_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3479_; 
v_pos_3471_ = lean_ctor_get(v___x_3458_, 0);
v_err_3472_ = lean_ctor_get(v___x_3458_, 1);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3474_ = v___x_3458_;
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_err_3472_);
lean_inc(v_pos_3471_);
lean_dec(v___x_3458_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3475_ == 0)
{
v___x_3477_ = v___x_3474_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_pos_3471_);
lean_ctor_set(v_reuseFailAlloc_3478_, 1, v_err_3472_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
case 4:
{
lean_object* v_presentation_3480_; 
v_presentation_3480_ = lean_ctor_get(v_x_3322_, 0);
if (lean_obj_tag(v_presentation_3480_) == 0)
{
lean_object* v_val_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
lean_dec_ref(v_config_3320_);
v_val_3481_ = lean_ctor_get(v_presentation_3480_, 0);
lean_inc(v_val_3481_);
v___x_3482_ = lean_unsigned_to_nat(1u);
v___x_3483_ = lean_unsigned_to_nat(12u);
v___x_3484_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3484_, 0, v_x_3322_);
lean_closure_set(v___x_3484_, 1, v_val_3481_);
lean_closure_set(v___x_3484_, 2, v_reserve_3321_);
v___x_3485_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3482_, v___x_3483_, v___x_3484_, v_a_3323_);
return v___x_3485_;
}
else
{
lean_object* v_dateformat_3486_; lean_object* v_val_3487_; lean_object* v_symbols_3488_; lean_object* v___x_3489_; uint8_t v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
lean_inc_ref(v_presentation_3480_);
lean_dec_ref_known(v_x_3322_, 1);
lean_dec(v_reserve_3321_);
v_dateformat_3486_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3486_);
lean_dec_ref(v_config_3320_);
v_val_3487_ = lean_ctor_get(v_presentation_3480_, 0);
lean_inc(v_val_3487_);
lean_dec_ref_known(v_presentation_3480_, 1);
v_symbols_3488_ = lean_ctor_get(v_dateformat_3486_, 1);
lean_inc_ref(v_symbols_3488_);
lean_dec_ref(v_dateformat_3486_);
v___x_3489_ = lean_unsigned_to_nat(12u);
v___x_3490_ = lean_unbox(v_val_3487_);
lean_dec(v_val_3487_);
v___x_3491_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(v_symbols_3488_, v___x_3490_);
lean_dec_ref(v_symbols_3488_);
v___x_3492_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3489_, v___x_3491_, v_a_3323_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_pos_3493_; lean_object* v_res_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3502_; 
v_pos_3493_ = lean_ctor_get(v___x_3492_, 0);
v_res_3494_ = lean_ctor_get(v___x_3492_, 1);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3496_ = v___x_3492_;
v_isShared_3497_ = v_isSharedCheck_3502_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_res_3494_);
lean_inc(v_pos_3493_);
lean_dec(v___x_3492_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3502_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3498_; lean_object* v___x_3500_; 
v___x_3498_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex(v_res_3494_);
if (v_isShared_3497_ == 0)
{
lean_ctor_set(v___x_3496_, 1, v___x_3498_);
v___x_3500_ = v___x_3496_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_pos_3493_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v___x_3498_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
}
else
{
lean_object* v_pos_3503_; lean_object* v_err_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3511_; 
v_pos_3503_ = lean_ctor_get(v___x_3492_, 0);
v_err_3504_ = lean_ctor_get(v___x_3492_, 1);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3506_ = v___x_3492_;
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_err_3504_);
lean_inc(v_pos_3503_);
lean_dec(v___x_3492_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3509_; 
if (v_isShared_3507_ == 0)
{
v___x_3509_ = v___x_3506_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_pos_3503_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v_err_3504_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
case 5:
{
lean_object* v_presentation_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3550_; 
v_presentation_3512_ = lean_ctor_get(v_x_3322_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_x_3322_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3514_ = v_x_3322_;
v_isShared_3515_ = v_isSharedCheck_3550_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_presentation_3512_);
lean_dec(v_x_3322_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3550_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
if (lean_obj_tag(v_presentation_3512_) == 0)
{
lean_object* v_val_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3520_; 
lean_dec_ref(v_config_3320_);
v_val_3516_ = lean_ctor_get(v_presentation_3512_, 0);
lean_inc(v_val_3516_);
v___x_3517_ = lean_unsigned_to_nat(1u);
v___x_3518_ = lean_unsigned_to_nat(12u);
if (v_isShared_3515_ == 0)
{
lean_ctor_set_tag(v___x_3514_, 4);
v___x_3520_ = v___x_3514_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_presentation_3512_);
v___x_3520_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3521_, 0, v___x_3520_);
lean_closure_set(v___x_3521_, 1, v_val_3516_);
lean_closure_set(v___x_3521_, 2, v_reserve_3321_);
v___x_3522_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3517_, v___x_3518_, v___x_3521_, v_a_3323_);
return v___x_3522_;
}
}
else
{
lean_object* v_dateformat_3524_; lean_object* v_val_3525_; lean_object* v_symbols_3526_; lean_object* v___x_3527_; uint8_t v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
lean_del_object(v___x_3514_);
lean_dec(v_reserve_3321_);
v_dateformat_3524_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3524_);
lean_dec_ref(v_config_3320_);
v_val_3525_ = lean_ctor_get(v_presentation_3512_, 0);
lean_inc(v_val_3525_);
lean_dec_ref_known(v_presentation_3512_, 1);
v_symbols_3526_ = lean_ctor_get(v_dateformat_3524_, 1);
lean_inc_ref(v_symbols_3526_);
lean_dec_ref(v_dateformat_3524_);
v___x_3527_ = lean_unsigned_to_nat(12u);
v___x_3528_ = lean_unbox(v_val_3525_);
lean_dec(v_val_3525_);
v___x_3529_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthNames(v_symbols_3526_, v___x_3528_);
lean_dec_ref(v_symbols_3526_);
v___x_3530_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3527_, v___x_3529_, v_a_3323_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_pos_3531_; lean_object* v_res_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3540_; 
v_pos_3531_ = lean_ctor_get(v___x_3530_, 0);
v_res_3532_ = lean_ctor_get(v___x_3530_, 1);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3534_ = v___x_3530_;
v_isShared_3535_ = v_isSharedCheck_3540_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_res_3532_);
lean_inc(v_pos_3531_);
lean_dec(v___x_3530_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3540_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3536_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthOfIndex(v_res_3532_);
if (v_isShared_3535_ == 0)
{
lean_ctor_set(v___x_3534_, 1, v___x_3536_);
v___x_3538_ = v___x_3534_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_pos_3531_);
lean_ctor_set(v_reuseFailAlloc_3539_, 1, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
else
{
lean_object* v_pos_3541_; lean_object* v_err_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3549_; 
v_pos_3541_ = lean_ctor_get(v___x_3530_, 0);
v_err_3542_ = lean_ctor_get(v___x_3530_, 1);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3544_ = v___x_3530_;
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_err_3542_);
lean_inc(v_pos_3541_);
lean_dec(v___x_3530_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_pos_3541_);
lean_ctor_set(v_reuseFailAlloc_3548_, 1, v_err_3542_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
return v___x_3547_;
}
}
}
}
}
}
case 6:
{
lean_object* v_presentation_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
lean_dec_ref(v_config_3320_);
v_presentation_3551_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3551_);
v___x_3552_ = lean_unsigned_to_nat(1u);
v___x_3553_ = lean_unsigned_to_nat(31u);
v___x_3554_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3554_, 0, v_x_3322_);
lean_closure_set(v___x_3554_, 1, v_presentation_3551_);
lean_closure_set(v___x_3554_, 2, v_reserve_3321_);
v___x_3555_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3552_, v___x_3553_, v___x_3554_, v_a_3323_);
return v___x_3555_;
}
case 7:
{
lean_object* v_presentation_3556_; 
v_presentation_3556_ = lean_ctor_get(v_x_3322_, 0);
if (lean_obj_tag(v_presentation_3556_) == 0)
{
lean_object* v_val_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec_ref(v_config_3320_);
v_val_3557_ = lean_ctor_get(v_presentation_3556_, 0);
lean_inc(v_val_3557_);
v___x_3558_ = lean_unsigned_to_nat(1u);
v___x_3559_ = lean_unsigned_to_nat(4u);
v___x_3560_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3560_, 0, v_x_3322_);
lean_closure_set(v___x_3560_, 1, v_val_3557_);
lean_closure_set(v___x_3560_, 2, v_reserve_3321_);
v___x_3561_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3558_, v___x_3559_, v___x_3560_, v_a_3323_);
return v___x_3561_;
}
else
{
lean_object* v_dateformat_3562_; lean_object* v_val_3563_; lean_object* v_symbols_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
lean_inc_ref(v_presentation_3556_);
lean_dec_ref_known(v_x_3322_, 1);
lean_dec(v_reserve_3321_);
v_dateformat_3562_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3562_);
lean_dec_ref(v_config_3320_);
v_val_3563_ = lean_ctor_get(v_presentation_3556_, 0);
lean_inc(v_val_3563_);
lean_dec_ref_known(v_presentation_3556_, 1);
v_symbols_3564_ = lean_ctor_get(v_dateformat_3562_, 1);
lean_inc_ref(v_symbols_3564_);
lean_dec_ref(v_dateformat_3562_);
v___x_3565_ = lean_unsigned_to_nat(4u);
v___x_3566_ = lean_unbox(v_val_3563_);
lean_dec(v_val_3563_);
v___x_3567_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(v_symbols_3564_, v___x_3566_);
lean_dec_ref(v_symbols_3564_);
v___x_3568_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3565_, v___x_3567_, v_a_3323_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_pos_3569_; lean_object* v_res_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3578_; 
v_pos_3569_ = lean_ctor_get(v___x_3568_, 0);
v_res_3570_ = lean_ctor_get(v___x_3568_, 1);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3572_ = v___x_3568_;
v_isShared_3573_ = v_isSharedCheck_3578_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_res_3570_);
lean_inc(v_pos_3569_);
lean_dec(v___x_3568_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3578_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; lean_object* v___x_3576_; 
v___x_3574_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterOfIndex(v_res_3570_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set(v___x_3572_, 1, v___x_3574_);
v___x_3576_ = v___x_3572_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_pos_3569_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v___x_3574_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
else
{
lean_object* v_pos_3579_; lean_object* v_err_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
v_pos_3579_ = lean_ctor_get(v___x_3568_, 0);
v_err_3580_ = lean_ctor_get(v___x_3568_, 1);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3568_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_err_3580_);
lean_inc(v_pos_3579_);
lean_dec(v___x_3568_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_pos_3579_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v_err_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
}
case 8:
{
lean_object* v_presentation_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3626_; 
v_presentation_3588_ = lean_ctor_get(v_x_3322_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v_x_3322_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3590_ = v_x_3322_;
v_isShared_3591_ = v_isSharedCheck_3626_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_presentation_3588_);
lean_dec(v_x_3322_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3626_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
if (lean_obj_tag(v_presentation_3588_) == 0)
{
lean_object* v_val_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3596_; 
lean_dec_ref(v_config_3320_);
v_val_3592_ = lean_ctor_get(v_presentation_3588_, 0);
lean_inc(v_val_3592_);
v___x_3593_ = lean_unsigned_to_nat(1u);
v___x_3594_ = lean_unsigned_to_nat(4u);
if (v_isShared_3591_ == 0)
{
lean_ctor_set_tag(v___x_3590_, 7);
v___x_3596_ = v___x_3590_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_presentation_3588_);
v___x_3596_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3597_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3597_, 0, v___x_3596_);
lean_closure_set(v___x_3597_, 1, v_val_3592_);
lean_closure_set(v___x_3597_, 2, v_reserve_3321_);
v___x_3598_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3593_, v___x_3594_, v___x_3597_, v_a_3323_);
return v___x_3598_;
}
}
else
{
lean_object* v_dateformat_3600_; lean_object* v_val_3601_; lean_object* v_symbols_3602_; lean_object* v___x_3603_; uint8_t v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
lean_del_object(v___x_3590_);
lean_dec(v_reserve_3321_);
v_dateformat_3600_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3600_);
lean_dec_ref(v_config_3320_);
v_val_3601_ = lean_ctor_get(v_presentation_3588_, 0);
lean_inc(v_val_3601_);
lean_dec_ref_known(v_presentation_3588_, 1);
v_symbols_3602_ = lean_ctor_get(v_dateformat_3600_, 1);
lean_inc_ref(v_symbols_3602_);
lean_dec_ref(v_dateformat_3600_);
v___x_3603_ = lean_unsigned_to_nat(4u);
v___x_3604_ = lean_unbox(v_val_3601_);
lean_dec(v_val_3601_);
v___x_3605_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterNames(v_symbols_3602_, v___x_3604_);
lean_dec_ref(v_symbols_3602_);
v___x_3606_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3603_, v___x_3605_, v_a_3323_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_pos_3607_; lean_object* v_res_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3616_; 
v_pos_3607_ = lean_ctor_get(v___x_3606_, 0);
v_res_3608_ = lean_ctor_get(v___x_3606_, 1);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3610_ = v___x_3606_;
v_isShared_3611_ = v_isSharedCheck_3616_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_res_3608_);
lean_inc(v_pos_3607_);
lean_dec(v___x_3606_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3616_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3612_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterOfIndex(v_res_3608_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 1, v___x_3612_);
v___x_3614_ = v___x_3610_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_pos_3607_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v___x_3612_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
}
else
{
lean_object* v_pos_3617_; lean_object* v_err_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
v_pos_3617_ = lean_ctor_get(v___x_3606_, 0);
v_err_3618_ = lean_ctor_get(v___x_3606_, 1);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3606_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_err_3618_);
lean_inc(v_pos_3617_);
lean_dec(v___x_3606_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_pos_3617_);
lean_ctor_set(v_reuseFailAlloc_3624_, 1, v_err_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
}
}
case 9:
{
lean_object* v_presentation_3627_; 
lean_dec_ref(v_config_3320_);
v_presentation_3627_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3627_);
lean_dec_ref_known(v_x_3322_, 1);
switch(lean_obj_tag(v_presentation_3627_))
{
case 0:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___x_3628_ = lean_unsigned_to_nat(1u);
v___x_3629_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum___boxed), 3, 2);
lean_closure_set(v___x_3629_, 0, v___x_3628_);
lean_closure_set(v___x_3629_, 1, v_reserve_3321_);
v___x_3630_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3629_, v_a_3323_);
return v___x_3630_;
}
case 1:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
lean_dec(v_reserve_3321_);
v___x_3631_ = lean_unsigned_to_nat(2u);
v___x_3632_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3631_, v_a_3323_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_pos_3633_; lean_object* v_res_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3644_; 
v_pos_3633_ = lean_ctor_get(v___x_3632_, 0);
v_res_3634_ = lean_ctor_get(v___x_3632_, 1);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3636_ = v___x_3632_;
v_isShared_3637_ = v_isSharedCheck_3644_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_res_3634_);
lean_inc(v_pos_3633_);
lean_dec(v___x_3632_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3644_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3642_; 
v___x_3638_ = lean_nat_to_int(v_res_3634_);
v___x_3639_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0);
v___x_3640_ = lean_int_add(v___x_3639_, v___x_3638_);
lean_dec(v___x_3638_);
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 1, v___x_3640_);
v___x_3642_ = v___x_3636_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_pos_3633_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v___x_3640_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
else
{
lean_object* v_pos_3645_; lean_object* v_err_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
v_pos_3645_ = lean_ctor_get(v___x_3632_, 0);
v_err_3646_ = lean_ctor_get(v___x_3632_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3632_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_err_3646_);
lean_inc(v_pos_3645_);
lean_dec(v___x_3632_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_pos_3645_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_err_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
case 2:
{
uint8_t v___x_3654_; lean_object* v___x_3655_; 
v___x_3654_ = 1;
v___x_3655_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFourDigitYear(v___x_3654_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
return v___x_3655_;
}
default: 
{
lean_object* v_num_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v_num_3656_ = lean_ctor_get(v_presentation_3627_, 0);
lean_inc(v_num_3656_);
lean_dec_ref_known(v_presentation_3627_, 1);
v___x_3657_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseVarWidthNum___boxed), 3, 2);
lean_closure_set(v___x_3657_, 0, v_num_3656_);
lean_closure_set(v___x_3657_, 1, v_reserve_3321_);
v___x_3658_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3657_, v_a_3323_);
return v___x_3658_;
}
}
}
case 10:
{
lean_object* v_presentation_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
lean_dec_ref(v_config_3320_);
v_presentation_3659_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3659_);
v___x_3660_ = lean_unsigned_to_nat(1u);
v___x_3661_ = lean_unsigned_to_nat(53u);
v___x_3662_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3662_, 0, v_x_3322_);
lean_closure_set(v___x_3662_, 1, v_presentation_3659_);
lean_closure_set(v___x_3662_, 2, v_reserve_3321_);
v___x_3663_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3660_, v___x_3661_, v___x_3662_, v_a_3323_);
return v___x_3663_;
}
case 11:
{
lean_object* v_presentation_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; 
lean_dec_ref(v_config_3320_);
v_presentation_3664_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3664_);
v___x_3665_ = lean_unsigned_to_nat(1u);
v___x_3666_ = lean_unsigned_to_nat(6u);
v___x_3667_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3667_, 0, v_x_3322_);
lean_closure_set(v___x_3667_, 1, v_presentation_3664_);
lean_closure_set(v___x_3667_, 2, v_reserve_3321_);
v___x_3668_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3665_, v___x_3666_, v___x_3667_, v_a_3323_);
return v___x_3668_;
}
case 12:
{
lean_object* v_dateformat_3669_; uint8_t v_presentation_3670_; lean_object* v_symbols_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
lean_dec(v_reserve_3321_);
v_dateformat_3669_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3669_);
lean_dec_ref(v_config_3320_);
v_presentation_3670_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
v_symbols_3671_ = lean_ctor_get(v_dateformat_3669_, 1);
lean_inc_ref(v_symbols_3671_);
lean_dec_ref(v_dateformat_3669_);
v___x_3672_ = lean_unsigned_to_nat(7u);
v___x_3673_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_3671_, v_presentation_3670_);
lean_dec_ref(v_symbols_3671_);
v___x_3674_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3672_, v___x_3673_, v_a_3323_);
if (lean_obj_tag(v___x_3674_) == 0)
{
lean_object* v_pos_3675_; lean_object* v_res_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3685_; 
v_pos_3675_ = lean_ctor_get(v___x_3674_, 0);
v_res_3676_ = lean_ctor_get(v___x_3674_, 1);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3674_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3678_ = v___x_3674_;
v_isShared_3679_ = v_isSharedCheck_3685_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_res_3676_);
lean_inc(v_pos_3675_);
lean_dec(v___x_3674_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3685_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
uint8_t v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3683_; 
v___x_3680_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(v_res_3676_);
v___x_3681_ = lean_box(v___x_3680_);
if (v_isShared_3679_ == 0)
{
lean_ctor_set(v___x_3678_, 1, v___x_3681_);
v___x_3683_ = v___x_3678_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_pos_3675_);
lean_ctor_set(v_reuseFailAlloc_3684_, 1, v___x_3681_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
else
{
lean_object* v_pos_3686_; lean_object* v_err_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3694_; 
v_pos_3686_ = lean_ctor_get(v___x_3674_, 0);
v_err_3687_ = lean_ctor_get(v___x_3674_, 1);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3674_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3689_ = v___x_3674_;
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_err_3687_);
lean_inc(v_pos_3686_);
lean_dec(v___x_3674_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3692_; 
if (v_isShared_3690_ == 0)
{
v___x_3692_ = v___x_3689_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_pos_3686_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v_err_3687_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
}
case 13:
{
lean_object* v_presentation_3695_; 
v_presentation_3695_ = lean_ctor_get(v_x_3322_, 0);
if (lean_obj_tag(v_presentation_3695_) == 0)
{
lean_object* v_val_3696_; lean_object* v___x_3697_; 
v_val_3696_ = lean_ctor_get(v_presentation_3695_, 0);
lean_inc(v_val_3696_);
v___x_3697_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseField(v_x_3322_, v_val_3696_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_pos_3698_; lean_object* v_res_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3732_; 
v_pos_3698_ = lean_ctor_get(v___x_3697_, 0);
v_res_3699_ = lean_ctor_get(v___x_3697_, 1);
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3701_ = v___x_3697_;
v_isShared_3702_ = v_isSharedCheck_3732_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_res_3699_);
lean_inc(v_pos_3698_);
lean_dec(v___x_3697_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3732_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3708_; uint8_t v___x_3709_; 
v___x_3708_ = lean_unsigned_to_nat(1u);
v___x_3709_ = lean_nat_dec_le(v___x_3708_, v_res_3699_);
if (v___x_3709_ == 0)
{
lean_dec(v_res_3699_);
lean_dec_ref(v_config_3320_);
goto v___jp_3703_;
}
else
{
lean_object* v___x_3710_; uint8_t v___x_3711_; 
v___x_3710_ = lean_unsigned_to_nat(7u);
v___x_3711_ = lean_nat_dec_le(v_res_3699_, v___x_3710_);
if (v___x_3711_ == 0)
{
lean_dec(v_res_3699_);
lean_dec_ref(v_config_3320_);
goto v___jp_3703_;
}
else
{
lean_object* v_dateformat_3712_; uint8_t v_firstDayOfWeek_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v_range_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; uint8_t v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
lean_del_object(v___x_3701_);
v_dateformat_3712_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3712_);
lean_dec_ref(v_config_3320_);
v_firstDayOfWeek_3713_ = lean_ctor_get_uint8(v_dateformat_3712_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_3712_);
v___x_3714_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_3713_);
v___x_3715_ = lean_nat_to_int(v_res_3699_);
v___x_3716_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3717_ = lean_int_sub(v___x_3715_, v___x_3716_);
lean_dec(v___x_3715_);
v___x_3718_ = lean_int_add(v___x_3717_, v___x_3714_);
lean_dec(v___x_3714_);
lean_dec(v___x_3717_);
v___x_3719_ = lean_int_sub(v___x_3718_, v___x_3716_);
lean_dec(v___x_3718_);
v___x_3720_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3);
v___x_3721_ = lean_int_emod(v___x_3719_, v___x_3720_);
lean_dec(v___x_3719_);
v___x_3722_ = lean_int_add(v___x_3721_, v___x_3716_);
lean_dec(v___x_3721_);
v_range_3723_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4);
v___x_3724_ = lean_int_sub(v___x_3722_, v___x_3716_);
lean_dec(v___x_3722_);
v___x_3725_ = lean_int_emod(v___x_3724_, v_range_3723_);
lean_dec(v___x_3724_);
v___x_3726_ = lean_int_add(v___x_3725_, v_range_3723_);
lean_dec(v___x_3725_);
v___x_3727_ = lean_int_emod(v___x_3726_, v_range_3723_);
lean_dec(v___x_3726_);
v___x_3728_ = lean_int_add(v___x_3727_, v___x_3716_);
lean_dec(v___x_3727_);
v___x_3729_ = l_Std_Time_Weekday_ofOrdinal(v___x_3728_);
lean_dec(v___x_3728_);
v___x_3730_ = lean_box(v___x_3729_);
v___x_3731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3731_, 0, v_pos_3698_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
return v___x_3731_;
}
}
v___jp_3703_:
{
lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3704_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2));
if (v_isShared_3702_ == 0)
{
lean_ctor_set_tag(v___x_3701_, 1);
lean_ctor_set(v___x_3701_, 1, v___x_3704_);
v___x_3706_ = v___x_3701_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_pos_3698_);
lean_ctor_set(v_reuseFailAlloc_3707_, 1, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
else
{
lean_object* v_pos_3733_; lean_object* v_err_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec_ref(v_config_3320_);
v_pos_3733_ = lean_ctor_get(v___x_3697_, 0);
v_err_3734_ = lean_ctor_get(v___x_3697_, 1);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3697_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_err_3734_);
lean_inc(v_pos_3733_);
lean_dec(v___x_3697_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_pos_3733_);
lean_ctor_set(v_reuseFailAlloc_3740_, 1, v_err_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
else
{
lean_object* v_dateformat_3742_; lean_object* v_val_3743_; lean_object* v_symbols_3744_; lean_object* v___x_3745_; uint8_t v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
lean_inc_ref(v_presentation_3695_);
lean_dec_ref_known(v_x_3322_, 1);
lean_dec(v_reserve_3321_);
v_dateformat_3742_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3742_);
lean_dec_ref(v_config_3320_);
v_val_3743_ = lean_ctor_get(v_presentation_3695_, 0);
lean_inc(v_val_3743_);
lean_dec_ref_known(v_presentation_3695_, 1);
v_symbols_3744_ = lean_ctor_get(v_dateformat_3742_, 1);
lean_inc_ref(v_symbols_3744_);
lean_dec_ref(v_dateformat_3742_);
v___x_3745_ = lean_unsigned_to_nat(7u);
v___x_3746_ = lean_unbox(v_val_3743_);
lean_dec(v_val_3743_);
v___x_3747_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_3744_, v___x_3746_);
lean_dec_ref(v_symbols_3744_);
v___x_3748_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3745_, v___x_3747_, v_a_3323_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v_pos_3749_; lean_object* v_res_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3759_; 
v_pos_3749_ = lean_ctor_get(v___x_3748_, 0);
v_res_3750_ = lean_ctor_get(v___x_3748_, 1);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3752_ = v___x_3748_;
v_isShared_3753_ = v_isSharedCheck_3759_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_res_3750_);
lean_inc(v_pos_3749_);
lean_dec(v___x_3748_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3759_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
uint8_t v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3757_; 
v___x_3754_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(v_res_3750_);
v___x_3755_ = lean_box(v___x_3754_);
if (v_isShared_3753_ == 0)
{
lean_ctor_set(v___x_3752_, 1, v___x_3755_);
v___x_3757_ = v___x_3752_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_pos_3749_);
lean_ctor_set(v_reuseFailAlloc_3758_, 1, v___x_3755_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
else
{
lean_object* v_pos_3760_; lean_object* v_err_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3768_; 
v_pos_3760_ = lean_ctor_get(v___x_3748_, 0);
v_err_3761_ = lean_ctor_get(v___x_3748_, 1);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3763_ = v___x_3748_;
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_err_3761_);
lean_inc(v_pos_3760_);
lean_dec(v___x_3748_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_pos_3760_);
lean_ctor_set(v_reuseFailAlloc_3767_, 1, v_err_3761_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
}
}
case 14:
{
lean_object* v_presentation_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3849_; 
v_presentation_3769_ = lean_ctor_get(v_x_3322_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_x_3322_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3771_ = v_x_3322_;
v_isShared_3772_ = v_isSharedCheck_3849_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_presentation_3769_);
lean_dec(v_x_3322_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3849_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
if (lean_obj_tag(v_presentation_3769_) == 0)
{
lean_object* v_val_3773_; lean_object* v___x_3775_; 
v_val_3773_ = lean_ctor_get(v_presentation_3769_, 0);
lean_inc(v_val_3773_);
if (v_isShared_3772_ == 0)
{
lean_ctor_set_tag(v___x_3771_, 13);
v___x_3775_ = v___x_3771_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_presentation_3769_);
v___x_3775_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; 
v___x_3776_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseField(v___x_3775_, v_val_3773_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_pos_3777_; lean_object* v_res_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3811_; 
v_pos_3777_ = lean_ctor_get(v___x_3776_, 0);
v_res_3778_ = lean_ctor_get(v___x_3776_, 1);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3780_ = v___x_3776_;
v_isShared_3781_ = v_isSharedCheck_3811_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_res_3778_);
lean_inc(v_pos_3777_);
lean_dec(v___x_3776_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3811_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3787_; uint8_t v___x_3788_; 
v___x_3787_ = lean_unsigned_to_nat(1u);
v___x_3788_ = lean_nat_dec_le(v___x_3787_, v_res_3778_);
if (v___x_3788_ == 0)
{
lean_dec(v_res_3778_);
lean_dec_ref(v_config_3320_);
goto v___jp_3782_;
}
else
{
lean_object* v___x_3789_; uint8_t v___x_3790_; 
v___x_3789_ = lean_unsigned_to_nat(7u);
v___x_3790_ = lean_nat_dec_le(v_res_3778_, v___x_3789_);
if (v___x_3790_ == 0)
{
lean_dec(v_res_3778_);
lean_dec_ref(v_config_3320_);
goto v___jp_3782_;
}
else
{
lean_object* v_dateformat_3791_; uint8_t v_firstDayOfWeek_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v_range_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; uint8_t v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
lean_del_object(v___x_3780_);
v_dateformat_3791_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3791_);
lean_dec_ref(v_config_3320_);
v_firstDayOfWeek_3792_ = lean_ctor_get_uint8(v_dateformat_3791_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_3791_);
v___x_3793_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_3792_);
v___x_3794_ = lean_nat_to_int(v_res_3778_);
v___x_3795_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3796_ = lean_int_sub(v___x_3794_, v___x_3795_);
lean_dec(v___x_3794_);
v___x_3797_ = lean_int_add(v___x_3796_, v___x_3793_);
lean_dec(v___x_3793_);
lean_dec(v___x_3796_);
v___x_3798_ = lean_int_sub(v___x_3797_, v___x_3795_);
lean_dec(v___x_3797_);
v___x_3799_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3);
v___x_3800_ = lean_int_emod(v___x_3798_, v___x_3799_);
lean_dec(v___x_3798_);
v___x_3801_ = lean_int_add(v___x_3800_, v___x_3795_);
lean_dec(v___x_3800_);
v_range_3802_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4);
v___x_3803_ = lean_int_sub(v___x_3801_, v___x_3795_);
lean_dec(v___x_3801_);
v___x_3804_ = lean_int_emod(v___x_3803_, v_range_3802_);
lean_dec(v___x_3803_);
v___x_3805_ = lean_int_add(v___x_3804_, v_range_3802_);
lean_dec(v___x_3804_);
v___x_3806_ = lean_int_emod(v___x_3805_, v_range_3802_);
lean_dec(v___x_3805_);
v___x_3807_ = lean_int_add(v___x_3806_, v___x_3795_);
lean_dec(v___x_3806_);
v___x_3808_ = l_Std_Time_Weekday_ofOrdinal(v___x_3807_);
lean_dec(v___x_3807_);
v___x_3809_ = lean_box(v___x_3808_);
v___x_3810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3810_, 0, v_pos_3777_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
return v___x_3810_;
}
}
v___jp_3782_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3783_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2));
if (v_isShared_3781_ == 0)
{
lean_ctor_set_tag(v___x_3780_, 1);
lean_ctor_set(v___x_3780_, 1, v___x_3783_);
v___x_3785_ = v___x_3780_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_pos_3777_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
else
{
lean_object* v_pos_3812_; lean_object* v_err_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
lean_dec_ref(v_config_3320_);
v_pos_3812_ = lean_ctor_get(v___x_3776_, 0);
v_err_3813_ = lean_ctor_get(v___x_3776_, 1);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3815_ = v___x_3776_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_err_3813_);
lean_inc(v_pos_3812_);
lean_dec(v___x_3776_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_pos_3812_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v_err_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
}
else
{
lean_object* v_dateformat_3822_; lean_object* v_val_3823_; lean_object* v_symbols_3824_; lean_object* v___x_3825_; uint8_t v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; 
lean_del_object(v___x_3771_);
lean_dec(v_reserve_3321_);
v_dateformat_3822_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3822_);
lean_dec_ref(v_config_3320_);
v_val_3823_ = lean_ctor_get(v_presentation_3769_, 0);
lean_inc(v_val_3823_);
lean_dec_ref_known(v_presentation_3769_, 1);
v_symbols_3824_ = lean_ctor_get(v_dateformat_3822_, 1);
lean_inc_ref(v_symbols_3824_);
lean_dec_ref(v_dateformat_3822_);
v___x_3825_ = lean_unsigned_to_nat(7u);
v___x_3826_ = lean_unbox(v_val_3823_);
lean_dec(v_val_3823_);
v___x_3827_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayNames(v_symbols_3824_, v___x_3826_);
lean_dec_ref(v_symbols_3824_);
v___x_3828_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3825_, v___x_3827_, v_a_3323_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_pos_3829_; lean_object* v_res_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3839_; 
v_pos_3829_ = lean_ctor_get(v___x_3828_, 0);
v_res_3830_ = lean_ctor_get(v___x_3828_, 1);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3832_ = v___x_3828_;
v_isShared_3833_ = v_isSharedCheck_3839_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_res_3830_);
lean_inc(v_pos_3829_);
lean_dec(v___x_3828_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3839_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
uint8_t v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3837_; 
v___x_3834_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(v_res_3830_);
v___x_3835_ = lean_box(v___x_3834_);
if (v_isShared_3833_ == 0)
{
lean_ctor_set(v___x_3832_, 1, v___x_3835_);
v___x_3837_ = v___x_3832_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_pos_3829_);
lean_ctor_set(v_reuseFailAlloc_3838_, 1, v___x_3835_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
else
{
lean_object* v_pos_3840_; lean_object* v_err_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
v_pos_3840_ = lean_ctor_get(v___x_3828_, 0);
v_err_3841_ = lean_ctor_get(v___x_3828_, 1);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v___x_3828_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_err_3841_);
lean_inc(v_pos_3840_);
lean_dec(v___x_3828_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_pos_3840_);
lean_ctor_set(v_reuseFailAlloc_3847_, 1, v_err_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
}
}
case 15:
{
lean_object* v_presentation_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
lean_dec_ref(v_config_3320_);
v_presentation_3850_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3850_);
v___x_3851_ = lean_unsigned_to_nat(1u);
v___x_3852_ = lean_unsigned_to_nat(5u);
v___x_3853_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3853_, 0, v_x_3322_);
lean_closure_set(v___x_3853_, 1, v_presentation_3850_);
lean_closure_set(v___x_3853_, 2, v_reserve_3321_);
v___x_3854_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3851_, v___x_3852_, v___x_3853_, v_a_3323_);
return v___x_3854_;
}
case 16:
{
lean_object* v_dateformat_3855_; uint8_t v_presentation_3856_; lean_object* v_symbols_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
lean_dec(v_reserve_3321_);
v_dateformat_3855_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3855_);
lean_dec_ref(v_config_3320_);
v_presentation_3856_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
v_symbols_3857_ = lean_ctor_get(v_dateformat_3855_, 1);
lean_inc_ref(v_symbols_3857_);
lean_dec_ref(v_dateformat_3855_);
v___x_3858_ = lean_unsigned_to_nat(2u);
v___x_3859_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerNames(v_symbols_3857_, v_presentation_3856_);
v___x_3860_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3858_, v___x_3859_, v_a_3323_);
if (lean_obj_tag(v___x_3860_) == 0)
{
lean_object* v_pos_3861_; lean_object* v_res_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3871_; 
v_pos_3861_ = lean_ctor_get(v___x_3860_, 0);
v_res_3862_ = lean_ctor_get(v___x_3860_, 1);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3864_ = v___x_3860_;
v_isShared_3865_ = v_isSharedCheck_3871_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_res_3862_);
lean_inc(v_pos_3861_);
lean_dec(v___x_3860_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3871_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
uint8_t v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3869_; 
v___x_3866_ = l___private_Std_Time_Format_Basic_0__Std_Time_markerOfIndex(v_res_3862_);
lean_dec(v_res_3862_);
v___x_3867_ = lean_box(v___x_3866_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set(v___x_3864_, 1, v___x_3867_);
v___x_3869_ = v___x_3864_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_pos_3861_);
lean_ctor_set(v_reuseFailAlloc_3870_, 1, v___x_3867_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
else
{
lean_object* v_pos_3872_; lean_object* v_err_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3880_; 
v_pos_3872_ = lean_ctor_get(v___x_3860_, 0);
v_err_3873_ = lean_ctor_get(v___x_3860_, 1);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3875_ = v___x_3860_;
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_err_3873_);
lean_inc(v_pos_3872_);
lean_dec(v___x_3860_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_pos_3872_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_err_3873_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
case 17:
{
lean_object* v_dateformat_3881_; uint8_t v_presentation_3882_; lean_object* v_symbols_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
lean_dec(v_reserve_3321_);
v_dateformat_3881_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3881_);
lean_dec_ref(v_config_3320_);
v_presentation_3882_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
v_symbols_3883_ = lean_ctor_get(v_dateformat_3881_, 1);
lean_inc_ref(v_symbols_3883_);
lean_dec_ref(v_dateformat_3881_);
v___x_3884_ = lean_unsigned_to_nat(4u);
v___x_3885_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodNames(v_symbols_3883_, v_presentation_3882_);
v___x_3886_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3884_, v___x_3885_, v_a_3323_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_pos_3887_; lean_object* v_res_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3897_; 
v_pos_3887_ = lean_ctor_get(v___x_3886_, 0);
v_res_3888_ = lean_ctor_get(v___x_3886_, 1);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3890_ = v___x_3886_;
v_isShared_3891_ = v_isSharedCheck_3897_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_res_3888_);
lean_inc(v_pos_3887_);
lean_dec(v___x_3886_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3897_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
uint8_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3895_; 
v___x_3892_ = l___private_Std_Time_Format_Basic_0__Std_Time_dayPeriodOfIndex(v_res_3888_);
lean_dec(v_res_3888_);
v___x_3893_ = lean_box(v___x_3892_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 1, v___x_3893_);
v___x_3895_ = v___x_3890_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_pos_3887_);
lean_ctor_set(v_reuseFailAlloc_3896_, 1, v___x_3893_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
else
{
lean_object* v_pos_3898_; lean_object* v_err_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
v_pos_3898_ = lean_ctor_get(v___x_3886_, 0);
v_err_3899_ = lean_ctor_get(v___x_3886_, 1);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3886_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_err_3899_);
lean_inc(v_pos_3898_);
lean_dec(v___x_3886_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_pos_3898_);
lean_ctor_set(v_reuseFailAlloc_3905_, 1, v_err_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
case 18:
{
lean_object* v_dateformat_3907_; uint8_t v_presentation_3908_; lean_object* v_symbols_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
lean_dec(v_reserve_3321_);
v_dateformat_3907_ = lean_ctor_get(v_config_3320_, 0);
lean_inc_ref(v_dateformat_3907_);
lean_dec_ref(v_config_3320_);
v_presentation_3908_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
v_symbols_3909_ = lean_ctor_get(v_dateformat_3907_, 1);
lean_inc_ref(v_symbols_3909_);
lean_dec_ref(v_dateformat_3907_);
v___x_3910_ = lean_unsigned_to_nat(6u);
v___x_3911_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodNames(v_symbols_3909_, v_presentation_3908_);
lean_dec_ref(v_symbols_3909_);
v___x_3912_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseName(v___x_3910_, v___x_3911_, v_a_3323_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_pos_3913_; lean_object* v_res_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3923_; 
v_pos_3913_ = lean_ctor_get(v___x_3912_, 0);
v_res_3914_ = lean_ctor_get(v___x_3912_, 1);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3916_ = v___x_3912_;
v_isShared_3917_ = v_isSharedCheck_3923_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_res_3914_);
lean_inc(v_pos_3913_);
lean_dec(v___x_3912_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3923_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
uint8_t v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3921_; 
v___x_3918_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodOfIndex(v_res_3914_);
lean_dec(v_res_3914_);
v___x_3919_ = lean_box(v___x_3918_);
if (v_isShared_3917_ == 0)
{
lean_ctor_set(v___x_3916_, 1, v___x_3919_);
v___x_3921_ = v___x_3916_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v_pos_3913_);
lean_ctor_set(v_reuseFailAlloc_3922_, 1, v___x_3919_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
return v___x_3921_;
}
}
}
else
{
lean_object* v_pos_3924_; lean_object* v_err_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
v_pos_3924_ = lean_ctor_get(v___x_3912_, 0);
v_err_3925_ = lean_ctor_get(v___x_3912_, 1);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3927_ = v___x_3912_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_err_3925_);
lean_inc(v_pos_3924_);
lean_dec(v___x_3912_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_pos_3924_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v_err_3925_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
case 19:
{
lean_object* v_presentation_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
lean_dec_ref(v_config_3320_);
v_presentation_3933_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3933_);
v___x_3934_ = lean_unsigned_to_nat(1u);
v___x_3935_ = lean_unsigned_to_nat(12u);
v___x_3936_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3936_, 0, v_x_3322_);
lean_closure_set(v___x_3936_, 1, v_presentation_3933_);
lean_closure_set(v___x_3936_, 2, v_reserve_3321_);
v___x_3937_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3934_, v___x_3935_, v___x_3936_, v_a_3323_);
return v___x_3937_;
}
case 20:
{
lean_object* v_presentation_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; 
lean_dec_ref(v_config_3320_);
v_presentation_3938_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3938_);
v___x_3939_ = lean_unsigned_to_nat(0u);
v___x_3940_ = lean_unsigned_to_nat(11u);
v___x_3941_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3941_, 0, v_x_3322_);
lean_closure_set(v___x_3941_, 1, v_presentation_3938_);
lean_closure_set(v___x_3941_, 2, v_reserve_3321_);
v___x_3942_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3939_, v___x_3940_, v___x_3941_, v_a_3323_);
return v___x_3942_;
}
case 21:
{
lean_object* v_presentation_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; 
lean_dec_ref(v_config_3320_);
v_presentation_3943_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3943_);
v___x_3944_ = lean_unsigned_to_nat(1u);
v___x_3945_ = lean_unsigned_to_nat(24u);
v___x_3946_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3946_, 0, v_x_3322_);
lean_closure_set(v___x_3946_, 1, v_presentation_3943_);
lean_closure_set(v___x_3946_, 2, v_reserve_3321_);
v___x_3947_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3944_, v___x_3945_, v___x_3946_, v_a_3323_);
return v___x_3947_;
}
case 22:
{
lean_object* v_presentation_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_dec_ref(v_config_3320_);
v_presentation_3948_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3948_);
v___x_3949_ = lean_unsigned_to_nat(0u);
v___x_3950_ = lean_unsigned_to_nat(23u);
v___x_3951_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3951_, 0, v_x_3322_);
lean_closure_set(v___x_3951_, 1, v_presentation_3948_);
lean_closure_set(v___x_3951_, 2, v_reserve_3321_);
v___x_3952_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3949_, v___x_3950_, v___x_3951_, v_a_3323_);
return v___x_3952_;
}
case 23:
{
lean_object* v_presentation_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
lean_dec_ref(v_config_3320_);
v_presentation_3953_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3953_);
v___x_3954_ = lean_unsigned_to_nat(0u);
v___x_3955_ = lean_unsigned_to_nat(59u);
v___x_3956_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3956_, 0, v_x_3322_);
lean_closure_set(v___x_3956_, 1, v_presentation_3953_);
lean_closure_set(v___x_3956_, 2, v_reserve_3321_);
v___x_3957_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3954_, v___x_3955_, v___x_3956_, v_a_3323_);
return v___x_3957_;
}
case 24:
{
uint8_t v_allowLeapSeconds_3958_; 
v_allowLeapSeconds_3958_ = lean_ctor_get_uint8(v_config_3320_, sizeof(void*)*1);
lean_dec_ref(v_config_3320_);
if (v_allowLeapSeconds_3958_ == 0)
{
lean_object* v_presentation_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v_presentation_3959_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3959_);
v___x_3960_ = lean_unsigned_to_nat(0u);
v___x_3961_ = lean_unsigned_to_nat(59u);
v___x_3962_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3962_, 0, v_x_3322_);
lean_closure_set(v___x_3962_, 1, v_presentation_3959_);
lean_closure_set(v___x_3962_, 2, v_reserve_3321_);
v___x_3963_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3960_, v___x_3961_, v___x_3962_, v_a_3323_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_pos_3964_; lean_object* v_res_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
v_pos_3964_ = lean_ctor_get(v___x_3963_, 0);
v_res_3965_ = lean_ctor_get(v___x_3963_, 1);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3963_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_res_3965_);
lean_inc(v_pos_3964_);
lean_dec(v___x_3963_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_pos_3964_);
lean_ctor_set(v_reuseFailAlloc_3971_, 1, v_res_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
else
{
return v___x_3963_;
}
}
else
{
lean_object* v_presentation_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v_presentation_3973_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3973_);
v___x_3974_ = lean_unsigned_to_nat(0u);
v___x_3975_ = lean_unsigned_to_nat(60u);
v___x_3976_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_3976_, 0, v_x_3322_);
lean_closure_set(v___x_3976_, 1, v_presentation_3973_);
lean_closure_set(v___x_3976_, 2, v_reserve_3321_);
v___x_3977_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3974_, v___x_3975_, v___x_3976_, v_a_3323_);
return v___x_3977_;
}
}
case 25:
{
lean_object* v_presentation_3978_; 
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v_presentation_3978_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3978_);
lean_dec_ref_known(v_x_3322_, 1);
if (lean_obj_tag(v_presentation_3978_) == 0)
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3979_ = lean_unsigned_to_nat(0u);
v___x_3980_ = lean_unsigned_to_nat(999999999u);
v___x_3981_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5));
v___x_3982_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3979_, v___x_3980_, v___x_3981_, v_a_3323_);
return v___x_3982_;
}
else
{
lean_object* v_digits_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
v_digits_3983_ = lean_ctor_get(v_presentation_3978_, 0);
lean_inc(v_digits_3983_);
lean_dec_ref_known(v_presentation_3978_, 1);
v___x_3984_ = lean_unsigned_to_nat(0u);
v___x_3985_ = lean_unsigned_to_nat(999999999u);
v___x_3986_ = lean_unsigned_to_nat(9u);
v___x_3987_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed), 3, 2);
lean_closure_set(v___x_3987_, 0, v_digits_3983_);
lean_closure_set(v___x_3987_, 1, v___x_3986_);
v___x_3988_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3984_, v___x_3985_, v___x_3987_, v_a_3323_);
return v___x_3988_;
}
}
case 26:
{
lean_object* v_presentation_3989_; lean_object* v___x_3990_; 
lean_dec_ref(v_config_3320_);
v_presentation_3989_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_3989_);
v___x_3990_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseField(v_x_3322_, v_presentation_3989_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_pos_3991_; lean_object* v_res_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4000_; 
v_pos_3991_ = lean_ctor_get(v___x_3990_, 0);
v_res_3992_ = lean_ctor_get(v___x_3990_, 1);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3994_ = v___x_3990_;
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_res_3992_);
lean_inc(v_pos_3991_);
lean_dec(v___x_3990_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3996_; lean_object* v___x_3998_; 
v___x_3996_ = lean_nat_to_int(v_res_3992_);
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 1, v___x_3996_);
v___x_3998_ = v___x_3994_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_pos_3991_);
lean_ctor_set(v_reuseFailAlloc_3999_, 1, v___x_3996_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
else
{
lean_object* v_pos_4001_; lean_object* v_err_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
v_pos_4001_ = lean_ctor_get(v___x_3990_, 0);
v_err_4002_ = lean_ctor_get(v___x_3990_, 1);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3990_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_err_4002_);
lean_inc(v_pos_4001_);
lean_dec(v___x_3990_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_pos_4001_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v_err_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
case 27:
{
lean_object* v_presentation_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
lean_dec_ref(v_config_3320_);
v_presentation_4010_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_4010_);
v___x_4011_ = lean_unsigned_to_nat(0u);
v___x_4012_ = lean_unsigned_to_nat(999999999u);
v___x_4013_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseField___boxed), 4, 3);
lean_closure_set(v___x_4013_, 0, v_x_3322_);
lean_closure_set(v___x_4013_, 1, v_presentation_4010_);
lean_closure_set(v___x_4013_, 2, v_reserve_3321_);
v___x_4014_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4011_, v___x_4012_, v___x_4013_, v_a_3323_);
return v___x_4014_;
}
case 28:
{
lean_object* v_presentation_4015_; lean_object* v___x_4016_; 
lean_dec_ref(v_config_3320_);
v_presentation_4015_ = lean_ctor_get(v_x_3322_, 0);
lean_inc(v_presentation_4015_);
v___x_4016_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseField(v_x_3322_, v_presentation_4015_, v_reserve_3321_, v_a_3323_);
lean_dec(v_reserve_3321_);
if (lean_obj_tag(v___x_4016_) == 0)
{
lean_object* v_pos_4017_; lean_object* v_res_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4026_; 
v_pos_4017_ = lean_ctor_get(v___x_4016_, 0);
v_res_4018_ = lean_ctor_get(v___x_4016_, 1);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4020_ = v___x_4016_;
v_isShared_4021_ = v_isSharedCheck_4026_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_res_4018_);
lean_inc(v_pos_4017_);
lean_dec(v___x_4016_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4026_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4022_; lean_object* v___x_4024_; 
v___x_4022_ = lean_nat_to_int(v_res_4018_);
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 1, v___x_4022_);
v___x_4024_ = v___x_4020_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_pos_4017_);
lean_ctor_set(v_reuseFailAlloc_4025_, 1, v___x_4022_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
return v___x_4024_;
}
}
}
else
{
lean_object* v_pos_4027_; lean_object* v_err_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
v_pos_4027_ = lean_ctor_get(v___x_4016_, 0);
v_err_4028_ = lean_ctor_get(v___x_4016_, 1);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_4016_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_err_4028_);
lean_inc(v_pos_4027_);
lean_dec(v___x_4016_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_pos_4027_);
lean_ctor_set(v_reuseFailAlloc_4034_, 1, v_err_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
case 29:
{
uint8_t v_presentation_4036_; 
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v_presentation_4036_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
if (v_presentation_4036_ == 0)
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
v___x_4038_ = l_Std_Internal_Parsec_String_pstring(v___x_4037_, v_a_3323_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_pos_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4046_; 
v_pos_4039_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4046_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4046_ == 0)
{
lean_object* v_unused_4047_; 
v_unused_4047_ = lean_ctor_get(v___x_4038_, 1);
lean_dec(v_unused_4047_);
v___x_4041_ = v___x_4038_;
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_pos_4039_);
lean_dec(v___x_4038_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v___x_4044_; 
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 1, v___x_4037_);
v___x_4044_ = v___x_4041_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v_pos_4039_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_4037_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
}
else
{
return v___x_4038_;
}
}
else
{
lean_object* v___x_4048_; 
v___x_4048_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseZoneId(v_a_3323_);
return v___x_4048_;
}
}
case 32:
{
uint8_t v_presentation_4049_; 
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v_presentation_4049_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
if (v_presentation_4049_ == 0)
{
uint8_t v___x_4050_; lean_object* v___x_4051_; 
v___x_4050_ = 2;
v___x_4051_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset(v___x_4050_, v_a_3323_);
return v___x_4051_;
}
else
{
v___y_3325_ = v_a_3323_;
goto v___jp_3324_;
}
}
case 33:
{
uint8_t v_presentation_4052_; lean_object* v___x_4053_; 
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v_presentation_4052_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
lean_inc_ref(v_a_3323_);
v___x_4053_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX(v_presentation_4052_, v_a_3323_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_dec_ref(v_a_3323_);
return v___x_4053_;
}
else
{
lean_object* v_pos_4054_; lean_object* v_snd_4055_; lean_object* v_snd_4056_; uint8_t v_decide_4057_; 
v_pos_4054_ = lean_ctor_get(v___x_4053_, 0);
v_snd_4055_ = lean_ctor_get(v_a_3323_, 1);
lean_inc(v_snd_4055_);
lean_dec_ref(v_a_3323_);
v_snd_4056_ = lean_ctor_get(v_pos_4054_, 1);
v_decide_4057_ = lean_nat_dec_eq(v_snd_4055_, v_snd_4056_);
lean_dec(v_snd_4055_);
if (v_decide_4057_ == 0)
{
return v___x_4053_;
}
else
{
lean_object* v___x_4058_; lean_object* v___x_4059_; 
lean_inc(v_pos_4054_);
lean_dec_ref_known(v___x_4053_, 2);
v___x_4058_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5));
v___x_4059_ = l_Std_Internal_Parsec_String_pstring(v___x_4058_, v_pos_4054_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_pos_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4068_; 
v_pos_4060_ = lean_ctor_get(v___x_4059_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4068_ == 0)
{
lean_object* v_unused_4069_; 
v_unused_4069_ = lean_ctor_get(v___x_4059_, 1);
lean_dec(v_unused_4069_);
v___x_4062_ = v___x_4059_;
v_isShared_4063_ = v_isSharedCheck_4068_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_pos_4060_);
lean_dec(v___x_4059_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4068_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4064_; lean_object* v___x_4066_; 
v___x_4064_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_4063_ == 0)
{
lean_ctor_set(v___x_4062_, 1, v___x_4064_);
v___x_4066_ = v___x_4062_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_pos_4060_);
lean_ctor_set(v_reuseFailAlloc_4067_, 1, v___x_4064_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
else
{
lean_object* v_pos_4070_; lean_object* v_err_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4078_; 
v_pos_4070_ = lean_ctor_get(v___x_4059_, 0);
v_err_4071_ = lean_ctor_get(v___x_4059_, 1);
v_isSharedCheck_4078_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4078_ == 0)
{
v___x_4073_ = v___x_4059_;
v_isShared_4074_ = v_isSharedCheck_4078_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_err_4071_);
lean_inc(v_pos_4070_);
lean_dec(v___x_4059_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4078_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v___x_4076_; 
if (v_isShared_4074_ == 0)
{
v___x_4076_ = v___x_4073_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_pos_4070_);
lean_ctor_set(v_reuseFailAlloc_4077_, 1, v_err_4071_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
}
}
}
case 34:
{
uint8_t v_presentation_4079_; lean_object* v___x_4080_; 
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v_presentation_4079_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
v___x_4080_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffsetX(v_presentation_4079_, v_a_3323_);
return v___x_4080_;
}
case 35:
{
uint8_t v_presentation_4081_; 
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v_presentation_4081_ = lean_ctor_get_uint8(v_x_3322_, 0);
lean_dec_ref_known(v_x_3322_, 0);
switch(v_presentation_4081_)
{
case 0:
{
uint8_t v___x_4082_; uint8_t v___x_4083_; uint8_t v___x_4084_; lean_object* v___x_4085_; 
v___x_4082_ = 0;
v___x_4083_ = 2;
v___x_4084_ = 0;
v___x_4085_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4082_, v___x_4083_, v___x_4084_, v_a_3323_);
return v___x_4085_;
}
case 1:
{
v___y_3325_ = v_a_3323_;
goto v___jp_3324_;
}
default: 
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__5));
lean_inc_ref(v_a_3323_);
v___x_4087_ = l_Std_Internal_Parsec_String_pstring(v___x_4086_, v_a_3323_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_pos_4088_; lean_object* v___x_4090_; uint8_t v_isShared_4091_; uint8_t v_isSharedCheck_4096_; 
lean_dec_ref(v_a_3323_);
v_pos_4088_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4096_ == 0)
{
lean_object* v_unused_4097_; 
v_unused_4097_ = lean_ctor_get(v___x_4087_, 1);
lean_dec(v_unused_4097_);
v___x_4090_ = v___x_4087_;
v_isShared_4091_ = v_isSharedCheck_4096_;
goto v_resetjp_4089_;
}
else
{
lean_inc(v_pos_4088_);
lean_dec(v___x_4087_);
v___x_4090_ = lean_box(0);
v_isShared_4091_ = v_isSharedCheck_4096_;
goto v_resetjp_4089_;
}
v_resetjp_4089_:
{
lean_object* v___x_4092_; lean_object* v___x_4094_; 
v___x_4092_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_4091_ == 0)
{
lean_ctor_set(v___x_4090_, 1, v___x_4092_);
v___x_4094_ = v___x_4090_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_pos_4088_);
lean_ctor_set(v_reuseFailAlloc_4095_, 1, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
else
{
lean_object* v_pos_4098_; lean_object* v_err_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4112_; 
v_pos_4098_ = lean_ctor_get(v___x_4087_, 0);
v_err_4099_ = lean_ctor_get(v___x_4087_, 1);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4101_ = v___x_4087_;
v_isShared_4102_ = v_isSharedCheck_4112_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_err_4099_);
lean_inc(v_pos_4098_);
lean_dec(v___x_4087_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4112_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v_snd_4103_; lean_object* v_snd_4104_; uint8_t v_decide_4105_; 
v_snd_4103_ = lean_ctor_get(v_a_3323_, 1);
lean_inc(v_snd_4103_);
lean_dec_ref(v_a_3323_);
v_snd_4104_ = lean_ctor_get(v_pos_4098_, 1);
v_decide_4105_ = lean_nat_dec_eq(v_snd_4103_, v_snd_4104_);
lean_dec(v_snd_4103_);
if (v_decide_4105_ == 0)
{
lean_object* v___x_4107_; 
if (v_isShared_4102_ == 0)
{
v___x_4107_ = v___x_4101_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_pos_4098_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v_err_4099_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
else
{
uint8_t v___x_4109_; uint8_t v___x_4110_; lean_object* v___x_4111_; 
lean_del_object(v___x_4101_);
lean_dec(v_err_4099_);
v___x_4109_ = 0;
v___x_4110_ = 2;
v___x_4111_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4109_, v___x_4110_, v_decide_4105_, v_pos_4098_);
return v___x_4111_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_4113_; 
lean_dec_ref(v_x_3322_);
lean_dec(v_reserve_3321_);
lean_dec_ref(v_config_3320_);
v___x_4113_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseZoneId(v_a_3323_);
return v___x_4113_;
}
}
v___jp_3324_:
{
uint8_t v___x_3326_; lean_object* v___x_3327_; 
v___x_3326_ = 0;
v___x_3327_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseGmtOffset(v___x_3326_, v___y_3325_);
return v___x_3327_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_FormatType_match__1_splitter___redArg(lean_object* v_x_4114_, lean_object* v_h__1_4115_, lean_object* v_h__2_4116_, lean_object* v_h__3_4117_){
_start:
{
if (lean_obj_tag(v_x_4114_) == 0)
{
lean_object* v___x_4118_; lean_object* v___x_4119_; 
lean_dec(v_h__2_4116_);
lean_dec(v_h__1_4115_);
v___x_4118_ = lean_box(0);
v___x_4119_ = lean_apply_1(v_h__3_4117_, v___x_4118_);
return v___x_4119_;
}
else
{
lean_object* v_head_4120_; 
lean_dec(v_h__3_4117_);
v_head_4120_ = lean_ctor_get(v_x_4114_, 0);
lean_inc(v_head_4120_);
if (lean_obj_tag(v_head_4120_) == 0)
{
lean_object* v_tail_4121_; lean_object* v_val_4122_; lean_object* v___x_4123_; 
lean_dec(v_h__1_4115_);
v_tail_4121_ = lean_ctor_get(v_x_4114_, 1);
lean_inc(v_tail_4121_);
lean_dec_ref_known(v_x_4114_, 2);
v_val_4122_ = lean_ctor_get(v_head_4120_, 0);
lean_inc_ref(v_val_4122_);
lean_dec_ref_known(v_head_4120_, 1);
v___x_4123_ = lean_apply_2(v_h__2_4116_, v_val_4122_, v_tail_4121_);
return v___x_4123_;
}
else
{
lean_object* v_tail_4124_; lean_object* v_modifier_4125_; lean_object* v___x_4126_; 
lean_dec(v_h__2_4116_);
v_tail_4124_ = lean_ctor_get(v_x_4114_, 1);
lean_inc(v_tail_4124_);
lean_dec_ref_known(v_x_4114_, 2);
v_modifier_4125_ = lean_ctor_get(v_head_4120_, 0);
lean_inc_ref(v_modifier_4125_);
lean_dec_ref_known(v_head_4120_, 1);
v___x_4126_ = lean_apply_2(v_h__1_4115_, v_modifier_4125_, v_tail_4124_);
return v___x_4126_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_FormatType_match__1_splitter(lean_object* v_motive_4127_, lean_object* v_x_4128_, lean_object* v_h__1_4129_, lean_object* v_h__2_4130_, lean_object* v_h__3_4131_){
_start:
{
if (lean_obj_tag(v_x_4128_) == 0)
{
lean_object* v___x_4132_; lean_object* v___x_4133_; 
lean_dec(v_h__2_4130_);
lean_dec(v_h__1_4129_);
v___x_4132_ = lean_box(0);
v___x_4133_ = lean_apply_1(v_h__3_4131_, v___x_4132_);
return v___x_4133_;
}
else
{
lean_object* v_head_4134_; 
lean_dec(v_h__3_4131_);
v_head_4134_ = lean_ctor_get(v_x_4128_, 0);
lean_inc(v_head_4134_);
if (lean_obj_tag(v_head_4134_) == 0)
{
lean_object* v_tail_4135_; lean_object* v_val_4136_; lean_object* v___x_4137_; 
lean_dec(v_h__1_4129_);
v_tail_4135_ = lean_ctor_get(v_x_4128_, 1);
lean_inc(v_tail_4135_);
lean_dec_ref_known(v_x_4128_, 2);
v_val_4136_ = lean_ctor_get(v_head_4134_, 0);
lean_inc_ref(v_val_4136_);
lean_dec_ref_known(v_head_4134_, 1);
v___x_4137_ = lean_apply_2(v_h__2_4130_, v_val_4136_, v_tail_4135_);
return v___x_4137_;
}
else
{
lean_object* v_tail_4138_; lean_object* v_modifier_4139_; lean_object* v___x_4140_; 
lean_dec(v_h__2_4130_);
v_tail_4138_ = lean_ctor_get(v_x_4128_, 1);
lean_inc(v_tail_4138_);
lean_dec_ref_known(v_x_4128_, 2);
v_modifier_4139_ = lean_ctor_get(v_head_4134_, 0);
lean_inc_ref(v_modifier_4139_);
lean_dec_ref_known(v_head_4134_, 1);
v___x_4140_ = lean_apply_2(v_h__1_4129_, v_modifier_4139_, v_tail_4138_);
return v___x_4140_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(lean_object* v_date_4141_, lean_object* v_modifier_4142_, lean_object* v_data_4143_){
_start:
{
switch(lean_obj_tag(v_modifier_4142_))
{
case 0:
{
lean_object* v_y_4144_; lean_object* v_u_4145_; lean_object* v_Y_4146_; lean_object* v_D_4147_; lean_object* v_M_4148_; lean_object* v_L_4149_; lean_object* v_d_4150_; lean_object* v_Q_4151_; lean_object* v_q_4152_; lean_object* v_w_4153_; lean_object* v_W_4154_; lean_object* v_E_4155_; lean_object* v_e_4156_; lean_object* v_c_4157_; lean_object* v_F_4158_; lean_object* v_a_4159_; lean_object* v_b_4160_; lean_object* v_B_4161_; lean_object* v_h_4162_; lean_object* v_K_4163_; lean_object* v_k_4164_; lean_object* v_H_4165_; lean_object* v_m_4166_; lean_object* v_s_4167_; lean_object* v_S_4168_; lean_object* v_A_4169_; lean_object* v_n_4170_; lean_object* v_N_4171_; lean_object* v_V_4172_; lean_object* v_z_4173_; lean_object* v_zabbrev_4174_; lean_object* v_v_4175_; lean_object* v_O_4176_; lean_object* v_X_4177_; lean_object* v_x_4178_; lean_object* v_Z_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_y_4144_ = lean_ctor_get(v_date_4141_, 1);
v_u_4145_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4146_ = lean_ctor_get(v_date_4141_, 3);
v_D_4147_ = lean_ctor_get(v_date_4141_, 4);
v_M_4148_ = lean_ctor_get(v_date_4141_, 5);
v_L_4149_ = lean_ctor_get(v_date_4141_, 6);
v_d_4150_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4151_ = lean_ctor_get(v_date_4141_, 8);
v_q_4152_ = lean_ctor_get(v_date_4141_, 9);
v_w_4153_ = lean_ctor_get(v_date_4141_, 10);
v_W_4154_ = lean_ctor_get(v_date_4141_, 11);
v_E_4155_ = lean_ctor_get(v_date_4141_, 12);
v_e_4156_ = lean_ctor_get(v_date_4141_, 13);
v_c_4157_ = lean_ctor_get(v_date_4141_, 14);
v_F_4158_ = lean_ctor_get(v_date_4141_, 15);
v_a_4159_ = lean_ctor_get(v_date_4141_, 16);
v_b_4160_ = lean_ctor_get(v_date_4141_, 17);
v_B_4161_ = lean_ctor_get(v_date_4141_, 18);
v_h_4162_ = lean_ctor_get(v_date_4141_, 19);
v_K_4163_ = lean_ctor_get(v_date_4141_, 20);
v_k_4164_ = lean_ctor_get(v_date_4141_, 21);
v_H_4165_ = lean_ctor_get(v_date_4141_, 22);
v_m_4166_ = lean_ctor_get(v_date_4141_, 23);
v_s_4167_ = lean_ctor_get(v_date_4141_, 24);
v_S_4168_ = lean_ctor_get(v_date_4141_, 25);
v_A_4169_ = lean_ctor_get(v_date_4141_, 26);
v_n_4170_ = lean_ctor_get(v_date_4141_, 27);
v_N_4171_ = lean_ctor_get(v_date_4141_, 28);
v_V_4172_ = lean_ctor_get(v_date_4141_, 29);
v_z_4173_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4174_ = lean_ctor_get(v_date_4141_, 31);
v_v_4175_ = lean_ctor_get(v_date_4141_, 32);
v_O_4176_ = lean_ctor_get(v_date_4141_, 33);
v_X_4177_ = lean_ctor_get(v_date_4141_, 34);
v_x_4178_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4179_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4187_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4187_ == 0)
{
lean_object* v_unused_4188_; 
v_unused_4188_ = lean_ctor_get(v_date_4141_, 0);
lean_dec(v_unused_4188_);
v___x_4181_ = v_date_4141_;
v_isShared_4182_ = v_isSharedCheck_4187_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_Z_4179_);
lean_inc(v_x_4178_);
lean_inc(v_X_4177_);
lean_inc(v_O_4176_);
lean_inc(v_v_4175_);
lean_inc(v_zabbrev_4174_);
lean_inc(v_z_4173_);
lean_inc(v_V_4172_);
lean_inc(v_N_4171_);
lean_inc(v_n_4170_);
lean_inc(v_A_4169_);
lean_inc(v_S_4168_);
lean_inc(v_s_4167_);
lean_inc(v_m_4166_);
lean_inc(v_H_4165_);
lean_inc(v_k_4164_);
lean_inc(v_K_4163_);
lean_inc(v_h_4162_);
lean_inc(v_B_4161_);
lean_inc(v_b_4160_);
lean_inc(v_a_4159_);
lean_inc(v_F_4158_);
lean_inc(v_c_4157_);
lean_inc(v_e_4156_);
lean_inc(v_E_4155_);
lean_inc(v_W_4154_);
lean_inc(v_w_4153_);
lean_inc(v_q_4152_);
lean_inc(v_Q_4151_);
lean_inc(v_d_4150_);
lean_inc(v_L_4149_);
lean_inc(v_M_4148_);
lean_inc(v_D_4147_);
lean_inc(v_Y_4146_);
lean_inc(v_u_4145_);
lean_inc(v_y_4144_);
lean_dec(v_date_4141_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4187_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4183_; lean_object* v___x_4185_; 
v___x_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_data_4143_);
if (v_isShared_4182_ == 0)
{
lean_ctor_set(v___x_4181_, 0, v___x_4183_);
v___x_4185_ = v___x_4181_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4183_);
lean_ctor_set(v_reuseFailAlloc_4186_, 1, v_y_4144_);
lean_ctor_set(v_reuseFailAlloc_4186_, 2, v_u_4145_);
lean_ctor_set(v_reuseFailAlloc_4186_, 3, v_Y_4146_);
lean_ctor_set(v_reuseFailAlloc_4186_, 4, v_D_4147_);
lean_ctor_set(v_reuseFailAlloc_4186_, 5, v_M_4148_);
lean_ctor_set(v_reuseFailAlloc_4186_, 6, v_L_4149_);
lean_ctor_set(v_reuseFailAlloc_4186_, 7, v_d_4150_);
lean_ctor_set(v_reuseFailAlloc_4186_, 8, v_Q_4151_);
lean_ctor_set(v_reuseFailAlloc_4186_, 9, v_q_4152_);
lean_ctor_set(v_reuseFailAlloc_4186_, 10, v_w_4153_);
lean_ctor_set(v_reuseFailAlloc_4186_, 11, v_W_4154_);
lean_ctor_set(v_reuseFailAlloc_4186_, 12, v_E_4155_);
lean_ctor_set(v_reuseFailAlloc_4186_, 13, v_e_4156_);
lean_ctor_set(v_reuseFailAlloc_4186_, 14, v_c_4157_);
lean_ctor_set(v_reuseFailAlloc_4186_, 15, v_F_4158_);
lean_ctor_set(v_reuseFailAlloc_4186_, 16, v_a_4159_);
lean_ctor_set(v_reuseFailAlloc_4186_, 17, v_b_4160_);
lean_ctor_set(v_reuseFailAlloc_4186_, 18, v_B_4161_);
lean_ctor_set(v_reuseFailAlloc_4186_, 19, v_h_4162_);
lean_ctor_set(v_reuseFailAlloc_4186_, 20, v_K_4163_);
lean_ctor_set(v_reuseFailAlloc_4186_, 21, v_k_4164_);
lean_ctor_set(v_reuseFailAlloc_4186_, 22, v_H_4165_);
lean_ctor_set(v_reuseFailAlloc_4186_, 23, v_m_4166_);
lean_ctor_set(v_reuseFailAlloc_4186_, 24, v_s_4167_);
lean_ctor_set(v_reuseFailAlloc_4186_, 25, v_S_4168_);
lean_ctor_set(v_reuseFailAlloc_4186_, 26, v_A_4169_);
lean_ctor_set(v_reuseFailAlloc_4186_, 27, v_n_4170_);
lean_ctor_set(v_reuseFailAlloc_4186_, 28, v_N_4171_);
lean_ctor_set(v_reuseFailAlloc_4186_, 29, v_V_4172_);
lean_ctor_set(v_reuseFailAlloc_4186_, 30, v_z_4173_);
lean_ctor_set(v_reuseFailAlloc_4186_, 31, v_zabbrev_4174_);
lean_ctor_set(v_reuseFailAlloc_4186_, 32, v_v_4175_);
lean_ctor_set(v_reuseFailAlloc_4186_, 33, v_O_4176_);
lean_ctor_set(v_reuseFailAlloc_4186_, 34, v_X_4177_);
lean_ctor_set(v_reuseFailAlloc_4186_, 35, v_x_4178_);
lean_ctor_set(v_reuseFailAlloc_4186_, 36, v_Z_4179_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
case 1:
{
lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4239_; 
v_isSharedCheck_4239_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4239_ == 0)
{
lean_object* v_unused_4240_; 
v_unused_4240_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4240_);
v___x_4190_ = v_modifier_4142_;
v_isShared_4191_ = v_isSharedCheck_4239_;
goto v_resetjp_4189_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4239_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v_G_4192_; lean_object* v_y_4193_; lean_object* v_Y_4194_; lean_object* v_D_4195_; lean_object* v_M_4196_; lean_object* v_L_4197_; lean_object* v_d_4198_; lean_object* v_Q_4199_; lean_object* v_q_4200_; lean_object* v_w_4201_; lean_object* v_W_4202_; lean_object* v_E_4203_; lean_object* v_e_4204_; lean_object* v_c_4205_; lean_object* v_F_4206_; lean_object* v_a_4207_; lean_object* v_b_4208_; lean_object* v_B_4209_; lean_object* v_h_4210_; lean_object* v_K_4211_; lean_object* v_k_4212_; lean_object* v_H_4213_; lean_object* v_m_4214_; lean_object* v_s_4215_; lean_object* v_S_4216_; lean_object* v_A_4217_; lean_object* v_n_4218_; lean_object* v_N_4219_; lean_object* v_V_4220_; lean_object* v_z_4221_; lean_object* v_zabbrev_4222_; lean_object* v_v_4223_; lean_object* v_O_4224_; lean_object* v_X_4225_; lean_object* v_x_4226_; lean_object* v_Z_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4237_; 
v_G_4192_ = lean_ctor_get(v_date_4141_, 0);
v_y_4193_ = lean_ctor_get(v_date_4141_, 1);
v_Y_4194_ = lean_ctor_get(v_date_4141_, 3);
v_D_4195_ = lean_ctor_get(v_date_4141_, 4);
v_M_4196_ = lean_ctor_get(v_date_4141_, 5);
v_L_4197_ = lean_ctor_get(v_date_4141_, 6);
v_d_4198_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4199_ = lean_ctor_get(v_date_4141_, 8);
v_q_4200_ = lean_ctor_get(v_date_4141_, 9);
v_w_4201_ = lean_ctor_get(v_date_4141_, 10);
v_W_4202_ = lean_ctor_get(v_date_4141_, 11);
v_E_4203_ = lean_ctor_get(v_date_4141_, 12);
v_e_4204_ = lean_ctor_get(v_date_4141_, 13);
v_c_4205_ = lean_ctor_get(v_date_4141_, 14);
v_F_4206_ = lean_ctor_get(v_date_4141_, 15);
v_a_4207_ = lean_ctor_get(v_date_4141_, 16);
v_b_4208_ = lean_ctor_get(v_date_4141_, 17);
v_B_4209_ = lean_ctor_get(v_date_4141_, 18);
v_h_4210_ = lean_ctor_get(v_date_4141_, 19);
v_K_4211_ = lean_ctor_get(v_date_4141_, 20);
v_k_4212_ = lean_ctor_get(v_date_4141_, 21);
v_H_4213_ = lean_ctor_get(v_date_4141_, 22);
v_m_4214_ = lean_ctor_get(v_date_4141_, 23);
v_s_4215_ = lean_ctor_get(v_date_4141_, 24);
v_S_4216_ = lean_ctor_get(v_date_4141_, 25);
v_A_4217_ = lean_ctor_get(v_date_4141_, 26);
v_n_4218_ = lean_ctor_get(v_date_4141_, 27);
v_N_4219_ = lean_ctor_get(v_date_4141_, 28);
v_V_4220_ = lean_ctor_get(v_date_4141_, 29);
v_z_4221_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4222_ = lean_ctor_get(v_date_4141_, 31);
v_v_4223_ = lean_ctor_get(v_date_4141_, 32);
v_O_4224_ = lean_ctor_get(v_date_4141_, 33);
v_X_4225_ = lean_ctor_get(v_date_4141_, 34);
v_x_4226_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4227_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4237_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4237_ == 0)
{
lean_object* v_unused_4238_; 
v_unused_4238_ = lean_ctor_get(v_date_4141_, 2);
lean_dec(v_unused_4238_);
v___x_4229_ = v_date_4141_;
v_isShared_4230_ = v_isSharedCheck_4237_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_Z_4227_);
lean_inc(v_x_4226_);
lean_inc(v_X_4225_);
lean_inc(v_O_4224_);
lean_inc(v_v_4223_);
lean_inc(v_zabbrev_4222_);
lean_inc(v_z_4221_);
lean_inc(v_V_4220_);
lean_inc(v_N_4219_);
lean_inc(v_n_4218_);
lean_inc(v_A_4217_);
lean_inc(v_S_4216_);
lean_inc(v_s_4215_);
lean_inc(v_m_4214_);
lean_inc(v_H_4213_);
lean_inc(v_k_4212_);
lean_inc(v_K_4211_);
lean_inc(v_h_4210_);
lean_inc(v_B_4209_);
lean_inc(v_b_4208_);
lean_inc(v_a_4207_);
lean_inc(v_F_4206_);
lean_inc(v_c_4205_);
lean_inc(v_e_4204_);
lean_inc(v_E_4203_);
lean_inc(v_W_4202_);
lean_inc(v_w_4201_);
lean_inc(v_q_4200_);
lean_inc(v_Q_4199_);
lean_inc(v_d_4198_);
lean_inc(v_L_4197_);
lean_inc(v_M_4196_);
lean_inc(v_D_4195_);
lean_inc(v_Y_4194_);
lean_inc(v_y_4193_);
lean_inc(v_G_4192_);
lean_dec(v_date_4141_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4237_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 0, v_data_4143_);
v___x_4232_ = v___x_4190_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v_data_4143_);
v___x_4232_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
lean_object* v___x_4234_; 
if (v_isShared_4230_ == 0)
{
lean_ctor_set(v___x_4229_, 2, v___x_4232_);
v___x_4234_ = v___x_4229_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_G_4192_);
lean_ctor_set(v_reuseFailAlloc_4235_, 1, v_y_4193_);
lean_ctor_set(v_reuseFailAlloc_4235_, 2, v___x_4232_);
lean_ctor_set(v_reuseFailAlloc_4235_, 3, v_Y_4194_);
lean_ctor_set(v_reuseFailAlloc_4235_, 4, v_D_4195_);
lean_ctor_set(v_reuseFailAlloc_4235_, 5, v_M_4196_);
lean_ctor_set(v_reuseFailAlloc_4235_, 6, v_L_4197_);
lean_ctor_set(v_reuseFailAlloc_4235_, 7, v_d_4198_);
lean_ctor_set(v_reuseFailAlloc_4235_, 8, v_Q_4199_);
lean_ctor_set(v_reuseFailAlloc_4235_, 9, v_q_4200_);
lean_ctor_set(v_reuseFailAlloc_4235_, 10, v_w_4201_);
lean_ctor_set(v_reuseFailAlloc_4235_, 11, v_W_4202_);
lean_ctor_set(v_reuseFailAlloc_4235_, 12, v_E_4203_);
lean_ctor_set(v_reuseFailAlloc_4235_, 13, v_e_4204_);
lean_ctor_set(v_reuseFailAlloc_4235_, 14, v_c_4205_);
lean_ctor_set(v_reuseFailAlloc_4235_, 15, v_F_4206_);
lean_ctor_set(v_reuseFailAlloc_4235_, 16, v_a_4207_);
lean_ctor_set(v_reuseFailAlloc_4235_, 17, v_b_4208_);
lean_ctor_set(v_reuseFailAlloc_4235_, 18, v_B_4209_);
lean_ctor_set(v_reuseFailAlloc_4235_, 19, v_h_4210_);
lean_ctor_set(v_reuseFailAlloc_4235_, 20, v_K_4211_);
lean_ctor_set(v_reuseFailAlloc_4235_, 21, v_k_4212_);
lean_ctor_set(v_reuseFailAlloc_4235_, 22, v_H_4213_);
lean_ctor_set(v_reuseFailAlloc_4235_, 23, v_m_4214_);
lean_ctor_set(v_reuseFailAlloc_4235_, 24, v_s_4215_);
lean_ctor_set(v_reuseFailAlloc_4235_, 25, v_S_4216_);
lean_ctor_set(v_reuseFailAlloc_4235_, 26, v_A_4217_);
lean_ctor_set(v_reuseFailAlloc_4235_, 27, v_n_4218_);
lean_ctor_set(v_reuseFailAlloc_4235_, 28, v_N_4219_);
lean_ctor_set(v_reuseFailAlloc_4235_, 29, v_V_4220_);
lean_ctor_set(v_reuseFailAlloc_4235_, 30, v_z_4221_);
lean_ctor_set(v_reuseFailAlloc_4235_, 31, v_zabbrev_4222_);
lean_ctor_set(v_reuseFailAlloc_4235_, 32, v_v_4223_);
lean_ctor_set(v_reuseFailAlloc_4235_, 33, v_O_4224_);
lean_ctor_set(v_reuseFailAlloc_4235_, 34, v_X_4225_);
lean_ctor_set(v_reuseFailAlloc_4235_, 35, v_x_4226_);
lean_ctor_set(v_reuseFailAlloc_4235_, 36, v_Z_4227_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
}
case 2:
{
lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4291_; 
v_isSharedCheck_4291_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4291_ == 0)
{
lean_object* v_unused_4292_; 
v_unused_4292_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4292_);
v___x_4242_ = v_modifier_4142_;
v_isShared_4243_ = v_isSharedCheck_4291_;
goto v_resetjp_4241_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4291_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v_G_4244_; lean_object* v_u_4245_; lean_object* v_Y_4246_; lean_object* v_D_4247_; lean_object* v_M_4248_; lean_object* v_L_4249_; lean_object* v_d_4250_; lean_object* v_Q_4251_; lean_object* v_q_4252_; lean_object* v_w_4253_; lean_object* v_W_4254_; lean_object* v_E_4255_; lean_object* v_e_4256_; lean_object* v_c_4257_; lean_object* v_F_4258_; lean_object* v_a_4259_; lean_object* v_b_4260_; lean_object* v_B_4261_; lean_object* v_h_4262_; lean_object* v_K_4263_; lean_object* v_k_4264_; lean_object* v_H_4265_; lean_object* v_m_4266_; lean_object* v_s_4267_; lean_object* v_S_4268_; lean_object* v_A_4269_; lean_object* v_n_4270_; lean_object* v_N_4271_; lean_object* v_V_4272_; lean_object* v_z_4273_; lean_object* v_zabbrev_4274_; lean_object* v_v_4275_; lean_object* v_O_4276_; lean_object* v_X_4277_; lean_object* v_x_4278_; lean_object* v_Z_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4289_; 
v_G_4244_ = lean_ctor_get(v_date_4141_, 0);
v_u_4245_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4246_ = lean_ctor_get(v_date_4141_, 3);
v_D_4247_ = lean_ctor_get(v_date_4141_, 4);
v_M_4248_ = lean_ctor_get(v_date_4141_, 5);
v_L_4249_ = lean_ctor_get(v_date_4141_, 6);
v_d_4250_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4251_ = lean_ctor_get(v_date_4141_, 8);
v_q_4252_ = lean_ctor_get(v_date_4141_, 9);
v_w_4253_ = lean_ctor_get(v_date_4141_, 10);
v_W_4254_ = lean_ctor_get(v_date_4141_, 11);
v_E_4255_ = lean_ctor_get(v_date_4141_, 12);
v_e_4256_ = lean_ctor_get(v_date_4141_, 13);
v_c_4257_ = lean_ctor_get(v_date_4141_, 14);
v_F_4258_ = lean_ctor_get(v_date_4141_, 15);
v_a_4259_ = lean_ctor_get(v_date_4141_, 16);
v_b_4260_ = lean_ctor_get(v_date_4141_, 17);
v_B_4261_ = lean_ctor_get(v_date_4141_, 18);
v_h_4262_ = lean_ctor_get(v_date_4141_, 19);
v_K_4263_ = lean_ctor_get(v_date_4141_, 20);
v_k_4264_ = lean_ctor_get(v_date_4141_, 21);
v_H_4265_ = lean_ctor_get(v_date_4141_, 22);
v_m_4266_ = lean_ctor_get(v_date_4141_, 23);
v_s_4267_ = lean_ctor_get(v_date_4141_, 24);
v_S_4268_ = lean_ctor_get(v_date_4141_, 25);
v_A_4269_ = lean_ctor_get(v_date_4141_, 26);
v_n_4270_ = lean_ctor_get(v_date_4141_, 27);
v_N_4271_ = lean_ctor_get(v_date_4141_, 28);
v_V_4272_ = lean_ctor_get(v_date_4141_, 29);
v_z_4273_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4274_ = lean_ctor_get(v_date_4141_, 31);
v_v_4275_ = lean_ctor_get(v_date_4141_, 32);
v_O_4276_ = lean_ctor_get(v_date_4141_, 33);
v_X_4277_ = lean_ctor_get(v_date_4141_, 34);
v_x_4278_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4279_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4289_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4289_ == 0)
{
lean_object* v_unused_4290_; 
v_unused_4290_ = lean_ctor_get(v_date_4141_, 1);
lean_dec(v_unused_4290_);
v___x_4281_ = v_date_4141_;
v_isShared_4282_ = v_isSharedCheck_4289_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_Z_4279_);
lean_inc(v_x_4278_);
lean_inc(v_X_4277_);
lean_inc(v_O_4276_);
lean_inc(v_v_4275_);
lean_inc(v_zabbrev_4274_);
lean_inc(v_z_4273_);
lean_inc(v_V_4272_);
lean_inc(v_N_4271_);
lean_inc(v_n_4270_);
lean_inc(v_A_4269_);
lean_inc(v_S_4268_);
lean_inc(v_s_4267_);
lean_inc(v_m_4266_);
lean_inc(v_H_4265_);
lean_inc(v_k_4264_);
lean_inc(v_K_4263_);
lean_inc(v_h_4262_);
lean_inc(v_B_4261_);
lean_inc(v_b_4260_);
lean_inc(v_a_4259_);
lean_inc(v_F_4258_);
lean_inc(v_c_4257_);
lean_inc(v_e_4256_);
lean_inc(v_E_4255_);
lean_inc(v_W_4254_);
lean_inc(v_w_4253_);
lean_inc(v_q_4252_);
lean_inc(v_Q_4251_);
lean_inc(v_d_4250_);
lean_inc(v_L_4249_);
lean_inc(v_M_4248_);
lean_inc(v_D_4247_);
lean_inc(v_Y_4246_);
lean_inc(v_u_4245_);
lean_inc(v_G_4244_);
lean_dec(v_date_4141_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4289_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4284_; 
if (v_isShared_4243_ == 0)
{
lean_ctor_set_tag(v___x_4242_, 1);
lean_ctor_set(v___x_4242_, 0, v_data_4143_);
v___x_4284_ = v___x_4242_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_data_4143_);
v___x_4284_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
lean_object* v___x_4286_; 
if (v_isShared_4282_ == 0)
{
lean_ctor_set(v___x_4281_, 1, v___x_4284_);
v___x_4286_ = v___x_4281_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4287_; 
v_reuseFailAlloc_4287_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4287_, 0, v_G_4244_);
lean_ctor_set(v_reuseFailAlloc_4287_, 1, v___x_4284_);
lean_ctor_set(v_reuseFailAlloc_4287_, 2, v_u_4245_);
lean_ctor_set(v_reuseFailAlloc_4287_, 3, v_Y_4246_);
lean_ctor_set(v_reuseFailAlloc_4287_, 4, v_D_4247_);
lean_ctor_set(v_reuseFailAlloc_4287_, 5, v_M_4248_);
lean_ctor_set(v_reuseFailAlloc_4287_, 6, v_L_4249_);
lean_ctor_set(v_reuseFailAlloc_4287_, 7, v_d_4250_);
lean_ctor_set(v_reuseFailAlloc_4287_, 8, v_Q_4251_);
lean_ctor_set(v_reuseFailAlloc_4287_, 9, v_q_4252_);
lean_ctor_set(v_reuseFailAlloc_4287_, 10, v_w_4253_);
lean_ctor_set(v_reuseFailAlloc_4287_, 11, v_W_4254_);
lean_ctor_set(v_reuseFailAlloc_4287_, 12, v_E_4255_);
lean_ctor_set(v_reuseFailAlloc_4287_, 13, v_e_4256_);
lean_ctor_set(v_reuseFailAlloc_4287_, 14, v_c_4257_);
lean_ctor_set(v_reuseFailAlloc_4287_, 15, v_F_4258_);
lean_ctor_set(v_reuseFailAlloc_4287_, 16, v_a_4259_);
lean_ctor_set(v_reuseFailAlloc_4287_, 17, v_b_4260_);
lean_ctor_set(v_reuseFailAlloc_4287_, 18, v_B_4261_);
lean_ctor_set(v_reuseFailAlloc_4287_, 19, v_h_4262_);
lean_ctor_set(v_reuseFailAlloc_4287_, 20, v_K_4263_);
lean_ctor_set(v_reuseFailAlloc_4287_, 21, v_k_4264_);
lean_ctor_set(v_reuseFailAlloc_4287_, 22, v_H_4265_);
lean_ctor_set(v_reuseFailAlloc_4287_, 23, v_m_4266_);
lean_ctor_set(v_reuseFailAlloc_4287_, 24, v_s_4267_);
lean_ctor_set(v_reuseFailAlloc_4287_, 25, v_S_4268_);
lean_ctor_set(v_reuseFailAlloc_4287_, 26, v_A_4269_);
lean_ctor_set(v_reuseFailAlloc_4287_, 27, v_n_4270_);
lean_ctor_set(v_reuseFailAlloc_4287_, 28, v_N_4271_);
lean_ctor_set(v_reuseFailAlloc_4287_, 29, v_V_4272_);
lean_ctor_set(v_reuseFailAlloc_4287_, 30, v_z_4273_);
lean_ctor_set(v_reuseFailAlloc_4287_, 31, v_zabbrev_4274_);
lean_ctor_set(v_reuseFailAlloc_4287_, 32, v_v_4275_);
lean_ctor_set(v_reuseFailAlloc_4287_, 33, v_O_4276_);
lean_ctor_set(v_reuseFailAlloc_4287_, 34, v_X_4277_);
lean_ctor_set(v_reuseFailAlloc_4287_, 35, v_x_4278_);
lean_ctor_set(v_reuseFailAlloc_4287_, 36, v_Z_4279_);
v___x_4286_ = v_reuseFailAlloc_4287_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
return v___x_4286_;
}
}
}
}
}
case 3:
{
lean_object* v___x_4294_; uint8_t v_isShared_4295_; uint8_t v_isSharedCheck_4343_; 
v_isSharedCheck_4343_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4343_ == 0)
{
lean_object* v_unused_4344_; 
v_unused_4344_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4344_);
v___x_4294_ = v_modifier_4142_;
v_isShared_4295_ = v_isSharedCheck_4343_;
goto v_resetjp_4293_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4294_ = lean_box(0);
v_isShared_4295_ = v_isSharedCheck_4343_;
goto v_resetjp_4293_;
}
v_resetjp_4293_:
{
lean_object* v_G_4296_; lean_object* v_y_4297_; lean_object* v_u_4298_; lean_object* v_Y_4299_; lean_object* v_M_4300_; lean_object* v_L_4301_; lean_object* v_d_4302_; lean_object* v_Q_4303_; lean_object* v_q_4304_; lean_object* v_w_4305_; lean_object* v_W_4306_; lean_object* v_E_4307_; lean_object* v_e_4308_; lean_object* v_c_4309_; lean_object* v_F_4310_; lean_object* v_a_4311_; lean_object* v_b_4312_; lean_object* v_B_4313_; lean_object* v_h_4314_; lean_object* v_K_4315_; lean_object* v_k_4316_; lean_object* v_H_4317_; lean_object* v_m_4318_; lean_object* v_s_4319_; lean_object* v_S_4320_; lean_object* v_A_4321_; lean_object* v_n_4322_; lean_object* v_N_4323_; lean_object* v_V_4324_; lean_object* v_z_4325_; lean_object* v_zabbrev_4326_; lean_object* v_v_4327_; lean_object* v_O_4328_; lean_object* v_X_4329_; lean_object* v_x_4330_; lean_object* v_Z_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4341_; 
v_G_4296_ = lean_ctor_get(v_date_4141_, 0);
v_y_4297_ = lean_ctor_get(v_date_4141_, 1);
v_u_4298_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4299_ = lean_ctor_get(v_date_4141_, 3);
v_M_4300_ = lean_ctor_get(v_date_4141_, 5);
v_L_4301_ = lean_ctor_get(v_date_4141_, 6);
v_d_4302_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4303_ = lean_ctor_get(v_date_4141_, 8);
v_q_4304_ = lean_ctor_get(v_date_4141_, 9);
v_w_4305_ = lean_ctor_get(v_date_4141_, 10);
v_W_4306_ = lean_ctor_get(v_date_4141_, 11);
v_E_4307_ = lean_ctor_get(v_date_4141_, 12);
v_e_4308_ = lean_ctor_get(v_date_4141_, 13);
v_c_4309_ = lean_ctor_get(v_date_4141_, 14);
v_F_4310_ = lean_ctor_get(v_date_4141_, 15);
v_a_4311_ = lean_ctor_get(v_date_4141_, 16);
v_b_4312_ = lean_ctor_get(v_date_4141_, 17);
v_B_4313_ = lean_ctor_get(v_date_4141_, 18);
v_h_4314_ = lean_ctor_get(v_date_4141_, 19);
v_K_4315_ = lean_ctor_get(v_date_4141_, 20);
v_k_4316_ = lean_ctor_get(v_date_4141_, 21);
v_H_4317_ = lean_ctor_get(v_date_4141_, 22);
v_m_4318_ = lean_ctor_get(v_date_4141_, 23);
v_s_4319_ = lean_ctor_get(v_date_4141_, 24);
v_S_4320_ = lean_ctor_get(v_date_4141_, 25);
v_A_4321_ = lean_ctor_get(v_date_4141_, 26);
v_n_4322_ = lean_ctor_get(v_date_4141_, 27);
v_N_4323_ = lean_ctor_get(v_date_4141_, 28);
v_V_4324_ = lean_ctor_get(v_date_4141_, 29);
v_z_4325_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4326_ = lean_ctor_get(v_date_4141_, 31);
v_v_4327_ = lean_ctor_get(v_date_4141_, 32);
v_O_4328_ = lean_ctor_get(v_date_4141_, 33);
v_X_4329_ = lean_ctor_get(v_date_4141_, 34);
v_x_4330_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4331_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4341_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4341_ == 0)
{
lean_object* v_unused_4342_; 
v_unused_4342_ = lean_ctor_get(v_date_4141_, 4);
lean_dec(v_unused_4342_);
v___x_4333_ = v_date_4141_;
v_isShared_4334_ = v_isSharedCheck_4341_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_Z_4331_);
lean_inc(v_x_4330_);
lean_inc(v_X_4329_);
lean_inc(v_O_4328_);
lean_inc(v_v_4327_);
lean_inc(v_zabbrev_4326_);
lean_inc(v_z_4325_);
lean_inc(v_V_4324_);
lean_inc(v_N_4323_);
lean_inc(v_n_4322_);
lean_inc(v_A_4321_);
lean_inc(v_S_4320_);
lean_inc(v_s_4319_);
lean_inc(v_m_4318_);
lean_inc(v_H_4317_);
lean_inc(v_k_4316_);
lean_inc(v_K_4315_);
lean_inc(v_h_4314_);
lean_inc(v_B_4313_);
lean_inc(v_b_4312_);
lean_inc(v_a_4311_);
lean_inc(v_F_4310_);
lean_inc(v_c_4309_);
lean_inc(v_e_4308_);
lean_inc(v_E_4307_);
lean_inc(v_W_4306_);
lean_inc(v_w_4305_);
lean_inc(v_q_4304_);
lean_inc(v_Q_4303_);
lean_inc(v_d_4302_);
lean_inc(v_L_4301_);
lean_inc(v_M_4300_);
lean_inc(v_Y_4299_);
lean_inc(v_u_4298_);
lean_inc(v_y_4297_);
lean_inc(v_G_4296_);
lean_dec(v_date_4141_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4341_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4295_ == 0)
{
lean_ctor_set_tag(v___x_4294_, 1);
lean_ctor_set(v___x_4294_, 0, v_data_4143_);
v___x_4336_ = v___x_4294_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v_data_4143_);
v___x_4336_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
lean_object* v___x_4338_; 
if (v_isShared_4334_ == 0)
{
lean_ctor_set(v___x_4333_, 4, v___x_4336_);
v___x_4338_ = v___x_4333_;
goto v_reusejp_4337_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v_G_4296_);
lean_ctor_set(v_reuseFailAlloc_4339_, 1, v_y_4297_);
lean_ctor_set(v_reuseFailAlloc_4339_, 2, v_u_4298_);
lean_ctor_set(v_reuseFailAlloc_4339_, 3, v_Y_4299_);
lean_ctor_set(v_reuseFailAlloc_4339_, 4, v___x_4336_);
lean_ctor_set(v_reuseFailAlloc_4339_, 5, v_M_4300_);
lean_ctor_set(v_reuseFailAlloc_4339_, 6, v_L_4301_);
lean_ctor_set(v_reuseFailAlloc_4339_, 7, v_d_4302_);
lean_ctor_set(v_reuseFailAlloc_4339_, 8, v_Q_4303_);
lean_ctor_set(v_reuseFailAlloc_4339_, 9, v_q_4304_);
lean_ctor_set(v_reuseFailAlloc_4339_, 10, v_w_4305_);
lean_ctor_set(v_reuseFailAlloc_4339_, 11, v_W_4306_);
lean_ctor_set(v_reuseFailAlloc_4339_, 12, v_E_4307_);
lean_ctor_set(v_reuseFailAlloc_4339_, 13, v_e_4308_);
lean_ctor_set(v_reuseFailAlloc_4339_, 14, v_c_4309_);
lean_ctor_set(v_reuseFailAlloc_4339_, 15, v_F_4310_);
lean_ctor_set(v_reuseFailAlloc_4339_, 16, v_a_4311_);
lean_ctor_set(v_reuseFailAlloc_4339_, 17, v_b_4312_);
lean_ctor_set(v_reuseFailAlloc_4339_, 18, v_B_4313_);
lean_ctor_set(v_reuseFailAlloc_4339_, 19, v_h_4314_);
lean_ctor_set(v_reuseFailAlloc_4339_, 20, v_K_4315_);
lean_ctor_set(v_reuseFailAlloc_4339_, 21, v_k_4316_);
lean_ctor_set(v_reuseFailAlloc_4339_, 22, v_H_4317_);
lean_ctor_set(v_reuseFailAlloc_4339_, 23, v_m_4318_);
lean_ctor_set(v_reuseFailAlloc_4339_, 24, v_s_4319_);
lean_ctor_set(v_reuseFailAlloc_4339_, 25, v_S_4320_);
lean_ctor_set(v_reuseFailAlloc_4339_, 26, v_A_4321_);
lean_ctor_set(v_reuseFailAlloc_4339_, 27, v_n_4322_);
lean_ctor_set(v_reuseFailAlloc_4339_, 28, v_N_4323_);
lean_ctor_set(v_reuseFailAlloc_4339_, 29, v_V_4324_);
lean_ctor_set(v_reuseFailAlloc_4339_, 30, v_z_4325_);
lean_ctor_set(v_reuseFailAlloc_4339_, 31, v_zabbrev_4326_);
lean_ctor_set(v_reuseFailAlloc_4339_, 32, v_v_4327_);
lean_ctor_set(v_reuseFailAlloc_4339_, 33, v_O_4328_);
lean_ctor_set(v_reuseFailAlloc_4339_, 34, v_X_4329_);
lean_ctor_set(v_reuseFailAlloc_4339_, 35, v_x_4330_);
lean_ctor_set(v_reuseFailAlloc_4339_, 36, v_Z_4331_);
v___x_4338_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4337_;
}
v_reusejp_4337_:
{
return v___x_4338_;
}
}
}
}
}
case 4:
{
lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4395_; 
v_isSharedCheck_4395_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4395_ == 0)
{
lean_object* v_unused_4396_; 
v_unused_4396_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4396_);
v___x_4346_ = v_modifier_4142_;
v_isShared_4347_ = v_isSharedCheck_4395_;
goto v_resetjp_4345_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4395_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v_G_4348_; lean_object* v_y_4349_; lean_object* v_u_4350_; lean_object* v_Y_4351_; lean_object* v_D_4352_; lean_object* v_L_4353_; lean_object* v_d_4354_; lean_object* v_Q_4355_; lean_object* v_q_4356_; lean_object* v_w_4357_; lean_object* v_W_4358_; lean_object* v_E_4359_; lean_object* v_e_4360_; lean_object* v_c_4361_; lean_object* v_F_4362_; lean_object* v_a_4363_; lean_object* v_b_4364_; lean_object* v_B_4365_; lean_object* v_h_4366_; lean_object* v_K_4367_; lean_object* v_k_4368_; lean_object* v_H_4369_; lean_object* v_m_4370_; lean_object* v_s_4371_; lean_object* v_S_4372_; lean_object* v_A_4373_; lean_object* v_n_4374_; lean_object* v_N_4375_; lean_object* v_V_4376_; lean_object* v_z_4377_; lean_object* v_zabbrev_4378_; lean_object* v_v_4379_; lean_object* v_O_4380_; lean_object* v_X_4381_; lean_object* v_x_4382_; lean_object* v_Z_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4393_; 
v_G_4348_ = lean_ctor_get(v_date_4141_, 0);
v_y_4349_ = lean_ctor_get(v_date_4141_, 1);
v_u_4350_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4351_ = lean_ctor_get(v_date_4141_, 3);
v_D_4352_ = lean_ctor_get(v_date_4141_, 4);
v_L_4353_ = lean_ctor_get(v_date_4141_, 6);
v_d_4354_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4355_ = lean_ctor_get(v_date_4141_, 8);
v_q_4356_ = lean_ctor_get(v_date_4141_, 9);
v_w_4357_ = lean_ctor_get(v_date_4141_, 10);
v_W_4358_ = lean_ctor_get(v_date_4141_, 11);
v_E_4359_ = lean_ctor_get(v_date_4141_, 12);
v_e_4360_ = lean_ctor_get(v_date_4141_, 13);
v_c_4361_ = lean_ctor_get(v_date_4141_, 14);
v_F_4362_ = lean_ctor_get(v_date_4141_, 15);
v_a_4363_ = lean_ctor_get(v_date_4141_, 16);
v_b_4364_ = lean_ctor_get(v_date_4141_, 17);
v_B_4365_ = lean_ctor_get(v_date_4141_, 18);
v_h_4366_ = lean_ctor_get(v_date_4141_, 19);
v_K_4367_ = lean_ctor_get(v_date_4141_, 20);
v_k_4368_ = lean_ctor_get(v_date_4141_, 21);
v_H_4369_ = lean_ctor_get(v_date_4141_, 22);
v_m_4370_ = lean_ctor_get(v_date_4141_, 23);
v_s_4371_ = lean_ctor_get(v_date_4141_, 24);
v_S_4372_ = lean_ctor_get(v_date_4141_, 25);
v_A_4373_ = lean_ctor_get(v_date_4141_, 26);
v_n_4374_ = lean_ctor_get(v_date_4141_, 27);
v_N_4375_ = lean_ctor_get(v_date_4141_, 28);
v_V_4376_ = lean_ctor_get(v_date_4141_, 29);
v_z_4377_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4378_ = lean_ctor_get(v_date_4141_, 31);
v_v_4379_ = lean_ctor_get(v_date_4141_, 32);
v_O_4380_ = lean_ctor_get(v_date_4141_, 33);
v_X_4381_ = lean_ctor_get(v_date_4141_, 34);
v_x_4382_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4383_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4393_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4393_ == 0)
{
lean_object* v_unused_4394_; 
v_unused_4394_ = lean_ctor_get(v_date_4141_, 5);
lean_dec(v_unused_4394_);
v___x_4385_ = v_date_4141_;
v_isShared_4386_ = v_isSharedCheck_4393_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_Z_4383_);
lean_inc(v_x_4382_);
lean_inc(v_X_4381_);
lean_inc(v_O_4380_);
lean_inc(v_v_4379_);
lean_inc(v_zabbrev_4378_);
lean_inc(v_z_4377_);
lean_inc(v_V_4376_);
lean_inc(v_N_4375_);
lean_inc(v_n_4374_);
lean_inc(v_A_4373_);
lean_inc(v_S_4372_);
lean_inc(v_s_4371_);
lean_inc(v_m_4370_);
lean_inc(v_H_4369_);
lean_inc(v_k_4368_);
lean_inc(v_K_4367_);
lean_inc(v_h_4366_);
lean_inc(v_B_4365_);
lean_inc(v_b_4364_);
lean_inc(v_a_4363_);
lean_inc(v_F_4362_);
lean_inc(v_c_4361_);
lean_inc(v_e_4360_);
lean_inc(v_E_4359_);
lean_inc(v_W_4358_);
lean_inc(v_w_4357_);
lean_inc(v_q_4356_);
lean_inc(v_Q_4355_);
lean_inc(v_d_4354_);
lean_inc(v_L_4353_);
lean_inc(v_D_4352_);
lean_inc(v_Y_4351_);
lean_inc(v_u_4350_);
lean_inc(v_y_4349_);
lean_inc(v_G_4348_);
lean_dec(v_date_4141_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4393_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4347_ == 0)
{
lean_ctor_set_tag(v___x_4346_, 1);
lean_ctor_set(v___x_4346_, 0, v_data_4143_);
v___x_4388_ = v___x_4346_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_data_4143_);
v___x_4388_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
lean_object* v___x_4390_; 
if (v_isShared_4386_ == 0)
{
lean_ctor_set(v___x_4385_, 5, v___x_4388_);
v___x_4390_ = v___x_4385_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_G_4348_);
lean_ctor_set(v_reuseFailAlloc_4391_, 1, v_y_4349_);
lean_ctor_set(v_reuseFailAlloc_4391_, 2, v_u_4350_);
lean_ctor_set(v_reuseFailAlloc_4391_, 3, v_Y_4351_);
lean_ctor_set(v_reuseFailAlloc_4391_, 4, v_D_4352_);
lean_ctor_set(v_reuseFailAlloc_4391_, 5, v___x_4388_);
lean_ctor_set(v_reuseFailAlloc_4391_, 6, v_L_4353_);
lean_ctor_set(v_reuseFailAlloc_4391_, 7, v_d_4354_);
lean_ctor_set(v_reuseFailAlloc_4391_, 8, v_Q_4355_);
lean_ctor_set(v_reuseFailAlloc_4391_, 9, v_q_4356_);
lean_ctor_set(v_reuseFailAlloc_4391_, 10, v_w_4357_);
lean_ctor_set(v_reuseFailAlloc_4391_, 11, v_W_4358_);
lean_ctor_set(v_reuseFailAlloc_4391_, 12, v_E_4359_);
lean_ctor_set(v_reuseFailAlloc_4391_, 13, v_e_4360_);
lean_ctor_set(v_reuseFailAlloc_4391_, 14, v_c_4361_);
lean_ctor_set(v_reuseFailAlloc_4391_, 15, v_F_4362_);
lean_ctor_set(v_reuseFailAlloc_4391_, 16, v_a_4363_);
lean_ctor_set(v_reuseFailAlloc_4391_, 17, v_b_4364_);
lean_ctor_set(v_reuseFailAlloc_4391_, 18, v_B_4365_);
lean_ctor_set(v_reuseFailAlloc_4391_, 19, v_h_4366_);
lean_ctor_set(v_reuseFailAlloc_4391_, 20, v_K_4367_);
lean_ctor_set(v_reuseFailAlloc_4391_, 21, v_k_4368_);
lean_ctor_set(v_reuseFailAlloc_4391_, 22, v_H_4369_);
lean_ctor_set(v_reuseFailAlloc_4391_, 23, v_m_4370_);
lean_ctor_set(v_reuseFailAlloc_4391_, 24, v_s_4371_);
lean_ctor_set(v_reuseFailAlloc_4391_, 25, v_S_4372_);
lean_ctor_set(v_reuseFailAlloc_4391_, 26, v_A_4373_);
lean_ctor_set(v_reuseFailAlloc_4391_, 27, v_n_4374_);
lean_ctor_set(v_reuseFailAlloc_4391_, 28, v_N_4375_);
lean_ctor_set(v_reuseFailAlloc_4391_, 29, v_V_4376_);
lean_ctor_set(v_reuseFailAlloc_4391_, 30, v_z_4377_);
lean_ctor_set(v_reuseFailAlloc_4391_, 31, v_zabbrev_4378_);
lean_ctor_set(v_reuseFailAlloc_4391_, 32, v_v_4379_);
lean_ctor_set(v_reuseFailAlloc_4391_, 33, v_O_4380_);
lean_ctor_set(v_reuseFailAlloc_4391_, 34, v_X_4381_);
lean_ctor_set(v_reuseFailAlloc_4391_, 35, v_x_4382_);
lean_ctor_set(v_reuseFailAlloc_4391_, 36, v_Z_4383_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
}
}
case 5:
{
lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4447_; 
v_isSharedCheck_4447_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4447_ == 0)
{
lean_object* v_unused_4448_; 
v_unused_4448_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4448_);
v___x_4398_ = v_modifier_4142_;
v_isShared_4399_ = v_isSharedCheck_4447_;
goto v_resetjp_4397_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4447_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v_G_4400_; lean_object* v_y_4401_; lean_object* v_u_4402_; lean_object* v_Y_4403_; lean_object* v_D_4404_; lean_object* v_M_4405_; lean_object* v_d_4406_; lean_object* v_Q_4407_; lean_object* v_q_4408_; lean_object* v_w_4409_; lean_object* v_W_4410_; lean_object* v_E_4411_; lean_object* v_e_4412_; lean_object* v_c_4413_; lean_object* v_F_4414_; lean_object* v_a_4415_; lean_object* v_b_4416_; lean_object* v_B_4417_; lean_object* v_h_4418_; lean_object* v_K_4419_; lean_object* v_k_4420_; lean_object* v_H_4421_; lean_object* v_m_4422_; lean_object* v_s_4423_; lean_object* v_S_4424_; lean_object* v_A_4425_; lean_object* v_n_4426_; lean_object* v_N_4427_; lean_object* v_V_4428_; lean_object* v_z_4429_; lean_object* v_zabbrev_4430_; lean_object* v_v_4431_; lean_object* v_O_4432_; lean_object* v_X_4433_; lean_object* v_x_4434_; lean_object* v_Z_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4445_; 
v_G_4400_ = lean_ctor_get(v_date_4141_, 0);
v_y_4401_ = lean_ctor_get(v_date_4141_, 1);
v_u_4402_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4403_ = lean_ctor_get(v_date_4141_, 3);
v_D_4404_ = lean_ctor_get(v_date_4141_, 4);
v_M_4405_ = lean_ctor_get(v_date_4141_, 5);
v_d_4406_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4407_ = lean_ctor_get(v_date_4141_, 8);
v_q_4408_ = lean_ctor_get(v_date_4141_, 9);
v_w_4409_ = lean_ctor_get(v_date_4141_, 10);
v_W_4410_ = lean_ctor_get(v_date_4141_, 11);
v_E_4411_ = lean_ctor_get(v_date_4141_, 12);
v_e_4412_ = lean_ctor_get(v_date_4141_, 13);
v_c_4413_ = lean_ctor_get(v_date_4141_, 14);
v_F_4414_ = lean_ctor_get(v_date_4141_, 15);
v_a_4415_ = lean_ctor_get(v_date_4141_, 16);
v_b_4416_ = lean_ctor_get(v_date_4141_, 17);
v_B_4417_ = lean_ctor_get(v_date_4141_, 18);
v_h_4418_ = lean_ctor_get(v_date_4141_, 19);
v_K_4419_ = lean_ctor_get(v_date_4141_, 20);
v_k_4420_ = lean_ctor_get(v_date_4141_, 21);
v_H_4421_ = lean_ctor_get(v_date_4141_, 22);
v_m_4422_ = lean_ctor_get(v_date_4141_, 23);
v_s_4423_ = lean_ctor_get(v_date_4141_, 24);
v_S_4424_ = lean_ctor_get(v_date_4141_, 25);
v_A_4425_ = lean_ctor_get(v_date_4141_, 26);
v_n_4426_ = lean_ctor_get(v_date_4141_, 27);
v_N_4427_ = lean_ctor_get(v_date_4141_, 28);
v_V_4428_ = lean_ctor_get(v_date_4141_, 29);
v_z_4429_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4430_ = lean_ctor_get(v_date_4141_, 31);
v_v_4431_ = lean_ctor_get(v_date_4141_, 32);
v_O_4432_ = lean_ctor_get(v_date_4141_, 33);
v_X_4433_ = lean_ctor_get(v_date_4141_, 34);
v_x_4434_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4435_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4445_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4445_ == 0)
{
lean_object* v_unused_4446_; 
v_unused_4446_ = lean_ctor_get(v_date_4141_, 6);
lean_dec(v_unused_4446_);
v___x_4437_ = v_date_4141_;
v_isShared_4438_ = v_isSharedCheck_4445_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_Z_4435_);
lean_inc(v_x_4434_);
lean_inc(v_X_4433_);
lean_inc(v_O_4432_);
lean_inc(v_v_4431_);
lean_inc(v_zabbrev_4430_);
lean_inc(v_z_4429_);
lean_inc(v_V_4428_);
lean_inc(v_N_4427_);
lean_inc(v_n_4426_);
lean_inc(v_A_4425_);
lean_inc(v_S_4424_);
lean_inc(v_s_4423_);
lean_inc(v_m_4422_);
lean_inc(v_H_4421_);
lean_inc(v_k_4420_);
lean_inc(v_K_4419_);
lean_inc(v_h_4418_);
lean_inc(v_B_4417_);
lean_inc(v_b_4416_);
lean_inc(v_a_4415_);
lean_inc(v_F_4414_);
lean_inc(v_c_4413_);
lean_inc(v_e_4412_);
lean_inc(v_E_4411_);
lean_inc(v_W_4410_);
lean_inc(v_w_4409_);
lean_inc(v_q_4408_);
lean_inc(v_Q_4407_);
lean_inc(v_d_4406_);
lean_inc(v_M_4405_);
lean_inc(v_D_4404_);
lean_inc(v_Y_4403_);
lean_inc(v_u_4402_);
lean_inc(v_y_4401_);
lean_inc(v_G_4400_);
lean_dec(v_date_4141_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4445_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4399_ == 0)
{
lean_ctor_set_tag(v___x_4398_, 1);
lean_ctor_set(v___x_4398_, 0, v_data_4143_);
v___x_4440_ = v___x_4398_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_data_4143_);
v___x_4440_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
lean_object* v___x_4442_; 
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 6, v___x_4440_);
v___x_4442_ = v___x_4437_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v_G_4400_);
lean_ctor_set(v_reuseFailAlloc_4443_, 1, v_y_4401_);
lean_ctor_set(v_reuseFailAlloc_4443_, 2, v_u_4402_);
lean_ctor_set(v_reuseFailAlloc_4443_, 3, v_Y_4403_);
lean_ctor_set(v_reuseFailAlloc_4443_, 4, v_D_4404_);
lean_ctor_set(v_reuseFailAlloc_4443_, 5, v_M_4405_);
lean_ctor_set(v_reuseFailAlloc_4443_, 6, v___x_4440_);
lean_ctor_set(v_reuseFailAlloc_4443_, 7, v_d_4406_);
lean_ctor_set(v_reuseFailAlloc_4443_, 8, v_Q_4407_);
lean_ctor_set(v_reuseFailAlloc_4443_, 9, v_q_4408_);
lean_ctor_set(v_reuseFailAlloc_4443_, 10, v_w_4409_);
lean_ctor_set(v_reuseFailAlloc_4443_, 11, v_W_4410_);
lean_ctor_set(v_reuseFailAlloc_4443_, 12, v_E_4411_);
lean_ctor_set(v_reuseFailAlloc_4443_, 13, v_e_4412_);
lean_ctor_set(v_reuseFailAlloc_4443_, 14, v_c_4413_);
lean_ctor_set(v_reuseFailAlloc_4443_, 15, v_F_4414_);
lean_ctor_set(v_reuseFailAlloc_4443_, 16, v_a_4415_);
lean_ctor_set(v_reuseFailAlloc_4443_, 17, v_b_4416_);
lean_ctor_set(v_reuseFailAlloc_4443_, 18, v_B_4417_);
lean_ctor_set(v_reuseFailAlloc_4443_, 19, v_h_4418_);
lean_ctor_set(v_reuseFailAlloc_4443_, 20, v_K_4419_);
lean_ctor_set(v_reuseFailAlloc_4443_, 21, v_k_4420_);
lean_ctor_set(v_reuseFailAlloc_4443_, 22, v_H_4421_);
lean_ctor_set(v_reuseFailAlloc_4443_, 23, v_m_4422_);
lean_ctor_set(v_reuseFailAlloc_4443_, 24, v_s_4423_);
lean_ctor_set(v_reuseFailAlloc_4443_, 25, v_S_4424_);
lean_ctor_set(v_reuseFailAlloc_4443_, 26, v_A_4425_);
lean_ctor_set(v_reuseFailAlloc_4443_, 27, v_n_4426_);
lean_ctor_set(v_reuseFailAlloc_4443_, 28, v_N_4427_);
lean_ctor_set(v_reuseFailAlloc_4443_, 29, v_V_4428_);
lean_ctor_set(v_reuseFailAlloc_4443_, 30, v_z_4429_);
lean_ctor_set(v_reuseFailAlloc_4443_, 31, v_zabbrev_4430_);
lean_ctor_set(v_reuseFailAlloc_4443_, 32, v_v_4431_);
lean_ctor_set(v_reuseFailAlloc_4443_, 33, v_O_4432_);
lean_ctor_set(v_reuseFailAlloc_4443_, 34, v_X_4433_);
lean_ctor_set(v_reuseFailAlloc_4443_, 35, v_x_4434_);
lean_ctor_set(v_reuseFailAlloc_4443_, 36, v_Z_4435_);
v___x_4442_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
return v___x_4442_;
}
}
}
}
}
case 6:
{
lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4499_; 
v_isSharedCheck_4499_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4499_ == 0)
{
lean_object* v_unused_4500_; 
v_unused_4500_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4500_);
v___x_4450_ = v_modifier_4142_;
v_isShared_4451_ = v_isSharedCheck_4499_;
goto v_resetjp_4449_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4499_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v_G_4452_; lean_object* v_y_4453_; lean_object* v_u_4454_; lean_object* v_Y_4455_; lean_object* v_D_4456_; lean_object* v_M_4457_; lean_object* v_L_4458_; lean_object* v_Q_4459_; lean_object* v_q_4460_; lean_object* v_w_4461_; lean_object* v_W_4462_; lean_object* v_E_4463_; lean_object* v_e_4464_; lean_object* v_c_4465_; lean_object* v_F_4466_; lean_object* v_a_4467_; lean_object* v_b_4468_; lean_object* v_B_4469_; lean_object* v_h_4470_; lean_object* v_K_4471_; lean_object* v_k_4472_; lean_object* v_H_4473_; lean_object* v_m_4474_; lean_object* v_s_4475_; lean_object* v_S_4476_; lean_object* v_A_4477_; lean_object* v_n_4478_; lean_object* v_N_4479_; lean_object* v_V_4480_; lean_object* v_z_4481_; lean_object* v_zabbrev_4482_; lean_object* v_v_4483_; lean_object* v_O_4484_; lean_object* v_X_4485_; lean_object* v_x_4486_; lean_object* v_Z_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4497_; 
v_G_4452_ = lean_ctor_get(v_date_4141_, 0);
v_y_4453_ = lean_ctor_get(v_date_4141_, 1);
v_u_4454_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4455_ = lean_ctor_get(v_date_4141_, 3);
v_D_4456_ = lean_ctor_get(v_date_4141_, 4);
v_M_4457_ = lean_ctor_get(v_date_4141_, 5);
v_L_4458_ = lean_ctor_get(v_date_4141_, 6);
v_Q_4459_ = lean_ctor_get(v_date_4141_, 8);
v_q_4460_ = lean_ctor_get(v_date_4141_, 9);
v_w_4461_ = lean_ctor_get(v_date_4141_, 10);
v_W_4462_ = lean_ctor_get(v_date_4141_, 11);
v_E_4463_ = lean_ctor_get(v_date_4141_, 12);
v_e_4464_ = lean_ctor_get(v_date_4141_, 13);
v_c_4465_ = lean_ctor_get(v_date_4141_, 14);
v_F_4466_ = lean_ctor_get(v_date_4141_, 15);
v_a_4467_ = lean_ctor_get(v_date_4141_, 16);
v_b_4468_ = lean_ctor_get(v_date_4141_, 17);
v_B_4469_ = lean_ctor_get(v_date_4141_, 18);
v_h_4470_ = lean_ctor_get(v_date_4141_, 19);
v_K_4471_ = lean_ctor_get(v_date_4141_, 20);
v_k_4472_ = lean_ctor_get(v_date_4141_, 21);
v_H_4473_ = lean_ctor_get(v_date_4141_, 22);
v_m_4474_ = lean_ctor_get(v_date_4141_, 23);
v_s_4475_ = lean_ctor_get(v_date_4141_, 24);
v_S_4476_ = lean_ctor_get(v_date_4141_, 25);
v_A_4477_ = lean_ctor_get(v_date_4141_, 26);
v_n_4478_ = lean_ctor_get(v_date_4141_, 27);
v_N_4479_ = lean_ctor_get(v_date_4141_, 28);
v_V_4480_ = lean_ctor_get(v_date_4141_, 29);
v_z_4481_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4482_ = lean_ctor_get(v_date_4141_, 31);
v_v_4483_ = lean_ctor_get(v_date_4141_, 32);
v_O_4484_ = lean_ctor_get(v_date_4141_, 33);
v_X_4485_ = lean_ctor_get(v_date_4141_, 34);
v_x_4486_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4487_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4497_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4497_ == 0)
{
lean_object* v_unused_4498_; 
v_unused_4498_ = lean_ctor_get(v_date_4141_, 7);
lean_dec(v_unused_4498_);
v___x_4489_ = v_date_4141_;
v_isShared_4490_ = v_isSharedCheck_4497_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_Z_4487_);
lean_inc(v_x_4486_);
lean_inc(v_X_4485_);
lean_inc(v_O_4484_);
lean_inc(v_v_4483_);
lean_inc(v_zabbrev_4482_);
lean_inc(v_z_4481_);
lean_inc(v_V_4480_);
lean_inc(v_N_4479_);
lean_inc(v_n_4478_);
lean_inc(v_A_4477_);
lean_inc(v_S_4476_);
lean_inc(v_s_4475_);
lean_inc(v_m_4474_);
lean_inc(v_H_4473_);
lean_inc(v_k_4472_);
lean_inc(v_K_4471_);
lean_inc(v_h_4470_);
lean_inc(v_B_4469_);
lean_inc(v_b_4468_);
lean_inc(v_a_4467_);
lean_inc(v_F_4466_);
lean_inc(v_c_4465_);
lean_inc(v_e_4464_);
lean_inc(v_E_4463_);
lean_inc(v_W_4462_);
lean_inc(v_w_4461_);
lean_inc(v_q_4460_);
lean_inc(v_Q_4459_);
lean_inc(v_L_4458_);
lean_inc(v_M_4457_);
lean_inc(v_D_4456_);
lean_inc(v_Y_4455_);
lean_inc(v_u_4454_);
lean_inc(v_y_4453_);
lean_inc(v_G_4452_);
lean_dec(v_date_4141_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4497_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4492_; 
if (v_isShared_4451_ == 0)
{
lean_ctor_set_tag(v___x_4450_, 1);
lean_ctor_set(v___x_4450_, 0, v_data_4143_);
v___x_4492_ = v___x_4450_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_data_4143_);
v___x_4492_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
lean_object* v___x_4494_; 
if (v_isShared_4490_ == 0)
{
lean_ctor_set(v___x_4489_, 7, v___x_4492_);
v___x_4494_ = v___x_4489_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_G_4452_);
lean_ctor_set(v_reuseFailAlloc_4495_, 1, v_y_4453_);
lean_ctor_set(v_reuseFailAlloc_4495_, 2, v_u_4454_);
lean_ctor_set(v_reuseFailAlloc_4495_, 3, v_Y_4455_);
lean_ctor_set(v_reuseFailAlloc_4495_, 4, v_D_4456_);
lean_ctor_set(v_reuseFailAlloc_4495_, 5, v_M_4457_);
lean_ctor_set(v_reuseFailAlloc_4495_, 6, v_L_4458_);
lean_ctor_set(v_reuseFailAlloc_4495_, 7, v___x_4492_);
lean_ctor_set(v_reuseFailAlloc_4495_, 8, v_Q_4459_);
lean_ctor_set(v_reuseFailAlloc_4495_, 9, v_q_4460_);
lean_ctor_set(v_reuseFailAlloc_4495_, 10, v_w_4461_);
lean_ctor_set(v_reuseFailAlloc_4495_, 11, v_W_4462_);
lean_ctor_set(v_reuseFailAlloc_4495_, 12, v_E_4463_);
lean_ctor_set(v_reuseFailAlloc_4495_, 13, v_e_4464_);
lean_ctor_set(v_reuseFailAlloc_4495_, 14, v_c_4465_);
lean_ctor_set(v_reuseFailAlloc_4495_, 15, v_F_4466_);
lean_ctor_set(v_reuseFailAlloc_4495_, 16, v_a_4467_);
lean_ctor_set(v_reuseFailAlloc_4495_, 17, v_b_4468_);
lean_ctor_set(v_reuseFailAlloc_4495_, 18, v_B_4469_);
lean_ctor_set(v_reuseFailAlloc_4495_, 19, v_h_4470_);
lean_ctor_set(v_reuseFailAlloc_4495_, 20, v_K_4471_);
lean_ctor_set(v_reuseFailAlloc_4495_, 21, v_k_4472_);
lean_ctor_set(v_reuseFailAlloc_4495_, 22, v_H_4473_);
lean_ctor_set(v_reuseFailAlloc_4495_, 23, v_m_4474_);
lean_ctor_set(v_reuseFailAlloc_4495_, 24, v_s_4475_);
lean_ctor_set(v_reuseFailAlloc_4495_, 25, v_S_4476_);
lean_ctor_set(v_reuseFailAlloc_4495_, 26, v_A_4477_);
lean_ctor_set(v_reuseFailAlloc_4495_, 27, v_n_4478_);
lean_ctor_set(v_reuseFailAlloc_4495_, 28, v_N_4479_);
lean_ctor_set(v_reuseFailAlloc_4495_, 29, v_V_4480_);
lean_ctor_set(v_reuseFailAlloc_4495_, 30, v_z_4481_);
lean_ctor_set(v_reuseFailAlloc_4495_, 31, v_zabbrev_4482_);
lean_ctor_set(v_reuseFailAlloc_4495_, 32, v_v_4483_);
lean_ctor_set(v_reuseFailAlloc_4495_, 33, v_O_4484_);
lean_ctor_set(v_reuseFailAlloc_4495_, 34, v_X_4485_);
lean_ctor_set(v_reuseFailAlloc_4495_, 35, v_x_4486_);
lean_ctor_set(v_reuseFailAlloc_4495_, 36, v_Z_4487_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
return v___x_4494_;
}
}
}
}
}
case 7:
{
lean_object* v___x_4502_; uint8_t v_isShared_4503_; uint8_t v_isSharedCheck_4551_; 
v_isSharedCheck_4551_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4551_ == 0)
{
lean_object* v_unused_4552_; 
v_unused_4552_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4552_);
v___x_4502_ = v_modifier_4142_;
v_isShared_4503_ = v_isSharedCheck_4551_;
goto v_resetjp_4501_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4502_ = lean_box(0);
v_isShared_4503_ = v_isSharedCheck_4551_;
goto v_resetjp_4501_;
}
v_resetjp_4501_:
{
lean_object* v_G_4504_; lean_object* v_y_4505_; lean_object* v_u_4506_; lean_object* v_Y_4507_; lean_object* v_D_4508_; lean_object* v_M_4509_; lean_object* v_L_4510_; lean_object* v_d_4511_; lean_object* v_q_4512_; lean_object* v_w_4513_; lean_object* v_W_4514_; lean_object* v_E_4515_; lean_object* v_e_4516_; lean_object* v_c_4517_; lean_object* v_F_4518_; lean_object* v_a_4519_; lean_object* v_b_4520_; lean_object* v_B_4521_; lean_object* v_h_4522_; lean_object* v_K_4523_; lean_object* v_k_4524_; lean_object* v_H_4525_; lean_object* v_m_4526_; lean_object* v_s_4527_; lean_object* v_S_4528_; lean_object* v_A_4529_; lean_object* v_n_4530_; lean_object* v_N_4531_; lean_object* v_V_4532_; lean_object* v_z_4533_; lean_object* v_zabbrev_4534_; lean_object* v_v_4535_; lean_object* v_O_4536_; lean_object* v_X_4537_; lean_object* v_x_4538_; lean_object* v_Z_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4549_; 
v_G_4504_ = lean_ctor_get(v_date_4141_, 0);
v_y_4505_ = lean_ctor_get(v_date_4141_, 1);
v_u_4506_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4507_ = lean_ctor_get(v_date_4141_, 3);
v_D_4508_ = lean_ctor_get(v_date_4141_, 4);
v_M_4509_ = lean_ctor_get(v_date_4141_, 5);
v_L_4510_ = lean_ctor_get(v_date_4141_, 6);
v_d_4511_ = lean_ctor_get(v_date_4141_, 7);
v_q_4512_ = lean_ctor_get(v_date_4141_, 9);
v_w_4513_ = lean_ctor_get(v_date_4141_, 10);
v_W_4514_ = lean_ctor_get(v_date_4141_, 11);
v_E_4515_ = lean_ctor_get(v_date_4141_, 12);
v_e_4516_ = lean_ctor_get(v_date_4141_, 13);
v_c_4517_ = lean_ctor_get(v_date_4141_, 14);
v_F_4518_ = lean_ctor_get(v_date_4141_, 15);
v_a_4519_ = lean_ctor_get(v_date_4141_, 16);
v_b_4520_ = lean_ctor_get(v_date_4141_, 17);
v_B_4521_ = lean_ctor_get(v_date_4141_, 18);
v_h_4522_ = lean_ctor_get(v_date_4141_, 19);
v_K_4523_ = lean_ctor_get(v_date_4141_, 20);
v_k_4524_ = lean_ctor_get(v_date_4141_, 21);
v_H_4525_ = lean_ctor_get(v_date_4141_, 22);
v_m_4526_ = lean_ctor_get(v_date_4141_, 23);
v_s_4527_ = lean_ctor_get(v_date_4141_, 24);
v_S_4528_ = lean_ctor_get(v_date_4141_, 25);
v_A_4529_ = lean_ctor_get(v_date_4141_, 26);
v_n_4530_ = lean_ctor_get(v_date_4141_, 27);
v_N_4531_ = lean_ctor_get(v_date_4141_, 28);
v_V_4532_ = lean_ctor_get(v_date_4141_, 29);
v_z_4533_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4534_ = lean_ctor_get(v_date_4141_, 31);
v_v_4535_ = lean_ctor_get(v_date_4141_, 32);
v_O_4536_ = lean_ctor_get(v_date_4141_, 33);
v_X_4537_ = lean_ctor_get(v_date_4141_, 34);
v_x_4538_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4539_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4549_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4549_ == 0)
{
lean_object* v_unused_4550_; 
v_unused_4550_ = lean_ctor_get(v_date_4141_, 8);
lean_dec(v_unused_4550_);
v___x_4541_ = v_date_4141_;
v_isShared_4542_ = v_isSharedCheck_4549_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_Z_4539_);
lean_inc(v_x_4538_);
lean_inc(v_X_4537_);
lean_inc(v_O_4536_);
lean_inc(v_v_4535_);
lean_inc(v_zabbrev_4534_);
lean_inc(v_z_4533_);
lean_inc(v_V_4532_);
lean_inc(v_N_4531_);
lean_inc(v_n_4530_);
lean_inc(v_A_4529_);
lean_inc(v_S_4528_);
lean_inc(v_s_4527_);
lean_inc(v_m_4526_);
lean_inc(v_H_4525_);
lean_inc(v_k_4524_);
lean_inc(v_K_4523_);
lean_inc(v_h_4522_);
lean_inc(v_B_4521_);
lean_inc(v_b_4520_);
lean_inc(v_a_4519_);
lean_inc(v_F_4518_);
lean_inc(v_c_4517_);
lean_inc(v_e_4516_);
lean_inc(v_E_4515_);
lean_inc(v_W_4514_);
lean_inc(v_w_4513_);
lean_inc(v_q_4512_);
lean_inc(v_d_4511_);
lean_inc(v_L_4510_);
lean_inc(v_M_4509_);
lean_inc(v_D_4508_);
lean_inc(v_Y_4507_);
lean_inc(v_u_4506_);
lean_inc(v_y_4505_);
lean_inc(v_G_4504_);
lean_dec(v_date_4141_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4549_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4503_ == 0)
{
lean_ctor_set_tag(v___x_4502_, 1);
lean_ctor_set(v___x_4502_, 0, v_data_4143_);
v___x_4544_ = v___x_4502_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_data_4143_);
v___x_4544_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
lean_object* v___x_4546_; 
if (v_isShared_4542_ == 0)
{
lean_ctor_set(v___x_4541_, 8, v___x_4544_);
v___x_4546_ = v___x_4541_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v_G_4504_);
lean_ctor_set(v_reuseFailAlloc_4547_, 1, v_y_4505_);
lean_ctor_set(v_reuseFailAlloc_4547_, 2, v_u_4506_);
lean_ctor_set(v_reuseFailAlloc_4547_, 3, v_Y_4507_);
lean_ctor_set(v_reuseFailAlloc_4547_, 4, v_D_4508_);
lean_ctor_set(v_reuseFailAlloc_4547_, 5, v_M_4509_);
lean_ctor_set(v_reuseFailAlloc_4547_, 6, v_L_4510_);
lean_ctor_set(v_reuseFailAlloc_4547_, 7, v_d_4511_);
lean_ctor_set(v_reuseFailAlloc_4547_, 8, v___x_4544_);
lean_ctor_set(v_reuseFailAlloc_4547_, 9, v_q_4512_);
lean_ctor_set(v_reuseFailAlloc_4547_, 10, v_w_4513_);
lean_ctor_set(v_reuseFailAlloc_4547_, 11, v_W_4514_);
lean_ctor_set(v_reuseFailAlloc_4547_, 12, v_E_4515_);
lean_ctor_set(v_reuseFailAlloc_4547_, 13, v_e_4516_);
lean_ctor_set(v_reuseFailAlloc_4547_, 14, v_c_4517_);
lean_ctor_set(v_reuseFailAlloc_4547_, 15, v_F_4518_);
lean_ctor_set(v_reuseFailAlloc_4547_, 16, v_a_4519_);
lean_ctor_set(v_reuseFailAlloc_4547_, 17, v_b_4520_);
lean_ctor_set(v_reuseFailAlloc_4547_, 18, v_B_4521_);
lean_ctor_set(v_reuseFailAlloc_4547_, 19, v_h_4522_);
lean_ctor_set(v_reuseFailAlloc_4547_, 20, v_K_4523_);
lean_ctor_set(v_reuseFailAlloc_4547_, 21, v_k_4524_);
lean_ctor_set(v_reuseFailAlloc_4547_, 22, v_H_4525_);
lean_ctor_set(v_reuseFailAlloc_4547_, 23, v_m_4526_);
lean_ctor_set(v_reuseFailAlloc_4547_, 24, v_s_4527_);
lean_ctor_set(v_reuseFailAlloc_4547_, 25, v_S_4528_);
lean_ctor_set(v_reuseFailAlloc_4547_, 26, v_A_4529_);
lean_ctor_set(v_reuseFailAlloc_4547_, 27, v_n_4530_);
lean_ctor_set(v_reuseFailAlloc_4547_, 28, v_N_4531_);
lean_ctor_set(v_reuseFailAlloc_4547_, 29, v_V_4532_);
lean_ctor_set(v_reuseFailAlloc_4547_, 30, v_z_4533_);
lean_ctor_set(v_reuseFailAlloc_4547_, 31, v_zabbrev_4534_);
lean_ctor_set(v_reuseFailAlloc_4547_, 32, v_v_4535_);
lean_ctor_set(v_reuseFailAlloc_4547_, 33, v_O_4536_);
lean_ctor_set(v_reuseFailAlloc_4547_, 34, v_X_4537_);
lean_ctor_set(v_reuseFailAlloc_4547_, 35, v_x_4538_);
lean_ctor_set(v_reuseFailAlloc_4547_, 36, v_Z_4539_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
return v___x_4546_;
}
}
}
}
}
case 8:
{
lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4603_; 
v_isSharedCheck_4603_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4603_ == 0)
{
lean_object* v_unused_4604_; 
v_unused_4604_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4604_);
v___x_4554_ = v_modifier_4142_;
v_isShared_4555_ = v_isSharedCheck_4603_;
goto v_resetjp_4553_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4603_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v_G_4556_; lean_object* v_y_4557_; lean_object* v_u_4558_; lean_object* v_Y_4559_; lean_object* v_D_4560_; lean_object* v_M_4561_; lean_object* v_L_4562_; lean_object* v_d_4563_; lean_object* v_Q_4564_; lean_object* v_w_4565_; lean_object* v_W_4566_; lean_object* v_E_4567_; lean_object* v_e_4568_; lean_object* v_c_4569_; lean_object* v_F_4570_; lean_object* v_a_4571_; lean_object* v_b_4572_; lean_object* v_B_4573_; lean_object* v_h_4574_; lean_object* v_K_4575_; lean_object* v_k_4576_; lean_object* v_H_4577_; lean_object* v_m_4578_; lean_object* v_s_4579_; lean_object* v_S_4580_; lean_object* v_A_4581_; lean_object* v_n_4582_; lean_object* v_N_4583_; lean_object* v_V_4584_; lean_object* v_z_4585_; lean_object* v_zabbrev_4586_; lean_object* v_v_4587_; lean_object* v_O_4588_; lean_object* v_X_4589_; lean_object* v_x_4590_; lean_object* v_Z_4591_; lean_object* v___x_4593_; uint8_t v_isShared_4594_; uint8_t v_isSharedCheck_4601_; 
v_G_4556_ = lean_ctor_get(v_date_4141_, 0);
v_y_4557_ = lean_ctor_get(v_date_4141_, 1);
v_u_4558_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4559_ = lean_ctor_get(v_date_4141_, 3);
v_D_4560_ = lean_ctor_get(v_date_4141_, 4);
v_M_4561_ = lean_ctor_get(v_date_4141_, 5);
v_L_4562_ = lean_ctor_get(v_date_4141_, 6);
v_d_4563_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4564_ = lean_ctor_get(v_date_4141_, 8);
v_w_4565_ = lean_ctor_get(v_date_4141_, 10);
v_W_4566_ = lean_ctor_get(v_date_4141_, 11);
v_E_4567_ = lean_ctor_get(v_date_4141_, 12);
v_e_4568_ = lean_ctor_get(v_date_4141_, 13);
v_c_4569_ = lean_ctor_get(v_date_4141_, 14);
v_F_4570_ = lean_ctor_get(v_date_4141_, 15);
v_a_4571_ = lean_ctor_get(v_date_4141_, 16);
v_b_4572_ = lean_ctor_get(v_date_4141_, 17);
v_B_4573_ = lean_ctor_get(v_date_4141_, 18);
v_h_4574_ = lean_ctor_get(v_date_4141_, 19);
v_K_4575_ = lean_ctor_get(v_date_4141_, 20);
v_k_4576_ = lean_ctor_get(v_date_4141_, 21);
v_H_4577_ = lean_ctor_get(v_date_4141_, 22);
v_m_4578_ = lean_ctor_get(v_date_4141_, 23);
v_s_4579_ = lean_ctor_get(v_date_4141_, 24);
v_S_4580_ = lean_ctor_get(v_date_4141_, 25);
v_A_4581_ = lean_ctor_get(v_date_4141_, 26);
v_n_4582_ = lean_ctor_get(v_date_4141_, 27);
v_N_4583_ = lean_ctor_get(v_date_4141_, 28);
v_V_4584_ = lean_ctor_get(v_date_4141_, 29);
v_z_4585_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4586_ = lean_ctor_get(v_date_4141_, 31);
v_v_4587_ = lean_ctor_get(v_date_4141_, 32);
v_O_4588_ = lean_ctor_get(v_date_4141_, 33);
v_X_4589_ = lean_ctor_get(v_date_4141_, 34);
v_x_4590_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4591_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4601_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4601_ == 0)
{
lean_object* v_unused_4602_; 
v_unused_4602_ = lean_ctor_get(v_date_4141_, 9);
lean_dec(v_unused_4602_);
v___x_4593_ = v_date_4141_;
v_isShared_4594_ = v_isSharedCheck_4601_;
goto v_resetjp_4592_;
}
else
{
lean_inc(v_Z_4591_);
lean_inc(v_x_4590_);
lean_inc(v_X_4589_);
lean_inc(v_O_4588_);
lean_inc(v_v_4587_);
lean_inc(v_zabbrev_4586_);
lean_inc(v_z_4585_);
lean_inc(v_V_4584_);
lean_inc(v_N_4583_);
lean_inc(v_n_4582_);
lean_inc(v_A_4581_);
lean_inc(v_S_4580_);
lean_inc(v_s_4579_);
lean_inc(v_m_4578_);
lean_inc(v_H_4577_);
lean_inc(v_k_4576_);
lean_inc(v_K_4575_);
lean_inc(v_h_4574_);
lean_inc(v_B_4573_);
lean_inc(v_b_4572_);
lean_inc(v_a_4571_);
lean_inc(v_F_4570_);
lean_inc(v_c_4569_);
lean_inc(v_e_4568_);
lean_inc(v_E_4567_);
lean_inc(v_W_4566_);
lean_inc(v_w_4565_);
lean_inc(v_Q_4564_);
lean_inc(v_d_4563_);
lean_inc(v_L_4562_);
lean_inc(v_M_4561_);
lean_inc(v_D_4560_);
lean_inc(v_Y_4559_);
lean_inc(v_u_4558_);
lean_inc(v_y_4557_);
lean_inc(v_G_4556_);
lean_dec(v_date_4141_);
v___x_4593_ = lean_box(0);
v_isShared_4594_ = v_isSharedCheck_4601_;
goto v_resetjp_4592_;
}
v_resetjp_4592_:
{
lean_object* v___x_4596_; 
if (v_isShared_4555_ == 0)
{
lean_ctor_set_tag(v___x_4554_, 1);
lean_ctor_set(v___x_4554_, 0, v_data_4143_);
v___x_4596_ = v___x_4554_;
goto v_reusejp_4595_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_data_4143_);
v___x_4596_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4595_;
}
v_reusejp_4595_:
{
lean_object* v___x_4598_; 
if (v_isShared_4594_ == 0)
{
lean_ctor_set(v___x_4593_, 9, v___x_4596_);
v___x_4598_ = v___x_4593_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4599_; 
v_reuseFailAlloc_4599_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4599_, 0, v_G_4556_);
lean_ctor_set(v_reuseFailAlloc_4599_, 1, v_y_4557_);
lean_ctor_set(v_reuseFailAlloc_4599_, 2, v_u_4558_);
lean_ctor_set(v_reuseFailAlloc_4599_, 3, v_Y_4559_);
lean_ctor_set(v_reuseFailAlloc_4599_, 4, v_D_4560_);
lean_ctor_set(v_reuseFailAlloc_4599_, 5, v_M_4561_);
lean_ctor_set(v_reuseFailAlloc_4599_, 6, v_L_4562_);
lean_ctor_set(v_reuseFailAlloc_4599_, 7, v_d_4563_);
lean_ctor_set(v_reuseFailAlloc_4599_, 8, v_Q_4564_);
lean_ctor_set(v_reuseFailAlloc_4599_, 9, v___x_4596_);
lean_ctor_set(v_reuseFailAlloc_4599_, 10, v_w_4565_);
lean_ctor_set(v_reuseFailAlloc_4599_, 11, v_W_4566_);
lean_ctor_set(v_reuseFailAlloc_4599_, 12, v_E_4567_);
lean_ctor_set(v_reuseFailAlloc_4599_, 13, v_e_4568_);
lean_ctor_set(v_reuseFailAlloc_4599_, 14, v_c_4569_);
lean_ctor_set(v_reuseFailAlloc_4599_, 15, v_F_4570_);
lean_ctor_set(v_reuseFailAlloc_4599_, 16, v_a_4571_);
lean_ctor_set(v_reuseFailAlloc_4599_, 17, v_b_4572_);
lean_ctor_set(v_reuseFailAlloc_4599_, 18, v_B_4573_);
lean_ctor_set(v_reuseFailAlloc_4599_, 19, v_h_4574_);
lean_ctor_set(v_reuseFailAlloc_4599_, 20, v_K_4575_);
lean_ctor_set(v_reuseFailAlloc_4599_, 21, v_k_4576_);
lean_ctor_set(v_reuseFailAlloc_4599_, 22, v_H_4577_);
lean_ctor_set(v_reuseFailAlloc_4599_, 23, v_m_4578_);
lean_ctor_set(v_reuseFailAlloc_4599_, 24, v_s_4579_);
lean_ctor_set(v_reuseFailAlloc_4599_, 25, v_S_4580_);
lean_ctor_set(v_reuseFailAlloc_4599_, 26, v_A_4581_);
lean_ctor_set(v_reuseFailAlloc_4599_, 27, v_n_4582_);
lean_ctor_set(v_reuseFailAlloc_4599_, 28, v_N_4583_);
lean_ctor_set(v_reuseFailAlloc_4599_, 29, v_V_4584_);
lean_ctor_set(v_reuseFailAlloc_4599_, 30, v_z_4585_);
lean_ctor_set(v_reuseFailAlloc_4599_, 31, v_zabbrev_4586_);
lean_ctor_set(v_reuseFailAlloc_4599_, 32, v_v_4587_);
lean_ctor_set(v_reuseFailAlloc_4599_, 33, v_O_4588_);
lean_ctor_set(v_reuseFailAlloc_4599_, 34, v_X_4589_);
lean_ctor_set(v_reuseFailAlloc_4599_, 35, v_x_4590_);
lean_ctor_set(v_reuseFailAlloc_4599_, 36, v_Z_4591_);
v___x_4598_ = v_reuseFailAlloc_4599_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
return v___x_4598_;
}
}
}
}
}
case 9:
{
lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4655_; 
v_isSharedCheck_4655_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4655_ == 0)
{
lean_object* v_unused_4656_; 
v_unused_4656_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4656_);
v___x_4606_ = v_modifier_4142_;
v_isShared_4607_ = v_isSharedCheck_4655_;
goto v_resetjp_4605_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4655_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v_G_4608_; lean_object* v_y_4609_; lean_object* v_u_4610_; lean_object* v_D_4611_; lean_object* v_M_4612_; lean_object* v_L_4613_; lean_object* v_d_4614_; lean_object* v_Q_4615_; lean_object* v_q_4616_; lean_object* v_w_4617_; lean_object* v_W_4618_; lean_object* v_E_4619_; lean_object* v_e_4620_; lean_object* v_c_4621_; lean_object* v_F_4622_; lean_object* v_a_4623_; lean_object* v_b_4624_; lean_object* v_B_4625_; lean_object* v_h_4626_; lean_object* v_K_4627_; lean_object* v_k_4628_; lean_object* v_H_4629_; lean_object* v_m_4630_; lean_object* v_s_4631_; lean_object* v_S_4632_; lean_object* v_A_4633_; lean_object* v_n_4634_; lean_object* v_N_4635_; lean_object* v_V_4636_; lean_object* v_z_4637_; lean_object* v_zabbrev_4638_; lean_object* v_v_4639_; lean_object* v_O_4640_; lean_object* v_X_4641_; lean_object* v_x_4642_; lean_object* v_Z_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4653_; 
v_G_4608_ = lean_ctor_get(v_date_4141_, 0);
v_y_4609_ = lean_ctor_get(v_date_4141_, 1);
v_u_4610_ = lean_ctor_get(v_date_4141_, 2);
v_D_4611_ = lean_ctor_get(v_date_4141_, 4);
v_M_4612_ = lean_ctor_get(v_date_4141_, 5);
v_L_4613_ = lean_ctor_get(v_date_4141_, 6);
v_d_4614_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4615_ = lean_ctor_get(v_date_4141_, 8);
v_q_4616_ = lean_ctor_get(v_date_4141_, 9);
v_w_4617_ = lean_ctor_get(v_date_4141_, 10);
v_W_4618_ = lean_ctor_get(v_date_4141_, 11);
v_E_4619_ = lean_ctor_get(v_date_4141_, 12);
v_e_4620_ = lean_ctor_get(v_date_4141_, 13);
v_c_4621_ = lean_ctor_get(v_date_4141_, 14);
v_F_4622_ = lean_ctor_get(v_date_4141_, 15);
v_a_4623_ = lean_ctor_get(v_date_4141_, 16);
v_b_4624_ = lean_ctor_get(v_date_4141_, 17);
v_B_4625_ = lean_ctor_get(v_date_4141_, 18);
v_h_4626_ = lean_ctor_get(v_date_4141_, 19);
v_K_4627_ = lean_ctor_get(v_date_4141_, 20);
v_k_4628_ = lean_ctor_get(v_date_4141_, 21);
v_H_4629_ = lean_ctor_get(v_date_4141_, 22);
v_m_4630_ = lean_ctor_get(v_date_4141_, 23);
v_s_4631_ = lean_ctor_get(v_date_4141_, 24);
v_S_4632_ = lean_ctor_get(v_date_4141_, 25);
v_A_4633_ = lean_ctor_get(v_date_4141_, 26);
v_n_4634_ = lean_ctor_get(v_date_4141_, 27);
v_N_4635_ = lean_ctor_get(v_date_4141_, 28);
v_V_4636_ = lean_ctor_get(v_date_4141_, 29);
v_z_4637_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4638_ = lean_ctor_get(v_date_4141_, 31);
v_v_4639_ = lean_ctor_get(v_date_4141_, 32);
v_O_4640_ = lean_ctor_get(v_date_4141_, 33);
v_X_4641_ = lean_ctor_get(v_date_4141_, 34);
v_x_4642_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4643_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4653_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4653_ == 0)
{
lean_object* v_unused_4654_; 
v_unused_4654_ = lean_ctor_get(v_date_4141_, 3);
lean_dec(v_unused_4654_);
v___x_4645_ = v_date_4141_;
v_isShared_4646_ = v_isSharedCheck_4653_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_Z_4643_);
lean_inc(v_x_4642_);
lean_inc(v_X_4641_);
lean_inc(v_O_4640_);
lean_inc(v_v_4639_);
lean_inc(v_zabbrev_4638_);
lean_inc(v_z_4637_);
lean_inc(v_V_4636_);
lean_inc(v_N_4635_);
lean_inc(v_n_4634_);
lean_inc(v_A_4633_);
lean_inc(v_S_4632_);
lean_inc(v_s_4631_);
lean_inc(v_m_4630_);
lean_inc(v_H_4629_);
lean_inc(v_k_4628_);
lean_inc(v_K_4627_);
lean_inc(v_h_4626_);
lean_inc(v_B_4625_);
lean_inc(v_b_4624_);
lean_inc(v_a_4623_);
lean_inc(v_F_4622_);
lean_inc(v_c_4621_);
lean_inc(v_e_4620_);
lean_inc(v_E_4619_);
lean_inc(v_W_4618_);
lean_inc(v_w_4617_);
lean_inc(v_q_4616_);
lean_inc(v_Q_4615_);
lean_inc(v_d_4614_);
lean_inc(v_L_4613_);
lean_inc(v_M_4612_);
lean_inc(v_D_4611_);
lean_inc(v_u_4610_);
lean_inc(v_y_4609_);
lean_inc(v_G_4608_);
lean_dec(v_date_4141_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4653_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4607_ == 0)
{
lean_ctor_set_tag(v___x_4606_, 1);
lean_ctor_set(v___x_4606_, 0, v_data_4143_);
v___x_4648_ = v___x_4606_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_data_4143_);
v___x_4648_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
lean_object* v___x_4650_; 
if (v_isShared_4646_ == 0)
{
lean_ctor_set(v___x_4645_, 3, v___x_4648_);
v___x_4650_ = v___x_4645_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v_G_4608_);
lean_ctor_set(v_reuseFailAlloc_4651_, 1, v_y_4609_);
lean_ctor_set(v_reuseFailAlloc_4651_, 2, v_u_4610_);
lean_ctor_set(v_reuseFailAlloc_4651_, 3, v___x_4648_);
lean_ctor_set(v_reuseFailAlloc_4651_, 4, v_D_4611_);
lean_ctor_set(v_reuseFailAlloc_4651_, 5, v_M_4612_);
lean_ctor_set(v_reuseFailAlloc_4651_, 6, v_L_4613_);
lean_ctor_set(v_reuseFailAlloc_4651_, 7, v_d_4614_);
lean_ctor_set(v_reuseFailAlloc_4651_, 8, v_Q_4615_);
lean_ctor_set(v_reuseFailAlloc_4651_, 9, v_q_4616_);
lean_ctor_set(v_reuseFailAlloc_4651_, 10, v_w_4617_);
lean_ctor_set(v_reuseFailAlloc_4651_, 11, v_W_4618_);
lean_ctor_set(v_reuseFailAlloc_4651_, 12, v_E_4619_);
lean_ctor_set(v_reuseFailAlloc_4651_, 13, v_e_4620_);
lean_ctor_set(v_reuseFailAlloc_4651_, 14, v_c_4621_);
lean_ctor_set(v_reuseFailAlloc_4651_, 15, v_F_4622_);
lean_ctor_set(v_reuseFailAlloc_4651_, 16, v_a_4623_);
lean_ctor_set(v_reuseFailAlloc_4651_, 17, v_b_4624_);
lean_ctor_set(v_reuseFailAlloc_4651_, 18, v_B_4625_);
lean_ctor_set(v_reuseFailAlloc_4651_, 19, v_h_4626_);
lean_ctor_set(v_reuseFailAlloc_4651_, 20, v_K_4627_);
lean_ctor_set(v_reuseFailAlloc_4651_, 21, v_k_4628_);
lean_ctor_set(v_reuseFailAlloc_4651_, 22, v_H_4629_);
lean_ctor_set(v_reuseFailAlloc_4651_, 23, v_m_4630_);
lean_ctor_set(v_reuseFailAlloc_4651_, 24, v_s_4631_);
lean_ctor_set(v_reuseFailAlloc_4651_, 25, v_S_4632_);
lean_ctor_set(v_reuseFailAlloc_4651_, 26, v_A_4633_);
lean_ctor_set(v_reuseFailAlloc_4651_, 27, v_n_4634_);
lean_ctor_set(v_reuseFailAlloc_4651_, 28, v_N_4635_);
lean_ctor_set(v_reuseFailAlloc_4651_, 29, v_V_4636_);
lean_ctor_set(v_reuseFailAlloc_4651_, 30, v_z_4637_);
lean_ctor_set(v_reuseFailAlloc_4651_, 31, v_zabbrev_4638_);
lean_ctor_set(v_reuseFailAlloc_4651_, 32, v_v_4639_);
lean_ctor_set(v_reuseFailAlloc_4651_, 33, v_O_4640_);
lean_ctor_set(v_reuseFailAlloc_4651_, 34, v_X_4641_);
lean_ctor_set(v_reuseFailAlloc_4651_, 35, v_x_4642_);
lean_ctor_set(v_reuseFailAlloc_4651_, 36, v_Z_4643_);
v___x_4650_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
return v___x_4650_;
}
}
}
}
}
case 10:
{
lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4707_; 
v_isSharedCheck_4707_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4707_ == 0)
{
lean_object* v_unused_4708_; 
v_unused_4708_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4708_);
v___x_4658_ = v_modifier_4142_;
v_isShared_4659_ = v_isSharedCheck_4707_;
goto v_resetjp_4657_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4707_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v_G_4660_; lean_object* v_y_4661_; lean_object* v_u_4662_; lean_object* v_Y_4663_; lean_object* v_D_4664_; lean_object* v_M_4665_; lean_object* v_L_4666_; lean_object* v_d_4667_; lean_object* v_Q_4668_; lean_object* v_q_4669_; lean_object* v_W_4670_; lean_object* v_E_4671_; lean_object* v_e_4672_; lean_object* v_c_4673_; lean_object* v_F_4674_; lean_object* v_a_4675_; lean_object* v_b_4676_; lean_object* v_B_4677_; lean_object* v_h_4678_; lean_object* v_K_4679_; lean_object* v_k_4680_; lean_object* v_H_4681_; lean_object* v_m_4682_; lean_object* v_s_4683_; lean_object* v_S_4684_; lean_object* v_A_4685_; lean_object* v_n_4686_; lean_object* v_N_4687_; lean_object* v_V_4688_; lean_object* v_z_4689_; lean_object* v_zabbrev_4690_; lean_object* v_v_4691_; lean_object* v_O_4692_; lean_object* v_X_4693_; lean_object* v_x_4694_; lean_object* v_Z_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4705_; 
v_G_4660_ = lean_ctor_get(v_date_4141_, 0);
v_y_4661_ = lean_ctor_get(v_date_4141_, 1);
v_u_4662_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4663_ = lean_ctor_get(v_date_4141_, 3);
v_D_4664_ = lean_ctor_get(v_date_4141_, 4);
v_M_4665_ = lean_ctor_get(v_date_4141_, 5);
v_L_4666_ = lean_ctor_get(v_date_4141_, 6);
v_d_4667_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4668_ = lean_ctor_get(v_date_4141_, 8);
v_q_4669_ = lean_ctor_get(v_date_4141_, 9);
v_W_4670_ = lean_ctor_get(v_date_4141_, 11);
v_E_4671_ = lean_ctor_get(v_date_4141_, 12);
v_e_4672_ = lean_ctor_get(v_date_4141_, 13);
v_c_4673_ = lean_ctor_get(v_date_4141_, 14);
v_F_4674_ = lean_ctor_get(v_date_4141_, 15);
v_a_4675_ = lean_ctor_get(v_date_4141_, 16);
v_b_4676_ = lean_ctor_get(v_date_4141_, 17);
v_B_4677_ = lean_ctor_get(v_date_4141_, 18);
v_h_4678_ = lean_ctor_get(v_date_4141_, 19);
v_K_4679_ = lean_ctor_get(v_date_4141_, 20);
v_k_4680_ = lean_ctor_get(v_date_4141_, 21);
v_H_4681_ = lean_ctor_get(v_date_4141_, 22);
v_m_4682_ = lean_ctor_get(v_date_4141_, 23);
v_s_4683_ = lean_ctor_get(v_date_4141_, 24);
v_S_4684_ = lean_ctor_get(v_date_4141_, 25);
v_A_4685_ = lean_ctor_get(v_date_4141_, 26);
v_n_4686_ = lean_ctor_get(v_date_4141_, 27);
v_N_4687_ = lean_ctor_get(v_date_4141_, 28);
v_V_4688_ = lean_ctor_get(v_date_4141_, 29);
v_z_4689_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4690_ = lean_ctor_get(v_date_4141_, 31);
v_v_4691_ = lean_ctor_get(v_date_4141_, 32);
v_O_4692_ = lean_ctor_get(v_date_4141_, 33);
v_X_4693_ = lean_ctor_get(v_date_4141_, 34);
v_x_4694_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4695_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4705_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4705_ == 0)
{
lean_object* v_unused_4706_; 
v_unused_4706_ = lean_ctor_get(v_date_4141_, 10);
lean_dec(v_unused_4706_);
v___x_4697_ = v_date_4141_;
v_isShared_4698_ = v_isSharedCheck_4705_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_Z_4695_);
lean_inc(v_x_4694_);
lean_inc(v_X_4693_);
lean_inc(v_O_4692_);
lean_inc(v_v_4691_);
lean_inc(v_zabbrev_4690_);
lean_inc(v_z_4689_);
lean_inc(v_V_4688_);
lean_inc(v_N_4687_);
lean_inc(v_n_4686_);
lean_inc(v_A_4685_);
lean_inc(v_S_4684_);
lean_inc(v_s_4683_);
lean_inc(v_m_4682_);
lean_inc(v_H_4681_);
lean_inc(v_k_4680_);
lean_inc(v_K_4679_);
lean_inc(v_h_4678_);
lean_inc(v_B_4677_);
lean_inc(v_b_4676_);
lean_inc(v_a_4675_);
lean_inc(v_F_4674_);
lean_inc(v_c_4673_);
lean_inc(v_e_4672_);
lean_inc(v_E_4671_);
lean_inc(v_W_4670_);
lean_inc(v_q_4669_);
lean_inc(v_Q_4668_);
lean_inc(v_d_4667_);
lean_inc(v_L_4666_);
lean_inc(v_M_4665_);
lean_inc(v_D_4664_);
lean_inc(v_Y_4663_);
lean_inc(v_u_4662_);
lean_inc(v_y_4661_);
lean_inc(v_G_4660_);
lean_dec(v_date_4141_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4705_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
lean_object* v___x_4700_; 
if (v_isShared_4659_ == 0)
{
lean_ctor_set_tag(v___x_4658_, 1);
lean_ctor_set(v___x_4658_, 0, v_data_4143_);
v___x_4700_ = v___x_4658_;
goto v_reusejp_4699_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_data_4143_);
v___x_4700_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4699_;
}
v_reusejp_4699_:
{
lean_object* v___x_4702_; 
if (v_isShared_4698_ == 0)
{
lean_ctor_set(v___x_4697_, 10, v___x_4700_);
v___x_4702_ = v___x_4697_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_G_4660_);
lean_ctor_set(v_reuseFailAlloc_4703_, 1, v_y_4661_);
lean_ctor_set(v_reuseFailAlloc_4703_, 2, v_u_4662_);
lean_ctor_set(v_reuseFailAlloc_4703_, 3, v_Y_4663_);
lean_ctor_set(v_reuseFailAlloc_4703_, 4, v_D_4664_);
lean_ctor_set(v_reuseFailAlloc_4703_, 5, v_M_4665_);
lean_ctor_set(v_reuseFailAlloc_4703_, 6, v_L_4666_);
lean_ctor_set(v_reuseFailAlloc_4703_, 7, v_d_4667_);
lean_ctor_set(v_reuseFailAlloc_4703_, 8, v_Q_4668_);
lean_ctor_set(v_reuseFailAlloc_4703_, 9, v_q_4669_);
lean_ctor_set(v_reuseFailAlloc_4703_, 10, v___x_4700_);
lean_ctor_set(v_reuseFailAlloc_4703_, 11, v_W_4670_);
lean_ctor_set(v_reuseFailAlloc_4703_, 12, v_E_4671_);
lean_ctor_set(v_reuseFailAlloc_4703_, 13, v_e_4672_);
lean_ctor_set(v_reuseFailAlloc_4703_, 14, v_c_4673_);
lean_ctor_set(v_reuseFailAlloc_4703_, 15, v_F_4674_);
lean_ctor_set(v_reuseFailAlloc_4703_, 16, v_a_4675_);
lean_ctor_set(v_reuseFailAlloc_4703_, 17, v_b_4676_);
lean_ctor_set(v_reuseFailAlloc_4703_, 18, v_B_4677_);
lean_ctor_set(v_reuseFailAlloc_4703_, 19, v_h_4678_);
lean_ctor_set(v_reuseFailAlloc_4703_, 20, v_K_4679_);
lean_ctor_set(v_reuseFailAlloc_4703_, 21, v_k_4680_);
lean_ctor_set(v_reuseFailAlloc_4703_, 22, v_H_4681_);
lean_ctor_set(v_reuseFailAlloc_4703_, 23, v_m_4682_);
lean_ctor_set(v_reuseFailAlloc_4703_, 24, v_s_4683_);
lean_ctor_set(v_reuseFailAlloc_4703_, 25, v_S_4684_);
lean_ctor_set(v_reuseFailAlloc_4703_, 26, v_A_4685_);
lean_ctor_set(v_reuseFailAlloc_4703_, 27, v_n_4686_);
lean_ctor_set(v_reuseFailAlloc_4703_, 28, v_N_4687_);
lean_ctor_set(v_reuseFailAlloc_4703_, 29, v_V_4688_);
lean_ctor_set(v_reuseFailAlloc_4703_, 30, v_z_4689_);
lean_ctor_set(v_reuseFailAlloc_4703_, 31, v_zabbrev_4690_);
lean_ctor_set(v_reuseFailAlloc_4703_, 32, v_v_4691_);
lean_ctor_set(v_reuseFailAlloc_4703_, 33, v_O_4692_);
lean_ctor_set(v_reuseFailAlloc_4703_, 34, v_X_4693_);
lean_ctor_set(v_reuseFailAlloc_4703_, 35, v_x_4694_);
lean_ctor_set(v_reuseFailAlloc_4703_, 36, v_Z_4695_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
}
case 11:
{
lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4759_; 
v_isSharedCheck_4759_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4759_ == 0)
{
lean_object* v_unused_4760_; 
v_unused_4760_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4760_);
v___x_4710_ = v_modifier_4142_;
v_isShared_4711_ = v_isSharedCheck_4759_;
goto v_resetjp_4709_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4759_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v_G_4712_; lean_object* v_y_4713_; lean_object* v_u_4714_; lean_object* v_Y_4715_; lean_object* v_D_4716_; lean_object* v_M_4717_; lean_object* v_L_4718_; lean_object* v_d_4719_; lean_object* v_Q_4720_; lean_object* v_q_4721_; lean_object* v_w_4722_; lean_object* v_E_4723_; lean_object* v_e_4724_; lean_object* v_c_4725_; lean_object* v_F_4726_; lean_object* v_a_4727_; lean_object* v_b_4728_; lean_object* v_B_4729_; lean_object* v_h_4730_; lean_object* v_K_4731_; lean_object* v_k_4732_; lean_object* v_H_4733_; lean_object* v_m_4734_; lean_object* v_s_4735_; lean_object* v_S_4736_; lean_object* v_A_4737_; lean_object* v_n_4738_; lean_object* v_N_4739_; lean_object* v_V_4740_; lean_object* v_z_4741_; lean_object* v_zabbrev_4742_; lean_object* v_v_4743_; lean_object* v_O_4744_; lean_object* v_X_4745_; lean_object* v_x_4746_; lean_object* v_Z_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4757_; 
v_G_4712_ = lean_ctor_get(v_date_4141_, 0);
v_y_4713_ = lean_ctor_get(v_date_4141_, 1);
v_u_4714_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4715_ = lean_ctor_get(v_date_4141_, 3);
v_D_4716_ = lean_ctor_get(v_date_4141_, 4);
v_M_4717_ = lean_ctor_get(v_date_4141_, 5);
v_L_4718_ = lean_ctor_get(v_date_4141_, 6);
v_d_4719_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4720_ = lean_ctor_get(v_date_4141_, 8);
v_q_4721_ = lean_ctor_get(v_date_4141_, 9);
v_w_4722_ = lean_ctor_get(v_date_4141_, 10);
v_E_4723_ = lean_ctor_get(v_date_4141_, 12);
v_e_4724_ = lean_ctor_get(v_date_4141_, 13);
v_c_4725_ = lean_ctor_get(v_date_4141_, 14);
v_F_4726_ = lean_ctor_get(v_date_4141_, 15);
v_a_4727_ = lean_ctor_get(v_date_4141_, 16);
v_b_4728_ = lean_ctor_get(v_date_4141_, 17);
v_B_4729_ = lean_ctor_get(v_date_4141_, 18);
v_h_4730_ = lean_ctor_get(v_date_4141_, 19);
v_K_4731_ = lean_ctor_get(v_date_4141_, 20);
v_k_4732_ = lean_ctor_get(v_date_4141_, 21);
v_H_4733_ = lean_ctor_get(v_date_4141_, 22);
v_m_4734_ = lean_ctor_get(v_date_4141_, 23);
v_s_4735_ = lean_ctor_get(v_date_4141_, 24);
v_S_4736_ = lean_ctor_get(v_date_4141_, 25);
v_A_4737_ = lean_ctor_get(v_date_4141_, 26);
v_n_4738_ = lean_ctor_get(v_date_4141_, 27);
v_N_4739_ = lean_ctor_get(v_date_4141_, 28);
v_V_4740_ = lean_ctor_get(v_date_4141_, 29);
v_z_4741_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4742_ = lean_ctor_get(v_date_4141_, 31);
v_v_4743_ = lean_ctor_get(v_date_4141_, 32);
v_O_4744_ = lean_ctor_get(v_date_4141_, 33);
v_X_4745_ = lean_ctor_get(v_date_4141_, 34);
v_x_4746_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4747_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4757_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4757_ == 0)
{
lean_object* v_unused_4758_; 
v_unused_4758_ = lean_ctor_get(v_date_4141_, 11);
lean_dec(v_unused_4758_);
v___x_4749_ = v_date_4141_;
v_isShared_4750_ = v_isSharedCheck_4757_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_Z_4747_);
lean_inc(v_x_4746_);
lean_inc(v_X_4745_);
lean_inc(v_O_4744_);
lean_inc(v_v_4743_);
lean_inc(v_zabbrev_4742_);
lean_inc(v_z_4741_);
lean_inc(v_V_4740_);
lean_inc(v_N_4739_);
lean_inc(v_n_4738_);
lean_inc(v_A_4737_);
lean_inc(v_S_4736_);
lean_inc(v_s_4735_);
lean_inc(v_m_4734_);
lean_inc(v_H_4733_);
lean_inc(v_k_4732_);
lean_inc(v_K_4731_);
lean_inc(v_h_4730_);
lean_inc(v_B_4729_);
lean_inc(v_b_4728_);
lean_inc(v_a_4727_);
lean_inc(v_F_4726_);
lean_inc(v_c_4725_);
lean_inc(v_e_4724_);
lean_inc(v_E_4723_);
lean_inc(v_w_4722_);
lean_inc(v_q_4721_);
lean_inc(v_Q_4720_);
lean_inc(v_d_4719_);
lean_inc(v_L_4718_);
lean_inc(v_M_4717_);
lean_inc(v_D_4716_);
lean_inc(v_Y_4715_);
lean_inc(v_u_4714_);
lean_inc(v_y_4713_);
lean_inc(v_G_4712_);
lean_dec(v_date_4141_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4757_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4711_ == 0)
{
lean_ctor_set_tag(v___x_4710_, 1);
lean_ctor_set(v___x_4710_, 0, v_data_4143_);
v___x_4752_ = v___x_4710_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v_data_4143_);
v___x_4752_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
lean_object* v___x_4754_; 
if (v_isShared_4750_ == 0)
{
lean_ctor_set(v___x_4749_, 11, v___x_4752_);
v___x_4754_ = v___x_4749_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_G_4712_);
lean_ctor_set(v_reuseFailAlloc_4755_, 1, v_y_4713_);
lean_ctor_set(v_reuseFailAlloc_4755_, 2, v_u_4714_);
lean_ctor_set(v_reuseFailAlloc_4755_, 3, v_Y_4715_);
lean_ctor_set(v_reuseFailAlloc_4755_, 4, v_D_4716_);
lean_ctor_set(v_reuseFailAlloc_4755_, 5, v_M_4717_);
lean_ctor_set(v_reuseFailAlloc_4755_, 6, v_L_4718_);
lean_ctor_set(v_reuseFailAlloc_4755_, 7, v_d_4719_);
lean_ctor_set(v_reuseFailAlloc_4755_, 8, v_Q_4720_);
lean_ctor_set(v_reuseFailAlloc_4755_, 9, v_q_4721_);
lean_ctor_set(v_reuseFailAlloc_4755_, 10, v_w_4722_);
lean_ctor_set(v_reuseFailAlloc_4755_, 11, v___x_4752_);
lean_ctor_set(v_reuseFailAlloc_4755_, 12, v_E_4723_);
lean_ctor_set(v_reuseFailAlloc_4755_, 13, v_e_4724_);
lean_ctor_set(v_reuseFailAlloc_4755_, 14, v_c_4725_);
lean_ctor_set(v_reuseFailAlloc_4755_, 15, v_F_4726_);
lean_ctor_set(v_reuseFailAlloc_4755_, 16, v_a_4727_);
lean_ctor_set(v_reuseFailAlloc_4755_, 17, v_b_4728_);
lean_ctor_set(v_reuseFailAlloc_4755_, 18, v_B_4729_);
lean_ctor_set(v_reuseFailAlloc_4755_, 19, v_h_4730_);
lean_ctor_set(v_reuseFailAlloc_4755_, 20, v_K_4731_);
lean_ctor_set(v_reuseFailAlloc_4755_, 21, v_k_4732_);
lean_ctor_set(v_reuseFailAlloc_4755_, 22, v_H_4733_);
lean_ctor_set(v_reuseFailAlloc_4755_, 23, v_m_4734_);
lean_ctor_set(v_reuseFailAlloc_4755_, 24, v_s_4735_);
lean_ctor_set(v_reuseFailAlloc_4755_, 25, v_S_4736_);
lean_ctor_set(v_reuseFailAlloc_4755_, 26, v_A_4737_);
lean_ctor_set(v_reuseFailAlloc_4755_, 27, v_n_4738_);
lean_ctor_set(v_reuseFailAlloc_4755_, 28, v_N_4739_);
lean_ctor_set(v_reuseFailAlloc_4755_, 29, v_V_4740_);
lean_ctor_set(v_reuseFailAlloc_4755_, 30, v_z_4741_);
lean_ctor_set(v_reuseFailAlloc_4755_, 31, v_zabbrev_4742_);
lean_ctor_set(v_reuseFailAlloc_4755_, 32, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4755_, 33, v_O_4744_);
lean_ctor_set(v_reuseFailAlloc_4755_, 34, v_X_4745_);
lean_ctor_set(v_reuseFailAlloc_4755_, 35, v_x_4746_);
lean_ctor_set(v_reuseFailAlloc_4755_, 36, v_Z_4747_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
}
}
case 12:
{
lean_object* v_G_4761_; lean_object* v_y_4762_; lean_object* v_u_4763_; lean_object* v_Y_4764_; lean_object* v_D_4765_; lean_object* v_M_4766_; lean_object* v_L_4767_; lean_object* v_d_4768_; lean_object* v_Q_4769_; lean_object* v_q_4770_; lean_object* v_w_4771_; lean_object* v_W_4772_; lean_object* v_e_4773_; lean_object* v_c_4774_; lean_object* v_F_4775_; lean_object* v_a_4776_; lean_object* v_b_4777_; lean_object* v_B_4778_; lean_object* v_h_4779_; lean_object* v_K_4780_; lean_object* v_k_4781_; lean_object* v_H_4782_; lean_object* v_m_4783_; lean_object* v_s_4784_; lean_object* v_S_4785_; lean_object* v_A_4786_; lean_object* v_n_4787_; lean_object* v_N_4788_; lean_object* v_V_4789_; lean_object* v_z_4790_; lean_object* v_zabbrev_4791_; lean_object* v_v_4792_; lean_object* v_O_4793_; lean_object* v_X_4794_; lean_object* v_x_4795_; lean_object* v_Z_4796_; lean_object* v___x_4798_; uint8_t v_isShared_4799_; uint8_t v_isSharedCheck_4804_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_4761_ = lean_ctor_get(v_date_4141_, 0);
v_y_4762_ = lean_ctor_get(v_date_4141_, 1);
v_u_4763_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4764_ = lean_ctor_get(v_date_4141_, 3);
v_D_4765_ = lean_ctor_get(v_date_4141_, 4);
v_M_4766_ = lean_ctor_get(v_date_4141_, 5);
v_L_4767_ = lean_ctor_get(v_date_4141_, 6);
v_d_4768_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4769_ = lean_ctor_get(v_date_4141_, 8);
v_q_4770_ = lean_ctor_get(v_date_4141_, 9);
v_w_4771_ = lean_ctor_get(v_date_4141_, 10);
v_W_4772_ = lean_ctor_get(v_date_4141_, 11);
v_e_4773_ = lean_ctor_get(v_date_4141_, 13);
v_c_4774_ = lean_ctor_get(v_date_4141_, 14);
v_F_4775_ = lean_ctor_get(v_date_4141_, 15);
v_a_4776_ = lean_ctor_get(v_date_4141_, 16);
v_b_4777_ = lean_ctor_get(v_date_4141_, 17);
v_B_4778_ = lean_ctor_get(v_date_4141_, 18);
v_h_4779_ = lean_ctor_get(v_date_4141_, 19);
v_K_4780_ = lean_ctor_get(v_date_4141_, 20);
v_k_4781_ = lean_ctor_get(v_date_4141_, 21);
v_H_4782_ = lean_ctor_get(v_date_4141_, 22);
v_m_4783_ = lean_ctor_get(v_date_4141_, 23);
v_s_4784_ = lean_ctor_get(v_date_4141_, 24);
v_S_4785_ = lean_ctor_get(v_date_4141_, 25);
v_A_4786_ = lean_ctor_get(v_date_4141_, 26);
v_n_4787_ = lean_ctor_get(v_date_4141_, 27);
v_N_4788_ = lean_ctor_get(v_date_4141_, 28);
v_V_4789_ = lean_ctor_get(v_date_4141_, 29);
v_z_4790_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4791_ = lean_ctor_get(v_date_4141_, 31);
v_v_4792_ = lean_ctor_get(v_date_4141_, 32);
v_O_4793_ = lean_ctor_get(v_date_4141_, 33);
v_X_4794_ = lean_ctor_get(v_date_4141_, 34);
v_x_4795_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4796_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4804_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4804_ == 0)
{
lean_object* v_unused_4805_; 
v_unused_4805_ = lean_ctor_get(v_date_4141_, 12);
lean_dec(v_unused_4805_);
v___x_4798_ = v_date_4141_;
v_isShared_4799_ = v_isSharedCheck_4804_;
goto v_resetjp_4797_;
}
else
{
lean_inc(v_Z_4796_);
lean_inc(v_x_4795_);
lean_inc(v_X_4794_);
lean_inc(v_O_4793_);
lean_inc(v_v_4792_);
lean_inc(v_zabbrev_4791_);
lean_inc(v_z_4790_);
lean_inc(v_V_4789_);
lean_inc(v_N_4788_);
lean_inc(v_n_4787_);
lean_inc(v_A_4786_);
lean_inc(v_S_4785_);
lean_inc(v_s_4784_);
lean_inc(v_m_4783_);
lean_inc(v_H_4782_);
lean_inc(v_k_4781_);
lean_inc(v_K_4780_);
lean_inc(v_h_4779_);
lean_inc(v_B_4778_);
lean_inc(v_b_4777_);
lean_inc(v_a_4776_);
lean_inc(v_F_4775_);
lean_inc(v_c_4774_);
lean_inc(v_e_4773_);
lean_inc(v_W_4772_);
lean_inc(v_w_4771_);
lean_inc(v_q_4770_);
lean_inc(v_Q_4769_);
lean_inc(v_d_4768_);
lean_inc(v_L_4767_);
lean_inc(v_M_4766_);
lean_inc(v_D_4765_);
lean_inc(v_Y_4764_);
lean_inc(v_u_4763_);
lean_inc(v_y_4762_);
lean_inc(v_G_4761_);
lean_dec(v_date_4141_);
v___x_4798_ = lean_box(0);
v_isShared_4799_ = v_isSharedCheck_4804_;
goto v_resetjp_4797_;
}
v_resetjp_4797_:
{
lean_object* v___x_4800_; lean_object* v___x_4802_; 
v___x_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4800_, 0, v_data_4143_);
if (v_isShared_4799_ == 0)
{
lean_ctor_set(v___x_4798_, 12, v___x_4800_);
v___x_4802_ = v___x_4798_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_G_4761_);
lean_ctor_set(v_reuseFailAlloc_4803_, 1, v_y_4762_);
lean_ctor_set(v_reuseFailAlloc_4803_, 2, v_u_4763_);
lean_ctor_set(v_reuseFailAlloc_4803_, 3, v_Y_4764_);
lean_ctor_set(v_reuseFailAlloc_4803_, 4, v_D_4765_);
lean_ctor_set(v_reuseFailAlloc_4803_, 5, v_M_4766_);
lean_ctor_set(v_reuseFailAlloc_4803_, 6, v_L_4767_);
lean_ctor_set(v_reuseFailAlloc_4803_, 7, v_d_4768_);
lean_ctor_set(v_reuseFailAlloc_4803_, 8, v_Q_4769_);
lean_ctor_set(v_reuseFailAlloc_4803_, 9, v_q_4770_);
lean_ctor_set(v_reuseFailAlloc_4803_, 10, v_w_4771_);
lean_ctor_set(v_reuseFailAlloc_4803_, 11, v_W_4772_);
lean_ctor_set(v_reuseFailAlloc_4803_, 12, v___x_4800_);
lean_ctor_set(v_reuseFailAlloc_4803_, 13, v_e_4773_);
lean_ctor_set(v_reuseFailAlloc_4803_, 14, v_c_4774_);
lean_ctor_set(v_reuseFailAlloc_4803_, 15, v_F_4775_);
lean_ctor_set(v_reuseFailAlloc_4803_, 16, v_a_4776_);
lean_ctor_set(v_reuseFailAlloc_4803_, 17, v_b_4777_);
lean_ctor_set(v_reuseFailAlloc_4803_, 18, v_B_4778_);
lean_ctor_set(v_reuseFailAlloc_4803_, 19, v_h_4779_);
lean_ctor_set(v_reuseFailAlloc_4803_, 20, v_K_4780_);
lean_ctor_set(v_reuseFailAlloc_4803_, 21, v_k_4781_);
lean_ctor_set(v_reuseFailAlloc_4803_, 22, v_H_4782_);
lean_ctor_set(v_reuseFailAlloc_4803_, 23, v_m_4783_);
lean_ctor_set(v_reuseFailAlloc_4803_, 24, v_s_4784_);
lean_ctor_set(v_reuseFailAlloc_4803_, 25, v_S_4785_);
lean_ctor_set(v_reuseFailAlloc_4803_, 26, v_A_4786_);
lean_ctor_set(v_reuseFailAlloc_4803_, 27, v_n_4787_);
lean_ctor_set(v_reuseFailAlloc_4803_, 28, v_N_4788_);
lean_ctor_set(v_reuseFailAlloc_4803_, 29, v_V_4789_);
lean_ctor_set(v_reuseFailAlloc_4803_, 30, v_z_4790_);
lean_ctor_set(v_reuseFailAlloc_4803_, 31, v_zabbrev_4791_);
lean_ctor_set(v_reuseFailAlloc_4803_, 32, v_v_4792_);
lean_ctor_set(v_reuseFailAlloc_4803_, 33, v_O_4793_);
lean_ctor_set(v_reuseFailAlloc_4803_, 34, v_X_4794_);
lean_ctor_set(v_reuseFailAlloc_4803_, 35, v_x_4795_);
lean_ctor_set(v_reuseFailAlloc_4803_, 36, v_Z_4796_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
case 13:
{
lean_object* v___x_4807_; uint8_t v_isShared_4808_; uint8_t v_isSharedCheck_4856_; 
v_isSharedCheck_4856_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4856_ == 0)
{
lean_object* v_unused_4857_; 
v_unused_4857_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4857_);
v___x_4807_ = v_modifier_4142_;
v_isShared_4808_ = v_isSharedCheck_4856_;
goto v_resetjp_4806_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4807_ = lean_box(0);
v_isShared_4808_ = v_isSharedCheck_4856_;
goto v_resetjp_4806_;
}
v_resetjp_4806_:
{
lean_object* v_G_4809_; lean_object* v_y_4810_; lean_object* v_u_4811_; lean_object* v_Y_4812_; lean_object* v_D_4813_; lean_object* v_M_4814_; lean_object* v_L_4815_; lean_object* v_d_4816_; lean_object* v_Q_4817_; lean_object* v_q_4818_; lean_object* v_w_4819_; lean_object* v_W_4820_; lean_object* v_E_4821_; lean_object* v_c_4822_; lean_object* v_F_4823_; lean_object* v_a_4824_; lean_object* v_b_4825_; lean_object* v_B_4826_; lean_object* v_h_4827_; lean_object* v_K_4828_; lean_object* v_k_4829_; lean_object* v_H_4830_; lean_object* v_m_4831_; lean_object* v_s_4832_; lean_object* v_S_4833_; lean_object* v_A_4834_; lean_object* v_n_4835_; lean_object* v_N_4836_; lean_object* v_V_4837_; lean_object* v_z_4838_; lean_object* v_zabbrev_4839_; lean_object* v_v_4840_; lean_object* v_O_4841_; lean_object* v_X_4842_; lean_object* v_x_4843_; lean_object* v_Z_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4854_; 
v_G_4809_ = lean_ctor_get(v_date_4141_, 0);
v_y_4810_ = lean_ctor_get(v_date_4141_, 1);
v_u_4811_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4812_ = lean_ctor_get(v_date_4141_, 3);
v_D_4813_ = lean_ctor_get(v_date_4141_, 4);
v_M_4814_ = lean_ctor_get(v_date_4141_, 5);
v_L_4815_ = lean_ctor_get(v_date_4141_, 6);
v_d_4816_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4817_ = lean_ctor_get(v_date_4141_, 8);
v_q_4818_ = lean_ctor_get(v_date_4141_, 9);
v_w_4819_ = lean_ctor_get(v_date_4141_, 10);
v_W_4820_ = lean_ctor_get(v_date_4141_, 11);
v_E_4821_ = lean_ctor_get(v_date_4141_, 12);
v_c_4822_ = lean_ctor_get(v_date_4141_, 14);
v_F_4823_ = lean_ctor_get(v_date_4141_, 15);
v_a_4824_ = lean_ctor_get(v_date_4141_, 16);
v_b_4825_ = lean_ctor_get(v_date_4141_, 17);
v_B_4826_ = lean_ctor_get(v_date_4141_, 18);
v_h_4827_ = lean_ctor_get(v_date_4141_, 19);
v_K_4828_ = lean_ctor_get(v_date_4141_, 20);
v_k_4829_ = lean_ctor_get(v_date_4141_, 21);
v_H_4830_ = lean_ctor_get(v_date_4141_, 22);
v_m_4831_ = lean_ctor_get(v_date_4141_, 23);
v_s_4832_ = lean_ctor_get(v_date_4141_, 24);
v_S_4833_ = lean_ctor_get(v_date_4141_, 25);
v_A_4834_ = lean_ctor_get(v_date_4141_, 26);
v_n_4835_ = lean_ctor_get(v_date_4141_, 27);
v_N_4836_ = lean_ctor_get(v_date_4141_, 28);
v_V_4837_ = lean_ctor_get(v_date_4141_, 29);
v_z_4838_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4839_ = lean_ctor_get(v_date_4141_, 31);
v_v_4840_ = lean_ctor_get(v_date_4141_, 32);
v_O_4841_ = lean_ctor_get(v_date_4141_, 33);
v_X_4842_ = lean_ctor_get(v_date_4141_, 34);
v_x_4843_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4844_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4854_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4854_ == 0)
{
lean_object* v_unused_4855_; 
v_unused_4855_ = lean_ctor_get(v_date_4141_, 13);
lean_dec(v_unused_4855_);
v___x_4846_ = v_date_4141_;
v_isShared_4847_ = v_isSharedCheck_4854_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_Z_4844_);
lean_inc(v_x_4843_);
lean_inc(v_X_4842_);
lean_inc(v_O_4841_);
lean_inc(v_v_4840_);
lean_inc(v_zabbrev_4839_);
lean_inc(v_z_4838_);
lean_inc(v_V_4837_);
lean_inc(v_N_4836_);
lean_inc(v_n_4835_);
lean_inc(v_A_4834_);
lean_inc(v_S_4833_);
lean_inc(v_s_4832_);
lean_inc(v_m_4831_);
lean_inc(v_H_4830_);
lean_inc(v_k_4829_);
lean_inc(v_K_4828_);
lean_inc(v_h_4827_);
lean_inc(v_B_4826_);
lean_inc(v_b_4825_);
lean_inc(v_a_4824_);
lean_inc(v_F_4823_);
lean_inc(v_c_4822_);
lean_inc(v_E_4821_);
lean_inc(v_W_4820_);
lean_inc(v_w_4819_);
lean_inc(v_q_4818_);
lean_inc(v_Q_4817_);
lean_inc(v_d_4816_);
lean_inc(v_L_4815_);
lean_inc(v_M_4814_);
lean_inc(v_D_4813_);
lean_inc(v_Y_4812_);
lean_inc(v_u_4811_);
lean_inc(v_y_4810_);
lean_inc(v_G_4809_);
lean_dec(v_date_4141_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4854_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4808_ == 0)
{
lean_ctor_set_tag(v___x_4807_, 1);
lean_ctor_set(v___x_4807_, 0, v_data_4143_);
v___x_4849_ = v___x_4807_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v_data_4143_);
v___x_4849_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
lean_object* v___x_4851_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 13, v___x_4849_);
v___x_4851_ = v___x_4846_;
goto v_reusejp_4850_;
}
else
{
lean_object* v_reuseFailAlloc_4852_; 
v_reuseFailAlloc_4852_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4852_, 0, v_G_4809_);
lean_ctor_set(v_reuseFailAlloc_4852_, 1, v_y_4810_);
lean_ctor_set(v_reuseFailAlloc_4852_, 2, v_u_4811_);
lean_ctor_set(v_reuseFailAlloc_4852_, 3, v_Y_4812_);
lean_ctor_set(v_reuseFailAlloc_4852_, 4, v_D_4813_);
lean_ctor_set(v_reuseFailAlloc_4852_, 5, v_M_4814_);
lean_ctor_set(v_reuseFailAlloc_4852_, 6, v_L_4815_);
lean_ctor_set(v_reuseFailAlloc_4852_, 7, v_d_4816_);
lean_ctor_set(v_reuseFailAlloc_4852_, 8, v_Q_4817_);
lean_ctor_set(v_reuseFailAlloc_4852_, 9, v_q_4818_);
lean_ctor_set(v_reuseFailAlloc_4852_, 10, v_w_4819_);
lean_ctor_set(v_reuseFailAlloc_4852_, 11, v_W_4820_);
lean_ctor_set(v_reuseFailAlloc_4852_, 12, v_E_4821_);
lean_ctor_set(v_reuseFailAlloc_4852_, 13, v___x_4849_);
lean_ctor_set(v_reuseFailAlloc_4852_, 14, v_c_4822_);
lean_ctor_set(v_reuseFailAlloc_4852_, 15, v_F_4823_);
lean_ctor_set(v_reuseFailAlloc_4852_, 16, v_a_4824_);
lean_ctor_set(v_reuseFailAlloc_4852_, 17, v_b_4825_);
lean_ctor_set(v_reuseFailAlloc_4852_, 18, v_B_4826_);
lean_ctor_set(v_reuseFailAlloc_4852_, 19, v_h_4827_);
lean_ctor_set(v_reuseFailAlloc_4852_, 20, v_K_4828_);
lean_ctor_set(v_reuseFailAlloc_4852_, 21, v_k_4829_);
lean_ctor_set(v_reuseFailAlloc_4852_, 22, v_H_4830_);
lean_ctor_set(v_reuseFailAlloc_4852_, 23, v_m_4831_);
lean_ctor_set(v_reuseFailAlloc_4852_, 24, v_s_4832_);
lean_ctor_set(v_reuseFailAlloc_4852_, 25, v_S_4833_);
lean_ctor_set(v_reuseFailAlloc_4852_, 26, v_A_4834_);
lean_ctor_set(v_reuseFailAlloc_4852_, 27, v_n_4835_);
lean_ctor_set(v_reuseFailAlloc_4852_, 28, v_N_4836_);
lean_ctor_set(v_reuseFailAlloc_4852_, 29, v_V_4837_);
lean_ctor_set(v_reuseFailAlloc_4852_, 30, v_z_4838_);
lean_ctor_set(v_reuseFailAlloc_4852_, 31, v_zabbrev_4839_);
lean_ctor_set(v_reuseFailAlloc_4852_, 32, v_v_4840_);
lean_ctor_set(v_reuseFailAlloc_4852_, 33, v_O_4841_);
lean_ctor_set(v_reuseFailAlloc_4852_, 34, v_X_4842_);
lean_ctor_set(v_reuseFailAlloc_4852_, 35, v_x_4843_);
lean_ctor_set(v_reuseFailAlloc_4852_, 36, v_Z_4844_);
v___x_4851_ = v_reuseFailAlloc_4852_;
goto v_reusejp_4850_;
}
v_reusejp_4850_:
{
return v___x_4851_;
}
}
}
}
}
case 14:
{
lean_object* v___x_4859_; uint8_t v_isShared_4860_; uint8_t v_isSharedCheck_4908_; 
v_isSharedCheck_4908_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4908_ == 0)
{
lean_object* v_unused_4909_; 
v_unused_4909_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4909_);
v___x_4859_ = v_modifier_4142_;
v_isShared_4860_ = v_isSharedCheck_4908_;
goto v_resetjp_4858_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4859_ = lean_box(0);
v_isShared_4860_ = v_isSharedCheck_4908_;
goto v_resetjp_4858_;
}
v_resetjp_4858_:
{
lean_object* v_G_4861_; lean_object* v_y_4862_; lean_object* v_u_4863_; lean_object* v_Y_4864_; lean_object* v_D_4865_; lean_object* v_M_4866_; lean_object* v_L_4867_; lean_object* v_d_4868_; lean_object* v_Q_4869_; lean_object* v_q_4870_; lean_object* v_w_4871_; lean_object* v_W_4872_; lean_object* v_E_4873_; lean_object* v_e_4874_; lean_object* v_F_4875_; lean_object* v_a_4876_; lean_object* v_b_4877_; lean_object* v_B_4878_; lean_object* v_h_4879_; lean_object* v_K_4880_; lean_object* v_k_4881_; lean_object* v_H_4882_; lean_object* v_m_4883_; lean_object* v_s_4884_; lean_object* v_S_4885_; lean_object* v_A_4886_; lean_object* v_n_4887_; lean_object* v_N_4888_; lean_object* v_V_4889_; lean_object* v_z_4890_; lean_object* v_zabbrev_4891_; lean_object* v_v_4892_; lean_object* v_O_4893_; lean_object* v_X_4894_; lean_object* v_x_4895_; lean_object* v_Z_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4906_; 
v_G_4861_ = lean_ctor_get(v_date_4141_, 0);
v_y_4862_ = lean_ctor_get(v_date_4141_, 1);
v_u_4863_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4864_ = lean_ctor_get(v_date_4141_, 3);
v_D_4865_ = lean_ctor_get(v_date_4141_, 4);
v_M_4866_ = lean_ctor_get(v_date_4141_, 5);
v_L_4867_ = lean_ctor_get(v_date_4141_, 6);
v_d_4868_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4869_ = lean_ctor_get(v_date_4141_, 8);
v_q_4870_ = lean_ctor_get(v_date_4141_, 9);
v_w_4871_ = lean_ctor_get(v_date_4141_, 10);
v_W_4872_ = lean_ctor_get(v_date_4141_, 11);
v_E_4873_ = lean_ctor_get(v_date_4141_, 12);
v_e_4874_ = lean_ctor_get(v_date_4141_, 13);
v_F_4875_ = lean_ctor_get(v_date_4141_, 15);
v_a_4876_ = lean_ctor_get(v_date_4141_, 16);
v_b_4877_ = lean_ctor_get(v_date_4141_, 17);
v_B_4878_ = lean_ctor_get(v_date_4141_, 18);
v_h_4879_ = lean_ctor_get(v_date_4141_, 19);
v_K_4880_ = lean_ctor_get(v_date_4141_, 20);
v_k_4881_ = lean_ctor_get(v_date_4141_, 21);
v_H_4882_ = lean_ctor_get(v_date_4141_, 22);
v_m_4883_ = lean_ctor_get(v_date_4141_, 23);
v_s_4884_ = lean_ctor_get(v_date_4141_, 24);
v_S_4885_ = lean_ctor_get(v_date_4141_, 25);
v_A_4886_ = lean_ctor_get(v_date_4141_, 26);
v_n_4887_ = lean_ctor_get(v_date_4141_, 27);
v_N_4888_ = lean_ctor_get(v_date_4141_, 28);
v_V_4889_ = lean_ctor_get(v_date_4141_, 29);
v_z_4890_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4891_ = lean_ctor_get(v_date_4141_, 31);
v_v_4892_ = lean_ctor_get(v_date_4141_, 32);
v_O_4893_ = lean_ctor_get(v_date_4141_, 33);
v_X_4894_ = lean_ctor_get(v_date_4141_, 34);
v_x_4895_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4896_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4906_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4906_ == 0)
{
lean_object* v_unused_4907_; 
v_unused_4907_ = lean_ctor_get(v_date_4141_, 14);
lean_dec(v_unused_4907_);
v___x_4898_ = v_date_4141_;
v_isShared_4899_ = v_isSharedCheck_4906_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_Z_4896_);
lean_inc(v_x_4895_);
lean_inc(v_X_4894_);
lean_inc(v_O_4893_);
lean_inc(v_v_4892_);
lean_inc(v_zabbrev_4891_);
lean_inc(v_z_4890_);
lean_inc(v_V_4889_);
lean_inc(v_N_4888_);
lean_inc(v_n_4887_);
lean_inc(v_A_4886_);
lean_inc(v_S_4885_);
lean_inc(v_s_4884_);
lean_inc(v_m_4883_);
lean_inc(v_H_4882_);
lean_inc(v_k_4881_);
lean_inc(v_K_4880_);
lean_inc(v_h_4879_);
lean_inc(v_B_4878_);
lean_inc(v_b_4877_);
lean_inc(v_a_4876_);
lean_inc(v_F_4875_);
lean_inc(v_e_4874_);
lean_inc(v_E_4873_);
lean_inc(v_W_4872_);
lean_inc(v_w_4871_);
lean_inc(v_q_4870_);
lean_inc(v_Q_4869_);
lean_inc(v_d_4868_);
lean_inc(v_L_4867_);
lean_inc(v_M_4866_);
lean_inc(v_D_4865_);
lean_inc(v_Y_4864_);
lean_inc(v_u_4863_);
lean_inc(v_y_4862_);
lean_inc(v_G_4861_);
lean_dec(v_date_4141_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4906_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4860_ == 0)
{
lean_ctor_set_tag(v___x_4859_, 1);
lean_ctor_set(v___x_4859_, 0, v_data_4143_);
v___x_4901_ = v___x_4859_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_data_4143_);
v___x_4901_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
lean_object* v___x_4903_; 
if (v_isShared_4899_ == 0)
{
lean_ctor_set(v___x_4898_, 14, v___x_4901_);
v___x_4903_ = v___x_4898_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v_G_4861_);
lean_ctor_set(v_reuseFailAlloc_4904_, 1, v_y_4862_);
lean_ctor_set(v_reuseFailAlloc_4904_, 2, v_u_4863_);
lean_ctor_set(v_reuseFailAlloc_4904_, 3, v_Y_4864_);
lean_ctor_set(v_reuseFailAlloc_4904_, 4, v_D_4865_);
lean_ctor_set(v_reuseFailAlloc_4904_, 5, v_M_4866_);
lean_ctor_set(v_reuseFailAlloc_4904_, 6, v_L_4867_);
lean_ctor_set(v_reuseFailAlloc_4904_, 7, v_d_4868_);
lean_ctor_set(v_reuseFailAlloc_4904_, 8, v_Q_4869_);
lean_ctor_set(v_reuseFailAlloc_4904_, 9, v_q_4870_);
lean_ctor_set(v_reuseFailAlloc_4904_, 10, v_w_4871_);
lean_ctor_set(v_reuseFailAlloc_4904_, 11, v_W_4872_);
lean_ctor_set(v_reuseFailAlloc_4904_, 12, v_E_4873_);
lean_ctor_set(v_reuseFailAlloc_4904_, 13, v_e_4874_);
lean_ctor_set(v_reuseFailAlloc_4904_, 14, v___x_4901_);
lean_ctor_set(v_reuseFailAlloc_4904_, 15, v_F_4875_);
lean_ctor_set(v_reuseFailAlloc_4904_, 16, v_a_4876_);
lean_ctor_set(v_reuseFailAlloc_4904_, 17, v_b_4877_);
lean_ctor_set(v_reuseFailAlloc_4904_, 18, v_B_4878_);
lean_ctor_set(v_reuseFailAlloc_4904_, 19, v_h_4879_);
lean_ctor_set(v_reuseFailAlloc_4904_, 20, v_K_4880_);
lean_ctor_set(v_reuseFailAlloc_4904_, 21, v_k_4881_);
lean_ctor_set(v_reuseFailAlloc_4904_, 22, v_H_4882_);
lean_ctor_set(v_reuseFailAlloc_4904_, 23, v_m_4883_);
lean_ctor_set(v_reuseFailAlloc_4904_, 24, v_s_4884_);
lean_ctor_set(v_reuseFailAlloc_4904_, 25, v_S_4885_);
lean_ctor_set(v_reuseFailAlloc_4904_, 26, v_A_4886_);
lean_ctor_set(v_reuseFailAlloc_4904_, 27, v_n_4887_);
lean_ctor_set(v_reuseFailAlloc_4904_, 28, v_N_4888_);
lean_ctor_set(v_reuseFailAlloc_4904_, 29, v_V_4889_);
lean_ctor_set(v_reuseFailAlloc_4904_, 30, v_z_4890_);
lean_ctor_set(v_reuseFailAlloc_4904_, 31, v_zabbrev_4891_);
lean_ctor_set(v_reuseFailAlloc_4904_, 32, v_v_4892_);
lean_ctor_set(v_reuseFailAlloc_4904_, 33, v_O_4893_);
lean_ctor_set(v_reuseFailAlloc_4904_, 34, v_X_4894_);
lean_ctor_set(v_reuseFailAlloc_4904_, 35, v_x_4895_);
lean_ctor_set(v_reuseFailAlloc_4904_, 36, v_Z_4896_);
v___x_4903_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
return v___x_4903_;
}
}
}
}
}
case 15:
{
lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4960_; 
v_isSharedCheck_4960_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_4960_ == 0)
{
lean_object* v_unused_4961_; 
v_unused_4961_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_4961_);
v___x_4911_ = v_modifier_4142_;
v_isShared_4912_ = v_isSharedCheck_4960_;
goto v_resetjp_4910_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4960_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v_G_4913_; lean_object* v_y_4914_; lean_object* v_u_4915_; lean_object* v_Y_4916_; lean_object* v_D_4917_; lean_object* v_M_4918_; lean_object* v_L_4919_; lean_object* v_d_4920_; lean_object* v_Q_4921_; lean_object* v_q_4922_; lean_object* v_w_4923_; lean_object* v_W_4924_; lean_object* v_E_4925_; lean_object* v_e_4926_; lean_object* v_c_4927_; lean_object* v_a_4928_; lean_object* v_b_4929_; lean_object* v_B_4930_; lean_object* v_h_4931_; lean_object* v_K_4932_; lean_object* v_k_4933_; lean_object* v_H_4934_; lean_object* v_m_4935_; lean_object* v_s_4936_; lean_object* v_S_4937_; lean_object* v_A_4938_; lean_object* v_n_4939_; lean_object* v_N_4940_; lean_object* v_V_4941_; lean_object* v_z_4942_; lean_object* v_zabbrev_4943_; lean_object* v_v_4944_; lean_object* v_O_4945_; lean_object* v_X_4946_; lean_object* v_x_4947_; lean_object* v_Z_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4958_; 
v_G_4913_ = lean_ctor_get(v_date_4141_, 0);
v_y_4914_ = lean_ctor_get(v_date_4141_, 1);
v_u_4915_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4916_ = lean_ctor_get(v_date_4141_, 3);
v_D_4917_ = lean_ctor_get(v_date_4141_, 4);
v_M_4918_ = lean_ctor_get(v_date_4141_, 5);
v_L_4919_ = lean_ctor_get(v_date_4141_, 6);
v_d_4920_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4921_ = lean_ctor_get(v_date_4141_, 8);
v_q_4922_ = lean_ctor_get(v_date_4141_, 9);
v_w_4923_ = lean_ctor_get(v_date_4141_, 10);
v_W_4924_ = lean_ctor_get(v_date_4141_, 11);
v_E_4925_ = lean_ctor_get(v_date_4141_, 12);
v_e_4926_ = lean_ctor_get(v_date_4141_, 13);
v_c_4927_ = lean_ctor_get(v_date_4141_, 14);
v_a_4928_ = lean_ctor_get(v_date_4141_, 16);
v_b_4929_ = lean_ctor_get(v_date_4141_, 17);
v_B_4930_ = lean_ctor_get(v_date_4141_, 18);
v_h_4931_ = lean_ctor_get(v_date_4141_, 19);
v_K_4932_ = lean_ctor_get(v_date_4141_, 20);
v_k_4933_ = lean_ctor_get(v_date_4141_, 21);
v_H_4934_ = lean_ctor_get(v_date_4141_, 22);
v_m_4935_ = lean_ctor_get(v_date_4141_, 23);
v_s_4936_ = lean_ctor_get(v_date_4141_, 24);
v_S_4937_ = lean_ctor_get(v_date_4141_, 25);
v_A_4938_ = lean_ctor_get(v_date_4141_, 26);
v_n_4939_ = lean_ctor_get(v_date_4141_, 27);
v_N_4940_ = lean_ctor_get(v_date_4141_, 28);
v_V_4941_ = lean_ctor_get(v_date_4141_, 29);
v_z_4942_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4943_ = lean_ctor_get(v_date_4141_, 31);
v_v_4944_ = lean_ctor_get(v_date_4141_, 32);
v_O_4945_ = lean_ctor_get(v_date_4141_, 33);
v_X_4946_ = lean_ctor_get(v_date_4141_, 34);
v_x_4947_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4948_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_4958_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_4958_ == 0)
{
lean_object* v_unused_4959_; 
v_unused_4959_ = lean_ctor_get(v_date_4141_, 15);
lean_dec(v_unused_4959_);
v___x_4950_ = v_date_4141_;
v_isShared_4951_ = v_isSharedCheck_4958_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_Z_4948_);
lean_inc(v_x_4947_);
lean_inc(v_X_4946_);
lean_inc(v_O_4945_);
lean_inc(v_v_4944_);
lean_inc(v_zabbrev_4943_);
lean_inc(v_z_4942_);
lean_inc(v_V_4941_);
lean_inc(v_N_4940_);
lean_inc(v_n_4939_);
lean_inc(v_A_4938_);
lean_inc(v_S_4937_);
lean_inc(v_s_4936_);
lean_inc(v_m_4935_);
lean_inc(v_H_4934_);
lean_inc(v_k_4933_);
lean_inc(v_K_4932_);
lean_inc(v_h_4931_);
lean_inc(v_B_4930_);
lean_inc(v_b_4929_);
lean_inc(v_a_4928_);
lean_inc(v_c_4927_);
lean_inc(v_e_4926_);
lean_inc(v_E_4925_);
lean_inc(v_W_4924_);
lean_inc(v_w_4923_);
lean_inc(v_q_4922_);
lean_inc(v_Q_4921_);
lean_inc(v_d_4920_);
lean_inc(v_L_4919_);
lean_inc(v_M_4918_);
lean_inc(v_D_4917_);
lean_inc(v_Y_4916_);
lean_inc(v_u_4915_);
lean_inc(v_y_4914_);
lean_inc(v_G_4913_);
lean_dec(v_date_4141_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4958_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4912_ == 0)
{
lean_ctor_set_tag(v___x_4911_, 1);
lean_ctor_set(v___x_4911_, 0, v_data_4143_);
v___x_4953_ = v___x_4911_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4957_; 
v_reuseFailAlloc_4957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4957_, 0, v_data_4143_);
v___x_4953_ = v_reuseFailAlloc_4957_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
lean_object* v___x_4955_; 
if (v_isShared_4951_ == 0)
{
lean_ctor_set(v___x_4950_, 15, v___x_4953_);
v___x_4955_ = v___x_4950_;
goto v_reusejp_4954_;
}
else
{
lean_object* v_reuseFailAlloc_4956_; 
v_reuseFailAlloc_4956_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4956_, 0, v_G_4913_);
lean_ctor_set(v_reuseFailAlloc_4956_, 1, v_y_4914_);
lean_ctor_set(v_reuseFailAlloc_4956_, 2, v_u_4915_);
lean_ctor_set(v_reuseFailAlloc_4956_, 3, v_Y_4916_);
lean_ctor_set(v_reuseFailAlloc_4956_, 4, v_D_4917_);
lean_ctor_set(v_reuseFailAlloc_4956_, 5, v_M_4918_);
lean_ctor_set(v_reuseFailAlloc_4956_, 6, v_L_4919_);
lean_ctor_set(v_reuseFailAlloc_4956_, 7, v_d_4920_);
lean_ctor_set(v_reuseFailAlloc_4956_, 8, v_Q_4921_);
lean_ctor_set(v_reuseFailAlloc_4956_, 9, v_q_4922_);
lean_ctor_set(v_reuseFailAlloc_4956_, 10, v_w_4923_);
lean_ctor_set(v_reuseFailAlloc_4956_, 11, v_W_4924_);
lean_ctor_set(v_reuseFailAlloc_4956_, 12, v_E_4925_);
lean_ctor_set(v_reuseFailAlloc_4956_, 13, v_e_4926_);
lean_ctor_set(v_reuseFailAlloc_4956_, 14, v_c_4927_);
lean_ctor_set(v_reuseFailAlloc_4956_, 15, v___x_4953_);
lean_ctor_set(v_reuseFailAlloc_4956_, 16, v_a_4928_);
lean_ctor_set(v_reuseFailAlloc_4956_, 17, v_b_4929_);
lean_ctor_set(v_reuseFailAlloc_4956_, 18, v_B_4930_);
lean_ctor_set(v_reuseFailAlloc_4956_, 19, v_h_4931_);
lean_ctor_set(v_reuseFailAlloc_4956_, 20, v_K_4932_);
lean_ctor_set(v_reuseFailAlloc_4956_, 21, v_k_4933_);
lean_ctor_set(v_reuseFailAlloc_4956_, 22, v_H_4934_);
lean_ctor_set(v_reuseFailAlloc_4956_, 23, v_m_4935_);
lean_ctor_set(v_reuseFailAlloc_4956_, 24, v_s_4936_);
lean_ctor_set(v_reuseFailAlloc_4956_, 25, v_S_4937_);
lean_ctor_set(v_reuseFailAlloc_4956_, 26, v_A_4938_);
lean_ctor_set(v_reuseFailAlloc_4956_, 27, v_n_4939_);
lean_ctor_set(v_reuseFailAlloc_4956_, 28, v_N_4940_);
lean_ctor_set(v_reuseFailAlloc_4956_, 29, v_V_4941_);
lean_ctor_set(v_reuseFailAlloc_4956_, 30, v_z_4942_);
lean_ctor_set(v_reuseFailAlloc_4956_, 31, v_zabbrev_4943_);
lean_ctor_set(v_reuseFailAlloc_4956_, 32, v_v_4944_);
lean_ctor_set(v_reuseFailAlloc_4956_, 33, v_O_4945_);
lean_ctor_set(v_reuseFailAlloc_4956_, 34, v_X_4946_);
lean_ctor_set(v_reuseFailAlloc_4956_, 35, v_x_4947_);
lean_ctor_set(v_reuseFailAlloc_4956_, 36, v_Z_4948_);
v___x_4955_ = v_reuseFailAlloc_4956_;
goto v_reusejp_4954_;
}
v_reusejp_4954_:
{
return v___x_4955_;
}
}
}
}
}
case 16:
{
lean_object* v_G_4962_; lean_object* v_y_4963_; lean_object* v_u_4964_; lean_object* v_Y_4965_; lean_object* v_D_4966_; lean_object* v_M_4967_; lean_object* v_L_4968_; lean_object* v_d_4969_; lean_object* v_Q_4970_; lean_object* v_q_4971_; lean_object* v_w_4972_; lean_object* v_W_4973_; lean_object* v_E_4974_; lean_object* v_e_4975_; lean_object* v_c_4976_; lean_object* v_F_4977_; lean_object* v_b_4978_; lean_object* v_B_4979_; lean_object* v_h_4980_; lean_object* v_K_4981_; lean_object* v_k_4982_; lean_object* v_H_4983_; lean_object* v_m_4984_; lean_object* v_s_4985_; lean_object* v_S_4986_; lean_object* v_A_4987_; lean_object* v_n_4988_; lean_object* v_N_4989_; lean_object* v_V_4990_; lean_object* v_z_4991_; lean_object* v_zabbrev_4992_; lean_object* v_v_4993_; lean_object* v_O_4994_; lean_object* v_X_4995_; lean_object* v_x_4996_; lean_object* v_Z_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5005_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_4962_ = lean_ctor_get(v_date_4141_, 0);
v_y_4963_ = lean_ctor_get(v_date_4141_, 1);
v_u_4964_ = lean_ctor_get(v_date_4141_, 2);
v_Y_4965_ = lean_ctor_get(v_date_4141_, 3);
v_D_4966_ = lean_ctor_get(v_date_4141_, 4);
v_M_4967_ = lean_ctor_get(v_date_4141_, 5);
v_L_4968_ = lean_ctor_get(v_date_4141_, 6);
v_d_4969_ = lean_ctor_get(v_date_4141_, 7);
v_Q_4970_ = lean_ctor_get(v_date_4141_, 8);
v_q_4971_ = lean_ctor_get(v_date_4141_, 9);
v_w_4972_ = lean_ctor_get(v_date_4141_, 10);
v_W_4973_ = lean_ctor_get(v_date_4141_, 11);
v_E_4974_ = lean_ctor_get(v_date_4141_, 12);
v_e_4975_ = lean_ctor_get(v_date_4141_, 13);
v_c_4976_ = lean_ctor_get(v_date_4141_, 14);
v_F_4977_ = lean_ctor_get(v_date_4141_, 15);
v_b_4978_ = lean_ctor_get(v_date_4141_, 17);
v_B_4979_ = lean_ctor_get(v_date_4141_, 18);
v_h_4980_ = lean_ctor_get(v_date_4141_, 19);
v_K_4981_ = lean_ctor_get(v_date_4141_, 20);
v_k_4982_ = lean_ctor_get(v_date_4141_, 21);
v_H_4983_ = lean_ctor_get(v_date_4141_, 22);
v_m_4984_ = lean_ctor_get(v_date_4141_, 23);
v_s_4985_ = lean_ctor_get(v_date_4141_, 24);
v_S_4986_ = lean_ctor_get(v_date_4141_, 25);
v_A_4987_ = lean_ctor_get(v_date_4141_, 26);
v_n_4988_ = lean_ctor_get(v_date_4141_, 27);
v_N_4989_ = lean_ctor_get(v_date_4141_, 28);
v_V_4990_ = lean_ctor_get(v_date_4141_, 29);
v_z_4991_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_4992_ = lean_ctor_get(v_date_4141_, 31);
v_v_4993_ = lean_ctor_get(v_date_4141_, 32);
v_O_4994_ = lean_ctor_get(v_date_4141_, 33);
v_X_4995_ = lean_ctor_get(v_date_4141_, 34);
v_x_4996_ = lean_ctor_get(v_date_4141_, 35);
v_Z_4997_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5005_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5005_ == 0)
{
lean_object* v_unused_5006_; 
v_unused_5006_ = lean_ctor_get(v_date_4141_, 16);
lean_dec(v_unused_5006_);
v___x_4999_ = v_date_4141_;
v_isShared_5000_ = v_isSharedCheck_5005_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_Z_4997_);
lean_inc(v_x_4996_);
lean_inc(v_X_4995_);
lean_inc(v_O_4994_);
lean_inc(v_v_4993_);
lean_inc(v_zabbrev_4992_);
lean_inc(v_z_4991_);
lean_inc(v_V_4990_);
lean_inc(v_N_4989_);
lean_inc(v_n_4988_);
lean_inc(v_A_4987_);
lean_inc(v_S_4986_);
lean_inc(v_s_4985_);
lean_inc(v_m_4984_);
lean_inc(v_H_4983_);
lean_inc(v_k_4982_);
lean_inc(v_K_4981_);
lean_inc(v_h_4980_);
lean_inc(v_B_4979_);
lean_inc(v_b_4978_);
lean_inc(v_F_4977_);
lean_inc(v_c_4976_);
lean_inc(v_e_4975_);
lean_inc(v_E_4974_);
lean_inc(v_W_4973_);
lean_inc(v_w_4972_);
lean_inc(v_q_4971_);
lean_inc(v_Q_4970_);
lean_inc(v_d_4969_);
lean_inc(v_L_4968_);
lean_inc(v_M_4967_);
lean_inc(v_D_4966_);
lean_inc(v_Y_4965_);
lean_inc(v_u_4964_);
lean_inc(v_y_4963_);
lean_inc(v_G_4962_);
lean_dec(v_date_4141_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5005_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5001_; lean_object* v___x_5003_; 
v___x_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5001_, 0, v_data_4143_);
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 16, v___x_5001_);
v___x_5003_ = v___x_4999_;
goto v_reusejp_5002_;
}
else
{
lean_object* v_reuseFailAlloc_5004_; 
v_reuseFailAlloc_5004_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5004_, 0, v_G_4962_);
lean_ctor_set(v_reuseFailAlloc_5004_, 1, v_y_4963_);
lean_ctor_set(v_reuseFailAlloc_5004_, 2, v_u_4964_);
lean_ctor_set(v_reuseFailAlloc_5004_, 3, v_Y_4965_);
lean_ctor_set(v_reuseFailAlloc_5004_, 4, v_D_4966_);
lean_ctor_set(v_reuseFailAlloc_5004_, 5, v_M_4967_);
lean_ctor_set(v_reuseFailAlloc_5004_, 6, v_L_4968_);
lean_ctor_set(v_reuseFailAlloc_5004_, 7, v_d_4969_);
lean_ctor_set(v_reuseFailAlloc_5004_, 8, v_Q_4970_);
lean_ctor_set(v_reuseFailAlloc_5004_, 9, v_q_4971_);
lean_ctor_set(v_reuseFailAlloc_5004_, 10, v_w_4972_);
lean_ctor_set(v_reuseFailAlloc_5004_, 11, v_W_4973_);
lean_ctor_set(v_reuseFailAlloc_5004_, 12, v_E_4974_);
lean_ctor_set(v_reuseFailAlloc_5004_, 13, v_e_4975_);
lean_ctor_set(v_reuseFailAlloc_5004_, 14, v_c_4976_);
lean_ctor_set(v_reuseFailAlloc_5004_, 15, v_F_4977_);
lean_ctor_set(v_reuseFailAlloc_5004_, 16, v___x_5001_);
lean_ctor_set(v_reuseFailAlloc_5004_, 17, v_b_4978_);
lean_ctor_set(v_reuseFailAlloc_5004_, 18, v_B_4979_);
lean_ctor_set(v_reuseFailAlloc_5004_, 19, v_h_4980_);
lean_ctor_set(v_reuseFailAlloc_5004_, 20, v_K_4981_);
lean_ctor_set(v_reuseFailAlloc_5004_, 21, v_k_4982_);
lean_ctor_set(v_reuseFailAlloc_5004_, 22, v_H_4983_);
lean_ctor_set(v_reuseFailAlloc_5004_, 23, v_m_4984_);
lean_ctor_set(v_reuseFailAlloc_5004_, 24, v_s_4985_);
lean_ctor_set(v_reuseFailAlloc_5004_, 25, v_S_4986_);
lean_ctor_set(v_reuseFailAlloc_5004_, 26, v_A_4987_);
lean_ctor_set(v_reuseFailAlloc_5004_, 27, v_n_4988_);
lean_ctor_set(v_reuseFailAlloc_5004_, 28, v_N_4989_);
lean_ctor_set(v_reuseFailAlloc_5004_, 29, v_V_4990_);
lean_ctor_set(v_reuseFailAlloc_5004_, 30, v_z_4991_);
lean_ctor_set(v_reuseFailAlloc_5004_, 31, v_zabbrev_4992_);
lean_ctor_set(v_reuseFailAlloc_5004_, 32, v_v_4993_);
lean_ctor_set(v_reuseFailAlloc_5004_, 33, v_O_4994_);
lean_ctor_set(v_reuseFailAlloc_5004_, 34, v_X_4995_);
lean_ctor_set(v_reuseFailAlloc_5004_, 35, v_x_4996_);
lean_ctor_set(v_reuseFailAlloc_5004_, 36, v_Z_4997_);
v___x_5003_ = v_reuseFailAlloc_5004_;
goto v_reusejp_5002_;
}
v_reusejp_5002_:
{
return v___x_5003_;
}
}
}
case 17:
{
lean_object* v_G_5007_; lean_object* v_y_5008_; lean_object* v_u_5009_; lean_object* v_Y_5010_; lean_object* v_D_5011_; lean_object* v_M_5012_; lean_object* v_L_5013_; lean_object* v_d_5014_; lean_object* v_Q_5015_; lean_object* v_q_5016_; lean_object* v_w_5017_; lean_object* v_W_5018_; lean_object* v_E_5019_; lean_object* v_e_5020_; lean_object* v_c_5021_; lean_object* v_F_5022_; lean_object* v_a_5023_; lean_object* v_B_5024_; lean_object* v_h_5025_; lean_object* v_K_5026_; lean_object* v_k_5027_; lean_object* v_H_5028_; lean_object* v_m_5029_; lean_object* v_s_5030_; lean_object* v_S_5031_; lean_object* v_A_5032_; lean_object* v_n_5033_; lean_object* v_N_5034_; lean_object* v_V_5035_; lean_object* v_z_5036_; lean_object* v_zabbrev_5037_; lean_object* v_v_5038_; lean_object* v_O_5039_; lean_object* v_X_5040_; lean_object* v_x_5041_; lean_object* v_Z_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5050_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5007_ = lean_ctor_get(v_date_4141_, 0);
v_y_5008_ = lean_ctor_get(v_date_4141_, 1);
v_u_5009_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5010_ = lean_ctor_get(v_date_4141_, 3);
v_D_5011_ = lean_ctor_get(v_date_4141_, 4);
v_M_5012_ = lean_ctor_get(v_date_4141_, 5);
v_L_5013_ = lean_ctor_get(v_date_4141_, 6);
v_d_5014_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5015_ = lean_ctor_get(v_date_4141_, 8);
v_q_5016_ = lean_ctor_get(v_date_4141_, 9);
v_w_5017_ = lean_ctor_get(v_date_4141_, 10);
v_W_5018_ = lean_ctor_get(v_date_4141_, 11);
v_E_5019_ = lean_ctor_get(v_date_4141_, 12);
v_e_5020_ = lean_ctor_get(v_date_4141_, 13);
v_c_5021_ = lean_ctor_get(v_date_4141_, 14);
v_F_5022_ = lean_ctor_get(v_date_4141_, 15);
v_a_5023_ = lean_ctor_get(v_date_4141_, 16);
v_B_5024_ = lean_ctor_get(v_date_4141_, 18);
v_h_5025_ = lean_ctor_get(v_date_4141_, 19);
v_K_5026_ = lean_ctor_get(v_date_4141_, 20);
v_k_5027_ = lean_ctor_get(v_date_4141_, 21);
v_H_5028_ = lean_ctor_get(v_date_4141_, 22);
v_m_5029_ = lean_ctor_get(v_date_4141_, 23);
v_s_5030_ = lean_ctor_get(v_date_4141_, 24);
v_S_5031_ = lean_ctor_get(v_date_4141_, 25);
v_A_5032_ = lean_ctor_get(v_date_4141_, 26);
v_n_5033_ = lean_ctor_get(v_date_4141_, 27);
v_N_5034_ = lean_ctor_get(v_date_4141_, 28);
v_V_5035_ = lean_ctor_get(v_date_4141_, 29);
v_z_5036_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5037_ = lean_ctor_get(v_date_4141_, 31);
v_v_5038_ = lean_ctor_get(v_date_4141_, 32);
v_O_5039_ = lean_ctor_get(v_date_4141_, 33);
v_X_5040_ = lean_ctor_get(v_date_4141_, 34);
v_x_5041_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5042_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5050_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5050_ == 0)
{
lean_object* v_unused_5051_; 
v_unused_5051_ = lean_ctor_get(v_date_4141_, 17);
lean_dec(v_unused_5051_);
v___x_5044_ = v_date_4141_;
v_isShared_5045_ = v_isSharedCheck_5050_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_Z_5042_);
lean_inc(v_x_5041_);
lean_inc(v_X_5040_);
lean_inc(v_O_5039_);
lean_inc(v_v_5038_);
lean_inc(v_zabbrev_5037_);
lean_inc(v_z_5036_);
lean_inc(v_V_5035_);
lean_inc(v_N_5034_);
lean_inc(v_n_5033_);
lean_inc(v_A_5032_);
lean_inc(v_S_5031_);
lean_inc(v_s_5030_);
lean_inc(v_m_5029_);
lean_inc(v_H_5028_);
lean_inc(v_k_5027_);
lean_inc(v_K_5026_);
lean_inc(v_h_5025_);
lean_inc(v_B_5024_);
lean_inc(v_a_5023_);
lean_inc(v_F_5022_);
lean_inc(v_c_5021_);
lean_inc(v_e_5020_);
lean_inc(v_E_5019_);
lean_inc(v_W_5018_);
lean_inc(v_w_5017_);
lean_inc(v_q_5016_);
lean_inc(v_Q_5015_);
lean_inc(v_d_5014_);
lean_inc(v_L_5013_);
lean_inc(v_M_5012_);
lean_inc(v_D_5011_);
lean_inc(v_Y_5010_);
lean_inc(v_u_5009_);
lean_inc(v_y_5008_);
lean_inc(v_G_5007_);
lean_dec(v_date_4141_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5050_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5046_; lean_object* v___x_5048_; 
v___x_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5046_, 0, v_data_4143_);
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 17, v___x_5046_);
v___x_5048_ = v___x_5044_;
goto v_reusejp_5047_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v_G_5007_);
lean_ctor_set(v_reuseFailAlloc_5049_, 1, v_y_5008_);
lean_ctor_set(v_reuseFailAlloc_5049_, 2, v_u_5009_);
lean_ctor_set(v_reuseFailAlloc_5049_, 3, v_Y_5010_);
lean_ctor_set(v_reuseFailAlloc_5049_, 4, v_D_5011_);
lean_ctor_set(v_reuseFailAlloc_5049_, 5, v_M_5012_);
lean_ctor_set(v_reuseFailAlloc_5049_, 6, v_L_5013_);
lean_ctor_set(v_reuseFailAlloc_5049_, 7, v_d_5014_);
lean_ctor_set(v_reuseFailAlloc_5049_, 8, v_Q_5015_);
lean_ctor_set(v_reuseFailAlloc_5049_, 9, v_q_5016_);
lean_ctor_set(v_reuseFailAlloc_5049_, 10, v_w_5017_);
lean_ctor_set(v_reuseFailAlloc_5049_, 11, v_W_5018_);
lean_ctor_set(v_reuseFailAlloc_5049_, 12, v_E_5019_);
lean_ctor_set(v_reuseFailAlloc_5049_, 13, v_e_5020_);
lean_ctor_set(v_reuseFailAlloc_5049_, 14, v_c_5021_);
lean_ctor_set(v_reuseFailAlloc_5049_, 15, v_F_5022_);
lean_ctor_set(v_reuseFailAlloc_5049_, 16, v_a_5023_);
lean_ctor_set(v_reuseFailAlloc_5049_, 17, v___x_5046_);
lean_ctor_set(v_reuseFailAlloc_5049_, 18, v_B_5024_);
lean_ctor_set(v_reuseFailAlloc_5049_, 19, v_h_5025_);
lean_ctor_set(v_reuseFailAlloc_5049_, 20, v_K_5026_);
lean_ctor_set(v_reuseFailAlloc_5049_, 21, v_k_5027_);
lean_ctor_set(v_reuseFailAlloc_5049_, 22, v_H_5028_);
lean_ctor_set(v_reuseFailAlloc_5049_, 23, v_m_5029_);
lean_ctor_set(v_reuseFailAlloc_5049_, 24, v_s_5030_);
lean_ctor_set(v_reuseFailAlloc_5049_, 25, v_S_5031_);
lean_ctor_set(v_reuseFailAlloc_5049_, 26, v_A_5032_);
lean_ctor_set(v_reuseFailAlloc_5049_, 27, v_n_5033_);
lean_ctor_set(v_reuseFailAlloc_5049_, 28, v_N_5034_);
lean_ctor_set(v_reuseFailAlloc_5049_, 29, v_V_5035_);
lean_ctor_set(v_reuseFailAlloc_5049_, 30, v_z_5036_);
lean_ctor_set(v_reuseFailAlloc_5049_, 31, v_zabbrev_5037_);
lean_ctor_set(v_reuseFailAlloc_5049_, 32, v_v_5038_);
lean_ctor_set(v_reuseFailAlloc_5049_, 33, v_O_5039_);
lean_ctor_set(v_reuseFailAlloc_5049_, 34, v_X_5040_);
lean_ctor_set(v_reuseFailAlloc_5049_, 35, v_x_5041_);
lean_ctor_set(v_reuseFailAlloc_5049_, 36, v_Z_5042_);
v___x_5048_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5047_;
}
v_reusejp_5047_:
{
return v___x_5048_;
}
}
}
case 18:
{
lean_object* v_G_5052_; lean_object* v_y_5053_; lean_object* v_u_5054_; lean_object* v_Y_5055_; lean_object* v_D_5056_; lean_object* v_M_5057_; lean_object* v_L_5058_; lean_object* v_d_5059_; lean_object* v_Q_5060_; lean_object* v_q_5061_; lean_object* v_w_5062_; lean_object* v_W_5063_; lean_object* v_E_5064_; lean_object* v_e_5065_; lean_object* v_c_5066_; lean_object* v_F_5067_; lean_object* v_a_5068_; lean_object* v_b_5069_; lean_object* v_h_5070_; lean_object* v_K_5071_; lean_object* v_k_5072_; lean_object* v_H_5073_; lean_object* v_m_5074_; lean_object* v_s_5075_; lean_object* v_S_5076_; lean_object* v_A_5077_; lean_object* v_n_5078_; lean_object* v_N_5079_; lean_object* v_V_5080_; lean_object* v_z_5081_; lean_object* v_zabbrev_5082_; lean_object* v_v_5083_; lean_object* v_O_5084_; lean_object* v_X_5085_; lean_object* v_x_5086_; lean_object* v_Z_5087_; lean_object* v___x_5089_; uint8_t v_isShared_5090_; uint8_t v_isSharedCheck_5095_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5052_ = lean_ctor_get(v_date_4141_, 0);
v_y_5053_ = lean_ctor_get(v_date_4141_, 1);
v_u_5054_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5055_ = lean_ctor_get(v_date_4141_, 3);
v_D_5056_ = lean_ctor_get(v_date_4141_, 4);
v_M_5057_ = lean_ctor_get(v_date_4141_, 5);
v_L_5058_ = lean_ctor_get(v_date_4141_, 6);
v_d_5059_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5060_ = lean_ctor_get(v_date_4141_, 8);
v_q_5061_ = lean_ctor_get(v_date_4141_, 9);
v_w_5062_ = lean_ctor_get(v_date_4141_, 10);
v_W_5063_ = lean_ctor_get(v_date_4141_, 11);
v_E_5064_ = lean_ctor_get(v_date_4141_, 12);
v_e_5065_ = lean_ctor_get(v_date_4141_, 13);
v_c_5066_ = lean_ctor_get(v_date_4141_, 14);
v_F_5067_ = lean_ctor_get(v_date_4141_, 15);
v_a_5068_ = lean_ctor_get(v_date_4141_, 16);
v_b_5069_ = lean_ctor_get(v_date_4141_, 17);
v_h_5070_ = lean_ctor_get(v_date_4141_, 19);
v_K_5071_ = lean_ctor_get(v_date_4141_, 20);
v_k_5072_ = lean_ctor_get(v_date_4141_, 21);
v_H_5073_ = lean_ctor_get(v_date_4141_, 22);
v_m_5074_ = lean_ctor_get(v_date_4141_, 23);
v_s_5075_ = lean_ctor_get(v_date_4141_, 24);
v_S_5076_ = lean_ctor_get(v_date_4141_, 25);
v_A_5077_ = lean_ctor_get(v_date_4141_, 26);
v_n_5078_ = lean_ctor_get(v_date_4141_, 27);
v_N_5079_ = lean_ctor_get(v_date_4141_, 28);
v_V_5080_ = lean_ctor_get(v_date_4141_, 29);
v_z_5081_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5082_ = lean_ctor_get(v_date_4141_, 31);
v_v_5083_ = lean_ctor_get(v_date_4141_, 32);
v_O_5084_ = lean_ctor_get(v_date_4141_, 33);
v_X_5085_ = lean_ctor_get(v_date_4141_, 34);
v_x_5086_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5087_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5095_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5095_ == 0)
{
lean_object* v_unused_5096_; 
v_unused_5096_ = lean_ctor_get(v_date_4141_, 18);
lean_dec(v_unused_5096_);
v___x_5089_ = v_date_4141_;
v_isShared_5090_ = v_isSharedCheck_5095_;
goto v_resetjp_5088_;
}
else
{
lean_inc(v_Z_5087_);
lean_inc(v_x_5086_);
lean_inc(v_X_5085_);
lean_inc(v_O_5084_);
lean_inc(v_v_5083_);
lean_inc(v_zabbrev_5082_);
lean_inc(v_z_5081_);
lean_inc(v_V_5080_);
lean_inc(v_N_5079_);
lean_inc(v_n_5078_);
lean_inc(v_A_5077_);
lean_inc(v_S_5076_);
lean_inc(v_s_5075_);
lean_inc(v_m_5074_);
lean_inc(v_H_5073_);
lean_inc(v_k_5072_);
lean_inc(v_K_5071_);
lean_inc(v_h_5070_);
lean_inc(v_b_5069_);
lean_inc(v_a_5068_);
lean_inc(v_F_5067_);
lean_inc(v_c_5066_);
lean_inc(v_e_5065_);
lean_inc(v_E_5064_);
lean_inc(v_W_5063_);
lean_inc(v_w_5062_);
lean_inc(v_q_5061_);
lean_inc(v_Q_5060_);
lean_inc(v_d_5059_);
lean_inc(v_L_5058_);
lean_inc(v_M_5057_);
lean_inc(v_D_5056_);
lean_inc(v_Y_5055_);
lean_inc(v_u_5054_);
lean_inc(v_y_5053_);
lean_inc(v_G_5052_);
lean_dec(v_date_4141_);
v___x_5089_ = lean_box(0);
v_isShared_5090_ = v_isSharedCheck_5095_;
goto v_resetjp_5088_;
}
v_resetjp_5088_:
{
lean_object* v___x_5091_; lean_object* v___x_5093_; 
v___x_5091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5091_, 0, v_data_4143_);
if (v_isShared_5090_ == 0)
{
lean_ctor_set(v___x_5089_, 18, v___x_5091_);
v___x_5093_ = v___x_5089_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v_G_5052_);
lean_ctor_set(v_reuseFailAlloc_5094_, 1, v_y_5053_);
lean_ctor_set(v_reuseFailAlloc_5094_, 2, v_u_5054_);
lean_ctor_set(v_reuseFailAlloc_5094_, 3, v_Y_5055_);
lean_ctor_set(v_reuseFailAlloc_5094_, 4, v_D_5056_);
lean_ctor_set(v_reuseFailAlloc_5094_, 5, v_M_5057_);
lean_ctor_set(v_reuseFailAlloc_5094_, 6, v_L_5058_);
lean_ctor_set(v_reuseFailAlloc_5094_, 7, v_d_5059_);
lean_ctor_set(v_reuseFailAlloc_5094_, 8, v_Q_5060_);
lean_ctor_set(v_reuseFailAlloc_5094_, 9, v_q_5061_);
lean_ctor_set(v_reuseFailAlloc_5094_, 10, v_w_5062_);
lean_ctor_set(v_reuseFailAlloc_5094_, 11, v_W_5063_);
lean_ctor_set(v_reuseFailAlloc_5094_, 12, v_E_5064_);
lean_ctor_set(v_reuseFailAlloc_5094_, 13, v_e_5065_);
lean_ctor_set(v_reuseFailAlloc_5094_, 14, v_c_5066_);
lean_ctor_set(v_reuseFailAlloc_5094_, 15, v_F_5067_);
lean_ctor_set(v_reuseFailAlloc_5094_, 16, v_a_5068_);
lean_ctor_set(v_reuseFailAlloc_5094_, 17, v_b_5069_);
lean_ctor_set(v_reuseFailAlloc_5094_, 18, v___x_5091_);
lean_ctor_set(v_reuseFailAlloc_5094_, 19, v_h_5070_);
lean_ctor_set(v_reuseFailAlloc_5094_, 20, v_K_5071_);
lean_ctor_set(v_reuseFailAlloc_5094_, 21, v_k_5072_);
lean_ctor_set(v_reuseFailAlloc_5094_, 22, v_H_5073_);
lean_ctor_set(v_reuseFailAlloc_5094_, 23, v_m_5074_);
lean_ctor_set(v_reuseFailAlloc_5094_, 24, v_s_5075_);
lean_ctor_set(v_reuseFailAlloc_5094_, 25, v_S_5076_);
lean_ctor_set(v_reuseFailAlloc_5094_, 26, v_A_5077_);
lean_ctor_set(v_reuseFailAlloc_5094_, 27, v_n_5078_);
lean_ctor_set(v_reuseFailAlloc_5094_, 28, v_N_5079_);
lean_ctor_set(v_reuseFailAlloc_5094_, 29, v_V_5080_);
lean_ctor_set(v_reuseFailAlloc_5094_, 30, v_z_5081_);
lean_ctor_set(v_reuseFailAlloc_5094_, 31, v_zabbrev_5082_);
lean_ctor_set(v_reuseFailAlloc_5094_, 32, v_v_5083_);
lean_ctor_set(v_reuseFailAlloc_5094_, 33, v_O_5084_);
lean_ctor_set(v_reuseFailAlloc_5094_, 34, v_X_5085_);
lean_ctor_set(v_reuseFailAlloc_5094_, 35, v_x_5086_);
lean_ctor_set(v_reuseFailAlloc_5094_, 36, v_Z_5087_);
v___x_5093_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
return v___x_5093_;
}
}
}
case 19:
{
lean_object* v___x_5098_; uint8_t v_isShared_5099_; uint8_t v_isSharedCheck_5147_; 
v_isSharedCheck_5147_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5147_ == 0)
{
lean_object* v_unused_5148_; 
v_unused_5148_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5148_);
v___x_5098_ = v_modifier_4142_;
v_isShared_5099_ = v_isSharedCheck_5147_;
goto v_resetjp_5097_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5098_ = lean_box(0);
v_isShared_5099_ = v_isSharedCheck_5147_;
goto v_resetjp_5097_;
}
v_resetjp_5097_:
{
lean_object* v_G_5100_; lean_object* v_y_5101_; lean_object* v_u_5102_; lean_object* v_Y_5103_; lean_object* v_D_5104_; lean_object* v_M_5105_; lean_object* v_L_5106_; lean_object* v_d_5107_; lean_object* v_Q_5108_; lean_object* v_q_5109_; lean_object* v_w_5110_; lean_object* v_W_5111_; lean_object* v_E_5112_; lean_object* v_e_5113_; lean_object* v_c_5114_; lean_object* v_F_5115_; lean_object* v_a_5116_; lean_object* v_b_5117_; lean_object* v_B_5118_; lean_object* v_K_5119_; lean_object* v_k_5120_; lean_object* v_H_5121_; lean_object* v_m_5122_; lean_object* v_s_5123_; lean_object* v_S_5124_; lean_object* v_A_5125_; lean_object* v_n_5126_; lean_object* v_N_5127_; lean_object* v_V_5128_; lean_object* v_z_5129_; lean_object* v_zabbrev_5130_; lean_object* v_v_5131_; lean_object* v_O_5132_; lean_object* v_X_5133_; lean_object* v_x_5134_; lean_object* v_Z_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5145_; 
v_G_5100_ = lean_ctor_get(v_date_4141_, 0);
v_y_5101_ = lean_ctor_get(v_date_4141_, 1);
v_u_5102_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5103_ = lean_ctor_get(v_date_4141_, 3);
v_D_5104_ = lean_ctor_get(v_date_4141_, 4);
v_M_5105_ = lean_ctor_get(v_date_4141_, 5);
v_L_5106_ = lean_ctor_get(v_date_4141_, 6);
v_d_5107_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5108_ = lean_ctor_get(v_date_4141_, 8);
v_q_5109_ = lean_ctor_get(v_date_4141_, 9);
v_w_5110_ = lean_ctor_get(v_date_4141_, 10);
v_W_5111_ = lean_ctor_get(v_date_4141_, 11);
v_E_5112_ = lean_ctor_get(v_date_4141_, 12);
v_e_5113_ = lean_ctor_get(v_date_4141_, 13);
v_c_5114_ = lean_ctor_get(v_date_4141_, 14);
v_F_5115_ = lean_ctor_get(v_date_4141_, 15);
v_a_5116_ = lean_ctor_get(v_date_4141_, 16);
v_b_5117_ = lean_ctor_get(v_date_4141_, 17);
v_B_5118_ = lean_ctor_get(v_date_4141_, 18);
v_K_5119_ = lean_ctor_get(v_date_4141_, 20);
v_k_5120_ = lean_ctor_get(v_date_4141_, 21);
v_H_5121_ = lean_ctor_get(v_date_4141_, 22);
v_m_5122_ = lean_ctor_get(v_date_4141_, 23);
v_s_5123_ = lean_ctor_get(v_date_4141_, 24);
v_S_5124_ = lean_ctor_get(v_date_4141_, 25);
v_A_5125_ = lean_ctor_get(v_date_4141_, 26);
v_n_5126_ = lean_ctor_get(v_date_4141_, 27);
v_N_5127_ = lean_ctor_get(v_date_4141_, 28);
v_V_5128_ = lean_ctor_get(v_date_4141_, 29);
v_z_5129_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5130_ = lean_ctor_get(v_date_4141_, 31);
v_v_5131_ = lean_ctor_get(v_date_4141_, 32);
v_O_5132_ = lean_ctor_get(v_date_4141_, 33);
v_X_5133_ = lean_ctor_get(v_date_4141_, 34);
v_x_5134_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5135_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5145_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5145_ == 0)
{
lean_object* v_unused_5146_; 
v_unused_5146_ = lean_ctor_get(v_date_4141_, 19);
lean_dec(v_unused_5146_);
v___x_5137_ = v_date_4141_;
v_isShared_5138_ = v_isSharedCheck_5145_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_Z_5135_);
lean_inc(v_x_5134_);
lean_inc(v_X_5133_);
lean_inc(v_O_5132_);
lean_inc(v_v_5131_);
lean_inc(v_zabbrev_5130_);
lean_inc(v_z_5129_);
lean_inc(v_V_5128_);
lean_inc(v_N_5127_);
lean_inc(v_n_5126_);
lean_inc(v_A_5125_);
lean_inc(v_S_5124_);
lean_inc(v_s_5123_);
lean_inc(v_m_5122_);
lean_inc(v_H_5121_);
lean_inc(v_k_5120_);
lean_inc(v_K_5119_);
lean_inc(v_B_5118_);
lean_inc(v_b_5117_);
lean_inc(v_a_5116_);
lean_inc(v_F_5115_);
lean_inc(v_c_5114_);
lean_inc(v_e_5113_);
lean_inc(v_E_5112_);
lean_inc(v_W_5111_);
lean_inc(v_w_5110_);
lean_inc(v_q_5109_);
lean_inc(v_Q_5108_);
lean_inc(v_d_5107_);
lean_inc(v_L_5106_);
lean_inc(v_M_5105_);
lean_inc(v_D_5104_);
lean_inc(v_Y_5103_);
lean_inc(v_u_5102_);
lean_inc(v_y_5101_);
lean_inc(v_G_5100_);
lean_dec(v_date_4141_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5145_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5140_; 
if (v_isShared_5099_ == 0)
{
lean_ctor_set_tag(v___x_5098_, 1);
lean_ctor_set(v___x_5098_, 0, v_data_4143_);
v___x_5140_ = v___x_5098_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v_data_4143_);
v___x_5140_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
lean_object* v___x_5142_; 
if (v_isShared_5138_ == 0)
{
lean_ctor_set(v___x_5137_, 19, v___x_5140_);
v___x_5142_ = v___x_5137_;
goto v_reusejp_5141_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_G_5100_);
lean_ctor_set(v_reuseFailAlloc_5143_, 1, v_y_5101_);
lean_ctor_set(v_reuseFailAlloc_5143_, 2, v_u_5102_);
lean_ctor_set(v_reuseFailAlloc_5143_, 3, v_Y_5103_);
lean_ctor_set(v_reuseFailAlloc_5143_, 4, v_D_5104_);
lean_ctor_set(v_reuseFailAlloc_5143_, 5, v_M_5105_);
lean_ctor_set(v_reuseFailAlloc_5143_, 6, v_L_5106_);
lean_ctor_set(v_reuseFailAlloc_5143_, 7, v_d_5107_);
lean_ctor_set(v_reuseFailAlloc_5143_, 8, v_Q_5108_);
lean_ctor_set(v_reuseFailAlloc_5143_, 9, v_q_5109_);
lean_ctor_set(v_reuseFailAlloc_5143_, 10, v_w_5110_);
lean_ctor_set(v_reuseFailAlloc_5143_, 11, v_W_5111_);
lean_ctor_set(v_reuseFailAlloc_5143_, 12, v_E_5112_);
lean_ctor_set(v_reuseFailAlloc_5143_, 13, v_e_5113_);
lean_ctor_set(v_reuseFailAlloc_5143_, 14, v_c_5114_);
lean_ctor_set(v_reuseFailAlloc_5143_, 15, v_F_5115_);
lean_ctor_set(v_reuseFailAlloc_5143_, 16, v_a_5116_);
lean_ctor_set(v_reuseFailAlloc_5143_, 17, v_b_5117_);
lean_ctor_set(v_reuseFailAlloc_5143_, 18, v_B_5118_);
lean_ctor_set(v_reuseFailAlloc_5143_, 19, v___x_5140_);
lean_ctor_set(v_reuseFailAlloc_5143_, 20, v_K_5119_);
lean_ctor_set(v_reuseFailAlloc_5143_, 21, v_k_5120_);
lean_ctor_set(v_reuseFailAlloc_5143_, 22, v_H_5121_);
lean_ctor_set(v_reuseFailAlloc_5143_, 23, v_m_5122_);
lean_ctor_set(v_reuseFailAlloc_5143_, 24, v_s_5123_);
lean_ctor_set(v_reuseFailAlloc_5143_, 25, v_S_5124_);
lean_ctor_set(v_reuseFailAlloc_5143_, 26, v_A_5125_);
lean_ctor_set(v_reuseFailAlloc_5143_, 27, v_n_5126_);
lean_ctor_set(v_reuseFailAlloc_5143_, 28, v_N_5127_);
lean_ctor_set(v_reuseFailAlloc_5143_, 29, v_V_5128_);
lean_ctor_set(v_reuseFailAlloc_5143_, 30, v_z_5129_);
lean_ctor_set(v_reuseFailAlloc_5143_, 31, v_zabbrev_5130_);
lean_ctor_set(v_reuseFailAlloc_5143_, 32, v_v_5131_);
lean_ctor_set(v_reuseFailAlloc_5143_, 33, v_O_5132_);
lean_ctor_set(v_reuseFailAlloc_5143_, 34, v_X_5133_);
lean_ctor_set(v_reuseFailAlloc_5143_, 35, v_x_5134_);
lean_ctor_set(v_reuseFailAlloc_5143_, 36, v_Z_5135_);
v___x_5142_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5141_;
}
v_reusejp_5141_:
{
return v___x_5142_;
}
}
}
}
}
case 20:
{
lean_object* v___x_5150_; uint8_t v_isShared_5151_; uint8_t v_isSharedCheck_5199_; 
v_isSharedCheck_5199_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5199_ == 0)
{
lean_object* v_unused_5200_; 
v_unused_5200_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5200_);
v___x_5150_ = v_modifier_4142_;
v_isShared_5151_ = v_isSharedCheck_5199_;
goto v_resetjp_5149_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5150_ = lean_box(0);
v_isShared_5151_ = v_isSharedCheck_5199_;
goto v_resetjp_5149_;
}
v_resetjp_5149_:
{
lean_object* v_G_5152_; lean_object* v_y_5153_; lean_object* v_u_5154_; lean_object* v_Y_5155_; lean_object* v_D_5156_; lean_object* v_M_5157_; lean_object* v_L_5158_; lean_object* v_d_5159_; lean_object* v_Q_5160_; lean_object* v_q_5161_; lean_object* v_w_5162_; lean_object* v_W_5163_; lean_object* v_E_5164_; lean_object* v_e_5165_; lean_object* v_c_5166_; lean_object* v_F_5167_; lean_object* v_a_5168_; lean_object* v_b_5169_; lean_object* v_B_5170_; lean_object* v_h_5171_; lean_object* v_k_5172_; lean_object* v_H_5173_; lean_object* v_m_5174_; lean_object* v_s_5175_; lean_object* v_S_5176_; lean_object* v_A_5177_; lean_object* v_n_5178_; lean_object* v_N_5179_; lean_object* v_V_5180_; lean_object* v_z_5181_; lean_object* v_zabbrev_5182_; lean_object* v_v_5183_; lean_object* v_O_5184_; lean_object* v_X_5185_; lean_object* v_x_5186_; lean_object* v_Z_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5197_; 
v_G_5152_ = lean_ctor_get(v_date_4141_, 0);
v_y_5153_ = lean_ctor_get(v_date_4141_, 1);
v_u_5154_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5155_ = lean_ctor_get(v_date_4141_, 3);
v_D_5156_ = lean_ctor_get(v_date_4141_, 4);
v_M_5157_ = lean_ctor_get(v_date_4141_, 5);
v_L_5158_ = lean_ctor_get(v_date_4141_, 6);
v_d_5159_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5160_ = lean_ctor_get(v_date_4141_, 8);
v_q_5161_ = lean_ctor_get(v_date_4141_, 9);
v_w_5162_ = lean_ctor_get(v_date_4141_, 10);
v_W_5163_ = lean_ctor_get(v_date_4141_, 11);
v_E_5164_ = lean_ctor_get(v_date_4141_, 12);
v_e_5165_ = lean_ctor_get(v_date_4141_, 13);
v_c_5166_ = lean_ctor_get(v_date_4141_, 14);
v_F_5167_ = lean_ctor_get(v_date_4141_, 15);
v_a_5168_ = lean_ctor_get(v_date_4141_, 16);
v_b_5169_ = lean_ctor_get(v_date_4141_, 17);
v_B_5170_ = lean_ctor_get(v_date_4141_, 18);
v_h_5171_ = lean_ctor_get(v_date_4141_, 19);
v_k_5172_ = lean_ctor_get(v_date_4141_, 21);
v_H_5173_ = lean_ctor_get(v_date_4141_, 22);
v_m_5174_ = lean_ctor_get(v_date_4141_, 23);
v_s_5175_ = lean_ctor_get(v_date_4141_, 24);
v_S_5176_ = lean_ctor_get(v_date_4141_, 25);
v_A_5177_ = lean_ctor_get(v_date_4141_, 26);
v_n_5178_ = lean_ctor_get(v_date_4141_, 27);
v_N_5179_ = lean_ctor_get(v_date_4141_, 28);
v_V_5180_ = lean_ctor_get(v_date_4141_, 29);
v_z_5181_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5182_ = lean_ctor_get(v_date_4141_, 31);
v_v_5183_ = lean_ctor_get(v_date_4141_, 32);
v_O_5184_ = lean_ctor_get(v_date_4141_, 33);
v_X_5185_ = lean_ctor_get(v_date_4141_, 34);
v_x_5186_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5187_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5197_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5197_ == 0)
{
lean_object* v_unused_5198_; 
v_unused_5198_ = lean_ctor_get(v_date_4141_, 20);
lean_dec(v_unused_5198_);
v___x_5189_ = v_date_4141_;
v_isShared_5190_ = v_isSharedCheck_5197_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_Z_5187_);
lean_inc(v_x_5186_);
lean_inc(v_X_5185_);
lean_inc(v_O_5184_);
lean_inc(v_v_5183_);
lean_inc(v_zabbrev_5182_);
lean_inc(v_z_5181_);
lean_inc(v_V_5180_);
lean_inc(v_N_5179_);
lean_inc(v_n_5178_);
lean_inc(v_A_5177_);
lean_inc(v_S_5176_);
lean_inc(v_s_5175_);
lean_inc(v_m_5174_);
lean_inc(v_H_5173_);
lean_inc(v_k_5172_);
lean_inc(v_h_5171_);
lean_inc(v_B_5170_);
lean_inc(v_b_5169_);
lean_inc(v_a_5168_);
lean_inc(v_F_5167_);
lean_inc(v_c_5166_);
lean_inc(v_e_5165_);
lean_inc(v_E_5164_);
lean_inc(v_W_5163_);
lean_inc(v_w_5162_);
lean_inc(v_q_5161_);
lean_inc(v_Q_5160_);
lean_inc(v_d_5159_);
lean_inc(v_L_5158_);
lean_inc(v_M_5157_);
lean_inc(v_D_5156_);
lean_inc(v_Y_5155_);
lean_inc(v_u_5154_);
lean_inc(v_y_5153_);
lean_inc(v_G_5152_);
lean_dec(v_date_4141_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5197_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5192_; 
if (v_isShared_5151_ == 0)
{
lean_ctor_set_tag(v___x_5150_, 1);
lean_ctor_set(v___x_5150_, 0, v_data_4143_);
v___x_5192_ = v___x_5150_;
goto v_reusejp_5191_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v_data_4143_);
v___x_5192_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5191_;
}
v_reusejp_5191_:
{
lean_object* v___x_5194_; 
if (v_isShared_5190_ == 0)
{
lean_ctor_set(v___x_5189_, 20, v___x_5192_);
v___x_5194_ = v___x_5189_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5195_; 
v_reuseFailAlloc_5195_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5195_, 0, v_G_5152_);
lean_ctor_set(v_reuseFailAlloc_5195_, 1, v_y_5153_);
lean_ctor_set(v_reuseFailAlloc_5195_, 2, v_u_5154_);
lean_ctor_set(v_reuseFailAlloc_5195_, 3, v_Y_5155_);
lean_ctor_set(v_reuseFailAlloc_5195_, 4, v_D_5156_);
lean_ctor_set(v_reuseFailAlloc_5195_, 5, v_M_5157_);
lean_ctor_set(v_reuseFailAlloc_5195_, 6, v_L_5158_);
lean_ctor_set(v_reuseFailAlloc_5195_, 7, v_d_5159_);
lean_ctor_set(v_reuseFailAlloc_5195_, 8, v_Q_5160_);
lean_ctor_set(v_reuseFailAlloc_5195_, 9, v_q_5161_);
lean_ctor_set(v_reuseFailAlloc_5195_, 10, v_w_5162_);
lean_ctor_set(v_reuseFailAlloc_5195_, 11, v_W_5163_);
lean_ctor_set(v_reuseFailAlloc_5195_, 12, v_E_5164_);
lean_ctor_set(v_reuseFailAlloc_5195_, 13, v_e_5165_);
lean_ctor_set(v_reuseFailAlloc_5195_, 14, v_c_5166_);
lean_ctor_set(v_reuseFailAlloc_5195_, 15, v_F_5167_);
lean_ctor_set(v_reuseFailAlloc_5195_, 16, v_a_5168_);
lean_ctor_set(v_reuseFailAlloc_5195_, 17, v_b_5169_);
lean_ctor_set(v_reuseFailAlloc_5195_, 18, v_B_5170_);
lean_ctor_set(v_reuseFailAlloc_5195_, 19, v_h_5171_);
lean_ctor_set(v_reuseFailAlloc_5195_, 20, v___x_5192_);
lean_ctor_set(v_reuseFailAlloc_5195_, 21, v_k_5172_);
lean_ctor_set(v_reuseFailAlloc_5195_, 22, v_H_5173_);
lean_ctor_set(v_reuseFailAlloc_5195_, 23, v_m_5174_);
lean_ctor_set(v_reuseFailAlloc_5195_, 24, v_s_5175_);
lean_ctor_set(v_reuseFailAlloc_5195_, 25, v_S_5176_);
lean_ctor_set(v_reuseFailAlloc_5195_, 26, v_A_5177_);
lean_ctor_set(v_reuseFailAlloc_5195_, 27, v_n_5178_);
lean_ctor_set(v_reuseFailAlloc_5195_, 28, v_N_5179_);
lean_ctor_set(v_reuseFailAlloc_5195_, 29, v_V_5180_);
lean_ctor_set(v_reuseFailAlloc_5195_, 30, v_z_5181_);
lean_ctor_set(v_reuseFailAlloc_5195_, 31, v_zabbrev_5182_);
lean_ctor_set(v_reuseFailAlloc_5195_, 32, v_v_5183_);
lean_ctor_set(v_reuseFailAlloc_5195_, 33, v_O_5184_);
lean_ctor_set(v_reuseFailAlloc_5195_, 34, v_X_5185_);
lean_ctor_set(v_reuseFailAlloc_5195_, 35, v_x_5186_);
lean_ctor_set(v_reuseFailAlloc_5195_, 36, v_Z_5187_);
v___x_5194_ = v_reuseFailAlloc_5195_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
return v___x_5194_;
}
}
}
}
}
case 21:
{
lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5251_; 
v_isSharedCheck_5251_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5251_ == 0)
{
lean_object* v_unused_5252_; 
v_unused_5252_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5252_);
v___x_5202_ = v_modifier_4142_;
v_isShared_5203_ = v_isSharedCheck_5251_;
goto v_resetjp_5201_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5251_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v_G_5204_; lean_object* v_y_5205_; lean_object* v_u_5206_; lean_object* v_Y_5207_; lean_object* v_D_5208_; lean_object* v_M_5209_; lean_object* v_L_5210_; lean_object* v_d_5211_; lean_object* v_Q_5212_; lean_object* v_q_5213_; lean_object* v_w_5214_; lean_object* v_W_5215_; lean_object* v_E_5216_; lean_object* v_e_5217_; lean_object* v_c_5218_; lean_object* v_F_5219_; lean_object* v_a_5220_; lean_object* v_b_5221_; lean_object* v_B_5222_; lean_object* v_h_5223_; lean_object* v_K_5224_; lean_object* v_H_5225_; lean_object* v_m_5226_; lean_object* v_s_5227_; lean_object* v_S_5228_; lean_object* v_A_5229_; lean_object* v_n_5230_; lean_object* v_N_5231_; lean_object* v_V_5232_; lean_object* v_z_5233_; lean_object* v_zabbrev_5234_; lean_object* v_v_5235_; lean_object* v_O_5236_; lean_object* v_X_5237_; lean_object* v_x_5238_; lean_object* v_Z_5239_; lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5249_; 
v_G_5204_ = lean_ctor_get(v_date_4141_, 0);
v_y_5205_ = lean_ctor_get(v_date_4141_, 1);
v_u_5206_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5207_ = lean_ctor_get(v_date_4141_, 3);
v_D_5208_ = lean_ctor_get(v_date_4141_, 4);
v_M_5209_ = lean_ctor_get(v_date_4141_, 5);
v_L_5210_ = lean_ctor_get(v_date_4141_, 6);
v_d_5211_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5212_ = lean_ctor_get(v_date_4141_, 8);
v_q_5213_ = lean_ctor_get(v_date_4141_, 9);
v_w_5214_ = lean_ctor_get(v_date_4141_, 10);
v_W_5215_ = lean_ctor_get(v_date_4141_, 11);
v_E_5216_ = lean_ctor_get(v_date_4141_, 12);
v_e_5217_ = lean_ctor_get(v_date_4141_, 13);
v_c_5218_ = lean_ctor_get(v_date_4141_, 14);
v_F_5219_ = lean_ctor_get(v_date_4141_, 15);
v_a_5220_ = lean_ctor_get(v_date_4141_, 16);
v_b_5221_ = lean_ctor_get(v_date_4141_, 17);
v_B_5222_ = lean_ctor_get(v_date_4141_, 18);
v_h_5223_ = lean_ctor_get(v_date_4141_, 19);
v_K_5224_ = lean_ctor_get(v_date_4141_, 20);
v_H_5225_ = lean_ctor_get(v_date_4141_, 22);
v_m_5226_ = lean_ctor_get(v_date_4141_, 23);
v_s_5227_ = lean_ctor_get(v_date_4141_, 24);
v_S_5228_ = lean_ctor_get(v_date_4141_, 25);
v_A_5229_ = lean_ctor_get(v_date_4141_, 26);
v_n_5230_ = lean_ctor_get(v_date_4141_, 27);
v_N_5231_ = lean_ctor_get(v_date_4141_, 28);
v_V_5232_ = lean_ctor_get(v_date_4141_, 29);
v_z_5233_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5234_ = lean_ctor_get(v_date_4141_, 31);
v_v_5235_ = lean_ctor_get(v_date_4141_, 32);
v_O_5236_ = lean_ctor_get(v_date_4141_, 33);
v_X_5237_ = lean_ctor_get(v_date_4141_, 34);
v_x_5238_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5239_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5249_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5249_ == 0)
{
lean_object* v_unused_5250_; 
v_unused_5250_ = lean_ctor_get(v_date_4141_, 21);
lean_dec(v_unused_5250_);
v___x_5241_ = v_date_4141_;
v_isShared_5242_ = v_isSharedCheck_5249_;
goto v_resetjp_5240_;
}
else
{
lean_inc(v_Z_5239_);
lean_inc(v_x_5238_);
lean_inc(v_X_5237_);
lean_inc(v_O_5236_);
lean_inc(v_v_5235_);
lean_inc(v_zabbrev_5234_);
lean_inc(v_z_5233_);
lean_inc(v_V_5232_);
lean_inc(v_N_5231_);
lean_inc(v_n_5230_);
lean_inc(v_A_5229_);
lean_inc(v_S_5228_);
lean_inc(v_s_5227_);
lean_inc(v_m_5226_);
lean_inc(v_H_5225_);
lean_inc(v_K_5224_);
lean_inc(v_h_5223_);
lean_inc(v_B_5222_);
lean_inc(v_b_5221_);
lean_inc(v_a_5220_);
lean_inc(v_F_5219_);
lean_inc(v_c_5218_);
lean_inc(v_e_5217_);
lean_inc(v_E_5216_);
lean_inc(v_W_5215_);
lean_inc(v_w_5214_);
lean_inc(v_q_5213_);
lean_inc(v_Q_5212_);
lean_inc(v_d_5211_);
lean_inc(v_L_5210_);
lean_inc(v_M_5209_);
lean_inc(v_D_5208_);
lean_inc(v_Y_5207_);
lean_inc(v_u_5206_);
lean_inc(v_y_5205_);
lean_inc(v_G_5204_);
lean_dec(v_date_4141_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5249_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
lean_object* v___x_5244_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 1);
lean_ctor_set(v___x_5202_, 0, v_data_4143_);
v___x_5244_ = v___x_5202_;
goto v_reusejp_5243_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v_data_4143_);
v___x_5244_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5243_;
}
v_reusejp_5243_:
{
lean_object* v___x_5246_; 
if (v_isShared_5242_ == 0)
{
lean_ctor_set(v___x_5241_, 21, v___x_5244_);
v___x_5246_ = v___x_5241_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_G_5204_);
lean_ctor_set(v_reuseFailAlloc_5247_, 1, v_y_5205_);
lean_ctor_set(v_reuseFailAlloc_5247_, 2, v_u_5206_);
lean_ctor_set(v_reuseFailAlloc_5247_, 3, v_Y_5207_);
lean_ctor_set(v_reuseFailAlloc_5247_, 4, v_D_5208_);
lean_ctor_set(v_reuseFailAlloc_5247_, 5, v_M_5209_);
lean_ctor_set(v_reuseFailAlloc_5247_, 6, v_L_5210_);
lean_ctor_set(v_reuseFailAlloc_5247_, 7, v_d_5211_);
lean_ctor_set(v_reuseFailAlloc_5247_, 8, v_Q_5212_);
lean_ctor_set(v_reuseFailAlloc_5247_, 9, v_q_5213_);
lean_ctor_set(v_reuseFailAlloc_5247_, 10, v_w_5214_);
lean_ctor_set(v_reuseFailAlloc_5247_, 11, v_W_5215_);
lean_ctor_set(v_reuseFailAlloc_5247_, 12, v_E_5216_);
lean_ctor_set(v_reuseFailAlloc_5247_, 13, v_e_5217_);
lean_ctor_set(v_reuseFailAlloc_5247_, 14, v_c_5218_);
lean_ctor_set(v_reuseFailAlloc_5247_, 15, v_F_5219_);
lean_ctor_set(v_reuseFailAlloc_5247_, 16, v_a_5220_);
lean_ctor_set(v_reuseFailAlloc_5247_, 17, v_b_5221_);
lean_ctor_set(v_reuseFailAlloc_5247_, 18, v_B_5222_);
lean_ctor_set(v_reuseFailAlloc_5247_, 19, v_h_5223_);
lean_ctor_set(v_reuseFailAlloc_5247_, 20, v_K_5224_);
lean_ctor_set(v_reuseFailAlloc_5247_, 21, v___x_5244_);
lean_ctor_set(v_reuseFailAlloc_5247_, 22, v_H_5225_);
lean_ctor_set(v_reuseFailAlloc_5247_, 23, v_m_5226_);
lean_ctor_set(v_reuseFailAlloc_5247_, 24, v_s_5227_);
lean_ctor_set(v_reuseFailAlloc_5247_, 25, v_S_5228_);
lean_ctor_set(v_reuseFailAlloc_5247_, 26, v_A_5229_);
lean_ctor_set(v_reuseFailAlloc_5247_, 27, v_n_5230_);
lean_ctor_set(v_reuseFailAlloc_5247_, 28, v_N_5231_);
lean_ctor_set(v_reuseFailAlloc_5247_, 29, v_V_5232_);
lean_ctor_set(v_reuseFailAlloc_5247_, 30, v_z_5233_);
lean_ctor_set(v_reuseFailAlloc_5247_, 31, v_zabbrev_5234_);
lean_ctor_set(v_reuseFailAlloc_5247_, 32, v_v_5235_);
lean_ctor_set(v_reuseFailAlloc_5247_, 33, v_O_5236_);
lean_ctor_set(v_reuseFailAlloc_5247_, 34, v_X_5237_);
lean_ctor_set(v_reuseFailAlloc_5247_, 35, v_x_5238_);
lean_ctor_set(v_reuseFailAlloc_5247_, 36, v_Z_5239_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
return v___x_5246_;
}
}
}
}
}
case 22:
{
lean_object* v___x_5254_; uint8_t v_isShared_5255_; uint8_t v_isSharedCheck_5303_; 
v_isSharedCheck_5303_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5303_ == 0)
{
lean_object* v_unused_5304_; 
v_unused_5304_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5304_);
v___x_5254_ = v_modifier_4142_;
v_isShared_5255_ = v_isSharedCheck_5303_;
goto v_resetjp_5253_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5254_ = lean_box(0);
v_isShared_5255_ = v_isSharedCheck_5303_;
goto v_resetjp_5253_;
}
v_resetjp_5253_:
{
lean_object* v_G_5256_; lean_object* v_y_5257_; lean_object* v_u_5258_; lean_object* v_Y_5259_; lean_object* v_D_5260_; lean_object* v_M_5261_; lean_object* v_L_5262_; lean_object* v_d_5263_; lean_object* v_Q_5264_; lean_object* v_q_5265_; lean_object* v_w_5266_; lean_object* v_W_5267_; lean_object* v_E_5268_; lean_object* v_e_5269_; lean_object* v_c_5270_; lean_object* v_F_5271_; lean_object* v_a_5272_; lean_object* v_b_5273_; lean_object* v_B_5274_; lean_object* v_h_5275_; lean_object* v_K_5276_; lean_object* v_k_5277_; lean_object* v_m_5278_; lean_object* v_s_5279_; lean_object* v_S_5280_; lean_object* v_A_5281_; lean_object* v_n_5282_; lean_object* v_N_5283_; lean_object* v_V_5284_; lean_object* v_z_5285_; lean_object* v_zabbrev_5286_; lean_object* v_v_5287_; lean_object* v_O_5288_; lean_object* v_X_5289_; lean_object* v_x_5290_; lean_object* v_Z_5291_; lean_object* v___x_5293_; uint8_t v_isShared_5294_; uint8_t v_isSharedCheck_5301_; 
v_G_5256_ = lean_ctor_get(v_date_4141_, 0);
v_y_5257_ = lean_ctor_get(v_date_4141_, 1);
v_u_5258_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5259_ = lean_ctor_get(v_date_4141_, 3);
v_D_5260_ = lean_ctor_get(v_date_4141_, 4);
v_M_5261_ = lean_ctor_get(v_date_4141_, 5);
v_L_5262_ = lean_ctor_get(v_date_4141_, 6);
v_d_5263_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5264_ = lean_ctor_get(v_date_4141_, 8);
v_q_5265_ = lean_ctor_get(v_date_4141_, 9);
v_w_5266_ = lean_ctor_get(v_date_4141_, 10);
v_W_5267_ = lean_ctor_get(v_date_4141_, 11);
v_E_5268_ = lean_ctor_get(v_date_4141_, 12);
v_e_5269_ = lean_ctor_get(v_date_4141_, 13);
v_c_5270_ = lean_ctor_get(v_date_4141_, 14);
v_F_5271_ = lean_ctor_get(v_date_4141_, 15);
v_a_5272_ = lean_ctor_get(v_date_4141_, 16);
v_b_5273_ = lean_ctor_get(v_date_4141_, 17);
v_B_5274_ = lean_ctor_get(v_date_4141_, 18);
v_h_5275_ = lean_ctor_get(v_date_4141_, 19);
v_K_5276_ = lean_ctor_get(v_date_4141_, 20);
v_k_5277_ = lean_ctor_get(v_date_4141_, 21);
v_m_5278_ = lean_ctor_get(v_date_4141_, 23);
v_s_5279_ = lean_ctor_get(v_date_4141_, 24);
v_S_5280_ = lean_ctor_get(v_date_4141_, 25);
v_A_5281_ = lean_ctor_get(v_date_4141_, 26);
v_n_5282_ = lean_ctor_get(v_date_4141_, 27);
v_N_5283_ = lean_ctor_get(v_date_4141_, 28);
v_V_5284_ = lean_ctor_get(v_date_4141_, 29);
v_z_5285_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5286_ = lean_ctor_get(v_date_4141_, 31);
v_v_5287_ = lean_ctor_get(v_date_4141_, 32);
v_O_5288_ = lean_ctor_get(v_date_4141_, 33);
v_X_5289_ = lean_ctor_get(v_date_4141_, 34);
v_x_5290_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5291_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5301_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5301_ == 0)
{
lean_object* v_unused_5302_; 
v_unused_5302_ = lean_ctor_get(v_date_4141_, 22);
lean_dec(v_unused_5302_);
v___x_5293_ = v_date_4141_;
v_isShared_5294_ = v_isSharedCheck_5301_;
goto v_resetjp_5292_;
}
else
{
lean_inc(v_Z_5291_);
lean_inc(v_x_5290_);
lean_inc(v_X_5289_);
lean_inc(v_O_5288_);
lean_inc(v_v_5287_);
lean_inc(v_zabbrev_5286_);
lean_inc(v_z_5285_);
lean_inc(v_V_5284_);
lean_inc(v_N_5283_);
lean_inc(v_n_5282_);
lean_inc(v_A_5281_);
lean_inc(v_S_5280_);
lean_inc(v_s_5279_);
lean_inc(v_m_5278_);
lean_inc(v_k_5277_);
lean_inc(v_K_5276_);
lean_inc(v_h_5275_);
lean_inc(v_B_5274_);
lean_inc(v_b_5273_);
lean_inc(v_a_5272_);
lean_inc(v_F_5271_);
lean_inc(v_c_5270_);
lean_inc(v_e_5269_);
lean_inc(v_E_5268_);
lean_inc(v_W_5267_);
lean_inc(v_w_5266_);
lean_inc(v_q_5265_);
lean_inc(v_Q_5264_);
lean_inc(v_d_5263_);
lean_inc(v_L_5262_);
lean_inc(v_M_5261_);
lean_inc(v_D_5260_);
lean_inc(v_Y_5259_);
lean_inc(v_u_5258_);
lean_inc(v_y_5257_);
lean_inc(v_G_5256_);
lean_dec(v_date_4141_);
v___x_5293_ = lean_box(0);
v_isShared_5294_ = v_isSharedCheck_5301_;
goto v_resetjp_5292_;
}
v_resetjp_5292_:
{
lean_object* v___x_5296_; 
if (v_isShared_5255_ == 0)
{
lean_ctor_set_tag(v___x_5254_, 1);
lean_ctor_set(v___x_5254_, 0, v_data_4143_);
v___x_5296_ = v___x_5254_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v_data_4143_);
v___x_5296_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
lean_object* v___x_5298_; 
if (v_isShared_5294_ == 0)
{
lean_ctor_set(v___x_5293_, 22, v___x_5296_);
v___x_5298_ = v___x_5293_;
goto v_reusejp_5297_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v_G_5256_);
lean_ctor_set(v_reuseFailAlloc_5299_, 1, v_y_5257_);
lean_ctor_set(v_reuseFailAlloc_5299_, 2, v_u_5258_);
lean_ctor_set(v_reuseFailAlloc_5299_, 3, v_Y_5259_);
lean_ctor_set(v_reuseFailAlloc_5299_, 4, v_D_5260_);
lean_ctor_set(v_reuseFailAlloc_5299_, 5, v_M_5261_);
lean_ctor_set(v_reuseFailAlloc_5299_, 6, v_L_5262_);
lean_ctor_set(v_reuseFailAlloc_5299_, 7, v_d_5263_);
lean_ctor_set(v_reuseFailAlloc_5299_, 8, v_Q_5264_);
lean_ctor_set(v_reuseFailAlloc_5299_, 9, v_q_5265_);
lean_ctor_set(v_reuseFailAlloc_5299_, 10, v_w_5266_);
lean_ctor_set(v_reuseFailAlloc_5299_, 11, v_W_5267_);
lean_ctor_set(v_reuseFailAlloc_5299_, 12, v_E_5268_);
lean_ctor_set(v_reuseFailAlloc_5299_, 13, v_e_5269_);
lean_ctor_set(v_reuseFailAlloc_5299_, 14, v_c_5270_);
lean_ctor_set(v_reuseFailAlloc_5299_, 15, v_F_5271_);
lean_ctor_set(v_reuseFailAlloc_5299_, 16, v_a_5272_);
lean_ctor_set(v_reuseFailAlloc_5299_, 17, v_b_5273_);
lean_ctor_set(v_reuseFailAlloc_5299_, 18, v_B_5274_);
lean_ctor_set(v_reuseFailAlloc_5299_, 19, v_h_5275_);
lean_ctor_set(v_reuseFailAlloc_5299_, 20, v_K_5276_);
lean_ctor_set(v_reuseFailAlloc_5299_, 21, v_k_5277_);
lean_ctor_set(v_reuseFailAlloc_5299_, 22, v___x_5296_);
lean_ctor_set(v_reuseFailAlloc_5299_, 23, v_m_5278_);
lean_ctor_set(v_reuseFailAlloc_5299_, 24, v_s_5279_);
lean_ctor_set(v_reuseFailAlloc_5299_, 25, v_S_5280_);
lean_ctor_set(v_reuseFailAlloc_5299_, 26, v_A_5281_);
lean_ctor_set(v_reuseFailAlloc_5299_, 27, v_n_5282_);
lean_ctor_set(v_reuseFailAlloc_5299_, 28, v_N_5283_);
lean_ctor_set(v_reuseFailAlloc_5299_, 29, v_V_5284_);
lean_ctor_set(v_reuseFailAlloc_5299_, 30, v_z_5285_);
lean_ctor_set(v_reuseFailAlloc_5299_, 31, v_zabbrev_5286_);
lean_ctor_set(v_reuseFailAlloc_5299_, 32, v_v_5287_);
lean_ctor_set(v_reuseFailAlloc_5299_, 33, v_O_5288_);
lean_ctor_set(v_reuseFailAlloc_5299_, 34, v_X_5289_);
lean_ctor_set(v_reuseFailAlloc_5299_, 35, v_x_5290_);
lean_ctor_set(v_reuseFailAlloc_5299_, 36, v_Z_5291_);
v___x_5298_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5297_;
}
v_reusejp_5297_:
{
return v___x_5298_;
}
}
}
}
}
case 23:
{
lean_object* v___x_5306_; uint8_t v_isShared_5307_; uint8_t v_isSharedCheck_5355_; 
v_isSharedCheck_5355_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5355_ == 0)
{
lean_object* v_unused_5356_; 
v_unused_5356_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5356_);
v___x_5306_ = v_modifier_4142_;
v_isShared_5307_ = v_isSharedCheck_5355_;
goto v_resetjp_5305_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5306_ = lean_box(0);
v_isShared_5307_ = v_isSharedCheck_5355_;
goto v_resetjp_5305_;
}
v_resetjp_5305_:
{
lean_object* v_G_5308_; lean_object* v_y_5309_; lean_object* v_u_5310_; lean_object* v_Y_5311_; lean_object* v_D_5312_; lean_object* v_M_5313_; lean_object* v_L_5314_; lean_object* v_d_5315_; lean_object* v_Q_5316_; lean_object* v_q_5317_; lean_object* v_w_5318_; lean_object* v_W_5319_; lean_object* v_E_5320_; lean_object* v_e_5321_; lean_object* v_c_5322_; lean_object* v_F_5323_; lean_object* v_a_5324_; lean_object* v_b_5325_; lean_object* v_B_5326_; lean_object* v_h_5327_; lean_object* v_K_5328_; lean_object* v_k_5329_; lean_object* v_H_5330_; lean_object* v_s_5331_; lean_object* v_S_5332_; lean_object* v_A_5333_; lean_object* v_n_5334_; lean_object* v_N_5335_; lean_object* v_V_5336_; lean_object* v_z_5337_; lean_object* v_zabbrev_5338_; lean_object* v_v_5339_; lean_object* v_O_5340_; lean_object* v_X_5341_; lean_object* v_x_5342_; lean_object* v_Z_5343_; lean_object* v___x_5345_; uint8_t v_isShared_5346_; uint8_t v_isSharedCheck_5353_; 
v_G_5308_ = lean_ctor_get(v_date_4141_, 0);
v_y_5309_ = lean_ctor_get(v_date_4141_, 1);
v_u_5310_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5311_ = lean_ctor_get(v_date_4141_, 3);
v_D_5312_ = lean_ctor_get(v_date_4141_, 4);
v_M_5313_ = lean_ctor_get(v_date_4141_, 5);
v_L_5314_ = lean_ctor_get(v_date_4141_, 6);
v_d_5315_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5316_ = lean_ctor_get(v_date_4141_, 8);
v_q_5317_ = lean_ctor_get(v_date_4141_, 9);
v_w_5318_ = lean_ctor_get(v_date_4141_, 10);
v_W_5319_ = lean_ctor_get(v_date_4141_, 11);
v_E_5320_ = lean_ctor_get(v_date_4141_, 12);
v_e_5321_ = lean_ctor_get(v_date_4141_, 13);
v_c_5322_ = lean_ctor_get(v_date_4141_, 14);
v_F_5323_ = lean_ctor_get(v_date_4141_, 15);
v_a_5324_ = lean_ctor_get(v_date_4141_, 16);
v_b_5325_ = lean_ctor_get(v_date_4141_, 17);
v_B_5326_ = lean_ctor_get(v_date_4141_, 18);
v_h_5327_ = lean_ctor_get(v_date_4141_, 19);
v_K_5328_ = lean_ctor_get(v_date_4141_, 20);
v_k_5329_ = lean_ctor_get(v_date_4141_, 21);
v_H_5330_ = lean_ctor_get(v_date_4141_, 22);
v_s_5331_ = lean_ctor_get(v_date_4141_, 24);
v_S_5332_ = lean_ctor_get(v_date_4141_, 25);
v_A_5333_ = lean_ctor_get(v_date_4141_, 26);
v_n_5334_ = lean_ctor_get(v_date_4141_, 27);
v_N_5335_ = lean_ctor_get(v_date_4141_, 28);
v_V_5336_ = lean_ctor_get(v_date_4141_, 29);
v_z_5337_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5338_ = lean_ctor_get(v_date_4141_, 31);
v_v_5339_ = lean_ctor_get(v_date_4141_, 32);
v_O_5340_ = lean_ctor_get(v_date_4141_, 33);
v_X_5341_ = lean_ctor_get(v_date_4141_, 34);
v_x_5342_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5343_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5353_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5353_ == 0)
{
lean_object* v_unused_5354_; 
v_unused_5354_ = lean_ctor_get(v_date_4141_, 23);
lean_dec(v_unused_5354_);
v___x_5345_ = v_date_4141_;
v_isShared_5346_ = v_isSharedCheck_5353_;
goto v_resetjp_5344_;
}
else
{
lean_inc(v_Z_5343_);
lean_inc(v_x_5342_);
lean_inc(v_X_5341_);
lean_inc(v_O_5340_);
lean_inc(v_v_5339_);
lean_inc(v_zabbrev_5338_);
lean_inc(v_z_5337_);
lean_inc(v_V_5336_);
lean_inc(v_N_5335_);
lean_inc(v_n_5334_);
lean_inc(v_A_5333_);
lean_inc(v_S_5332_);
lean_inc(v_s_5331_);
lean_inc(v_H_5330_);
lean_inc(v_k_5329_);
lean_inc(v_K_5328_);
lean_inc(v_h_5327_);
lean_inc(v_B_5326_);
lean_inc(v_b_5325_);
lean_inc(v_a_5324_);
lean_inc(v_F_5323_);
lean_inc(v_c_5322_);
lean_inc(v_e_5321_);
lean_inc(v_E_5320_);
lean_inc(v_W_5319_);
lean_inc(v_w_5318_);
lean_inc(v_q_5317_);
lean_inc(v_Q_5316_);
lean_inc(v_d_5315_);
lean_inc(v_L_5314_);
lean_inc(v_M_5313_);
lean_inc(v_D_5312_);
lean_inc(v_Y_5311_);
lean_inc(v_u_5310_);
lean_inc(v_y_5309_);
lean_inc(v_G_5308_);
lean_dec(v_date_4141_);
v___x_5345_ = lean_box(0);
v_isShared_5346_ = v_isSharedCheck_5353_;
goto v_resetjp_5344_;
}
v_resetjp_5344_:
{
lean_object* v___x_5348_; 
if (v_isShared_5307_ == 0)
{
lean_ctor_set_tag(v___x_5306_, 1);
lean_ctor_set(v___x_5306_, 0, v_data_4143_);
v___x_5348_ = v___x_5306_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v_data_4143_);
v___x_5348_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
lean_object* v___x_5350_; 
if (v_isShared_5346_ == 0)
{
lean_ctor_set(v___x_5345_, 23, v___x_5348_);
v___x_5350_ = v___x_5345_;
goto v_reusejp_5349_;
}
else
{
lean_object* v_reuseFailAlloc_5351_; 
v_reuseFailAlloc_5351_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5351_, 0, v_G_5308_);
lean_ctor_set(v_reuseFailAlloc_5351_, 1, v_y_5309_);
lean_ctor_set(v_reuseFailAlloc_5351_, 2, v_u_5310_);
lean_ctor_set(v_reuseFailAlloc_5351_, 3, v_Y_5311_);
lean_ctor_set(v_reuseFailAlloc_5351_, 4, v_D_5312_);
lean_ctor_set(v_reuseFailAlloc_5351_, 5, v_M_5313_);
lean_ctor_set(v_reuseFailAlloc_5351_, 6, v_L_5314_);
lean_ctor_set(v_reuseFailAlloc_5351_, 7, v_d_5315_);
lean_ctor_set(v_reuseFailAlloc_5351_, 8, v_Q_5316_);
lean_ctor_set(v_reuseFailAlloc_5351_, 9, v_q_5317_);
lean_ctor_set(v_reuseFailAlloc_5351_, 10, v_w_5318_);
lean_ctor_set(v_reuseFailAlloc_5351_, 11, v_W_5319_);
lean_ctor_set(v_reuseFailAlloc_5351_, 12, v_E_5320_);
lean_ctor_set(v_reuseFailAlloc_5351_, 13, v_e_5321_);
lean_ctor_set(v_reuseFailAlloc_5351_, 14, v_c_5322_);
lean_ctor_set(v_reuseFailAlloc_5351_, 15, v_F_5323_);
lean_ctor_set(v_reuseFailAlloc_5351_, 16, v_a_5324_);
lean_ctor_set(v_reuseFailAlloc_5351_, 17, v_b_5325_);
lean_ctor_set(v_reuseFailAlloc_5351_, 18, v_B_5326_);
lean_ctor_set(v_reuseFailAlloc_5351_, 19, v_h_5327_);
lean_ctor_set(v_reuseFailAlloc_5351_, 20, v_K_5328_);
lean_ctor_set(v_reuseFailAlloc_5351_, 21, v_k_5329_);
lean_ctor_set(v_reuseFailAlloc_5351_, 22, v_H_5330_);
lean_ctor_set(v_reuseFailAlloc_5351_, 23, v___x_5348_);
lean_ctor_set(v_reuseFailAlloc_5351_, 24, v_s_5331_);
lean_ctor_set(v_reuseFailAlloc_5351_, 25, v_S_5332_);
lean_ctor_set(v_reuseFailAlloc_5351_, 26, v_A_5333_);
lean_ctor_set(v_reuseFailAlloc_5351_, 27, v_n_5334_);
lean_ctor_set(v_reuseFailAlloc_5351_, 28, v_N_5335_);
lean_ctor_set(v_reuseFailAlloc_5351_, 29, v_V_5336_);
lean_ctor_set(v_reuseFailAlloc_5351_, 30, v_z_5337_);
lean_ctor_set(v_reuseFailAlloc_5351_, 31, v_zabbrev_5338_);
lean_ctor_set(v_reuseFailAlloc_5351_, 32, v_v_5339_);
lean_ctor_set(v_reuseFailAlloc_5351_, 33, v_O_5340_);
lean_ctor_set(v_reuseFailAlloc_5351_, 34, v_X_5341_);
lean_ctor_set(v_reuseFailAlloc_5351_, 35, v_x_5342_);
lean_ctor_set(v_reuseFailAlloc_5351_, 36, v_Z_5343_);
v___x_5350_ = v_reuseFailAlloc_5351_;
goto v_reusejp_5349_;
}
v_reusejp_5349_:
{
return v___x_5350_;
}
}
}
}
}
case 24:
{
lean_object* v___x_5358_; uint8_t v_isShared_5359_; uint8_t v_isSharedCheck_5407_; 
v_isSharedCheck_5407_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5407_ == 0)
{
lean_object* v_unused_5408_; 
v_unused_5408_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5408_);
v___x_5358_ = v_modifier_4142_;
v_isShared_5359_ = v_isSharedCheck_5407_;
goto v_resetjp_5357_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5358_ = lean_box(0);
v_isShared_5359_ = v_isSharedCheck_5407_;
goto v_resetjp_5357_;
}
v_resetjp_5357_:
{
lean_object* v_G_5360_; lean_object* v_y_5361_; lean_object* v_u_5362_; lean_object* v_Y_5363_; lean_object* v_D_5364_; lean_object* v_M_5365_; lean_object* v_L_5366_; lean_object* v_d_5367_; lean_object* v_Q_5368_; lean_object* v_q_5369_; lean_object* v_w_5370_; lean_object* v_W_5371_; lean_object* v_E_5372_; lean_object* v_e_5373_; lean_object* v_c_5374_; lean_object* v_F_5375_; lean_object* v_a_5376_; lean_object* v_b_5377_; lean_object* v_B_5378_; lean_object* v_h_5379_; lean_object* v_K_5380_; lean_object* v_k_5381_; lean_object* v_H_5382_; lean_object* v_m_5383_; lean_object* v_S_5384_; lean_object* v_A_5385_; lean_object* v_n_5386_; lean_object* v_N_5387_; lean_object* v_V_5388_; lean_object* v_z_5389_; lean_object* v_zabbrev_5390_; lean_object* v_v_5391_; lean_object* v_O_5392_; lean_object* v_X_5393_; lean_object* v_x_5394_; lean_object* v_Z_5395_; lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5405_; 
v_G_5360_ = lean_ctor_get(v_date_4141_, 0);
v_y_5361_ = lean_ctor_get(v_date_4141_, 1);
v_u_5362_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5363_ = lean_ctor_get(v_date_4141_, 3);
v_D_5364_ = lean_ctor_get(v_date_4141_, 4);
v_M_5365_ = lean_ctor_get(v_date_4141_, 5);
v_L_5366_ = lean_ctor_get(v_date_4141_, 6);
v_d_5367_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5368_ = lean_ctor_get(v_date_4141_, 8);
v_q_5369_ = lean_ctor_get(v_date_4141_, 9);
v_w_5370_ = lean_ctor_get(v_date_4141_, 10);
v_W_5371_ = lean_ctor_get(v_date_4141_, 11);
v_E_5372_ = lean_ctor_get(v_date_4141_, 12);
v_e_5373_ = lean_ctor_get(v_date_4141_, 13);
v_c_5374_ = lean_ctor_get(v_date_4141_, 14);
v_F_5375_ = lean_ctor_get(v_date_4141_, 15);
v_a_5376_ = lean_ctor_get(v_date_4141_, 16);
v_b_5377_ = lean_ctor_get(v_date_4141_, 17);
v_B_5378_ = lean_ctor_get(v_date_4141_, 18);
v_h_5379_ = lean_ctor_get(v_date_4141_, 19);
v_K_5380_ = lean_ctor_get(v_date_4141_, 20);
v_k_5381_ = lean_ctor_get(v_date_4141_, 21);
v_H_5382_ = lean_ctor_get(v_date_4141_, 22);
v_m_5383_ = lean_ctor_get(v_date_4141_, 23);
v_S_5384_ = lean_ctor_get(v_date_4141_, 25);
v_A_5385_ = lean_ctor_get(v_date_4141_, 26);
v_n_5386_ = lean_ctor_get(v_date_4141_, 27);
v_N_5387_ = lean_ctor_get(v_date_4141_, 28);
v_V_5388_ = lean_ctor_get(v_date_4141_, 29);
v_z_5389_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5390_ = lean_ctor_get(v_date_4141_, 31);
v_v_5391_ = lean_ctor_get(v_date_4141_, 32);
v_O_5392_ = lean_ctor_get(v_date_4141_, 33);
v_X_5393_ = lean_ctor_get(v_date_4141_, 34);
v_x_5394_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5395_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5405_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5405_ == 0)
{
lean_object* v_unused_5406_; 
v_unused_5406_ = lean_ctor_get(v_date_4141_, 24);
lean_dec(v_unused_5406_);
v___x_5397_ = v_date_4141_;
v_isShared_5398_ = v_isSharedCheck_5405_;
goto v_resetjp_5396_;
}
else
{
lean_inc(v_Z_5395_);
lean_inc(v_x_5394_);
lean_inc(v_X_5393_);
lean_inc(v_O_5392_);
lean_inc(v_v_5391_);
lean_inc(v_zabbrev_5390_);
lean_inc(v_z_5389_);
lean_inc(v_V_5388_);
lean_inc(v_N_5387_);
lean_inc(v_n_5386_);
lean_inc(v_A_5385_);
lean_inc(v_S_5384_);
lean_inc(v_m_5383_);
lean_inc(v_H_5382_);
lean_inc(v_k_5381_);
lean_inc(v_K_5380_);
lean_inc(v_h_5379_);
lean_inc(v_B_5378_);
lean_inc(v_b_5377_);
lean_inc(v_a_5376_);
lean_inc(v_F_5375_);
lean_inc(v_c_5374_);
lean_inc(v_e_5373_);
lean_inc(v_E_5372_);
lean_inc(v_W_5371_);
lean_inc(v_w_5370_);
lean_inc(v_q_5369_);
lean_inc(v_Q_5368_);
lean_inc(v_d_5367_);
lean_inc(v_L_5366_);
lean_inc(v_M_5365_);
lean_inc(v_D_5364_);
lean_inc(v_Y_5363_);
lean_inc(v_u_5362_);
lean_inc(v_y_5361_);
lean_inc(v_G_5360_);
lean_dec(v_date_4141_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5405_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
lean_object* v___x_5400_; 
if (v_isShared_5359_ == 0)
{
lean_ctor_set_tag(v___x_5358_, 1);
lean_ctor_set(v___x_5358_, 0, v_data_4143_);
v___x_5400_ = v___x_5358_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_data_4143_);
v___x_5400_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
lean_object* v___x_5402_; 
if (v_isShared_5398_ == 0)
{
lean_ctor_set(v___x_5397_, 24, v___x_5400_);
v___x_5402_ = v___x_5397_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v_G_5360_);
lean_ctor_set(v_reuseFailAlloc_5403_, 1, v_y_5361_);
lean_ctor_set(v_reuseFailAlloc_5403_, 2, v_u_5362_);
lean_ctor_set(v_reuseFailAlloc_5403_, 3, v_Y_5363_);
lean_ctor_set(v_reuseFailAlloc_5403_, 4, v_D_5364_);
lean_ctor_set(v_reuseFailAlloc_5403_, 5, v_M_5365_);
lean_ctor_set(v_reuseFailAlloc_5403_, 6, v_L_5366_);
lean_ctor_set(v_reuseFailAlloc_5403_, 7, v_d_5367_);
lean_ctor_set(v_reuseFailAlloc_5403_, 8, v_Q_5368_);
lean_ctor_set(v_reuseFailAlloc_5403_, 9, v_q_5369_);
lean_ctor_set(v_reuseFailAlloc_5403_, 10, v_w_5370_);
lean_ctor_set(v_reuseFailAlloc_5403_, 11, v_W_5371_);
lean_ctor_set(v_reuseFailAlloc_5403_, 12, v_E_5372_);
lean_ctor_set(v_reuseFailAlloc_5403_, 13, v_e_5373_);
lean_ctor_set(v_reuseFailAlloc_5403_, 14, v_c_5374_);
lean_ctor_set(v_reuseFailAlloc_5403_, 15, v_F_5375_);
lean_ctor_set(v_reuseFailAlloc_5403_, 16, v_a_5376_);
lean_ctor_set(v_reuseFailAlloc_5403_, 17, v_b_5377_);
lean_ctor_set(v_reuseFailAlloc_5403_, 18, v_B_5378_);
lean_ctor_set(v_reuseFailAlloc_5403_, 19, v_h_5379_);
lean_ctor_set(v_reuseFailAlloc_5403_, 20, v_K_5380_);
lean_ctor_set(v_reuseFailAlloc_5403_, 21, v_k_5381_);
lean_ctor_set(v_reuseFailAlloc_5403_, 22, v_H_5382_);
lean_ctor_set(v_reuseFailAlloc_5403_, 23, v_m_5383_);
lean_ctor_set(v_reuseFailAlloc_5403_, 24, v___x_5400_);
lean_ctor_set(v_reuseFailAlloc_5403_, 25, v_S_5384_);
lean_ctor_set(v_reuseFailAlloc_5403_, 26, v_A_5385_);
lean_ctor_set(v_reuseFailAlloc_5403_, 27, v_n_5386_);
lean_ctor_set(v_reuseFailAlloc_5403_, 28, v_N_5387_);
lean_ctor_set(v_reuseFailAlloc_5403_, 29, v_V_5388_);
lean_ctor_set(v_reuseFailAlloc_5403_, 30, v_z_5389_);
lean_ctor_set(v_reuseFailAlloc_5403_, 31, v_zabbrev_5390_);
lean_ctor_set(v_reuseFailAlloc_5403_, 32, v_v_5391_);
lean_ctor_set(v_reuseFailAlloc_5403_, 33, v_O_5392_);
lean_ctor_set(v_reuseFailAlloc_5403_, 34, v_X_5393_);
lean_ctor_set(v_reuseFailAlloc_5403_, 35, v_x_5394_);
lean_ctor_set(v_reuseFailAlloc_5403_, 36, v_Z_5395_);
v___x_5402_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
return v___x_5402_;
}
}
}
}
}
case 25:
{
lean_object* v___x_5410_; uint8_t v_isShared_5411_; uint8_t v_isSharedCheck_5459_; 
v_isSharedCheck_5459_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5459_ == 0)
{
lean_object* v_unused_5460_; 
v_unused_5460_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5460_);
v___x_5410_ = v_modifier_4142_;
v_isShared_5411_ = v_isSharedCheck_5459_;
goto v_resetjp_5409_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5410_ = lean_box(0);
v_isShared_5411_ = v_isSharedCheck_5459_;
goto v_resetjp_5409_;
}
v_resetjp_5409_:
{
lean_object* v_G_5412_; lean_object* v_y_5413_; lean_object* v_u_5414_; lean_object* v_Y_5415_; lean_object* v_D_5416_; lean_object* v_M_5417_; lean_object* v_L_5418_; lean_object* v_d_5419_; lean_object* v_Q_5420_; lean_object* v_q_5421_; lean_object* v_w_5422_; lean_object* v_W_5423_; lean_object* v_E_5424_; lean_object* v_e_5425_; lean_object* v_c_5426_; lean_object* v_F_5427_; lean_object* v_a_5428_; lean_object* v_b_5429_; lean_object* v_B_5430_; lean_object* v_h_5431_; lean_object* v_K_5432_; lean_object* v_k_5433_; lean_object* v_H_5434_; lean_object* v_m_5435_; lean_object* v_s_5436_; lean_object* v_A_5437_; lean_object* v_n_5438_; lean_object* v_N_5439_; lean_object* v_V_5440_; lean_object* v_z_5441_; lean_object* v_zabbrev_5442_; lean_object* v_v_5443_; lean_object* v_O_5444_; lean_object* v_X_5445_; lean_object* v_x_5446_; lean_object* v_Z_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5457_; 
v_G_5412_ = lean_ctor_get(v_date_4141_, 0);
v_y_5413_ = lean_ctor_get(v_date_4141_, 1);
v_u_5414_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5415_ = lean_ctor_get(v_date_4141_, 3);
v_D_5416_ = lean_ctor_get(v_date_4141_, 4);
v_M_5417_ = lean_ctor_get(v_date_4141_, 5);
v_L_5418_ = lean_ctor_get(v_date_4141_, 6);
v_d_5419_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5420_ = lean_ctor_get(v_date_4141_, 8);
v_q_5421_ = lean_ctor_get(v_date_4141_, 9);
v_w_5422_ = lean_ctor_get(v_date_4141_, 10);
v_W_5423_ = lean_ctor_get(v_date_4141_, 11);
v_E_5424_ = lean_ctor_get(v_date_4141_, 12);
v_e_5425_ = lean_ctor_get(v_date_4141_, 13);
v_c_5426_ = lean_ctor_get(v_date_4141_, 14);
v_F_5427_ = lean_ctor_get(v_date_4141_, 15);
v_a_5428_ = lean_ctor_get(v_date_4141_, 16);
v_b_5429_ = lean_ctor_get(v_date_4141_, 17);
v_B_5430_ = lean_ctor_get(v_date_4141_, 18);
v_h_5431_ = lean_ctor_get(v_date_4141_, 19);
v_K_5432_ = lean_ctor_get(v_date_4141_, 20);
v_k_5433_ = lean_ctor_get(v_date_4141_, 21);
v_H_5434_ = lean_ctor_get(v_date_4141_, 22);
v_m_5435_ = lean_ctor_get(v_date_4141_, 23);
v_s_5436_ = lean_ctor_get(v_date_4141_, 24);
v_A_5437_ = lean_ctor_get(v_date_4141_, 26);
v_n_5438_ = lean_ctor_get(v_date_4141_, 27);
v_N_5439_ = lean_ctor_get(v_date_4141_, 28);
v_V_5440_ = lean_ctor_get(v_date_4141_, 29);
v_z_5441_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5442_ = lean_ctor_get(v_date_4141_, 31);
v_v_5443_ = lean_ctor_get(v_date_4141_, 32);
v_O_5444_ = lean_ctor_get(v_date_4141_, 33);
v_X_5445_ = lean_ctor_get(v_date_4141_, 34);
v_x_5446_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5447_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5457_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5457_ == 0)
{
lean_object* v_unused_5458_; 
v_unused_5458_ = lean_ctor_get(v_date_4141_, 25);
lean_dec(v_unused_5458_);
v___x_5449_ = v_date_4141_;
v_isShared_5450_ = v_isSharedCheck_5457_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_Z_5447_);
lean_inc(v_x_5446_);
lean_inc(v_X_5445_);
lean_inc(v_O_5444_);
lean_inc(v_v_5443_);
lean_inc(v_zabbrev_5442_);
lean_inc(v_z_5441_);
lean_inc(v_V_5440_);
lean_inc(v_N_5439_);
lean_inc(v_n_5438_);
lean_inc(v_A_5437_);
lean_inc(v_s_5436_);
lean_inc(v_m_5435_);
lean_inc(v_H_5434_);
lean_inc(v_k_5433_);
lean_inc(v_K_5432_);
lean_inc(v_h_5431_);
lean_inc(v_B_5430_);
lean_inc(v_b_5429_);
lean_inc(v_a_5428_);
lean_inc(v_F_5427_);
lean_inc(v_c_5426_);
lean_inc(v_e_5425_);
lean_inc(v_E_5424_);
lean_inc(v_W_5423_);
lean_inc(v_w_5422_);
lean_inc(v_q_5421_);
lean_inc(v_Q_5420_);
lean_inc(v_d_5419_);
lean_inc(v_L_5418_);
lean_inc(v_M_5417_);
lean_inc(v_D_5416_);
lean_inc(v_Y_5415_);
lean_inc(v_u_5414_);
lean_inc(v_y_5413_);
lean_inc(v_G_5412_);
lean_dec(v_date_4141_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5457_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5452_; 
if (v_isShared_5411_ == 0)
{
lean_ctor_set_tag(v___x_5410_, 1);
lean_ctor_set(v___x_5410_, 0, v_data_4143_);
v___x_5452_ = v___x_5410_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_data_4143_);
v___x_5452_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
lean_object* v___x_5454_; 
if (v_isShared_5450_ == 0)
{
lean_ctor_set(v___x_5449_, 25, v___x_5452_);
v___x_5454_ = v___x_5449_;
goto v_reusejp_5453_;
}
else
{
lean_object* v_reuseFailAlloc_5455_; 
v_reuseFailAlloc_5455_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5455_, 0, v_G_5412_);
lean_ctor_set(v_reuseFailAlloc_5455_, 1, v_y_5413_);
lean_ctor_set(v_reuseFailAlloc_5455_, 2, v_u_5414_);
lean_ctor_set(v_reuseFailAlloc_5455_, 3, v_Y_5415_);
lean_ctor_set(v_reuseFailAlloc_5455_, 4, v_D_5416_);
lean_ctor_set(v_reuseFailAlloc_5455_, 5, v_M_5417_);
lean_ctor_set(v_reuseFailAlloc_5455_, 6, v_L_5418_);
lean_ctor_set(v_reuseFailAlloc_5455_, 7, v_d_5419_);
lean_ctor_set(v_reuseFailAlloc_5455_, 8, v_Q_5420_);
lean_ctor_set(v_reuseFailAlloc_5455_, 9, v_q_5421_);
lean_ctor_set(v_reuseFailAlloc_5455_, 10, v_w_5422_);
lean_ctor_set(v_reuseFailAlloc_5455_, 11, v_W_5423_);
lean_ctor_set(v_reuseFailAlloc_5455_, 12, v_E_5424_);
lean_ctor_set(v_reuseFailAlloc_5455_, 13, v_e_5425_);
lean_ctor_set(v_reuseFailAlloc_5455_, 14, v_c_5426_);
lean_ctor_set(v_reuseFailAlloc_5455_, 15, v_F_5427_);
lean_ctor_set(v_reuseFailAlloc_5455_, 16, v_a_5428_);
lean_ctor_set(v_reuseFailAlloc_5455_, 17, v_b_5429_);
lean_ctor_set(v_reuseFailAlloc_5455_, 18, v_B_5430_);
lean_ctor_set(v_reuseFailAlloc_5455_, 19, v_h_5431_);
lean_ctor_set(v_reuseFailAlloc_5455_, 20, v_K_5432_);
lean_ctor_set(v_reuseFailAlloc_5455_, 21, v_k_5433_);
lean_ctor_set(v_reuseFailAlloc_5455_, 22, v_H_5434_);
lean_ctor_set(v_reuseFailAlloc_5455_, 23, v_m_5435_);
lean_ctor_set(v_reuseFailAlloc_5455_, 24, v_s_5436_);
lean_ctor_set(v_reuseFailAlloc_5455_, 25, v___x_5452_);
lean_ctor_set(v_reuseFailAlloc_5455_, 26, v_A_5437_);
lean_ctor_set(v_reuseFailAlloc_5455_, 27, v_n_5438_);
lean_ctor_set(v_reuseFailAlloc_5455_, 28, v_N_5439_);
lean_ctor_set(v_reuseFailAlloc_5455_, 29, v_V_5440_);
lean_ctor_set(v_reuseFailAlloc_5455_, 30, v_z_5441_);
lean_ctor_set(v_reuseFailAlloc_5455_, 31, v_zabbrev_5442_);
lean_ctor_set(v_reuseFailAlloc_5455_, 32, v_v_5443_);
lean_ctor_set(v_reuseFailAlloc_5455_, 33, v_O_5444_);
lean_ctor_set(v_reuseFailAlloc_5455_, 34, v_X_5445_);
lean_ctor_set(v_reuseFailAlloc_5455_, 35, v_x_5446_);
lean_ctor_set(v_reuseFailAlloc_5455_, 36, v_Z_5447_);
v___x_5454_ = v_reuseFailAlloc_5455_;
goto v_reusejp_5453_;
}
v_reusejp_5453_:
{
return v___x_5454_;
}
}
}
}
}
case 26:
{
lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5511_; 
v_isSharedCheck_5511_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5511_ == 0)
{
lean_object* v_unused_5512_; 
v_unused_5512_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5512_);
v___x_5462_ = v_modifier_4142_;
v_isShared_5463_ = v_isSharedCheck_5511_;
goto v_resetjp_5461_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5511_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v_G_5464_; lean_object* v_y_5465_; lean_object* v_u_5466_; lean_object* v_Y_5467_; lean_object* v_D_5468_; lean_object* v_M_5469_; lean_object* v_L_5470_; lean_object* v_d_5471_; lean_object* v_Q_5472_; lean_object* v_q_5473_; lean_object* v_w_5474_; lean_object* v_W_5475_; lean_object* v_E_5476_; lean_object* v_e_5477_; lean_object* v_c_5478_; lean_object* v_F_5479_; lean_object* v_a_5480_; lean_object* v_b_5481_; lean_object* v_B_5482_; lean_object* v_h_5483_; lean_object* v_K_5484_; lean_object* v_k_5485_; lean_object* v_H_5486_; lean_object* v_m_5487_; lean_object* v_s_5488_; lean_object* v_S_5489_; lean_object* v_n_5490_; lean_object* v_N_5491_; lean_object* v_V_5492_; lean_object* v_z_5493_; lean_object* v_zabbrev_5494_; lean_object* v_v_5495_; lean_object* v_O_5496_; lean_object* v_X_5497_; lean_object* v_x_5498_; lean_object* v_Z_5499_; lean_object* v___x_5501_; uint8_t v_isShared_5502_; uint8_t v_isSharedCheck_5509_; 
v_G_5464_ = lean_ctor_get(v_date_4141_, 0);
v_y_5465_ = lean_ctor_get(v_date_4141_, 1);
v_u_5466_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5467_ = lean_ctor_get(v_date_4141_, 3);
v_D_5468_ = lean_ctor_get(v_date_4141_, 4);
v_M_5469_ = lean_ctor_get(v_date_4141_, 5);
v_L_5470_ = lean_ctor_get(v_date_4141_, 6);
v_d_5471_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5472_ = lean_ctor_get(v_date_4141_, 8);
v_q_5473_ = lean_ctor_get(v_date_4141_, 9);
v_w_5474_ = lean_ctor_get(v_date_4141_, 10);
v_W_5475_ = lean_ctor_get(v_date_4141_, 11);
v_E_5476_ = lean_ctor_get(v_date_4141_, 12);
v_e_5477_ = lean_ctor_get(v_date_4141_, 13);
v_c_5478_ = lean_ctor_get(v_date_4141_, 14);
v_F_5479_ = lean_ctor_get(v_date_4141_, 15);
v_a_5480_ = lean_ctor_get(v_date_4141_, 16);
v_b_5481_ = lean_ctor_get(v_date_4141_, 17);
v_B_5482_ = lean_ctor_get(v_date_4141_, 18);
v_h_5483_ = lean_ctor_get(v_date_4141_, 19);
v_K_5484_ = lean_ctor_get(v_date_4141_, 20);
v_k_5485_ = lean_ctor_get(v_date_4141_, 21);
v_H_5486_ = lean_ctor_get(v_date_4141_, 22);
v_m_5487_ = lean_ctor_get(v_date_4141_, 23);
v_s_5488_ = lean_ctor_get(v_date_4141_, 24);
v_S_5489_ = lean_ctor_get(v_date_4141_, 25);
v_n_5490_ = lean_ctor_get(v_date_4141_, 27);
v_N_5491_ = lean_ctor_get(v_date_4141_, 28);
v_V_5492_ = lean_ctor_get(v_date_4141_, 29);
v_z_5493_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5494_ = lean_ctor_get(v_date_4141_, 31);
v_v_5495_ = lean_ctor_get(v_date_4141_, 32);
v_O_5496_ = lean_ctor_get(v_date_4141_, 33);
v_X_5497_ = lean_ctor_get(v_date_4141_, 34);
v_x_5498_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5499_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5509_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5509_ == 0)
{
lean_object* v_unused_5510_; 
v_unused_5510_ = lean_ctor_get(v_date_4141_, 26);
lean_dec(v_unused_5510_);
v___x_5501_ = v_date_4141_;
v_isShared_5502_ = v_isSharedCheck_5509_;
goto v_resetjp_5500_;
}
else
{
lean_inc(v_Z_5499_);
lean_inc(v_x_5498_);
lean_inc(v_X_5497_);
lean_inc(v_O_5496_);
lean_inc(v_v_5495_);
lean_inc(v_zabbrev_5494_);
lean_inc(v_z_5493_);
lean_inc(v_V_5492_);
lean_inc(v_N_5491_);
lean_inc(v_n_5490_);
lean_inc(v_S_5489_);
lean_inc(v_s_5488_);
lean_inc(v_m_5487_);
lean_inc(v_H_5486_);
lean_inc(v_k_5485_);
lean_inc(v_K_5484_);
lean_inc(v_h_5483_);
lean_inc(v_B_5482_);
lean_inc(v_b_5481_);
lean_inc(v_a_5480_);
lean_inc(v_F_5479_);
lean_inc(v_c_5478_);
lean_inc(v_e_5477_);
lean_inc(v_E_5476_);
lean_inc(v_W_5475_);
lean_inc(v_w_5474_);
lean_inc(v_q_5473_);
lean_inc(v_Q_5472_);
lean_inc(v_d_5471_);
lean_inc(v_L_5470_);
lean_inc(v_M_5469_);
lean_inc(v_D_5468_);
lean_inc(v_Y_5467_);
lean_inc(v_u_5466_);
lean_inc(v_y_5465_);
lean_inc(v_G_5464_);
lean_dec(v_date_4141_);
v___x_5501_ = lean_box(0);
v_isShared_5502_ = v_isSharedCheck_5509_;
goto v_resetjp_5500_;
}
v_resetjp_5500_:
{
lean_object* v___x_5504_; 
if (v_isShared_5463_ == 0)
{
lean_ctor_set_tag(v___x_5462_, 1);
lean_ctor_set(v___x_5462_, 0, v_data_4143_);
v___x_5504_ = v___x_5462_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5508_; 
v_reuseFailAlloc_5508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5508_, 0, v_data_4143_);
v___x_5504_ = v_reuseFailAlloc_5508_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
lean_object* v___x_5506_; 
if (v_isShared_5502_ == 0)
{
lean_ctor_set(v___x_5501_, 26, v___x_5504_);
v___x_5506_ = v___x_5501_;
goto v_reusejp_5505_;
}
else
{
lean_object* v_reuseFailAlloc_5507_; 
v_reuseFailAlloc_5507_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5507_, 0, v_G_5464_);
lean_ctor_set(v_reuseFailAlloc_5507_, 1, v_y_5465_);
lean_ctor_set(v_reuseFailAlloc_5507_, 2, v_u_5466_);
lean_ctor_set(v_reuseFailAlloc_5507_, 3, v_Y_5467_);
lean_ctor_set(v_reuseFailAlloc_5507_, 4, v_D_5468_);
lean_ctor_set(v_reuseFailAlloc_5507_, 5, v_M_5469_);
lean_ctor_set(v_reuseFailAlloc_5507_, 6, v_L_5470_);
lean_ctor_set(v_reuseFailAlloc_5507_, 7, v_d_5471_);
lean_ctor_set(v_reuseFailAlloc_5507_, 8, v_Q_5472_);
lean_ctor_set(v_reuseFailAlloc_5507_, 9, v_q_5473_);
lean_ctor_set(v_reuseFailAlloc_5507_, 10, v_w_5474_);
lean_ctor_set(v_reuseFailAlloc_5507_, 11, v_W_5475_);
lean_ctor_set(v_reuseFailAlloc_5507_, 12, v_E_5476_);
lean_ctor_set(v_reuseFailAlloc_5507_, 13, v_e_5477_);
lean_ctor_set(v_reuseFailAlloc_5507_, 14, v_c_5478_);
lean_ctor_set(v_reuseFailAlloc_5507_, 15, v_F_5479_);
lean_ctor_set(v_reuseFailAlloc_5507_, 16, v_a_5480_);
lean_ctor_set(v_reuseFailAlloc_5507_, 17, v_b_5481_);
lean_ctor_set(v_reuseFailAlloc_5507_, 18, v_B_5482_);
lean_ctor_set(v_reuseFailAlloc_5507_, 19, v_h_5483_);
lean_ctor_set(v_reuseFailAlloc_5507_, 20, v_K_5484_);
lean_ctor_set(v_reuseFailAlloc_5507_, 21, v_k_5485_);
lean_ctor_set(v_reuseFailAlloc_5507_, 22, v_H_5486_);
lean_ctor_set(v_reuseFailAlloc_5507_, 23, v_m_5487_);
lean_ctor_set(v_reuseFailAlloc_5507_, 24, v_s_5488_);
lean_ctor_set(v_reuseFailAlloc_5507_, 25, v_S_5489_);
lean_ctor_set(v_reuseFailAlloc_5507_, 26, v___x_5504_);
lean_ctor_set(v_reuseFailAlloc_5507_, 27, v_n_5490_);
lean_ctor_set(v_reuseFailAlloc_5507_, 28, v_N_5491_);
lean_ctor_set(v_reuseFailAlloc_5507_, 29, v_V_5492_);
lean_ctor_set(v_reuseFailAlloc_5507_, 30, v_z_5493_);
lean_ctor_set(v_reuseFailAlloc_5507_, 31, v_zabbrev_5494_);
lean_ctor_set(v_reuseFailAlloc_5507_, 32, v_v_5495_);
lean_ctor_set(v_reuseFailAlloc_5507_, 33, v_O_5496_);
lean_ctor_set(v_reuseFailAlloc_5507_, 34, v_X_5497_);
lean_ctor_set(v_reuseFailAlloc_5507_, 35, v_x_5498_);
lean_ctor_set(v_reuseFailAlloc_5507_, 36, v_Z_5499_);
v___x_5506_ = v_reuseFailAlloc_5507_;
goto v_reusejp_5505_;
}
v_reusejp_5505_:
{
return v___x_5506_;
}
}
}
}
}
case 27:
{
lean_object* v___x_5514_; uint8_t v_isShared_5515_; uint8_t v_isSharedCheck_5563_; 
v_isSharedCheck_5563_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5563_ == 0)
{
lean_object* v_unused_5564_; 
v_unused_5564_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5564_);
v___x_5514_ = v_modifier_4142_;
v_isShared_5515_ = v_isSharedCheck_5563_;
goto v_resetjp_5513_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5514_ = lean_box(0);
v_isShared_5515_ = v_isSharedCheck_5563_;
goto v_resetjp_5513_;
}
v_resetjp_5513_:
{
lean_object* v_G_5516_; lean_object* v_y_5517_; lean_object* v_u_5518_; lean_object* v_Y_5519_; lean_object* v_D_5520_; lean_object* v_M_5521_; lean_object* v_L_5522_; lean_object* v_d_5523_; lean_object* v_Q_5524_; lean_object* v_q_5525_; lean_object* v_w_5526_; lean_object* v_W_5527_; lean_object* v_E_5528_; lean_object* v_e_5529_; lean_object* v_c_5530_; lean_object* v_F_5531_; lean_object* v_a_5532_; lean_object* v_b_5533_; lean_object* v_B_5534_; lean_object* v_h_5535_; lean_object* v_K_5536_; lean_object* v_k_5537_; lean_object* v_H_5538_; lean_object* v_m_5539_; lean_object* v_s_5540_; lean_object* v_S_5541_; lean_object* v_A_5542_; lean_object* v_N_5543_; lean_object* v_V_5544_; lean_object* v_z_5545_; lean_object* v_zabbrev_5546_; lean_object* v_v_5547_; lean_object* v_O_5548_; lean_object* v_X_5549_; lean_object* v_x_5550_; lean_object* v_Z_5551_; lean_object* v___x_5553_; uint8_t v_isShared_5554_; uint8_t v_isSharedCheck_5561_; 
v_G_5516_ = lean_ctor_get(v_date_4141_, 0);
v_y_5517_ = lean_ctor_get(v_date_4141_, 1);
v_u_5518_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5519_ = lean_ctor_get(v_date_4141_, 3);
v_D_5520_ = lean_ctor_get(v_date_4141_, 4);
v_M_5521_ = lean_ctor_get(v_date_4141_, 5);
v_L_5522_ = lean_ctor_get(v_date_4141_, 6);
v_d_5523_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5524_ = lean_ctor_get(v_date_4141_, 8);
v_q_5525_ = lean_ctor_get(v_date_4141_, 9);
v_w_5526_ = lean_ctor_get(v_date_4141_, 10);
v_W_5527_ = lean_ctor_get(v_date_4141_, 11);
v_E_5528_ = lean_ctor_get(v_date_4141_, 12);
v_e_5529_ = lean_ctor_get(v_date_4141_, 13);
v_c_5530_ = lean_ctor_get(v_date_4141_, 14);
v_F_5531_ = lean_ctor_get(v_date_4141_, 15);
v_a_5532_ = lean_ctor_get(v_date_4141_, 16);
v_b_5533_ = lean_ctor_get(v_date_4141_, 17);
v_B_5534_ = lean_ctor_get(v_date_4141_, 18);
v_h_5535_ = lean_ctor_get(v_date_4141_, 19);
v_K_5536_ = lean_ctor_get(v_date_4141_, 20);
v_k_5537_ = lean_ctor_get(v_date_4141_, 21);
v_H_5538_ = lean_ctor_get(v_date_4141_, 22);
v_m_5539_ = lean_ctor_get(v_date_4141_, 23);
v_s_5540_ = lean_ctor_get(v_date_4141_, 24);
v_S_5541_ = lean_ctor_get(v_date_4141_, 25);
v_A_5542_ = lean_ctor_get(v_date_4141_, 26);
v_N_5543_ = lean_ctor_get(v_date_4141_, 28);
v_V_5544_ = lean_ctor_get(v_date_4141_, 29);
v_z_5545_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5546_ = lean_ctor_get(v_date_4141_, 31);
v_v_5547_ = lean_ctor_get(v_date_4141_, 32);
v_O_5548_ = lean_ctor_get(v_date_4141_, 33);
v_X_5549_ = lean_ctor_get(v_date_4141_, 34);
v_x_5550_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5551_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5561_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5561_ == 0)
{
lean_object* v_unused_5562_; 
v_unused_5562_ = lean_ctor_get(v_date_4141_, 27);
lean_dec(v_unused_5562_);
v___x_5553_ = v_date_4141_;
v_isShared_5554_ = v_isSharedCheck_5561_;
goto v_resetjp_5552_;
}
else
{
lean_inc(v_Z_5551_);
lean_inc(v_x_5550_);
lean_inc(v_X_5549_);
lean_inc(v_O_5548_);
lean_inc(v_v_5547_);
lean_inc(v_zabbrev_5546_);
lean_inc(v_z_5545_);
lean_inc(v_V_5544_);
lean_inc(v_N_5543_);
lean_inc(v_A_5542_);
lean_inc(v_S_5541_);
lean_inc(v_s_5540_);
lean_inc(v_m_5539_);
lean_inc(v_H_5538_);
lean_inc(v_k_5537_);
lean_inc(v_K_5536_);
lean_inc(v_h_5535_);
lean_inc(v_B_5534_);
lean_inc(v_b_5533_);
lean_inc(v_a_5532_);
lean_inc(v_F_5531_);
lean_inc(v_c_5530_);
lean_inc(v_e_5529_);
lean_inc(v_E_5528_);
lean_inc(v_W_5527_);
lean_inc(v_w_5526_);
lean_inc(v_q_5525_);
lean_inc(v_Q_5524_);
lean_inc(v_d_5523_);
lean_inc(v_L_5522_);
lean_inc(v_M_5521_);
lean_inc(v_D_5520_);
lean_inc(v_Y_5519_);
lean_inc(v_u_5518_);
lean_inc(v_y_5517_);
lean_inc(v_G_5516_);
lean_dec(v_date_4141_);
v___x_5553_ = lean_box(0);
v_isShared_5554_ = v_isSharedCheck_5561_;
goto v_resetjp_5552_;
}
v_resetjp_5552_:
{
lean_object* v___x_5556_; 
if (v_isShared_5515_ == 0)
{
lean_ctor_set_tag(v___x_5514_, 1);
lean_ctor_set(v___x_5514_, 0, v_data_4143_);
v___x_5556_ = v___x_5514_;
goto v_reusejp_5555_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v_data_4143_);
v___x_5556_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5555_;
}
v_reusejp_5555_:
{
lean_object* v___x_5558_; 
if (v_isShared_5554_ == 0)
{
lean_ctor_set(v___x_5553_, 27, v___x_5556_);
v___x_5558_ = v___x_5553_;
goto v_reusejp_5557_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v_G_5516_);
lean_ctor_set(v_reuseFailAlloc_5559_, 1, v_y_5517_);
lean_ctor_set(v_reuseFailAlloc_5559_, 2, v_u_5518_);
lean_ctor_set(v_reuseFailAlloc_5559_, 3, v_Y_5519_);
lean_ctor_set(v_reuseFailAlloc_5559_, 4, v_D_5520_);
lean_ctor_set(v_reuseFailAlloc_5559_, 5, v_M_5521_);
lean_ctor_set(v_reuseFailAlloc_5559_, 6, v_L_5522_);
lean_ctor_set(v_reuseFailAlloc_5559_, 7, v_d_5523_);
lean_ctor_set(v_reuseFailAlloc_5559_, 8, v_Q_5524_);
lean_ctor_set(v_reuseFailAlloc_5559_, 9, v_q_5525_);
lean_ctor_set(v_reuseFailAlloc_5559_, 10, v_w_5526_);
lean_ctor_set(v_reuseFailAlloc_5559_, 11, v_W_5527_);
lean_ctor_set(v_reuseFailAlloc_5559_, 12, v_E_5528_);
lean_ctor_set(v_reuseFailAlloc_5559_, 13, v_e_5529_);
lean_ctor_set(v_reuseFailAlloc_5559_, 14, v_c_5530_);
lean_ctor_set(v_reuseFailAlloc_5559_, 15, v_F_5531_);
lean_ctor_set(v_reuseFailAlloc_5559_, 16, v_a_5532_);
lean_ctor_set(v_reuseFailAlloc_5559_, 17, v_b_5533_);
lean_ctor_set(v_reuseFailAlloc_5559_, 18, v_B_5534_);
lean_ctor_set(v_reuseFailAlloc_5559_, 19, v_h_5535_);
lean_ctor_set(v_reuseFailAlloc_5559_, 20, v_K_5536_);
lean_ctor_set(v_reuseFailAlloc_5559_, 21, v_k_5537_);
lean_ctor_set(v_reuseFailAlloc_5559_, 22, v_H_5538_);
lean_ctor_set(v_reuseFailAlloc_5559_, 23, v_m_5539_);
lean_ctor_set(v_reuseFailAlloc_5559_, 24, v_s_5540_);
lean_ctor_set(v_reuseFailAlloc_5559_, 25, v_S_5541_);
lean_ctor_set(v_reuseFailAlloc_5559_, 26, v_A_5542_);
lean_ctor_set(v_reuseFailAlloc_5559_, 27, v___x_5556_);
lean_ctor_set(v_reuseFailAlloc_5559_, 28, v_N_5543_);
lean_ctor_set(v_reuseFailAlloc_5559_, 29, v_V_5544_);
lean_ctor_set(v_reuseFailAlloc_5559_, 30, v_z_5545_);
lean_ctor_set(v_reuseFailAlloc_5559_, 31, v_zabbrev_5546_);
lean_ctor_set(v_reuseFailAlloc_5559_, 32, v_v_5547_);
lean_ctor_set(v_reuseFailAlloc_5559_, 33, v_O_5548_);
lean_ctor_set(v_reuseFailAlloc_5559_, 34, v_X_5549_);
lean_ctor_set(v_reuseFailAlloc_5559_, 35, v_x_5550_);
lean_ctor_set(v_reuseFailAlloc_5559_, 36, v_Z_5551_);
v___x_5558_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5557_;
}
v_reusejp_5557_:
{
return v___x_5558_;
}
}
}
}
}
case 28:
{
lean_object* v___x_5566_; uint8_t v_isShared_5567_; uint8_t v_isSharedCheck_5615_; 
v_isSharedCheck_5615_ = !lean_is_exclusive(v_modifier_4142_);
if (v_isSharedCheck_5615_ == 0)
{
lean_object* v_unused_5616_; 
v_unused_5616_ = lean_ctor_get(v_modifier_4142_, 0);
lean_dec(v_unused_5616_);
v___x_5566_ = v_modifier_4142_;
v_isShared_5567_ = v_isSharedCheck_5615_;
goto v_resetjp_5565_;
}
else
{
lean_dec(v_modifier_4142_);
v___x_5566_ = lean_box(0);
v_isShared_5567_ = v_isSharedCheck_5615_;
goto v_resetjp_5565_;
}
v_resetjp_5565_:
{
lean_object* v_G_5568_; lean_object* v_y_5569_; lean_object* v_u_5570_; lean_object* v_Y_5571_; lean_object* v_D_5572_; lean_object* v_M_5573_; lean_object* v_L_5574_; lean_object* v_d_5575_; lean_object* v_Q_5576_; lean_object* v_q_5577_; lean_object* v_w_5578_; lean_object* v_W_5579_; lean_object* v_E_5580_; lean_object* v_e_5581_; lean_object* v_c_5582_; lean_object* v_F_5583_; lean_object* v_a_5584_; lean_object* v_b_5585_; lean_object* v_B_5586_; lean_object* v_h_5587_; lean_object* v_K_5588_; lean_object* v_k_5589_; lean_object* v_H_5590_; lean_object* v_m_5591_; lean_object* v_s_5592_; lean_object* v_S_5593_; lean_object* v_A_5594_; lean_object* v_n_5595_; lean_object* v_V_5596_; lean_object* v_z_5597_; lean_object* v_zabbrev_5598_; lean_object* v_v_5599_; lean_object* v_O_5600_; lean_object* v_X_5601_; lean_object* v_x_5602_; lean_object* v_Z_5603_; lean_object* v___x_5605_; uint8_t v_isShared_5606_; uint8_t v_isSharedCheck_5613_; 
v_G_5568_ = lean_ctor_get(v_date_4141_, 0);
v_y_5569_ = lean_ctor_get(v_date_4141_, 1);
v_u_5570_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5571_ = lean_ctor_get(v_date_4141_, 3);
v_D_5572_ = lean_ctor_get(v_date_4141_, 4);
v_M_5573_ = lean_ctor_get(v_date_4141_, 5);
v_L_5574_ = lean_ctor_get(v_date_4141_, 6);
v_d_5575_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5576_ = lean_ctor_get(v_date_4141_, 8);
v_q_5577_ = lean_ctor_get(v_date_4141_, 9);
v_w_5578_ = lean_ctor_get(v_date_4141_, 10);
v_W_5579_ = lean_ctor_get(v_date_4141_, 11);
v_E_5580_ = lean_ctor_get(v_date_4141_, 12);
v_e_5581_ = lean_ctor_get(v_date_4141_, 13);
v_c_5582_ = lean_ctor_get(v_date_4141_, 14);
v_F_5583_ = lean_ctor_get(v_date_4141_, 15);
v_a_5584_ = lean_ctor_get(v_date_4141_, 16);
v_b_5585_ = lean_ctor_get(v_date_4141_, 17);
v_B_5586_ = lean_ctor_get(v_date_4141_, 18);
v_h_5587_ = lean_ctor_get(v_date_4141_, 19);
v_K_5588_ = lean_ctor_get(v_date_4141_, 20);
v_k_5589_ = lean_ctor_get(v_date_4141_, 21);
v_H_5590_ = lean_ctor_get(v_date_4141_, 22);
v_m_5591_ = lean_ctor_get(v_date_4141_, 23);
v_s_5592_ = lean_ctor_get(v_date_4141_, 24);
v_S_5593_ = lean_ctor_get(v_date_4141_, 25);
v_A_5594_ = lean_ctor_get(v_date_4141_, 26);
v_n_5595_ = lean_ctor_get(v_date_4141_, 27);
v_V_5596_ = lean_ctor_get(v_date_4141_, 29);
v_z_5597_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5598_ = lean_ctor_get(v_date_4141_, 31);
v_v_5599_ = lean_ctor_get(v_date_4141_, 32);
v_O_5600_ = lean_ctor_get(v_date_4141_, 33);
v_X_5601_ = lean_ctor_get(v_date_4141_, 34);
v_x_5602_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5603_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5613_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5613_ == 0)
{
lean_object* v_unused_5614_; 
v_unused_5614_ = lean_ctor_get(v_date_4141_, 28);
lean_dec(v_unused_5614_);
v___x_5605_ = v_date_4141_;
v_isShared_5606_ = v_isSharedCheck_5613_;
goto v_resetjp_5604_;
}
else
{
lean_inc(v_Z_5603_);
lean_inc(v_x_5602_);
lean_inc(v_X_5601_);
lean_inc(v_O_5600_);
lean_inc(v_v_5599_);
lean_inc(v_zabbrev_5598_);
lean_inc(v_z_5597_);
lean_inc(v_V_5596_);
lean_inc(v_n_5595_);
lean_inc(v_A_5594_);
lean_inc(v_S_5593_);
lean_inc(v_s_5592_);
lean_inc(v_m_5591_);
lean_inc(v_H_5590_);
lean_inc(v_k_5589_);
lean_inc(v_K_5588_);
lean_inc(v_h_5587_);
lean_inc(v_B_5586_);
lean_inc(v_b_5585_);
lean_inc(v_a_5584_);
lean_inc(v_F_5583_);
lean_inc(v_c_5582_);
lean_inc(v_e_5581_);
lean_inc(v_E_5580_);
lean_inc(v_W_5579_);
lean_inc(v_w_5578_);
lean_inc(v_q_5577_);
lean_inc(v_Q_5576_);
lean_inc(v_d_5575_);
lean_inc(v_L_5574_);
lean_inc(v_M_5573_);
lean_inc(v_D_5572_);
lean_inc(v_Y_5571_);
lean_inc(v_u_5570_);
lean_inc(v_y_5569_);
lean_inc(v_G_5568_);
lean_dec(v_date_4141_);
v___x_5605_ = lean_box(0);
v_isShared_5606_ = v_isSharedCheck_5613_;
goto v_resetjp_5604_;
}
v_resetjp_5604_:
{
lean_object* v___x_5608_; 
if (v_isShared_5567_ == 0)
{
lean_ctor_set_tag(v___x_5566_, 1);
lean_ctor_set(v___x_5566_, 0, v_data_4143_);
v___x_5608_ = v___x_5566_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5612_; 
v_reuseFailAlloc_5612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5612_, 0, v_data_4143_);
v___x_5608_ = v_reuseFailAlloc_5612_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
lean_object* v___x_5610_; 
if (v_isShared_5606_ == 0)
{
lean_ctor_set(v___x_5605_, 28, v___x_5608_);
v___x_5610_ = v___x_5605_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v_G_5568_);
lean_ctor_set(v_reuseFailAlloc_5611_, 1, v_y_5569_);
lean_ctor_set(v_reuseFailAlloc_5611_, 2, v_u_5570_);
lean_ctor_set(v_reuseFailAlloc_5611_, 3, v_Y_5571_);
lean_ctor_set(v_reuseFailAlloc_5611_, 4, v_D_5572_);
lean_ctor_set(v_reuseFailAlloc_5611_, 5, v_M_5573_);
lean_ctor_set(v_reuseFailAlloc_5611_, 6, v_L_5574_);
lean_ctor_set(v_reuseFailAlloc_5611_, 7, v_d_5575_);
lean_ctor_set(v_reuseFailAlloc_5611_, 8, v_Q_5576_);
lean_ctor_set(v_reuseFailAlloc_5611_, 9, v_q_5577_);
lean_ctor_set(v_reuseFailAlloc_5611_, 10, v_w_5578_);
lean_ctor_set(v_reuseFailAlloc_5611_, 11, v_W_5579_);
lean_ctor_set(v_reuseFailAlloc_5611_, 12, v_E_5580_);
lean_ctor_set(v_reuseFailAlloc_5611_, 13, v_e_5581_);
lean_ctor_set(v_reuseFailAlloc_5611_, 14, v_c_5582_);
lean_ctor_set(v_reuseFailAlloc_5611_, 15, v_F_5583_);
lean_ctor_set(v_reuseFailAlloc_5611_, 16, v_a_5584_);
lean_ctor_set(v_reuseFailAlloc_5611_, 17, v_b_5585_);
lean_ctor_set(v_reuseFailAlloc_5611_, 18, v_B_5586_);
lean_ctor_set(v_reuseFailAlloc_5611_, 19, v_h_5587_);
lean_ctor_set(v_reuseFailAlloc_5611_, 20, v_K_5588_);
lean_ctor_set(v_reuseFailAlloc_5611_, 21, v_k_5589_);
lean_ctor_set(v_reuseFailAlloc_5611_, 22, v_H_5590_);
lean_ctor_set(v_reuseFailAlloc_5611_, 23, v_m_5591_);
lean_ctor_set(v_reuseFailAlloc_5611_, 24, v_s_5592_);
lean_ctor_set(v_reuseFailAlloc_5611_, 25, v_S_5593_);
lean_ctor_set(v_reuseFailAlloc_5611_, 26, v_A_5594_);
lean_ctor_set(v_reuseFailAlloc_5611_, 27, v_n_5595_);
lean_ctor_set(v_reuseFailAlloc_5611_, 28, v___x_5608_);
lean_ctor_set(v_reuseFailAlloc_5611_, 29, v_V_5596_);
lean_ctor_set(v_reuseFailAlloc_5611_, 30, v_z_5597_);
lean_ctor_set(v_reuseFailAlloc_5611_, 31, v_zabbrev_5598_);
lean_ctor_set(v_reuseFailAlloc_5611_, 32, v_v_5599_);
lean_ctor_set(v_reuseFailAlloc_5611_, 33, v_O_5600_);
lean_ctor_set(v_reuseFailAlloc_5611_, 34, v_X_5601_);
lean_ctor_set(v_reuseFailAlloc_5611_, 35, v_x_5602_);
lean_ctor_set(v_reuseFailAlloc_5611_, 36, v_Z_5603_);
v___x_5610_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
return v___x_5610_;
}
}
}
}
}
case 29:
{
lean_object* v_G_5617_; lean_object* v_y_5618_; lean_object* v_u_5619_; lean_object* v_Y_5620_; lean_object* v_D_5621_; lean_object* v_M_5622_; lean_object* v_L_5623_; lean_object* v_d_5624_; lean_object* v_Q_5625_; lean_object* v_q_5626_; lean_object* v_w_5627_; lean_object* v_W_5628_; lean_object* v_E_5629_; lean_object* v_e_5630_; lean_object* v_c_5631_; lean_object* v_F_5632_; lean_object* v_a_5633_; lean_object* v_b_5634_; lean_object* v_B_5635_; lean_object* v_h_5636_; lean_object* v_K_5637_; lean_object* v_k_5638_; lean_object* v_H_5639_; lean_object* v_m_5640_; lean_object* v_s_5641_; lean_object* v_S_5642_; lean_object* v_A_5643_; lean_object* v_n_5644_; lean_object* v_N_5645_; lean_object* v_z_5646_; lean_object* v_zabbrev_5647_; lean_object* v_v_5648_; lean_object* v_O_5649_; lean_object* v_X_5650_; lean_object* v_x_5651_; lean_object* v_Z_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5660_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5617_ = lean_ctor_get(v_date_4141_, 0);
v_y_5618_ = lean_ctor_get(v_date_4141_, 1);
v_u_5619_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5620_ = lean_ctor_get(v_date_4141_, 3);
v_D_5621_ = lean_ctor_get(v_date_4141_, 4);
v_M_5622_ = lean_ctor_get(v_date_4141_, 5);
v_L_5623_ = lean_ctor_get(v_date_4141_, 6);
v_d_5624_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5625_ = lean_ctor_get(v_date_4141_, 8);
v_q_5626_ = lean_ctor_get(v_date_4141_, 9);
v_w_5627_ = lean_ctor_get(v_date_4141_, 10);
v_W_5628_ = lean_ctor_get(v_date_4141_, 11);
v_E_5629_ = lean_ctor_get(v_date_4141_, 12);
v_e_5630_ = lean_ctor_get(v_date_4141_, 13);
v_c_5631_ = lean_ctor_get(v_date_4141_, 14);
v_F_5632_ = lean_ctor_get(v_date_4141_, 15);
v_a_5633_ = lean_ctor_get(v_date_4141_, 16);
v_b_5634_ = lean_ctor_get(v_date_4141_, 17);
v_B_5635_ = lean_ctor_get(v_date_4141_, 18);
v_h_5636_ = lean_ctor_get(v_date_4141_, 19);
v_K_5637_ = lean_ctor_get(v_date_4141_, 20);
v_k_5638_ = lean_ctor_get(v_date_4141_, 21);
v_H_5639_ = lean_ctor_get(v_date_4141_, 22);
v_m_5640_ = lean_ctor_get(v_date_4141_, 23);
v_s_5641_ = lean_ctor_get(v_date_4141_, 24);
v_S_5642_ = lean_ctor_get(v_date_4141_, 25);
v_A_5643_ = lean_ctor_get(v_date_4141_, 26);
v_n_5644_ = lean_ctor_get(v_date_4141_, 27);
v_N_5645_ = lean_ctor_get(v_date_4141_, 28);
v_z_5646_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5647_ = lean_ctor_get(v_date_4141_, 31);
v_v_5648_ = lean_ctor_get(v_date_4141_, 32);
v_O_5649_ = lean_ctor_get(v_date_4141_, 33);
v_X_5650_ = lean_ctor_get(v_date_4141_, 34);
v_x_5651_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5652_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5660_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5660_ == 0)
{
lean_object* v_unused_5661_; 
v_unused_5661_ = lean_ctor_get(v_date_4141_, 29);
lean_dec(v_unused_5661_);
v___x_5654_ = v_date_4141_;
v_isShared_5655_ = v_isSharedCheck_5660_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_Z_5652_);
lean_inc(v_x_5651_);
lean_inc(v_X_5650_);
lean_inc(v_O_5649_);
lean_inc(v_v_5648_);
lean_inc(v_zabbrev_5647_);
lean_inc(v_z_5646_);
lean_inc(v_N_5645_);
lean_inc(v_n_5644_);
lean_inc(v_A_5643_);
lean_inc(v_S_5642_);
lean_inc(v_s_5641_);
lean_inc(v_m_5640_);
lean_inc(v_H_5639_);
lean_inc(v_k_5638_);
lean_inc(v_K_5637_);
lean_inc(v_h_5636_);
lean_inc(v_B_5635_);
lean_inc(v_b_5634_);
lean_inc(v_a_5633_);
lean_inc(v_F_5632_);
lean_inc(v_c_5631_);
lean_inc(v_e_5630_);
lean_inc(v_E_5629_);
lean_inc(v_W_5628_);
lean_inc(v_w_5627_);
lean_inc(v_q_5626_);
lean_inc(v_Q_5625_);
lean_inc(v_d_5624_);
lean_inc(v_L_5623_);
lean_inc(v_M_5622_);
lean_inc(v_D_5621_);
lean_inc(v_Y_5620_);
lean_inc(v_u_5619_);
lean_inc(v_y_5618_);
lean_inc(v_G_5617_);
lean_dec(v_date_4141_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5660_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___x_5656_; lean_object* v___x_5658_; 
v___x_5656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5656_, 0, v_data_4143_);
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 29, v___x_5656_);
v___x_5658_ = v___x_5654_;
goto v_reusejp_5657_;
}
else
{
lean_object* v_reuseFailAlloc_5659_; 
v_reuseFailAlloc_5659_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5659_, 0, v_G_5617_);
lean_ctor_set(v_reuseFailAlloc_5659_, 1, v_y_5618_);
lean_ctor_set(v_reuseFailAlloc_5659_, 2, v_u_5619_);
lean_ctor_set(v_reuseFailAlloc_5659_, 3, v_Y_5620_);
lean_ctor_set(v_reuseFailAlloc_5659_, 4, v_D_5621_);
lean_ctor_set(v_reuseFailAlloc_5659_, 5, v_M_5622_);
lean_ctor_set(v_reuseFailAlloc_5659_, 6, v_L_5623_);
lean_ctor_set(v_reuseFailAlloc_5659_, 7, v_d_5624_);
lean_ctor_set(v_reuseFailAlloc_5659_, 8, v_Q_5625_);
lean_ctor_set(v_reuseFailAlloc_5659_, 9, v_q_5626_);
lean_ctor_set(v_reuseFailAlloc_5659_, 10, v_w_5627_);
lean_ctor_set(v_reuseFailAlloc_5659_, 11, v_W_5628_);
lean_ctor_set(v_reuseFailAlloc_5659_, 12, v_E_5629_);
lean_ctor_set(v_reuseFailAlloc_5659_, 13, v_e_5630_);
lean_ctor_set(v_reuseFailAlloc_5659_, 14, v_c_5631_);
lean_ctor_set(v_reuseFailAlloc_5659_, 15, v_F_5632_);
lean_ctor_set(v_reuseFailAlloc_5659_, 16, v_a_5633_);
lean_ctor_set(v_reuseFailAlloc_5659_, 17, v_b_5634_);
lean_ctor_set(v_reuseFailAlloc_5659_, 18, v_B_5635_);
lean_ctor_set(v_reuseFailAlloc_5659_, 19, v_h_5636_);
lean_ctor_set(v_reuseFailAlloc_5659_, 20, v_K_5637_);
lean_ctor_set(v_reuseFailAlloc_5659_, 21, v_k_5638_);
lean_ctor_set(v_reuseFailAlloc_5659_, 22, v_H_5639_);
lean_ctor_set(v_reuseFailAlloc_5659_, 23, v_m_5640_);
lean_ctor_set(v_reuseFailAlloc_5659_, 24, v_s_5641_);
lean_ctor_set(v_reuseFailAlloc_5659_, 25, v_S_5642_);
lean_ctor_set(v_reuseFailAlloc_5659_, 26, v_A_5643_);
lean_ctor_set(v_reuseFailAlloc_5659_, 27, v_n_5644_);
lean_ctor_set(v_reuseFailAlloc_5659_, 28, v_N_5645_);
lean_ctor_set(v_reuseFailAlloc_5659_, 29, v___x_5656_);
lean_ctor_set(v_reuseFailAlloc_5659_, 30, v_z_5646_);
lean_ctor_set(v_reuseFailAlloc_5659_, 31, v_zabbrev_5647_);
lean_ctor_set(v_reuseFailAlloc_5659_, 32, v_v_5648_);
lean_ctor_set(v_reuseFailAlloc_5659_, 33, v_O_5649_);
lean_ctor_set(v_reuseFailAlloc_5659_, 34, v_X_5650_);
lean_ctor_set(v_reuseFailAlloc_5659_, 35, v_x_5651_);
lean_ctor_set(v_reuseFailAlloc_5659_, 36, v_Z_5652_);
v___x_5658_ = v_reuseFailAlloc_5659_;
goto v_reusejp_5657_;
}
v_reusejp_5657_:
{
return v___x_5658_;
}
}
}
case 30:
{
uint8_t v_presentation_5662_; 
v_presentation_5662_ = lean_ctor_get_uint8(v_modifier_4142_, 0);
lean_dec_ref_known(v_modifier_4142_, 0);
if (v_presentation_5662_ == 0)
{
lean_object* v_G_5663_; lean_object* v_y_5664_; lean_object* v_u_5665_; lean_object* v_Y_5666_; lean_object* v_D_5667_; lean_object* v_M_5668_; lean_object* v_L_5669_; lean_object* v_d_5670_; lean_object* v_Q_5671_; lean_object* v_q_5672_; lean_object* v_w_5673_; lean_object* v_W_5674_; lean_object* v_E_5675_; lean_object* v_e_5676_; lean_object* v_c_5677_; lean_object* v_F_5678_; lean_object* v_a_5679_; lean_object* v_b_5680_; lean_object* v_B_5681_; lean_object* v_h_5682_; lean_object* v_K_5683_; lean_object* v_k_5684_; lean_object* v_H_5685_; lean_object* v_m_5686_; lean_object* v_s_5687_; lean_object* v_S_5688_; lean_object* v_A_5689_; lean_object* v_n_5690_; lean_object* v_N_5691_; lean_object* v_V_5692_; lean_object* v_z_5693_; lean_object* v_v_5694_; lean_object* v_O_5695_; lean_object* v_X_5696_; lean_object* v_x_5697_; lean_object* v_Z_5698_; lean_object* v___x_5700_; uint8_t v_isShared_5701_; uint8_t v_isSharedCheck_5706_; 
v_G_5663_ = lean_ctor_get(v_date_4141_, 0);
v_y_5664_ = lean_ctor_get(v_date_4141_, 1);
v_u_5665_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5666_ = lean_ctor_get(v_date_4141_, 3);
v_D_5667_ = lean_ctor_get(v_date_4141_, 4);
v_M_5668_ = lean_ctor_get(v_date_4141_, 5);
v_L_5669_ = lean_ctor_get(v_date_4141_, 6);
v_d_5670_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5671_ = lean_ctor_get(v_date_4141_, 8);
v_q_5672_ = lean_ctor_get(v_date_4141_, 9);
v_w_5673_ = lean_ctor_get(v_date_4141_, 10);
v_W_5674_ = lean_ctor_get(v_date_4141_, 11);
v_E_5675_ = lean_ctor_get(v_date_4141_, 12);
v_e_5676_ = lean_ctor_get(v_date_4141_, 13);
v_c_5677_ = lean_ctor_get(v_date_4141_, 14);
v_F_5678_ = lean_ctor_get(v_date_4141_, 15);
v_a_5679_ = lean_ctor_get(v_date_4141_, 16);
v_b_5680_ = lean_ctor_get(v_date_4141_, 17);
v_B_5681_ = lean_ctor_get(v_date_4141_, 18);
v_h_5682_ = lean_ctor_get(v_date_4141_, 19);
v_K_5683_ = lean_ctor_get(v_date_4141_, 20);
v_k_5684_ = lean_ctor_get(v_date_4141_, 21);
v_H_5685_ = lean_ctor_get(v_date_4141_, 22);
v_m_5686_ = lean_ctor_get(v_date_4141_, 23);
v_s_5687_ = lean_ctor_get(v_date_4141_, 24);
v_S_5688_ = lean_ctor_get(v_date_4141_, 25);
v_A_5689_ = lean_ctor_get(v_date_4141_, 26);
v_n_5690_ = lean_ctor_get(v_date_4141_, 27);
v_N_5691_ = lean_ctor_get(v_date_4141_, 28);
v_V_5692_ = lean_ctor_get(v_date_4141_, 29);
v_z_5693_ = lean_ctor_get(v_date_4141_, 30);
v_v_5694_ = lean_ctor_get(v_date_4141_, 32);
v_O_5695_ = lean_ctor_get(v_date_4141_, 33);
v_X_5696_ = lean_ctor_get(v_date_4141_, 34);
v_x_5697_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5698_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5706_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5706_ == 0)
{
lean_object* v_unused_5707_; 
v_unused_5707_ = lean_ctor_get(v_date_4141_, 31);
lean_dec(v_unused_5707_);
v___x_5700_ = v_date_4141_;
v_isShared_5701_ = v_isSharedCheck_5706_;
goto v_resetjp_5699_;
}
else
{
lean_inc(v_Z_5698_);
lean_inc(v_x_5697_);
lean_inc(v_X_5696_);
lean_inc(v_O_5695_);
lean_inc(v_v_5694_);
lean_inc(v_z_5693_);
lean_inc(v_V_5692_);
lean_inc(v_N_5691_);
lean_inc(v_n_5690_);
lean_inc(v_A_5689_);
lean_inc(v_S_5688_);
lean_inc(v_s_5687_);
lean_inc(v_m_5686_);
lean_inc(v_H_5685_);
lean_inc(v_k_5684_);
lean_inc(v_K_5683_);
lean_inc(v_h_5682_);
lean_inc(v_B_5681_);
lean_inc(v_b_5680_);
lean_inc(v_a_5679_);
lean_inc(v_F_5678_);
lean_inc(v_c_5677_);
lean_inc(v_e_5676_);
lean_inc(v_E_5675_);
lean_inc(v_W_5674_);
lean_inc(v_w_5673_);
lean_inc(v_q_5672_);
lean_inc(v_Q_5671_);
lean_inc(v_d_5670_);
lean_inc(v_L_5669_);
lean_inc(v_M_5668_);
lean_inc(v_D_5667_);
lean_inc(v_Y_5666_);
lean_inc(v_u_5665_);
lean_inc(v_y_5664_);
lean_inc(v_G_5663_);
lean_dec(v_date_4141_);
v___x_5700_ = lean_box(0);
v_isShared_5701_ = v_isSharedCheck_5706_;
goto v_resetjp_5699_;
}
v_resetjp_5699_:
{
lean_object* v___x_5702_; lean_object* v___x_5704_; 
v___x_5702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5702_, 0, v_data_4143_);
if (v_isShared_5701_ == 0)
{
lean_ctor_set(v___x_5700_, 31, v___x_5702_);
v___x_5704_ = v___x_5700_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v_G_5663_);
lean_ctor_set(v_reuseFailAlloc_5705_, 1, v_y_5664_);
lean_ctor_set(v_reuseFailAlloc_5705_, 2, v_u_5665_);
lean_ctor_set(v_reuseFailAlloc_5705_, 3, v_Y_5666_);
lean_ctor_set(v_reuseFailAlloc_5705_, 4, v_D_5667_);
lean_ctor_set(v_reuseFailAlloc_5705_, 5, v_M_5668_);
lean_ctor_set(v_reuseFailAlloc_5705_, 6, v_L_5669_);
lean_ctor_set(v_reuseFailAlloc_5705_, 7, v_d_5670_);
lean_ctor_set(v_reuseFailAlloc_5705_, 8, v_Q_5671_);
lean_ctor_set(v_reuseFailAlloc_5705_, 9, v_q_5672_);
lean_ctor_set(v_reuseFailAlloc_5705_, 10, v_w_5673_);
lean_ctor_set(v_reuseFailAlloc_5705_, 11, v_W_5674_);
lean_ctor_set(v_reuseFailAlloc_5705_, 12, v_E_5675_);
lean_ctor_set(v_reuseFailAlloc_5705_, 13, v_e_5676_);
lean_ctor_set(v_reuseFailAlloc_5705_, 14, v_c_5677_);
lean_ctor_set(v_reuseFailAlloc_5705_, 15, v_F_5678_);
lean_ctor_set(v_reuseFailAlloc_5705_, 16, v_a_5679_);
lean_ctor_set(v_reuseFailAlloc_5705_, 17, v_b_5680_);
lean_ctor_set(v_reuseFailAlloc_5705_, 18, v_B_5681_);
lean_ctor_set(v_reuseFailAlloc_5705_, 19, v_h_5682_);
lean_ctor_set(v_reuseFailAlloc_5705_, 20, v_K_5683_);
lean_ctor_set(v_reuseFailAlloc_5705_, 21, v_k_5684_);
lean_ctor_set(v_reuseFailAlloc_5705_, 22, v_H_5685_);
lean_ctor_set(v_reuseFailAlloc_5705_, 23, v_m_5686_);
lean_ctor_set(v_reuseFailAlloc_5705_, 24, v_s_5687_);
lean_ctor_set(v_reuseFailAlloc_5705_, 25, v_S_5688_);
lean_ctor_set(v_reuseFailAlloc_5705_, 26, v_A_5689_);
lean_ctor_set(v_reuseFailAlloc_5705_, 27, v_n_5690_);
lean_ctor_set(v_reuseFailAlloc_5705_, 28, v_N_5691_);
lean_ctor_set(v_reuseFailAlloc_5705_, 29, v_V_5692_);
lean_ctor_set(v_reuseFailAlloc_5705_, 30, v_z_5693_);
lean_ctor_set(v_reuseFailAlloc_5705_, 31, v___x_5702_);
lean_ctor_set(v_reuseFailAlloc_5705_, 32, v_v_5694_);
lean_ctor_set(v_reuseFailAlloc_5705_, 33, v_O_5695_);
lean_ctor_set(v_reuseFailAlloc_5705_, 34, v_X_5696_);
lean_ctor_set(v_reuseFailAlloc_5705_, 35, v_x_5697_);
lean_ctor_set(v_reuseFailAlloc_5705_, 36, v_Z_5698_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
}
else
{
lean_object* v_G_5708_; lean_object* v_y_5709_; lean_object* v_u_5710_; lean_object* v_Y_5711_; lean_object* v_D_5712_; lean_object* v_M_5713_; lean_object* v_L_5714_; lean_object* v_d_5715_; lean_object* v_Q_5716_; lean_object* v_q_5717_; lean_object* v_w_5718_; lean_object* v_W_5719_; lean_object* v_E_5720_; lean_object* v_e_5721_; lean_object* v_c_5722_; lean_object* v_F_5723_; lean_object* v_a_5724_; lean_object* v_b_5725_; lean_object* v_B_5726_; lean_object* v_h_5727_; lean_object* v_K_5728_; lean_object* v_k_5729_; lean_object* v_H_5730_; lean_object* v_m_5731_; lean_object* v_s_5732_; lean_object* v_S_5733_; lean_object* v_A_5734_; lean_object* v_n_5735_; lean_object* v_N_5736_; lean_object* v_V_5737_; lean_object* v_zabbrev_5738_; lean_object* v_v_5739_; lean_object* v_O_5740_; lean_object* v_X_5741_; lean_object* v_x_5742_; lean_object* v_Z_5743_; lean_object* v___x_5745_; uint8_t v_isShared_5746_; uint8_t v_isSharedCheck_5751_; 
v_G_5708_ = lean_ctor_get(v_date_4141_, 0);
v_y_5709_ = lean_ctor_get(v_date_4141_, 1);
v_u_5710_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5711_ = lean_ctor_get(v_date_4141_, 3);
v_D_5712_ = lean_ctor_get(v_date_4141_, 4);
v_M_5713_ = lean_ctor_get(v_date_4141_, 5);
v_L_5714_ = lean_ctor_get(v_date_4141_, 6);
v_d_5715_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5716_ = lean_ctor_get(v_date_4141_, 8);
v_q_5717_ = lean_ctor_get(v_date_4141_, 9);
v_w_5718_ = lean_ctor_get(v_date_4141_, 10);
v_W_5719_ = lean_ctor_get(v_date_4141_, 11);
v_E_5720_ = lean_ctor_get(v_date_4141_, 12);
v_e_5721_ = lean_ctor_get(v_date_4141_, 13);
v_c_5722_ = lean_ctor_get(v_date_4141_, 14);
v_F_5723_ = lean_ctor_get(v_date_4141_, 15);
v_a_5724_ = lean_ctor_get(v_date_4141_, 16);
v_b_5725_ = lean_ctor_get(v_date_4141_, 17);
v_B_5726_ = lean_ctor_get(v_date_4141_, 18);
v_h_5727_ = lean_ctor_get(v_date_4141_, 19);
v_K_5728_ = lean_ctor_get(v_date_4141_, 20);
v_k_5729_ = lean_ctor_get(v_date_4141_, 21);
v_H_5730_ = lean_ctor_get(v_date_4141_, 22);
v_m_5731_ = lean_ctor_get(v_date_4141_, 23);
v_s_5732_ = lean_ctor_get(v_date_4141_, 24);
v_S_5733_ = lean_ctor_get(v_date_4141_, 25);
v_A_5734_ = lean_ctor_get(v_date_4141_, 26);
v_n_5735_ = lean_ctor_get(v_date_4141_, 27);
v_N_5736_ = lean_ctor_get(v_date_4141_, 28);
v_V_5737_ = lean_ctor_get(v_date_4141_, 29);
v_zabbrev_5738_ = lean_ctor_get(v_date_4141_, 31);
v_v_5739_ = lean_ctor_get(v_date_4141_, 32);
v_O_5740_ = lean_ctor_get(v_date_4141_, 33);
v_X_5741_ = lean_ctor_get(v_date_4141_, 34);
v_x_5742_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5743_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5751_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5751_ == 0)
{
lean_object* v_unused_5752_; 
v_unused_5752_ = lean_ctor_get(v_date_4141_, 30);
lean_dec(v_unused_5752_);
v___x_5745_ = v_date_4141_;
v_isShared_5746_ = v_isSharedCheck_5751_;
goto v_resetjp_5744_;
}
else
{
lean_inc(v_Z_5743_);
lean_inc(v_x_5742_);
lean_inc(v_X_5741_);
lean_inc(v_O_5740_);
lean_inc(v_v_5739_);
lean_inc(v_zabbrev_5738_);
lean_inc(v_V_5737_);
lean_inc(v_N_5736_);
lean_inc(v_n_5735_);
lean_inc(v_A_5734_);
lean_inc(v_S_5733_);
lean_inc(v_s_5732_);
lean_inc(v_m_5731_);
lean_inc(v_H_5730_);
lean_inc(v_k_5729_);
lean_inc(v_K_5728_);
lean_inc(v_h_5727_);
lean_inc(v_B_5726_);
lean_inc(v_b_5725_);
lean_inc(v_a_5724_);
lean_inc(v_F_5723_);
lean_inc(v_c_5722_);
lean_inc(v_e_5721_);
lean_inc(v_E_5720_);
lean_inc(v_W_5719_);
lean_inc(v_w_5718_);
lean_inc(v_q_5717_);
lean_inc(v_Q_5716_);
lean_inc(v_d_5715_);
lean_inc(v_L_5714_);
lean_inc(v_M_5713_);
lean_inc(v_D_5712_);
lean_inc(v_Y_5711_);
lean_inc(v_u_5710_);
lean_inc(v_y_5709_);
lean_inc(v_G_5708_);
lean_dec(v_date_4141_);
v___x_5745_ = lean_box(0);
v_isShared_5746_ = v_isSharedCheck_5751_;
goto v_resetjp_5744_;
}
v_resetjp_5744_:
{
lean_object* v___x_5747_; lean_object* v___x_5749_; 
v___x_5747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5747_, 0, v_data_4143_);
if (v_isShared_5746_ == 0)
{
lean_ctor_set(v___x_5745_, 30, v___x_5747_);
v___x_5749_ = v___x_5745_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_G_5708_);
lean_ctor_set(v_reuseFailAlloc_5750_, 1, v_y_5709_);
lean_ctor_set(v_reuseFailAlloc_5750_, 2, v_u_5710_);
lean_ctor_set(v_reuseFailAlloc_5750_, 3, v_Y_5711_);
lean_ctor_set(v_reuseFailAlloc_5750_, 4, v_D_5712_);
lean_ctor_set(v_reuseFailAlloc_5750_, 5, v_M_5713_);
lean_ctor_set(v_reuseFailAlloc_5750_, 6, v_L_5714_);
lean_ctor_set(v_reuseFailAlloc_5750_, 7, v_d_5715_);
lean_ctor_set(v_reuseFailAlloc_5750_, 8, v_Q_5716_);
lean_ctor_set(v_reuseFailAlloc_5750_, 9, v_q_5717_);
lean_ctor_set(v_reuseFailAlloc_5750_, 10, v_w_5718_);
lean_ctor_set(v_reuseFailAlloc_5750_, 11, v_W_5719_);
lean_ctor_set(v_reuseFailAlloc_5750_, 12, v_E_5720_);
lean_ctor_set(v_reuseFailAlloc_5750_, 13, v_e_5721_);
lean_ctor_set(v_reuseFailAlloc_5750_, 14, v_c_5722_);
lean_ctor_set(v_reuseFailAlloc_5750_, 15, v_F_5723_);
lean_ctor_set(v_reuseFailAlloc_5750_, 16, v_a_5724_);
lean_ctor_set(v_reuseFailAlloc_5750_, 17, v_b_5725_);
lean_ctor_set(v_reuseFailAlloc_5750_, 18, v_B_5726_);
lean_ctor_set(v_reuseFailAlloc_5750_, 19, v_h_5727_);
lean_ctor_set(v_reuseFailAlloc_5750_, 20, v_K_5728_);
lean_ctor_set(v_reuseFailAlloc_5750_, 21, v_k_5729_);
lean_ctor_set(v_reuseFailAlloc_5750_, 22, v_H_5730_);
lean_ctor_set(v_reuseFailAlloc_5750_, 23, v_m_5731_);
lean_ctor_set(v_reuseFailAlloc_5750_, 24, v_s_5732_);
lean_ctor_set(v_reuseFailAlloc_5750_, 25, v_S_5733_);
lean_ctor_set(v_reuseFailAlloc_5750_, 26, v_A_5734_);
lean_ctor_set(v_reuseFailAlloc_5750_, 27, v_n_5735_);
lean_ctor_set(v_reuseFailAlloc_5750_, 28, v_N_5736_);
lean_ctor_set(v_reuseFailAlloc_5750_, 29, v_V_5737_);
lean_ctor_set(v_reuseFailAlloc_5750_, 30, v___x_5747_);
lean_ctor_set(v_reuseFailAlloc_5750_, 31, v_zabbrev_5738_);
lean_ctor_set(v_reuseFailAlloc_5750_, 32, v_v_5739_);
lean_ctor_set(v_reuseFailAlloc_5750_, 33, v_O_5740_);
lean_ctor_set(v_reuseFailAlloc_5750_, 34, v_X_5741_);
lean_ctor_set(v_reuseFailAlloc_5750_, 35, v_x_5742_);
lean_ctor_set(v_reuseFailAlloc_5750_, 36, v_Z_5743_);
v___x_5749_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
return v___x_5749_;
}
}
}
}
case 31:
{
uint8_t v_presentation_5753_; 
v_presentation_5753_ = lean_ctor_get_uint8(v_modifier_4142_, 0);
lean_dec_ref_known(v_modifier_4142_, 0);
if (v_presentation_5753_ == 0)
{
lean_object* v_G_5754_; lean_object* v_y_5755_; lean_object* v_u_5756_; lean_object* v_Y_5757_; lean_object* v_D_5758_; lean_object* v_M_5759_; lean_object* v_L_5760_; lean_object* v_d_5761_; lean_object* v_Q_5762_; lean_object* v_q_5763_; lean_object* v_w_5764_; lean_object* v_W_5765_; lean_object* v_E_5766_; lean_object* v_e_5767_; lean_object* v_c_5768_; lean_object* v_F_5769_; lean_object* v_a_5770_; lean_object* v_b_5771_; lean_object* v_B_5772_; lean_object* v_h_5773_; lean_object* v_K_5774_; lean_object* v_k_5775_; lean_object* v_H_5776_; lean_object* v_m_5777_; lean_object* v_s_5778_; lean_object* v_S_5779_; lean_object* v_A_5780_; lean_object* v_n_5781_; lean_object* v_N_5782_; lean_object* v_V_5783_; lean_object* v_z_5784_; lean_object* v_v_5785_; lean_object* v_O_5786_; lean_object* v_X_5787_; lean_object* v_x_5788_; lean_object* v_Z_5789_; lean_object* v___x_5791_; uint8_t v_isShared_5792_; uint8_t v_isSharedCheck_5797_; 
v_G_5754_ = lean_ctor_get(v_date_4141_, 0);
v_y_5755_ = lean_ctor_get(v_date_4141_, 1);
v_u_5756_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5757_ = lean_ctor_get(v_date_4141_, 3);
v_D_5758_ = lean_ctor_get(v_date_4141_, 4);
v_M_5759_ = lean_ctor_get(v_date_4141_, 5);
v_L_5760_ = lean_ctor_get(v_date_4141_, 6);
v_d_5761_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5762_ = lean_ctor_get(v_date_4141_, 8);
v_q_5763_ = lean_ctor_get(v_date_4141_, 9);
v_w_5764_ = lean_ctor_get(v_date_4141_, 10);
v_W_5765_ = lean_ctor_get(v_date_4141_, 11);
v_E_5766_ = lean_ctor_get(v_date_4141_, 12);
v_e_5767_ = lean_ctor_get(v_date_4141_, 13);
v_c_5768_ = lean_ctor_get(v_date_4141_, 14);
v_F_5769_ = lean_ctor_get(v_date_4141_, 15);
v_a_5770_ = lean_ctor_get(v_date_4141_, 16);
v_b_5771_ = lean_ctor_get(v_date_4141_, 17);
v_B_5772_ = lean_ctor_get(v_date_4141_, 18);
v_h_5773_ = lean_ctor_get(v_date_4141_, 19);
v_K_5774_ = lean_ctor_get(v_date_4141_, 20);
v_k_5775_ = lean_ctor_get(v_date_4141_, 21);
v_H_5776_ = lean_ctor_get(v_date_4141_, 22);
v_m_5777_ = lean_ctor_get(v_date_4141_, 23);
v_s_5778_ = lean_ctor_get(v_date_4141_, 24);
v_S_5779_ = lean_ctor_get(v_date_4141_, 25);
v_A_5780_ = lean_ctor_get(v_date_4141_, 26);
v_n_5781_ = lean_ctor_get(v_date_4141_, 27);
v_N_5782_ = lean_ctor_get(v_date_4141_, 28);
v_V_5783_ = lean_ctor_get(v_date_4141_, 29);
v_z_5784_ = lean_ctor_get(v_date_4141_, 30);
v_v_5785_ = lean_ctor_get(v_date_4141_, 32);
v_O_5786_ = lean_ctor_get(v_date_4141_, 33);
v_X_5787_ = lean_ctor_get(v_date_4141_, 34);
v_x_5788_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5789_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5797_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5797_ == 0)
{
lean_object* v_unused_5798_; 
v_unused_5798_ = lean_ctor_get(v_date_4141_, 31);
lean_dec(v_unused_5798_);
v___x_5791_ = v_date_4141_;
v_isShared_5792_ = v_isSharedCheck_5797_;
goto v_resetjp_5790_;
}
else
{
lean_inc(v_Z_5789_);
lean_inc(v_x_5788_);
lean_inc(v_X_5787_);
lean_inc(v_O_5786_);
lean_inc(v_v_5785_);
lean_inc(v_z_5784_);
lean_inc(v_V_5783_);
lean_inc(v_N_5782_);
lean_inc(v_n_5781_);
lean_inc(v_A_5780_);
lean_inc(v_S_5779_);
lean_inc(v_s_5778_);
lean_inc(v_m_5777_);
lean_inc(v_H_5776_);
lean_inc(v_k_5775_);
lean_inc(v_K_5774_);
lean_inc(v_h_5773_);
lean_inc(v_B_5772_);
lean_inc(v_b_5771_);
lean_inc(v_a_5770_);
lean_inc(v_F_5769_);
lean_inc(v_c_5768_);
lean_inc(v_e_5767_);
lean_inc(v_E_5766_);
lean_inc(v_W_5765_);
lean_inc(v_w_5764_);
lean_inc(v_q_5763_);
lean_inc(v_Q_5762_);
lean_inc(v_d_5761_);
lean_inc(v_L_5760_);
lean_inc(v_M_5759_);
lean_inc(v_D_5758_);
lean_inc(v_Y_5757_);
lean_inc(v_u_5756_);
lean_inc(v_y_5755_);
lean_inc(v_G_5754_);
lean_dec(v_date_4141_);
v___x_5791_ = lean_box(0);
v_isShared_5792_ = v_isSharedCheck_5797_;
goto v_resetjp_5790_;
}
v_resetjp_5790_:
{
lean_object* v___x_5793_; lean_object* v___x_5795_; 
v___x_5793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5793_, 0, v_data_4143_);
if (v_isShared_5792_ == 0)
{
lean_ctor_set(v___x_5791_, 31, v___x_5793_);
v___x_5795_ = v___x_5791_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5796_; 
v_reuseFailAlloc_5796_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5796_, 0, v_G_5754_);
lean_ctor_set(v_reuseFailAlloc_5796_, 1, v_y_5755_);
lean_ctor_set(v_reuseFailAlloc_5796_, 2, v_u_5756_);
lean_ctor_set(v_reuseFailAlloc_5796_, 3, v_Y_5757_);
lean_ctor_set(v_reuseFailAlloc_5796_, 4, v_D_5758_);
lean_ctor_set(v_reuseFailAlloc_5796_, 5, v_M_5759_);
lean_ctor_set(v_reuseFailAlloc_5796_, 6, v_L_5760_);
lean_ctor_set(v_reuseFailAlloc_5796_, 7, v_d_5761_);
lean_ctor_set(v_reuseFailAlloc_5796_, 8, v_Q_5762_);
lean_ctor_set(v_reuseFailAlloc_5796_, 9, v_q_5763_);
lean_ctor_set(v_reuseFailAlloc_5796_, 10, v_w_5764_);
lean_ctor_set(v_reuseFailAlloc_5796_, 11, v_W_5765_);
lean_ctor_set(v_reuseFailAlloc_5796_, 12, v_E_5766_);
lean_ctor_set(v_reuseFailAlloc_5796_, 13, v_e_5767_);
lean_ctor_set(v_reuseFailAlloc_5796_, 14, v_c_5768_);
lean_ctor_set(v_reuseFailAlloc_5796_, 15, v_F_5769_);
lean_ctor_set(v_reuseFailAlloc_5796_, 16, v_a_5770_);
lean_ctor_set(v_reuseFailAlloc_5796_, 17, v_b_5771_);
lean_ctor_set(v_reuseFailAlloc_5796_, 18, v_B_5772_);
lean_ctor_set(v_reuseFailAlloc_5796_, 19, v_h_5773_);
lean_ctor_set(v_reuseFailAlloc_5796_, 20, v_K_5774_);
lean_ctor_set(v_reuseFailAlloc_5796_, 21, v_k_5775_);
lean_ctor_set(v_reuseFailAlloc_5796_, 22, v_H_5776_);
lean_ctor_set(v_reuseFailAlloc_5796_, 23, v_m_5777_);
lean_ctor_set(v_reuseFailAlloc_5796_, 24, v_s_5778_);
lean_ctor_set(v_reuseFailAlloc_5796_, 25, v_S_5779_);
lean_ctor_set(v_reuseFailAlloc_5796_, 26, v_A_5780_);
lean_ctor_set(v_reuseFailAlloc_5796_, 27, v_n_5781_);
lean_ctor_set(v_reuseFailAlloc_5796_, 28, v_N_5782_);
lean_ctor_set(v_reuseFailAlloc_5796_, 29, v_V_5783_);
lean_ctor_set(v_reuseFailAlloc_5796_, 30, v_z_5784_);
lean_ctor_set(v_reuseFailAlloc_5796_, 31, v___x_5793_);
lean_ctor_set(v_reuseFailAlloc_5796_, 32, v_v_5785_);
lean_ctor_set(v_reuseFailAlloc_5796_, 33, v_O_5786_);
lean_ctor_set(v_reuseFailAlloc_5796_, 34, v_X_5787_);
lean_ctor_set(v_reuseFailAlloc_5796_, 35, v_x_5788_);
lean_ctor_set(v_reuseFailAlloc_5796_, 36, v_Z_5789_);
v___x_5795_ = v_reuseFailAlloc_5796_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
return v___x_5795_;
}
}
}
else
{
lean_object* v_G_5799_; lean_object* v_y_5800_; lean_object* v_u_5801_; lean_object* v_Y_5802_; lean_object* v_D_5803_; lean_object* v_M_5804_; lean_object* v_L_5805_; lean_object* v_d_5806_; lean_object* v_Q_5807_; lean_object* v_q_5808_; lean_object* v_w_5809_; lean_object* v_W_5810_; lean_object* v_E_5811_; lean_object* v_e_5812_; lean_object* v_c_5813_; lean_object* v_F_5814_; lean_object* v_a_5815_; lean_object* v_b_5816_; lean_object* v_B_5817_; lean_object* v_h_5818_; lean_object* v_K_5819_; lean_object* v_k_5820_; lean_object* v_H_5821_; lean_object* v_m_5822_; lean_object* v_s_5823_; lean_object* v_S_5824_; lean_object* v_A_5825_; lean_object* v_n_5826_; lean_object* v_N_5827_; lean_object* v_V_5828_; lean_object* v_z_5829_; lean_object* v_zabbrev_5830_; lean_object* v_O_5831_; lean_object* v_X_5832_; lean_object* v_x_5833_; lean_object* v_Z_5834_; lean_object* v___x_5836_; uint8_t v_isShared_5837_; uint8_t v_isSharedCheck_5842_; 
v_G_5799_ = lean_ctor_get(v_date_4141_, 0);
v_y_5800_ = lean_ctor_get(v_date_4141_, 1);
v_u_5801_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5802_ = lean_ctor_get(v_date_4141_, 3);
v_D_5803_ = lean_ctor_get(v_date_4141_, 4);
v_M_5804_ = lean_ctor_get(v_date_4141_, 5);
v_L_5805_ = lean_ctor_get(v_date_4141_, 6);
v_d_5806_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5807_ = lean_ctor_get(v_date_4141_, 8);
v_q_5808_ = lean_ctor_get(v_date_4141_, 9);
v_w_5809_ = lean_ctor_get(v_date_4141_, 10);
v_W_5810_ = lean_ctor_get(v_date_4141_, 11);
v_E_5811_ = lean_ctor_get(v_date_4141_, 12);
v_e_5812_ = lean_ctor_get(v_date_4141_, 13);
v_c_5813_ = lean_ctor_get(v_date_4141_, 14);
v_F_5814_ = lean_ctor_get(v_date_4141_, 15);
v_a_5815_ = lean_ctor_get(v_date_4141_, 16);
v_b_5816_ = lean_ctor_get(v_date_4141_, 17);
v_B_5817_ = lean_ctor_get(v_date_4141_, 18);
v_h_5818_ = lean_ctor_get(v_date_4141_, 19);
v_K_5819_ = lean_ctor_get(v_date_4141_, 20);
v_k_5820_ = lean_ctor_get(v_date_4141_, 21);
v_H_5821_ = lean_ctor_get(v_date_4141_, 22);
v_m_5822_ = lean_ctor_get(v_date_4141_, 23);
v_s_5823_ = lean_ctor_get(v_date_4141_, 24);
v_S_5824_ = lean_ctor_get(v_date_4141_, 25);
v_A_5825_ = lean_ctor_get(v_date_4141_, 26);
v_n_5826_ = lean_ctor_get(v_date_4141_, 27);
v_N_5827_ = lean_ctor_get(v_date_4141_, 28);
v_V_5828_ = lean_ctor_get(v_date_4141_, 29);
v_z_5829_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5830_ = lean_ctor_get(v_date_4141_, 31);
v_O_5831_ = lean_ctor_get(v_date_4141_, 33);
v_X_5832_ = lean_ctor_get(v_date_4141_, 34);
v_x_5833_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5834_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5842_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5842_ == 0)
{
lean_object* v_unused_5843_; 
v_unused_5843_ = lean_ctor_get(v_date_4141_, 32);
lean_dec(v_unused_5843_);
v___x_5836_ = v_date_4141_;
v_isShared_5837_ = v_isSharedCheck_5842_;
goto v_resetjp_5835_;
}
else
{
lean_inc(v_Z_5834_);
lean_inc(v_x_5833_);
lean_inc(v_X_5832_);
lean_inc(v_O_5831_);
lean_inc(v_zabbrev_5830_);
lean_inc(v_z_5829_);
lean_inc(v_V_5828_);
lean_inc(v_N_5827_);
lean_inc(v_n_5826_);
lean_inc(v_A_5825_);
lean_inc(v_S_5824_);
lean_inc(v_s_5823_);
lean_inc(v_m_5822_);
lean_inc(v_H_5821_);
lean_inc(v_k_5820_);
lean_inc(v_K_5819_);
lean_inc(v_h_5818_);
lean_inc(v_B_5817_);
lean_inc(v_b_5816_);
lean_inc(v_a_5815_);
lean_inc(v_F_5814_);
lean_inc(v_c_5813_);
lean_inc(v_e_5812_);
lean_inc(v_E_5811_);
lean_inc(v_W_5810_);
lean_inc(v_w_5809_);
lean_inc(v_q_5808_);
lean_inc(v_Q_5807_);
lean_inc(v_d_5806_);
lean_inc(v_L_5805_);
lean_inc(v_M_5804_);
lean_inc(v_D_5803_);
lean_inc(v_Y_5802_);
lean_inc(v_u_5801_);
lean_inc(v_y_5800_);
lean_inc(v_G_5799_);
lean_dec(v_date_4141_);
v___x_5836_ = lean_box(0);
v_isShared_5837_ = v_isSharedCheck_5842_;
goto v_resetjp_5835_;
}
v_resetjp_5835_:
{
lean_object* v___x_5838_; lean_object* v___x_5840_; 
v___x_5838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5838_, 0, v_data_4143_);
if (v_isShared_5837_ == 0)
{
lean_ctor_set(v___x_5836_, 32, v___x_5838_);
v___x_5840_ = v___x_5836_;
goto v_reusejp_5839_;
}
else
{
lean_object* v_reuseFailAlloc_5841_; 
v_reuseFailAlloc_5841_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5841_, 0, v_G_5799_);
lean_ctor_set(v_reuseFailAlloc_5841_, 1, v_y_5800_);
lean_ctor_set(v_reuseFailAlloc_5841_, 2, v_u_5801_);
lean_ctor_set(v_reuseFailAlloc_5841_, 3, v_Y_5802_);
lean_ctor_set(v_reuseFailAlloc_5841_, 4, v_D_5803_);
lean_ctor_set(v_reuseFailAlloc_5841_, 5, v_M_5804_);
lean_ctor_set(v_reuseFailAlloc_5841_, 6, v_L_5805_);
lean_ctor_set(v_reuseFailAlloc_5841_, 7, v_d_5806_);
lean_ctor_set(v_reuseFailAlloc_5841_, 8, v_Q_5807_);
lean_ctor_set(v_reuseFailAlloc_5841_, 9, v_q_5808_);
lean_ctor_set(v_reuseFailAlloc_5841_, 10, v_w_5809_);
lean_ctor_set(v_reuseFailAlloc_5841_, 11, v_W_5810_);
lean_ctor_set(v_reuseFailAlloc_5841_, 12, v_E_5811_);
lean_ctor_set(v_reuseFailAlloc_5841_, 13, v_e_5812_);
lean_ctor_set(v_reuseFailAlloc_5841_, 14, v_c_5813_);
lean_ctor_set(v_reuseFailAlloc_5841_, 15, v_F_5814_);
lean_ctor_set(v_reuseFailAlloc_5841_, 16, v_a_5815_);
lean_ctor_set(v_reuseFailAlloc_5841_, 17, v_b_5816_);
lean_ctor_set(v_reuseFailAlloc_5841_, 18, v_B_5817_);
lean_ctor_set(v_reuseFailAlloc_5841_, 19, v_h_5818_);
lean_ctor_set(v_reuseFailAlloc_5841_, 20, v_K_5819_);
lean_ctor_set(v_reuseFailAlloc_5841_, 21, v_k_5820_);
lean_ctor_set(v_reuseFailAlloc_5841_, 22, v_H_5821_);
lean_ctor_set(v_reuseFailAlloc_5841_, 23, v_m_5822_);
lean_ctor_set(v_reuseFailAlloc_5841_, 24, v_s_5823_);
lean_ctor_set(v_reuseFailAlloc_5841_, 25, v_S_5824_);
lean_ctor_set(v_reuseFailAlloc_5841_, 26, v_A_5825_);
lean_ctor_set(v_reuseFailAlloc_5841_, 27, v_n_5826_);
lean_ctor_set(v_reuseFailAlloc_5841_, 28, v_N_5827_);
lean_ctor_set(v_reuseFailAlloc_5841_, 29, v_V_5828_);
lean_ctor_set(v_reuseFailAlloc_5841_, 30, v_z_5829_);
lean_ctor_set(v_reuseFailAlloc_5841_, 31, v_zabbrev_5830_);
lean_ctor_set(v_reuseFailAlloc_5841_, 32, v___x_5838_);
lean_ctor_set(v_reuseFailAlloc_5841_, 33, v_O_5831_);
lean_ctor_set(v_reuseFailAlloc_5841_, 34, v_X_5832_);
lean_ctor_set(v_reuseFailAlloc_5841_, 35, v_x_5833_);
lean_ctor_set(v_reuseFailAlloc_5841_, 36, v_Z_5834_);
v___x_5840_ = v_reuseFailAlloc_5841_;
goto v_reusejp_5839_;
}
v_reusejp_5839_:
{
return v___x_5840_;
}
}
}
}
case 32:
{
lean_object* v_G_5844_; lean_object* v_y_5845_; lean_object* v_u_5846_; lean_object* v_Y_5847_; lean_object* v_D_5848_; lean_object* v_M_5849_; lean_object* v_L_5850_; lean_object* v_d_5851_; lean_object* v_Q_5852_; lean_object* v_q_5853_; lean_object* v_w_5854_; lean_object* v_W_5855_; lean_object* v_E_5856_; lean_object* v_e_5857_; lean_object* v_c_5858_; lean_object* v_F_5859_; lean_object* v_a_5860_; lean_object* v_b_5861_; lean_object* v_B_5862_; lean_object* v_h_5863_; lean_object* v_K_5864_; lean_object* v_k_5865_; lean_object* v_H_5866_; lean_object* v_m_5867_; lean_object* v_s_5868_; lean_object* v_S_5869_; lean_object* v_A_5870_; lean_object* v_n_5871_; lean_object* v_N_5872_; lean_object* v_V_5873_; lean_object* v_z_5874_; lean_object* v_zabbrev_5875_; lean_object* v_v_5876_; lean_object* v_X_5877_; lean_object* v_x_5878_; lean_object* v_Z_5879_; lean_object* v___x_5881_; uint8_t v_isShared_5882_; uint8_t v_isSharedCheck_5887_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5844_ = lean_ctor_get(v_date_4141_, 0);
v_y_5845_ = lean_ctor_get(v_date_4141_, 1);
v_u_5846_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5847_ = lean_ctor_get(v_date_4141_, 3);
v_D_5848_ = lean_ctor_get(v_date_4141_, 4);
v_M_5849_ = lean_ctor_get(v_date_4141_, 5);
v_L_5850_ = lean_ctor_get(v_date_4141_, 6);
v_d_5851_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5852_ = lean_ctor_get(v_date_4141_, 8);
v_q_5853_ = lean_ctor_get(v_date_4141_, 9);
v_w_5854_ = lean_ctor_get(v_date_4141_, 10);
v_W_5855_ = lean_ctor_get(v_date_4141_, 11);
v_E_5856_ = lean_ctor_get(v_date_4141_, 12);
v_e_5857_ = lean_ctor_get(v_date_4141_, 13);
v_c_5858_ = lean_ctor_get(v_date_4141_, 14);
v_F_5859_ = lean_ctor_get(v_date_4141_, 15);
v_a_5860_ = lean_ctor_get(v_date_4141_, 16);
v_b_5861_ = lean_ctor_get(v_date_4141_, 17);
v_B_5862_ = lean_ctor_get(v_date_4141_, 18);
v_h_5863_ = lean_ctor_get(v_date_4141_, 19);
v_K_5864_ = lean_ctor_get(v_date_4141_, 20);
v_k_5865_ = lean_ctor_get(v_date_4141_, 21);
v_H_5866_ = lean_ctor_get(v_date_4141_, 22);
v_m_5867_ = lean_ctor_get(v_date_4141_, 23);
v_s_5868_ = lean_ctor_get(v_date_4141_, 24);
v_S_5869_ = lean_ctor_get(v_date_4141_, 25);
v_A_5870_ = lean_ctor_get(v_date_4141_, 26);
v_n_5871_ = lean_ctor_get(v_date_4141_, 27);
v_N_5872_ = lean_ctor_get(v_date_4141_, 28);
v_V_5873_ = lean_ctor_get(v_date_4141_, 29);
v_z_5874_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5875_ = lean_ctor_get(v_date_4141_, 31);
v_v_5876_ = lean_ctor_get(v_date_4141_, 32);
v_X_5877_ = lean_ctor_get(v_date_4141_, 34);
v_x_5878_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5879_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5887_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5887_ == 0)
{
lean_object* v_unused_5888_; 
v_unused_5888_ = lean_ctor_get(v_date_4141_, 33);
lean_dec(v_unused_5888_);
v___x_5881_ = v_date_4141_;
v_isShared_5882_ = v_isSharedCheck_5887_;
goto v_resetjp_5880_;
}
else
{
lean_inc(v_Z_5879_);
lean_inc(v_x_5878_);
lean_inc(v_X_5877_);
lean_inc(v_v_5876_);
lean_inc(v_zabbrev_5875_);
lean_inc(v_z_5874_);
lean_inc(v_V_5873_);
lean_inc(v_N_5872_);
lean_inc(v_n_5871_);
lean_inc(v_A_5870_);
lean_inc(v_S_5869_);
lean_inc(v_s_5868_);
lean_inc(v_m_5867_);
lean_inc(v_H_5866_);
lean_inc(v_k_5865_);
lean_inc(v_K_5864_);
lean_inc(v_h_5863_);
lean_inc(v_B_5862_);
lean_inc(v_b_5861_);
lean_inc(v_a_5860_);
lean_inc(v_F_5859_);
lean_inc(v_c_5858_);
lean_inc(v_e_5857_);
lean_inc(v_E_5856_);
lean_inc(v_W_5855_);
lean_inc(v_w_5854_);
lean_inc(v_q_5853_);
lean_inc(v_Q_5852_);
lean_inc(v_d_5851_);
lean_inc(v_L_5850_);
lean_inc(v_M_5849_);
lean_inc(v_D_5848_);
lean_inc(v_Y_5847_);
lean_inc(v_u_5846_);
lean_inc(v_y_5845_);
lean_inc(v_G_5844_);
lean_dec(v_date_4141_);
v___x_5881_ = lean_box(0);
v_isShared_5882_ = v_isSharedCheck_5887_;
goto v_resetjp_5880_;
}
v_resetjp_5880_:
{
lean_object* v___x_5883_; lean_object* v___x_5885_; 
v___x_5883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5883_, 0, v_data_4143_);
if (v_isShared_5882_ == 0)
{
lean_ctor_set(v___x_5881_, 33, v___x_5883_);
v___x_5885_ = v___x_5881_;
goto v_reusejp_5884_;
}
else
{
lean_object* v_reuseFailAlloc_5886_; 
v_reuseFailAlloc_5886_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5886_, 0, v_G_5844_);
lean_ctor_set(v_reuseFailAlloc_5886_, 1, v_y_5845_);
lean_ctor_set(v_reuseFailAlloc_5886_, 2, v_u_5846_);
lean_ctor_set(v_reuseFailAlloc_5886_, 3, v_Y_5847_);
lean_ctor_set(v_reuseFailAlloc_5886_, 4, v_D_5848_);
lean_ctor_set(v_reuseFailAlloc_5886_, 5, v_M_5849_);
lean_ctor_set(v_reuseFailAlloc_5886_, 6, v_L_5850_);
lean_ctor_set(v_reuseFailAlloc_5886_, 7, v_d_5851_);
lean_ctor_set(v_reuseFailAlloc_5886_, 8, v_Q_5852_);
lean_ctor_set(v_reuseFailAlloc_5886_, 9, v_q_5853_);
lean_ctor_set(v_reuseFailAlloc_5886_, 10, v_w_5854_);
lean_ctor_set(v_reuseFailAlloc_5886_, 11, v_W_5855_);
lean_ctor_set(v_reuseFailAlloc_5886_, 12, v_E_5856_);
lean_ctor_set(v_reuseFailAlloc_5886_, 13, v_e_5857_);
lean_ctor_set(v_reuseFailAlloc_5886_, 14, v_c_5858_);
lean_ctor_set(v_reuseFailAlloc_5886_, 15, v_F_5859_);
lean_ctor_set(v_reuseFailAlloc_5886_, 16, v_a_5860_);
lean_ctor_set(v_reuseFailAlloc_5886_, 17, v_b_5861_);
lean_ctor_set(v_reuseFailAlloc_5886_, 18, v_B_5862_);
lean_ctor_set(v_reuseFailAlloc_5886_, 19, v_h_5863_);
lean_ctor_set(v_reuseFailAlloc_5886_, 20, v_K_5864_);
lean_ctor_set(v_reuseFailAlloc_5886_, 21, v_k_5865_);
lean_ctor_set(v_reuseFailAlloc_5886_, 22, v_H_5866_);
lean_ctor_set(v_reuseFailAlloc_5886_, 23, v_m_5867_);
lean_ctor_set(v_reuseFailAlloc_5886_, 24, v_s_5868_);
lean_ctor_set(v_reuseFailAlloc_5886_, 25, v_S_5869_);
lean_ctor_set(v_reuseFailAlloc_5886_, 26, v_A_5870_);
lean_ctor_set(v_reuseFailAlloc_5886_, 27, v_n_5871_);
lean_ctor_set(v_reuseFailAlloc_5886_, 28, v_N_5872_);
lean_ctor_set(v_reuseFailAlloc_5886_, 29, v_V_5873_);
lean_ctor_set(v_reuseFailAlloc_5886_, 30, v_z_5874_);
lean_ctor_set(v_reuseFailAlloc_5886_, 31, v_zabbrev_5875_);
lean_ctor_set(v_reuseFailAlloc_5886_, 32, v_v_5876_);
lean_ctor_set(v_reuseFailAlloc_5886_, 33, v___x_5883_);
lean_ctor_set(v_reuseFailAlloc_5886_, 34, v_X_5877_);
lean_ctor_set(v_reuseFailAlloc_5886_, 35, v_x_5878_);
lean_ctor_set(v_reuseFailAlloc_5886_, 36, v_Z_5879_);
v___x_5885_ = v_reuseFailAlloc_5886_;
goto v_reusejp_5884_;
}
v_reusejp_5884_:
{
return v___x_5885_;
}
}
}
case 33:
{
lean_object* v_G_5889_; lean_object* v_y_5890_; lean_object* v_u_5891_; lean_object* v_Y_5892_; lean_object* v_D_5893_; lean_object* v_M_5894_; lean_object* v_L_5895_; lean_object* v_d_5896_; lean_object* v_Q_5897_; lean_object* v_q_5898_; lean_object* v_w_5899_; lean_object* v_W_5900_; lean_object* v_E_5901_; lean_object* v_e_5902_; lean_object* v_c_5903_; lean_object* v_F_5904_; lean_object* v_a_5905_; lean_object* v_b_5906_; lean_object* v_B_5907_; lean_object* v_h_5908_; lean_object* v_K_5909_; lean_object* v_k_5910_; lean_object* v_H_5911_; lean_object* v_m_5912_; lean_object* v_s_5913_; lean_object* v_S_5914_; lean_object* v_A_5915_; lean_object* v_n_5916_; lean_object* v_N_5917_; lean_object* v_V_5918_; lean_object* v_z_5919_; lean_object* v_zabbrev_5920_; lean_object* v_v_5921_; lean_object* v_O_5922_; lean_object* v_x_5923_; lean_object* v_Z_5924_; lean_object* v___x_5926_; uint8_t v_isShared_5927_; uint8_t v_isSharedCheck_5932_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5889_ = lean_ctor_get(v_date_4141_, 0);
v_y_5890_ = lean_ctor_get(v_date_4141_, 1);
v_u_5891_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5892_ = lean_ctor_get(v_date_4141_, 3);
v_D_5893_ = lean_ctor_get(v_date_4141_, 4);
v_M_5894_ = lean_ctor_get(v_date_4141_, 5);
v_L_5895_ = lean_ctor_get(v_date_4141_, 6);
v_d_5896_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5897_ = lean_ctor_get(v_date_4141_, 8);
v_q_5898_ = lean_ctor_get(v_date_4141_, 9);
v_w_5899_ = lean_ctor_get(v_date_4141_, 10);
v_W_5900_ = lean_ctor_get(v_date_4141_, 11);
v_E_5901_ = lean_ctor_get(v_date_4141_, 12);
v_e_5902_ = lean_ctor_get(v_date_4141_, 13);
v_c_5903_ = lean_ctor_get(v_date_4141_, 14);
v_F_5904_ = lean_ctor_get(v_date_4141_, 15);
v_a_5905_ = lean_ctor_get(v_date_4141_, 16);
v_b_5906_ = lean_ctor_get(v_date_4141_, 17);
v_B_5907_ = lean_ctor_get(v_date_4141_, 18);
v_h_5908_ = lean_ctor_get(v_date_4141_, 19);
v_K_5909_ = lean_ctor_get(v_date_4141_, 20);
v_k_5910_ = lean_ctor_get(v_date_4141_, 21);
v_H_5911_ = lean_ctor_get(v_date_4141_, 22);
v_m_5912_ = lean_ctor_get(v_date_4141_, 23);
v_s_5913_ = lean_ctor_get(v_date_4141_, 24);
v_S_5914_ = lean_ctor_get(v_date_4141_, 25);
v_A_5915_ = lean_ctor_get(v_date_4141_, 26);
v_n_5916_ = lean_ctor_get(v_date_4141_, 27);
v_N_5917_ = lean_ctor_get(v_date_4141_, 28);
v_V_5918_ = lean_ctor_get(v_date_4141_, 29);
v_z_5919_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5920_ = lean_ctor_get(v_date_4141_, 31);
v_v_5921_ = lean_ctor_get(v_date_4141_, 32);
v_O_5922_ = lean_ctor_get(v_date_4141_, 33);
v_x_5923_ = lean_ctor_get(v_date_4141_, 35);
v_Z_5924_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5932_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5932_ == 0)
{
lean_object* v_unused_5933_; 
v_unused_5933_ = lean_ctor_get(v_date_4141_, 34);
lean_dec(v_unused_5933_);
v___x_5926_ = v_date_4141_;
v_isShared_5927_ = v_isSharedCheck_5932_;
goto v_resetjp_5925_;
}
else
{
lean_inc(v_Z_5924_);
lean_inc(v_x_5923_);
lean_inc(v_O_5922_);
lean_inc(v_v_5921_);
lean_inc(v_zabbrev_5920_);
lean_inc(v_z_5919_);
lean_inc(v_V_5918_);
lean_inc(v_N_5917_);
lean_inc(v_n_5916_);
lean_inc(v_A_5915_);
lean_inc(v_S_5914_);
lean_inc(v_s_5913_);
lean_inc(v_m_5912_);
lean_inc(v_H_5911_);
lean_inc(v_k_5910_);
lean_inc(v_K_5909_);
lean_inc(v_h_5908_);
lean_inc(v_B_5907_);
lean_inc(v_b_5906_);
lean_inc(v_a_5905_);
lean_inc(v_F_5904_);
lean_inc(v_c_5903_);
lean_inc(v_e_5902_);
lean_inc(v_E_5901_);
lean_inc(v_W_5900_);
lean_inc(v_w_5899_);
lean_inc(v_q_5898_);
lean_inc(v_Q_5897_);
lean_inc(v_d_5896_);
lean_inc(v_L_5895_);
lean_inc(v_M_5894_);
lean_inc(v_D_5893_);
lean_inc(v_Y_5892_);
lean_inc(v_u_5891_);
lean_inc(v_y_5890_);
lean_inc(v_G_5889_);
lean_dec(v_date_4141_);
v___x_5926_ = lean_box(0);
v_isShared_5927_ = v_isSharedCheck_5932_;
goto v_resetjp_5925_;
}
v_resetjp_5925_:
{
lean_object* v___x_5928_; lean_object* v___x_5930_; 
v___x_5928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5928_, 0, v_data_4143_);
if (v_isShared_5927_ == 0)
{
lean_ctor_set(v___x_5926_, 34, v___x_5928_);
v___x_5930_ = v___x_5926_;
goto v_reusejp_5929_;
}
else
{
lean_object* v_reuseFailAlloc_5931_; 
v_reuseFailAlloc_5931_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5931_, 0, v_G_5889_);
lean_ctor_set(v_reuseFailAlloc_5931_, 1, v_y_5890_);
lean_ctor_set(v_reuseFailAlloc_5931_, 2, v_u_5891_);
lean_ctor_set(v_reuseFailAlloc_5931_, 3, v_Y_5892_);
lean_ctor_set(v_reuseFailAlloc_5931_, 4, v_D_5893_);
lean_ctor_set(v_reuseFailAlloc_5931_, 5, v_M_5894_);
lean_ctor_set(v_reuseFailAlloc_5931_, 6, v_L_5895_);
lean_ctor_set(v_reuseFailAlloc_5931_, 7, v_d_5896_);
lean_ctor_set(v_reuseFailAlloc_5931_, 8, v_Q_5897_);
lean_ctor_set(v_reuseFailAlloc_5931_, 9, v_q_5898_);
lean_ctor_set(v_reuseFailAlloc_5931_, 10, v_w_5899_);
lean_ctor_set(v_reuseFailAlloc_5931_, 11, v_W_5900_);
lean_ctor_set(v_reuseFailAlloc_5931_, 12, v_E_5901_);
lean_ctor_set(v_reuseFailAlloc_5931_, 13, v_e_5902_);
lean_ctor_set(v_reuseFailAlloc_5931_, 14, v_c_5903_);
lean_ctor_set(v_reuseFailAlloc_5931_, 15, v_F_5904_);
lean_ctor_set(v_reuseFailAlloc_5931_, 16, v_a_5905_);
lean_ctor_set(v_reuseFailAlloc_5931_, 17, v_b_5906_);
lean_ctor_set(v_reuseFailAlloc_5931_, 18, v_B_5907_);
lean_ctor_set(v_reuseFailAlloc_5931_, 19, v_h_5908_);
lean_ctor_set(v_reuseFailAlloc_5931_, 20, v_K_5909_);
lean_ctor_set(v_reuseFailAlloc_5931_, 21, v_k_5910_);
lean_ctor_set(v_reuseFailAlloc_5931_, 22, v_H_5911_);
lean_ctor_set(v_reuseFailAlloc_5931_, 23, v_m_5912_);
lean_ctor_set(v_reuseFailAlloc_5931_, 24, v_s_5913_);
lean_ctor_set(v_reuseFailAlloc_5931_, 25, v_S_5914_);
lean_ctor_set(v_reuseFailAlloc_5931_, 26, v_A_5915_);
lean_ctor_set(v_reuseFailAlloc_5931_, 27, v_n_5916_);
lean_ctor_set(v_reuseFailAlloc_5931_, 28, v_N_5917_);
lean_ctor_set(v_reuseFailAlloc_5931_, 29, v_V_5918_);
lean_ctor_set(v_reuseFailAlloc_5931_, 30, v_z_5919_);
lean_ctor_set(v_reuseFailAlloc_5931_, 31, v_zabbrev_5920_);
lean_ctor_set(v_reuseFailAlloc_5931_, 32, v_v_5921_);
lean_ctor_set(v_reuseFailAlloc_5931_, 33, v_O_5922_);
lean_ctor_set(v_reuseFailAlloc_5931_, 34, v___x_5928_);
lean_ctor_set(v_reuseFailAlloc_5931_, 35, v_x_5923_);
lean_ctor_set(v_reuseFailAlloc_5931_, 36, v_Z_5924_);
v___x_5930_ = v_reuseFailAlloc_5931_;
goto v_reusejp_5929_;
}
v_reusejp_5929_:
{
return v___x_5930_;
}
}
}
case 34:
{
lean_object* v_G_5934_; lean_object* v_y_5935_; lean_object* v_u_5936_; lean_object* v_Y_5937_; lean_object* v_D_5938_; lean_object* v_M_5939_; lean_object* v_L_5940_; lean_object* v_d_5941_; lean_object* v_Q_5942_; lean_object* v_q_5943_; lean_object* v_w_5944_; lean_object* v_W_5945_; lean_object* v_E_5946_; lean_object* v_e_5947_; lean_object* v_c_5948_; lean_object* v_F_5949_; lean_object* v_a_5950_; lean_object* v_b_5951_; lean_object* v_B_5952_; lean_object* v_h_5953_; lean_object* v_K_5954_; lean_object* v_k_5955_; lean_object* v_H_5956_; lean_object* v_m_5957_; lean_object* v_s_5958_; lean_object* v_S_5959_; lean_object* v_A_5960_; lean_object* v_n_5961_; lean_object* v_N_5962_; lean_object* v_V_5963_; lean_object* v_z_5964_; lean_object* v_zabbrev_5965_; lean_object* v_v_5966_; lean_object* v_O_5967_; lean_object* v_X_5968_; lean_object* v_Z_5969_; lean_object* v___x_5971_; uint8_t v_isShared_5972_; uint8_t v_isSharedCheck_5977_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5934_ = lean_ctor_get(v_date_4141_, 0);
v_y_5935_ = lean_ctor_get(v_date_4141_, 1);
v_u_5936_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5937_ = lean_ctor_get(v_date_4141_, 3);
v_D_5938_ = lean_ctor_get(v_date_4141_, 4);
v_M_5939_ = lean_ctor_get(v_date_4141_, 5);
v_L_5940_ = lean_ctor_get(v_date_4141_, 6);
v_d_5941_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5942_ = lean_ctor_get(v_date_4141_, 8);
v_q_5943_ = lean_ctor_get(v_date_4141_, 9);
v_w_5944_ = lean_ctor_get(v_date_4141_, 10);
v_W_5945_ = lean_ctor_get(v_date_4141_, 11);
v_E_5946_ = lean_ctor_get(v_date_4141_, 12);
v_e_5947_ = lean_ctor_get(v_date_4141_, 13);
v_c_5948_ = lean_ctor_get(v_date_4141_, 14);
v_F_5949_ = lean_ctor_get(v_date_4141_, 15);
v_a_5950_ = lean_ctor_get(v_date_4141_, 16);
v_b_5951_ = lean_ctor_get(v_date_4141_, 17);
v_B_5952_ = lean_ctor_get(v_date_4141_, 18);
v_h_5953_ = lean_ctor_get(v_date_4141_, 19);
v_K_5954_ = lean_ctor_get(v_date_4141_, 20);
v_k_5955_ = lean_ctor_get(v_date_4141_, 21);
v_H_5956_ = lean_ctor_get(v_date_4141_, 22);
v_m_5957_ = lean_ctor_get(v_date_4141_, 23);
v_s_5958_ = lean_ctor_get(v_date_4141_, 24);
v_S_5959_ = lean_ctor_get(v_date_4141_, 25);
v_A_5960_ = lean_ctor_get(v_date_4141_, 26);
v_n_5961_ = lean_ctor_get(v_date_4141_, 27);
v_N_5962_ = lean_ctor_get(v_date_4141_, 28);
v_V_5963_ = lean_ctor_get(v_date_4141_, 29);
v_z_5964_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_5965_ = lean_ctor_get(v_date_4141_, 31);
v_v_5966_ = lean_ctor_get(v_date_4141_, 32);
v_O_5967_ = lean_ctor_get(v_date_4141_, 33);
v_X_5968_ = lean_ctor_get(v_date_4141_, 34);
v_Z_5969_ = lean_ctor_get(v_date_4141_, 36);
v_isSharedCheck_5977_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_5977_ == 0)
{
lean_object* v_unused_5978_; 
v_unused_5978_ = lean_ctor_get(v_date_4141_, 35);
lean_dec(v_unused_5978_);
v___x_5971_ = v_date_4141_;
v_isShared_5972_ = v_isSharedCheck_5977_;
goto v_resetjp_5970_;
}
else
{
lean_inc(v_Z_5969_);
lean_inc(v_X_5968_);
lean_inc(v_O_5967_);
lean_inc(v_v_5966_);
lean_inc(v_zabbrev_5965_);
lean_inc(v_z_5964_);
lean_inc(v_V_5963_);
lean_inc(v_N_5962_);
lean_inc(v_n_5961_);
lean_inc(v_A_5960_);
lean_inc(v_S_5959_);
lean_inc(v_s_5958_);
lean_inc(v_m_5957_);
lean_inc(v_H_5956_);
lean_inc(v_k_5955_);
lean_inc(v_K_5954_);
lean_inc(v_h_5953_);
lean_inc(v_B_5952_);
lean_inc(v_b_5951_);
lean_inc(v_a_5950_);
lean_inc(v_F_5949_);
lean_inc(v_c_5948_);
lean_inc(v_e_5947_);
lean_inc(v_E_5946_);
lean_inc(v_W_5945_);
lean_inc(v_w_5944_);
lean_inc(v_q_5943_);
lean_inc(v_Q_5942_);
lean_inc(v_d_5941_);
lean_inc(v_L_5940_);
lean_inc(v_M_5939_);
lean_inc(v_D_5938_);
lean_inc(v_Y_5937_);
lean_inc(v_u_5936_);
lean_inc(v_y_5935_);
lean_inc(v_G_5934_);
lean_dec(v_date_4141_);
v___x_5971_ = lean_box(0);
v_isShared_5972_ = v_isSharedCheck_5977_;
goto v_resetjp_5970_;
}
v_resetjp_5970_:
{
lean_object* v___x_5973_; lean_object* v___x_5975_; 
v___x_5973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5973_, 0, v_data_4143_);
if (v_isShared_5972_ == 0)
{
lean_ctor_set(v___x_5971_, 35, v___x_5973_);
v___x_5975_ = v___x_5971_;
goto v_reusejp_5974_;
}
else
{
lean_object* v_reuseFailAlloc_5976_; 
v_reuseFailAlloc_5976_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5976_, 0, v_G_5934_);
lean_ctor_set(v_reuseFailAlloc_5976_, 1, v_y_5935_);
lean_ctor_set(v_reuseFailAlloc_5976_, 2, v_u_5936_);
lean_ctor_set(v_reuseFailAlloc_5976_, 3, v_Y_5937_);
lean_ctor_set(v_reuseFailAlloc_5976_, 4, v_D_5938_);
lean_ctor_set(v_reuseFailAlloc_5976_, 5, v_M_5939_);
lean_ctor_set(v_reuseFailAlloc_5976_, 6, v_L_5940_);
lean_ctor_set(v_reuseFailAlloc_5976_, 7, v_d_5941_);
lean_ctor_set(v_reuseFailAlloc_5976_, 8, v_Q_5942_);
lean_ctor_set(v_reuseFailAlloc_5976_, 9, v_q_5943_);
lean_ctor_set(v_reuseFailAlloc_5976_, 10, v_w_5944_);
lean_ctor_set(v_reuseFailAlloc_5976_, 11, v_W_5945_);
lean_ctor_set(v_reuseFailAlloc_5976_, 12, v_E_5946_);
lean_ctor_set(v_reuseFailAlloc_5976_, 13, v_e_5947_);
lean_ctor_set(v_reuseFailAlloc_5976_, 14, v_c_5948_);
lean_ctor_set(v_reuseFailAlloc_5976_, 15, v_F_5949_);
lean_ctor_set(v_reuseFailAlloc_5976_, 16, v_a_5950_);
lean_ctor_set(v_reuseFailAlloc_5976_, 17, v_b_5951_);
lean_ctor_set(v_reuseFailAlloc_5976_, 18, v_B_5952_);
lean_ctor_set(v_reuseFailAlloc_5976_, 19, v_h_5953_);
lean_ctor_set(v_reuseFailAlloc_5976_, 20, v_K_5954_);
lean_ctor_set(v_reuseFailAlloc_5976_, 21, v_k_5955_);
lean_ctor_set(v_reuseFailAlloc_5976_, 22, v_H_5956_);
lean_ctor_set(v_reuseFailAlloc_5976_, 23, v_m_5957_);
lean_ctor_set(v_reuseFailAlloc_5976_, 24, v_s_5958_);
lean_ctor_set(v_reuseFailAlloc_5976_, 25, v_S_5959_);
lean_ctor_set(v_reuseFailAlloc_5976_, 26, v_A_5960_);
lean_ctor_set(v_reuseFailAlloc_5976_, 27, v_n_5961_);
lean_ctor_set(v_reuseFailAlloc_5976_, 28, v_N_5962_);
lean_ctor_set(v_reuseFailAlloc_5976_, 29, v_V_5963_);
lean_ctor_set(v_reuseFailAlloc_5976_, 30, v_z_5964_);
lean_ctor_set(v_reuseFailAlloc_5976_, 31, v_zabbrev_5965_);
lean_ctor_set(v_reuseFailAlloc_5976_, 32, v_v_5966_);
lean_ctor_set(v_reuseFailAlloc_5976_, 33, v_O_5967_);
lean_ctor_set(v_reuseFailAlloc_5976_, 34, v_X_5968_);
lean_ctor_set(v_reuseFailAlloc_5976_, 35, v___x_5973_);
lean_ctor_set(v_reuseFailAlloc_5976_, 36, v_Z_5969_);
v___x_5975_ = v_reuseFailAlloc_5976_;
goto v_reusejp_5974_;
}
v_reusejp_5974_:
{
return v___x_5975_;
}
}
}
default: 
{
lean_object* v_G_5979_; lean_object* v_y_5980_; lean_object* v_u_5981_; lean_object* v_Y_5982_; lean_object* v_D_5983_; lean_object* v_M_5984_; lean_object* v_L_5985_; lean_object* v_d_5986_; lean_object* v_Q_5987_; lean_object* v_q_5988_; lean_object* v_w_5989_; lean_object* v_W_5990_; lean_object* v_E_5991_; lean_object* v_e_5992_; lean_object* v_c_5993_; lean_object* v_F_5994_; lean_object* v_a_5995_; lean_object* v_b_5996_; lean_object* v_B_5997_; lean_object* v_h_5998_; lean_object* v_K_5999_; lean_object* v_k_6000_; lean_object* v_H_6001_; lean_object* v_m_6002_; lean_object* v_s_6003_; lean_object* v_S_6004_; lean_object* v_A_6005_; lean_object* v_n_6006_; lean_object* v_N_6007_; lean_object* v_V_6008_; lean_object* v_z_6009_; lean_object* v_zabbrev_6010_; lean_object* v_v_6011_; lean_object* v_O_6012_; lean_object* v_X_6013_; lean_object* v_x_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6022_; 
lean_dec_ref_known(v_modifier_4142_, 0);
v_G_5979_ = lean_ctor_get(v_date_4141_, 0);
v_y_5980_ = lean_ctor_get(v_date_4141_, 1);
v_u_5981_ = lean_ctor_get(v_date_4141_, 2);
v_Y_5982_ = lean_ctor_get(v_date_4141_, 3);
v_D_5983_ = lean_ctor_get(v_date_4141_, 4);
v_M_5984_ = lean_ctor_get(v_date_4141_, 5);
v_L_5985_ = lean_ctor_get(v_date_4141_, 6);
v_d_5986_ = lean_ctor_get(v_date_4141_, 7);
v_Q_5987_ = lean_ctor_get(v_date_4141_, 8);
v_q_5988_ = lean_ctor_get(v_date_4141_, 9);
v_w_5989_ = lean_ctor_get(v_date_4141_, 10);
v_W_5990_ = lean_ctor_get(v_date_4141_, 11);
v_E_5991_ = lean_ctor_get(v_date_4141_, 12);
v_e_5992_ = lean_ctor_get(v_date_4141_, 13);
v_c_5993_ = lean_ctor_get(v_date_4141_, 14);
v_F_5994_ = lean_ctor_get(v_date_4141_, 15);
v_a_5995_ = lean_ctor_get(v_date_4141_, 16);
v_b_5996_ = lean_ctor_get(v_date_4141_, 17);
v_B_5997_ = lean_ctor_get(v_date_4141_, 18);
v_h_5998_ = lean_ctor_get(v_date_4141_, 19);
v_K_5999_ = lean_ctor_get(v_date_4141_, 20);
v_k_6000_ = lean_ctor_get(v_date_4141_, 21);
v_H_6001_ = lean_ctor_get(v_date_4141_, 22);
v_m_6002_ = lean_ctor_get(v_date_4141_, 23);
v_s_6003_ = lean_ctor_get(v_date_4141_, 24);
v_S_6004_ = lean_ctor_get(v_date_4141_, 25);
v_A_6005_ = lean_ctor_get(v_date_4141_, 26);
v_n_6006_ = lean_ctor_get(v_date_4141_, 27);
v_N_6007_ = lean_ctor_get(v_date_4141_, 28);
v_V_6008_ = lean_ctor_get(v_date_4141_, 29);
v_z_6009_ = lean_ctor_get(v_date_4141_, 30);
v_zabbrev_6010_ = lean_ctor_get(v_date_4141_, 31);
v_v_6011_ = lean_ctor_get(v_date_4141_, 32);
v_O_6012_ = lean_ctor_get(v_date_4141_, 33);
v_X_6013_ = lean_ctor_get(v_date_4141_, 34);
v_x_6014_ = lean_ctor_get(v_date_4141_, 35);
v_isSharedCheck_6022_ = !lean_is_exclusive(v_date_4141_);
if (v_isSharedCheck_6022_ == 0)
{
lean_object* v_unused_6023_; 
v_unused_6023_ = lean_ctor_get(v_date_4141_, 36);
lean_dec(v_unused_6023_);
v___x_6016_ = v_date_4141_;
v_isShared_6017_ = v_isSharedCheck_6022_;
goto v_resetjp_6015_;
}
else
{
lean_inc(v_x_6014_);
lean_inc(v_X_6013_);
lean_inc(v_O_6012_);
lean_inc(v_v_6011_);
lean_inc(v_zabbrev_6010_);
lean_inc(v_z_6009_);
lean_inc(v_V_6008_);
lean_inc(v_N_6007_);
lean_inc(v_n_6006_);
lean_inc(v_A_6005_);
lean_inc(v_S_6004_);
lean_inc(v_s_6003_);
lean_inc(v_m_6002_);
lean_inc(v_H_6001_);
lean_inc(v_k_6000_);
lean_inc(v_K_5999_);
lean_inc(v_h_5998_);
lean_inc(v_B_5997_);
lean_inc(v_b_5996_);
lean_inc(v_a_5995_);
lean_inc(v_F_5994_);
lean_inc(v_c_5993_);
lean_inc(v_e_5992_);
lean_inc(v_E_5991_);
lean_inc(v_W_5990_);
lean_inc(v_w_5989_);
lean_inc(v_q_5988_);
lean_inc(v_Q_5987_);
lean_inc(v_d_5986_);
lean_inc(v_L_5985_);
lean_inc(v_M_5984_);
lean_inc(v_D_5983_);
lean_inc(v_Y_5982_);
lean_inc(v_u_5981_);
lean_inc(v_y_5980_);
lean_inc(v_G_5979_);
lean_dec(v_date_4141_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6022_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v___x_6018_; lean_object* v___x_6020_; 
v___x_6018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6018_, 0, v_data_4143_);
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 36, v___x_6018_);
v___x_6020_ = v___x_6016_;
goto v_reusejp_6019_;
}
else
{
lean_object* v_reuseFailAlloc_6021_; 
v_reuseFailAlloc_6021_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6021_, 0, v_G_5979_);
lean_ctor_set(v_reuseFailAlloc_6021_, 1, v_y_5980_);
lean_ctor_set(v_reuseFailAlloc_6021_, 2, v_u_5981_);
lean_ctor_set(v_reuseFailAlloc_6021_, 3, v_Y_5982_);
lean_ctor_set(v_reuseFailAlloc_6021_, 4, v_D_5983_);
lean_ctor_set(v_reuseFailAlloc_6021_, 5, v_M_5984_);
lean_ctor_set(v_reuseFailAlloc_6021_, 6, v_L_5985_);
lean_ctor_set(v_reuseFailAlloc_6021_, 7, v_d_5986_);
lean_ctor_set(v_reuseFailAlloc_6021_, 8, v_Q_5987_);
lean_ctor_set(v_reuseFailAlloc_6021_, 9, v_q_5988_);
lean_ctor_set(v_reuseFailAlloc_6021_, 10, v_w_5989_);
lean_ctor_set(v_reuseFailAlloc_6021_, 11, v_W_5990_);
lean_ctor_set(v_reuseFailAlloc_6021_, 12, v_E_5991_);
lean_ctor_set(v_reuseFailAlloc_6021_, 13, v_e_5992_);
lean_ctor_set(v_reuseFailAlloc_6021_, 14, v_c_5993_);
lean_ctor_set(v_reuseFailAlloc_6021_, 15, v_F_5994_);
lean_ctor_set(v_reuseFailAlloc_6021_, 16, v_a_5995_);
lean_ctor_set(v_reuseFailAlloc_6021_, 17, v_b_5996_);
lean_ctor_set(v_reuseFailAlloc_6021_, 18, v_B_5997_);
lean_ctor_set(v_reuseFailAlloc_6021_, 19, v_h_5998_);
lean_ctor_set(v_reuseFailAlloc_6021_, 20, v_K_5999_);
lean_ctor_set(v_reuseFailAlloc_6021_, 21, v_k_6000_);
lean_ctor_set(v_reuseFailAlloc_6021_, 22, v_H_6001_);
lean_ctor_set(v_reuseFailAlloc_6021_, 23, v_m_6002_);
lean_ctor_set(v_reuseFailAlloc_6021_, 24, v_s_6003_);
lean_ctor_set(v_reuseFailAlloc_6021_, 25, v_S_6004_);
lean_ctor_set(v_reuseFailAlloc_6021_, 26, v_A_6005_);
lean_ctor_set(v_reuseFailAlloc_6021_, 27, v_n_6006_);
lean_ctor_set(v_reuseFailAlloc_6021_, 28, v_N_6007_);
lean_ctor_set(v_reuseFailAlloc_6021_, 29, v_V_6008_);
lean_ctor_set(v_reuseFailAlloc_6021_, 30, v_z_6009_);
lean_ctor_set(v_reuseFailAlloc_6021_, 31, v_zabbrev_6010_);
lean_ctor_set(v_reuseFailAlloc_6021_, 32, v_v_6011_);
lean_ctor_set(v_reuseFailAlloc_6021_, 33, v_O_6012_);
lean_ctor_set(v_reuseFailAlloc_6021_, 34, v_X_6013_);
lean_ctor_set(v_reuseFailAlloc_6021_, 35, v_x_6014_);
lean_ctor_set(v_reuseFailAlloc_6021_, 36, v___x_6018_);
v___x_6020_ = v_reuseFailAlloc_6021_;
goto v_reusejp_6019_;
}
v_reusejp_6019_:
{
return v___x_6020_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(lean_object* v_year_6024_, uint8_t v_x_6025_){
_start:
{
if (v_x_6025_ == 0)
{
lean_object* v___x_6026_; lean_object* v___x_6027_; 
v___x_6026_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6027_ = lean_int_sub(v___x_6026_, v_year_6024_);
return v___x_6027_;
}
else
{
lean_inc(v_year_6024_);
return v_year_6024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra___boxed(lean_object* v_year_6028_, lean_object* v_x_6029_){
_start:
{
uint8_t v_x_36__boxed_6030_; lean_object* v_res_6031_; 
v_x_36__boxed_6030_ = lean_unbox(v_x_6029_);
v_res_6031_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_year_6028_, v_x_36__boxed_6030_);
lean_dec(v_year_6028_);
return v_res_6031_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(uint8_t v_x_6032_){
_start:
{
switch(v_x_6032_)
{
case 1:
{
uint8_t v___x_6033_; 
v___x_6033_ = 1;
return v___x_6033_;
}
case 2:
{
uint8_t v___x_6034_; 
v___x_6034_ = 1;
return v___x_6034_;
}
default: 
{
uint8_t v___x_6035_; 
v___x_6035_ = 0;
return v___x_6035_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod___boxed(lean_object* v_x_6036_){
_start:
{
uint8_t v_x_28__boxed_6037_; uint8_t v_res_6038_; lean_object* v_r_6039_; 
v_x_28__boxed_6037_ = lean_unbox(v_x_6036_);
v_res_6038_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(v_x_28__boxed_6037_);
v_r_6039_ = lean_box(v_res_6038_);
return v_r_6039_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(lean_object* v_hour_6040_, uint8_t v_x_6041_){
_start:
{
switch(v_x_6041_)
{
case 1:
{
lean_object* v___x_6042_; uint8_t v___x_6043_; 
v___x_6042_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__0, &l_Std_Time_classifyExtendedDayPeriod___closed__0_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__0);
v___x_6043_ = lean_int_dec_lt(v_hour_6040_, v___x_6042_);
if (v___x_6043_ == 0)
{
uint8_t v___x_6044_; 
v___x_6044_ = 1;
return v___x_6044_;
}
else
{
uint8_t v___x_6045_; 
v___x_6045_ = 0;
return v___x_6045_;
}
}
case 3:
{
uint8_t v___x_6046_; 
v___x_6046_ = 1;
return v___x_6046_;
}
case 4:
{
uint8_t v___x_6047_; 
v___x_6047_ = 1;
return v___x_6047_;
}
case 5:
{
uint8_t v___x_6048_; 
v___x_6048_ = 1;
return v___x_6048_;
}
default: 
{
uint8_t v___x_6049_; 
v___x_6049_ = 0;
return v___x_6049_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod___boxed(lean_object* v_hour_6050_, lean_object* v_x_6051_){
_start:
{
uint8_t v_x_66__boxed_6052_; uint8_t v_res_6053_; lean_object* v_r_6054_; 
v_x_66__boxed_6052_ = lean_unbox(v_x_6051_);
v_res_6053_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(v_hour_6050_, v_x_66__boxed_6052_);
lean_dec(v_hour_6050_);
v_r_6054_ = lean_box(v_res_6053_);
return v_r_6054_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___lam__0(lean_object* v___x_6055_, lean_object* v___y_6056_){
_start:
{
lean_object* v_pos_6058_; lean_object* v___x_6078_; 
lean_inc_ref(v___y_6056_);
v___x_6078_ = l_Std_Internal_Parsec_String_pstring(v___x_6055_, v___y_6056_);
if (lean_obj_tag(v___x_6078_) == 0)
{
lean_object* v_pos_6079_; 
lean_dec_ref(v___y_6056_);
v_pos_6079_ = lean_ctor_get(v___x_6078_, 0);
lean_inc(v_pos_6079_);
lean_dec_ref_known(v___x_6078_, 2);
v_pos_6058_ = v_pos_6079_;
goto v___jp_6057_;
}
else
{
lean_object* v_pos_6080_; lean_object* v_err_6081_; lean_object* v___x_6083_; uint8_t v_isShared_6084_; uint8_t v_isSharedCheck_6091_; 
v_pos_6080_ = lean_ctor_get(v___x_6078_, 0);
v_err_6081_ = lean_ctor_get(v___x_6078_, 1);
v_isSharedCheck_6091_ = !lean_is_exclusive(v___x_6078_);
if (v_isSharedCheck_6091_ == 0)
{
v___x_6083_ = v___x_6078_;
v_isShared_6084_ = v_isSharedCheck_6091_;
goto v_resetjp_6082_;
}
else
{
lean_inc(v_err_6081_);
lean_inc(v_pos_6080_);
lean_dec(v___x_6078_);
v___x_6083_ = lean_box(0);
v_isShared_6084_ = v_isSharedCheck_6091_;
goto v_resetjp_6082_;
}
v_resetjp_6082_:
{
lean_object* v_snd_6085_; lean_object* v_snd_6086_; uint8_t v_decide_6087_; 
v_snd_6085_ = lean_ctor_get(v___y_6056_, 1);
lean_inc(v_snd_6085_);
lean_dec_ref(v___y_6056_);
v_snd_6086_ = lean_ctor_get(v_pos_6080_, 1);
v_decide_6087_ = lean_nat_dec_eq(v_snd_6085_, v_snd_6086_);
lean_dec(v_snd_6085_);
if (v_decide_6087_ == 0)
{
lean_object* v___x_6089_; 
if (v_isShared_6084_ == 0)
{
v___x_6089_ = v___x_6083_;
goto v_reusejp_6088_;
}
else
{
lean_object* v_reuseFailAlloc_6090_; 
v_reuseFailAlloc_6090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6090_, 0, v_pos_6080_);
lean_ctor_set(v_reuseFailAlloc_6090_, 1, v_err_6081_);
v___x_6089_ = v_reuseFailAlloc_6090_;
goto v_reusejp_6088_;
}
v_reusejp_6088_:
{
return v___x_6089_;
}
}
else
{
lean_del_object(v___x_6083_);
lean_dec(v_err_6081_);
v_pos_6058_ = v_pos_6080_;
goto v___jp_6057_;
}
}
}
v___jp_6057_:
{
uint8_t v___x_6059_; uint8_t v___x_6060_; uint8_t v___x_6061_; lean_object* v___x_6062_; 
v___x_6059_ = 0;
v___x_6060_ = 2;
v___x_6061_ = 1;
v___x_6062_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_6059_, v___x_6060_, v___x_6061_, v_pos_6058_);
if (lean_obj_tag(v___x_6062_) == 0)
{
lean_object* v_pos_6063_; lean_object* v_fst_6064_; lean_object* v_snd_6065_; lean_object* v___x_6066_; uint8_t v_decide_6067_; 
v_pos_6063_ = lean_ctor_get(v___x_6062_, 0);
v_fst_6064_ = lean_ctor_get(v_pos_6063_, 0);
v_snd_6065_ = lean_ctor_get(v_pos_6063_, 1);
v___x_6066_ = lean_string_utf8_byte_size(v_fst_6064_);
v_decide_6067_ = lean_nat_dec_eq(v_snd_6065_, v___x_6066_);
if (v_decide_6067_ == 0)
{
lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6075_; 
lean_inc(v_pos_6063_);
v_isSharedCheck_6075_ = !lean_is_exclusive(v___x_6062_);
if (v_isSharedCheck_6075_ == 0)
{
lean_object* v_unused_6076_; lean_object* v_unused_6077_; 
v_unused_6076_ = lean_ctor_get(v___x_6062_, 1);
lean_dec(v_unused_6076_);
v_unused_6077_ = lean_ctor_get(v___x_6062_, 0);
lean_dec(v_unused_6077_);
v___x_6069_ = v___x_6062_;
v_isShared_6070_ = v_isSharedCheck_6075_;
goto v_resetjp_6068_;
}
else
{
lean_dec(v___x_6062_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6075_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v___x_6071_; lean_object* v___x_6073_; 
v___x_6071_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_6070_ == 0)
{
lean_ctor_set_tag(v___x_6069_, 1);
lean_ctor_set(v___x_6069_, 1, v___x_6071_);
v___x_6073_ = v___x_6069_;
goto v_reusejp_6072_;
}
else
{
lean_object* v_reuseFailAlloc_6074_; 
v_reuseFailAlloc_6074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6074_, 0, v_pos_6063_);
lean_ctor_set(v_reuseFailAlloc_6074_, 1, v___x_6071_);
v___x_6073_ = v_reuseFailAlloc_6074_;
goto v_reusejp_6072_;
}
v_reusejp_6072_:
{
return v___x_6073_;
}
}
}
else
{
return v___x_6062_;
}
}
else
{
return v___x_6062_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f(lean_object* v_id_6094_){
_start:
{
lean_object* v___f_6095_; lean_object* v___x_6096_; 
v___f_6095_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f___closed__0));
v___x_6096_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_6095_, v_id_6094_);
if (lean_obj_tag(v___x_6096_) == 0)
{
lean_object* v___x_6097_; 
lean_dec_ref_known(v___x_6096_, 1);
v___x_6097_ = lean_box(0);
return v___x_6097_;
}
else
{
lean_object* v_a_6098_; lean_object* v___x_6100_; uint8_t v_isShared_6101_; uint8_t v_isSharedCheck_6105_; 
v_a_6098_ = lean_ctor_get(v___x_6096_, 0);
v_isSharedCheck_6105_ = !lean_is_exclusive(v___x_6096_);
if (v_isSharedCheck_6105_ == 0)
{
v___x_6100_ = v___x_6096_;
v_isShared_6101_ = v_isSharedCheck_6105_;
goto v_resetjp_6099_;
}
else
{
lean_inc(v_a_6098_);
lean_dec(v___x_6096_);
v___x_6100_ = lean_box(0);
v_isShared_6101_ = v_isSharedCheck_6105_;
goto v_resetjp_6099_;
}
v_resetjp_6099_:
{
lean_object* v___x_6103_; 
if (v_isShared_6101_ == 0)
{
v___x_6103_ = v___x_6100_;
goto v_reusejp_6102_;
}
else
{
lean_object* v_reuseFailAlloc_6104_; 
v_reuseFailAlloc_6104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6104_, 0, v_a_6098_);
v___x_6103_ = v_reuseFailAlloc_6104_;
goto v_reusejp_6102_;
}
v_reusejp_6102_:
{
return v___x_6103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate(lean_object* v_dateformat_6106_, lean_object* v_year_6107_, lean_object* v_week_6108_, uint8_t v_weekday_6109_){
_start:
{
uint8_t v_firstDayOfWeek_6110_; lean_object* v_minimalDaysInFirstWeek_6111_; lean_object* v_start_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v_dayOfWeek_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v_dateDays_6122_; lean_object* v___x_6123_; lean_object* v_date_6124_; lean_object* v___x_6125_; uint8_t v___x_6126_; 
v_firstDayOfWeek_6110_ = lean_ctor_get_uint8(v_dateformat_6106_, sizeof(void*)*2);
v_minimalDaysInFirstWeek_6111_ = lean_ctor_get(v_dateformat_6106_, 0);
lean_inc(v_year_6107_);
v_start_6112_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_6107_, v_firstDayOfWeek_6110_, v_minimalDaysInFirstWeek_6111_);
v___x_6113_ = l_Std_Time_Weekday_toOrdinal(v_weekday_6109_);
v___x_6114_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_6110_);
v___x_6115_ = lean_int_sub(v___x_6113_, v___x_6114_);
lean_dec(v___x_6114_);
lean_dec(v___x_6113_);
v___x_6116_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3);
v_dayOfWeek_6117_ = lean_int_emod(v___x_6115_, v___x_6116_);
lean_dec(v___x_6115_);
v___x_6118_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6119_ = lean_int_sub(v_week_6108_, v___x_6118_);
v___x_6120_ = lean_int_mul(v___x_6119_, v___x_6116_);
lean_dec(v___x_6119_);
v___x_6121_ = lean_int_add(v___x_6120_, v_dayOfWeek_6117_);
lean_dec(v_dayOfWeek_6117_);
lean_dec(v___x_6120_);
v_dateDays_6122_ = l_Std_Time_PlainDate_toEpochDay(v_start_6112_);
v___x_6123_ = lean_int_add(v_dateDays_6122_, v___x_6121_);
lean_dec(v___x_6121_);
lean_dec(v_dateDays_6122_);
v_date_6124_ = l_Std_Time_PlainDate_ofEpochDay(v___x_6123_);
lean_dec(v___x_6123_);
lean_inc_ref(v_date_6124_);
v___x_6125_ = l_Std_Time_PlainDate_weekYear(v_date_6124_, v_firstDayOfWeek_6110_, v_minimalDaysInFirstWeek_6111_);
v___x_6126_ = lean_int_dec_eq(v___x_6125_, v_year_6107_);
lean_dec(v_year_6107_);
lean_dec(v___x_6125_);
if (v___x_6126_ == 0)
{
lean_object* v___x_6127_; 
lean_dec_ref(v_date_6124_);
v___x_6127_ = lean_box(0);
return v___x_6127_;
}
else
{
lean_object* v___x_6128_; 
v___x_6128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6128_, 0, v_date_6124_);
return v___x_6128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate___boxed(lean_object* v_dateformat_6129_, lean_object* v_year_6130_, lean_object* v_week_6131_, lean_object* v_weekday_6132_){
_start:
{
uint8_t v_weekday_boxed_6133_; lean_object* v_res_6134_; 
v_weekday_boxed_6133_ = lean_unbox(v_weekday_6132_);
v_res_6134_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate(v_dateformat_6129_, v_year_6130_, v_week_6131_, v_weekday_boxed_6133_);
lean_dec(v_week_6131_);
lean_dec_ref(v_dateformat_6129_);
return v_res_6134_;
}
}
LEAN_EXPORT lean_object* l_List_findSome_x3f___at___00__private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay_spec__0(lean_object* v_month_6135_, lean_object* v_day_6136_, lean_object* v_dateformat_6137_, lean_object* v_year_6138_, lean_object* v_x_6139_){
_start:
{
if (lean_obj_tag(v_x_6139_) == 0)
{
lean_object* v___x_6140_; 
lean_dec(v_day_6136_);
lean_dec(v_month_6135_);
v___x_6140_ = lean_box(0);
return v___x_6140_;
}
else
{
lean_object* v_head_6141_; lean_object* v_tail_6142_; uint8_t v___y_6144_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; uint8_t v___x_6158_; 
v_head_6141_ = lean_ctor_get(v_x_6139_, 0);
v_tail_6142_ = lean_ctor_get(v_x_6139_, 1);
v___x_6155_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0);
v___x_6156_ = lean_int_mod(v_head_6141_, v___x_6155_);
v___x_6157_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6158_ = lean_int_dec_eq(v___x_6156_, v___x_6157_);
lean_dec(v___x_6156_);
if (v___x_6158_ == 0)
{
v___y_6144_ = v___x_6158_;
goto v___jp_6143_;
}
else
{
lean_object* v___x_6159_; lean_object* v___x_6160_; uint8_t v___x_6161_; 
v___x_6159_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_6160_ = lean_int_mod(v_head_6141_, v___x_6159_);
v___x_6161_ = lean_int_dec_eq(v___x_6160_, v___x_6157_);
lean_dec(v___x_6160_);
if (v___x_6161_ == 0)
{
v___y_6144_ = v___x_6158_;
goto v___jp_6143_;
}
else
{
lean_object* v___x_6162_; lean_object* v___x_6163_; uint8_t v___x_6164_; 
v___x_6162_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1);
v___x_6163_ = lean_int_mod(v_head_6141_, v___x_6162_);
v___x_6164_ = lean_int_dec_eq(v___x_6163_, v___x_6157_);
lean_dec(v___x_6163_);
v___y_6144_ = v___x_6164_;
goto v___jp_6143_;
}
}
v___jp_6143_:
{
lean_object* v___x_6145_; uint8_t v___x_6146_; 
v___x_6145_ = l_Std_Time_Month_Ordinal_days(v___y_6144_, v_month_6135_);
v___x_6146_ = lean_int_dec_le(v_day_6136_, v___x_6145_);
lean_dec(v___x_6145_);
if (v___x_6146_ == 0)
{
v_x_6139_ = v_tail_6142_;
goto _start;
}
else
{
uint8_t v_firstDayOfWeek_6148_; lean_object* v_minimalDaysInFirstWeek_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; uint8_t v___x_6153_; 
v_firstDayOfWeek_6148_ = lean_ctor_get_uint8(v_dateformat_6137_, sizeof(void*)*2);
v_minimalDaysInFirstWeek_6149_ = lean_ctor_get(v_dateformat_6137_, 0);
lean_inc(v_day_6136_);
lean_inc(v_month_6135_);
lean_inc(v_head_6141_);
v___x_6150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6150_, 0, v_head_6141_);
lean_ctor_set(v___x_6150_, 1, v_month_6135_);
lean_ctor_set(v___x_6150_, 2, v_day_6136_);
lean_inc_ref(v___x_6150_);
v___x_6151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6151_, 0, v___x_6150_);
v___x_6152_ = l_Std_Time_PlainDate_weekYear(v___x_6150_, v_firstDayOfWeek_6148_, v_minimalDaysInFirstWeek_6149_);
v___x_6153_ = lean_int_dec_eq(v___x_6152_, v_year_6138_);
lean_dec(v___x_6152_);
if (v___x_6153_ == 0)
{
lean_dec_ref_known(v___x_6151_, 1);
v_x_6139_ = v_tail_6142_;
goto _start;
}
else
{
lean_dec(v_day_6136_);
lean_dec(v_month_6135_);
return v___x_6151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_findSome_x3f___at___00__private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay_spec__0___boxed(lean_object* v_month_6165_, lean_object* v_day_6166_, lean_object* v_dateformat_6167_, lean_object* v_year_6168_, lean_object* v_x_6169_){
_start:
{
lean_object* v_res_6170_; 
v_res_6170_ = l_List_findSome_x3f___at___00__private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay_spec__0(v_month_6165_, v_day_6166_, v_dateformat_6167_, v_year_6168_, v_x_6169_);
lean_dec(v_x_6169_);
lean_dec(v_year_6168_);
lean_dec_ref(v_dateformat_6167_);
return v_res_6170_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay(lean_object* v_dateformat_6171_, lean_object* v_year_6172_, lean_object* v_month_6173_, lean_object* v_day_6174_){
_start:
{
lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; 
v___x_6175_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6176_ = lean_int_sub(v_year_6172_, v___x_6175_);
v___x_6177_ = lean_int_add(v_year_6172_, v___x_6175_);
v___x_6178_ = lean_box(0);
v___x_6179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6179_, 0, v___x_6177_);
lean_ctor_set(v___x_6179_, 1, v___x_6178_);
v___x_6180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6180_, 0, v___x_6176_);
lean_ctor_set(v___x_6180_, 1, v___x_6179_);
lean_inc(v_year_6172_);
v___x_6181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6181_, 0, v_year_6172_);
lean_ctor_set(v___x_6181_, 1, v___x_6180_);
v___x_6182_ = l_List_findSome_x3f___at___00__private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay_spec__0(v_month_6173_, v_day_6174_, v_dateformat_6171_, v_year_6172_, v___x_6181_);
lean_dec_ref_known(v___x_6181_, 2);
lean_dec(v_year_6172_);
return v___x_6182_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay___boxed(lean_object* v_dateformat_6183_, lean_object* v_year_6184_, lean_object* v_month_6185_, lean_object* v_day_6186_){
_start:
{
lean_object* v_res_6187_; 
v_res_6187_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay(v_dateformat_6183_, v_year_6184_, v_month_6185_, v_day_6186_);
lean_dec_ref(v_dateformat_6183_);
return v_res_6187_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__0(void){
_start:
{
lean_object* v___x_6188_; lean_object* v___x_6189_; 
v___x_6188_ = lean_unsigned_to_nat(11u);
v___x_6189_ = lean_nat_to_int(v___x_6188_);
return v___x_6189_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; 
v___x_6190_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__0);
v___x_6191_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6192_ = lean_int_add(v___x_6191_, v___x_6190_);
return v___x_6192_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__2(void){
_start:
{
lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; 
v___x_6193_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6194_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__1);
v___x_6195_ = lean_int_sub(v___x_6194_, v___x_6193_);
return v___x_6195_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3(void){
_start:
{
lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v_range_6198_; 
v___x_6196_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6197_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__2);
v_range_6198_ = lean_int_add(v___x_6197_, v___x_6196_);
return v_range_6198_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4(void){
_start:
{
lean_object* v___x_6199_; lean_object* v___x_6200_; 
v___x_6199_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6200_ = lean_int_sub(v___x_6199_, v___x_6199_);
return v___x_6200_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__5(void){
_start:
{
lean_object* v_range_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; 
v_range_6201_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3);
v___x_6202_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4);
v___x_6203_ = lean_int_emod(v___x_6202_, v_range_6201_);
return v___x_6203_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__6(void){
_start:
{
lean_object* v_range_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; 
v_range_6204_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3);
v___x_6205_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__5);
v___x_6206_ = lean_int_add(v___x_6205_, v_range_6204_);
return v___x_6206_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__7(void){
_start:
{
lean_object* v_range_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; 
v_range_6207_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__3);
v___x_6208_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__6);
v___x_6209_ = lean_int_emod(v___x_6208_, v_range_6207_);
return v___x_6209_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8(void){
_start:
{
lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; 
v___x_6210_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6211_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__7, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__7_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__7);
v___x_6212_ = lean_int_add(v___x_6211_, v___x_6210_);
return v___x_6212_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__9(void){
_start:
{
lean_object* v___x_6213_; lean_object* v___x_6214_; 
v___x_6213_ = lean_unsigned_to_nat(30u);
v___x_6214_ = lean_nat_to_int(v___x_6213_);
return v___x_6214_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__10(void){
_start:
{
lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; 
v___x_6215_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__9);
v___x_6216_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6217_ = lean_int_add(v___x_6216_, v___x_6215_);
return v___x_6217_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__11(void){
_start:
{
lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; 
v___x_6218_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6219_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__10, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__10_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__10);
v___x_6220_ = lean_int_sub(v___x_6219_, v___x_6218_);
return v___x_6220_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12(void){
_start:
{
lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v_range_6223_; 
v___x_6221_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6222_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__11, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__11_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__11);
v_range_6223_ = lean_int_add(v___x_6222_, v___x_6221_);
return v_range_6223_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__13(void){
_start:
{
lean_object* v_range_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; 
v_range_6224_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12);
v___x_6225_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4);
v___x_6226_ = lean_int_emod(v___x_6225_, v_range_6224_);
return v___x_6226_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__14(void){
_start:
{
lean_object* v_range_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; 
v_range_6227_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12);
v___x_6228_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__13, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__13_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__13);
v___x_6229_ = lean_int_add(v___x_6228_, v_range_6227_);
return v___x_6229_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__15(void){
_start:
{
lean_object* v_range_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; 
v_range_6230_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__12);
v___x_6231_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__14, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__14_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__14);
v___x_6232_ = lean_int_emod(v___x_6231_, v_range_6230_);
return v___x_6232_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16(void){
_start:
{
lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; 
v___x_6233_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6234_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__15);
v___x_6235_ = lean_int_add(v___x_6234_, v___x_6233_);
return v___x_6235_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(lean_object* v_year_x3f_6236_, lean_object* v_x_6237_){
_start:
{
lean_object* v___y_6239_; lean_object* v___y_6240_; lean_object* v___y_6241_; uint8_t v___y_6242_; lean_object* v___y_6249_; 
if (lean_obj_tag(v_year_x3f_6236_) == 0)
{
lean_object* v___x_6262_; 
v___x_6262_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6249_ = v___x_6262_;
goto v___jp_6248_;
}
else
{
lean_object* v_val_6263_; 
v_val_6263_ = lean_ctor_get(v_year_x3f_6236_, 0);
lean_inc(v_val_6263_);
lean_dec_ref_known(v_year_x3f_6236_, 1);
v___y_6249_ = v_val_6263_;
goto v___jp_6248_;
}
v___jp_6238_:
{
lean_object* v___x_6243_; uint8_t v___x_6244_; 
v___x_6243_ = l_Std_Time_Month_Ordinal_days(v___y_6242_, v___y_6240_);
v___x_6244_ = lean_int_dec_le(v___y_6241_, v___x_6243_);
lean_dec(v___x_6243_);
if (v___x_6244_ == 0)
{
lean_object* v___x_6245_; 
lean_dec(v___y_6239_);
v___x_6245_ = lean_box(0);
return v___x_6245_;
}
else
{
lean_object* v___x_6246_; lean_object* v___x_6247_; 
lean_inc(v___y_6241_);
lean_inc(v___y_6240_);
v___x_6246_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6246_, 0, v___y_6239_);
lean_ctor_set(v___x_6246_, 1, v___y_6240_);
lean_ctor_set(v___x_6246_, 2, v___y_6241_);
v___x_6247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6247_, 0, v___x_6246_);
return v___x_6247_;
}
}
v___jp_6248_:
{
lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; uint8_t v___x_6255_; 
v___x_6250_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8);
v___x_6251_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16);
v___x_6252_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0);
v___x_6253_ = lean_int_mod(v___y_6249_, v___x_6252_);
v___x_6254_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6255_ = lean_int_dec_eq(v___x_6253_, v___x_6254_);
lean_dec(v___x_6253_);
if (v___x_6255_ == 0)
{
v___y_6239_ = v___y_6249_;
v___y_6240_ = v___x_6250_;
v___y_6241_ = v___x_6251_;
v___y_6242_ = v___x_6255_;
goto v___jp_6238_;
}
else
{
lean_object* v___x_6256_; lean_object* v___x_6257_; uint8_t v___x_6258_; 
v___x_6256_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_6257_ = lean_int_mod(v___y_6249_, v___x_6256_);
v___x_6258_ = lean_int_dec_eq(v___x_6257_, v___x_6254_);
lean_dec(v___x_6257_);
if (v___x_6258_ == 0)
{
v___y_6239_ = v___y_6249_;
v___y_6240_ = v___x_6250_;
v___y_6241_ = v___x_6251_;
v___y_6242_ = v___x_6255_;
goto v___jp_6238_;
}
else
{
lean_object* v___x_6259_; lean_object* v___x_6260_; uint8_t v___x_6261_; 
v___x_6259_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1);
v___x_6260_ = lean_int_mod(v___y_6249_, v___x_6259_);
v___x_6261_ = lean_int_dec_eq(v___x_6260_, v___x_6254_);
lean_dec(v___x_6260_);
v___y_6239_ = v___y_6249_;
v___y_6240_ = v___x_6250_;
v___y_6241_ = v___x_6251_;
v___y_6242_ = v___x_6261_;
goto v___jp_6238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed(lean_object* v_year_x3f_6264_, lean_object* v_x_6265_){
_start:
{
lean_object* v_res_6266_; 
v_res_6266_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(v_year_x3f_6264_, v_x_6265_);
lean_dec(v_x_6265_);
return v_res_6266_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(lean_object* v_val_6267_, lean_object* v_x_6268_){
_start:
{
lean_inc_ref(v_val_6267_);
return v_val_6267_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1___boxed(lean_object* v_val_6269_, lean_object* v_x_6270_){
_start:
{
lean_object* v_res_6271_; 
v_res_6271_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(v_val_6269_, v_x_6270_);
lean_dec_ref(v_val_6269_);
return v_res_6271_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__2(lean_object* v_h_6272_, lean_object* v_K_6273_, uint8_t v_marker_6274_){
_start:
{
if (lean_obj_tag(v_h_6272_) == 0)
{
if (lean_obj_tag(v_K_6273_) == 0)
{
return v_K_6273_;
}
else
{
if (v_marker_6274_ == 0)
{
lean_object* v_val_6275_; lean_object* v___x_6277_; uint8_t v_isShared_6278_; uint8_t v_isSharedCheck_6282_; 
v_val_6275_ = lean_ctor_get(v_K_6273_, 0);
v_isSharedCheck_6282_ = !lean_is_exclusive(v_K_6273_);
if (v_isSharedCheck_6282_ == 0)
{
v___x_6277_ = v_K_6273_;
v_isShared_6278_ = v_isSharedCheck_6282_;
goto v_resetjp_6276_;
}
else
{
lean_inc(v_val_6275_);
lean_dec(v_K_6273_);
v___x_6277_ = lean_box(0);
v_isShared_6278_ = v_isSharedCheck_6282_;
goto v_resetjp_6276_;
}
v_resetjp_6276_:
{
lean_object* v___x_6280_; 
if (v_isShared_6278_ == 0)
{
v___x_6280_ = v___x_6277_;
goto v_reusejp_6279_;
}
else
{
lean_object* v_reuseFailAlloc_6281_; 
v_reuseFailAlloc_6281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6281_, 0, v_val_6275_);
v___x_6280_ = v_reuseFailAlloc_6281_;
goto v_reusejp_6279_;
}
v_reusejp_6279_:
{
return v___x_6280_;
}
}
}
else
{
lean_object* v_val_6283_; lean_object* v___x_6285_; uint8_t v_isShared_6286_; uint8_t v_isSharedCheck_6292_; 
v_val_6283_ = lean_ctor_get(v_K_6273_, 0);
v_isSharedCheck_6292_ = !lean_is_exclusive(v_K_6273_);
if (v_isSharedCheck_6292_ == 0)
{
v___x_6285_ = v_K_6273_;
v_isShared_6286_ = v_isSharedCheck_6292_;
goto v_resetjp_6284_;
}
else
{
lean_inc(v_val_6283_);
lean_dec(v_K_6273_);
v___x_6285_ = lean_box(0);
v_isShared_6286_ = v_isSharedCheck_6292_;
goto v_resetjp_6284_;
}
v_resetjp_6284_:
{
lean_object* v___x_6287_; lean_object* v___x_6288_; lean_object* v___x_6290_; 
v___x_6287_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_6288_ = lean_int_add(v_val_6283_, v___x_6287_);
lean_dec(v_val_6283_);
if (v_isShared_6286_ == 0)
{
lean_ctor_set(v___x_6285_, 0, v___x_6288_);
v___x_6290_ = v___x_6285_;
goto v_reusejp_6289_;
}
else
{
lean_object* v_reuseFailAlloc_6291_; 
v_reuseFailAlloc_6291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6291_, 0, v___x_6288_);
v___x_6290_ = v_reuseFailAlloc_6291_;
goto v_reusejp_6289_;
}
v_reusejp_6289_:
{
return v___x_6290_;
}
}
}
}
}
else
{
lean_object* v_val_6293_; lean_object* v___x_6295_; uint8_t v_isShared_6296_; uint8_t v_isSharedCheck_6301_; 
lean_dec(v_K_6273_);
v_val_6293_ = lean_ctor_get(v_h_6272_, 0);
v_isSharedCheck_6301_ = !lean_is_exclusive(v_h_6272_);
if (v_isSharedCheck_6301_ == 0)
{
v___x_6295_ = v_h_6272_;
v_isShared_6296_ = v_isSharedCheck_6301_;
goto v_resetjp_6294_;
}
else
{
lean_inc(v_val_6293_);
lean_dec(v_h_6272_);
v___x_6295_ = lean_box(0);
v_isShared_6296_ = v_isSharedCheck_6301_;
goto v_resetjp_6294_;
}
v_resetjp_6294_:
{
lean_object* v___x_6297_; lean_object* v___x_6299_; 
v___x_6297_ = l_Std_Time_HourMarker_toAbsolute(v_marker_6274_, v_val_6293_);
lean_dec(v_val_6293_);
if (v_isShared_6296_ == 0)
{
lean_ctor_set(v___x_6295_, 0, v___x_6297_);
v___x_6299_ = v___x_6295_;
goto v_reusejp_6298_;
}
else
{
lean_object* v_reuseFailAlloc_6300_; 
v_reuseFailAlloc_6300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6300_, 0, v___x_6297_);
v___x_6299_ = v_reuseFailAlloc_6300_;
goto v_reusejp_6298_;
}
v_reusejp_6298_:
{
return v___x_6299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__2___boxed(lean_object* v_h_6302_, lean_object* v_K_6303_, lean_object* v_marker_6304_){
_start:
{
uint8_t v_marker_boxed_6305_; lean_object* v_res_6306_; 
v_marker_boxed_6305_ = lean_unbox(v_marker_6304_);
v_res_6306_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__2(v_h_6302_, v_K_6303_, v_marker_boxed_6305_);
return v_res_6306_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3(lean_object* v___y_6307_, lean_object* v___y_6308_, lean_object* v_year_x3f_6309_, lean_object* v_x_6310_){
_start:
{
lean_object* v___y_6312_; uint8_t v___y_6313_; lean_object* v___y_6320_; 
if (lean_obj_tag(v_year_x3f_6309_) == 0)
{
lean_object* v___x_6331_; 
v___x_6331_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6320_ = v___x_6331_;
goto v___jp_6319_;
}
else
{
lean_object* v_val_6332_; 
v_val_6332_ = lean_ctor_get(v_year_x3f_6309_, 0);
lean_inc(v_val_6332_);
lean_dec_ref_known(v_year_x3f_6309_, 1);
v___y_6320_ = v_val_6332_;
goto v___jp_6319_;
}
v___jp_6311_:
{
lean_object* v___x_6314_; uint8_t v___x_6315_; 
v___x_6314_ = l_Std_Time_Month_Ordinal_days(v___y_6313_, v___y_6307_);
v___x_6315_ = lean_int_dec_le(v___y_6308_, v___x_6314_);
lean_dec(v___x_6314_);
if (v___x_6315_ == 0)
{
lean_object* v___x_6316_; 
lean_dec(v___y_6312_);
lean_dec(v___y_6308_);
lean_dec(v___y_6307_);
v___x_6316_ = lean_box(0);
return v___x_6316_;
}
else
{
lean_object* v___x_6317_; lean_object* v___x_6318_; 
v___x_6317_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6317_, 0, v___y_6312_);
lean_ctor_set(v___x_6317_, 1, v___y_6307_);
lean_ctor_set(v___x_6317_, 2, v___y_6308_);
v___x_6318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6318_, 0, v___x_6317_);
return v___x_6318_;
}
}
v___jp_6319_:
{
lean_object* v___x_6321_; lean_object* v___x_6322_; lean_object* v___x_6323_; uint8_t v___x_6324_; 
v___x_6321_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0);
v___x_6322_ = lean_int_mod(v___y_6320_, v___x_6321_);
v___x_6323_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6324_ = lean_int_dec_eq(v___x_6322_, v___x_6323_);
lean_dec(v___x_6322_);
if (v___x_6324_ == 0)
{
v___y_6312_ = v___y_6320_;
v___y_6313_ = v___x_6324_;
goto v___jp_6311_;
}
else
{
lean_object* v___x_6325_; lean_object* v___x_6326_; uint8_t v___x_6327_; 
v___x_6325_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_6326_ = lean_int_mod(v___y_6320_, v___x_6325_);
v___x_6327_ = lean_int_dec_eq(v___x_6326_, v___x_6323_);
lean_dec(v___x_6326_);
if (v___x_6327_ == 0)
{
v___y_6312_ = v___y_6320_;
v___y_6313_ = v___x_6324_;
goto v___jp_6311_;
}
else
{
lean_object* v___x_6328_; lean_object* v___x_6329_; uint8_t v___x_6330_; 
v___x_6328_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1);
v___x_6329_ = lean_int_mod(v___y_6320_, v___x_6328_);
v___x_6330_ = lean_int_dec_eq(v___x_6329_, v___x_6323_);
lean_dec(v___x_6329_);
v___y_6312_ = v___y_6320_;
v___y_6313_ = v___x_6330_;
goto v___jp_6311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3___boxed(lean_object* v___y_6333_, lean_object* v___y_6334_, lean_object* v_year_x3f_6335_, lean_object* v_x_6336_){
_start:
{
lean_object* v_res_6337_; 
v_res_6337_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3(v___y_6333_, v___y_6334_, v_year_x3f_6335_, v_x_6336_);
lean_dec(v_x_6336_);
return v_res_6337_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__4(lean_object* v___y_6338_, lean_object* v_00___6339_){
_start:
{
uint8_t v___x_6340_; lean_object* v___x_6341_; 
v___x_6340_ = 1;
v___x_6341_ = l_Std_Time_TimeZone_Offset_toIsoString(v___y_6338_, v___x_6340_);
return v___x_6341_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1(void){
_start:
{
lean_object* v___x_6344_; lean_object* v___x_6345_; 
v___x_6344_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6345_ = lean_int_neg(v___x_6344_);
return v___x_6345_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2(void){
_start:
{
lean_object* v___x_6346_; lean_object* v___x_6347_; 
v___x_6346_ = lean_unsigned_to_nat(1000000u);
v___x_6347_ = lean_nat_to_int(v___x_6346_);
return v___x_6347_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3(void){
_start:
{
lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; 
v___x_6348_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_6349_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6350_ = lean_int_add(v___x_6349_, v___x_6348_);
return v___x_6350_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4(void){
_start:
{
lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; 
v___x_6351_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6352_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3);
v___x_6353_ = lean_int_sub(v___x_6352_, v___x_6351_);
return v___x_6353_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5(void){
_start:
{
lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v_range_6356_; 
v___x_6354_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6355_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4);
v_range_6356_ = lean_int_add(v___x_6355_, v___x_6354_);
return v_range_6356_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6(void){
_start:
{
lean_object* v___x_6357_; lean_object* v___x_6358_; 
v___x_6357_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6358_ = lean_int_sub(v___x_6357_, v___x_6357_);
return v___x_6358_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7(void){
_start:
{
lean_object* v_range_6359_; lean_object* v___x_6360_; lean_object* v___x_6361_; 
v_range_6359_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5);
v___x_6360_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6361_ = lean_int_emod(v___x_6360_, v_range_6359_);
return v___x_6361_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8(void){
_start:
{
lean_object* v_range_6362_; lean_object* v___x_6363_; lean_object* v___x_6364_; 
v_range_6362_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5);
v___x_6363_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7);
v___x_6364_ = lean_int_add(v___x_6363_, v_range_6362_);
return v___x_6364_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9(void){
_start:
{
lean_object* v_range_6365_; lean_object* v___x_6366_; lean_object* v___x_6367_; 
v_range_6365_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5);
v___x_6366_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8);
v___x_6367_ = lean_int_emod(v___x_6366_, v_range_6365_);
return v___x_6367_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10(void){
_start:
{
lean_object* v___x_6368_; lean_object* v___x_6369_; lean_object* v___x_6370_; 
v___x_6368_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6369_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9);
v___x_6370_ = lean_int_add(v___x_6369_, v___x_6368_);
return v___x_6370_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11(void){
_start:
{
lean_object* v___x_6371_; lean_object* v___x_6372_; 
v___x_6371_ = lean_unsigned_to_nat(24u);
v___x_6372_ = lean_nat_to_int(v___x_6371_);
return v___x_6372_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12(void){
_start:
{
lean_object* v___x_6373_; lean_object* v___x_6374_; 
v___x_6373_ = lean_unsigned_to_nat(52u);
v___x_6374_ = lean_nat_to_int(v___x_6373_);
return v___x_6374_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13(void){
_start:
{
lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6377_; 
v___x_6375_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12);
v___x_6376_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6377_ = lean_int_add(v___x_6376_, v___x_6375_);
return v___x_6377_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14(void){
_start:
{
lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; 
v___x_6378_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6379_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13);
v___x_6380_ = lean_int_sub(v___x_6379_, v___x_6378_);
return v___x_6380_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15(void){
_start:
{
lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v_range_6383_; 
v___x_6381_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6382_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14);
v_range_6383_ = lean_int_add(v___x_6382_, v___x_6381_);
return v_range_6383_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16(void){
_start:
{
lean_object* v_range_6384_; lean_object* v___x_6385_; lean_object* v___x_6386_; 
v_range_6384_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6385_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__4);
v___x_6386_ = lean_int_emod(v___x_6385_, v_range_6384_);
return v___x_6386_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17(void){
_start:
{
lean_object* v_range_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; 
v_range_6387_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6388_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16);
v___x_6389_ = lean_int_add(v___x_6388_, v_range_6387_);
return v___x_6389_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18(void){
_start:
{
lean_object* v_range_6390_; lean_object* v___x_6391_; lean_object* v___x_6392_; 
v_range_6390_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6391_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17);
v___x_6392_ = lean_int_emod(v___x_6391_, v_range_6390_);
return v___x_6392_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19(void){
_start:
{
lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; 
v___x_6393_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6394_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18);
v___x_6395_ = lean_int_add(v___x_6394_, v___x_6393_);
return v___x_6395_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(lean_object* v_builder_6396_, lean_object* v_aw_6397_, lean_object* v_dateformat_6398_){
_start:
{
lean_object* v___y_6400_; lean_object* v___y_6401_; lean_object* v___y_6440_; lean_object* v___y_6441_; lean_object* v___y_6444_; lean_object* v___y_6445_; lean_object* v___y_6446_; lean_object* v_G_6457_; lean_object* v_y_6458_; lean_object* v_u_6459_; lean_object* v_Y_6460_; lean_object* v_D_6461_; lean_object* v_M_6462_; lean_object* v_L_6463_; lean_object* v_d_6464_; lean_object* v_w_6465_; lean_object* v_E_6466_; lean_object* v_e_6467_; lean_object* v_c_6468_; lean_object* v_a_6469_; lean_object* v_b_6470_; lean_object* v_B_6471_; lean_object* v_h_6472_; lean_object* v_K_6473_; lean_object* v_k_6474_; lean_object* v_H_6475_; lean_object* v_m_6476_; lean_object* v_s_6477_; lean_object* v_S_6478_; lean_object* v_A_6479_; lean_object* v_n_6480_; lean_object* v_N_6481_; lean_object* v_V_6482_; lean_object* v_z_6483_; lean_object* v_zabbrev_6484_; lean_object* v_v_6485_; lean_object* v_O_6486_; lean_object* v_X_6487_; lean_object* v_x_6488_; lean_object* v_Z_6489_; lean_object* v___y_6491_; lean_object* v___y_6492_; lean_object* v___y_6493_; lean_object* v___y_6494_; lean_object* v___y_6495_; lean_object* v___y_6496_; lean_object* v___y_6505_; lean_object* v___y_6506_; lean_object* v___y_6507_; lean_object* v___y_6508_; lean_object* v___y_6509_; lean_object* v___y_6514_; lean_object* v___y_6515_; lean_object* v___y_6516_; uint8_t v___y_6517_; lean_object* v___y_6518_; lean_object* v___y_6523_; lean_object* v___y_6524_; uint8_t v___y_6525_; lean_object* v___y_6526_; lean_object* v___y_6530_; lean_object* v___y_6531_; lean_object* v___y_6532_; lean_object* v___y_6533_; uint8_t v___y_6534_; lean_object* v___y_6542_; lean_object* v___y_6543_; lean_object* v___y_6544_; uint8_t v___y_6545_; lean_object* v___y_6546_; lean_object* v___y_6547_; lean_object* v___y_6552_; lean_object* v___y_6553_; lean_object* v___y_6554_; lean_object* v___y_6555_; uint8_t v___y_6556_; lean_object* v___y_6557_; lean_object* v___y_6558_; lean_object* v___y_6560_; lean_object* v___y_6561_; lean_object* v___y_6562_; lean_object* v___y_6563_; lean_object* v___y_6564_; uint8_t v___y_6565_; lean_object* v___y_6566_; lean_object* v___y_6578_; lean_object* v___y_6579_; lean_object* v___y_6580_; lean_object* v___y_6581_; lean_object* v___y_6582_; lean_object* v___y_6583_; uint8_t v___y_6584_; lean_object* v___y_6585_; lean_object* v___y_6586_; lean_object* v___y_6599_; lean_object* v___y_6600_; lean_object* v___y_6601_; lean_object* v___y_6602_; lean_object* v___y_6603_; lean_object* v___y_6604_; lean_object* v___y_6605_; uint8_t v___y_6606_; lean_object* v___y_6607_; lean_object* v___y_6608_; lean_object* v___y_6623_; uint8_t v___y_6624_; lean_object* v___y_6625_; lean_object* v___y_6647_; lean_object* v___y_6648_; uint8_t v___y_6649_; lean_object* v___y_6650_; uint8_t v___y_6651_; lean_object* v___y_6657_; lean_object* v___y_6658_; lean_object* v___y_6659_; uint8_t v___y_6660_; uint8_t v___y_6661_; lean_object* v___y_6668_; lean_object* v___y_6669_; lean_object* v___y_6670_; lean_object* v___y_6671_; uint8_t v___y_6672_; lean_object* v___y_6673_; lean_object* v___y_6690_; lean_object* v___y_6691_; lean_object* v___y_6692_; lean_object* v___y_6693_; uint8_t v___y_6694_; lean_object* v___y_6697_; lean_object* v___y_6698_; lean_object* v___y_6699_; lean_object* v___y_6700_; uint8_t v___y_6701_; lean_object* v___y_6704_; lean_object* v___y_6705_; uint8_t v___y_6706_; lean_object* v___y_6707_; lean_object* v___y_6720_; lean_object* v___y_6721_; lean_object* v___y_6722_; uint8_t v___y_6723_; lean_object* v___y_6724_; lean_object* v___y_6725_; lean_object* v___y_6731_; lean_object* v___y_6732_; uint8_t v___y_6733_; lean_object* v___y_6734_; lean_object* v___y_6738_; lean_object* v___y_6739_; uint8_t v___y_6740_; lean_object* v_val_6743_; lean_object* v___y_6744_; lean_object* v___y_6745_; uint8_t v___y_6748_; lean_object* v___y_6749_; lean_object* v___y_6750_; lean_object* v___y_6773_; lean_object* v___y_6774_; lean_object* v___y_6775_; lean_object* v___y_6800_; lean_object* v___y_6801_; lean_object* v___y_6802_; lean_object* v___y_6807_; lean_object* v_val_6817_; 
v_G_6457_ = lean_ctor_get(v_builder_6396_, 0);
lean_inc(v_G_6457_);
v_y_6458_ = lean_ctor_get(v_builder_6396_, 1);
lean_inc(v_y_6458_);
v_u_6459_ = lean_ctor_get(v_builder_6396_, 2);
lean_inc(v_u_6459_);
v_Y_6460_ = lean_ctor_get(v_builder_6396_, 3);
lean_inc(v_Y_6460_);
v_D_6461_ = lean_ctor_get(v_builder_6396_, 4);
lean_inc(v_D_6461_);
v_M_6462_ = lean_ctor_get(v_builder_6396_, 5);
lean_inc(v_M_6462_);
v_L_6463_ = lean_ctor_get(v_builder_6396_, 6);
lean_inc(v_L_6463_);
v_d_6464_ = lean_ctor_get(v_builder_6396_, 7);
lean_inc(v_d_6464_);
v_w_6465_ = lean_ctor_get(v_builder_6396_, 10);
lean_inc(v_w_6465_);
v_E_6466_ = lean_ctor_get(v_builder_6396_, 12);
lean_inc(v_E_6466_);
v_e_6467_ = lean_ctor_get(v_builder_6396_, 13);
lean_inc(v_e_6467_);
v_c_6468_ = lean_ctor_get(v_builder_6396_, 14);
lean_inc(v_c_6468_);
v_a_6469_ = lean_ctor_get(v_builder_6396_, 16);
lean_inc(v_a_6469_);
v_b_6470_ = lean_ctor_get(v_builder_6396_, 17);
lean_inc(v_b_6470_);
v_B_6471_ = lean_ctor_get(v_builder_6396_, 18);
lean_inc(v_B_6471_);
v_h_6472_ = lean_ctor_get(v_builder_6396_, 19);
lean_inc(v_h_6472_);
v_K_6473_ = lean_ctor_get(v_builder_6396_, 20);
lean_inc(v_K_6473_);
v_k_6474_ = lean_ctor_get(v_builder_6396_, 21);
lean_inc(v_k_6474_);
v_H_6475_ = lean_ctor_get(v_builder_6396_, 22);
lean_inc(v_H_6475_);
v_m_6476_ = lean_ctor_get(v_builder_6396_, 23);
lean_inc(v_m_6476_);
v_s_6477_ = lean_ctor_get(v_builder_6396_, 24);
lean_inc(v_s_6477_);
v_S_6478_ = lean_ctor_get(v_builder_6396_, 25);
lean_inc(v_S_6478_);
v_A_6479_ = lean_ctor_get(v_builder_6396_, 26);
lean_inc(v_A_6479_);
v_n_6480_ = lean_ctor_get(v_builder_6396_, 27);
lean_inc(v_n_6480_);
v_N_6481_ = lean_ctor_get(v_builder_6396_, 28);
lean_inc(v_N_6481_);
v_V_6482_ = lean_ctor_get(v_builder_6396_, 29);
lean_inc(v_V_6482_);
v_z_6483_ = lean_ctor_get(v_builder_6396_, 30);
lean_inc(v_z_6483_);
v_zabbrev_6484_ = lean_ctor_get(v_builder_6396_, 31);
lean_inc(v_zabbrev_6484_);
v_v_6485_ = lean_ctor_get(v_builder_6396_, 32);
lean_inc(v_v_6485_);
v_O_6486_ = lean_ctor_get(v_builder_6396_, 33);
lean_inc(v_O_6486_);
v_X_6487_ = lean_ctor_get(v_builder_6396_, 34);
lean_inc(v_X_6487_);
v_x_6488_ = lean_ctor_get(v_builder_6396_, 35);
lean_inc(v_x_6488_);
v_Z_6489_ = lean_ctor_get(v_builder_6396_, 36);
lean_inc(v_Z_6489_);
lean_dec_ref(v_builder_6396_);
if (lean_obj_tag(v_O_6486_) == 0)
{
if (lean_obj_tag(v_X_6487_) == 0)
{
if (lean_obj_tag(v_x_6488_) == 0)
{
if (lean_obj_tag(v_Z_6489_) == 0)
{
if (lean_obj_tag(v_V_6482_) == 0)
{
if (lean_obj_tag(v_v_6485_) == 0)
{
if (lean_obj_tag(v_z_6483_) == 0)
{
if (lean_obj_tag(v_zabbrev_6484_) == 0)
{
goto v___jp_6814_;
}
else
{
lean_object* v_val_6820_; 
v_val_6820_ = lean_ctor_get(v_zabbrev_6484_, 0);
lean_inc(v_val_6820_);
v_val_6817_ = v_val_6820_;
goto v___jp_6816_;
}
}
else
{
lean_object* v_val_6821_; 
v_val_6821_ = lean_ctor_get(v_z_6483_, 0);
lean_inc(v_val_6821_);
v_val_6817_ = v_val_6821_;
goto v___jp_6816_;
}
}
else
{
lean_object* v_val_6822_; 
v_val_6822_ = lean_ctor_get(v_v_6485_, 0);
lean_inc(v_val_6822_);
v_val_6817_ = v_val_6822_;
goto v___jp_6816_;
}
}
else
{
lean_object* v_val_6823_; 
v_val_6823_ = lean_ctor_get(v_V_6482_, 0);
lean_inc(v_val_6823_);
v_val_6817_ = v_val_6823_;
goto v___jp_6816_;
}
}
else
{
lean_object* v_val_6824_; 
v_val_6824_ = lean_ctor_get(v_Z_6489_, 0);
lean_inc(v_val_6824_);
lean_dec_ref_known(v_Z_6489_, 1);
v___y_6807_ = v_val_6824_;
goto v___jp_6806_;
}
}
else
{
lean_object* v_val_6825_; 
lean_dec(v_Z_6489_);
v_val_6825_ = lean_ctor_get(v_x_6488_, 0);
lean_inc(v_val_6825_);
lean_dec_ref_known(v_x_6488_, 1);
v___y_6807_ = v_val_6825_;
goto v___jp_6806_;
}
}
else
{
lean_object* v_val_6826_; 
lean_dec(v_Z_6489_);
lean_dec(v_x_6488_);
v_val_6826_ = lean_ctor_get(v_X_6487_, 0);
lean_inc(v_val_6826_);
lean_dec_ref_known(v_X_6487_, 1);
v___y_6807_ = v_val_6826_;
goto v___jp_6806_;
}
}
else
{
lean_object* v_val_6827_; 
lean_dec(v_Z_6489_);
lean_dec(v_x_6488_);
lean_dec(v_X_6487_);
v_val_6827_ = lean_ctor_get(v_O_6486_, 0);
lean_inc(v_val_6827_);
lean_dec_ref_known(v_O_6486_, 1);
v___y_6807_ = v_val_6827_;
goto v___jp_6806_;
}
v___jp_6399_:
{
if (lean_obj_tag(v___y_6400_) == 0)
{
lean_object* v___x_6402_; 
lean_dec_ref(v___y_6401_);
v___x_6402_ = lean_box(0);
return v___x_6402_;
}
else
{
lean_object* v_val_6403_; lean_object* v___x_6405_; uint8_t v_isShared_6406_; uint8_t v_isSharedCheck_6438_; 
v_val_6403_ = lean_ctor_get(v___y_6400_, 0);
v_isSharedCheck_6438_ = !lean_is_exclusive(v___y_6400_);
if (v_isSharedCheck_6438_ == 0)
{
v___x_6405_ = v___y_6400_;
v_isShared_6406_ = v_isSharedCheck_6438_;
goto v_resetjp_6404_;
}
else
{
lean_inc(v_val_6403_);
lean_dec(v___y_6400_);
v___x_6405_ = lean_box(0);
v_isShared_6406_ = v_isSharedCheck_6438_;
goto v_resetjp_6404_;
}
v_resetjp_6404_:
{
lean_object* v_offset_6407_; lean_object* v_name_6408_; lean_object* v_abbreviation_6409_; uint8_t v_isDST_6410_; uint8_t v___x_6411_; uint8_t v___x_6412_; lean_object* v_ltt_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; lean_object* v_wt_6417_; lean_object* v_ltt_6418_; lean_object* v_tz_6419_; lean_object* v_offset_6420_; lean_object* v_second_6421_; lean_object* v_nano_6422_; lean_object* v___f_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; lean_object* v___x_6428_; lean_object* v_nanos_6429_; lean_object* v___x_6430_; lean_object* v_nanos_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; lean_object* v___x_6436_; 
v_offset_6407_ = lean_ctor_get(v___y_6401_, 0);
lean_inc(v_offset_6407_);
v_name_6408_ = lean_ctor_get(v___y_6401_, 1);
lean_inc_ref(v_name_6408_);
v_abbreviation_6409_ = lean_ctor_get(v___y_6401_, 2);
lean_inc_ref(v_abbreviation_6409_);
v_isDST_6410_ = lean_ctor_get_uint8(v___y_6401_, sizeof(void*)*3);
lean_dec_ref(v___y_6401_);
v___x_6411_ = 0;
v___x_6412_ = 1;
v_ltt_6413_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6413_, 0, v_offset_6407_);
lean_ctor_set(v_ltt_6413_, 1, v_abbreviation_6409_);
lean_ctor_set(v_ltt_6413_, 2, v_name_6408_);
lean_ctor_set_uint8(v_ltt_6413_, sizeof(void*)*3, v_isDST_6410_);
lean_ctor_set_uint8(v_ltt_6413_, sizeof(void*)*3 + 1, v___x_6411_);
lean_ctor_set_uint8(v_ltt_6413_, sizeof(void*)*3 + 2, v___x_6412_);
v___x_6414_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6415_ = lean_box(0);
v___x_6416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6416_, 0, v_ltt_6413_);
lean_ctor_set(v___x_6416_, 1, v___x_6414_);
lean_ctor_set(v___x_6416_, 2, v___x_6415_);
lean_inc(v_val_6403_);
v_wt_6417_ = l_Std_Time_PlainDateTime_toWallTime(v_val_6403_);
lean_inc_ref(v___x_6416_);
v_ltt_6418_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(v___x_6416_, v_wt_6417_);
v_tz_6419_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v_ltt_6418_);
lean_dec_ref(v_ltt_6418_);
v_offset_6420_ = lean_ctor_get(v_tz_6419_, 0);
v_second_6421_ = lean_ctor_get(v_wt_6417_, 0);
lean_inc(v_second_6421_);
v_nano_6422_ = lean_ctor_get(v_wt_6417_, 1);
lean_inc(v_nano_6422_);
lean_dec_ref(v_wt_6417_);
v___f_6423_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1___boxed), 2, 1);
lean_closure_set(v___f_6423_, 0, v_val_6403_);
v___x_6424_ = lean_mk_thunk(v___f_6423_);
v___x_6425_ = lean_int_neg(v_offset_6420_);
v___x_6426_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1);
v___x_6427_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_6428_ = lean_int_mul(v_second_6421_, v___x_6427_);
lean_dec(v_second_6421_);
v_nanos_6429_ = lean_int_add(v___x_6428_, v_nano_6422_);
lean_dec(v_nano_6422_);
lean_dec(v___x_6428_);
v___x_6430_ = lean_int_mul(v___x_6425_, v___x_6427_);
lean_dec(v___x_6425_);
v_nanos_6431_ = lean_int_add(v___x_6430_, v___x_6426_);
lean_dec(v___x_6430_);
v___x_6432_ = lean_int_add(v_nanos_6429_, v_nanos_6431_);
lean_dec(v_nanos_6431_);
lean_dec(v_nanos_6429_);
v___x_6433_ = l_Std_Time_Duration_ofNanoseconds(v___x_6432_);
lean_dec(v___x_6432_);
v___x_6434_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6434_, 0, v___x_6424_);
lean_ctor_set(v___x_6434_, 1, v___x_6433_);
lean_ctor_set(v___x_6434_, 2, v___x_6416_);
lean_ctor_set(v___x_6434_, 3, v_tz_6419_);
if (v_isShared_6406_ == 0)
{
lean_ctor_set(v___x_6405_, 0, v___x_6434_);
v___x_6436_ = v___x_6405_;
goto v_reusejp_6435_;
}
else
{
lean_object* v_reuseFailAlloc_6437_; 
v_reuseFailAlloc_6437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6437_, 0, v___x_6434_);
v___x_6436_ = v_reuseFailAlloc_6437_;
goto v_reusejp_6435_;
}
v_reusejp_6435_:
{
return v___x_6436_;
}
}
}
}
v___jp_6439_:
{
if (lean_obj_tag(v_aw_6397_) == 0)
{
lean_object* v_a_6442_; 
lean_dec_ref(v___y_6440_);
v_a_6442_ = lean_ctor_get(v_aw_6397_, 0);
lean_inc_ref(v_a_6442_);
lean_dec_ref_known(v_aw_6397_, 1);
v___y_6400_ = v___y_6441_;
v___y_6401_ = v_a_6442_;
goto v___jp_6399_;
}
else
{
v___y_6400_ = v___y_6441_;
v___y_6401_ = v___y_6440_;
goto v___jp_6399_;
}
}
v___jp_6443_:
{
if (lean_obj_tag(v___y_6444_) == 0)
{
lean_object* v___x_6447_; 
lean_dec_ref(v___y_6446_);
v___x_6447_ = lean_box(0);
v___y_6440_ = v___y_6445_;
v___y_6441_ = v___x_6447_;
goto v___jp_6439_;
}
else
{
lean_object* v_val_6448_; lean_object* v___x_6450_; uint8_t v_isShared_6451_; uint8_t v_isSharedCheck_6456_; 
v_val_6448_ = lean_ctor_get(v___y_6444_, 0);
v_isSharedCheck_6456_ = !lean_is_exclusive(v___y_6444_);
if (v_isSharedCheck_6456_ == 0)
{
v___x_6450_ = v___y_6444_;
v_isShared_6451_ = v_isSharedCheck_6456_;
goto v_resetjp_6449_;
}
else
{
lean_inc(v_val_6448_);
lean_dec(v___y_6444_);
v___x_6450_ = lean_box(0);
v_isShared_6451_ = v_isSharedCheck_6456_;
goto v_resetjp_6449_;
}
v_resetjp_6449_:
{
lean_object* v___x_6452_; lean_object* v___x_6454_; 
v___x_6452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6452_, 0, v_val_6448_);
lean_ctor_set(v___x_6452_, 1, v___y_6446_);
if (v_isShared_6451_ == 0)
{
lean_ctor_set(v___x_6450_, 0, v___x_6452_);
v___x_6454_ = v___x_6450_;
goto v_reusejp_6453_;
}
else
{
lean_object* v_reuseFailAlloc_6455_; 
v_reuseFailAlloc_6455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6455_, 0, v___x_6452_);
v___x_6454_ = v_reuseFailAlloc_6455_;
goto v_reusejp_6453_;
}
v_reusejp_6453_:
{
v___y_6440_ = v___y_6445_;
v___y_6441_ = v___x_6454_;
goto v___jp_6439_;
}
}
}
}
v___jp_6490_:
{
if (lean_obj_tag(v_N_6481_) == 0)
{
if (lean_obj_tag(v_A_6479_) == 0)
{
lean_object* v___x_6497_; 
v___x_6497_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6497_, 0, v___y_6491_);
lean_ctor_set(v___x_6497_, 1, v___y_6492_);
lean_ctor_set(v___x_6497_, 2, v___y_6495_);
lean_ctor_set(v___x_6497_, 3, v___y_6496_);
v___y_6444_ = v___y_6493_;
v___y_6445_ = v___y_6494_;
v___y_6446_ = v___x_6497_;
goto v___jp_6443_;
}
else
{
lean_object* v_val_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; lean_object* v___x_6501_; 
lean_dec(v___y_6496_);
lean_dec(v___y_6495_);
lean_dec(v___y_6492_);
lean_dec(v___y_6491_);
v_val_6498_ = lean_ctor_get(v_A_6479_, 0);
lean_inc(v_val_6498_);
lean_dec_ref_known(v_A_6479_, 1);
v___x_6499_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2);
v___x_6500_ = lean_int_mul(v_val_6498_, v___x_6499_);
lean_dec(v_val_6498_);
v___x_6501_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_6500_);
lean_dec(v___x_6500_);
v___y_6444_ = v___y_6493_;
v___y_6445_ = v___y_6494_;
v___y_6446_ = v___x_6501_;
goto v___jp_6443_;
}
}
else
{
lean_object* v_val_6502_; lean_object* v___x_6503_; 
lean_dec(v___y_6496_);
lean_dec(v___y_6495_);
lean_dec(v___y_6492_);
lean_dec(v___y_6491_);
lean_dec(v_A_6479_);
v_val_6502_ = lean_ctor_get(v_N_6481_, 0);
lean_inc(v_val_6502_);
lean_dec_ref_known(v_N_6481_, 1);
v___x_6503_ = l_Std_Time_PlainTime_ofNanoseconds(v_val_6502_);
lean_dec(v_val_6502_);
v___y_6444_ = v___y_6493_;
v___y_6445_ = v___y_6494_;
v___y_6446_ = v___x_6503_;
goto v___jp_6443_;
}
}
v___jp_6504_:
{
if (lean_obj_tag(v_n_6480_) == 0)
{
if (lean_obj_tag(v_S_6478_) == 0)
{
lean_object* v___x_6510_; 
v___x_6510_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6491_ = v___y_6505_;
v___y_6492_ = v___y_6506_;
v___y_6493_ = v___y_6507_;
v___y_6494_ = v___y_6508_;
v___y_6495_ = v___y_6509_;
v___y_6496_ = v___x_6510_;
goto v___jp_6490_;
}
else
{
lean_object* v_val_6511_; 
v_val_6511_ = lean_ctor_get(v_S_6478_, 0);
lean_inc(v_val_6511_);
lean_dec_ref_known(v_S_6478_, 1);
v___y_6491_ = v___y_6505_;
v___y_6492_ = v___y_6506_;
v___y_6493_ = v___y_6507_;
v___y_6494_ = v___y_6508_;
v___y_6495_ = v___y_6509_;
v___y_6496_ = v_val_6511_;
goto v___jp_6490_;
}
}
else
{
lean_object* v_val_6512_; 
lean_dec(v_S_6478_);
v_val_6512_ = lean_ctor_get(v_n_6480_, 0);
lean_inc(v_val_6512_);
lean_dec_ref_known(v_n_6480_, 1);
v___y_6491_ = v___y_6505_;
v___y_6492_ = v___y_6506_;
v___y_6493_ = v___y_6507_;
v___y_6494_ = v___y_6508_;
v___y_6495_ = v___y_6509_;
v___y_6496_ = v_val_6512_;
goto v___jp_6490_;
}
}
v___jp_6513_:
{
if (lean_obj_tag(v_s_6477_) == 0)
{
lean_object* v___x_6519_; lean_object* v___x_6520_; 
v___x_6519_ = lean_unsigned_to_nat(0u);
v___x_6520_ = l_Std_Time_Second_instOfNatOrdinal(v___y_6517_, v___x_6519_);
v___y_6505_ = v___y_6514_;
v___y_6506_ = v___y_6518_;
v___y_6507_ = v___y_6515_;
v___y_6508_ = v___y_6516_;
v___y_6509_ = v___x_6520_;
goto v___jp_6504_;
}
else
{
lean_object* v_val_6521_; 
v_val_6521_ = lean_ctor_get(v_s_6477_, 0);
lean_inc(v_val_6521_);
lean_dec_ref_known(v_s_6477_, 1);
v___y_6505_ = v___y_6514_;
v___y_6506_ = v___y_6518_;
v___y_6507_ = v___y_6515_;
v___y_6508_ = v___y_6516_;
v___y_6509_ = v_val_6521_;
goto v___jp_6504_;
}
}
v___jp_6522_:
{
if (lean_obj_tag(v_m_6476_) == 0)
{
lean_object* v___x_6527_; 
v___x_6527_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10);
v___y_6514_ = v___y_6526_;
v___y_6515_ = v___y_6523_;
v___y_6516_ = v___y_6524_;
v___y_6517_ = v___y_6525_;
v___y_6518_ = v___x_6527_;
goto v___jp_6513_;
}
else
{
lean_object* v_val_6528_; 
v_val_6528_ = lean_ctor_get(v_m_6476_, 0);
lean_inc(v_val_6528_);
lean_dec_ref_known(v_m_6476_, 1);
v___y_6514_ = v___y_6526_;
v___y_6515_ = v___y_6523_;
v___y_6516_ = v___y_6524_;
v___y_6517_ = v___y_6525_;
v___y_6518_ = v_val_6528_;
goto v___jp_6513_;
}
}
v___jp_6529_:
{
if (lean_obj_tag(v___y_6530_) == 0)
{
uint8_t v___x_6535_; lean_object* v___x_6536_; lean_object* v___x_6537_; 
v___x_6535_ = 0;
v___x_6536_ = lean_box(v___x_6535_);
v___x_6537_ = lean_apply_1(v___y_6532_, v___x_6536_);
if (lean_obj_tag(v___x_6537_) == 0)
{
lean_object* v___x_6538_; 
v___x_6538_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6523_ = v___y_6531_;
v___y_6524_ = v___y_6533_;
v___y_6525_ = v___y_6534_;
v___y_6526_ = v___x_6538_;
goto v___jp_6522_;
}
else
{
lean_object* v_val_6539_; 
v_val_6539_ = lean_ctor_get(v___x_6537_, 0);
lean_inc(v_val_6539_);
lean_dec_ref_known(v___x_6537_, 1);
v___y_6523_ = v___y_6531_;
v___y_6524_ = v___y_6533_;
v___y_6525_ = v___y_6534_;
v___y_6526_ = v_val_6539_;
goto v___jp_6522_;
}
}
else
{
lean_object* v_val_6540_; 
lean_dec_ref(v___y_6532_);
v_val_6540_ = lean_ctor_get(v___y_6530_, 0);
lean_inc(v_val_6540_);
lean_dec_ref_known(v___y_6530_, 1);
v___y_6523_ = v___y_6531_;
v___y_6524_ = v___y_6533_;
v___y_6525_ = v___y_6534_;
v___y_6526_ = v_val_6540_;
goto v___jp_6522_;
}
}
v___jp_6541_:
{
if (lean_obj_tag(v___y_6546_) == 0)
{
v___y_6530_ = v___y_6547_;
v___y_6531_ = v___y_6542_;
v___y_6532_ = v___y_6543_;
v___y_6533_ = v___y_6544_;
v___y_6534_ = v___y_6545_;
goto v___jp_6529_;
}
else
{
lean_object* v_val_6548_; lean_object* v___x_6549_; 
v_val_6548_ = lean_ctor_get(v___y_6546_, 0);
lean_inc(v_val_6548_);
lean_dec_ref_known(v___y_6546_, 1);
lean_inc_ref(v___y_6543_);
v___x_6549_ = lean_apply_1(v___y_6543_, v_val_6548_);
if (lean_obj_tag(v___x_6549_) == 0)
{
v___y_6530_ = v___y_6547_;
v___y_6531_ = v___y_6542_;
v___y_6532_ = v___y_6543_;
v___y_6533_ = v___y_6544_;
v___y_6534_ = v___y_6545_;
goto v___jp_6529_;
}
else
{
lean_object* v_val_6550_; 
lean_dec(v___y_6547_);
lean_dec_ref(v___y_6543_);
v_val_6550_ = lean_ctor_get(v___x_6549_, 0);
lean_inc(v_val_6550_);
lean_dec_ref_known(v___x_6549_, 1);
v___y_6523_ = v___y_6542_;
v___y_6524_ = v___y_6544_;
v___y_6525_ = v___y_6545_;
v___y_6526_ = v_val_6550_;
goto v___jp_6522_;
}
}
}
v___jp_6551_:
{
if (lean_obj_tag(v___y_6554_) == 0)
{
v___y_6542_ = v___y_6552_;
v___y_6543_ = v___y_6553_;
v___y_6544_ = v___y_6555_;
v___y_6545_ = v___y_6556_;
v___y_6546_ = v___y_6557_;
v___y_6547_ = v___y_6558_;
goto v___jp_6541_;
}
else
{
lean_dec(v___y_6558_);
v___y_6542_ = v___y_6552_;
v___y_6543_ = v___y_6553_;
v___y_6544_ = v___y_6555_;
v___y_6545_ = v___y_6556_;
v___y_6546_ = v___y_6557_;
v___y_6547_ = v___y_6554_;
goto v___jp_6541_;
}
}
v___jp_6559_:
{
if (lean_obj_tag(v___y_6560_) == 0)
{
v___y_6552_ = v___y_6561_;
v___y_6553_ = v___y_6562_;
v___y_6554_ = v___y_6563_;
v___y_6555_ = v___y_6564_;
v___y_6556_ = v___y_6565_;
v___y_6557_ = v___y_6566_;
v___y_6558_ = v___y_6560_;
goto v___jp_6551_;
}
else
{
lean_object* v_val_6567_; lean_object* v___x_6569_; uint8_t v_isShared_6570_; uint8_t v_isSharedCheck_6576_; 
v_val_6567_ = lean_ctor_get(v___y_6560_, 0);
v_isSharedCheck_6576_ = !lean_is_exclusive(v___y_6560_);
if (v_isSharedCheck_6576_ == 0)
{
v___x_6569_ = v___y_6560_;
v_isShared_6570_ = v_isSharedCheck_6576_;
goto v_resetjp_6568_;
}
else
{
lean_inc(v_val_6567_);
lean_dec(v___y_6560_);
v___x_6569_ = lean_box(0);
v_isShared_6570_ = v_isSharedCheck_6576_;
goto v_resetjp_6568_;
}
v_resetjp_6568_:
{
lean_object* v___x_6571_; lean_object* v___x_6572_; lean_object* v___x_6574_; 
v___x_6571_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11);
v___x_6572_ = lean_int_emod(v_val_6567_, v___x_6571_);
lean_dec(v_val_6567_);
if (v_isShared_6570_ == 0)
{
lean_ctor_set(v___x_6569_, 0, v___x_6572_);
v___x_6574_ = v___x_6569_;
goto v_reusejp_6573_;
}
else
{
lean_object* v_reuseFailAlloc_6575_; 
v_reuseFailAlloc_6575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6575_, 0, v___x_6572_);
v___x_6574_ = v_reuseFailAlloc_6575_;
goto v_reusejp_6573_;
}
v_reusejp_6573_:
{
v___y_6552_ = v___y_6561_;
v___y_6553_ = v___y_6562_;
v___y_6554_ = v___y_6563_;
v___y_6555_ = v___y_6564_;
v___y_6556_ = v___y_6565_;
v___y_6557_ = v___y_6566_;
v___y_6558_ = v___x_6574_;
goto v___jp_6551_;
}
}
}
}
v___jp_6577_:
{
if (lean_obj_tag(v___y_6583_) == 0)
{
lean_dec(v___y_6586_);
v___y_6560_ = v___y_6578_;
v___y_6561_ = v___y_6579_;
v___y_6562_ = v___y_6580_;
v___y_6563_ = v___y_6581_;
v___y_6564_ = v___y_6582_;
v___y_6565_ = v___y_6584_;
v___y_6566_ = v___y_6585_;
goto v___jp_6559_;
}
else
{
lean_object* v_val_6587_; lean_object* v___x_6589_; uint8_t v_isShared_6590_; uint8_t v_isSharedCheck_6597_; 
lean_dec(v___y_6585_);
v_val_6587_ = lean_ctor_get(v___y_6583_, 0);
v_isSharedCheck_6597_ = !lean_is_exclusive(v___y_6583_);
if (v_isSharedCheck_6597_ == 0)
{
v___x_6589_ = v___y_6583_;
v_isShared_6590_ = v_isSharedCheck_6597_;
goto v_resetjp_6588_;
}
else
{
lean_inc(v_val_6587_);
lean_dec(v___y_6583_);
v___x_6589_ = lean_box(0);
v_isShared_6590_ = v_isSharedCheck_6597_;
goto v_resetjp_6588_;
}
v_resetjp_6588_:
{
uint8_t v___x_6591_; uint8_t v___x_6592_; lean_object* v___x_6593_; lean_object* v___x_6595_; 
v___x_6591_ = lean_unbox(v_val_6587_);
lean_dec(v_val_6587_);
v___x_6592_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(v___y_6586_, v___x_6591_);
lean_dec(v___y_6586_);
v___x_6593_ = lean_box(v___x_6592_);
if (v_isShared_6590_ == 0)
{
lean_ctor_set(v___x_6589_, 0, v___x_6593_);
v___x_6595_ = v___x_6589_;
goto v_reusejp_6594_;
}
else
{
lean_object* v_reuseFailAlloc_6596_; 
v_reuseFailAlloc_6596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6596_, 0, v___x_6593_);
v___x_6595_ = v_reuseFailAlloc_6596_;
goto v_reusejp_6594_;
}
v_reusejp_6594_:
{
v___y_6560_ = v___y_6578_;
v___y_6561_ = v___y_6579_;
v___y_6562_ = v___y_6580_;
v___y_6563_ = v___y_6581_;
v___y_6564_ = v___y_6582_;
v___y_6565_ = v___y_6584_;
v___y_6566_ = v___x_6595_;
goto v___jp_6559_;
}
}
}
}
v___jp_6598_:
{
if (lean_obj_tag(v___y_6607_) == 0)
{
if (lean_obj_tag(v___y_6599_) == 0)
{
if (lean_obj_tag(v___y_6608_) == 0)
{
lean_object* v___x_6609_; 
v___x_6609_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6578_ = v___y_6600_;
v___y_6579_ = v___y_6601_;
v___y_6580_ = v___y_6602_;
v___y_6581_ = v___y_6603_;
v___y_6582_ = v___y_6604_;
v___y_6583_ = v___y_6605_;
v___y_6584_ = v___y_6606_;
v___y_6585_ = v___y_6607_;
v___y_6586_ = v___x_6609_;
goto v___jp_6577_;
}
else
{
lean_object* v_val_6610_; 
v_val_6610_ = lean_ctor_get(v___y_6608_, 0);
lean_inc(v_val_6610_);
lean_dec_ref_known(v___y_6608_, 1);
v___y_6578_ = v___y_6600_;
v___y_6579_ = v___y_6601_;
v___y_6580_ = v___y_6602_;
v___y_6581_ = v___y_6603_;
v___y_6582_ = v___y_6604_;
v___y_6583_ = v___y_6605_;
v___y_6584_ = v___y_6606_;
v___y_6585_ = v___y_6607_;
v___y_6586_ = v_val_6610_;
goto v___jp_6577_;
}
}
else
{
lean_object* v_val_6611_; lean_object* v___x_6613_; uint8_t v_isShared_6614_; uint8_t v_isSharedCheck_6621_; 
lean_dec(v___y_6608_);
lean_dec(v___y_6605_);
v_val_6611_ = lean_ctor_get(v___y_6599_, 0);
v_isSharedCheck_6621_ = !lean_is_exclusive(v___y_6599_);
if (v_isSharedCheck_6621_ == 0)
{
v___x_6613_ = v___y_6599_;
v_isShared_6614_ = v_isSharedCheck_6621_;
goto v_resetjp_6612_;
}
else
{
lean_inc(v_val_6611_);
lean_dec(v___y_6599_);
v___x_6613_ = lean_box(0);
v_isShared_6614_ = v_isSharedCheck_6621_;
goto v_resetjp_6612_;
}
v_resetjp_6612_:
{
uint8_t v___x_6615_; uint8_t v___x_6616_; lean_object* v___x_6617_; lean_object* v___x_6619_; 
v___x_6615_ = lean_unbox(v_val_6611_);
lean_dec(v_val_6611_);
v___x_6616_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(v___x_6615_);
v___x_6617_ = lean_box(v___x_6616_);
if (v_isShared_6614_ == 0)
{
lean_ctor_set(v___x_6613_, 0, v___x_6617_);
v___x_6619_ = v___x_6613_;
goto v_reusejp_6618_;
}
else
{
lean_object* v_reuseFailAlloc_6620_; 
v_reuseFailAlloc_6620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6620_, 0, v___x_6617_);
v___x_6619_ = v_reuseFailAlloc_6620_;
goto v_reusejp_6618_;
}
v_reusejp_6618_:
{
v___y_6560_ = v___y_6600_;
v___y_6561_ = v___y_6601_;
v___y_6562_ = v___y_6602_;
v___y_6563_ = v___y_6603_;
v___y_6564_ = v___y_6604_;
v___y_6565_ = v___y_6606_;
v___y_6566_ = v___x_6619_;
goto v___jp_6559_;
}
}
}
}
else
{
lean_dec(v___y_6608_);
lean_dec(v___y_6605_);
lean_dec(v___y_6599_);
v___y_6560_ = v___y_6600_;
v___y_6561_ = v___y_6601_;
v___y_6562_ = v___y_6602_;
v___y_6563_ = v___y_6603_;
v___y_6564_ = v___y_6604_;
v___y_6565_ = v___y_6606_;
v___y_6566_ = v___y_6607_;
goto v___jp_6559_;
}
}
v___jp_6622_:
{
lean_object* v_ofHalfDay_6626_; 
lean_inc(v_K_6473_);
lean_inc(v_h_6472_);
v_ofHalfDay_6626_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__2___boxed), 3, 2);
lean_closure_set(v_ofHalfDay_6626_, 0, v_h_6472_);
lean_closure_set(v_ofHalfDay_6626_, 1, v_K_6473_);
if (lean_obj_tag(v_h_6472_) == 0)
{
if (lean_obj_tag(v_K_6473_) == 0)
{
lean_object* v___x_6627_; 
v___x_6627_ = lean_box(0);
v___y_6599_ = v_b_6470_;
v___y_6600_ = v_k_6474_;
v___y_6601_ = v___y_6625_;
v___y_6602_ = v_ofHalfDay_6626_;
v___y_6603_ = v_H_6475_;
v___y_6604_ = v___y_6623_;
v___y_6605_ = v_B_6471_;
v___y_6606_ = v___y_6624_;
v___y_6607_ = v_a_6469_;
v___y_6608_ = v___x_6627_;
goto v___jp_6598_;
}
else
{
lean_object* v_val_6628_; lean_object* v___x_6630_; uint8_t v_isShared_6631_; uint8_t v_isSharedCheck_6635_; 
v_val_6628_ = lean_ctor_get(v_K_6473_, 0);
v_isSharedCheck_6635_ = !lean_is_exclusive(v_K_6473_);
if (v_isSharedCheck_6635_ == 0)
{
v___x_6630_ = v_K_6473_;
v_isShared_6631_ = v_isSharedCheck_6635_;
goto v_resetjp_6629_;
}
else
{
lean_inc(v_val_6628_);
lean_dec(v_K_6473_);
v___x_6630_ = lean_box(0);
v_isShared_6631_ = v_isSharedCheck_6635_;
goto v_resetjp_6629_;
}
v_resetjp_6629_:
{
lean_object* v___x_6633_; 
if (v_isShared_6631_ == 0)
{
v___x_6633_ = v___x_6630_;
goto v_reusejp_6632_;
}
else
{
lean_object* v_reuseFailAlloc_6634_; 
v_reuseFailAlloc_6634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6634_, 0, v_val_6628_);
v___x_6633_ = v_reuseFailAlloc_6634_;
goto v_reusejp_6632_;
}
v_reusejp_6632_:
{
v___y_6599_ = v_b_6470_;
v___y_6600_ = v_k_6474_;
v___y_6601_ = v___y_6625_;
v___y_6602_ = v_ofHalfDay_6626_;
v___y_6603_ = v_H_6475_;
v___y_6604_ = v___y_6623_;
v___y_6605_ = v_B_6471_;
v___y_6606_ = v___y_6624_;
v___y_6607_ = v_a_6469_;
v___y_6608_ = v___x_6633_;
goto v___jp_6598_;
}
}
}
}
else
{
lean_object* v_val_6636_; lean_object* v___x_6638_; uint8_t v_isShared_6639_; uint8_t v_isSharedCheck_6645_; 
lean_dec(v_K_6473_);
v_val_6636_ = lean_ctor_get(v_h_6472_, 0);
v_isSharedCheck_6645_ = !lean_is_exclusive(v_h_6472_);
if (v_isSharedCheck_6645_ == 0)
{
v___x_6638_ = v_h_6472_;
v_isShared_6639_ = v_isSharedCheck_6645_;
goto v_resetjp_6637_;
}
else
{
lean_inc(v_val_6636_);
lean_dec(v_h_6472_);
v___x_6638_ = lean_box(0);
v_isShared_6639_ = v_isSharedCheck_6645_;
goto v_resetjp_6637_;
}
v_resetjp_6637_:
{
lean_object* v___x_6640_; lean_object* v___x_6641_; lean_object* v___x_6643_; 
v___x_6640_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_6641_ = lean_int_emod(v_val_6636_, v___x_6640_);
lean_dec(v_val_6636_);
if (v_isShared_6639_ == 0)
{
lean_ctor_set(v___x_6638_, 0, v___x_6641_);
v___x_6643_ = v___x_6638_;
goto v_reusejp_6642_;
}
else
{
lean_object* v_reuseFailAlloc_6644_; 
v_reuseFailAlloc_6644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6644_, 0, v___x_6641_);
v___x_6643_ = v_reuseFailAlloc_6644_;
goto v_reusejp_6642_;
}
v_reusejp_6642_:
{
v___y_6599_ = v_b_6470_;
v___y_6600_ = v_k_6474_;
v___y_6601_ = v___y_6625_;
v___y_6602_ = v_ofHalfDay_6626_;
v___y_6603_ = v_H_6475_;
v___y_6604_ = v___y_6623_;
v___y_6605_ = v_B_6471_;
v___y_6606_ = v___y_6624_;
v___y_6607_ = v_a_6469_;
v___y_6608_ = v___x_6643_;
goto v___jp_6598_;
}
}
}
}
v___jp_6646_:
{
if (lean_obj_tag(v___y_6650_) == 0)
{
lean_object* v___x_6652_; lean_object* v___x_6653_; 
v___x_6652_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19);
v___x_6653_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate(v_dateformat_6398_, v___y_6647_, v___x_6652_, v___y_6651_);
v___y_6623_ = v___y_6648_;
v___y_6624_ = v___y_6649_;
v___y_6625_ = v___x_6653_;
goto v___jp_6622_;
}
else
{
lean_object* v_val_6654_; lean_object* v___x_6655_; 
v_val_6654_ = lean_ctor_get(v___y_6650_, 0);
lean_inc(v_val_6654_);
lean_dec_ref_known(v___y_6650_, 1);
v___x_6655_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekDate(v_dateformat_6398_, v___y_6647_, v_val_6654_, v___y_6651_);
lean_dec(v_val_6654_);
v___y_6623_ = v___y_6648_;
v___y_6624_ = v___y_6649_;
v___y_6625_ = v___x_6655_;
goto v___jp_6622_;
}
}
v___jp_6656_:
{
lean_object* v_val_6662_; lean_object* v_fst_6663_; lean_object* v_snd_6664_; lean_object* v___x_6665_; lean_object* v___x_6666_; 
v_val_6662_ = l_Std_Time_ValidDate_ofOrdinal(v___y_6661_, v___y_6657_);
lean_dec(v___y_6657_);
v_fst_6663_ = lean_ctor_get(v_val_6662_, 0);
lean_inc(v_fst_6663_);
v_snd_6664_ = lean_ctor_get(v_val_6662_, 1);
lean_inc(v_snd_6664_);
lean_dec_ref(v_val_6662_);
v___x_6665_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6665_, 0, v___y_6658_);
lean_ctor_set(v___x_6665_, 1, v_fst_6663_);
lean_ctor_set(v___x_6665_, 2, v_snd_6664_);
v___x_6666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6666_, 0, v___x_6665_);
v___y_6623_ = v___y_6659_;
v___y_6624_ = v___y_6660_;
v___y_6625_ = v___x_6666_;
goto v___jp_6622_;
}
v___jp_6667_:
{
uint8_t v___x_6674_; 
v___x_6674_ = lean_int_dec_le(v___y_6671_, v___y_6668_);
if (v___x_6674_ == 0)
{
lean_object* v___x_6675_; 
lean_dec(v___y_6673_);
lean_dec(v___y_6669_);
lean_dec(v___y_6668_);
v___x_6675_ = lean_box(0);
v___y_6623_ = v___y_6670_;
v___y_6624_ = v___y_6672_;
v___y_6625_ = v___x_6675_;
goto v___jp_6622_;
}
else
{
lean_object* v___x_6676_; uint8_t v___x_6677_; 
v___x_6676_ = lean_nat_to_int(v___y_6673_);
v___x_6677_ = lean_int_dec_le(v___y_6668_, v___x_6676_);
lean_dec(v___x_6676_);
if (v___x_6677_ == 0)
{
lean_object* v___x_6678_; 
lean_dec(v___y_6669_);
lean_dec(v___y_6668_);
v___x_6678_ = lean_box(0);
v___y_6623_ = v___y_6670_;
v___y_6624_ = v___y_6672_;
v___y_6625_ = v___x_6678_;
goto v___jp_6622_;
}
else
{
lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; uint8_t v___x_6682_; 
v___x_6679_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0);
v___x_6680_ = lean_int_mod(v___y_6669_, v___x_6679_);
v___x_6681_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6682_ = lean_int_dec_eq(v___x_6680_, v___x_6681_);
lean_dec(v___x_6680_);
if (v___x_6682_ == 0)
{
v___y_6657_ = v___y_6668_;
v___y_6658_ = v___y_6669_;
v___y_6659_ = v___y_6670_;
v___y_6660_ = v___y_6672_;
v___y_6661_ = v___x_6682_;
goto v___jp_6656_;
}
else
{
lean_object* v___x_6683_; lean_object* v___x_6684_; uint8_t v___x_6685_; 
v___x_6683_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_6684_ = lean_int_mod(v___y_6669_, v___x_6683_);
v___x_6685_ = lean_int_dec_eq(v___x_6684_, v___x_6681_);
lean_dec(v___x_6684_);
if (v___x_6685_ == 0)
{
v___y_6657_ = v___y_6668_;
v___y_6658_ = v___y_6669_;
v___y_6659_ = v___y_6670_;
v___y_6660_ = v___y_6672_;
v___y_6661_ = v___x_6682_;
goto v___jp_6656_;
}
else
{
lean_object* v___x_6686_; lean_object* v___x_6687_; uint8_t v___x_6688_; 
v___x_6686_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1);
v___x_6687_ = lean_int_mod(v___y_6669_, v___x_6686_);
v___x_6688_ = lean_int_dec_eq(v___x_6687_, v___x_6681_);
lean_dec(v___x_6687_);
v___y_6657_ = v___y_6668_;
v___y_6658_ = v___y_6669_;
v___y_6659_ = v___y_6670_;
v___y_6660_ = v___y_6672_;
v___y_6661_ = v___x_6688_;
goto v___jp_6656_;
}
}
}
}
}
v___jp_6689_:
{
lean_object* v___x_6695_; 
v___x_6695_ = lean_unsigned_to_nat(365u);
v___y_6668_ = v___y_6690_;
v___y_6669_ = v___y_6691_;
v___y_6670_ = v___y_6692_;
v___y_6671_ = v___y_6693_;
v___y_6672_ = v___y_6694_;
v___y_6673_ = v___x_6695_;
goto v___jp_6667_;
}
v___jp_6696_:
{
lean_object* v___x_6702_; 
v___x_6702_ = lean_unsigned_to_nat(366u);
v___y_6668_ = v___y_6697_;
v___y_6669_ = v___y_6698_;
v___y_6670_ = v___y_6699_;
v___y_6671_ = v___y_6700_;
v___y_6672_ = v___y_6701_;
v___y_6673_ = v___x_6702_;
goto v___jp_6667_;
}
v___jp_6703_:
{
lean_object* v___x_6708_; lean_object* v___x_6709_; lean_object* v___x_6710_; lean_object* v___x_6711_; uint8_t v___x_6712_; 
v___x_6708_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6709_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__0);
v___x_6710_ = lean_int_mod(v___y_6707_, v___x_6709_);
v___x_6711_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6712_ = lean_int_dec_eq(v___x_6710_, v___x_6711_);
lean_dec(v___x_6710_);
if (v___x_6712_ == 0)
{
v___y_6690_ = v___y_6704_;
v___y_6691_ = v___y_6707_;
v___y_6692_ = v___y_6705_;
v___y_6693_ = v___x_6708_;
v___y_6694_ = v___y_6706_;
goto v___jp_6689_;
}
else
{
lean_object* v___x_6713_; lean_object* v___x_6714_; uint8_t v___x_6715_; 
v___x_6713_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2);
v___x_6714_ = lean_int_mod(v___y_6707_, v___x_6713_);
v___x_6715_ = lean_int_dec_eq(v___x_6714_, v___x_6711_);
lean_dec(v___x_6714_);
if (v___x_6715_ == 0)
{
v___y_6697_ = v___y_6704_;
v___y_6698_ = v___y_6707_;
v___y_6699_ = v___y_6705_;
v___y_6700_ = v___x_6708_;
v___y_6701_ = v___y_6706_;
goto v___jp_6696_;
}
else
{
lean_object* v___x_6716_; lean_object* v___x_6717_; uint8_t v___x_6718_; 
v___x_6716_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___closed__1);
v___x_6717_ = lean_int_mod(v___y_6707_, v___x_6716_);
v___x_6718_ = lean_int_dec_eq(v___x_6717_, v___x_6711_);
lean_dec(v___x_6717_);
if (v___x_6718_ == 0)
{
v___y_6690_ = v___y_6704_;
v___y_6691_ = v___y_6707_;
v___y_6692_ = v___y_6705_;
v___y_6693_ = v___x_6708_;
v___y_6694_ = v___y_6706_;
goto v___jp_6689_;
}
else
{
v___y_6697_ = v___y_6704_;
v___y_6698_ = v___y_6707_;
v___y_6699_ = v___y_6705_;
v___y_6700_ = v___x_6708_;
v___y_6701_ = v___y_6706_;
goto v___jp_6696_;
}
}
}
}
v___jp_6719_:
{
if (lean_obj_tag(v___y_6721_) == 0)
{
if (lean_obj_tag(v_Y_6460_) == 1)
{
lean_object* v_val_6726_; lean_object* v___x_6727_; 
lean_dec(v___y_6720_);
v_val_6726_ = lean_ctor_get(v_Y_6460_, 0);
lean_inc(v_val_6726_);
lean_dec_ref_known(v_Y_6460_, 1);
v___x_6727_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_ofWeekYearMonthDay(v_dateformat_6398_, v_val_6726_, v___y_6724_, v___y_6725_);
v___y_6623_ = v___y_6722_;
v___y_6624_ = v___y_6723_;
v___y_6625_ = v___x_6727_;
goto v___jp_6622_;
}
else
{
lean_object* v___x_6728_; 
lean_dec(v___y_6724_);
v___x_6728_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3(v___y_6720_, v___y_6725_, v___y_6721_, v_Y_6460_);
lean_dec(v_Y_6460_);
v___y_6623_ = v___y_6722_;
v___y_6624_ = v___y_6723_;
v___y_6625_ = v___x_6728_;
goto v___jp_6622_;
}
}
else
{
lean_object* v___x_6729_; 
lean_dec(v___y_6724_);
v___x_6729_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__3(v___y_6720_, v___y_6725_, v___y_6721_, v_Y_6460_);
lean_dec(v_Y_6460_);
v___y_6623_ = v___y_6722_;
v___y_6624_ = v___y_6723_;
v___y_6625_ = v___x_6729_;
goto v___jp_6622_;
}
}
v___jp_6730_:
{
if (lean_obj_tag(v_d_6464_) == 0)
{
lean_object* v___x_6735_; 
v___x_6735_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__16);
lean_inc(v___y_6734_);
v___y_6720_ = v___y_6734_;
v___y_6721_ = v___y_6731_;
v___y_6722_ = v___y_6732_;
v___y_6723_ = v___y_6733_;
v___y_6724_ = v___y_6734_;
v___y_6725_ = v___x_6735_;
goto v___jp_6719_;
}
else
{
lean_object* v_val_6736_; 
v_val_6736_ = lean_ctor_get(v_d_6464_, 0);
lean_inc(v_val_6736_);
lean_dec_ref_known(v_d_6464_, 1);
lean_inc(v___y_6734_);
v___y_6720_ = v___y_6734_;
v___y_6721_ = v___y_6731_;
v___y_6722_ = v___y_6732_;
v___y_6723_ = v___y_6733_;
v___y_6724_ = v___y_6734_;
v___y_6725_ = v_val_6736_;
goto v___jp_6719_;
}
}
v___jp_6737_:
{
lean_object* v___x_6741_; 
v___x_6741_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___closed__8);
v___y_6731_ = v___y_6738_;
v___y_6732_ = v___y_6739_;
v___y_6733_ = v___y_6740_;
v___y_6734_ = v___x_6741_;
goto v___jp_6730_;
}
v___jp_6742_:
{
uint8_t v___x_6746_; 
v___x_6746_ = 1;
v___y_6731_ = v___y_6744_;
v___y_6732_ = v___y_6745_;
v___y_6733_ = v___x_6746_;
v___y_6734_ = v_val_6743_;
goto v___jp_6730_;
}
v___jp_6747_:
{
if (lean_obj_tag(v_M_6462_) == 0)
{
if (lean_obj_tag(v_L_6463_) == 0)
{
uint8_t v___x_6751_; 
v___x_6751_ = 1;
if (lean_obj_tag(v_d_6464_) == 0)
{
if (lean_obj_tag(v_D_6461_) == 1)
{
lean_object* v_val_6752_; 
lean_dec(v_c_6468_);
lean_dec(v_e_6467_);
lean_dec(v_E_6466_);
lean_dec(v_w_6465_);
lean_dec(v_Y_6460_);
v_val_6752_ = lean_ctor_get(v_D_6461_, 0);
lean_inc(v_val_6752_);
lean_dec_ref_known(v_D_6461_, 1);
if (lean_obj_tag(v___y_6750_) == 0)
{
lean_object* v_snd_6753_; lean_object* v___x_6754_; 
v_snd_6753_ = lean_ctor_get(v_val_6752_, 1);
lean_inc(v_snd_6753_);
lean_dec(v_val_6752_);
v___x_6754_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6704_ = v_snd_6753_;
v___y_6705_ = v___y_6749_;
v___y_6706_ = v___x_6751_;
v___y_6707_ = v___x_6754_;
goto v___jp_6703_;
}
else
{
lean_object* v_snd_6755_; lean_object* v_val_6756_; 
v_snd_6755_ = lean_ctor_get(v_val_6752_, 1);
lean_inc(v_snd_6755_);
lean_dec(v_val_6752_);
v_val_6756_ = lean_ctor_get(v___y_6750_, 0);
lean_inc(v_val_6756_);
lean_dec_ref_known(v___y_6750_, 1);
v___y_6704_ = v_snd_6755_;
v___y_6705_ = v___y_6749_;
v___y_6706_ = v___x_6751_;
v___y_6707_ = v_val_6756_;
goto v___jp_6703_;
}
}
else
{
lean_dec(v_D_6461_);
if (lean_obj_tag(v___y_6750_) == 0)
{
if (lean_obj_tag(v_Y_6460_) == 1)
{
if (lean_obj_tag(v_e_6467_) == 0)
{
if (lean_obj_tag(v_c_6468_) == 0)
{
if (lean_obj_tag(v_E_6466_) == 0)
{
lean_object* v_val_6757_; uint8_t v_firstDayOfWeek_6758_; 
v_val_6757_ = lean_ctor_get(v_Y_6460_, 0);
lean_inc(v_val_6757_);
lean_dec_ref_known(v_Y_6460_, 1);
v_firstDayOfWeek_6758_ = lean_ctor_get_uint8(v_dateformat_6398_, sizeof(void*)*2);
v___y_6647_ = v_val_6757_;
v___y_6648_ = v___y_6749_;
v___y_6649_ = v___x_6751_;
v___y_6650_ = v_w_6465_;
v___y_6651_ = v_firstDayOfWeek_6758_;
goto v___jp_6646_;
}
else
{
lean_object* v_val_6759_; lean_object* v_val_6760_; uint8_t v___x_6761_; 
v_val_6759_ = lean_ctor_get(v_Y_6460_, 0);
lean_inc(v_val_6759_);
lean_dec_ref_known(v_Y_6460_, 1);
v_val_6760_ = lean_ctor_get(v_E_6466_, 0);
lean_inc(v_val_6760_);
lean_dec_ref_known(v_E_6466_, 1);
v___x_6761_ = lean_unbox(v_val_6760_);
lean_dec(v_val_6760_);
v___y_6647_ = v_val_6759_;
v___y_6648_ = v___y_6749_;
v___y_6649_ = v___x_6751_;
v___y_6650_ = v_w_6465_;
v___y_6651_ = v___x_6761_;
goto v___jp_6646_;
}
}
else
{
lean_object* v_val_6762_; lean_object* v_val_6763_; uint8_t v___x_6764_; 
lean_dec(v_E_6466_);
v_val_6762_ = lean_ctor_get(v_Y_6460_, 0);
lean_inc(v_val_6762_);
lean_dec_ref_known(v_Y_6460_, 1);
v_val_6763_ = lean_ctor_get(v_c_6468_, 0);
lean_inc(v_val_6763_);
lean_dec_ref_known(v_c_6468_, 1);
v___x_6764_ = lean_unbox(v_val_6763_);
lean_dec(v_val_6763_);
v___y_6647_ = v_val_6762_;
v___y_6648_ = v___y_6749_;
v___y_6649_ = v___x_6751_;
v___y_6650_ = v_w_6465_;
v___y_6651_ = v___x_6764_;
goto v___jp_6646_;
}
}
else
{
lean_object* v_val_6765_; lean_object* v_val_6766_; uint8_t v___x_6767_; 
lean_dec(v_c_6468_);
lean_dec(v_E_6466_);
v_val_6765_ = lean_ctor_get(v_Y_6460_, 0);
lean_inc(v_val_6765_);
lean_dec_ref_known(v_Y_6460_, 1);
v_val_6766_ = lean_ctor_get(v_e_6467_, 0);
lean_inc(v_val_6766_);
lean_dec_ref_known(v_e_6467_, 1);
v___x_6767_ = lean_unbox(v_val_6766_);
lean_dec(v_val_6766_);
v___y_6647_ = v_val_6765_;
v___y_6648_ = v___y_6749_;
v___y_6649_ = v___x_6751_;
v___y_6650_ = v_w_6465_;
v___y_6651_ = v___x_6767_;
goto v___jp_6646_;
}
}
else
{
lean_object* v___x_6768_; 
lean_dec(v_c_6468_);
lean_dec(v_e_6467_);
lean_dec(v_E_6466_);
lean_dec(v_w_6465_);
v___x_6768_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(v___y_6750_, v_Y_6460_);
lean_dec(v_Y_6460_);
v___y_6623_ = v___y_6749_;
v___y_6624_ = v___x_6751_;
v___y_6625_ = v___x_6768_;
goto v___jp_6622_;
}
}
else
{
lean_object* v___x_6769_; 
lean_dec(v_c_6468_);
lean_dec(v_e_6467_);
lean_dec(v_E_6466_);
lean_dec(v_w_6465_);
v___x_6769_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(v___y_6750_, v_Y_6460_);
lean_dec(v_Y_6460_);
v___y_6623_ = v___y_6749_;
v___y_6624_ = v___x_6751_;
v___y_6625_ = v___x_6769_;
goto v___jp_6622_;
}
}
}
else
{
lean_dec(v_c_6468_);
lean_dec(v_e_6467_);
lean_dec(v_E_6466_);
lean_dec(v_w_6465_);
lean_dec(v_D_6461_);
v___y_6738_ = v___y_6750_;
v___y_6739_ = v___y_6749_;
v___y_6740_ = v___x_6751_;
goto v___jp_6737_;
}
}
else
{
lean_object* v_val_6770_; 
lean_dec(v_c_6468_);
lean_dec(v_e_6467_);
lean_dec(v_E_6466_);
lean_dec(v_w_6465_);
lean_dec(v_D_6461_);
v_val_6770_ = lean_ctor_get(v_L_6463_, 0);
lean_inc(v_val_6770_);
lean_dec_ref_known(v_L_6463_, 1);
v_val_6743_ = v_val_6770_;
v___y_6744_ = v___y_6750_;
v___y_6745_ = v___y_6749_;
goto v___jp_6742_;
}
}
else
{
lean_object* v_val_6771_; 
lean_dec(v_c_6468_);
lean_dec(v_e_6467_);
lean_dec(v_E_6466_);
lean_dec(v_w_6465_);
lean_dec(v_L_6463_);
lean_dec(v_D_6461_);
v_val_6771_ = lean_ctor_get(v_M_6462_, 0);
lean_inc(v_val_6771_);
lean_dec_ref_known(v_M_6462_, 1);
v_val_6743_ = v_val_6771_;
v___y_6744_ = v___y_6750_;
v___y_6745_ = v___y_6749_;
goto v___jp_6742_;
}
}
v___jp_6772_:
{
uint8_t v___x_6776_; lean_object* v_tz_6777_; 
v___x_6776_ = 0;
v_tz_6777_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_tz_6777_, 0, v___y_6774_);
lean_ctor_set(v_tz_6777_, 1, v___y_6773_);
lean_ctor_set(v_tz_6777_, 2, v___y_6775_);
lean_ctor_set_uint8(v_tz_6777_, sizeof(void*)*3, v___x_6776_);
if (lean_obj_tag(v_u_6459_) == 0)
{
if (lean_obj_tag(v_y_6458_) == 0)
{
lean_dec(v_G_6457_);
v___y_6748_ = v___x_6776_;
v___y_6749_ = v_tz_6777_;
v___y_6750_ = v_y_6458_;
goto v___jp_6747_;
}
else
{
if (lean_obj_tag(v_G_6457_) == 0)
{
lean_object* v_val_6778_; lean_object* v___x_6780_; uint8_t v_isShared_6781_; uint8_t v_isSharedCheck_6787_; 
v_val_6778_ = lean_ctor_get(v_y_6458_, 0);
v_isSharedCheck_6787_ = !lean_is_exclusive(v_y_6458_);
if (v_isSharedCheck_6787_ == 0)
{
v___x_6780_ = v_y_6458_;
v_isShared_6781_ = v_isSharedCheck_6787_;
goto v_resetjp_6779_;
}
else
{
lean_inc(v_val_6778_);
lean_dec(v_y_6458_);
v___x_6780_ = lean_box(0);
v_isShared_6781_ = v_isSharedCheck_6787_;
goto v_resetjp_6779_;
}
v_resetjp_6779_:
{
uint8_t v___x_6782_; lean_object* v___x_6783_; lean_object* v___x_6785_; 
v___x_6782_ = 1;
v___x_6783_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_val_6778_, v___x_6782_);
lean_dec(v_val_6778_);
if (v_isShared_6781_ == 0)
{
lean_ctor_set(v___x_6780_, 0, v___x_6783_);
v___x_6785_ = v___x_6780_;
goto v_reusejp_6784_;
}
else
{
lean_object* v_reuseFailAlloc_6786_; 
v_reuseFailAlloc_6786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6786_, 0, v___x_6783_);
v___x_6785_ = v_reuseFailAlloc_6786_;
goto v_reusejp_6784_;
}
v_reusejp_6784_:
{
v___y_6748_ = v___x_6776_;
v___y_6749_ = v_tz_6777_;
v___y_6750_ = v___x_6785_;
goto v___jp_6747_;
}
}
}
else
{
lean_object* v_val_6788_; lean_object* v_val_6789_; lean_object* v___x_6791_; uint8_t v_isShared_6792_; uint8_t v_isSharedCheck_6798_; 
v_val_6788_ = lean_ctor_get(v_y_6458_, 0);
lean_inc(v_val_6788_);
lean_dec_ref_known(v_y_6458_, 1);
v_val_6789_ = lean_ctor_get(v_G_6457_, 0);
v_isSharedCheck_6798_ = !lean_is_exclusive(v_G_6457_);
if (v_isSharedCheck_6798_ == 0)
{
v___x_6791_ = v_G_6457_;
v_isShared_6792_ = v_isSharedCheck_6798_;
goto v_resetjp_6790_;
}
else
{
lean_inc(v_val_6789_);
lean_dec(v_G_6457_);
v___x_6791_ = lean_box(0);
v_isShared_6792_ = v_isSharedCheck_6798_;
goto v_resetjp_6790_;
}
v_resetjp_6790_:
{
uint8_t v___x_6793_; lean_object* v___x_6794_; lean_object* v___x_6796_; 
v___x_6793_ = lean_unbox(v_val_6789_);
lean_dec(v_val_6789_);
v___x_6794_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_val_6788_, v___x_6793_);
lean_dec(v_val_6788_);
if (v_isShared_6792_ == 0)
{
lean_ctor_set(v___x_6791_, 0, v___x_6794_);
v___x_6796_ = v___x_6791_;
goto v_reusejp_6795_;
}
else
{
lean_object* v_reuseFailAlloc_6797_; 
v_reuseFailAlloc_6797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6797_, 0, v___x_6794_);
v___x_6796_ = v_reuseFailAlloc_6797_;
goto v_reusejp_6795_;
}
v_reusejp_6795_:
{
v___y_6748_ = v___x_6776_;
v___y_6749_ = v_tz_6777_;
v___y_6750_ = v___x_6796_;
goto v___jp_6747_;
}
}
}
}
}
else
{
lean_dec(v_y_6458_);
lean_dec(v_G_6457_);
v___y_6748_ = v___x_6776_;
v___y_6749_ = v_tz_6777_;
v___y_6750_ = v_u_6459_;
goto v___jp_6747_;
}
}
v___jp_6799_:
{
if (lean_obj_tag(v_zabbrev_6484_) == 0)
{
lean_object* v___x_6803_; lean_object* v___x_6804_; 
v___x_6803_ = lean_box(0);
v___x_6804_ = lean_apply_1(v___y_6801_, v___x_6803_);
v___y_6773_ = v___y_6802_;
v___y_6774_ = v___y_6800_;
v___y_6775_ = v___x_6804_;
goto v___jp_6772_;
}
else
{
lean_object* v_val_6805_; 
lean_dec_ref(v___y_6801_);
v_val_6805_ = lean_ctor_get(v_zabbrev_6484_, 0);
lean_inc(v_val_6805_);
lean_dec_ref_known(v_zabbrev_6484_, 1);
v___y_6773_ = v___y_6802_;
v___y_6774_ = v___y_6800_;
v___y_6775_ = v_val_6805_;
goto v___jp_6772_;
}
}
v___jp_6806_:
{
lean_object* v___f_6808_; 
lean_inc(v___y_6807_);
v___f_6808_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__4), 2, 1);
lean_closure_set(v___f_6808_, 0, v___y_6807_);
if (lean_obj_tag(v_V_6482_) == 0)
{
if (lean_obj_tag(v_v_6485_) == 0)
{
if (lean_obj_tag(v_z_6483_) == 0)
{
lean_object* v___x_6809_; lean_object* v___x_6810_; 
v___x_6809_ = lean_box(0);
lean_inc(v___y_6807_);
v___x_6810_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__4(v___y_6807_, v___x_6809_);
v___y_6800_ = v___y_6807_;
v___y_6801_ = v___f_6808_;
v___y_6802_ = v___x_6810_;
goto v___jp_6799_;
}
else
{
lean_object* v_val_6811_; 
v_val_6811_ = lean_ctor_get(v_z_6483_, 0);
lean_inc(v_val_6811_);
lean_dec_ref_known(v_z_6483_, 1);
v___y_6800_ = v___y_6807_;
v___y_6801_ = v___f_6808_;
v___y_6802_ = v_val_6811_;
goto v___jp_6799_;
}
}
else
{
lean_object* v_val_6812_; 
lean_dec(v_z_6483_);
v_val_6812_ = lean_ctor_get(v_v_6485_, 0);
lean_inc(v_val_6812_);
lean_dec_ref_known(v_v_6485_, 1);
v___y_6800_ = v___y_6807_;
v___y_6801_ = v___f_6808_;
v___y_6802_ = v_val_6812_;
goto v___jp_6799_;
}
}
else
{
lean_object* v_val_6813_; 
lean_dec(v_v_6485_);
lean_dec(v_z_6483_);
v_val_6813_ = lean_ctor_get(v_V_6482_, 0);
lean_inc(v_val_6813_);
lean_dec_ref_known(v_V_6482_, 1);
v___y_6800_ = v___y_6807_;
v___y_6801_ = v___f_6808_;
v___y_6802_ = v_val_6813_;
goto v___jp_6799_;
}
}
v___jp_6814_:
{
lean_object* v___x_6815_; 
v___x_6815_ = l_Std_Time_TimeZone_Offset_zero;
v___y_6807_ = v___x_6815_;
goto v___jp_6806_;
}
v___jp_6816_:
{
lean_object* v___x_6818_; 
v___x_6818_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_offsetOfZoneId_x3f(v_val_6817_);
if (lean_obj_tag(v___x_6818_) == 0)
{
goto v___jp_6814_;
}
else
{
lean_object* v_val_6819_; 
v_val_6819_ = lean_ctor_get(v___x_6818_, 0);
lean_inc(v_val_6819_);
lean_dec_ref_known(v___x_6818_, 1);
v___y_6807_ = v_val_6819_;
goto v___jp_6806_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___boxed(lean_object* v_builder_6828_, lean_object* v_aw_6829_, lean_object* v_dateformat_6830_){
_start:
{
lean_object* v_res_6831_; 
v_res_6831_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(v_builder_6828_, v_aw_6829_, v_dateformat_6830_);
lean_dec_ref(v_dateformat_6830_);
return v_res_6831_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(lean_object* v_date_6832_, lean_object* v_config_6833_, lean_object* v_mod_6834_, lean_object* v_rest_6835_, lean_object* v_a_6836_){
_start:
{
if (lean_obj_tag(v_mod_6834_) == 0)
{
lean_object* v_val_6837_; lean_object* v___x_6838_; 
lean_dec(v_rest_6835_);
lean_dec_ref(v_config_6833_);
v_val_6837_ = lean_ctor_get(v_mod_6834_, 0);
lean_inc_ref(v_val_6837_);
lean_dec_ref_known(v_mod_6834_, 1);
v___x_6838_ = l_Std_Internal_Parsec_String_pstring(v_val_6837_, v_a_6836_);
if (lean_obj_tag(v___x_6838_) == 0)
{
lean_object* v_pos_6839_; lean_object* v___x_6841_; uint8_t v_isShared_6842_; uint8_t v_isSharedCheck_6846_; 
v_pos_6839_ = lean_ctor_get(v___x_6838_, 0);
v_isSharedCheck_6846_ = !lean_is_exclusive(v___x_6838_);
if (v_isSharedCheck_6846_ == 0)
{
lean_object* v_unused_6847_; 
v_unused_6847_ = lean_ctor_get(v___x_6838_, 1);
lean_dec(v_unused_6847_);
v___x_6841_ = v___x_6838_;
v_isShared_6842_ = v_isSharedCheck_6846_;
goto v_resetjp_6840_;
}
else
{
lean_inc(v_pos_6839_);
lean_dec(v___x_6838_);
v___x_6841_ = lean_box(0);
v_isShared_6842_ = v_isSharedCheck_6846_;
goto v_resetjp_6840_;
}
v_resetjp_6840_:
{
lean_object* v___x_6844_; 
if (v_isShared_6842_ == 0)
{
lean_ctor_set(v___x_6841_, 1, v_date_6832_);
v___x_6844_ = v___x_6841_;
goto v_reusejp_6843_;
}
else
{
lean_object* v_reuseFailAlloc_6845_; 
v_reuseFailAlloc_6845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6845_, 0, v_pos_6839_);
lean_ctor_set(v_reuseFailAlloc_6845_, 1, v_date_6832_);
v___x_6844_ = v_reuseFailAlloc_6845_;
goto v_reusejp_6843_;
}
v_reusejp_6843_:
{
return v___x_6844_;
}
}
}
else
{
lean_object* v_pos_6848_; lean_object* v_err_6849_; lean_object* v___x_6851_; uint8_t v_isShared_6852_; uint8_t v_isSharedCheck_6856_; 
lean_dec_ref(v_date_6832_);
v_pos_6848_ = lean_ctor_get(v___x_6838_, 0);
v_err_6849_ = lean_ctor_get(v___x_6838_, 1);
v_isSharedCheck_6856_ = !lean_is_exclusive(v___x_6838_);
if (v_isSharedCheck_6856_ == 0)
{
v___x_6851_ = v___x_6838_;
v_isShared_6852_ = v_isSharedCheck_6856_;
goto v_resetjp_6850_;
}
else
{
lean_inc(v_err_6849_);
lean_inc(v_pos_6848_);
lean_dec(v___x_6838_);
v___x_6851_ = lean_box(0);
v_isShared_6852_ = v_isSharedCheck_6856_;
goto v_resetjp_6850_;
}
v_resetjp_6850_:
{
lean_object* v___x_6854_; 
if (v_isShared_6852_ == 0)
{
v___x_6854_ = v___x_6851_;
goto v_reusejp_6853_;
}
else
{
lean_object* v_reuseFailAlloc_6855_; 
v_reuseFailAlloc_6855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6855_, 0, v_pos_6848_);
lean_ctor_set(v_reuseFailAlloc_6855_, 1, v_err_6849_);
v___x_6854_ = v_reuseFailAlloc_6855_;
goto v_reusejp_6853_;
}
v_reusejp_6853_:
{
return v___x_6854_;
}
}
}
}
else
{
lean_object* v_modifier_6857_; lean_object* v___x_6858_; lean_object* v___x_6859_; 
v_modifier_6857_ = lean_ctor_get(v_mod_6834_, 0);
lean_inc_ref_n(v_modifier_6857_, 2);
lean_dec_ref_known(v_mod_6834_, 1);
v___x_6858_ = l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits(v_rest_6835_);
v___x_6859_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(v_config_6833_, v___x_6858_, v_modifier_6857_, v_a_6836_);
if (lean_obj_tag(v___x_6859_) == 0)
{
lean_object* v_pos_6860_; lean_object* v_res_6861_; lean_object* v___x_6863_; uint8_t v_isShared_6864_; uint8_t v_isSharedCheck_6869_; 
v_pos_6860_ = lean_ctor_get(v___x_6859_, 0);
v_res_6861_ = lean_ctor_get(v___x_6859_, 1);
v_isSharedCheck_6869_ = !lean_is_exclusive(v___x_6859_);
if (v_isSharedCheck_6869_ == 0)
{
v___x_6863_ = v___x_6859_;
v_isShared_6864_ = v_isSharedCheck_6869_;
goto v_resetjp_6862_;
}
else
{
lean_inc(v_res_6861_);
lean_inc(v_pos_6860_);
lean_dec(v___x_6859_);
v___x_6863_ = lean_box(0);
v_isShared_6864_ = v_isSharedCheck_6869_;
goto v_resetjp_6862_;
}
v_resetjp_6862_:
{
lean_object* v___x_6865_; lean_object* v___x_6867_; 
v___x_6865_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(v_date_6832_, v_modifier_6857_, v_res_6861_);
if (v_isShared_6864_ == 0)
{
lean_ctor_set(v___x_6863_, 1, v___x_6865_);
v___x_6867_ = v___x_6863_;
goto v_reusejp_6866_;
}
else
{
lean_object* v_reuseFailAlloc_6868_; 
v_reuseFailAlloc_6868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6868_, 0, v_pos_6860_);
lean_ctor_set(v_reuseFailAlloc_6868_, 1, v___x_6865_);
v___x_6867_ = v_reuseFailAlloc_6868_;
goto v_reusejp_6866_;
}
v_reusejp_6866_:
{
return v___x_6867_;
}
}
}
else
{
lean_object* v_pos_6870_; lean_object* v_err_6871_; lean_object* v___x_6873_; uint8_t v_isShared_6874_; uint8_t v_isSharedCheck_6878_; 
lean_dec_ref(v_modifier_6857_);
lean_dec_ref(v_date_6832_);
v_pos_6870_ = lean_ctor_get(v___x_6859_, 0);
v_err_6871_ = lean_ctor_get(v___x_6859_, 1);
v_isSharedCheck_6878_ = !lean_is_exclusive(v___x_6859_);
if (v_isSharedCheck_6878_ == 0)
{
v___x_6873_ = v___x_6859_;
v_isShared_6874_ = v_isSharedCheck_6878_;
goto v_resetjp_6872_;
}
else
{
lean_inc(v_err_6871_);
lean_inc(v_pos_6870_);
lean_dec(v___x_6859_);
v___x_6873_ = lean_box(0);
v_isShared_6874_ = v_isSharedCheck_6878_;
goto v_resetjp_6872_;
}
v_resetjp_6872_:
{
lean_object* v___x_6876_; 
if (v_isShared_6874_ == 0)
{
v___x_6876_ = v___x_6873_;
goto v_reusejp_6875_;
}
else
{
lean_object* v_reuseFailAlloc_6877_; 
v_reuseFailAlloc_6877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6877_, 0, v_pos_6870_);
lean_ctor_set(v_reuseFailAlloc_6877_, 1, v_err_6871_);
v___x_6876_ = v_reuseFailAlloc_6877_;
goto v_reusejp_6875_;
}
v_reusejp_6875_:
{
return v___x_6876_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___redArg(lean_object* v_input_6879_, lean_object* v_config_6880_){
_start:
{
lean_object* v___x_6881_; lean_object* v___x_6882_; 
v___x_6881_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_6882_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_6881_, v_input_6879_);
if (lean_obj_tag(v___x_6882_) == 0)
{
lean_object* v_a_6883_; lean_object* v___x_6885_; uint8_t v_isShared_6886_; uint8_t v_isSharedCheck_6890_; 
lean_dec_ref(v_config_6880_);
v_a_6883_ = lean_ctor_get(v___x_6882_, 0);
v_isSharedCheck_6890_ = !lean_is_exclusive(v___x_6882_);
if (v_isSharedCheck_6890_ == 0)
{
v___x_6885_ = v___x_6882_;
v_isShared_6886_ = v_isSharedCheck_6890_;
goto v_resetjp_6884_;
}
else
{
lean_inc(v_a_6883_);
lean_dec(v___x_6882_);
v___x_6885_ = lean_box(0);
v_isShared_6886_ = v_isSharedCheck_6890_;
goto v_resetjp_6884_;
}
v_resetjp_6884_:
{
lean_object* v___x_6888_; 
if (v_isShared_6886_ == 0)
{
v___x_6888_ = v___x_6885_;
goto v_reusejp_6887_;
}
else
{
lean_object* v_reuseFailAlloc_6889_; 
v_reuseFailAlloc_6889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6889_, 0, v_a_6883_);
v___x_6888_ = v_reuseFailAlloc_6889_;
goto v_reusejp_6887_;
}
v_reusejp_6887_:
{
return v___x_6888_;
}
}
}
else
{
lean_object* v_a_6891_; lean_object* v___x_6893_; uint8_t v_isShared_6894_; uint8_t v_isSharedCheck_6899_; 
v_a_6891_ = lean_ctor_get(v___x_6882_, 0);
v_isSharedCheck_6899_ = !lean_is_exclusive(v___x_6882_);
if (v_isSharedCheck_6899_ == 0)
{
v___x_6893_ = v___x_6882_;
v_isShared_6894_ = v_isSharedCheck_6899_;
goto v_resetjp_6892_;
}
else
{
lean_inc(v_a_6891_);
lean_dec(v___x_6882_);
v___x_6893_ = lean_box(0);
v_isShared_6894_ = v_isSharedCheck_6899_;
goto v_resetjp_6892_;
}
v_resetjp_6892_:
{
lean_object* v___x_6895_; lean_object* v___x_6897_; 
v___x_6895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6895_, 0, v_config_6880_);
lean_ctor_set(v___x_6895_, 1, v_a_6891_);
if (v_isShared_6894_ == 0)
{
lean_ctor_set(v___x_6893_, 0, v___x_6895_);
v___x_6897_ = v___x_6893_;
goto v_reusejp_6896_;
}
else
{
lean_object* v_reuseFailAlloc_6898_; 
v_reuseFailAlloc_6898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6898_, 0, v___x_6895_);
v___x_6897_ = v_reuseFailAlloc_6898_;
goto v_reusejp_6896_;
}
v_reusejp_6896_:
{
return v___x_6897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec(lean_object* v_tz_6900_, lean_object* v_input_6901_, lean_object* v_config_6902_){
_start:
{
lean_object* v___x_6903_; 
v___x_6903_ = l_Std_Time_GenericFormat_spec___redArg(v_input_6901_, v_config_6902_);
return v___x_6903_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___boxed(lean_object* v_tz_6904_, lean_object* v_input_6905_, lean_object* v_config_6906_){
_start:
{
lean_object* v_res_6907_; 
v_res_6907_ = l_Std_Time_GenericFormat_spec(v_tz_6904_, v_input_6905_, v_config_6906_);
lean_dec(v_tz_6904_);
return v_res_6907_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(lean_object* v_msg_6908_){
_start:
{
lean_object* v___x_6909_; lean_object* v___x_6910_; 
v___x_6909_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
v___x_6910_ = lean_panic_fn_borrowed(v___x_6909_, v_msg_6908_);
return v___x_6910_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(lean_object* v_tz_6911_, lean_object* v_msg_6912_){
_start:
{
lean_object* v___x_6913_; 
v___x_6913_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(v_msg_6912_);
return v___x_6913_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___boxed(lean_object* v_tz_6914_, lean_object* v_msg_6915_){
_start:
{
lean_object* v_res_6916_; 
v_res_6916_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(v_tz_6914_, v_msg_6915_);
lean_dec(v_tz_6914_);
return v_res_6916_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21(lean_object* v_tz_6919_, lean_object* v_input_6920_, lean_object* v_config_6921_){
_start:
{
lean_object* v___x_6922_; lean_object* v___x_6923_; 
v___x_6922_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_6923_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_6922_, v_input_6920_);
if (lean_obj_tag(v___x_6923_) == 0)
{
lean_object* v_a_6924_; lean_object* v___x_6925_; lean_object* v___x_6926_; lean_object* v___x_6927_; lean_object* v___x_6928_; lean_object* v___x_6929_; lean_object* v___x_6930_; 
lean_dec_ref(v_config_6921_);
v_a_6924_ = lean_ctor_get(v___x_6923_, 0);
lean_inc(v_a_6924_);
lean_dec_ref_known(v___x_6923_, 1);
v___x_6925_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_6926_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__1));
v___x_6927_ = lean_unsigned_to_nat(935u);
v___x_6928_ = lean_unsigned_to_nat(18u);
v___x_6929_ = l_mkPanicMessageWithDecl(v___x_6925_, v___x_6926_, v___x_6927_, v___x_6928_, v_a_6924_);
lean_dec(v_a_6924_);
v___x_6930_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(v___x_6929_);
return v___x_6930_;
}
else
{
lean_object* v_a_6931_; lean_object* v___x_6932_; 
v_a_6931_ = lean_ctor_get(v___x_6923_, 0);
lean_inc(v_a_6931_);
lean_dec_ref_known(v___x_6923_, 1);
v___x_6932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6932_, 0, v_config_6921_);
lean_ctor_set(v___x_6932_, 1, v_a_6931_);
return v___x_6932_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21___boxed(lean_object* v_tz_6933_, lean_object* v_input_6934_, lean_object* v_config_6935_){
_start:
{
lean_object* v_res_6936_; 
v_res_6936_ = l_Std_Time_GenericFormat_spec_x21(v_tz_6933_, v_input_6934_, v_config_6935_);
lean_dec(v_tz_6933_);
return v_res_6936_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(lean_object* v_config_6940_, lean_object* v_aw_6941_, lean_object* v_builder_6942_, lean_object* v_x_6943_, lean_object* v_a_6944_){
_start:
{
if (lean_obj_tag(v_x_6943_) == 0)
{
lean_object* v_dateformat_6945_; lean_object* v___x_6946_; 
v_dateformat_6945_ = lean_ctor_get(v_config_6940_, 0);
lean_inc_ref(v_dateformat_6945_);
lean_dec_ref(v_config_6940_);
v___x_6946_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(v_builder_6942_, v_aw_6941_, v_dateformat_6945_);
lean_dec_ref(v_dateformat_6945_);
if (lean_obj_tag(v___x_6946_) == 0)
{
lean_object* v___x_6947_; lean_object* v___x_6948_; 
v___x_6947_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1));
v___x_6948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6948_, 0, v_a_6944_);
lean_ctor_set(v___x_6948_, 1, v___x_6947_);
return v___x_6948_;
}
else
{
lean_object* v_val_6949_; lean_object* v___x_6950_; 
v_val_6949_ = lean_ctor_get(v___x_6946_, 0);
lean_inc(v_val_6949_);
lean_dec_ref_known(v___x_6946_, 1);
v___x_6950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6950_, 0, v_a_6944_);
lean_ctor_set(v___x_6950_, 1, v_val_6949_);
return v___x_6950_;
}
}
else
{
lean_object* v_head_6951_; lean_object* v_tail_6952_; lean_object* v___x_6953_; 
v_head_6951_ = lean_ctor_get(v_x_6943_, 0);
lean_inc(v_head_6951_);
v_tail_6952_ = lean_ctor_get(v_x_6943_, 1);
lean_inc_n(v_tail_6952_, 2);
lean_dec_ref_known(v_x_6943_, 2);
lean_inc_ref(v_config_6940_);
v___x_6953_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(v_builder_6942_, v_config_6940_, v_head_6951_, v_tail_6952_, v_a_6944_);
if (lean_obj_tag(v___x_6953_) == 0)
{
lean_object* v_pos_6954_; lean_object* v_res_6955_; 
v_pos_6954_ = lean_ctor_get(v___x_6953_, 0);
lean_inc(v_pos_6954_);
v_res_6955_ = lean_ctor_get(v___x_6953_, 1);
lean_inc(v_res_6955_);
lean_dec_ref_known(v___x_6953_, 2);
v_builder_6942_ = v_res_6955_;
v_x_6943_ = v_tail_6952_;
v_a_6944_ = v_pos_6954_;
goto _start;
}
else
{
lean_object* v_pos_6957_; lean_object* v_err_6958_; lean_object* v___x_6960_; uint8_t v_isShared_6961_; uint8_t v_isSharedCheck_6965_; 
lean_dec(v_tail_6952_);
lean_dec(v_aw_6941_);
lean_dec_ref(v_config_6940_);
v_pos_6957_ = lean_ctor_get(v___x_6953_, 0);
v_err_6958_ = lean_ctor_get(v___x_6953_, 1);
v_isSharedCheck_6965_ = !lean_is_exclusive(v___x_6953_);
if (v_isSharedCheck_6965_ == 0)
{
v___x_6960_ = v___x_6953_;
v_isShared_6961_ = v_isSharedCheck_6965_;
goto v_resetjp_6959_;
}
else
{
lean_inc(v_err_6958_);
lean_inc(v_pos_6957_);
lean_dec(v___x_6953_);
v___x_6960_ = lean_box(0);
v_isShared_6961_ = v_isSharedCheck_6965_;
goto v_resetjp_6959_;
}
v_resetjp_6959_:
{
lean_object* v___x_6963_; 
if (v_isShared_6961_ == 0)
{
v___x_6963_ = v___x_6960_;
goto v_reusejp_6962_;
}
else
{
lean_object* v_reuseFailAlloc_6964_; 
v_reuseFailAlloc_6964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6964_, 0, v_pos_6957_);
lean_ctor_set(v_reuseFailAlloc_6964_, 1, v_err_6958_);
v___x_6963_ = v_reuseFailAlloc_6964_;
goto v_reusejp_6962_;
}
v_reusejp_6962_:
{
return v___x_6963_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(lean_object* v_format_6968_, lean_object* v_config_6969_, lean_object* v_aw_6970_, lean_object* v_a_6971_){
_start:
{
lean_object* v___x_6972_; lean_object* v___x_6973_; 
v___x_6972_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0));
v___x_6973_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(v_config_6969_, v_aw_6970_, v___x_6972_, v_format_6968_, v_a_6971_);
return v___x_6973_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(lean_object* v_config_6977_, lean_object* v_format_6978_, lean_object* v_func_6979_, lean_object* v_a_6980_){
_start:
{
if (lean_obj_tag(v_format_6978_) == 0)
{
lean_dec_ref(v_config_6977_);
if (lean_obj_tag(v_func_6979_) == 0)
{
lean_object* v___x_6981_; lean_object* v___x_6982_; 
v___x_6981_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1));
v___x_6982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6982_, 0, v_a_6980_);
lean_ctor_set(v___x_6982_, 1, v___x_6981_);
return v___x_6982_;
}
else
{
lean_object* v_val_6983_; lean_object* v_fst_6984_; lean_object* v_snd_6985_; lean_object* v___x_6986_; uint8_t v_decide_6987_; 
v_val_6983_ = lean_ctor_get(v_func_6979_, 0);
lean_inc(v_val_6983_);
lean_dec_ref_known(v_func_6979_, 1);
v_fst_6984_ = lean_ctor_get(v_a_6980_, 0);
v_snd_6985_ = lean_ctor_get(v_a_6980_, 1);
v___x_6986_ = lean_string_utf8_byte_size(v_fst_6984_);
v_decide_6987_ = lean_nat_dec_eq(v_snd_6985_, v___x_6986_);
if (v_decide_6987_ == 0)
{
lean_object* v___x_6988_; lean_object* v___x_6989_; 
lean_dec(v_val_6983_);
v___x_6988_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
v___x_6989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6989_, 0, v_a_6980_);
lean_ctor_set(v___x_6989_, 1, v___x_6988_);
return v___x_6989_;
}
else
{
lean_object* v___x_6990_; 
v___x_6990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6990_, 0, v_a_6980_);
lean_ctor_set(v___x_6990_, 1, v_val_6983_);
return v___x_6990_;
}
}
}
else
{
lean_object* v_head_6991_; 
v_head_6991_ = lean_ctor_get(v_format_6978_, 0);
lean_inc(v_head_6991_);
if (lean_obj_tag(v_head_6991_) == 0)
{
lean_object* v_tail_6992_; lean_object* v_val_6993_; lean_object* v___x_6994_; 
v_tail_6992_ = lean_ctor_get(v_format_6978_, 1);
lean_inc(v_tail_6992_);
lean_dec_ref_known(v_format_6978_, 2);
v_val_6993_ = lean_ctor_get(v_head_6991_, 0);
lean_inc_ref(v_val_6993_);
lean_dec_ref_known(v_head_6991_, 1);
v___x_6994_ = l_Std_Internal_Parsec_String_pstring(v_val_6993_, v_a_6980_);
if (lean_obj_tag(v___x_6994_) == 0)
{
lean_object* v_pos_6995_; 
v_pos_6995_ = lean_ctor_get(v___x_6994_, 0);
lean_inc(v_pos_6995_);
lean_dec_ref_known(v___x_6994_, 2);
v_format_6978_ = v_tail_6992_;
v_a_6980_ = v_pos_6995_;
goto _start;
}
else
{
lean_object* v_pos_6997_; lean_object* v_err_6998_; lean_object* v___x_7000_; uint8_t v_isShared_7001_; uint8_t v_isSharedCheck_7005_; 
lean_dec(v_tail_6992_);
lean_dec(v_func_6979_);
lean_dec_ref(v_config_6977_);
v_pos_6997_ = lean_ctor_get(v___x_6994_, 0);
v_err_6998_ = lean_ctor_get(v___x_6994_, 1);
v_isSharedCheck_7005_ = !lean_is_exclusive(v___x_6994_);
if (v_isSharedCheck_7005_ == 0)
{
v___x_7000_ = v___x_6994_;
v_isShared_7001_ = v_isSharedCheck_7005_;
goto v_resetjp_6999_;
}
else
{
lean_inc(v_err_6998_);
lean_inc(v_pos_6997_);
lean_dec(v___x_6994_);
v___x_7000_ = lean_box(0);
v_isShared_7001_ = v_isSharedCheck_7005_;
goto v_resetjp_6999_;
}
v_resetjp_6999_:
{
lean_object* v___x_7003_; 
if (v_isShared_7001_ == 0)
{
v___x_7003_ = v___x_7000_;
goto v_reusejp_7002_;
}
else
{
lean_object* v_reuseFailAlloc_7004_; 
v_reuseFailAlloc_7004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7004_, 0, v_pos_6997_);
lean_ctor_set(v_reuseFailAlloc_7004_, 1, v_err_6998_);
v___x_7003_ = v_reuseFailAlloc_7004_;
goto v_reusejp_7002_;
}
v_reusejp_7002_:
{
return v___x_7003_;
}
}
}
}
else
{
lean_object* v_tail_7006_; lean_object* v_modifier_7007_; lean_object* v___x_7008_; lean_object* v___x_7009_; 
v_tail_7006_ = lean_ctor_get(v_format_6978_, 1);
lean_inc_n(v_tail_7006_, 2);
lean_dec_ref_known(v_format_6978_, 2);
v_modifier_7007_ = lean_ctor_get(v_head_6991_, 0);
lean_inc_ref(v_modifier_7007_);
lean_dec_ref_known(v_head_6991_, 1);
v___x_7008_ = l___private_Std_Time_Format_Basic_0__Std_Time_reservedDigits(v_tail_7006_);
lean_inc_ref(v_config_6977_);
v___x_7009_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(v_config_6977_, v___x_7008_, v_modifier_7007_, v_a_6980_);
if (lean_obj_tag(v___x_7009_) == 0)
{
lean_object* v_pos_7010_; lean_object* v_res_7011_; lean_object* v___x_7012_; 
v_pos_7010_ = lean_ctor_get(v___x_7009_, 0);
lean_inc(v_pos_7010_);
v_res_7011_ = lean_ctor_get(v___x_7009_, 1);
lean_inc(v_res_7011_);
lean_dec_ref_known(v___x_7009_, 2);
v___x_7012_ = lean_apply_1(v_func_6979_, v_res_7011_);
v_format_6978_ = v_tail_7006_;
v_func_6979_ = v___x_7012_;
v_a_6980_ = v_pos_7010_;
goto _start;
}
else
{
lean_object* v_pos_7014_; lean_object* v_err_7015_; lean_object* v___x_7017_; uint8_t v_isShared_7018_; uint8_t v_isSharedCheck_7022_; 
lean_dec(v_tail_7006_);
lean_dec(v_func_6979_);
lean_dec_ref(v_config_6977_);
v_pos_7014_ = lean_ctor_get(v___x_7009_, 0);
v_err_7015_ = lean_ctor_get(v___x_7009_, 1);
v_isSharedCheck_7022_ = !lean_is_exclusive(v___x_7009_);
if (v_isSharedCheck_7022_ == 0)
{
v___x_7017_ = v___x_7009_;
v_isShared_7018_ = v_isSharedCheck_7022_;
goto v_resetjp_7016_;
}
else
{
lean_inc(v_err_7015_);
lean_inc(v_pos_7014_);
lean_dec(v___x_7009_);
v___x_7017_ = lean_box(0);
v_isShared_7018_ = v_isSharedCheck_7022_;
goto v_resetjp_7016_;
}
v_resetjp_7016_:
{
lean_object* v___x_7020_; 
if (v_isShared_7018_ == 0)
{
v___x_7020_ = v___x_7017_;
goto v_reusejp_7019_;
}
else
{
lean_object* v_reuseFailAlloc_7021_; 
v_reuseFailAlloc_7021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7021_, 0, v_pos_7014_);
lean_ctor_set(v_reuseFailAlloc_7021_, 1, v_err_7015_);
v___x_7020_ = v_reuseFailAlloc_7021_;
goto v_reusejp_7019_;
}
v_reusejp_7019_:
{
return v___x_7020_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go(lean_object* v_00_u03b1_7023_, lean_object* v_config_7024_, lean_object* v_format_7025_, lean_object* v_func_7026_, lean_object* v_a_7027_){
_start:
{
lean_object* v___x_7028_; 
v___x_7028_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7024_, v_format_7025_, v_func_7026_, v_a_7027_);
return v___x_7028_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser___redArg(lean_object* v_format_7029_, lean_object* v_config_7030_, lean_object* v_func_7031_, lean_object* v_a_7032_){
_start:
{
lean_object* v___x_7033_; 
v___x_7033_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7030_, v_format_7029_, v_func_7031_, v_a_7032_);
return v___x_7033_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser(lean_object* v_00_u03b1_7034_, lean_object* v_format_7035_, lean_object* v_config_7036_, lean_object* v_func_7037_, lean_object* v_a_7038_){
_start:
{
lean_object* v___x_7039_; 
v___x_7039_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7036_, v_format_7035_, v_func_7037_, v_a_7038_);
return v___x_7039_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse___lam__0(lean_object* v_string_7040_, lean_object* v_config_7041_, lean_object* v_aw_7042_, lean_object* v___y_7043_){
_start:
{
lean_object* v___x_7044_; 
v___x_7044_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(v_string_7040_, v_config_7041_, v_aw_7042_, v___y_7043_);
if (lean_obj_tag(v___x_7044_) == 0)
{
lean_object* v_pos_7045_; lean_object* v_fst_7046_; lean_object* v_snd_7047_; lean_object* v___x_7048_; uint8_t v_decide_7049_; 
v_pos_7045_ = lean_ctor_get(v___x_7044_, 0);
v_fst_7046_ = lean_ctor_get(v_pos_7045_, 0);
v_snd_7047_ = lean_ctor_get(v_pos_7045_, 1);
v___x_7048_ = lean_string_utf8_byte_size(v_fst_7046_);
v_decide_7049_ = lean_nat_dec_eq(v_snd_7047_, v___x_7048_);
if (v_decide_7049_ == 0)
{
lean_object* v___x_7051_; uint8_t v_isShared_7052_; uint8_t v_isSharedCheck_7057_; 
lean_inc(v_pos_7045_);
v_isSharedCheck_7057_ = !lean_is_exclusive(v___x_7044_);
if (v_isSharedCheck_7057_ == 0)
{
lean_object* v_unused_7058_; lean_object* v_unused_7059_; 
v_unused_7058_ = lean_ctor_get(v___x_7044_, 1);
lean_dec(v_unused_7058_);
v_unused_7059_ = lean_ctor_get(v___x_7044_, 0);
lean_dec(v_unused_7059_);
v___x_7051_ = v___x_7044_;
v_isShared_7052_ = v_isSharedCheck_7057_;
goto v_resetjp_7050_;
}
else
{
lean_dec(v___x_7044_);
v___x_7051_ = lean_box(0);
v_isShared_7052_ = v_isSharedCheck_7057_;
goto v_resetjp_7050_;
}
v_resetjp_7050_:
{
lean_object* v___x_7053_; lean_object* v___x_7055_; 
v___x_7053_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_7052_ == 0)
{
lean_ctor_set_tag(v___x_7051_, 1);
lean_ctor_set(v___x_7051_, 1, v___x_7053_);
v___x_7055_ = v___x_7051_;
goto v_reusejp_7054_;
}
else
{
lean_object* v_reuseFailAlloc_7056_; 
v_reuseFailAlloc_7056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7056_, 0, v_pos_7045_);
lean_ctor_set(v_reuseFailAlloc_7056_, 1, v___x_7053_);
v___x_7055_ = v_reuseFailAlloc_7056_;
goto v_reusejp_7054_;
}
v_reusejp_7054_:
{
return v___x_7055_;
}
}
}
else
{
return v___x_7044_;
}
}
else
{
return v___x_7044_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse(lean_object* v_aw_7060_, lean_object* v_format_7061_, lean_object* v_input_7062_){
_start:
{
lean_object* v_config_7063_; lean_object* v_string_7064_; lean_object* v___f_7065_; lean_object* v___x_7066_; 
v_config_7063_ = lean_ctor_get(v_format_7061_, 0);
lean_inc_ref(v_config_7063_);
v_string_7064_ = lean_ctor_get(v_format_7061_, 1);
lean_inc(v_string_7064_);
lean_dec_ref(v_format_7061_);
v___f_7065_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parse___lam__0), 4, 3);
lean_closure_set(v___f_7065_, 0, v_string_7064_);
lean_closure_set(v___f_7065_, 1, v_config_7063_);
lean_closure_set(v___f_7065_, 2, v_aw_7060_);
v___x_7066_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_7065_, v_input_7062_);
return v___x_7066_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(lean_object* v_msg_7067_){
_start:
{
lean_object* v___x_7068_; lean_object* v___x_7069_; 
v___x_7068_ = l_Std_Time_instInhabitedDateTime;
v___x_7069_ = lean_panic_fn_borrowed(v___x_7068_, v_msg_7067_);
return v___x_7069_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse_x21(lean_object* v_aw_7071_, lean_object* v_format_7072_, lean_object* v_input_7073_){
_start:
{
lean_object* v___x_7074_; 
v___x_7074_ = l_Std_Time_GenericFormat_parse(v_aw_7071_, v_format_7072_, v_input_7073_);
if (lean_obj_tag(v___x_7074_) == 0)
{
lean_object* v_a_7075_; lean_object* v___x_7076_; lean_object* v___x_7077_; lean_object* v___x_7078_; lean_object* v___x_7079_; lean_object* v___x_7080_; lean_object* v___x_7081_; 
v_a_7075_ = lean_ctor_get(v___x_7074_, 0);
lean_inc(v_a_7075_);
lean_dec_ref_known(v___x_7074_, 1);
v___x_7076_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_7077_ = ((lean_object*)(l_Std_Time_GenericFormat_parse_x21___closed__0));
v___x_7078_ = lean_unsigned_to_nat(975u);
v___x_7079_ = lean_unsigned_to_nat(18u);
v___x_7080_ = l_mkPanicMessageWithDecl(v___x_7076_, v___x_7077_, v___x_7078_, v___x_7079_, v_a_7075_);
lean_dec(v_a_7075_);
v___x_7081_ = l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(v___x_7080_);
return v___x_7081_;
}
else
{
lean_object* v_a_7082_; 
v_a_7082_ = lean_ctor_get(v___x_7074_, 0);
lean_inc(v_a_7082_);
lean_dec_ref_known(v___x_7074_, 1);
return v_a_7082_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0(lean_object* v_config_7083_, lean_object* v_string_7084_, lean_object* v_builder_7085_, lean_object* v___y_7086_){
_start:
{
lean_object* v___x_7087_; 
v___x_7087_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7083_, v_string_7084_, v_builder_7085_, v___y_7086_);
return v___x_7087_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg(lean_object* v_format_7088_, lean_object* v_builder_7089_, lean_object* v_input_7090_){
_start:
{
lean_object* v_config_7091_; lean_object* v_string_7092_; lean_object* v___f_7093_; lean_object* v___x_7094_; 
v_config_7091_ = lean_ctor_get(v_format_7088_, 0);
lean_inc_ref(v_config_7091_);
v_string_7092_ = lean_ctor_get(v_format_7088_, 1);
lean_inc(v_string_7092_);
lean_dec_ref(v_format_7088_);
v___f_7093_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0), 4, 3);
lean_closure_set(v___f_7093_, 0, v_config_7091_);
lean_closure_set(v___f_7093_, 1, v_string_7092_);
lean_closure_set(v___f_7093_, 2, v_builder_7089_);
v___x_7094_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_7093_, v_input_7090_);
return v___x_7094_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder(lean_object* v_aw_7095_, lean_object* v_00_u03b1_7096_, lean_object* v_format_7097_, lean_object* v_builder_7098_, lean_object* v_input_7099_){
_start:
{
lean_object* v___x_7100_; 
v___x_7100_ = l_Std_Time_GenericFormat_parseBuilder___redArg(v_format_7097_, v_builder_7098_, v_input_7099_);
return v___x_7100_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___boxed(lean_object* v_aw_7101_, lean_object* v_00_u03b1_7102_, lean_object* v_format_7103_, lean_object* v_builder_7104_, lean_object* v_input_7105_){
_start:
{
lean_object* v_res_7106_; 
v_res_7106_ = l_Std_Time_GenericFormat_parseBuilder(v_aw_7101_, v_00_u03b1_7102_, v_format_7103_, v_builder_7104_, v_input_7105_);
lean_dec(v_aw_7101_);
return v_res_7106_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg(lean_object* v_inst_7108_, lean_object* v_format_7109_, lean_object* v_builder_7110_, lean_object* v_input_7111_){
_start:
{
lean_object* v___x_7112_; 
v___x_7112_ = l_Std_Time_GenericFormat_parseBuilder___redArg(v_format_7109_, v_builder_7110_, v_input_7111_);
if (lean_obj_tag(v___x_7112_) == 0)
{
lean_object* v_a_7113_; lean_object* v___x_7114_; lean_object* v___x_7115_; lean_object* v___x_7116_; lean_object* v___x_7117_; lean_object* v___x_7118_; lean_object* v___x_7119_; 
v_a_7113_ = lean_ctor_get(v___x_7112_, 0);
lean_inc(v_a_7113_);
lean_dec_ref_known(v___x_7112_, 1);
v___x_7114_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_7115_ = ((lean_object*)(l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0));
v___x_7116_ = lean_unsigned_to_nat(989u);
v___x_7117_ = lean_unsigned_to_nat(18u);
v___x_7118_ = l_mkPanicMessageWithDecl(v___x_7114_, v___x_7115_, v___x_7116_, v___x_7117_, v_a_7113_);
lean_dec(v_a_7113_);
v___x_7119_ = l_panic___redArg(v_inst_7108_, v___x_7118_);
return v___x_7119_;
}
else
{
lean_object* v_a_7120_; 
v_a_7120_ = lean_ctor_get(v___x_7112_, 0);
lean_inc(v_a_7120_);
lean_dec_ref_known(v___x_7112_, 1);
return v_a_7120_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___boxed(lean_object* v_inst_7121_, lean_object* v_format_7122_, lean_object* v_builder_7123_, lean_object* v_input_7124_){
_start:
{
lean_object* v_res_7125_; 
v_res_7125_ = l_Std_Time_GenericFormat_parseBuilder_x21___redArg(v_inst_7121_, v_format_7122_, v_builder_7123_, v_input_7124_);
lean_dec(v_inst_7121_);
return v_res_7125_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21(lean_object* v_00_u03b1_7126_, lean_object* v_aw_7127_, lean_object* v_inst_7128_, lean_object* v_format_7129_, lean_object* v_builder_7130_, lean_object* v_input_7131_){
_start:
{
lean_object* v___x_7132_; 
v___x_7132_ = l_Std_Time_GenericFormat_parseBuilder_x21___redArg(v_inst_7128_, v_format_7129_, v_builder_7130_, v_input_7131_);
return v___x_7132_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___boxed(lean_object* v_00_u03b1_7133_, lean_object* v_aw_7134_, lean_object* v_inst_7135_, lean_object* v_format_7136_, lean_object* v_builder_7137_, lean_object* v_input_7138_){
_start:
{
lean_object* v_res_7139_; 
v_res_7139_ = l_Std_Time_GenericFormat_parseBuilder_x21(v_00_u03b1_7133_, v_aw_7134_, v_inst_7135_, v_format_7136_, v_builder_7137_, v_input_7138_);
lean_dec(v_inst_7135_);
lean_dec(v_aw_7134_);
return v_res_7139_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(lean_object* v_getInfo_7140_, lean_object* v_dateformat_7141_, lean_object* v_data_7142_, lean_object* v_format_7143_){
_start:
{
if (lean_obj_tag(v_format_7143_) == 0)
{
lean_object* v___x_7144_; 
lean_dec_ref(v_dateformat_7141_);
lean_dec_ref(v_getInfo_7140_);
v___x_7144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7144_, 0, v_data_7142_);
return v___x_7144_;
}
else
{
lean_object* v_head_7145_; 
v_head_7145_ = lean_ctor_get(v_format_7143_, 0);
lean_inc(v_head_7145_);
if (lean_obj_tag(v_head_7145_) == 0)
{
lean_object* v_tail_7146_; lean_object* v_val_7147_; lean_object* v___x_7148_; 
v_tail_7146_ = lean_ctor_get(v_format_7143_, 1);
lean_inc(v_tail_7146_);
lean_dec_ref_known(v_format_7143_, 2);
v_val_7147_ = lean_ctor_get(v_head_7145_, 0);
lean_inc_ref(v_val_7147_);
lean_dec_ref_known(v_head_7145_, 1);
v___x_7148_ = lean_string_append(v_data_7142_, v_val_7147_);
lean_dec_ref(v_val_7147_);
v_data_7142_ = v___x_7148_;
v_format_7143_ = v_tail_7146_;
goto _start;
}
else
{
lean_object* v_tail_7150_; lean_object* v_modifier_7151_; lean_object* v___x_7152_; 
v_tail_7150_ = lean_ctor_get(v_format_7143_, 1);
lean_inc(v_tail_7150_);
lean_dec_ref_known(v_format_7143_, 2);
v_modifier_7151_ = lean_ctor_get(v_head_7145_, 0);
lean_inc_ref_n(v_modifier_7151_, 2);
lean_dec_ref_known(v_head_7145_, 1);
lean_inc_ref(v_getInfo_7140_);
v___x_7152_ = lean_apply_1(v_getInfo_7140_, v_modifier_7151_);
if (lean_obj_tag(v___x_7152_) == 0)
{
lean_object* v___x_7153_; 
lean_dec_ref(v_modifier_7151_);
lean_dec(v_tail_7150_);
lean_dec_ref(v_data_7142_);
lean_dec_ref(v_dateformat_7141_);
lean_dec_ref(v_getInfo_7140_);
v___x_7153_ = lean_box(0);
return v___x_7153_;
}
else
{
lean_object* v_val_7154_; lean_object* v___x_7155_; lean_object* v___x_7156_; 
v_val_7154_ = lean_ctor_get(v___x_7152_, 0);
lean_inc(v_val_7154_);
lean_dec_ref_known(v___x_7152_, 1);
lean_inc_ref(v_dateformat_7141_);
v___x_7155_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_7141_, v_modifier_7151_, v_val_7154_);
v___x_7156_ = lean_string_append(v_data_7142_, v___x_7155_);
lean_dec_ref(v___x_7155_);
v_data_7142_ = v___x_7156_;
v_format_7143_ = v_tail_7150_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___redArg(lean_object* v_format_7158_, lean_object* v_getInfo_7159_){
_start:
{
lean_object* v_config_7160_; lean_object* v_string_7161_; lean_object* v_dateformat_7162_; lean_object* v___x_7163_; lean_object* v___x_7164_; 
v_config_7160_ = lean_ctor_get(v_format_7158_, 0);
lean_inc_ref(v_config_7160_);
v_string_7161_ = lean_ctor_get(v_format_7158_, 1);
lean_inc(v_string_7161_);
lean_dec_ref(v_format_7158_);
v_dateformat_7162_ = lean_ctor_get(v_config_7160_, 0);
lean_inc_ref(v_dateformat_7162_);
lean_dec_ref(v_config_7160_);
v___x_7163_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_7164_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(v_getInfo_7159_, v_dateformat_7162_, v___x_7163_, v_string_7161_);
return v___x_7164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric(lean_object* v_aw_7165_, lean_object* v_format_7166_, lean_object* v_getInfo_7167_){
_start:
{
lean_object* v___x_7168_; 
v___x_7168_ = l_Std_Time_GenericFormat_formatGeneric___redArg(v_format_7166_, v_getInfo_7167_);
return v___x_7168_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___boxed(lean_object* v_aw_7169_, lean_object* v_format_7170_, lean_object* v_getInfo_7171_){
_start:
{
lean_object* v_res_7172_; 
v_res_7172_ = l_Std_Time_GenericFormat_formatGeneric(v_aw_7169_, v_format_7170_, v_getInfo_7171_);
lean_dec(v_aw_7169_);
return v_res_7172_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatParts___redArg(lean_object* v_format_7173_, lean_object* v_date_7174_, lean_object* v_time_7175_, lean_object* v_zone_7176_){
_start:
{
lean_object* v_config_7177_; lean_object* v_dateformat_7178_; lean_object* v___x_7179_; lean_object* v___x_7180_; 
v_config_7177_ = lean_ctor_get(v_format_7173_, 0);
v_dateformat_7178_ = lean_ctor_get(v_config_7177_, 0);
lean_inc_ref(v_dateformat_7178_);
v___x_7179_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_fieldValue_x3f___boxed), 5, 4);
lean_closure_set(v___x_7179_, 0, v_dateformat_7178_);
lean_closure_set(v___x_7179_, 1, v_date_7174_);
lean_closure_set(v___x_7179_, 2, v_time_7175_);
lean_closure_set(v___x_7179_, 3, v_zone_7176_);
v___x_7180_ = l_Std_Time_GenericFormat_formatGeneric___redArg(v_format_7173_, v___x_7179_);
return v___x_7180_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatParts(lean_object* v_aw_7181_, lean_object* v_format_7182_, lean_object* v_date_7183_, lean_object* v_time_7184_, lean_object* v_zone_7185_){
_start:
{
lean_object* v___x_7186_; 
v___x_7186_ = l_Std_Time_GenericFormat_formatParts___redArg(v_format_7182_, v_date_7183_, v_time_7184_, v_zone_7185_);
return v___x_7186_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatParts___boxed(lean_object* v_aw_7187_, lean_object* v_format_7188_, lean_object* v_date_7189_, lean_object* v_time_7190_, lean_object* v_zone_7191_){
_start:
{
lean_object* v_res_7192_; 
v_res_7192_ = l_Std_Time_GenericFormat_formatParts(v_aw_7187_, v_format_7188_, v_date_7189_, v_time_7190_, v_zone_7191_);
lean_dec(v_aw_7187_);
return v_res_7192_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___lam__0(lean_object* v_tz_7193_, lean_object* v_timestamp_7194_, lean_object* v___x_7195_, lean_object* v_x_7196_){
_start:
{
lean_object* v_offset_7197_; lean_object* v_second_7198_; lean_object* v_nano_7199_; lean_object* v___x_7200_; lean_object* v___x_7201_; lean_object* v___x_7202_; lean_object* v_nanos_7203_; lean_object* v___x_7204_; lean_object* v_nanos_7205_; lean_object* v___x_7206_; lean_object* v___x_7207_; lean_object* v___x_7208_; 
v_offset_7197_ = lean_ctor_get(v_tz_7193_, 0);
v_second_7198_ = lean_ctor_get(v_timestamp_7194_, 0);
v_nano_7199_ = lean_ctor_get(v_timestamp_7194_, 1);
v___x_7200_ = lean_nat_to_int(v___x_7195_);
v___x_7201_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_7202_ = lean_int_mul(v_second_7198_, v___x_7201_);
v_nanos_7203_ = lean_int_add(v___x_7202_, v_nano_7199_);
lean_dec(v___x_7202_);
v___x_7204_ = lean_int_mul(v_offset_7197_, v___x_7201_);
v_nanos_7205_ = lean_int_add(v___x_7204_, v___x_7200_);
lean_dec(v___x_7200_);
lean_dec(v___x_7204_);
v___x_7206_ = lean_int_add(v_nanos_7203_, v_nanos_7205_);
lean_dec(v_nanos_7205_);
lean_dec(v_nanos_7203_);
v___x_7207_ = l_Std_Time_Duration_ofNanoseconds(v___x_7206_);
lean_dec(v___x_7206_);
v___x_7208_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_7207_);
return v___x_7208_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___lam__0___boxed(lean_object* v_tz_7209_, lean_object* v_timestamp_7210_, lean_object* v___x_7211_, lean_object* v_x_7212_){
_start:
{
lean_object* v_res_7213_; 
v_res_7213_ = l_Std_Time_GenericFormat_format___lam__0(v_tz_7209_, v_timestamp_7210_, v___x_7211_, v_x_7212_);
lean_dec_ref(v_timestamp_7210_);
lean_dec_ref(v_tz_7209_);
return v_res_7213_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format(lean_object* v_aw_7214_, lean_object* v_format_7215_, lean_object* v_date_7216_){
_start:
{
lean_object* v_date_7218_; lean_object* v_timezone_7219_; 
if (lean_obj_tag(v_aw_7214_) == 0)
{
lean_object* v_a_7229_; lean_object* v_offset_7230_; lean_object* v_name_7231_; lean_object* v_abbreviation_7232_; uint8_t v_isDST_7233_; lean_object* v_timestamp_7234_; uint8_t v___x_7235_; uint8_t v___x_7236_; lean_object* v_ltt_7237_; lean_object* v___x_7238_; lean_object* v___x_7239_; lean_object* v___x_7240_; lean_object* v___x_7241_; lean_object* v_tz_7242_; lean_object* v___f_7243_; lean_object* v___x_7244_; 
v_a_7229_ = lean_ctor_get(v_aw_7214_, 0);
v_offset_7230_ = lean_ctor_get(v_a_7229_, 0);
v_name_7231_ = lean_ctor_get(v_a_7229_, 1);
v_abbreviation_7232_ = lean_ctor_get(v_a_7229_, 2);
v_isDST_7233_ = lean_ctor_get_uint8(v_a_7229_, sizeof(void*)*3);
v_timestamp_7234_ = lean_ctor_get(v_date_7216_, 1);
lean_inc_ref(v_timestamp_7234_);
lean_dec_ref(v_date_7216_);
v___x_7235_ = 0;
v___x_7236_ = 1;
lean_inc_ref(v_name_7231_);
lean_inc_ref(v_abbreviation_7232_);
lean_inc(v_offset_7230_);
v_ltt_7237_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_7237_, 0, v_offset_7230_);
lean_ctor_set(v_ltt_7237_, 1, v_abbreviation_7232_);
lean_ctor_set(v_ltt_7237_, 2, v_name_7231_);
lean_ctor_set_uint8(v_ltt_7237_, sizeof(void*)*3, v_isDST_7233_);
lean_ctor_set_uint8(v_ltt_7237_, sizeof(void*)*3 + 1, v___x_7235_);
lean_ctor_set_uint8(v_ltt_7237_, sizeof(void*)*3 + 2, v___x_7236_);
v___x_7238_ = lean_unsigned_to_nat(0u);
v___x_7239_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_7240_ = lean_box(0);
v___x_7241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_7241_, 0, v_ltt_7237_);
lean_ctor_set(v___x_7241_, 1, v___x_7239_);
lean_ctor_set(v___x_7241_, 2, v___x_7240_);
v_tz_7242_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_7241_, v_timestamp_7234_);
lean_inc_ref(v_tz_7242_);
v___f_7243_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_format___lam__0___boxed), 4, 3);
lean_closure_set(v___f_7243_, 0, v_tz_7242_);
lean_closure_set(v___f_7243_, 1, v_timestamp_7234_);
lean_closure_set(v___f_7243_, 2, v___x_7238_);
v___x_7244_ = lean_mk_thunk(v___f_7243_);
v_date_7218_ = v___x_7244_;
v_timezone_7219_ = v_tz_7242_;
goto v___jp_7217_;
}
else
{
lean_object* v_date_7245_; lean_object* v_timezone_7246_; 
v_date_7245_ = lean_ctor_get(v_date_7216_, 0);
lean_inc_ref(v_date_7245_);
v_timezone_7246_ = lean_ctor_get(v_date_7216_, 3);
lean_inc_ref(v_timezone_7246_);
lean_dec_ref(v_date_7216_);
v_date_7218_ = v_date_7245_;
v_timezone_7219_ = v_timezone_7246_;
goto v___jp_7217_;
}
v___jp_7217_:
{
lean_object* v_pdt_7220_; lean_object* v_date_7221_; lean_object* v_time_7222_; lean_object* v___x_7223_; lean_object* v___x_7224_; lean_object* v___x_7225_; lean_object* v___x_7226_; 
v_pdt_7220_ = lean_thunk_get_own(v_date_7218_);
lean_dec_ref(v_date_7218_);
v_date_7221_ = lean_ctor_get(v_pdt_7220_, 0);
lean_inc_ref(v_date_7221_);
v_time_7222_ = lean_ctor_get(v_pdt_7220_, 1);
lean_inc_ref(v_time_7222_);
lean_dec(v_pdt_7220_);
v___x_7223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7223_, 0, v_date_7221_);
v___x_7224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7224_, 0, v_time_7222_);
v___x_7225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7225_, 0, v_timezone_7219_);
v___x_7226_ = l_Std_Time_GenericFormat_formatParts___redArg(v_format_7215_, v___x_7223_, v___x_7224_, v___x_7225_);
if (lean_obj_tag(v___x_7226_) == 0)
{
lean_object* v___x_7227_; 
v___x_7227_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
return v___x_7227_;
}
else
{
lean_object* v_val_7228_; 
v_val_7228_ = lean_ctor_get(v___x_7226_, 0);
lean_inc(v_val_7228_);
lean_dec_ref_known(v___x_7226_, 1);
return v_val_7228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___boxed(lean_object* v_aw_7247_, lean_object* v_format_7248_, lean_object* v_date_7249_){
_start:
{
lean_object* v_res_7250_; 
v_res_7250_ = l_Std_Time_GenericFormat_format(v_aw_7247_, v_format_7248_, v_date_7249_);
lean_dec(v_aw_7247_);
return v_res_7250_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(lean_object* v_dateformat_7251_, lean_object* v_data_7252_, lean_object* v_format_7253_){
_start:
{
if (lean_obj_tag(v_format_7253_) == 0)
{
lean_dec_ref(v_dateformat_7251_);
return v_data_7252_;
}
else
{
lean_object* v_head_7254_; 
v_head_7254_ = lean_ctor_get(v_format_7253_, 0);
lean_inc(v_head_7254_);
if (lean_obj_tag(v_head_7254_) == 0)
{
lean_object* v_tail_7255_; lean_object* v_val_7256_; lean_object* v___x_7257_; 
v_tail_7255_ = lean_ctor_get(v_format_7253_, 1);
lean_inc(v_tail_7255_);
lean_dec_ref_known(v_format_7253_, 2);
v_val_7256_ = lean_ctor_get(v_head_7254_, 0);
lean_inc_ref(v_val_7256_);
lean_dec_ref_known(v_head_7254_, 1);
v___x_7257_ = lean_string_append(v_data_7252_, v_val_7256_);
lean_dec_ref(v_val_7256_);
v_data_7252_ = v___x_7257_;
v_format_7253_ = v_tail_7255_;
goto _start;
}
else
{
lean_object* v_tail_7259_; lean_object* v_modifier_7260_; lean_object* v___f_7261_; 
v_tail_7259_ = lean_ctor_get(v_format_7253_, 1);
lean_inc(v_tail_7259_);
lean_dec_ref_known(v_format_7253_, 2);
v_modifier_7260_ = lean_ctor_get(v_head_7254_, 0);
lean_inc_ref(v_modifier_7260_);
lean_dec_ref_known(v_head_7254_, 1);
v___f_7261_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0), 5, 4);
lean_closure_set(v___f_7261_, 0, v_dateformat_7251_);
lean_closure_set(v___f_7261_, 1, v_modifier_7260_);
lean_closure_set(v___f_7261_, 2, v_data_7252_);
lean_closure_set(v___f_7261_, 3, v_tail_7259_);
return v___f_7261_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0(lean_object* v_dateformat_7262_, lean_object* v_modifier_7263_, lean_object* v_data_7264_, lean_object* v_tail_7265_, lean_object* v___y_7266_){
_start:
{
lean_object* v___x_7267_; lean_object* v___x_7268_; lean_object* v___x_7269_; 
lean_inc_ref(v_dateformat_7262_);
v___x_7267_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_7262_, v_modifier_7263_, v___y_7266_);
v___x_7268_ = lean_string_append(v_data_7264_, v___x_7267_);
lean_dec_ref(v___x_7267_);
v___x_7269_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(v_dateformat_7262_, v___x_7268_, v_tail_7265_);
return v___x_7269_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___redArg(lean_object* v_format_7270_){
_start:
{
lean_object* v_config_7271_; lean_object* v_string_7272_; lean_object* v_dateformat_7273_; lean_object* v___x_7274_; lean_object* v___x_7275_; 
v_config_7271_ = lean_ctor_get(v_format_7270_, 0);
lean_inc_ref(v_config_7271_);
v_string_7272_ = lean_ctor_get(v_format_7270_, 1);
lean_inc(v_string_7272_);
lean_dec_ref(v_format_7270_);
v_dateformat_7273_ = lean_ctor_get(v_config_7271_, 0);
lean_inc_ref(v_dateformat_7273_);
lean_dec_ref(v_config_7271_);
v___x_7274_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_7275_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(v_dateformat_7273_, v___x_7274_, v_string_7272_);
return v___x_7275_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder(lean_object* v_aw_7276_, lean_object* v_format_7277_){
_start:
{
lean_object* v___x_7278_; 
v___x_7278_ = l_Std_Time_GenericFormat_formatBuilder___redArg(v_format_7277_);
return v___x_7278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___boxed(lean_object* v_aw_7279_, lean_object* v_format_7280_){
_start:
{
lean_object* v_res_7281_; 
v_res_7281_ = l_Std_Time_GenericFormat_formatBuilder(v_aw_7279_, v_format_7280_);
lean_dec(v_aw_7279_);
return v_res_7281_;
}
}
lean_object* runtime_initialize_Std_Time_Zoned(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Format_Modifier(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Format_DateFormat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format_Modifier(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format_DateFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedFormatConfig_default = _init_l_Std_Time_instInhabitedFormatConfig_default();
lean_mark_persistent(l_Std_Time_instInhabitedFormatConfig_default);
l_Std_Time_instInhabitedFormatConfig = _init_l_Std_Time_instInhabitedFormatConfig();
lean_mark_persistent(l_Std_Time_instInhabitedFormatConfig);
l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1 = _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1);
l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1 = _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1);
l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1 = _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Zoned(uint8_t builtin);
lean_object* initialize_Std_Time_Format_Modifier(uint8_t builtin);
lean_object* initialize_Std_Time_Format_DateFormat(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format_Modifier(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format_DateFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Format_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
