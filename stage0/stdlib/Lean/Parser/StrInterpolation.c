// Lean compiler output
// Module: Lean.Parser.StrInterpolation
// Imports: public import Lean.Parser.Basic
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
lean_object* l_Lean_Parser_withoutPosition(lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo(lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t);
lean_object* l_Lean_Parser_quotedCharCoreFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharForStrInterpolant(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharForStrInterpolant___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "interpolatedStrLitKind"};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__0 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 181, 130, 246, 88, 58, 26, 43)}};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__1 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__1_value;
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'}'"};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__2 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__2_value;
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__3 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4_value;
static const lean_closure_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_isQuotableCharForStrInterpolant___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__5 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__5_value;
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unterminated string literal"};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__6 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_interpolatedStrFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolated string"};
static const lean_object* l_Lean_Parser_interpolatedStrFn___closed__0 = (const lean_object*)&l_Lean_Parser_interpolatedStrFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_interpolatedStrFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_interpolatedStrNoAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_Parser_interpolatedStrNoAntiquot___closed__0 = (const lean_object*)&l_Lean_Parser_interpolatedStrNoAntiquot___closed__0_value;
static lean_once_cell_t l_Lean_Parser_interpolatedStrNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_interpolatedStrNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_interpolatedStrNoAntiquot(lean_object*);
static lean_once_cell_t l_Lean_Parser_interpolatedStr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_interpolatedStr___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_interpolatedStr(lean_object*);
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_interpolatedStrNoAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 182, 82, 21, 251, 127, 209, 38)}};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2_value;
static const lean_string_object l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 840, .m_capacity = 840, .m_length = 839, .m_data = "The parser `interpolatedStr(p)` parses a string literal like `\"foo\"` (see `str`), but the string\nmay also contain `{}` escapes, and within the escapes the parser `p` is used. For example,\n`interpolatedStr(term)` will parse `\"foo {2 + 2}\"`, where `2 + 2` is parsed as a term rather than\nas a string. Note that the full Lean term grammar is available here, including string literals,\nso for example `\"foo {\"bar\" ++ \"baz\"}\"` is a legal interpolated string (which evaluates to\n`foo barbaz`).\n\nThis parser has arity 1, and returns a `interpolatedStrKind` with an odd number of arguments,\nalternating between chunks of literal text and results from `p`. The literal chunks contain\nuninterpreted substrings of the input. For example, `\"foo\\n{2 + 2}\"` would have three arguments:\nan atom `\"foo\\n{`, the parsed `2 + 2` term, and then the atom `}\"`."};
static const lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__3 = (const lean_object*)&l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharForStrInterpolant(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 123;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Parser_isQuotableCharDefault(v_c_1_);
return v___x_4_;
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharForStrInterpolant___boxed(lean_object* v_c_5_){
_start:
{
uint32_t v_c_boxed_6_; uint8_t v_res_7_; lean_object* v_r_8_; 
v_c_boxed_6_ = lean_unbox_uint32(v_c_5_);
lean_dec(v_c_5_);
v_res_7_ = l_Lean_Parser_isQuotableCharForStrInterpolant(v_c_boxed_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse_spec__0(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
if (lean_obj_tag(v_x_9_) == 0)
{
if (lean_obj_tag(v_x_10_) == 0)
{
uint8_t v___x_11_; 
v___x_11_ = 1;
return v___x_11_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
else
{
if (lean_obj_tag(v_x_10_) == 0)
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
else
{
lean_object* v_val_14_; lean_object* v_val_15_; uint8_t v___x_16_; 
v_val_14_ = lean_ctor_get(v_x_9_, 0);
v_val_15_ = lean_ctor_get(v_x_10_, 0);
v___x_16_ = l_Lean_Parser_instBEqError_beq(v_val_14_, v_val_15_);
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse_spec__0___boxed(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_instBEqOption_beq___at___00__private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse_spec__0(v_x_17_, v_x_18_);
lean_dec(v_x_18_);
lean_dec(v_x_17_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse(lean_object* v_p_30_, lean_object* v_stackSize_31_, lean_object* v_startPos_32_, lean_object* v_c_33_, lean_object* v_s_34_){
_start:
{
lean_object* v_pos_35_; lean_object* v_toInputContext_36_; uint8_t v___x_37_; 
v_pos_35_ = lean_ctor_get(v_s_34_, 2);
v_toInputContext_36_ = lean_ctor_get(v_c_33_, 0);
v___x_37_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_36_, v_pos_35_);
if (v___x_37_ == 0)
{
lean_object* v_inputString_38_; uint32_t v_curr_39_; lean_object* v___x_40_; lean_object* v_s_41_; uint32_t v___x_42_; uint8_t v___x_43_; 
v_inputString_38_ = lean_ctor_get(v_toInputContext_36_, 0);
v_curr_39_ = lean_string_utf8_get(v_inputString_38_, v_pos_35_);
v___x_40_ = lean_string_utf8_next(v_inputString_38_, v_pos_35_);
v_s_41_ = l_Lean_Parser_ParserState_setPos(v_s_34_, v___x_40_);
v___x_42_ = 34;
v___x_43_ = lean_uint32_dec_eq(v_curr_39_, v___x_42_);
if (v___x_43_ == 0)
{
uint32_t v___x_44_; uint8_t v___x_45_; 
v___x_44_ = 92;
v___x_45_ = lean_uint32_dec_eq(v_curr_39_, v___x_44_);
if (v___x_45_ == 0)
{
uint32_t v___x_46_; uint8_t v___x_47_; 
v___x_46_ = 123;
v___x_47_ = lean_uint32_dec_eq(v_curr_39_, v___x_46_);
if (v___x_47_ == 0)
{
v_s_34_ = v_s_41_;
goto _start;
}
else
{
lean_object* v___x_49_; lean_object* v_s_50_; lean_object* v_s_51_; lean_object* v_pos_52_; lean_object* v_errorMsg_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__1));
lean_inc_ref_n(v_c_33_, 2);
v_s_50_ = l_Lean_Parser_mkNodeToken(v___x_49_, v_startPos_32_, v___x_47_, v_c_33_, v_s_41_);
lean_inc_ref(v_p_30_);
v_s_51_ = lean_apply_2(v_p_30_, v_c_33_, v_s_50_);
v_pos_52_ = lean_ctor_get(v_s_51_, 2);
lean_inc(v_pos_52_);
v_errorMsg_53_ = lean_ctor_get(v_s_51_, 4);
lean_inc(v_errorMsg_53_);
v___x_54_ = lean_box(0);
v___x_55_ = l_instBEqOption_beq___at___00__private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse_spec__0(v_errorMsg_53_, v___x_54_);
lean_dec(v_errorMsg_53_);
if (v___x_55_ == 0)
{
lean_dec(v_pos_52_);
lean_dec_ref(v_c_33_);
lean_dec(v_stackSize_31_);
lean_dec_ref(v_p_30_);
return v_s_51_;
}
else
{
uint32_t v_curr_56_; uint32_t v___x_57_; uint8_t v___x_58_; 
v_curr_56_ = lean_string_utf8_get(v_inputString_38_, v_pos_52_);
v___x_57_ = 125;
v___x_58_ = lean_uint32_dec_eq(v_curr_56_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v_s_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
lean_dec(v_pos_52_);
lean_dec_ref(v_c_33_);
lean_dec_ref(v_p_30_);
v___x_59_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__2));
v_s_60_ = l_Lean_Parser_ParserState_mkError(v_s_51_, v___x_59_);
v___x_61_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4));
v___x_62_ = l_Lean_Parser_ParserState_mkNode(v_s_60_, v___x_61_, v_stackSize_31_);
lean_dec(v_stackSize_31_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v_s_64_; 
v___x_63_ = lean_string_utf8_next(v_inputString_38_, v_pos_52_);
v_s_64_ = l_Lean_Parser_ParserState_setPos(v_s_51_, v___x_63_);
v_startPos_32_ = v_pos_52_;
v_s_34_ = v_s_64_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__5));
v___x_67_ = lean_box(v___x_45_);
v___x_68_ = lean_alloc_closure((void*)(l_Lean_Parser_quotedCharCoreFn___boxed), 4, 2);
lean_closure_set(v___x_68_, 0, v___x_66_);
lean_closure_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_closure((void*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse), 5, 3);
lean_closure_set(v___x_69_, 0, v_p_30_);
lean_closure_set(v___x_69_, 1, v_stackSize_31_);
lean_closure_set(v___x_69_, 2, v_startPos_32_);
v___x_70_ = l_Lean_Parser_andthenFn(v___x_68_, v___x_69_, v_c_33_, v_s_41_);
return v___x_70_;
}
}
else
{
lean_object* v___x_71_; lean_object* v_s_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
lean_dec_ref(v_p_30_);
v___x_71_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__1));
v_s_72_ = l_Lean_Parser_mkNodeToken(v___x_71_, v_startPos_32_, v___x_43_, v_c_33_, v_s_41_);
v___x_73_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4));
v___x_74_ = l_Lean_Parser_ParserState_mkNode(v_s_72_, v___x_73_, v_stackSize_31_);
lean_dec(v_stackSize_31_);
return v___x_74_;
}
}
else
{
lean_object* v___x_75_; lean_object* v_s_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
lean_dec_ref(v_c_33_);
lean_dec(v_startPos_32_);
lean_dec_ref(v_p_30_);
v___x_75_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__6));
v_s_76_ = l_Lean_Parser_ParserState_mkError(v_s_34_, v___x_75_);
v___x_77_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4));
v___x_78_ = l_Lean_Parser_ParserState_mkNode(v_s_76_, v___x_77_, v_stackSize_31_);
lean_dec(v_stackSize_31_);
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_interpolatedStrFn(lean_object* v_p_80_, lean_object* v_c_81_, lean_object* v_s_82_){
_start:
{
lean_object* v_pos_83_; lean_object* v_toInputContext_84_; uint8_t v___x_85_; 
v_pos_83_ = lean_ctor_get(v_s_82_, 2);
v_toInputContext_84_ = lean_ctor_get(v_c_81_, 0);
v___x_85_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_84_, v_pos_83_);
if (v___x_85_ == 0)
{
lean_object* v_inputString_86_; uint32_t v_curr_87_; uint32_t v___x_88_; uint8_t v___x_89_; 
v_inputString_86_ = lean_ctor_get(v_toInputContext_84_, 0);
v_curr_87_ = lean_string_utf8_get(v_inputString_86_, v_pos_83_);
v___x_88_ = 34;
v___x_89_ = lean_uint32_dec_eq(v_curr_87_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec_ref(v_c_81_);
lean_dec_ref(v_p_80_);
v___x_90_ = ((lean_object*)(l_Lean_Parser_interpolatedStrFn___closed__0));
v___x_91_ = l_Lean_Parser_ParserState_mkError(v_s_82_, v___x_90_);
return v___x_91_;
}
else
{
lean_object* v_stackSize_92_; lean_object* v_s_93_; lean_object* v___x_94_; 
lean_inc(v_pos_83_);
v_stackSize_92_ = l_Lean_Parser_ParserState_stackSize(v_s_82_);
v_s_93_ = l_Lean_Parser_ParserState_next(v_s_82_, v_c_81_, v_pos_83_);
v___x_94_ = l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse(v_p_80_, v_stackSize_92_, v_pos_83_, v_c_81_, v_s_93_);
return v___x_94_;
}
}
else
{
lean_object* v___x_95_; lean_object* v___x_96_; 
lean_dec_ref(v_c_81_);
lean_dec_ref(v_p_80_);
v___x_95_ = lean_box(0);
v___x_96_ = l_Lean_Parser_ParserState_mkEOIError(v_s_82_, v___x_95_);
return v___x_96_;
}
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStrNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = ((lean_object*)(l_Lean_Parser_interpolatedStrNoAntiquot___closed__0));
v___x_99_ = l_Lean_Parser_mkAtomicInfo(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_interpolatedStrNoAntiquot(lean_object* v_p_100_){
_start:
{
lean_object* v___x_101_; lean_object* v_fn_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_111_; 
v___x_101_ = l_Lean_Parser_withoutPosition(v_p_100_);
v_fn_102_ = lean_ctor_get(v___x_101_, 1);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_111_ == 0)
{
lean_object* v_unused_112_; 
v_unused_112_ = lean_ctor_get(v___x_101_, 0);
lean_dec(v_unused_112_);
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_111_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_fn_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_111_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_106_ = lean_obj_once(&l_Lean_Parser_interpolatedStrNoAntiquot___closed__1, &l_Lean_Parser_interpolatedStrNoAntiquot___closed__1_once, _init_l_Lean_Parser_interpolatedStrNoAntiquot___closed__1);
v___x_107_ = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStrFn), 3, 1);
lean_closure_set(v___x_107_, 0, v_fn_102_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 1, v___x_107_);
lean_ctor_set(v___x_104_, 0, v___x_106_);
v___x_109_ = v___x_104_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
static lean_object* _init_l_Lean_Parser_interpolatedStr___closed__0(void){
_start:
{
uint8_t v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_113_ = 0;
v___x_114_ = 1;
v___x_115_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStrFn_parse___closed__4));
v___x_116_ = ((lean_object*)(l_Lean_Parser_interpolatedStrNoAntiquot___closed__0));
v___x_117_ = l_Lean_Parser_mkAntiquot(v___x_116_, v___x_115_, v___x_114_, v___x_113_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_interpolatedStr(lean_object* v_p_118_){
_start:
{
lean_object* v___x_119_; lean_object* v_fn_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_131_; 
v___x_119_ = l_Lean_Parser_withoutPosition(v_p_118_);
v_fn_120_ = lean_ctor_get(v___x_119_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_131_ == 0)
{
lean_object* v_unused_132_; 
v_unused_132_ = lean_ctor_get(v___x_119_, 0);
lean_dec(v_unused_132_);
v___x_122_ = v___x_119_;
v_isShared_123_ = v_isSharedCheck_131_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_fn_120_);
lean_dec(v___x_119_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_131_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_124_ = lean_obj_once(&l_Lean_Parser_interpolatedStr___closed__0, &l_Lean_Parser_interpolatedStr___closed__0_once, _init_l_Lean_Parser_interpolatedStr___closed__0);
v___x_125_ = lean_obj_once(&l_Lean_Parser_interpolatedStrNoAntiquot___closed__1, &l_Lean_Parser_interpolatedStrNoAntiquot___closed__1_once, _init_l_Lean_Parser_interpolatedStrNoAntiquot___closed__1);
v___x_126_ = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStrFn), 3, 1);
lean_closure_set(v___x_126_, 0, v_fn_120_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v___x_126_);
lean_ctor_set(v___x_122_, 0, v___x_125_);
v___x_128_ = v___x_122_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___x_126_);
v___x_128_ = v_reuseFailAlloc_130_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_Parser_withAntiquot(v___x_124_, v___x_128_);
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1(){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_141_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__2));
v___x_142_ = ((lean_object*)(l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___closed__3));
v___x_143_ = l_Lean_addBuiltinDocString(v___x_141_, v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1___boxed(lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1();
return v_res_145_;
}
}
lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_StrInterpolation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_StrInterpolation_0__Lean_Parser_interpolatedStr___regBuiltin_Lean_Parser_interpolatedStr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_StrInterpolation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_StrInterpolation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_StrInterpolation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_StrInterpolation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_StrInterpolation(builtin);
}
#ifdef __cplusplus
}
#endif
