// Lean compiler output
// Module: Init.Data.String.Substring
// Imports: public import Init.Data.String.Slice.Pattern public import Init.Data.String.Iterate import Init.Data.Option.BasicAux
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Char_isWhitespace___boxed(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t l_String_Pos_Raw_substrEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(lean_object*);
lean_object* l_String_Slice_Pattern_ToForwardSearcher_DefaultForwardSearcher_instIteratorLoopIdSearchStep___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ToForwardSearcher_DefaultForwardSearcher_iter___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
uint8_t l_String_Slice_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
lean_object* l_String_Slice_revPositions(lean_object*);
lean_object* l_String_Slice_Pos_skipWhile___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_ofSlice(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_toSlice_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_substring_isempty(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_isEmptyImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_toString(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_toString___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_substring_tostring(lean_object*);
LEAN_EXPORT uint32_t l_Substring_Raw_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t lean_substring_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_getImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_get_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_get_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_prev___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_substring_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_nextn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_prevn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_prevn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Substring_Raw_front(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_front___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_substring_front(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_frontImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_posOf___lam__0(lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_posOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_posOf(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Substring_Raw_posOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_drop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_substring_drop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_dropRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeRight(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_atEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_atEnd___boxed(lean_object*, lean_object*);
static const lean_string_object l_Substring_Raw_extract___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Substring_Raw_extract___closed__0 = (const lean_object*)&l_Substring_Raw_extract___closed__0_value;
static const lean_ctor_object l_Substring_Raw_extract___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Substring_Raw_extract___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Substring_Raw_extract___closed__1 = (const lean_object*)&l_Substring_Raw_extract___closed__1_value;
LEAN_EXPORT lean_object* l_Substring_Raw_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_substring_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_splitOn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_splitOn_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_splitOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_splitOn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Substring_Raw_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Substring_Raw_foldl___redArg___closed__0 = (const lean_object*)&l_Substring_Raw_foldl___redArg___closed__0_value;
static const lean_string_object l_Substring_Raw_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Substring_Raw_foldl___redArg___closed__1 = (const lean_object*)&l_Substring_Raw_foldl___redArg___closed__1_value;
static const lean_string_object l_Substring_Raw_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Substring_Raw_foldl___redArg___closed__2 = (const lean_object*)&l_Substring_Raw_foldl___redArg___closed__2_value;
static lean_once_cell_t l_Substring_Raw_foldl___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Substring_Raw_foldl___redArg___closed__3;
LEAN_EXPORT lean_object* l_Substring_Raw_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_foldr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_any___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Substring_Raw_Internal_allImpl_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Substring_Raw_Internal_allImpl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Substring_Raw_Internal_allImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_substring_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_allImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_contains___lam__0(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Substring_Raw_contains___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_contains(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Substring_Raw_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00Substring_Raw_Internal_takeWhileImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00Substring_Raw_Internal_takeWhileImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_substring_takewhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_dropWhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_dropRightWhile(lean_object*, lean_object*);
static const lean_closure_object l_Substring_Raw_trimLeft___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Char_isWhitespace___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Substring_Raw_trimLeft___closed__0 = (const lean_object*)&l_Substring_Raw_trimLeft___closed__0_value;
LEAN_EXPORT lean_object* l_Substring_Raw_trimLeft(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_trimRight(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_trim(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_isNat___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_isNat___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_isNat(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_isNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_toNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_repair(lean_object*);
LEAN_EXPORT uint8_t l_Substring_Raw_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_substring_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_beqImpl___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Substring_Raw_hasBeq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Substring_Raw_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Substring_Raw_hasBeq___closed__0 = (const lean_object*)&l_Substring_Raw_hasBeq___closed__0_value;
LEAN_EXPORT const lean_object* l_Substring_Raw_hasBeq = (const lean_object*)&l_Substring_Raw_hasBeq___closed__0_value;
LEAN_EXPORT uint8_t l_Substring_Raw_sameAs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_sameAs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonPrefix_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonPrefix_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_commonPrefix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonSuffix_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonSuffix_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_commonSuffix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_dropPrefix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_dropSuffix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_bsize(lean_object*);
LEAN_EXPORT lean_object* l_Substring_bsize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_toString(lean_object*);
LEAN_EXPORT lean_object* l_Substring_toString___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Substring_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Substring_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_prev___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_atEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_atEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Substring_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_ofSlice(lean_object* v_s_1_){
_start:
{
lean_object* v_str_2_; lean_object* v_startInclusive_3_; lean_object* v_endExclusive_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_11_; 
v_str_2_ = lean_ctor_get(v_s_1_, 0);
v_startInclusive_3_ = lean_ctor_get(v_s_1_, 1);
v_endExclusive_4_ = lean_ctor_get(v_s_1_, 2);
v_isSharedCheck_11_ = !lean_is_exclusive(v_s_1_);
if (v_isSharedCheck_11_ == 0)
{
v___x_6_ = v_s_1_;
v_isShared_7_ = v_isSharedCheck_11_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_endExclusive_4_);
lean_inc(v_startInclusive_3_);
lean_inc(v_str_2_);
lean_dec(v_s_1_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_11_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_9_; 
if (v_isShared_7_ == 0)
{
v___x_9_ = v___x_6_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_10_; 
v_reuseFailAlloc_10_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_10_, 0, v_str_2_);
lean_ctor_set(v_reuseFailAlloc_10_, 1, v_startInclusive_3_);
lean_ctor_set(v_reuseFailAlloc_10_, 2, v_endExclusive_4_);
v___x_9_ = v_reuseFailAlloc_10_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toSlice_x3f(lean_object* v_s_12_){
_start:
{
lean_object* v_str_13_; lean_object* v_startPos_14_; lean_object* v_stopPos_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_29_; 
v_str_13_ = lean_ctor_get(v_s_12_, 0);
v_startPos_14_ = lean_ctor_get(v_s_12_, 1);
v_stopPos_15_ = lean_ctor_get(v_s_12_, 2);
v_isSharedCheck_29_ = !lean_is_exclusive(v_s_12_);
if (v_isSharedCheck_29_ == 0)
{
v___x_17_ = v_s_12_;
v_isShared_18_ = v_isSharedCheck_29_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_stopPos_15_);
lean_inc(v_startPos_14_);
lean_inc(v_str_13_);
lean_dec(v_s_12_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_29_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
uint8_t v___x_19_; 
v___x_19_ = lean_string_is_valid_pos(v_str_13_, v_startPos_14_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
lean_del_object(v___x_17_);
lean_dec(v_stopPos_15_);
lean_dec(v_startPos_14_);
lean_dec_ref(v_str_13_);
v___x_20_ = lean_box(0);
return v___x_20_;
}
else
{
uint8_t v___x_21_; 
v___x_21_ = lean_string_is_valid_pos(v_str_13_, v_stopPos_15_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; 
lean_del_object(v___x_17_);
lean_dec(v_stopPos_15_);
lean_dec(v_startPos_14_);
lean_dec_ref(v_str_13_);
v___x_22_ = lean_box(0);
return v___x_22_;
}
else
{
uint8_t v___x_23_; 
v___x_23_ = lean_nat_dec_le(v_startPos_14_, v_stopPos_15_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; 
lean_del_object(v___x_17_);
lean_dec(v_stopPos_15_);
lean_dec(v_startPos_14_);
lean_dec_ref(v_str_13_);
v___x_24_ = lean_box(0);
return v___x_24_;
}
else
{
lean_object* v___x_26_; 
if (v_isShared_18_ == 0)
{
v___x_26_ = v___x_17_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_str_13_);
lean_ctor_set(v_reuseFailAlloc_28_, 1, v_startPos_14_);
lean_ctor_set(v_reuseFailAlloc_28_, 2, v_stopPos_15_);
v___x_26_ = v_reuseFailAlloc_28_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_isEmpty(lean_object* v_ss_30_){
_start:
{
lean_object* v_startPos_31_; lean_object* v_stopPos_32_; lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v_startPos_31_ = lean_ctor_get(v_ss_30_, 1);
v_stopPos_32_ = lean_ctor_get(v_ss_30_, 2);
v___x_33_ = lean_nat_sub(v_stopPos_32_, v_startPos_31_);
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = lean_nat_dec_eq(v___x_33_, v___x_34_);
lean_dec(v___x_33_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_isEmpty___boxed(lean_object* v_ss_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Substring_Raw_isEmpty(v_ss_36_);
lean_dec_ref(v_ss_36_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t lean_substring_isempty(lean_object* v_ss_39_){
_start:
{
lean_object* v_startPos_40_; lean_object* v_stopPos_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v_startPos_40_ = lean_ctor_get(v_ss_39_, 1);
lean_inc(v_startPos_40_);
v_stopPos_41_ = lean_ctor_get(v_ss_39_, 2);
lean_inc(v_stopPos_41_);
lean_dec_ref(v_ss_39_);
v___x_42_ = lean_nat_sub(v_stopPos_41_, v_startPos_40_);
lean_dec(v_startPos_40_);
lean_dec(v_stopPos_41_);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_nat_dec_eq(v___x_42_, v___x_43_);
lean_dec(v___x_42_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_isEmptyImpl___boxed(lean_object* v_ss_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = lean_substring_isempty(v_ss_45_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toString(lean_object* v_x_48_){
_start:
{
lean_object* v_str_49_; lean_object* v_startPos_50_; lean_object* v_stopPos_51_; lean_object* v___x_52_; 
v_str_49_ = lean_ctor_get(v_x_48_, 0);
v_startPos_50_ = lean_ctor_get(v_x_48_, 1);
v_stopPos_51_ = lean_ctor_get(v_x_48_, 2);
v___x_52_ = lean_string_utf8_extract(v_str_49_, v_startPos_50_, v_stopPos_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toString___boxed(lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Substring_Raw_toString(v_x_53_);
lean_dec_ref(v_x_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lean_substring_tostring(lean_object* v_a_55_){
_start:
{
lean_object* v_str_56_; lean_object* v_startPos_57_; lean_object* v_stopPos_58_; lean_object* v___x_59_; 
v_str_56_ = lean_ctor_get(v_a_55_, 0);
lean_inc_ref(v_str_56_);
v_startPos_57_ = lean_ctor_get(v_a_55_, 1);
lean_inc(v_startPos_57_);
v_stopPos_58_ = lean_ctor_get(v_a_55_, 2);
lean_inc(v_stopPos_58_);
lean_dec_ref(v_a_55_);
v___x_59_ = lean_string_utf8_extract(v_str_56_, v_startPos_57_, v_stopPos_58_);
lean_dec(v_stopPos_58_);
lean_dec(v_startPos_57_);
lean_dec_ref(v_str_56_);
return v___x_59_;
}
}
LEAN_EXPORT uint32_t l_Substring_Raw_get(lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
lean_object* v_str_62_; lean_object* v_startPos_63_; lean_object* v___x_64_; uint32_t v___x_65_; 
v_str_62_ = lean_ctor_get(v_x_60_, 0);
v_startPos_63_ = lean_ctor_get(v_x_60_, 1);
v___x_64_ = lean_nat_add(v_startPos_63_, v_x_61_);
v___x_65_ = lean_string_utf8_get(v_str_62_, v___x_64_);
lean_dec(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_get___boxed(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
uint32_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Substring_Raw_get(v_x_66_, v_x_67_);
lean_dec(v_x_67_);
lean_dec_ref(v_x_66_);
v_r_69_ = lean_box_uint32(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint32_t lean_substring_get(lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_str_72_; lean_object* v_startPos_73_; lean_object* v___x_74_; uint32_t v___x_75_; 
v_str_72_ = lean_ctor_get(v_a_70_, 0);
lean_inc_ref(v_str_72_);
v_startPos_73_ = lean_ctor_get(v_a_70_, 1);
lean_inc(v_startPos_73_);
lean_dec_ref(v_a_70_);
v___x_74_ = lean_nat_add(v_startPos_73_, v_a_71_);
lean_dec(v_a_71_);
lean_dec(v_startPos_73_);
v___x_75_ = lean_string_utf8_get(v_str_72_, v___x_74_);
lean_dec(v___x_74_);
lean_dec_ref(v_str_72_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_getImpl___boxed(lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
uint32_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = lean_substring_get(v_a_76_, v_a_77_);
v_r_79_ = lean_box_uint32(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_next(lean_object* v_x_80_, lean_object* v_x_81_){
_start:
{
lean_object* v_str_82_; lean_object* v_startPos_83_; lean_object* v_stopPos_84_; lean_object* v_absP_85_; uint8_t v_decide_86_; 
v_str_82_ = lean_ctor_get(v_x_80_, 0);
v_startPos_83_ = lean_ctor_get(v_x_80_, 1);
v_stopPos_84_ = lean_ctor_get(v_x_80_, 2);
v_absP_85_ = lean_nat_add(v_startPos_83_, v_x_81_);
v_decide_86_ = lean_nat_dec_eq(v_absP_85_, v_stopPos_84_);
if (v_decide_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_string_utf8_next(v_str_82_, v_absP_85_);
lean_dec(v_absP_85_);
v___x_88_ = lean_nat_sub(v___x_87_, v_startPos_83_);
lean_dec(v___x_87_);
return v___x_88_;
}
else
{
lean_dec(v_absP_85_);
lean_inc(v_x_81_);
return v_x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_next___boxed(lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Substring_Raw_next(v_x_89_, v_x_90_);
lean_dec(v_x_90_);
lean_dec_ref(v_x_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_get_match__1_splitter___redArg(lean_object* v_x_92_, lean_object* v_x_93_, lean_object* v_h__1_94_){
_start:
{
lean_object* v_str_95_; lean_object* v_startPos_96_; lean_object* v_stopPos_97_; lean_object* v___x_98_; 
v_str_95_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_str_95_);
v_startPos_96_ = lean_ctor_get(v_x_92_, 1);
lean_inc(v_startPos_96_);
v_stopPos_97_ = lean_ctor_get(v_x_92_, 2);
lean_inc(v_stopPos_97_);
lean_dec_ref(v_x_92_);
v___x_98_ = lean_apply_4(v_h__1_94_, v_str_95_, v_startPos_96_, v_stopPos_97_, v_x_93_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_get_match__1_splitter(lean_object* v_motive_99_, lean_object* v_x_100_, lean_object* v_x_101_, lean_object* v_h__1_102_){
_start:
{
lean_object* v_str_103_; lean_object* v_startPos_104_; lean_object* v_stopPos_105_; lean_object* v___x_106_; 
v_str_103_ = lean_ctor_get(v_x_100_, 0);
lean_inc_ref(v_str_103_);
v_startPos_104_ = lean_ctor_get(v_x_100_, 1);
lean_inc(v_startPos_104_);
v_stopPos_105_ = lean_ctor_get(v_x_100_, 2);
lean_inc(v_stopPos_105_);
lean_dec_ref(v_x_100_);
v___x_106_ = lean_apply_4(v_h__1_102_, v_str_103_, v_startPos_104_, v_stopPos_105_, v_x_101_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_prev(lean_object* v_x_107_, lean_object* v_x_108_){
_start:
{
lean_object* v_str_109_; lean_object* v_startPos_110_; lean_object* v_absP_111_; uint8_t v_decide_112_; 
v_str_109_ = lean_ctor_get(v_x_107_, 0);
v_startPos_110_ = lean_ctor_get(v_x_107_, 1);
v_absP_111_ = lean_nat_add(v_startPos_110_, v_x_108_);
v_decide_112_ = lean_nat_dec_eq(v_absP_111_, v_startPos_110_);
if (v_decide_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_string_utf8_prev(v_str_109_, v_absP_111_);
lean_dec(v_absP_111_);
v___x_114_ = lean_nat_sub(v___x_113_, v_startPos_110_);
lean_dec(v___x_113_);
return v___x_114_;
}
else
{
lean_dec(v_absP_111_);
lean_inc(v_x_108_);
return v_x_108_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_prev___boxed(lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Substring_Raw_prev(v_x_115_, v_x_116_);
lean_dec(v_x_116_);
lean_dec_ref(v_x_115_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* lean_substring_prev(lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_str_120_; lean_object* v_startPos_121_; lean_object* v_absP_122_; uint8_t v_decide_123_; 
v_str_120_ = lean_ctor_get(v_a_118_, 0);
lean_inc_ref(v_str_120_);
v_startPos_121_ = lean_ctor_get(v_a_118_, 1);
lean_inc(v_startPos_121_);
lean_dec_ref(v_a_118_);
v_absP_122_ = lean_nat_add(v_startPos_121_, v_a_119_);
v_decide_123_ = lean_nat_dec_eq(v_absP_122_, v_startPos_121_);
if (v_decide_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; 
lean_dec(v_a_119_);
v___x_124_ = lean_string_utf8_prev(v_str_120_, v_absP_122_);
lean_dec(v_absP_122_);
lean_dec_ref(v_str_120_);
v___x_125_ = lean_nat_sub(v___x_124_, v_startPos_121_);
lean_dec(v_startPos_121_);
lean_dec(v___x_124_);
return v___x_125_;
}
else
{
lean_dec(v_absP_122_);
lean_dec(v_startPos_121_);
lean_dec_ref(v_str_120_);
return v_a_119_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_nextn(lean_object* v_x_126_, lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
lean_object* v_zero_129_; uint8_t v_isZero_130_; 
v_zero_129_ = lean_unsigned_to_nat(0u);
v_isZero_130_ = lean_nat_dec_eq(v_x_127_, v_zero_129_);
if (v_isZero_130_ == 1)
{
lean_dec(v_x_127_);
return v_x_128_;
}
else
{
lean_object* v_str_131_; lean_object* v_startPos_132_; lean_object* v_stopPos_133_; lean_object* v_one_134_; lean_object* v_n_135_; lean_object* v_absP_136_; uint8_t v_decide_137_; 
v_str_131_ = lean_ctor_get(v_x_126_, 0);
v_startPos_132_ = lean_ctor_get(v_x_126_, 1);
v_stopPos_133_ = lean_ctor_get(v_x_126_, 2);
v_one_134_ = lean_unsigned_to_nat(1u);
v_n_135_ = lean_nat_sub(v_x_127_, v_one_134_);
lean_dec(v_x_127_);
v_absP_136_ = lean_nat_add(v_startPos_132_, v_x_128_);
v_decide_137_ = lean_nat_dec_eq(v_absP_136_, v_stopPos_133_);
if (v_decide_137_ == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec(v_x_128_);
v___x_138_ = lean_string_utf8_next(v_str_131_, v_absP_136_);
lean_dec(v_absP_136_);
v___x_139_ = lean_nat_sub(v___x_138_, v_startPos_132_);
lean_dec(v___x_138_);
v_x_127_ = v_n_135_;
v_x_128_ = v___x_139_;
goto _start;
}
else
{
lean_dec(v_absP_136_);
v_x_127_ = v_n_135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_nextn___boxed(lean_object* v_x_142_, lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Substring_Raw_nextn(v_x_142_, v_x_143_, v_x_144_);
lean_dec_ref(v_x_142_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_prevn(lean_object* v_x_146_, lean_object* v_x_147_, lean_object* v_x_148_){
_start:
{
lean_object* v_zero_149_; uint8_t v_isZero_150_; 
v_zero_149_ = lean_unsigned_to_nat(0u);
v_isZero_150_ = lean_nat_dec_eq(v_x_147_, v_zero_149_);
if (v_isZero_150_ == 1)
{
lean_dec(v_x_147_);
return v_x_148_;
}
else
{
lean_object* v_str_151_; lean_object* v_startPos_152_; lean_object* v_one_153_; lean_object* v_n_154_; lean_object* v_absP_155_; uint8_t v_decide_156_; 
v_str_151_ = lean_ctor_get(v_x_146_, 0);
v_startPos_152_ = lean_ctor_get(v_x_146_, 1);
v_one_153_ = lean_unsigned_to_nat(1u);
v_n_154_ = lean_nat_sub(v_x_147_, v_one_153_);
lean_dec(v_x_147_);
v_absP_155_ = lean_nat_add(v_startPos_152_, v_x_148_);
v_decide_156_ = lean_nat_dec_eq(v_absP_155_, v_startPos_152_);
if (v_decide_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v_x_148_);
v___x_157_ = lean_string_utf8_prev(v_str_151_, v_absP_155_);
lean_dec(v_absP_155_);
v___x_158_ = lean_nat_sub(v___x_157_, v_startPos_152_);
lean_dec(v___x_157_);
v_x_147_ = v_n_154_;
v_x_148_ = v___x_158_;
goto _start;
}
else
{
lean_dec(v_absP_155_);
v_x_147_ = v_n_154_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_prevn___boxed(lean_object* v_x_161_, lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Substring_Raw_prevn(v_x_161_, v_x_162_, v_x_163_);
lean_dec_ref(v_x_161_);
return v_res_164_;
}
}
LEAN_EXPORT uint32_t l_Substring_Raw_front(lean_object* v_s_165_){
_start:
{
lean_object* v_str_166_; lean_object* v_startPos_167_; uint32_t v___x_168_; 
v_str_166_ = lean_ctor_get(v_s_165_, 0);
v_startPos_167_ = lean_ctor_get(v_s_165_, 1);
v___x_168_ = lean_string_utf8_get(v_str_166_, v_startPos_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_front___boxed(lean_object* v_s_169_){
_start:
{
uint32_t v_res_170_; lean_object* v_r_171_; 
v_res_170_ = l_Substring_Raw_front(v_s_169_);
lean_dec_ref(v_s_169_);
v_r_171_ = lean_box_uint32(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT uint32_t lean_substring_front(lean_object* v_s_172_){
_start:
{
lean_object* v_str_173_; lean_object* v_startPos_174_; uint32_t v___x_175_; 
v_str_173_ = lean_ctor_get(v_s_172_, 0);
lean_inc_ref(v_str_173_);
v_startPos_174_ = lean_ctor_get(v_s_172_, 1);
lean_inc(v_startPos_174_);
lean_dec_ref(v_s_172_);
v___x_175_ = lean_string_utf8_get(v_str_173_, v_startPos_174_);
lean_dec(v_startPos_174_);
lean_dec_ref(v_str_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_frontImpl___boxed(lean_object* v_s_176_){
_start:
{
uint32_t v_res_177_; lean_object* v_r_178_; 
v_res_177_ = lean_substring_front(v_s_176_);
v_r_178_ = lean_box_uint32(v_res_177_);
return v_r_178_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_posOf___lam__0(lean_object* v_stopPos_179_, lean_object* v_startPos_180_, lean_object* v_str_181_, uint32_t v_c_182_, lean_object* v___x_183_, lean_object* v_it_184_, lean_object* v_acc_185_, lean_object* v_hP_186_, lean_object* v_recur_187_){
_start:
{
lean_object* v___x_188_; uint8_t v_decide_189_; 
v___x_188_ = lean_nat_sub(v_stopPos_179_, v_startPos_180_);
v_decide_189_ = lean_nat_dec_eq(v_it_184_, v___x_188_);
lean_dec(v___x_188_);
if (v_decide_189_ == 0)
{
lean_object* v___x_190_; uint32_t v___x_191_; uint8_t v___x_192_; 
v___x_190_ = lean_nat_add(v_startPos_180_, v_it_184_);
v___x_191_ = lean_string_utf8_get_fast(v_str_181_, v___x_190_);
v___x_192_ = lean_uint32_dec_eq(v___x_191_, v_c_182_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
lean_dec(v_it_184_);
v___x_193_ = lean_string_utf8_next_fast(v_str_181_, v___x_190_);
lean_dec(v___x_190_);
v___x_194_ = lean_nat_sub(v___x_193_, v_startPos_180_);
v___x_195_ = lean_apply_4(v_recur_187_, v___x_194_, v___x_183_, lean_box(0), lean_box(0));
return v___x_195_;
}
else
{
lean_object* v___x_196_; 
lean_dec(v___x_190_);
lean_dec_ref(v_recur_187_);
lean_dec(v___x_183_);
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v_it_184_);
return v___x_196_;
}
}
else
{
lean_dec_ref(v_recur_187_);
lean_dec(v_it_184_);
lean_dec(v___x_183_);
lean_inc(v_acc_185_);
return v_acc_185_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_posOf___lam__0___boxed(lean_object* v_stopPos_197_, lean_object* v_startPos_198_, lean_object* v_str_199_, lean_object* v_c_200_, lean_object* v___x_201_, lean_object* v_it_202_, lean_object* v_acc_203_, lean_object* v_hP_204_, lean_object* v_recur_205_){
_start:
{
uint32_t v_c_boxed_206_; lean_object* v_res_207_; 
v_c_boxed_206_ = lean_unbox_uint32(v_c_200_);
lean_dec(v_c_200_);
v_res_207_ = l_Substring_Raw_posOf___lam__0(v_stopPos_197_, v_startPos_198_, v_str_199_, v_c_boxed_206_, v___x_201_, v_it_202_, v_acc_203_, v_hP_204_, v_recur_205_);
lean_dec(v_acc_203_);
lean_dec_ref(v_str_199_);
lean_dec(v_startPos_198_);
lean_dec(v_stopPos_197_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_posOf(lean_object* v_s_208_, uint32_t v_c_209_){
_start:
{
lean_object* v_str_210_; lean_object* v_startPos_211_; lean_object* v_stopPos_212_; uint8_t v___x_213_; 
v_str_210_ = lean_ctor_get(v_s_208_, 0);
lean_inc_ref(v_str_210_);
v_startPos_211_ = lean_ctor_get(v_s_208_, 1);
lean_inc(v_startPos_211_);
v_stopPos_212_ = lean_ctor_get(v_s_208_, 2);
lean_inc(v_stopPos_212_);
lean_dec_ref(v_s_208_);
v___x_213_ = lean_string_is_valid_pos(v_str_210_, v_startPos_211_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
lean_dec_ref(v_str_210_);
v___x_214_ = lean_nat_sub(v_stopPos_212_, v_startPos_211_);
lean_dec(v_startPos_211_);
lean_dec(v_stopPos_212_);
return v___x_214_;
}
else
{
uint8_t v___x_215_; 
v___x_215_ = lean_string_is_valid_pos(v_str_210_, v_stopPos_212_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
lean_dec_ref(v_str_210_);
v___x_216_ = lean_nat_sub(v_stopPos_212_, v_startPos_211_);
lean_dec(v_startPos_211_);
lean_dec(v_stopPos_212_);
return v___x_216_;
}
else
{
uint8_t v___x_217_; 
v___x_217_ = lean_nat_dec_le(v_startPos_211_, v_stopPos_212_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
lean_dec_ref(v_str_210_);
v___x_218_ = lean_nat_sub(v_stopPos_212_, v_startPos_211_);
lean_dec(v_startPos_211_);
lean_dec(v_stopPos_212_);
return v___x_218_;
}
else
{
lean_object* v_searcher_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___f_222_; lean_object* v___x_223_; 
v_searcher_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_box(0);
v___x_221_ = lean_box_uint32(v_c_209_);
lean_inc(v_startPos_211_);
lean_inc(v_stopPos_212_);
v___f_222_ = lean_alloc_closure((void*)(l_Substring_Raw_posOf___lam__0___boxed), 9, 5);
lean_closure_set(v___f_222_, 0, v_stopPos_212_);
lean_closure_set(v___f_222_, 1, v_startPos_211_);
lean_closure_set(v___f_222_, 2, v_str_210_);
lean_closure_set(v___f_222_, 3, v___x_221_);
lean_closure_set(v___f_222_, 4, v___x_220_);
v___x_223_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_222_, v_searcher_219_, v___x_220_, lean_box(0));
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_224_; 
v___x_224_ = lean_nat_sub(v_stopPos_212_, v_startPos_211_);
lean_dec(v_startPos_211_);
lean_dec(v_stopPos_212_);
return v___x_224_;
}
else
{
lean_object* v_val_225_; 
lean_dec(v_stopPos_212_);
lean_dec(v_startPos_211_);
v_val_225_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_val_225_);
lean_dec_ref_known(v___x_223_, 1);
return v_val_225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_posOf___boxed(lean_object* v_s_226_, lean_object* v_c_227_){
_start:
{
uint32_t v_c_boxed_228_; lean_object* v_res_229_; 
v_c_boxed_228_ = lean_unbox_uint32(v_c_227_);
lean_dec(v_c_227_);
v_res_229_ = l_Substring_Raw_posOf(v_s_226_, v_c_boxed_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_drop(lean_object* v_x_230_, lean_object* v_x_231_){
_start:
{
lean_object* v_str_232_; lean_object* v_startPos_233_; lean_object* v_stopPos_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_244_; 
v_str_232_ = lean_ctor_get(v_x_230_, 0);
lean_inc_ref(v_str_232_);
v_startPos_233_ = lean_ctor_get(v_x_230_, 1);
lean_inc(v_startPos_233_);
v_stopPos_234_ = lean_ctor_get(v_x_230_, 2);
lean_inc(v_stopPos_234_);
v___x_235_ = lean_unsigned_to_nat(0u);
v___x_236_ = l_Substring_Raw_nextn(v_x_230_, v_x_231_, v___x_235_);
v_isSharedCheck_244_ = !lean_is_exclusive(v_x_230_);
if (v_isSharedCheck_244_ == 0)
{
lean_object* v_unused_245_; lean_object* v_unused_246_; lean_object* v_unused_247_; 
v_unused_245_ = lean_ctor_get(v_x_230_, 2);
lean_dec(v_unused_245_);
v_unused_246_ = lean_ctor_get(v_x_230_, 1);
lean_dec(v_unused_246_);
v_unused_247_ = lean_ctor_get(v_x_230_, 0);
lean_dec(v_unused_247_);
v___x_238_ = v_x_230_;
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_x_230_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = lean_nat_add(v_startPos_233_, v___x_236_);
lean_dec(v___x_236_);
lean_dec(v_startPos_233_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v___x_240_);
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_str_232_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v_stopPos_234_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* lean_substring_drop(lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v_str_250_; lean_object* v_startPos_251_; lean_object* v_stopPos_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_262_; 
v_str_250_ = lean_ctor_get(v_a_248_, 0);
lean_inc_ref(v_str_250_);
v_startPos_251_ = lean_ctor_get(v_a_248_, 1);
lean_inc(v_startPos_251_);
v_stopPos_252_ = lean_ctor_get(v_a_248_, 2);
lean_inc(v_stopPos_252_);
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = l_Substring_Raw_nextn(v_a_248_, v_a_249_, v___x_253_);
v_isSharedCheck_262_ = !lean_is_exclusive(v_a_248_);
if (v_isSharedCheck_262_ == 0)
{
lean_object* v_unused_263_; lean_object* v_unused_264_; lean_object* v_unused_265_; 
v_unused_263_ = lean_ctor_get(v_a_248_, 2);
lean_dec(v_unused_263_);
v_unused_264_ = lean_ctor_get(v_a_248_, 1);
lean_dec(v_unused_264_);
v_unused_265_ = lean_ctor_get(v_a_248_, 0);
lean_dec(v_unused_265_);
v___x_256_ = v_a_248_;
v_isShared_257_ = v_isSharedCheck_262_;
goto v_resetjp_255_;
}
else
{
lean_dec(v_a_248_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_262_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_258_ = lean_nat_add(v_startPos_251_, v___x_254_);
lean_dec(v___x_254_);
lean_dec(v_startPos_251_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_258_);
v___x_260_ = v___x_256_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_str_250_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_261_, 2, v_stopPos_252_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_dropRight(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
lean_object* v_str_268_; lean_object* v_startPos_269_; lean_object* v_stopPos_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_280_; 
v_str_268_ = lean_ctor_get(v_x_266_, 0);
lean_inc_ref(v_str_268_);
v_startPos_269_ = lean_ctor_get(v_x_266_, 1);
lean_inc(v_startPos_269_);
v_stopPos_270_ = lean_ctor_get(v_x_266_, 2);
v___x_271_ = lean_nat_sub(v_stopPos_270_, v_startPos_269_);
v___x_272_ = l_Substring_Raw_prevn(v_x_266_, v_x_267_, v___x_271_);
v_isSharedCheck_280_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; lean_object* v_unused_282_; lean_object* v_unused_283_; 
v_unused_281_ = lean_ctor_get(v_x_266_, 2);
lean_dec(v_unused_281_);
v_unused_282_ = lean_ctor_get(v_x_266_, 1);
lean_dec(v_unused_282_);
v_unused_283_ = lean_ctor_get(v_x_266_, 0);
lean_dec(v_unused_283_);
v___x_274_ = v_x_266_;
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
else
{
lean_dec(v_x_266_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_280_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_nat_add(v_startPos_269_, v___x_272_);
lean_dec(v___x_272_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 2, v___x_276_);
v___x_278_ = v___x_274_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_str_268_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_startPos_269_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_take(lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
lean_object* v_str_286_; lean_object* v_startPos_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_297_; 
v_str_286_ = lean_ctor_get(v_x_284_, 0);
lean_inc_ref(v_str_286_);
v_startPos_287_ = lean_ctor_get(v_x_284_, 1);
lean_inc(v_startPos_287_);
v___x_288_ = lean_unsigned_to_nat(0u);
v___x_289_ = l_Substring_Raw_nextn(v_x_284_, v_x_285_, v___x_288_);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_284_);
if (v_isSharedCheck_297_ == 0)
{
lean_object* v_unused_298_; lean_object* v_unused_299_; lean_object* v_unused_300_; 
v_unused_298_ = lean_ctor_get(v_x_284_, 2);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_x_284_, 1);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_x_284_, 0);
lean_dec(v_unused_300_);
v___x_291_ = v_x_284_;
v_isShared_292_ = v_isSharedCheck_297_;
goto v_resetjp_290_;
}
else
{
lean_dec(v_x_284_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_297_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_293_ = lean_nat_add(v_startPos_287_, v___x_289_);
lean_dec(v___x_289_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 2, v___x_293_);
v___x_295_ = v___x_291_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_str_286_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_startPos_287_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRight(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
lean_object* v_str_303_; lean_object* v_startPos_304_; lean_object* v_stopPos_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_315_; 
v_str_303_ = lean_ctor_get(v_x_301_, 0);
lean_inc_ref(v_str_303_);
v_startPos_304_ = lean_ctor_get(v_x_301_, 1);
lean_inc(v_startPos_304_);
v_stopPos_305_ = lean_ctor_get(v_x_301_, 2);
lean_inc(v_stopPos_305_);
v___x_306_ = lean_nat_sub(v_stopPos_305_, v_startPos_304_);
v___x_307_ = l_Substring_Raw_prevn(v_x_301_, v_x_302_, v___x_306_);
v_isSharedCheck_315_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; 
v_unused_316_ = lean_ctor_get(v_x_301_, 2);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_x_301_, 1);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_x_301_, 0);
lean_dec(v_unused_318_);
v___x_309_ = v_x_301_;
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
else
{
lean_dec(v_x_301_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_311_ = lean_nat_add(v_startPos_304_, v___x_307_);
lean_dec(v___x_307_);
lean_dec(v_startPos_304_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v___x_311_);
v___x_313_ = v___x_309_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_str_303_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v___x_311_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_stopPos_305_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_atEnd(lean_object* v_x_319_, lean_object* v_x_320_){
_start:
{
lean_object* v_startPos_321_; lean_object* v_stopPos_322_; lean_object* v___x_323_; uint8_t v_decide_324_; 
v_startPos_321_ = lean_ctor_get(v_x_319_, 1);
v_stopPos_322_ = lean_ctor_get(v_x_319_, 2);
v___x_323_ = lean_nat_add(v_startPos_321_, v_x_320_);
v_decide_324_ = lean_nat_dec_eq(v___x_323_, v_stopPos_322_);
lean_dec(v___x_323_);
return v_decide_324_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_atEnd___boxed(lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
uint8_t v_res_327_; lean_object* v_r_328_; 
v_res_327_ = l_Substring_Raw_atEnd(v_x_325_, v_x_326_);
lean_dec(v_x_326_);
lean_dec_ref(v_x_325_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_extract(lean_object* v_x_333_, lean_object* v_x_334_, lean_object* v_x_335_){
_start:
{
lean_object* v_str_336_; lean_object* v_startPos_337_; lean_object* v_stopPos_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_356_; 
v_str_336_ = lean_ctor_get(v_x_333_, 0);
v_startPos_337_ = lean_ctor_get(v_x_333_, 1);
v_stopPos_338_ = lean_ctor_get(v_x_333_, 2);
v_isSharedCheck_356_ = !lean_is_exclusive(v_x_333_);
if (v_isSharedCheck_356_ == 0)
{
v___x_340_ = v_x_333_;
v_isShared_341_ = v_isSharedCheck_356_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_stopPos_338_);
lean_inc(v_startPos_337_);
lean_inc(v_str_336_);
lean_dec(v_x_333_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_356_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___y_343_; uint8_t v___x_352_; 
v___x_352_ = lean_nat_dec_le(v_x_335_, v_x_334_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = lean_nat_add(v_startPos_337_, v_x_334_);
v___x_354_ = lean_nat_dec_le(v_stopPos_338_, v___x_353_);
if (v___x_354_ == 0)
{
v___y_343_ = v___x_353_;
goto v___jp_342_;
}
else
{
lean_dec(v___x_353_);
lean_inc(v_stopPos_338_);
v___y_343_ = v_stopPos_338_;
goto v___jp_342_;
}
}
else
{
lean_object* v___x_355_; 
lean_del_object(v___x_340_);
lean_dec(v_stopPos_338_);
lean_dec(v_startPos_337_);
lean_dec_ref(v_str_336_);
v___x_355_ = ((lean_object*)(l_Substring_Raw_extract___closed__1));
return v___x_355_;
}
v___jp_342_:
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_nat_add(v_startPos_337_, v_x_335_);
lean_dec(v_startPos_337_);
v___x_345_ = lean_nat_dec_le(v_stopPos_338_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_347_; 
lean_dec(v_stopPos_338_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 2, v___x_344_);
lean_ctor_set(v___x_340_, 1, v___y_343_);
v___x_347_ = v___x_340_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_str_336_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___y_343_);
lean_ctor_set(v_reuseFailAlloc_348_, 2, v___x_344_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
else
{
lean_object* v___x_350_; 
lean_dec(v___x_344_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 1, v___y_343_);
v___x_350_ = v___x_340_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_str_336_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v___y_343_);
lean_ctor_set(v_reuseFailAlloc_351_, 2, v_stopPos_338_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_extract___boxed(lean_object* v_x_357_, lean_object* v_x_358_, lean_object* v_x_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Substring_Raw_extract(v_x_357_, v_x_358_, v_x_359_);
lean_dec(v_x_359_);
lean_dec(v_x_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* lean_substring_extract(lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_str_364_; lean_object* v_startPos_365_; lean_object* v_stopPos_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_384_; 
v_str_364_ = lean_ctor_get(v_a_361_, 0);
v_startPos_365_ = lean_ctor_get(v_a_361_, 1);
v_stopPos_366_ = lean_ctor_get(v_a_361_, 2);
v_isSharedCheck_384_ = !lean_is_exclusive(v_a_361_);
if (v_isSharedCheck_384_ == 0)
{
v___x_368_ = v_a_361_;
v_isShared_369_ = v_isSharedCheck_384_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_stopPos_366_);
lean_inc(v_startPos_365_);
lean_inc(v_str_364_);
lean_dec(v_a_361_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_384_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___y_371_; uint8_t v___x_380_; 
v___x_380_ = lean_nat_dec_le(v_a_363_, v_a_362_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = lean_nat_add(v_startPos_365_, v_a_362_);
lean_dec(v_a_362_);
v___x_382_ = lean_nat_dec_le(v_stopPos_366_, v___x_381_);
if (v___x_382_ == 0)
{
v___y_371_ = v___x_381_;
goto v___jp_370_;
}
else
{
lean_dec(v___x_381_);
lean_inc(v_stopPos_366_);
v___y_371_ = v_stopPos_366_;
goto v___jp_370_;
}
}
else
{
lean_object* v___x_383_; 
lean_del_object(v___x_368_);
lean_dec(v_stopPos_366_);
lean_dec(v_startPos_365_);
lean_dec_ref(v_str_364_);
lean_dec(v_a_363_);
lean_dec(v_a_362_);
v___x_383_ = ((lean_object*)(l_Substring_Raw_extract___closed__1));
return v___x_383_;
}
v___jp_370_:
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = lean_nat_add(v_startPos_365_, v_a_363_);
lean_dec(v_a_363_);
lean_dec(v_startPos_365_);
v___x_373_ = lean_nat_dec_le(v_stopPos_366_, v___x_372_);
if (v___x_373_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v_stopPos_366_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 2, v___x_372_);
lean_ctor_set(v___x_368_, 1, v___y_371_);
v___x_375_ = v___x_368_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_str_364_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v___y_371_);
lean_ctor_set(v_reuseFailAlloc_376_, 2, v___x_372_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
else
{
lean_object* v___x_378_; 
lean_dec(v___x_372_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___y_371_);
v___x_378_ = v___x_368_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_str_364_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___y_371_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_stopPos_366_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_splitOn_loop(lean_object* v_s_385_, lean_object* v_sep_386_, lean_object* v_b_387_, lean_object* v_i_388_, lean_object* v_j_389_, lean_object* v_r_390_){
_start:
{
lean_object* v___y_392_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v_str_401_; lean_object* v_startPos_402_; lean_object* v_stopPos_403_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_414_; lean_object* v___y_425_; lean_object* v___x_434_; uint8_t v___x_435_; 
v_str_401_ = lean_ctor_get(v_s_385_, 0);
v_startPos_402_ = lean_ctor_get(v_s_385_, 1);
v_stopPos_403_ = lean_ctor_get(v_s_385_, 2);
v___x_434_ = lean_nat_sub(v_stopPos_403_, v_startPos_402_);
v___x_435_ = lean_nat_dec_lt(v_i_388_, v___x_434_);
lean_dec(v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_466_; 
lean_inc(v_stopPos_403_);
lean_inc(v_startPos_402_);
lean_inc_ref(v_str_401_);
v_isSharedCheck_466_ = !lean_is_exclusive(v_s_385_);
if (v_isSharedCheck_466_ == 0)
{
lean_object* v_unused_467_; lean_object* v_unused_468_; lean_object* v_unused_469_; 
v_unused_467_ = lean_ctor_get(v_s_385_, 2);
lean_dec(v_unused_467_);
v_unused_468_ = lean_ctor_get(v_s_385_, 1);
lean_dec(v_unused_468_);
v_unused_469_ = lean_ctor_get(v_s_385_, 0);
lean_dec(v_unused_469_);
v___x_437_ = v_s_385_;
v_isShared_438_ = v_isSharedCheck_466_;
goto v_resetjp_436_;
}
else
{
lean_dec(v_s_385_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_466_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v___x_439_; 
v___x_439_ = lean_string_utf8_at_end(v_sep_386_, v_j_389_);
if (v___x_439_ == 0)
{
uint8_t v___x_440_; 
lean_del_object(v___x_437_);
lean_dec(v_j_389_);
v___x_440_ = lean_nat_dec_le(v_i_388_, v_b_387_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = lean_nat_add(v_startPos_402_, v_b_387_);
lean_dec(v_b_387_);
v___x_442_ = lean_nat_dec_le(v_stopPos_403_, v___x_441_);
if (v___x_442_ == 0)
{
v___y_425_ = v___x_441_;
goto v___jp_424_;
}
else
{
lean_dec(v___x_441_);
lean_inc(v_stopPos_403_);
v___y_425_ = v_stopPos_403_;
goto v___jp_424_;
}
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
lean_dec(v_stopPos_403_);
lean_dec(v_startPos_402_);
lean_dec_ref(v_str_401_);
lean_dec(v_i_388_);
lean_dec(v_b_387_);
v___x_443_ = ((lean_object*)(l_Substring_Raw_extract___closed__1));
v___x_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v_r_390_);
v___x_445_ = l_List_reverse___redArg(v___x_444_);
return v___x_445_;
}
}
else
{
lean_object* v___x_446_; lean_object* v___y_448_; lean_object* v___x_452_; lean_object* v___y_454_; uint8_t v___x_463_; 
v___x_446_ = ((lean_object*)(l_Substring_Raw_extract___closed__1));
v___x_452_ = lean_nat_sub(v_i_388_, v_j_389_);
lean_dec(v_j_389_);
lean_dec(v_i_388_);
v___x_463_ = lean_nat_dec_le(v___x_452_, v_b_387_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_464_ = lean_nat_add(v_startPos_402_, v_b_387_);
lean_dec(v_b_387_);
v___x_465_ = lean_nat_dec_le(v_stopPos_403_, v___x_464_);
if (v___x_465_ == 0)
{
v___y_454_ = v___x_464_;
goto v___jp_453_;
}
else
{
lean_dec(v___x_464_);
lean_inc(v_stopPos_403_);
v___y_454_ = v_stopPos_403_;
goto v___jp_453_;
}
}
else
{
lean_dec(v___x_452_);
lean_del_object(v___x_437_);
lean_dec(v_stopPos_403_);
lean_dec(v_startPos_402_);
lean_dec_ref(v_str_401_);
lean_dec(v_b_387_);
v___y_448_ = v___x_446_;
goto v___jp_447_;
}
v___jp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_449_, 0, v___y_448_);
lean_ctor_set(v___x_449_, 1, v_r_390_);
v___x_450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_446_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = l_List_reverse___redArg(v___x_450_);
return v___x_451_;
}
v___jp_453_:
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_nat_add(v_startPos_402_, v___x_452_);
lean_dec(v___x_452_);
lean_dec(v_startPos_402_);
v___x_456_ = lean_nat_dec_le(v_stopPos_403_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v_stopPos_403_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 2, v___x_455_);
lean_ctor_set(v___x_437_, 1, v___y_454_);
v___x_458_ = v___x_437_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_str_401_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v___y_454_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v___x_455_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
v___y_448_ = v___x_458_;
goto v___jp_447_;
}
}
else
{
lean_object* v___x_461_; 
lean_dec(v___x_455_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___y_454_);
v___x_461_ = v___x_437_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_str_401_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v___y_454_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v_stopPos_403_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
v___y_448_ = v___x_461_;
goto v___jp_447_;
}
}
}
}
}
}
else
{
lean_object* v___x_470_; uint32_t v___x_471_; uint32_t v___x_472_; uint8_t v___x_473_; 
v___x_470_ = lean_nat_add(v_startPos_402_, v_i_388_);
v___x_471_ = lean_string_utf8_get(v_str_401_, v___x_470_);
v___x_472_ = lean_string_utf8_get(v_sep_386_, v_j_389_);
v___x_473_ = lean_uint32_dec_eq(v___x_471_, v___x_472_);
if (v___x_473_ == 0)
{
uint8_t v_decide_474_; 
lean_dec(v_j_389_);
v_decide_474_ = lean_nat_dec_eq(v___x_470_, v_stopPos_403_);
if (v_decide_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec(v_i_388_);
v___x_475_ = lean_string_utf8_next(v_str_401_, v___x_470_);
lean_dec(v___x_470_);
v___x_476_ = lean_nat_sub(v___x_475_, v_startPos_402_);
lean_dec(v___x_475_);
v___y_392_ = v___x_476_;
goto v___jp_391_;
}
else
{
lean_dec(v___x_470_);
v___y_392_ = v_i_388_;
goto v___jp_391_;
}
}
else
{
uint8_t v_decide_477_; 
v_decide_477_ = lean_nat_dec_eq(v___x_470_, v_stopPos_403_);
if (v_decide_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec(v_i_388_);
v___x_478_ = lean_string_utf8_next(v_str_401_, v___x_470_);
lean_dec(v___x_470_);
v___x_479_ = lean_nat_sub(v___x_478_, v_startPos_402_);
lean_dec(v___x_478_);
v___y_414_ = v___x_479_;
goto v___jp_413_;
}
else
{
lean_dec(v___x_470_);
v___y_414_ = v_i_388_;
goto v___jp_413_;
}
}
}
v___jp_391_:
{
lean_object* v___x_393_; 
v___x_393_ = lean_unsigned_to_nat(0u);
v_i_388_ = v___y_392_;
v_j_389_ = v___x_393_;
goto _start;
}
v___jp_395_:
{
lean_object* v___x_399_; 
v___x_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_399_, 0, v___y_398_);
lean_ctor_set(v___x_399_, 1, v_r_390_);
lean_inc(v___y_396_);
v_b_387_ = v___y_396_;
v_i_388_ = v___y_396_;
v_j_389_ = v___y_397_;
v_r_390_ = v___x_399_;
goto _start;
}
v___jp_404_:
{
lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_409_ = lean_nat_add(v_startPos_402_, v___y_407_);
lean_dec(v___y_407_);
v___x_410_ = lean_nat_dec_le(v_stopPos_403_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; 
lean_inc_ref(v_str_401_);
v___x_411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_411_, 0, v_str_401_);
lean_ctor_set(v___x_411_, 1, v___y_408_);
lean_ctor_set(v___x_411_, 2, v___x_409_);
v___y_396_ = v___y_405_;
v___y_397_ = v___y_406_;
v___y_398_ = v___x_411_;
goto v___jp_395_;
}
else
{
lean_object* v___x_412_; 
lean_dec(v___x_409_);
lean_inc(v_stopPos_403_);
lean_inc_ref(v_str_401_);
v___x_412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_412_, 0, v_str_401_);
lean_ctor_set(v___x_412_, 1, v___y_408_);
lean_ctor_set(v___x_412_, 2, v_stopPos_403_);
v___y_396_ = v___y_405_;
v___y_397_ = v___y_406_;
v___y_398_ = v___x_412_;
goto v___jp_395_;
}
}
v___jp_413_:
{
lean_object* v_j_415_; uint8_t v___x_416_; 
v_j_415_ = lean_string_utf8_next(v_sep_386_, v_j_389_);
lean_dec(v_j_389_);
v___x_416_ = lean_string_utf8_at_end(v_sep_386_, v_j_415_);
if (v___x_416_ == 0)
{
v_i_388_ = v___y_414_;
v_j_389_ = v_j_415_;
goto _start;
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = lean_nat_sub(v___y_414_, v_j_415_);
lean_dec(v_j_415_);
v___x_420_ = lean_nat_dec_le(v___x_419_, v_b_387_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_421_ = lean_nat_add(v_startPos_402_, v_b_387_);
lean_dec(v_b_387_);
v___x_422_ = lean_nat_dec_le(v_stopPos_403_, v___x_421_);
if (v___x_422_ == 0)
{
v___y_405_ = v___y_414_;
v___y_406_ = v___x_418_;
v___y_407_ = v___x_419_;
v___y_408_ = v___x_421_;
goto v___jp_404_;
}
else
{
lean_dec(v___x_421_);
lean_inc(v_stopPos_403_);
v___y_405_ = v___y_414_;
v___y_406_ = v___x_418_;
v___y_407_ = v___x_419_;
v___y_408_ = v_stopPos_403_;
goto v___jp_404_;
}
}
else
{
lean_object* v___x_423_; 
lean_dec(v___x_419_);
lean_dec(v_b_387_);
v___x_423_ = ((lean_object*)(l_Substring_Raw_extract___closed__1));
v___y_396_ = v___y_414_;
v___y_397_ = v___x_418_;
v___y_398_ = v___x_423_;
goto v___jp_395_;
}
}
}
v___jp_424_:
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_nat_add(v_startPos_402_, v_i_388_);
lean_dec(v_i_388_);
lean_dec(v_startPos_402_);
v___x_427_ = lean_nat_dec_le(v_stopPos_403_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
lean_dec(v_stopPos_403_);
v___x_428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_428_, 0, v_str_401_);
lean_ctor_set(v___x_428_, 1, v___y_425_);
lean_ctor_set(v___x_428_, 2, v___x_426_);
v___x_429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v_r_390_);
v___x_430_ = l_List_reverse___redArg(v___x_429_);
return v___x_430_;
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec(v___x_426_);
v___x_431_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_431_, 0, v_str_401_);
lean_ctor_set(v___x_431_, 1, v___y_425_);
lean_ctor_set(v___x_431_, 2, v_stopPos_403_);
v___x_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v_r_390_);
v___x_433_ = l_List_reverse___redArg(v___x_432_);
return v___x_433_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_splitOn_loop___boxed(lean_object* v_s_480_, lean_object* v_sep_481_, lean_object* v_b_482_, lean_object* v_i_483_, lean_object* v_j_484_, lean_object* v_r_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l___private_Init_Data_String_Substring_0__Substring_Raw_splitOn_loop(v_s_480_, v_sep_481_, v_b_482_, v_i_483_, v_j_484_, v_r_485_);
lean_dec_ref(v_sep_481_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_splitOn(lean_object* v_s_487_, lean_object* v_sep_488_){
_start:
{
lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_489_ = ((lean_object*)(l_Substring_Raw_extract___closed__0));
v___x_490_ = lean_string_dec_eq(v_sep_488_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = lean_box(0);
v___x_493_ = l___private_Init_Data_String_Substring_0__Substring_Raw_splitOn_loop(v_s_487_, v_sep_488_, v___x_491_, v___x_491_, v___x_491_, v___x_492_);
return v___x_493_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v_s_487_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_splitOn___boxed(lean_object* v_s_496_, lean_object* v_sep_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Substring_Raw_splitOn(v_s_496_, v_sep_497_);
lean_dec_ref(v_sep_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldl___redArg___lam__0(lean_object* v___y_499_, lean_object* v_f_500_, lean_object* v_it_501_, lean_object* v_acc_502_, lean_object* v_hP_503_, lean_object* v_recur_504_){
_start:
{
lean_object* v_str_505_; lean_object* v_startInclusive_506_; lean_object* v_endExclusive_507_; lean_object* v___x_508_; uint8_t v_decide_509_; 
v_str_505_ = lean_ctor_get(v___y_499_, 0);
v_startInclusive_506_ = lean_ctor_get(v___y_499_, 1);
v_endExclusive_507_ = lean_ctor_get(v___y_499_, 2);
v___x_508_ = lean_nat_sub(v_endExclusive_507_, v_startInclusive_506_);
v_decide_509_ = lean_nat_dec_eq(v_it_501_, v___x_508_);
lean_dec(v___x_508_);
if (v_decide_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint32_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_510_ = lean_nat_add(v_startInclusive_506_, v_it_501_);
v___x_511_ = lean_string_utf8_next_fast(v_str_505_, v___x_510_);
v___x_512_ = lean_nat_sub(v___x_511_, v_startInclusive_506_);
v___x_513_ = lean_string_utf8_get_fast(v_str_505_, v___x_510_);
lean_dec(v___x_510_);
v___x_514_ = lean_box_uint32(v___x_513_);
v___x_515_ = lean_apply_2(v_f_500_, v_acc_502_, v___x_514_);
v___x_516_ = lean_apply_4(v_recur_504_, v___x_512_, v___x_515_, lean_box(0), lean_box(0));
return v___x_516_;
}
else
{
lean_dec(v_recur_504_);
lean_dec(v_f_500_);
return v_acc_502_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldl___redArg___lam__0___boxed(lean_object* v___y_517_, lean_object* v_f_518_, lean_object* v_it_519_, lean_object* v_acc_520_, lean_object* v_hP_521_, lean_object* v_recur_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Substring_Raw_foldl___redArg___lam__0(v___y_517_, v_f_518_, v_it_519_, v_acc_520_, v_hP_521_, v_recur_522_);
lean_dec(v_it_519_);
lean_dec_ref(v___y_517_);
return v_res_523_;
}
}
static lean_object* _init_l_Substring_Raw_foldl___redArg___closed__3(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_527_ = ((lean_object*)(l_Substring_Raw_foldl___redArg___closed__2));
v___x_528_ = lean_unsigned_to_nat(14u);
v___x_529_ = lean_unsigned_to_nat(22u);
v___x_530_ = ((lean_object*)(l_Substring_Raw_foldl___redArg___closed__1));
v___x_531_ = ((lean_object*)(l_Substring_Raw_foldl___redArg___closed__0));
v___x_532_ = l_mkPanicMessageWithDecl(v___x_531_, v___x_530_, v___x_529_, v___x_528_, v___x_527_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldl___redArg(lean_object* v_f_533_, lean_object* v_init_534_, lean_object* v_s_535_){
_start:
{
lean_object* v___y_537_; lean_object* v_str_541_; lean_object* v_startPos_542_; lean_object* v_stopPos_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_557_; 
v_str_541_ = lean_ctor_get(v_s_535_, 0);
v_startPos_542_ = lean_ctor_get(v_s_535_, 1);
v_stopPos_543_ = lean_ctor_get(v_s_535_, 2);
v_isSharedCheck_557_ = !lean_is_exclusive(v_s_535_);
if (v_isSharedCheck_557_ == 0)
{
v___x_545_ = v_s_535_;
v_isShared_546_ = v_isSharedCheck_557_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_stopPos_543_);
lean_inc(v_startPos_542_);
lean_inc(v_str_541_);
lean_dec(v_s_535_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_557_;
goto v_resetjp_544_;
}
v___jp_536_:
{
lean_object* v___f_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___f_538_ = lean_alloc_closure((void*)(l_Substring_Raw_foldl___redArg___lam__0___boxed), 6, 2);
lean_closure_set(v___f_538_, 0, v___y_537_);
lean_closure_set(v___f_538_, 1, v_f_533_);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_538_, v___x_539_, v_init_534_, lean_box(0));
return v___x_540_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; uint8_t v___x_551_; 
v___x_547_ = l_String_instInhabitedSlice;
v___x_551_ = lean_string_is_valid_pos(v_str_541_, v_startPos_542_);
if (v___x_551_ == 0)
{
lean_del_object(v___x_545_);
lean_dec(v_stopPos_543_);
lean_dec(v_startPos_542_);
lean_dec_ref(v_str_541_);
goto v___jp_548_;
}
else
{
uint8_t v___x_552_; 
v___x_552_ = lean_string_is_valid_pos(v_str_541_, v_stopPos_543_);
if (v___x_552_ == 0)
{
lean_del_object(v___x_545_);
lean_dec(v_stopPos_543_);
lean_dec(v_startPos_542_);
lean_dec_ref(v_str_541_);
goto v___jp_548_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = lean_nat_dec_le(v_startPos_542_, v_stopPos_543_);
if (v___x_553_ == 0)
{
lean_del_object(v___x_545_);
lean_dec(v_stopPos_543_);
lean_dec(v_startPos_542_);
lean_dec_ref(v_str_541_);
goto v___jp_548_;
}
else
{
lean_object* v___x_555_; 
if (v_isShared_546_ == 0)
{
v___x_555_ = v___x_545_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_str_541_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_startPos_542_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_stopPos_543_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
v___y_537_ = v___x_555_;
goto v___jp_536_;
}
}
}
}
v___jp_548_:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_550_ = l_panic___redArg(v___x_547_, v___x_549_);
v___y_537_ = v___x_550_;
goto v___jp_536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldl(lean_object* v_00_u03b1_558_, lean_object* v_f_559_, lean_object* v_init_560_, lean_object* v_s_561_){
_start:
{
lean_object* v___y_563_; lean_object* v_str_567_; lean_object* v_startPos_568_; lean_object* v_stopPos_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_583_; 
v_str_567_ = lean_ctor_get(v_s_561_, 0);
v_startPos_568_ = lean_ctor_get(v_s_561_, 1);
v_stopPos_569_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_583_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_583_ == 0)
{
v___x_571_ = v_s_561_;
v_isShared_572_ = v_isSharedCheck_583_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_stopPos_569_);
lean_inc(v_startPos_568_);
lean_inc(v_str_567_);
lean_dec(v_s_561_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_583_;
goto v_resetjp_570_;
}
v___jp_562_:
{
lean_object* v___f_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___f_564_ = lean_alloc_closure((void*)(l_Substring_Raw_foldl___redArg___lam__0___boxed), 6, 2);
lean_closure_set(v___f_564_, 0, v___y_563_);
lean_closure_set(v___f_564_, 1, v_f_559_);
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_564_, v___x_565_, v_init_560_, lean_box(0));
return v___x_566_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; uint8_t v___x_577_; 
v___x_573_ = l_String_instInhabitedSlice;
v___x_577_ = lean_string_is_valid_pos(v_str_567_, v_startPos_568_);
if (v___x_577_ == 0)
{
lean_del_object(v___x_571_);
lean_dec(v_stopPos_569_);
lean_dec(v_startPos_568_);
lean_dec_ref(v_str_567_);
goto v___jp_574_;
}
else
{
uint8_t v___x_578_; 
v___x_578_ = lean_string_is_valid_pos(v_str_567_, v_stopPos_569_);
if (v___x_578_ == 0)
{
lean_del_object(v___x_571_);
lean_dec(v_stopPos_569_);
lean_dec(v_startPos_568_);
lean_dec_ref(v_str_567_);
goto v___jp_574_;
}
else
{
uint8_t v___x_579_; 
v___x_579_ = lean_nat_dec_le(v_startPos_568_, v_stopPos_569_);
if (v___x_579_ == 0)
{
lean_del_object(v___x_571_);
lean_dec(v_stopPos_569_);
lean_dec(v_startPos_568_);
lean_dec_ref(v_str_567_);
goto v___jp_574_;
}
else
{
lean_object* v___x_581_; 
if (v_isShared_572_ == 0)
{
v___x_581_ = v___x_571_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_str_567_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_startPos_568_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_stopPos_569_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
v___y_563_ = v___x_581_;
goto v___jp_562_;
}
}
}
}
v___jp_574_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_576_ = l_panic___redArg(v___x_573_, v___x_575_);
v___y_563_ = v___x_576_;
goto v___jp_562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldr___redArg___lam__0(lean_object* v___y_584_, lean_object* v_f_585_, lean_object* v_it_586_, lean_object* v_acc_587_, lean_object* v_hP_588_, lean_object* v_recur_589_){
_start:
{
lean_object* v___x_590_; uint8_t v_decide_591_; 
v___x_590_ = lean_unsigned_to_nat(0u);
v_decide_591_ = lean_nat_dec_eq(v_it_586_, v___x_590_);
if (v_decide_591_ == 0)
{
lean_object* v_str_592_; lean_object* v_startInclusive_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_prevPos_596_; lean_object* v___x_597_; uint32_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_str_592_ = lean_ctor_get(v___y_584_, 0);
v_startInclusive_593_ = lean_ctor_get(v___y_584_, 1);
v___x_594_ = lean_unsigned_to_nat(1u);
v___x_595_ = lean_nat_sub(v_it_586_, v___x_594_);
v_prevPos_596_ = l_String_Slice_posLE(v___y_584_, v___x_595_);
v___x_597_ = lean_nat_add(v_startInclusive_593_, v_prevPos_596_);
v___x_598_ = lean_string_utf8_get_fast(v_str_592_, v___x_597_);
lean_dec(v___x_597_);
v___x_599_ = lean_box_uint32(v___x_598_);
v___x_600_ = lean_apply_2(v_f_585_, v___x_599_, v_acc_587_);
v___x_601_ = lean_apply_4(v_recur_589_, v_prevPos_596_, v___x_600_, lean_box(0), lean_box(0));
return v___x_601_;
}
else
{
lean_dec(v_recur_589_);
lean_dec(v_f_585_);
return v_acc_587_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldr___redArg___lam__0___boxed(lean_object* v___y_602_, lean_object* v_f_603_, lean_object* v_it_604_, lean_object* v_acc_605_, lean_object* v_hP_606_, lean_object* v_recur_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Substring_Raw_foldr___redArg___lam__0(v___y_602_, v_f_603_, v_it_604_, v_acc_605_, v_hP_606_, v_recur_607_);
lean_dec(v_it_604_);
lean_dec_ref(v___y_602_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldr___redArg(lean_object* v_f_609_, lean_object* v_init_610_, lean_object* v_s_611_){
_start:
{
lean_object* v___y_613_; lean_object* v_str_617_; lean_object* v_startPos_618_; lean_object* v_stopPos_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_633_; 
v_str_617_ = lean_ctor_get(v_s_611_, 0);
v_startPos_618_ = lean_ctor_get(v_s_611_, 1);
v_stopPos_619_ = lean_ctor_get(v_s_611_, 2);
v_isSharedCheck_633_ = !lean_is_exclusive(v_s_611_);
if (v_isSharedCheck_633_ == 0)
{
v___x_621_ = v_s_611_;
v_isShared_622_ = v_isSharedCheck_633_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_stopPos_619_);
lean_inc(v_startPos_618_);
lean_inc(v_str_617_);
lean_dec(v_s_611_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_633_;
goto v_resetjp_620_;
}
v___jp_612_:
{
lean_object* v___f_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
lean_inc_ref(v___y_613_);
v___f_614_ = lean_alloc_closure((void*)(l_Substring_Raw_foldr___redArg___lam__0___boxed), 6, 2);
lean_closure_set(v___f_614_, 0, v___y_613_);
lean_closure_set(v___f_614_, 1, v_f_609_);
v___x_615_ = l_String_Slice_revPositions(v___y_613_);
lean_dec_ref(v___y_613_);
v___x_616_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_614_, v___x_615_, v_init_610_, lean_box(0));
return v___x_616_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; uint8_t v___x_627_; 
v___x_623_ = l_String_instInhabitedSlice;
v___x_627_ = lean_string_is_valid_pos(v_str_617_, v_startPos_618_);
if (v___x_627_ == 0)
{
lean_del_object(v___x_621_);
lean_dec(v_stopPos_619_);
lean_dec(v_startPos_618_);
lean_dec_ref(v_str_617_);
goto v___jp_624_;
}
else
{
uint8_t v___x_628_; 
v___x_628_ = lean_string_is_valid_pos(v_str_617_, v_stopPos_619_);
if (v___x_628_ == 0)
{
lean_del_object(v___x_621_);
lean_dec(v_stopPos_619_);
lean_dec(v_startPos_618_);
lean_dec_ref(v_str_617_);
goto v___jp_624_;
}
else
{
uint8_t v___x_629_; 
v___x_629_ = lean_nat_dec_le(v_startPos_618_, v_stopPos_619_);
if (v___x_629_ == 0)
{
lean_del_object(v___x_621_);
lean_dec(v_stopPos_619_);
lean_dec(v_startPos_618_);
lean_dec_ref(v_str_617_);
goto v___jp_624_;
}
else
{
lean_object* v___x_631_; 
if (v_isShared_622_ == 0)
{
v___x_631_ = v___x_621_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_str_617_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_startPos_618_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_stopPos_619_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
v___y_613_ = v___x_631_;
goto v___jp_612_;
}
}
}
}
v___jp_624_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_626_ = l_panic___redArg(v___x_623_, v___x_625_);
v___y_613_ = v___x_626_;
goto v___jp_612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_foldr(lean_object* v_00_u03b1_634_, lean_object* v_f_635_, lean_object* v_init_636_, lean_object* v_s_637_){
_start:
{
lean_object* v___y_639_; lean_object* v_str_643_; lean_object* v_startPos_644_; lean_object* v_stopPos_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_659_; 
v_str_643_ = lean_ctor_get(v_s_637_, 0);
v_startPos_644_ = lean_ctor_get(v_s_637_, 1);
v_stopPos_645_ = lean_ctor_get(v_s_637_, 2);
v_isSharedCheck_659_ = !lean_is_exclusive(v_s_637_);
if (v_isSharedCheck_659_ == 0)
{
v___x_647_ = v_s_637_;
v_isShared_648_ = v_isSharedCheck_659_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_stopPos_645_);
lean_inc(v_startPos_644_);
lean_inc(v_str_643_);
lean_dec(v_s_637_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_659_;
goto v_resetjp_646_;
}
v___jp_638_:
{
lean_object* v___f_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
lean_inc_ref(v___y_639_);
v___f_640_ = lean_alloc_closure((void*)(l_Substring_Raw_foldr___redArg___lam__0___boxed), 6, 2);
lean_closure_set(v___f_640_, 0, v___y_639_);
lean_closure_set(v___f_640_, 1, v_f_635_);
v___x_641_ = l_String_Slice_revPositions(v___y_639_);
lean_dec_ref(v___y_639_);
v___x_642_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_640_, v___x_641_, v_init_636_, lean_box(0));
return v___x_642_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; uint8_t v___x_653_; 
v___x_649_ = l_String_instInhabitedSlice;
v___x_653_ = lean_string_is_valid_pos(v_str_643_, v_startPos_644_);
if (v___x_653_ == 0)
{
lean_del_object(v___x_647_);
lean_dec(v_stopPos_645_);
lean_dec(v_startPos_644_);
lean_dec_ref(v_str_643_);
goto v___jp_650_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = lean_string_is_valid_pos(v_str_643_, v_stopPos_645_);
if (v___x_654_ == 0)
{
lean_del_object(v___x_647_);
lean_dec(v_stopPos_645_);
lean_dec(v_startPos_644_);
lean_dec_ref(v_str_643_);
goto v___jp_650_;
}
else
{
uint8_t v___x_655_; 
v___x_655_ = lean_nat_dec_le(v_startPos_644_, v_stopPos_645_);
if (v___x_655_ == 0)
{
lean_del_object(v___x_647_);
lean_dec(v_stopPos_645_);
lean_dec(v_startPos_644_);
lean_dec_ref(v_str_643_);
goto v___jp_650_;
}
else
{
lean_object* v___x_657_; 
if (v_isShared_648_ == 0)
{
v___x_657_ = v___x_647_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_str_643_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_startPos_644_);
lean_ctor_set(v_reuseFailAlloc_658_, 2, v_stopPos_645_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
v___y_639_ = v___x_657_;
goto v___jp_638_;
}
}
}
}
v___jp_650_:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_652_ = l_panic___redArg(v___x_649_, v___x_651_);
v___y_639_ = v___x_652_;
goto v___jp_638_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_any___lam__0(lean_object* v___x_660_, lean_object* v_s_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_String_Slice_Pattern_ToForwardSearcher_DefaultForwardSearcher_instIteratorLoopIdSearchStep___redArg___lam__2(v_s_661_, v___x_660_, v___y_662_, lean_box(0), lean_box(0), v___y_665_, v___y_666_, v___y_667_);
return v___x_668_;
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_any(lean_object* v_s_669_, lean_object* v_p_670_){
_start:
{
lean_object* v___x_671_; lean_object* v_str_672_; lean_object* v_startPos_673_; lean_object* v_stopPos_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_692_; 
lean_inc_ref(v_p_670_);
v___x_671_ = l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(v_p_670_);
v_str_672_ = lean_ctor_get(v_s_669_, 0);
v_startPos_673_ = lean_ctor_get(v_s_669_, 1);
v_stopPos_674_ = lean_ctor_get(v_s_669_, 2);
v_isSharedCheck_692_ = !lean_is_exclusive(v_s_669_);
if (v_isSharedCheck_692_ == 0)
{
v___x_676_ = v_s_669_;
v_isShared_677_ = v_isSharedCheck_692_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_stopPos_674_);
lean_inc(v_startPos_673_);
lean_inc(v_str_672_);
lean_dec(v_s_669_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_692_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___f_679_; lean_object* v___x_680_; uint8_t v___x_685_; 
v___x_678_ = l_String_instInhabitedSlice;
v___f_679_ = lean_alloc_closure((void*)(l_Substring_Raw_any___lam__0), 8, 1);
lean_closure_set(v___f_679_, 0, v___x_671_);
v___x_680_ = lean_alloc_closure((void*)(l_String_Slice_Pattern_ToForwardSearcher_DefaultForwardSearcher_iter___boxed), 3, 2);
lean_closure_set(v___x_680_, 0, lean_box(0));
lean_closure_set(v___x_680_, 1, v_p_670_);
v___x_685_ = lean_string_is_valid_pos(v_str_672_, v_startPos_673_);
if (v___x_685_ == 0)
{
lean_del_object(v___x_676_);
lean_dec(v_stopPos_674_);
lean_dec(v_startPos_673_);
lean_dec_ref(v_str_672_);
goto v___jp_681_;
}
else
{
uint8_t v___x_686_; 
v___x_686_ = lean_string_is_valid_pos(v_str_672_, v_stopPos_674_);
if (v___x_686_ == 0)
{
lean_del_object(v___x_676_);
lean_dec(v_stopPos_674_);
lean_dec(v_startPos_673_);
lean_dec_ref(v_str_672_);
goto v___jp_681_;
}
else
{
uint8_t v___x_687_; 
v___x_687_ = lean_nat_dec_le(v_startPos_673_, v_stopPos_674_);
if (v___x_687_ == 0)
{
lean_del_object(v___x_676_);
lean_dec(v_stopPos_674_);
lean_dec(v_startPos_673_);
lean_dec_ref(v_str_672_);
goto v___jp_681_;
}
else
{
lean_object* v___x_689_; 
if (v_isShared_677_ == 0)
{
v___x_689_ = v___x_676_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_str_672_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_startPos_673_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_stopPos_674_);
v___x_689_ = v_reuseFailAlloc_691_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
uint8_t v___x_690_; 
v___x_690_ = l_String_Slice_contains___redArg(v___f_679_, v___x_689_, v___x_680_);
return v___x_690_;
}
}
}
}
v___jp_681_:
{
lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_682_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_683_ = l_panic___redArg(v___x_678_, v___x_682_);
v___x_684_ = l_String_Slice_contains___redArg(v___f_679_, v___x_683_, v___x_680_);
return v___x_684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_any___boxed(lean_object* v_s_693_, lean_object* v_p_694_){
_start:
{
uint8_t v_res_695_; lean_object* v_r_696_; 
v_res_695_ = l_Substring_Raw_any(v_s_693_, v_p_694_);
v_r_696_ = lean_box(v_res_695_);
return v_r_696_;
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_all(lean_object* v_s_697_, lean_object* v_p_698_){
_start:
{
lean_object* v___y_700_; lean_object* v_startInclusive_701_; lean_object* v_endExclusive_702_; lean_object* v_str_708_; lean_object* v_startPos_709_; lean_object* v_stopPos_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_726_; 
v_str_708_ = lean_ctor_get(v_s_697_, 0);
v_startPos_709_ = lean_ctor_get(v_s_697_, 1);
v_stopPos_710_ = lean_ctor_get(v_s_697_, 2);
v_isSharedCheck_726_ = !lean_is_exclusive(v_s_697_);
if (v_isSharedCheck_726_ == 0)
{
v___x_712_ = v_s_697_;
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_stopPos_710_);
lean_inc(v_startPos_709_);
lean_inc(v_str_708_);
lean_dec(v_s_697_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
v___jp_699_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; uint8_t v_decide_707_; 
v___x_703_ = l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(v_p_698_);
v___x_704_ = lean_unsigned_to_nat(0u);
v___x_705_ = l_String_Slice_Pos_skipWhile___redArg(v___y_700_, v___x_704_, v___x_703_);
lean_dec_ref(v___y_700_);
v___x_706_ = lean_nat_sub(v_endExclusive_702_, v_startInclusive_701_);
lean_dec(v_startInclusive_701_);
lean_dec(v_endExclusive_702_);
v_decide_707_ = lean_nat_dec_eq(v___x_705_, v___x_706_);
lean_dec(v___x_706_);
lean_dec(v___x_705_);
return v_decide_707_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; uint8_t v___x_720_; 
v___x_714_ = l_String_instInhabitedSlice;
v___x_720_ = lean_string_is_valid_pos(v_str_708_, v_startPos_709_);
if (v___x_720_ == 0)
{
lean_del_object(v___x_712_);
lean_dec(v_stopPos_710_);
lean_dec(v_startPos_709_);
lean_dec_ref(v_str_708_);
goto v___jp_715_;
}
else
{
uint8_t v___x_721_; 
v___x_721_ = lean_string_is_valid_pos(v_str_708_, v_stopPos_710_);
if (v___x_721_ == 0)
{
lean_del_object(v___x_712_);
lean_dec(v_stopPos_710_);
lean_dec(v_startPos_709_);
lean_dec_ref(v_str_708_);
goto v___jp_715_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_le(v_startPos_709_, v_stopPos_710_);
if (v___x_722_ == 0)
{
lean_del_object(v___x_712_);
lean_dec(v_stopPos_710_);
lean_dec(v_startPos_709_);
lean_dec_ref(v_str_708_);
goto v___jp_715_;
}
else
{
lean_object* v___x_724_; 
lean_inc(v_stopPos_710_);
lean_inc(v_startPos_709_);
if (v_isShared_713_ == 0)
{
v___x_724_ = v___x_712_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_str_708_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v_startPos_709_);
lean_ctor_set(v_reuseFailAlloc_725_, 2, v_stopPos_710_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
v___y_700_ = v___x_724_;
v_startInclusive_701_ = v_startPos_709_;
v_endExclusive_702_ = v_stopPos_710_;
goto v___jp_699_;
}
}
}
}
v___jp_715_:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_startInclusive_718_; lean_object* v_endExclusive_719_; 
v___x_716_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_717_ = l_panic___redArg(v___x_714_, v___x_716_);
v_startInclusive_718_ = lean_ctor_get(v___x_717_, 1);
lean_inc(v_startInclusive_718_);
v_endExclusive_719_ = lean_ctor_get(v___x_717_, 2);
lean_inc(v_endExclusive_719_);
v___y_700_ = v___x_717_;
v_startInclusive_701_ = v_startInclusive_718_;
v_endExclusive_702_ = v_endExclusive_719_;
goto v___jp_699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_all___boxed(lean_object* v_s_727_, lean_object* v_p_728_){
_start:
{
uint8_t v_res_729_; lean_object* v_r_730_; 
v_res_729_ = l_Substring_Raw_all(v_s_727_, v_p_728_);
v_r_730_ = lean_box(v_res_729_);
return v_r_730_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Substring_Raw_Internal_allImpl_spec__1(lean_object* v_msg_731_){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = l_String_instInhabitedSlice;
v___x_733_ = lean_panic_fn_borrowed(v___x_732_, v_msg_731_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Substring_Raw_Internal_allImpl_spec__0(lean_object* v_p_734_, lean_object* v_s_735_, lean_object* v_pos_736_){
_start:
{
lean_object* v_str_737_; lean_object* v_startInclusive_738_; lean_object* v_endExclusive_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v_decide_743_; 
v_str_737_ = lean_ctor_get(v_s_735_, 0);
v_startInclusive_738_ = lean_ctor_get(v_s_735_, 1);
v_endExclusive_739_ = lean_ctor_get(v_s_735_, 2);
v___x_740_ = lean_nat_add(v_startInclusive_738_, v_pos_736_);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_nat_sub(v_endExclusive_739_, v___x_740_);
v_decide_743_ = lean_nat_dec_eq(v___x_741_, v___x_742_);
lean_dec(v___x_742_);
if (v_decide_743_ == 0)
{
uint32_t v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_744_ = lean_string_utf8_get_fast(v_str_737_, v___x_740_);
v___x_745_ = lean_box_uint32(v___x_744_);
lean_inc_ref(v_p_734_);
v___x_746_ = lean_apply_1(v_p_734_, v___x_745_);
v___x_747_ = lean_unbox(v___x_746_);
if (v___x_747_ == 0)
{
lean_dec(v___x_740_);
lean_dec_ref(v_p_734_);
return v_pos_736_;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_748_ = lean_string_utf8_next_fast(v_str_737_, v___x_740_);
v___x_749_ = lean_nat_sub(v___x_748_, v___x_740_);
lean_dec(v___x_740_);
v___x_750_ = lean_nat_add(v_pos_736_, v___x_749_);
lean_dec(v___x_749_);
v___x_751_ = lean_unsigned_to_nat(1u);
v___x_752_ = lean_nat_add(v_pos_736_, v___x_751_);
v___x_753_ = lean_nat_dec_le(v___x_752_, v___x_750_);
lean_dec(v___x_752_);
if (v___x_753_ == 0)
{
lean_dec(v___x_750_);
lean_dec_ref(v_p_734_);
return v_pos_736_;
}
else
{
lean_dec(v_pos_736_);
v_pos_736_ = v___x_750_;
goto _start;
}
}
}
else
{
lean_dec(v___x_740_);
lean_dec_ref(v_p_734_);
return v_pos_736_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Substring_Raw_Internal_allImpl_spec__0___boxed(lean_object* v_p_755_, lean_object* v_s_756_, lean_object* v_pos_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_String_Slice_Pos_skipWhile___at___00Substring_Raw_Internal_allImpl_spec__0(v_p_755_, v_s_756_, v_pos_757_);
lean_dec_ref(v_s_756_);
return v_res_758_;
}
}
LEAN_EXPORT uint8_t lean_substring_all(lean_object* v_s_759_, lean_object* v_p_760_){
_start:
{
lean_object* v___y_762_; lean_object* v_startInclusive_763_; lean_object* v_endExclusive_764_; lean_object* v_str_774_; lean_object* v_startPos_775_; lean_object* v_stopPos_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_786_; 
v_str_774_ = lean_ctor_get(v_s_759_, 0);
v_startPos_775_ = lean_ctor_get(v_s_759_, 1);
v_stopPos_776_ = lean_ctor_get(v_s_759_, 2);
v_isSharedCheck_786_ = !lean_is_exclusive(v_s_759_);
if (v_isSharedCheck_786_ == 0)
{
v___x_778_ = v_s_759_;
v_isShared_779_ = v_isSharedCheck_786_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_stopPos_776_);
lean_inc(v_startPos_775_);
lean_inc(v_str_774_);
lean_dec(v_s_759_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_786_;
goto v_resetjp_777_;
}
v___jp_761_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v_decide_768_; 
v___x_765_ = lean_unsigned_to_nat(0u);
v___x_766_ = l_String_Slice_Pos_skipWhile___at___00Substring_Raw_Internal_allImpl_spec__0(v_p_760_, v___y_762_, v___x_765_);
lean_dec_ref(v___y_762_);
v___x_767_ = lean_nat_sub(v_endExclusive_764_, v_startInclusive_763_);
lean_dec(v_startInclusive_763_);
lean_dec(v_endExclusive_764_);
v_decide_768_ = lean_nat_dec_eq(v___x_766_, v___x_767_);
lean_dec(v___x_767_);
lean_dec(v___x_766_);
return v_decide_768_;
}
v___jp_769_:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v_startInclusive_772_; lean_object* v_endExclusive_773_; 
v___x_770_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_771_ = l_panic___at___00Substring_Raw_Internal_allImpl_spec__1(v___x_770_);
v_startInclusive_772_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_startInclusive_772_);
v_endExclusive_773_ = lean_ctor_get(v___x_771_, 2);
lean_inc(v_endExclusive_773_);
v___y_762_ = v___x_771_;
v_startInclusive_763_ = v_startInclusive_772_;
v_endExclusive_764_ = v_endExclusive_773_;
goto v___jp_761_;
}
v_resetjp_777_:
{
uint8_t v___x_780_; 
v___x_780_ = lean_string_is_valid_pos(v_str_774_, v_startPos_775_);
if (v___x_780_ == 0)
{
lean_del_object(v___x_778_);
lean_dec(v_stopPos_776_);
lean_dec(v_startPos_775_);
lean_dec_ref(v_str_774_);
goto v___jp_769_;
}
else
{
uint8_t v___x_781_; 
v___x_781_ = lean_string_is_valid_pos(v_str_774_, v_stopPos_776_);
if (v___x_781_ == 0)
{
lean_del_object(v___x_778_);
lean_dec(v_stopPos_776_);
lean_dec(v_startPos_775_);
lean_dec_ref(v_str_774_);
goto v___jp_769_;
}
else
{
uint8_t v___x_782_; 
v___x_782_ = lean_nat_dec_le(v_startPos_775_, v_stopPos_776_);
if (v___x_782_ == 0)
{
lean_del_object(v___x_778_);
lean_dec(v_stopPos_776_);
lean_dec(v_startPos_775_);
lean_dec_ref(v_str_774_);
goto v___jp_769_;
}
else
{
lean_object* v___x_784_; 
lean_inc(v_stopPos_776_);
lean_inc(v_startPos_775_);
if (v_isShared_779_ == 0)
{
v___x_784_ = v___x_778_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_str_774_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_startPos_775_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_stopPos_776_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
v___y_762_ = v___x_784_;
v_startInclusive_763_ = v_startPos_775_;
v_endExclusive_764_ = v_stopPos_776_;
goto v___jp_761_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_allImpl___boxed(lean_object* v_s_787_, lean_object* v_p_788_){
_start:
{
uint8_t v_res_789_; lean_object* v_r_790_; 
v_res_789_ = lean_substring_all(v_s_787_, v_p_788_);
v_r_790_ = lean_box(v_res_789_);
return v_r_790_;
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_contains___lam__0(uint32_t v_c_791_, uint32_t v_a_792_){
_start:
{
uint8_t v___x_793_; 
v___x_793_ = lean_uint32_dec_eq(v_a_792_, v_c_791_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_contains___lam__0___boxed(lean_object* v_c_794_, lean_object* v_a_795_){
_start:
{
uint32_t v_c_boxed_796_; uint32_t v_a_boxed_797_; uint8_t v_res_798_; lean_object* v_r_799_; 
v_c_boxed_796_ = lean_unbox_uint32(v_c_794_);
lean_dec(v_c_794_);
v_a_boxed_797_ = lean_unbox_uint32(v_a_795_);
lean_dec(v_a_795_);
v_res_798_ = l_Substring_Raw_contains___lam__0(v_c_boxed_796_, v_a_boxed_797_);
v_r_799_ = lean_box(v_res_798_);
return v_r_799_;
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_contains(lean_object* v_s_800_, uint32_t v_c_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___f_803_; lean_object* v___x_804_; lean_object* v_str_805_; lean_object* v_startPos_806_; lean_object* v_stopPos_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_825_; 
v___x_802_ = lean_box_uint32(v_c_801_);
v___f_803_ = lean_alloc_closure((void*)(l_Substring_Raw_contains___lam__0___boxed), 2, 1);
lean_closure_set(v___f_803_, 0, v___x_802_);
lean_inc_ref(v___f_803_);
v___x_804_ = l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(v___f_803_);
v_str_805_ = lean_ctor_get(v_s_800_, 0);
v_startPos_806_ = lean_ctor_get(v_s_800_, 1);
v_stopPos_807_ = lean_ctor_get(v_s_800_, 2);
v_isSharedCheck_825_ = !lean_is_exclusive(v_s_800_);
if (v_isSharedCheck_825_ == 0)
{
v___x_809_ = v_s_800_;
v_isShared_810_ = v_isSharedCheck_825_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_stopPos_807_);
lean_inc(v_startPos_806_);
lean_inc(v_str_805_);
lean_dec(v_s_800_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_825_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___f_812_; lean_object* v___x_813_; uint8_t v___x_818_; 
v___x_811_ = l_String_instInhabitedSlice;
v___f_812_ = lean_alloc_closure((void*)(l_Substring_Raw_any___lam__0), 8, 1);
lean_closure_set(v___f_812_, 0, v___x_804_);
v___x_813_ = lean_alloc_closure((void*)(l_String_Slice_Pattern_ToForwardSearcher_DefaultForwardSearcher_iter___boxed), 3, 2);
lean_closure_set(v___x_813_, 0, lean_box(0));
lean_closure_set(v___x_813_, 1, v___f_803_);
v___x_818_ = lean_string_is_valid_pos(v_str_805_, v_startPos_806_);
if (v___x_818_ == 0)
{
lean_del_object(v___x_809_);
lean_dec(v_stopPos_807_);
lean_dec(v_startPos_806_);
lean_dec_ref(v_str_805_);
goto v___jp_814_;
}
else
{
uint8_t v___x_819_; 
v___x_819_ = lean_string_is_valid_pos(v_str_805_, v_stopPos_807_);
if (v___x_819_ == 0)
{
lean_del_object(v___x_809_);
lean_dec(v_stopPos_807_);
lean_dec(v_startPos_806_);
lean_dec_ref(v_str_805_);
goto v___jp_814_;
}
else
{
uint8_t v___x_820_; 
v___x_820_ = lean_nat_dec_le(v_startPos_806_, v_stopPos_807_);
if (v___x_820_ == 0)
{
lean_del_object(v___x_809_);
lean_dec(v_stopPos_807_);
lean_dec(v_startPos_806_);
lean_dec_ref(v_str_805_);
goto v___jp_814_;
}
else
{
lean_object* v___x_822_; 
if (v_isShared_810_ == 0)
{
v___x_822_ = v___x_809_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_str_805_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_startPos_806_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v_stopPos_807_);
v___x_822_ = v_reuseFailAlloc_824_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
uint8_t v___x_823_; 
v___x_823_ = l_String_Slice_contains___redArg(v___f_812_, v___x_822_, v___x_813_);
return v___x_823_;
}
}
}
}
v___jp_814_:
{
lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_815_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_816_ = l_panic___redArg(v___x_811_, v___x_815_);
v___x_817_ = l_String_Slice_contains___redArg(v___f_812_, v___x_816_, v___x_813_);
return v___x_817_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_contains___boxed(lean_object* v_s_826_, lean_object* v_c_827_){
_start:
{
uint32_t v_c_boxed_828_; uint8_t v_res_829_; lean_object* v_r_830_; 
v_c_boxed_828_ = lean_unbox_uint32(v_c_827_);
lean_dec(v_c_827_);
v_res_829_ = l_Substring_Raw_contains(v_s_826_, v_c_boxed_828_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux(lean_object* v_s_831_, lean_object* v_stopPos_832_, lean_object* v_p_833_, lean_object* v_i_834_){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_835_ = lean_unsigned_to_nat(1u);
v___x_836_ = lean_nat_add(v_i_834_, v___x_835_);
v___x_837_ = lean_nat_dec_le(v___x_836_, v_stopPos_832_);
lean_dec(v___x_836_);
if (v___x_837_ == 0)
{
lean_dec_ref(v_p_833_);
return v_i_834_;
}
else
{
uint32_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_838_ = lean_string_utf8_get(v_s_831_, v_i_834_);
v___x_839_ = lean_box_uint32(v___x_838_);
lean_inc_ref(v_p_833_);
v___x_840_ = lean_apply_1(v_p_833_, v___x_839_);
v___x_841_ = lean_unbox(v___x_840_);
if (v___x_841_ == 0)
{
lean_dec_ref(v_p_833_);
return v_i_834_;
}
else
{
lean_object* v___x_842_; 
v___x_842_ = lean_string_utf8_next(v_s_831_, v_i_834_);
lean_dec(v_i_834_);
v_i_834_ = v___x_842_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___boxed(lean_object* v_s_844_, lean_object* v_stopPos_845_, lean_object* v_p_846_, lean_object* v_i_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Substring_Raw_takeWhileAux(v_s_844_, v_stopPos_845_, v_p_846_, v_i_847_);
lean_dec(v_stopPos_845_);
lean_dec_ref(v_s_844_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhile(lean_object* v_x_849_, lean_object* v_x_850_){
_start:
{
lean_object* v_str_851_; lean_object* v_startPos_852_; lean_object* v_stopPos_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_861_; 
v_str_851_ = lean_ctor_get(v_x_849_, 0);
v_startPos_852_ = lean_ctor_get(v_x_849_, 1);
v_stopPos_853_ = lean_ctor_get(v_x_849_, 2);
v_isSharedCheck_861_ = !lean_is_exclusive(v_x_849_);
if (v_isSharedCheck_861_ == 0)
{
v___x_855_ = v_x_849_;
v_isShared_856_ = v_isSharedCheck_861_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_stopPos_853_);
lean_inc(v_startPos_852_);
lean_inc(v_str_851_);
lean_dec(v_x_849_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_861_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v_e_857_; lean_object* v___x_859_; 
lean_inc(v_startPos_852_);
v_e_857_ = l_Substring_Raw_takeWhileAux(v_str_851_, v_stopPos_853_, v_x_850_, v_startPos_852_);
lean_dec(v_stopPos_853_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 2, v_e_857_);
v___x_859_ = v___x_855_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_str_851_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_startPos_852_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v_e_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00Substring_Raw_Internal_takeWhileImpl_spec__0(lean_object* v_a_862_, lean_object* v_s_863_, lean_object* v_stopPos_864_, lean_object* v_i_865_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_866_ = lean_unsigned_to_nat(1u);
v___x_867_ = lean_nat_add(v_i_865_, v___x_866_);
v___x_868_ = lean_nat_dec_le(v___x_867_, v_stopPos_864_);
lean_dec(v___x_867_);
if (v___x_868_ == 0)
{
lean_dec_ref(v_a_862_);
return v_i_865_;
}
else
{
uint32_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_869_ = lean_string_utf8_get(v_s_863_, v_i_865_);
v___x_870_ = lean_box_uint32(v___x_869_);
lean_inc_ref(v_a_862_);
v___x_871_ = lean_apply_1(v_a_862_, v___x_870_);
v___x_872_ = lean_unbox(v___x_871_);
if (v___x_872_ == 0)
{
lean_dec_ref(v_a_862_);
return v_i_865_;
}
else
{
lean_object* v___x_873_; 
v___x_873_ = lean_string_utf8_next(v_s_863_, v_i_865_);
lean_dec(v_i_865_);
v_i_865_ = v___x_873_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00Substring_Raw_Internal_takeWhileImpl_spec__0___boxed(lean_object* v_a_875_, lean_object* v_s_876_, lean_object* v_stopPos_877_, lean_object* v_i_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Substring_Raw_takeWhileAux___at___00Substring_Raw_Internal_takeWhileImpl_spec__0(v_a_875_, v_s_876_, v_stopPos_877_, v_i_878_);
lean_dec(v_stopPos_877_);
lean_dec_ref(v_s_876_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* lean_substring_takewhile(lean_object* v_a_880_, lean_object* v_a_881_){
_start:
{
lean_object* v_str_882_; lean_object* v_startPos_883_; lean_object* v_stopPos_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_892_; 
v_str_882_ = lean_ctor_get(v_a_880_, 0);
v_startPos_883_ = lean_ctor_get(v_a_880_, 1);
v_stopPos_884_ = lean_ctor_get(v_a_880_, 2);
v_isSharedCheck_892_ = !lean_is_exclusive(v_a_880_);
if (v_isSharedCheck_892_ == 0)
{
v___x_886_ = v_a_880_;
v_isShared_887_ = v_isSharedCheck_892_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_stopPos_884_);
lean_inc(v_startPos_883_);
lean_inc(v_str_882_);
lean_dec(v_a_880_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_892_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v_e_888_; lean_object* v___x_890_; 
lean_inc(v_startPos_883_);
v_e_888_ = l_Substring_Raw_takeWhileAux___at___00Substring_Raw_Internal_takeWhileImpl_spec__0(v_a_881_, v_str_882_, v_stopPos_884_, v_startPos_883_);
lean_dec(v_stopPos_884_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 2, v_e_888_);
v___x_890_ = v___x_886_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_str_882_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_startPos_883_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v_e_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_dropWhile(lean_object* v_x_893_, lean_object* v_x_894_){
_start:
{
lean_object* v_str_895_; lean_object* v_startPos_896_; lean_object* v_stopPos_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_905_; 
v_str_895_ = lean_ctor_get(v_x_893_, 0);
v_startPos_896_ = lean_ctor_get(v_x_893_, 1);
v_stopPos_897_ = lean_ctor_get(v_x_893_, 2);
v_isSharedCheck_905_ = !lean_is_exclusive(v_x_893_);
if (v_isSharedCheck_905_ == 0)
{
v___x_899_ = v_x_893_;
v_isShared_900_ = v_isSharedCheck_905_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_stopPos_897_);
lean_inc(v_startPos_896_);
lean_inc(v_str_895_);
lean_dec(v_x_893_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_905_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_b_901_; lean_object* v___x_903_; 
v_b_901_ = l_Substring_Raw_takeWhileAux(v_str_895_, v_stopPos_897_, v_x_894_, v_startPos_896_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 1, v_b_901_);
v___x_903_ = v___x_899_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_str_895_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_b_901_);
lean_ctor_set(v_reuseFailAlloc_904_, 2, v_stopPos_897_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux(lean_object* v_s_906_, lean_object* v_begPos_907_, lean_object* v_p_908_, lean_object* v_i_909_){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_910_ = lean_unsigned_to_nat(1u);
v___x_911_ = lean_nat_add(v_begPos_907_, v___x_910_);
v___x_912_ = lean_nat_dec_le(v___x_911_, v_i_909_);
lean_dec(v___x_911_);
if (v___x_912_ == 0)
{
lean_dec_ref(v_p_908_);
return v_i_909_;
}
else
{
lean_object* v_i_x27_913_; uint32_t v_c_914_; lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v_i_x27_913_ = lean_string_utf8_prev(v_s_906_, v_i_909_);
v_c_914_ = lean_string_utf8_get(v_s_906_, v_i_x27_913_);
v___x_915_ = lean_box_uint32(v_c_914_);
lean_inc_ref(v_p_908_);
v___x_916_ = lean_apply_1(v_p_908_, v___x_915_);
v___x_917_ = lean_unbox(v___x_916_);
if (v___x_917_ == 0)
{
lean_dec(v_i_x27_913_);
lean_dec_ref(v_p_908_);
return v_i_909_;
}
else
{
lean_dec(v_i_909_);
v_i_909_ = v_i_x27_913_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___boxed(lean_object* v_s_919_, lean_object* v_begPos_920_, lean_object* v_p_921_, lean_object* v_i_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Substring_Raw_takeRightWhileAux(v_s_919_, v_begPos_920_, v_p_921_, v_i_922_);
lean_dec(v_begPos_920_);
lean_dec_ref(v_s_919_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhile(lean_object* v_x_924_, lean_object* v_x_925_){
_start:
{
lean_object* v_str_926_; lean_object* v_startPos_927_; lean_object* v_stopPos_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_936_; 
v_str_926_ = lean_ctor_get(v_x_924_, 0);
v_startPos_927_ = lean_ctor_get(v_x_924_, 1);
v_stopPos_928_ = lean_ctor_get(v_x_924_, 2);
v_isSharedCheck_936_ = !lean_is_exclusive(v_x_924_);
if (v_isSharedCheck_936_ == 0)
{
v___x_930_ = v_x_924_;
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_stopPos_928_);
lean_inc(v_startPos_927_);
lean_inc(v_str_926_);
lean_dec(v_x_924_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v_b_932_; lean_object* v___x_934_; 
lean_inc(v_stopPos_928_);
v_b_932_ = l_Substring_Raw_takeRightWhileAux(v_str_926_, v_startPos_927_, v_x_925_, v_stopPos_928_);
lean_dec(v_startPos_927_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_b_932_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_str_926_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_b_932_);
lean_ctor_set(v_reuseFailAlloc_935_, 2, v_stopPos_928_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_dropRightWhile(lean_object* v_x_937_, lean_object* v_x_938_){
_start:
{
lean_object* v_str_939_; lean_object* v_startPos_940_; lean_object* v_stopPos_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_949_; 
v_str_939_ = lean_ctor_get(v_x_937_, 0);
v_startPos_940_ = lean_ctor_get(v_x_937_, 1);
v_stopPos_941_ = lean_ctor_get(v_x_937_, 2);
v_isSharedCheck_949_ = !lean_is_exclusive(v_x_937_);
if (v_isSharedCheck_949_ == 0)
{
v___x_943_ = v_x_937_;
v_isShared_944_ = v_isSharedCheck_949_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_stopPos_941_);
lean_inc(v_startPos_940_);
lean_inc(v_str_939_);
lean_dec(v_x_937_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_949_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v_e_945_; lean_object* v___x_947_; 
v_e_945_ = l_Substring_Raw_takeRightWhileAux(v_str_939_, v_startPos_940_, v_x_938_, v_stopPos_941_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 2, v_e_945_);
v___x_947_ = v___x_943_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_str_939_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_startPos_940_);
lean_ctor_set(v_reuseFailAlloc_948_, 2, v_e_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_trimLeft(lean_object* v_s_951_){
_start:
{
lean_object* v_str_952_; lean_object* v_startPos_953_; lean_object* v_stopPos_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_963_; 
v_str_952_ = lean_ctor_get(v_s_951_, 0);
v_startPos_953_ = lean_ctor_get(v_s_951_, 1);
v_stopPos_954_ = lean_ctor_get(v_s_951_, 2);
v_isSharedCheck_963_ = !lean_is_exclusive(v_s_951_);
if (v_isSharedCheck_963_ == 0)
{
v___x_956_ = v_s_951_;
v_isShared_957_ = v_isSharedCheck_963_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_stopPos_954_);
lean_inc(v_startPos_953_);
lean_inc(v_str_952_);
lean_dec(v_s_951_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_963_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v_b_959_; lean_object* v___x_961_; 
v___x_958_ = ((lean_object*)(l_Substring_Raw_trimLeft___closed__0));
v_b_959_ = l_Substring_Raw_takeWhileAux(v_str_952_, v_stopPos_954_, v___x_958_, v_startPos_953_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_b_959_);
v___x_961_ = v___x_956_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_str_952_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_b_959_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v_stopPos_954_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_trimRight(lean_object* v_s_964_){
_start:
{
lean_object* v_str_965_; lean_object* v_startPos_966_; lean_object* v_stopPos_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_976_; 
v_str_965_ = lean_ctor_get(v_s_964_, 0);
v_startPos_966_ = lean_ctor_get(v_s_964_, 1);
v_stopPos_967_ = lean_ctor_get(v_s_964_, 2);
v_isSharedCheck_976_ = !lean_is_exclusive(v_s_964_);
if (v_isSharedCheck_976_ == 0)
{
v___x_969_ = v_s_964_;
v_isShared_970_ = v_isSharedCheck_976_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_stopPos_967_);
lean_inc(v_startPos_966_);
lean_inc(v_str_965_);
lean_dec(v_s_964_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_976_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v_e_972_; lean_object* v___x_974_; 
v___x_971_ = ((lean_object*)(l_Substring_Raw_trimLeft___closed__0));
v_e_972_ = l_Substring_Raw_takeRightWhileAux(v_str_965_, v_startPos_966_, v___x_971_, v_stopPos_967_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 2, v_e_972_);
v___x_974_ = v___x_969_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_str_965_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v_startPos_966_);
lean_ctor_set(v_reuseFailAlloc_975_, 2, v_e_972_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_trim(lean_object* v_x_977_){
_start:
{
lean_object* v_str_978_; lean_object* v_startPos_979_; lean_object* v_stopPos_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_990_; 
v_str_978_ = lean_ctor_get(v_x_977_, 0);
v_startPos_979_ = lean_ctor_get(v_x_977_, 1);
v_stopPos_980_ = lean_ctor_get(v_x_977_, 2);
v_isSharedCheck_990_ = !lean_is_exclusive(v_x_977_);
if (v_isSharedCheck_990_ == 0)
{
v___x_982_ = v_x_977_;
v_isShared_983_ = v_isSharedCheck_990_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_stopPos_980_);
lean_inc(v_startPos_979_);
lean_inc(v_str_978_);
lean_dec(v_x_977_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_990_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_984_; lean_object* v_b_985_; lean_object* v_e_986_; lean_object* v___x_988_; 
v___x_984_ = ((lean_object*)(l_Substring_Raw_trimLeft___closed__0));
v_b_985_ = l_Substring_Raw_takeWhileAux(v_str_978_, v_stopPos_980_, v___x_984_, v_startPos_979_);
v_e_986_ = l_Substring_Raw_takeRightWhileAux(v_str_978_, v_b_985_, v___x_984_, v_stopPos_980_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 2, v_e_986_);
lean_ctor_set(v___x_982_, 1, v_b_985_);
v___x_988_ = v___x_982_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_str_978_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_b_985_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v_e_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_isNat___lam__0(lean_object* v___y_991_, uint8_t v___x_992_, lean_object* v_it_993_, lean_object* v_acc_994_, lean_object* v_hP_995_, lean_object* v_recur_996_){
_start:
{
lean_object* v_str_997_; lean_object* v_startInclusive_998_; lean_object* v_endExclusive_999_; lean_object* v___x_1000_; uint8_t v_decide_1001_; 
v_str_997_ = lean_ctor_get(v___y_991_, 0);
v_startInclusive_998_ = lean_ctor_get(v___y_991_, 1);
v_endExclusive_999_ = lean_ctor_get(v___y_991_, 2);
v___x_1000_ = lean_nat_sub(v_endExclusive_999_, v_startInclusive_998_);
v_decide_1001_ = lean_nat_dec_eq(v_it_993_, v___x_1000_);
lean_dec(v___x_1000_);
if (v_decide_1001_ == 0)
{
lean_object* v_snd_1002_; lean_object* v_snd_1003_; lean_object* v_fst_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1065_; 
v_snd_1002_ = lean_ctor_get(v_acc_994_, 1);
lean_inc(v_snd_1002_);
v_snd_1003_ = lean_ctor_get(v_snd_1002_, 1);
lean_inc(v_snd_1003_);
v_fst_1004_ = lean_ctor_get(v_acc_994_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_acc_994_);
if (v_isSharedCheck_1065_ == 0)
{
lean_object* v_unused_1066_; 
v_unused_1066_ = lean_ctor_get(v_acc_994_, 1);
lean_dec(v_unused_1066_);
v___x_1006_ = v_acc_994_;
v_isShared_1007_ = v_isSharedCheck_1065_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_fst_1004_);
lean_dec(v_acc_994_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1065_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v_fst_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1063_; 
v_fst_1008_ = lean_ctor_get(v_snd_1002_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_snd_1002_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_snd_1002_, 1);
lean_dec(v_unused_1064_);
v___x_1010_ = v_snd_1002_;
v_isShared_1011_ = v_isSharedCheck_1063_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_fst_1008_);
lean_dec(v_snd_1002_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1063_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v_snd_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1061_; 
v_snd_1012_ = lean_ctor_get(v_snd_1003_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_snd_1003_);
if (v_isSharedCheck_1061_ == 0)
{
lean_object* v_unused_1062_; 
v_unused_1062_ = lean_ctor_get(v_snd_1003_, 0);
lean_dec(v_unused_1062_);
v___x_1014_ = v_snd_1003_;
v_isShared_1015_ = v_isSharedCheck_1061_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_snd_1012_);
lean_dec(v_snd_1003_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1061_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1016_; uint32_t v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___y_1021_; uint8_t v___y_1022_; uint8_t v___y_1040_; uint8_t v___y_1041_; uint8_t v___y_1046_; uint8_t v___y_1047_; uint8_t v___y_1052_; uint32_t v___x_1057_; uint8_t v___x_1058_; 
v___x_1016_ = lean_nat_add(v_startInclusive_998_, v_it_993_);
v___x_1017_ = lean_string_utf8_get_fast(v_str_997_, v___x_1016_);
v___x_1018_ = lean_string_utf8_next_fast(v_str_997_, v___x_1016_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_nat_sub(v___x_1018_, v_startInclusive_998_);
v___x_1057_ = 48;
v___x_1058_ = lean_uint32_dec_le(v___x_1057_, v___x_1017_);
if (v___x_1058_ == 0)
{
v___y_1052_ = v___x_1058_;
goto v___jp_1051_;
}
else
{
uint32_t v___x_1059_; uint8_t v___x_1060_; 
v___x_1059_ = 57;
v___x_1060_ = lean_uint32_dec_le(v___x_1017_, v___x_1059_);
v___y_1052_ = v___x_1060_;
goto v___jp_1051_;
}
v___jp_1020_:
{
uint32_t v___x_1023_; uint8_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1028_; 
v___x_1023_ = 95;
v___x_1024_ = lean_uint32_dec_eq(v___x_1017_, v___x_1023_);
v___x_1025_ = lean_box(v___y_1021_);
v___x_1026_ = lean_box(v___y_1022_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 1, v___x_1026_);
lean_ctor_set(v___x_1014_, 0, v___x_1025_);
v___x_1028_ = v___x_1014_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1029_ = lean_box(v___x_1024_);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 1, v___x_1028_);
lean_ctor_set(v___x_1010_, 0, v___x_1029_);
v___x_1031_ = v___x_1010_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v___x_1028_);
v___x_1031_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1032_ = lean_box(v___x_992_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 1, v___x_1031_);
lean_ctor_set(v___x_1006_, 0, v___x_1032_);
v___x_1034_ = v___x_1006_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v___x_1031_);
v___x_1034_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_apply_4(v_recur_996_, v___x_1019_, v___x_1034_, lean_box(0), lean_box(0));
return v___x_1035_;
}
}
}
}
v___jp_1039_:
{
uint8_t v___x_1042_; 
v___x_1042_ = lean_unbox(v_fst_1008_);
lean_dec(v_fst_1008_);
if (v___x_1042_ == 0)
{
v___y_1021_ = v___y_1040_;
v___y_1022_ = v___y_1041_;
goto v___jp_1020_;
}
else
{
uint32_t v___x_1043_; uint8_t v___x_1044_; 
v___x_1043_ = 95;
v___x_1044_ = lean_uint32_dec_eq(v___x_1017_, v___x_1043_);
if (v___x_1044_ == 0)
{
v___y_1021_ = v___y_1040_;
v___y_1022_ = v___y_1041_;
goto v___jp_1020_;
}
else
{
v___y_1021_ = v___y_1040_;
v___y_1022_ = v___x_992_;
goto v___jp_1020_;
}
}
}
v___jp_1045_:
{
uint8_t v___x_1048_; 
v___x_1048_ = lean_unbox(v_fst_1004_);
lean_dec(v_fst_1004_);
if (v___x_1048_ == 0)
{
v___y_1040_ = v___y_1046_;
v___y_1041_ = v___y_1047_;
goto v___jp_1039_;
}
else
{
uint32_t v___x_1049_; uint8_t v___x_1050_; 
v___x_1049_ = 95;
v___x_1050_ = lean_uint32_dec_eq(v___x_1017_, v___x_1049_);
if (v___x_1050_ == 0)
{
v___y_1040_ = v___y_1046_;
v___y_1041_ = v___y_1047_;
goto v___jp_1039_;
}
else
{
lean_dec(v_fst_1008_);
v___y_1021_ = v___y_1046_;
v___y_1022_ = v___x_992_;
goto v___jp_1020_;
}
}
}
v___jp_1051_:
{
uint8_t v___x_1053_; 
v___x_1053_ = lean_unbox(v_snd_1012_);
if (v___x_1053_ == 0)
{
uint8_t v___x_1054_; 
lean_dec(v_fst_1008_);
lean_dec(v_fst_1004_);
v___x_1054_ = lean_unbox(v_snd_1012_);
lean_dec(v_snd_1012_);
v___y_1021_ = v___y_1052_;
v___y_1022_ = v___x_1054_;
goto v___jp_1020_;
}
else
{
lean_dec(v_snd_1012_);
if (v___y_1052_ == 0)
{
uint32_t v___x_1055_; uint8_t v___x_1056_; 
v___x_1055_ = 95;
v___x_1056_ = lean_uint32_dec_eq(v___x_1017_, v___x_1055_);
if (v___x_1056_ == 0)
{
lean_dec(v_fst_1008_);
lean_dec(v_fst_1004_);
v___y_1021_ = v___y_1052_;
v___y_1022_ = v___x_1056_;
goto v___jp_1020_;
}
else
{
v___y_1046_ = v___y_1052_;
v___y_1047_ = v___x_1056_;
goto v___jp_1045_;
}
}
else
{
v___y_1046_ = v___y_1052_;
v___y_1047_ = v___y_1052_;
goto v___jp_1045_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_recur_996_);
return v_acc_994_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_isNat___lam__0___boxed(lean_object* v___y_1067_, lean_object* v___x_1068_, lean_object* v_it_1069_, lean_object* v_acc_1070_, lean_object* v_hP_1071_, lean_object* v_recur_1072_){
_start:
{
uint8_t v___x_1036__boxed_1073_; lean_object* v_res_1074_; 
v___x_1036__boxed_1073_ = lean_unbox(v___x_1068_);
v_res_1074_ = l_Substring_Raw_isNat___lam__0(v___y_1067_, v___x_1036__boxed_1073_, v_it_1069_, v_acc_1070_, v_hP_1071_, v_recur_1072_);
lean_dec(v_it_1069_);
lean_dec_ref(v___y_1067_);
return v_res_1074_;
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_isNat(lean_object* v_s_1075_){
_start:
{
lean_object* v_str_1076_; lean_object* v_startPos_1077_; lean_object* v_stopPos_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1116_; 
v_str_1076_ = lean_ctor_get(v_s_1075_, 0);
v_startPos_1077_ = lean_ctor_get(v_s_1075_, 1);
v_stopPos_1078_ = lean_ctor_get(v_s_1075_, 2);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_s_1075_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1080_ = v_s_1075_;
v_isShared_1081_ = v_isSharedCheck_1116_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_stopPos_1078_);
lean_inc(v_startPos_1077_);
lean_inc(v_str_1076_);
lean_dec(v_s_1075_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1116_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; uint8_t v___x_1084_; 
v___x_1082_ = lean_nat_sub(v_stopPos_1078_, v_startPos_1077_);
v___x_1083_ = lean_unsigned_to_nat(0u);
v___x_1084_ = lean_nat_dec_eq(v___x_1082_, v___x_1083_);
lean_dec(v___x_1082_);
if (v___x_1084_ == 0)
{
uint8_t v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___y_1094_; lean_object* v___x_1105_; uint8_t v___x_1109_; 
v___x_1085_ = 1;
v___x_1086_ = lean_box(v___x_1084_);
v___x_1087_ = lean_box(v___x_1085_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_box(v___x_1084_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v___x_1088_);
v___x_1091_ = lean_box(v___x_1085_);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v___x_1090_);
v___x_1105_ = l_String_instInhabitedSlice;
v___x_1109_ = lean_string_is_valid_pos(v_str_1076_, v_startPos_1077_);
if (v___x_1109_ == 0)
{
lean_del_object(v___x_1080_);
lean_dec(v_stopPos_1078_);
lean_dec(v_startPos_1077_);
lean_dec_ref(v_str_1076_);
goto v___jp_1106_;
}
else
{
uint8_t v___x_1110_; 
v___x_1110_ = lean_string_is_valid_pos(v_str_1076_, v_stopPos_1078_);
if (v___x_1110_ == 0)
{
lean_del_object(v___x_1080_);
lean_dec(v_stopPos_1078_);
lean_dec(v_startPos_1077_);
lean_dec_ref(v_str_1076_);
goto v___jp_1106_;
}
else
{
uint8_t v___x_1111_; 
v___x_1111_ = lean_nat_dec_le(v_startPos_1077_, v_stopPos_1078_);
if (v___x_1111_ == 0)
{
lean_del_object(v___x_1080_);
lean_dec(v_stopPos_1078_);
lean_dec(v_startPos_1077_);
lean_dec_ref(v_str_1076_);
goto v___jp_1106_;
}
else
{
lean_object* v___x_1113_; 
if (v_isShared_1081_ == 0)
{
v___x_1113_ = v___x_1080_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_str_1076_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_startPos_1077_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_stopPos_1078_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
v___y_1094_ = v___x_1113_;
goto v___jp_1093_;
}
}
}
}
v___jp_1093_:
{
lean_object* v___x_1095_; lean_object* v___f_1096_; lean_object* v___x_1097_; lean_object* v_snd_1098_; lean_object* v_snd_1099_; lean_object* v_snd_1100_; uint8_t v___x_1101_; 
v___x_1095_ = lean_box(v___x_1084_);
v___f_1096_ = lean_alloc_closure((void*)(l_Substring_Raw_isNat___lam__0___boxed), 6, 2);
lean_closure_set(v___f_1096_, 0, v___y_1094_);
lean_closure_set(v___f_1096_, 1, v___x_1095_);
v___x_1097_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1096_, v___x_1083_, v___x_1092_, lean_box(0));
v_snd_1098_ = lean_ctor_get(v___x_1097_, 1);
lean_inc(v_snd_1098_);
lean_dec(v___x_1097_);
v_snd_1099_ = lean_ctor_get(v_snd_1098_, 1);
lean_inc(v_snd_1099_);
lean_dec(v_snd_1098_);
v_snd_1100_ = lean_ctor_get(v_snd_1099_, 1);
v___x_1101_ = lean_unbox(v_snd_1100_);
if (v___x_1101_ == 0)
{
uint8_t v___x_1102_; 
lean_inc(v_snd_1100_);
lean_dec(v_snd_1099_);
v___x_1102_ = lean_unbox(v_snd_1100_);
lean_dec(v_snd_1100_);
return v___x_1102_;
}
else
{
lean_object* v_fst_1103_; uint8_t v___x_1104_; 
v_fst_1103_ = lean_ctor_get(v_snd_1099_, 0);
lean_inc(v_fst_1103_);
lean_dec(v_snd_1099_);
v___x_1104_ = lean_unbox(v_fst_1103_);
lean_dec(v_fst_1103_);
return v___x_1104_;
}
}
v___jp_1106_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_1108_ = l_panic___redArg(v___x_1105_, v___x_1107_);
v___y_1094_ = v___x_1108_;
goto v___jp_1093_;
}
}
else
{
uint8_t v___x_1115_; 
lean_del_object(v___x_1080_);
lean_dec(v_stopPos_1078_);
lean_dec(v_startPos_1077_);
lean_dec_ref(v_str_1076_);
v___x_1115_ = 0;
return v___x_1115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_isNat___boxed(lean_object* v_s_1117_){
_start:
{
uint8_t v_res_1118_; lean_object* v_r_1119_; 
v_res_1118_ = l_Substring_Raw_isNat(v_s_1117_);
v_r_1119_ = lean_box(v_res_1118_);
return v_r_1119_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg(lean_object* v___y_1120_, lean_object* v_a_1121_, lean_object* v_b_1122_){
_start:
{
lean_object* v_str_1123_; lean_object* v_startInclusive_1124_; lean_object* v_endExclusive_1125_; lean_object* v___x_1126_; uint8_t v_decide_1127_; 
v_str_1123_ = lean_ctor_get(v___y_1120_, 0);
v_startInclusive_1124_ = lean_ctor_get(v___y_1120_, 1);
v_endExclusive_1125_ = lean_ctor_get(v___y_1120_, 2);
v___x_1126_ = lean_nat_sub(v_endExclusive_1125_, v_startInclusive_1124_);
v_decide_1127_ = lean_nat_dec_eq(v_a_1121_, v___x_1126_);
lean_dec(v___x_1126_);
if (v_decide_1127_ == 0)
{
lean_object* v___x_1128_; uint32_t v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; uint32_t v___x_1132_; uint8_t v___x_1133_; 
v___x_1128_ = lean_nat_add(v_startInclusive_1124_, v_a_1121_);
lean_dec(v_a_1121_);
v___x_1129_ = lean_string_utf8_get_fast(v_str_1123_, v___x_1128_);
v___x_1130_ = lean_string_utf8_next_fast(v_str_1123_, v___x_1128_);
lean_dec(v___x_1128_);
v___x_1131_ = lean_nat_sub(v___x_1130_, v_startInclusive_1124_);
v___x_1132_ = 95;
v___x_1133_ = lean_uint32_dec_eq(v___x_1129_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1134_ = lean_unsigned_to_nat(10u);
v___x_1135_ = lean_nat_mul(v_b_1122_, v___x_1134_);
lean_dec(v_b_1122_);
v___x_1136_ = lean_uint32_to_nat(v___x_1129_);
v___x_1137_ = lean_unsigned_to_nat(48u);
v___x_1138_ = lean_nat_sub(v___x_1136_, v___x_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_nat_add(v___x_1135_, v___x_1138_);
lean_dec(v___x_1138_);
lean_dec(v___x_1135_);
v_a_1121_ = v___x_1131_;
v_b_1122_ = v___x_1139_;
goto _start;
}
else
{
v_a_1121_ = v___x_1131_;
goto _start;
}
}
else
{
lean_dec(v_a_1121_);
return v_b_1122_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg___boxed(lean_object* v___y_1142_, lean_object* v_a_1143_, lean_object* v_b_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg(v___y_1142_, v_a_1143_, v_b_1144_);
lean_dec_ref(v___y_1142_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg(lean_object* v___x_1146_, lean_object* v___y_1147_, lean_object* v_a_1148_, lean_object* v_b_1149_){
_start:
{
lean_object* v_str_1150_; lean_object* v_startInclusive_1151_; lean_object* v_endExclusive_1152_; lean_object* v___x_1153_; uint8_t v_decide_1154_; 
v_str_1150_ = lean_ctor_get(v___y_1147_, 0);
v_startInclusive_1151_ = lean_ctor_get(v___y_1147_, 1);
v_endExclusive_1152_ = lean_ctor_get(v___y_1147_, 2);
v___x_1153_ = lean_nat_sub(v_endExclusive_1152_, v_startInclusive_1151_);
v_decide_1154_ = lean_nat_dec_eq(v_a_1148_, v___x_1153_);
lean_dec(v___x_1153_);
if (v_decide_1154_ == 0)
{
lean_object* v_snd_1155_; lean_object* v_snd_1156_; lean_object* v_fst_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1220_; 
v_snd_1155_ = lean_ctor_get(v_b_1149_, 1);
lean_inc(v_snd_1155_);
v_snd_1156_ = lean_ctor_get(v_snd_1155_, 1);
lean_inc(v_snd_1156_);
v_fst_1157_ = lean_ctor_get(v_b_1149_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_b_1149_);
if (v_isSharedCheck_1220_ == 0)
{
lean_object* v_unused_1221_; 
v_unused_1221_ = lean_ctor_get(v_b_1149_, 1);
lean_dec(v_unused_1221_);
v___x_1159_ = v_b_1149_;
v_isShared_1160_ = v_isSharedCheck_1220_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_fst_1157_);
lean_dec(v_b_1149_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1220_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v_fst_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1218_; 
v_fst_1161_ = lean_ctor_get(v_snd_1155_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_snd_1155_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v_snd_1155_, 1);
lean_dec(v_unused_1219_);
v___x_1163_ = v_snd_1155_;
v_isShared_1164_ = v_isSharedCheck_1218_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_fst_1161_);
lean_dec(v_snd_1155_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1218_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v_snd_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1216_; 
v_snd_1165_ = lean_ctor_get(v_snd_1156_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_snd_1156_);
if (v_isSharedCheck_1216_ == 0)
{
lean_object* v_unused_1217_; 
v_unused_1217_ = lean_ctor_get(v_snd_1156_, 0);
lean_dec(v_unused_1217_);
v___x_1167_ = v_snd_1156_;
v_isShared_1168_ = v_isSharedCheck_1216_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_snd_1165_);
lean_dec(v_snd_1156_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1216_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; uint8_t v___x_1170_; lean_object* v___x_1171_; uint32_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; uint8_t v___y_1176_; uint8_t v___y_1177_; uint8_t v___y_1195_; uint8_t v___y_1196_; uint8_t v___y_1201_; uint8_t v___y_1202_; uint8_t v___y_1207_; uint32_t v___x_1212_; uint8_t v___x_1213_; 
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = lean_nat_dec_eq(v___x_1146_, v___x_1169_);
v___x_1171_ = lean_nat_add(v_startInclusive_1151_, v_a_1148_);
lean_dec(v_a_1148_);
v___x_1172_ = lean_string_utf8_get_fast(v_str_1150_, v___x_1171_);
v___x_1173_ = lean_string_utf8_next_fast(v_str_1150_, v___x_1171_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_nat_sub(v___x_1173_, v_startInclusive_1151_);
v___x_1212_ = 48;
v___x_1213_ = lean_uint32_dec_le(v___x_1212_, v___x_1172_);
if (v___x_1213_ == 0)
{
v___y_1207_ = v___x_1213_;
goto v___jp_1206_;
}
else
{
uint32_t v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = 57;
v___x_1215_ = lean_uint32_dec_le(v___x_1172_, v___x_1214_);
v___y_1207_ = v___x_1215_;
goto v___jp_1206_;
}
v___jp_1175_:
{
uint32_t v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1178_ = 95;
v___x_1179_ = lean_uint32_dec_eq(v___x_1172_, v___x_1178_);
v___x_1180_ = lean_box(v___y_1176_);
v___x_1181_ = lean_box(v___y_1177_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 1, v___x_1181_);
lean_ctor_set(v___x_1167_, 0, v___x_1180_);
v___x_1183_ = v___x_1167_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1180_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = lean_box(v___x_1179_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v___x_1183_);
lean_ctor_set(v___x_1163_, 0, v___x_1184_);
v___x_1186_ = v___x_1163_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v___x_1183_);
v___x_1186_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1187_ = lean_box(v___x_1170_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1186_);
lean_ctor_set(v___x_1159_, 0, v___x_1187_);
v___x_1189_ = v___x_1159_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1186_);
v___x_1189_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
v_a_1148_ = v___x_1174_;
v_b_1149_ = v___x_1189_;
goto _start;
}
}
}
}
v___jp_1194_:
{
uint8_t v___x_1197_; 
v___x_1197_ = lean_unbox(v_fst_1161_);
lean_dec(v_fst_1161_);
if (v___x_1197_ == 0)
{
v___y_1176_ = v___y_1195_;
v___y_1177_ = v___y_1196_;
goto v___jp_1175_;
}
else
{
uint32_t v___x_1198_; uint8_t v___x_1199_; 
v___x_1198_ = 95;
v___x_1199_ = lean_uint32_dec_eq(v___x_1172_, v___x_1198_);
if (v___x_1199_ == 0)
{
v___y_1176_ = v___y_1195_;
v___y_1177_ = v___y_1196_;
goto v___jp_1175_;
}
else
{
v___y_1176_ = v___y_1195_;
v___y_1177_ = v___x_1170_;
goto v___jp_1175_;
}
}
}
v___jp_1200_:
{
uint8_t v___x_1203_; 
v___x_1203_ = lean_unbox(v_fst_1157_);
lean_dec(v_fst_1157_);
if (v___x_1203_ == 0)
{
v___y_1195_ = v___y_1201_;
v___y_1196_ = v___y_1202_;
goto v___jp_1194_;
}
else
{
uint32_t v___x_1204_; uint8_t v___x_1205_; 
v___x_1204_ = 95;
v___x_1205_ = lean_uint32_dec_eq(v___x_1172_, v___x_1204_);
if (v___x_1205_ == 0)
{
v___y_1195_ = v___y_1201_;
v___y_1196_ = v___y_1202_;
goto v___jp_1194_;
}
else
{
lean_dec(v_fst_1161_);
v___y_1176_ = v___y_1201_;
v___y_1177_ = v___x_1170_;
goto v___jp_1175_;
}
}
}
v___jp_1206_:
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_unbox(v_snd_1165_);
if (v___x_1208_ == 0)
{
uint8_t v___x_1209_; 
lean_dec(v_fst_1161_);
lean_dec(v_fst_1157_);
v___x_1209_ = lean_unbox(v_snd_1165_);
lean_dec(v_snd_1165_);
v___y_1176_ = v___y_1207_;
v___y_1177_ = v___x_1209_;
goto v___jp_1175_;
}
else
{
lean_dec(v_snd_1165_);
if (v___y_1207_ == 0)
{
uint32_t v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = 95;
v___x_1211_ = lean_uint32_dec_eq(v___x_1172_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_dec(v_fst_1161_);
lean_dec(v_fst_1157_);
v___y_1176_ = v___y_1207_;
v___y_1177_ = v___x_1211_;
goto v___jp_1175_;
}
else
{
v___y_1201_ = v___y_1207_;
v___y_1202_ = v___x_1211_;
goto v___jp_1200_;
}
}
else
{
v___y_1201_ = v___y_1207_;
v___y_1202_ = v___y_1207_;
goto v___jp_1200_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1148_);
return v_b_1149_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg___boxed(lean_object* v___x_1222_, lean_object* v___y_1223_, lean_object* v_a_1224_, lean_object* v_b_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg(v___x_1222_, v___y_1223_, v_a_1224_, v_b_1225_);
lean_dec_ref(v___y_1223_);
lean_dec(v___x_1222_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toNat_x3f(lean_object* v_s_1227_){
_start:
{
lean_object* v_str_1228_; lean_object* v_startPos_1229_; lean_object* v_stopPos_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1277_; 
v_str_1228_ = lean_ctor_get(v_s_1227_, 0);
v_startPos_1229_ = lean_ctor_get(v_s_1227_, 1);
v_stopPos_1230_ = lean_ctor_get(v_s_1227_, 2);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_s_1227_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1232_ = v_s_1227_;
v_isShared_1233_ = v_isSharedCheck_1277_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_stopPos_1230_);
lean_inc(v_startPos_1229_);
lean_inc(v_str_1228_);
lean_dec(v_s_1227_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1277_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___y_1237_; uint8_t v___x_1243_; 
v___x_1234_ = lean_nat_sub(v_stopPos_1230_, v_startPos_1229_);
v___x_1235_ = lean_unsigned_to_nat(0u);
v___x_1243_ = lean_nat_dec_eq(v___x_1234_, v___x_1235_);
if (v___x_1243_ == 0)
{
uint8_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___y_1253_; uint8_t v___x_1272_; 
v___x_1244_ = 1;
v___x_1245_ = lean_box(v___x_1243_);
v___x_1246_ = lean_box(v___x_1244_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1245_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = lean_box(v___x_1243_);
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
lean_ctor_set(v___x_1249_, 1, v___x_1247_);
v___x_1250_ = lean_box(v___x_1244_);
v___x_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
v___x_1272_ = lean_string_is_valid_pos(v_str_1228_, v_startPos_1229_);
if (v___x_1272_ == 0)
{
goto v___jp_1269_;
}
else
{
uint8_t v___x_1273_; 
v___x_1273_ = lean_string_is_valid_pos(v_str_1228_, v_stopPos_1230_);
if (v___x_1273_ == 0)
{
goto v___jp_1269_;
}
else
{
uint8_t v___x_1274_; 
v___x_1274_ = lean_nat_dec_le(v_startPos_1229_, v_stopPos_1230_);
if (v___x_1274_ == 0)
{
goto v___jp_1269_;
}
else
{
lean_object* v___x_1275_; 
lean_inc(v_stopPos_1230_);
lean_inc(v_startPos_1229_);
lean_inc_ref(v_str_1228_);
v___x_1275_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1275_, 0, v_str_1228_);
lean_ctor_set(v___x_1275_, 1, v_startPos_1229_);
lean_ctor_set(v___x_1275_, 2, v_stopPos_1230_);
v___y_1253_ = v___x_1275_;
goto v___jp_1252_;
}
}
}
v___jp_1252_:
{
lean_object* v___x_1254_; lean_object* v_snd_1255_; lean_object* v_snd_1256_; lean_object* v_snd_1257_; uint8_t v___x_1258_; 
v___x_1254_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg(v___x_1234_, v___y_1253_, v___x_1235_, v___x_1251_);
lean_dec_ref(v___y_1253_);
lean_dec(v___x_1234_);
v_snd_1255_ = lean_ctor_get(v___x_1254_, 1);
lean_inc(v_snd_1255_);
lean_dec_ref(v___x_1254_);
v_snd_1256_ = lean_ctor_get(v_snd_1255_, 1);
lean_inc(v_snd_1256_);
lean_dec(v_snd_1255_);
v_snd_1257_ = lean_ctor_get(v_snd_1256_, 1);
v___x_1258_ = lean_unbox(v_snd_1257_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; 
lean_dec(v_snd_1256_);
lean_del_object(v___x_1232_);
lean_dec(v_stopPos_1230_);
lean_dec(v_startPos_1229_);
lean_dec_ref(v_str_1228_);
v___x_1259_ = lean_box(0);
return v___x_1259_;
}
else
{
lean_object* v_fst_1260_; uint8_t v___x_1261_; 
v_fst_1260_ = lean_ctor_get(v_snd_1256_, 0);
lean_inc(v_fst_1260_);
lean_dec(v_snd_1256_);
v___x_1261_ = lean_unbox(v_fst_1260_);
lean_dec(v_fst_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; 
lean_del_object(v___x_1232_);
lean_dec(v_stopPos_1230_);
lean_dec(v_startPos_1229_);
lean_dec_ref(v_str_1228_);
v___x_1262_ = lean_box(0);
return v___x_1262_;
}
else
{
uint8_t v___x_1263_; 
v___x_1263_ = lean_string_is_valid_pos(v_str_1228_, v_startPos_1229_);
if (v___x_1263_ == 0)
{
lean_del_object(v___x_1232_);
lean_dec(v_stopPos_1230_);
lean_dec(v_startPos_1229_);
lean_dec_ref(v_str_1228_);
goto v___jp_1240_;
}
else
{
uint8_t v___x_1264_; 
v___x_1264_ = lean_string_is_valid_pos(v_str_1228_, v_stopPos_1230_);
if (v___x_1264_ == 0)
{
lean_del_object(v___x_1232_);
lean_dec(v_stopPos_1230_);
lean_dec(v_startPos_1229_);
lean_dec_ref(v_str_1228_);
goto v___jp_1240_;
}
else
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_nat_dec_le(v_startPos_1229_, v_stopPos_1230_);
if (v___x_1265_ == 0)
{
lean_del_object(v___x_1232_);
lean_dec(v_stopPos_1230_);
lean_dec(v_startPos_1229_);
lean_dec_ref(v_str_1228_);
goto v___jp_1240_;
}
else
{
lean_object* v___x_1267_; 
if (v_isShared_1233_ == 0)
{
v___x_1267_ = v___x_1232_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_str_1228_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_startPos_1229_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_stopPos_1230_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
v___y_1237_ = v___x_1267_;
goto v___jp_1236_;
}
}
}
}
}
}
}
v___jp_1269_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_1271_ = l_panic___at___00Substring_Raw_Internal_allImpl_spec__1(v___x_1270_);
v___y_1253_ = v___x_1271_;
goto v___jp_1252_;
}
}
else
{
lean_object* v___x_1276_; 
lean_dec(v___x_1234_);
lean_del_object(v___x_1232_);
lean_dec(v_stopPos_1230_);
lean_dec(v_startPos_1229_);
lean_dec_ref(v_str_1228_);
v___x_1276_ = lean_box(0);
return v___x_1276_;
}
v___jp_1236_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg(v___y_1237_, v___x_1235_, v___x_1235_);
lean_dec_ref(v___y_1237_);
v___x_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
return v___x_1239_;
}
v___jp_1240_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = lean_obj_once(&l_Substring_Raw_foldl___redArg___closed__3, &l_Substring_Raw_foldl___redArg___closed__3_once, _init_l_Substring_Raw_foldl___redArg___closed__3);
v___x_1242_ = l_panic___at___00Substring_Raw_Internal_allImpl_spec__1(v___x_1241_);
v___y_1237_ = v___x_1242_;
goto v___jp_1236_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0(lean_object* v___x_1278_, lean_object* v___y_1279_, lean_object* v_inst_1280_, lean_object* v_R_1281_, lean_object* v_a_1282_, lean_object* v_b_1283_, lean_object* v_c_1284_){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___redArg(v___x_1278_, v___y_1279_, v_a_1282_, v_b_1283_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0___boxed(lean_object* v___x_1286_, lean_object* v___y_1287_, lean_object* v_inst_1288_, lean_object* v_R_1289_, lean_object* v_a_1290_, lean_object* v_b_1291_, lean_object* v_c_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__0(v___x_1286_, v___y_1287_, v_inst_1288_, v_R_1289_, v_a_1290_, v_b_1291_, v_c_1292_);
lean_dec_ref(v___y_1287_);
lean_dec(v___x_1286_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1(lean_object* v___y_1294_, lean_object* v_inst_1295_, lean_object* v_R_1296_, lean_object* v_a_1297_, lean_object* v_b_1298_, lean_object* v_c_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___redArg(v___y_1294_, v_a_1297_, v_b_1298_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1___boxed(lean_object* v___y_1301_, lean_object* v_inst_1302_, lean_object* v_R_1303_, lean_object* v_a_1304_, lean_object* v_b_1305_, lean_object* v_c_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_WellFounded_opaqueFix_u2083___at___00Substring_Raw_toNat_x3f_spec__1(v___y_1301_, v_inst_1302_, v_R_1303_, v_a_1304_, v_b_1305_, v_c_1306_);
lean_dec_ref(v___y_1301_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_repair(lean_object* v_x_1308_){
_start:
{
lean_object* v_str_1309_; lean_object* v_startPos_1310_; lean_object* v_stopPos_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1327_; 
v_str_1309_ = lean_ctor_get(v_x_1308_, 0);
v_startPos_1310_ = lean_ctor_get(v_x_1308_, 1);
v_stopPos_1311_ = lean_ctor_get(v_x_1308_, 2);
v_isSharedCheck_1327_ = !lean_is_exclusive(v_x_1308_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1313_ = v_x_1308_;
v_isShared_1314_ = v_isSharedCheck_1327_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_stopPos_1311_);
lean_inc(v_startPos_1310_);
lean_inc(v_str_1309_);
lean_dec(v_x_1308_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1327_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___y_1316_; uint8_t v___x_1325_; 
v___x_1325_ = lean_string_is_valid_pos(v_str_1309_, v_startPos_1310_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; 
lean_dec(v_startPos_1310_);
v___x_1326_ = lean_string_utf8_byte_size(v_str_1309_);
v___y_1316_ = v___x_1326_;
goto v___jp_1315_;
}
else
{
v___y_1316_ = v_startPos_1310_;
goto v___jp_1315_;
}
v___jp_1315_:
{
uint8_t v___x_1317_; 
v___x_1317_ = lean_string_is_valid_pos(v_str_1309_, v_stopPos_1311_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1320_; 
lean_dec(v_stopPos_1311_);
v___x_1318_ = lean_string_utf8_byte_size(v_str_1309_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 2, v___x_1318_);
lean_ctor_set(v___x_1313_, 1, v___y_1316_);
v___x_1320_ = v___x_1313_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_str_1309_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___y_1316_);
lean_ctor_set(v_reuseFailAlloc_1321_, 2, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
else
{
lean_object* v___x_1323_; 
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v___y_1316_);
v___x_1323_ = v___x_1313_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_str_1309_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v___y_1316_);
lean_ctor_set(v_reuseFailAlloc_1324_, 2, v_stopPos_1311_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_beq(lean_object* v_ss1_1328_, lean_object* v_ss2_1329_){
_start:
{
lean_object* v_ss1_1330_; lean_object* v_str_1331_; lean_object* v_startPos_1332_; lean_object* v_stopPos_1333_; lean_object* v_ss2_1334_; lean_object* v_str_1335_; lean_object* v_startPos_1336_; lean_object* v_stopPos_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; uint8_t v___x_1340_; 
v_ss1_1330_ = l_Substring_Raw_repair(v_ss1_1328_);
v_str_1331_ = lean_ctor_get(v_ss1_1330_, 0);
lean_inc_ref(v_str_1331_);
v_startPos_1332_ = lean_ctor_get(v_ss1_1330_, 1);
lean_inc(v_startPos_1332_);
v_stopPos_1333_ = lean_ctor_get(v_ss1_1330_, 2);
lean_inc(v_stopPos_1333_);
lean_dec_ref(v_ss1_1330_);
v_ss2_1334_ = l_Substring_Raw_repair(v_ss2_1329_);
v_str_1335_ = lean_ctor_get(v_ss2_1334_, 0);
lean_inc_ref(v_str_1335_);
v_startPos_1336_ = lean_ctor_get(v_ss2_1334_, 1);
lean_inc(v_startPos_1336_);
v_stopPos_1337_ = lean_ctor_get(v_ss2_1334_, 2);
lean_inc(v_stopPos_1337_);
lean_dec_ref(v_ss2_1334_);
v___x_1338_ = lean_nat_sub(v_stopPos_1333_, v_startPos_1332_);
lean_dec(v_stopPos_1333_);
v___x_1339_ = lean_nat_sub(v_stopPos_1337_, v_startPos_1336_);
lean_dec(v_stopPos_1337_);
v___x_1340_ = lean_nat_dec_eq(v___x_1338_, v___x_1339_);
lean_dec(v___x_1339_);
if (v___x_1340_ == 0)
{
lean_dec(v___x_1338_);
lean_dec(v_startPos_1336_);
lean_dec_ref(v_str_1335_);
lean_dec(v_startPos_1332_);
lean_dec_ref(v_str_1331_);
return v___x_1340_;
}
else
{
uint8_t v___x_1341_; 
v___x_1341_ = l_String_Pos_Raw_substrEq(v_str_1331_, v_startPos_1332_, v_str_1335_, v_startPos_1336_, v___x_1338_);
lean_dec(v___x_1338_);
lean_dec_ref(v_str_1335_);
lean_dec_ref(v_str_1331_);
return v___x_1341_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_beq___boxed(lean_object* v_ss1_1342_, lean_object* v_ss2_1343_){
_start:
{
uint8_t v_res_1344_; lean_object* v_r_1345_; 
v_res_1344_ = l_Substring_Raw_beq(v_ss1_1342_, v_ss2_1343_);
v_r_1345_ = lean_box(v_res_1344_);
return v_r_1345_;
}
}
LEAN_EXPORT uint8_t lean_substring_beq(lean_object* v_ss1_1346_, lean_object* v_ss2_1347_){
_start:
{
uint8_t v___x_1348_; 
v___x_1348_ = l_Substring_Raw_beq(v_ss1_1346_, v_ss2_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_Internal_beqImpl___boxed(lean_object* v_ss1_1349_, lean_object* v_ss2_1350_){
_start:
{
uint8_t v_res_1351_; lean_object* v_r_1352_; 
v_res_1351_ = lean_substring_beq(v_ss1_1349_, v_ss2_1350_);
v_r_1352_ = lean_box(v_res_1351_);
return v_r_1352_;
}
}
LEAN_EXPORT uint8_t l_Substring_Raw_sameAs(lean_object* v_ss1_1355_, lean_object* v_ss2_1356_){
_start:
{
lean_object* v_startPos_1357_; lean_object* v_startPos_1358_; uint8_t v_decide_1359_; 
v_startPos_1357_ = lean_ctor_get(v_ss1_1355_, 1);
v_startPos_1358_ = lean_ctor_get(v_ss2_1356_, 1);
v_decide_1359_ = lean_nat_dec_eq(v_startPos_1357_, v_startPos_1358_);
if (v_decide_1359_ == 0)
{
lean_dec_ref(v_ss2_1356_);
lean_dec_ref(v_ss1_1355_);
return v_decide_1359_;
}
else
{
uint8_t v___x_1360_; 
v___x_1360_ = l_Substring_Raw_beq(v_ss1_1355_, v_ss2_1356_);
return v___x_1360_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_sameAs___boxed(lean_object* v_ss1_1361_, lean_object* v_ss2_1362_){
_start:
{
uint8_t v_res_1363_; lean_object* v_r_1364_; 
v_res_1363_ = l_Substring_Raw_sameAs(v_ss1_1361_, v_ss2_1362_);
v_r_1364_ = lean_box(v_res_1363_);
return v_r_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonPrefix_loop(lean_object* v_s_1365_, lean_object* v_t_1366_, lean_object* v_spos_1367_, lean_object* v_tpos_1368_){
_start:
{
lean_object* v_str_1369_; lean_object* v_stopPos_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v_str_1369_ = lean_ctor_get(v_s_1365_, 0);
v_stopPos_1370_ = lean_ctor_get(v_s_1365_, 2);
v___x_1371_ = lean_unsigned_to_nat(1u);
v___x_1372_ = lean_nat_add(v_spos_1367_, v___x_1371_);
v___x_1373_ = lean_nat_dec_le(v___x_1372_, v_stopPos_1370_);
lean_dec(v___x_1372_);
if (v___x_1373_ == 0)
{
lean_dec(v_tpos_1368_);
return v_spos_1367_;
}
else
{
lean_object* v_str_1374_; lean_object* v_stopPos_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_str_1374_ = lean_ctor_get(v_t_1366_, 0);
v_stopPos_1375_ = lean_ctor_get(v_t_1366_, 2);
v___x_1376_ = lean_nat_add(v_tpos_1368_, v___x_1371_);
v___x_1377_ = lean_nat_dec_le(v___x_1376_, v_stopPos_1375_);
lean_dec(v___x_1376_);
if (v___x_1377_ == 0)
{
lean_dec(v_tpos_1368_);
return v_spos_1367_;
}
else
{
uint32_t v___x_1378_; uint32_t v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = lean_string_utf8_get(v_str_1369_, v_spos_1367_);
v___x_1379_ = lean_string_utf8_get(v_str_1374_, v_tpos_1368_);
v___x_1380_ = lean_uint32_dec_eq(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_dec(v_tpos_1368_);
return v_spos_1367_;
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_string_utf8_next(v_str_1369_, v_spos_1367_);
lean_dec(v_spos_1367_);
v___x_1382_ = lean_string_utf8_next(v_str_1374_, v_tpos_1368_);
lean_dec(v_tpos_1368_);
v_spos_1367_ = v___x_1381_;
v_tpos_1368_ = v___x_1382_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonPrefix_loop___boxed(lean_object* v_s_1384_, lean_object* v_t_1385_, lean_object* v_spos_1386_, lean_object* v_tpos_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l___private_Init_Data_String_Substring_0__Substring_Raw_commonPrefix_loop(v_s_1384_, v_t_1385_, v_spos_1386_, v_tpos_1387_);
lean_dec_ref(v_t_1385_);
lean_dec_ref(v_s_1384_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_commonPrefix(lean_object* v_s_1389_, lean_object* v_t_1390_){
_start:
{
lean_object* v_str_1391_; lean_object* v_startPos_1392_; lean_object* v_startPos_1393_; lean_object* v___x_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
v_str_1391_ = lean_ctor_get(v_s_1389_, 0);
lean_inc_ref(v_str_1391_);
v_startPos_1392_ = lean_ctor_get(v_s_1389_, 1);
lean_inc_n(v_startPos_1392_, 2);
v_startPos_1393_ = lean_ctor_get(v_t_1390_, 1);
lean_inc(v_startPos_1393_);
v___x_1394_ = l___private_Init_Data_String_Substring_0__Substring_Raw_commonPrefix_loop(v_s_1389_, v_t_1390_, v_startPos_1392_, v_startPos_1393_);
lean_dec_ref(v_s_1389_);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_t_1390_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; lean_object* v_unused_1403_; lean_object* v_unused_1404_; 
v_unused_1402_ = lean_ctor_get(v_t_1390_, 2);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_t_1390_, 1);
lean_dec(v_unused_1403_);
v_unused_1404_ = lean_ctor_get(v_t_1390_, 0);
lean_dec(v_unused_1404_);
v___x_1396_ = v_t_1390_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v_t_1390_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 2, v___x_1394_);
lean_ctor_set(v___x_1396_, 1, v_startPos_1392_);
lean_ctor_set(v___x_1396_, 0, v_str_1391_);
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_str_1391_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_startPos_1392_);
lean_ctor_set(v_reuseFailAlloc_1400_, 2, v___x_1394_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonSuffix_loop(lean_object* v_s_1405_, lean_object* v_t_1406_, lean_object* v_spos_1407_, lean_object* v_tpos_1408_){
_start:
{
lean_object* v_str_1409_; lean_object* v_startPos_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v_str_1409_ = lean_ctor_get(v_s_1405_, 0);
v_startPos_1410_ = lean_ctor_get(v_s_1405_, 1);
v___x_1411_ = lean_unsigned_to_nat(1u);
v___x_1412_ = lean_nat_add(v_startPos_1410_, v___x_1411_);
v___x_1413_ = lean_nat_dec_le(v___x_1412_, v_spos_1407_);
lean_dec(v___x_1412_);
if (v___x_1413_ == 0)
{
lean_dec(v_tpos_1408_);
return v_spos_1407_;
}
else
{
lean_object* v_str_1414_; lean_object* v_startPos_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v_str_1414_ = lean_ctor_get(v_t_1406_, 0);
v_startPos_1415_ = lean_ctor_get(v_t_1406_, 1);
v___x_1416_ = lean_nat_add(v_startPos_1415_, v___x_1411_);
v___x_1417_ = lean_nat_dec_le(v___x_1416_, v_tpos_1408_);
lean_dec(v___x_1416_);
if (v___x_1417_ == 0)
{
lean_dec(v_tpos_1408_);
return v_spos_1407_;
}
else
{
lean_object* v_spos_x27_1418_; lean_object* v_tpos_x27_1419_; uint32_t v___x_1420_; uint32_t v___x_1421_; uint8_t v___x_1422_; 
v_spos_x27_1418_ = lean_string_utf8_prev(v_str_1409_, v_spos_1407_);
v_tpos_x27_1419_ = lean_string_utf8_prev(v_str_1414_, v_tpos_1408_);
lean_dec(v_tpos_1408_);
v___x_1420_ = lean_string_utf8_get(v_str_1409_, v_spos_x27_1418_);
v___x_1421_ = lean_string_utf8_get(v_str_1414_, v_tpos_x27_1419_);
v___x_1422_ = lean_uint32_dec_eq(v___x_1420_, v___x_1421_);
if (v___x_1422_ == 0)
{
lean_dec(v_tpos_x27_1419_);
lean_dec(v_spos_x27_1418_);
return v_spos_1407_;
}
else
{
lean_dec(v_spos_1407_);
v_spos_1407_ = v_spos_x27_1418_;
v_tpos_1408_ = v_tpos_x27_1419_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_commonSuffix_loop___boxed(lean_object* v_s_1424_, lean_object* v_t_1425_, lean_object* v_spos_1426_, lean_object* v_tpos_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l___private_Init_Data_String_Substring_0__Substring_Raw_commonSuffix_loop(v_s_1424_, v_t_1425_, v_spos_1426_, v_tpos_1427_);
lean_dec_ref(v_t_1425_);
lean_dec_ref(v_s_1424_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_commonSuffix(lean_object* v_s_1429_, lean_object* v_t_1430_){
_start:
{
lean_object* v_str_1431_; lean_object* v_stopPos_1432_; lean_object* v_stopPos_1433_; lean_object* v___x_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
v_str_1431_ = lean_ctor_get(v_s_1429_, 0);
lean_inc_ref(v_str_1431_);
v_stopPos_1432_ = lean_ctor_get(v_s_1429_, 2);
lean_inc_n(v_stopPos_1432_, 2);
v_stopPos_1433_ = lean_ctor_get(v_t_1430_, 2);
lean_inc(v_stopPos_1433_);
v___x_1434_ = l___private_Init_Data_String_Substring_0__Substring_Raw_commonSuffix_loop(v_s_1429_, v_t_1430_, v_stopPos_1432_, v_stopPos_1433_);
lean_dec_ref(v_s_1429_);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_t_1430_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; lean_object* v_unused_1443_; lean_object* v_unused_1444_; 
v_unused_1442_ = lean_ctor_get(v_t_1430_, 2);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v_t_1430_, 1);
lean_dec(v_unused_1443_);
v_unused_1444_ = lean_ctor_get(v_t_1430_, 0);
lean_dec(v_unused_1444_);
v___x_1436_ = v_t_1430_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_dec(v_t_1430_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 2, v_stopPos_1432_);
lean_ctor_set(v___x_1436_, 1, v___x_1434_);
lean_ctor_set(v___x_1436_, 0, v_str_1431_);
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_str_1431_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_stopPos_1432_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_dropPrefix_x3f(lean_object* v_s_1445_, lean_object* v_pre_1446_){
_start:
{
lean_object* v_t_1447_; lean_object* v_startPos_1448_; lean_object* v_stopPos_1449_; lean_object* v_startPos_1450_; lean_object* v_stopPos_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; uint8_t v___x_1454_; 
lean_inc_ref(v_pre_1446_);
lean_inc_ref(v_s_1445_);
v_t_1447_ = l_Substring_Raw_commonPrefix(v_s_1445_, v_pre_1446_);
v_startPos_1448_ = lean_ctor_get(v_t_1447_, 1);
lean_inc(v_startPos_1448_);
v_stopPos_1449_ = lean_ctor_get(v_t_1447_, 2);
lean_inc(v_stopPos_1449_);
lean_dec_ref(v_t_1447_);
v_startPos_1450_ = lean_ctor_get(v_pre_1446_, 1);
lean_inc(v_startPos_1450_);
v_stopPos_1451_ = lean_ctor_get(v_pre_1446_, 2);
lean_inc(v_stopPos_1451_);
lean_dec_ref(v_pre_1446_);
v___x_1452_ = lean_nat_sub(v_stopPos_1449_, v_startPos_1448_);
lean_dec(v_startPos_1448_);
v___x_1453_ = lean_nat_sub(v_stopPos_1451_, v_startPos_1450_);
lean_dec(v_startPos_1450_);
lean_dec(v_stopPos_1451_);
v___x_1454_ = lean_nat_dec_eq(v___x_1452_, v___x_1453_);
lean_dec(v___x_1453_);
lean_dec(v___x_1452_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; 
lean_dec(v_stopPos_1449_);
lean_dec_ref(v_s_1445_);
v___x_1455_ = lean_box(0);
return v___x_1455_;
}
else
{
lean_object* v_str_1456_; lean_object* v_stopPos_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1465_; 
v_str_1456_ = lean_ctor_get(v_s_1445_, 0);
v_stopPos_1457_ = lean_ctor_get(v_s_1445_, 2);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_s_1445_);
if (v_isSharedCheck_1465_ == 0)
{
lean_object* v_unused_1466_; 
v_unused_1466_ = lean_ctor_get(v_s_1445_, 1);
lean_dec(v_unused_1466_);
v___x_1459_ = v_s_1445_;
v_isShared_1460_ = v_isSharedCheck_1465_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_stopPos_1457_);
lean_inc(v_str_1456_);
lean_dec(v_s_1445_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1465_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 1, v_stopPos_1449_);
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_str_1456_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_stopPos_1449_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v_stopPos_1457_);
v___x_1462_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
return v___x_1463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_dropSuffix_x3f(lean_object* v_s_1467_, lean_object* v_suff_1468_){
_start:
{
lean_object* v_t_1469_; lean_object* v_startPos_1470_; lean_object* v_stopPos_1471_; lean_object* v_startPos_1472_; lean_object* v_stopPos_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
lean_inc_ref(v_suff_1468_);
lean_inc_ref(v_s_1467_);
v_t_1469_ = l_Substring_Raw_commonSuffix(v_s_1467_, v_suff_1468_);
v_startPos_1470_ = lean_ctor_get(v_t_1469_, 1);
lean_inc(v_startPos_1470_);
v_stopPos_1471_ = lean_ctor_get(v_t_1469_, 2);
lean_inc(v_stopPos_1471_);
lean_dec_ref(v_t_1469_);
v_startPos_1472_ = lean_ctor_get(v_suff_1468_, 1);
lean_inc(v_startPos_1472_);
v_stopPos_1473_ = lean_ctor_get(v_suff_1468_, 2);
lean_inc(v_stopPos_1473_);
lean_dec_ref(v_suff_1468_);
v___x_1474_ = lean_nat_sub(v_stopPos_1471_, v_startPos_1470_);
lean_dec(v_stopPos_1471_);
v___x_1475_ = lean_nat_sub(v_stopPos_1473_, v_startPos_1472_);
lean_dec(v_startPos_1472_);
lean_dec(v_stopPos_1473_);
v___x_1476_ = lean_nat_dec_eq(v___x_1474_, v___x_1475_);
lean_dec(v___x_1475_);
lean_dec(v___x_1474_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; 
lean_dec(v_startPos_1470_);
lean_dec_ref(v_s_1467_);
v___x_1477_ = lean_box(0);
return v___x_1477_;
}
else
{
lean_object* v_str_1478_; lean_object* v_startPos_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1487_; 
v_str_1478_ = lean_ctor_get(v_s_1467_, 0);
v_startPos_1479_ = lean_ctor_get(v_s_1467_, 1);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_s_1467_);
if (v_isSharedCheck_1487_ == 0)
{
lean_object* v_unused_1488_; 
v_unused_1488_ = lean_ctor_get(v_s_1467_, 2);
lean_dec(v_unused_1488_);
v___x_1481_ = v_s_1467_;
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_startPos_1479_);
lean_inc(v_str_1478_);
lean_dec(v_s_1467_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 2, v_startPos_1470_);
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_str_1478_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_startPos_1479_);
lean_ctor_set(v_reuseFailAlloc_1486_, 2, v_startPos_1470_);
v___x_1484_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___redArg(lean_object* v_x_1489_, lean_object* v_x_1490_, lean_object* v_x_1491_, lean_object* v_h__1_1492_, lean_object* v_h__2_1493_){
_start:
{
lean_object* v_zero_1494_; uint8_t v_isZero_1495_; 
v_zero_1494_ = lean_unsigned_to_nat(0u);
v_isZero_1495_ = lean_nat_dec_eq(v_x_1490_, v_zero_1494_);
if (v_isZero_1495_ == 1)
{
lean_object* v___x_1496_; 
lean_dec(v_h__2_1493_);
v___x_1496_ = lean_apply_2(v_h__1_1492_, v_x_1489_, v_x_1491_);
return v___x_1496_;
}
else
{
lean_object* v_one_1497_; lean_object* v_n_1498_; lean_object* v___x_1499_; 
lean_dec(v_h__1_1492_);
v_one_1497_ = lean_unsigned_to_nat(1u);
v_n_1498_ = lean_nat_sub(v_x_1490_, v_one_1497_);
v___x_1499_ = lean_apply_3(v_h__2_1493_, v_x_1489_, v_n_1498_, v_x_1491_);
return v___x_1499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___redArg___boxed(lean_object* v_x_1500_, lean_object* v_x_1501_, lean_object* v_x_1502_, lean_object* v_h__1_1503_, lean_object* v_h__2_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___redArg(v_x_1500_, v_x_1501_, v_x_1502_, v_h__1_1503_, v_h__2_1504_);
lean_dec(v_x_1501_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter(lean_object* v_motive_1506_, lean_object* v_x_1507_, lean_object* v_x_1508_, lean_object* v_x_1509_, lean_object* v_h__1_1510_, lean_object* v_h__2_1511_){
_start:
{
lean_object* v_zero_1512_; uint8_t v_isZero_1513_; 
v_zero_1512_ = lean_unsigned_to_nat(0u);
v_isZero_1513_ = lean_nat_dec_eq(v_x_1508_, v_zero_1512_);
if (v_isZero_1513_ == 1)
{
lean_object* v___x_1514_; 
lean_dec(v_h__2_1511_);
v___x_1514_ = lean_apply_2(v_h__1_1510_, v_x_1507_, v_x_1509_);
return v___x_1514_;
}
else
{
lean_object* v_one_1515_; lean_object* v_n_1516_; lean_object* v___x_1517_; 
lean_dec(v_h__1_1510_);
v_one_1515_ = lean_unsigned_to_nat(1u);
v_n_1516_ = lean_nat_sub(v_x_1508_, v_one_1515_);
v___x_1517_ = lean_apply_3(v_h__2_1511_, v_x_1507_, v_n_1516_, v_x_1509_);
return v___x_1517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter___boxed(lean_object* v_motive_1518_, lean_object* v_x_1519_, lean_object* v_x_1520_, lean_object* v_x_1521_, lean_object* v_h__1_1522_, lean_object* v_h__2_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l___private_Init_Data_String_Substring_0__Substring_Raw_nextn_match__1_splitter(v_motive_1518_, v_x_1519_, v_x_1520_, v_x_1521_, v_h__1_1522_, v_h__2_1523_);
lean_dec(v_x_1520_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Substring_bsize(lean_object* v_a_1525_){
_start:
{
lean_object* v_startPos_1526_; lean_object* v_stopPos_1527_; lean_object* v___x_1528_; 
v_startPos_1526_ = lean_ctor_get(v_a_1525_, 1);
v_stopPos_1527_ = lean_ctor_get(v_a_1525_, 2);
v___x_1528_ = lean_nat_sub(v_stopPos_1527_, v_startPos_1526_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Substring_bsize___boxed(lean_object* v_a_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Substring_bsize(v_a_1529_);
lean_dec_ref(v_a_1529_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Substring_toString(lean_object* v_a_1531_){
_start:
{
lean_object* v_str_1532_; lean_object* v_startPos_1533_; lean_object* v_stopPos_1534_; lean_object* v___x_1535_; 
v_str_1532_ = lean_ctor_get(v_a_1531_, 0);
v_startPos_1533_ = lean_ctor_get(v_a_1531_, 1);
v_stopPos_1534_ = lean_ctor_get(v_a_1531_, 2);
v___x_1535_ = lean_string_utf8_extract(v_str_1532_, v_startPos_1533_, v_stopPos_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Substring_toString___boxed(lean_object* v_a_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Substring_toString(v_a_1536_);
lean_dec_ref(v_a_1536_);
return v_res_1537_;
}
}
LEAN_EXPORT uint8_t l_Substring_isEmpty(lean_object* v_ss_1538_){
_start:
{
lean_object* v_startPos_1539_; lean_object* v_stopPos_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; uint8_t v___x_1543_; 
v_startPos_1539_ = lean_ctor_get(v_ss_1538_, 1);
v_stopPos_1540_ = lean_ctor_get(v_ss_1538_, 2);
v___x_1541_ = lean_nat_sub(v_stopPos_1540_, v_startPos_1539_);
v___x_1542_ = lean_unsigned_to_nat(0u);
v___x_1543_ = lean_nat_dec_eq(v___x_1541_, v___x_1542_);
lean_dec(v___x_1541_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Substring_isEmpty___boxed(lean_object* v_ss_1544_){
_start:
{
uint8_t v_res_1545_; lean_object* v_r_1546_; 
v_res_1545_ = l_Substring_isEmpty(v_ss_1544_);
lean_dec_ref(v_ss_1544_);
v_r_1546_ = lean_box(v_res_1545_);
return v_r_1546_;
}
}
LEAN_EXPORT lean_object* l_Substring_next(lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_str_1549_; lean_object* v_startPos_1550_; lean_object* v_stopPos_1551_; lean_object* v_absP_1552_; uint8_t v_decide_1553_; 
v_str_1549_ = lean_ctor_get(v_a_1547_, 0);
v_startPos_1550_ = lean_ctor_get(v_a_1547_, 1);
v_stopPos_1551_ = lean_ctor_get(v_a_1547_, 2);
v_absP_1552_ = lean_nat_add(v_startPos_1550_, v_a_1548_);
v_decide_1553_ = lean_nat_dec_eq(v_absP_1552_, v_stopPos_1551_);
if (v_decide_1553_ == 0)
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = lean_string_utf8_next(v_str_1549_, v_absP_1552_);
lean_dec(v_absP_1552_);
v___x_1555_ = lean_nat_sub(v___x_1554_, v_startPos_1550_);
lean_dec(v___x_1554_);
return v___x_1555_;
}
else
{
lean_dec(v_absP_1552_);
lean_inc(v_a_1548_);
return v_a_1548_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_next___boxed(lean_object* v_a_1556_, lean_object* v_a_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Substring_next(v_a_1556_, v_a_1557_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Substring_prev(lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v_str_1561_; lean_object* v_startPos_1562_; lean_object* v_absP_1563_; uint8_t v_decide_1564_; 
v_str_1561_ = lean_ctor_get(v_a_1559_, 0);
v_startPos_1562_ = lean_ctor_get(v_a_1559_, 1);
v_absP_1563_ = lean_nat_add(v_startPos_1562_, v_a_1560_);
v_decide_1564_ = lean_nat_dec_eq(v_absP_1563_, v_startPos_1562_);
if (v_decide_1564_ == 0)
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = lean_string_utf8_prev(v_str_1561_, v_absP_1563_);
lean_dec(v_absP_1563_);
v___x_1566_ = lean_nat_sub(v___x_1565_, v_startPos_1562_);
lean_dec(v___x_1565_);
return v___x_1566_;
}
else
{
lean_dec(v_absP_1563_);
lean_inc(v_a_1560_);
return v_a_1560_;
}
}
}
LEAN_EXPORT lean_object* l_Substring_prev___boxed(lean_object* v_a_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Substring_prev(v_a_1567_, v_a_1568_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
return v_res_1569_;
}
}
LEAN_EXPORT uint8_t l_Substring_atEnd(lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v_startPos_1572_; lean_object* v_stopPos_1573_; lean_object* v___x_1574_; uint8_t v_decide_1575_; 
v_startPos_1572_ = lean_ctor_get(v_a_1570_, 1);
v_stopPos_1573_ = lean_ctor_get(v_a_1570_, 2);
v___x_1574_ = lean_nat_add(v_startPos_1572_, v_a_1571_);
v_decide_1575_ = lean_nat_dec_eq(v___x_1574_, v_stopPos_1573_);
lean_dec(v___x_1574_);
return v_decide_1575_;
}
}
LEAN_EXPORT lean_object* l_Substring_atEnd___boxed(lean_object* v_a_1576_, lean_object* v_a_1577_){
_start:
{
uint8_t v_res_1578_; lean_object* v_r_1579_; 
v_res_1578_ = l_Substring_atEnd(v_a_1576_, v_a_1577_);
lean_dec(v_a_1577_);
lean_dec_ref(v_a_1576_);
v_r_1579_ = lean_box(v_res_1578_);
return v_r_1579_;
}
}
LEAN_EXPORT uint8_t l_Substring_beq(lean_object* v_ss1_1580_, lean_object* v_ss2_1581_){
_start:
{
uint8_t v___x_1582_; 
v___x_1582_ = l_Substring_Raw_beq(v_ss1_1580_, v_ss2_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Substring_beq___boxed(lean_object* v_ss1_1583_, lean_object* v_ss2_1584_){
_start:
{
uint8_t v_res_1585_; lean_object* v_r_1586_; 
v_res_1585_ = l_Substring_beq(v_ss1_1583_, v_ss2_1584_);
v_r_1586_ = lean_box(v_res_1585_);
return v_r_1586_;
}
}
lean_object* runtime_initialize_Init_Data_String_Slice_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_BasicAux(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Substring(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_String_Slice_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Substring(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Slice_Pattern(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* initialize_Init_Data_Option_BasicAux(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Substring(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Slice_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Substring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Substring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Substring(builtin);
}
#ifdef __cplusplus
}
#endif
