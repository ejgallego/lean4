// Lean compiler output
// Module: Lean.Data.EditDistance
// Imports: public import Init.Data.String.Basic import Init.Data.Vector.Basic import Init.Data.Nat.Order import Init.Data.Order.Lemmas import Init.Data.Range import Init.While import Init.Data.String.Length
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EditDistance_levenshtein(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EditDistance_levenshtein___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg(lean_object* v_range_1_, lean_object* v_b_2_, lean_object* v_i_3_){
_start:
{
lean_object* v_stop_4_; lean_object* v_step_5_; uint8_t v___x_6_; 
v_stop_4_ = lean_ctor_get(v_range_1_, 1);
v_step_5_ = lean_ctor_get(v_range_1_, 2);
v___x_6_ = lean_nat_dec_lt(v_i_3_, v_stop_4_);
if (v___x_6_ == 0)
{
lean_dec(v_i_3_);
return v_b_2_;
}
else
{
lean_object* v_v0_7_; lean_object* v___x_8_; 
lean_inc(v_i_3_);
v_v0_7_ = lean_array_fset(v_b_2_, v_i_3_, v_i_3_);
v___x_8_ = lean_nat_add(v_i_3_, v_step_5_);
lean_dec(v_i_3_);
v_b_2_ = v_v0_7_;
v_i_3_ = v___x_8_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg___boxed(lean_object* v_range_10_, lean_object* v_b_11_, lean_object* v_i_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg(v_range_10_, v_b_11_, v_i_12_);
lean_dec_ref(v_range_10_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg(lean_object* v_str2_14_, lean_object* v___x_15_, lean_object* v___x_16_, lean_object* v___x_17_, lean_object* v_str1_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_snd_20_; lean_object* v_fst_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_70_; 
v_snd_20_ = lean_ctor_get(v_a_19_, 1);
v_fst_21_ = lean_ctor_get(v_a_19_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v_a_19_);
if (v_isSharedCheck_70_ == 0)
{
v___x_23_ = v_a_19_;
v_isShared_24_ = v_isSharedCheck_70_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_snd_20_);
lean_inc(v_fst_21_);
lean_dec(v_a_19_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_70_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v_fst_25_; lean_object* v_snd_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_69_; 
v_fst_25_ = lean_ctor_get(v_snd_20_, 0);
v_snd_26_ = lean_ctor_get(v_snd_20_, 1);
v_isSharedCheck_69_ = !lean_is_exclusive(v_snd_20_);
if (v_isSharedCheck_69_ == 0)
{
v___x_28_ = v_snd_20_;
v_isShared_29_ = v_isSharedCheck_69_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_snd_26_);
lean_inc(v_fst_25_);
lean_dec(v_snd_20_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_69_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; uint8_t v_decide_31_; 
v___x_30_ = lean_string_utf8_byte_size(v_str2_14_);
v_decide_31_ = lean_nat_dec_eq(v_fst_25_, v___x_30_);
if (v_decide_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___y_36_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___y_55_; uint32_t v___x_57_; uint32_t v___x_58_; uint8_t v___x_59_; 
v___x_32_ = lean_unsigned_to_nat(1u);
v___x_33_ = lean_nat_mod(v___x_32_, v___x_15_);
v___x_34_ = l_Fin_add(v___x_15_, v_snd_26_, v___x_33_);
lean_dec(v___x_33_);
v___x_50_ = lean_array_fget_borrowed(v___x_16_, v___x_34_);
v___x_51_ = lean_nat_add(v___x_50_, v___x_32_);
v___x_52_ = lean_array_fget_borrowed(v_fst_21_, v_snd_26_);
v___x_53_ = lean_nat_add(v___x_52_, v___x_32_);
v___x_57_ = lean_string_utf8_get_fast(v_str1_18_, v___x_17_);
v___x_58_ = lean_string_utf8_get_fast(v_str2_14_, v_fst_25_);
v___x_59_ = lean_uint32_dec_eq(v___x_57_, v___x_58_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_array_fget_borrowed(v___x_16_, v_snd_26_);
lean_dec(v_snd_26_);
v___x_61_ = lean_nat_add(v___x_60_, v___x_32_);
v___y_55_ = v___x_61_;
goto v___jp_54_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = lean_array_fget_borrowed(v___x_16_, v_snd_26_);
lean_dec(v_snd_26_);
lean_inc(v___x_62_);
v___y_55_ = v___x_62_;
goto v___jp_54_;
}
v___jp_35_:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_37_ = lean_array_fset(v_fst_21_, v___x_34_, v___y_36_);
v___x_38_ = lean_string_utf8_next_fast(v_str2_14_, v_fst_25_);
lean_dec(v_fst_25_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_34_);
lean_ctor_set(v___x_28_, 0, v___x_38_);
v___x_40_ = v___x_28_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v___x_34_);
v___x_40_ = v_reuseFailAlloc_45_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_42_; 
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_40_);
lean_ctor_set(v___x_23_, 0, v___x_37_);
v___x_42_ = v___x_23_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_37_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_40_);
v___x_42_ = v_reuseFailAlloc_44_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
v_a_19_ = v___x_42_;
goto _start;
}
}
}
v___jp_46_:
{
uint8_t v___x_49_; 
v___x_49_ = lean_nat_dec_le(v___y_48_, v___y_47_);
if (v___x_49_ == 0)
{
lean_dec(v___y_48_);
v___y_36_ = v___y_47_;
goto v___jp_35_;
}
else
{
lean_dec(v___y_47_);
v___y_36_ = v___y_48_;
goto v___jp_35_;
}
}
v___jp_54_:
{
uint8_t v___x_56_; 
v___x_56_ = lean_nat_dec_le(v___x_51_, v___x_53_);
if (v___x_56_ == 0)
{
lean_dec(v___x_51_);
v___y_47_ = v___y_55_;
v___y_48_ = v___x_53_;
goto v___jp_46_;
}
else
{
lean_dec(v___x_53_);
v___y_47_ = v___y_55_;
v___y_48_ = v___x_51_;
goto v___jp_46_;
}
}
}
else
{
lean_object* v___x_64_; 
if (v_isShared_29_ == 0)
{
v___x_64_ = v___x_28_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_fst_25_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_snd_26_);
v___x_64_ = v_reuseFailAlloc_68_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
lean_object* v___x_66_; 
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_64_);
v___x_66_ = v___x_23_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_fst_21_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg___boxed(lean_object* v_str2_71_, lean_object* v___x_72_, lean_object* v___x_73_, lean_object* v___x_74_, lean_object* v_str1_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg(v_str2_71_, v___x_72_, v___x_73_, v___x_74_, v_str1_75_, v_a_76_);
lean_dec_ref(v_str1_75_);
lean_dec(v___x_74_);
lean_dec_ref(v___x_73_);
lean_dec(v___x_72_);
lean_dec_ref(v_str2_71_);
return v_res_77_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2(lean_object* v_cutoff_78_, lean_object* v_str1_79_, lean_object* v___x_80_, lean_object* v___x_81_, lean_object* v_as_82_, size_t v_i_83_, size_t v_stop_84_){
_start:
{
uint8_t v___y_86_; uint8_t v___y_91_; lean_object* v___x_97_; uint8_t v_decide_98_; 
v___x_97_ = lean_string_utf8_byte_size(v_str1_79_);
v_decide_98_ = lean_nat_dec_eq(v___x_80_, v___x_97_);
if (v_decide_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = 1;
v___y_91_ = v___x_99_;
goto v___jp_90_;
}
else
{
uint8_t v___x_100_; 
v___x_100_ = 0;
v___y_91_ = v___x_100_;
goto v___jp_90_;
}
v___jp_85_:
{
if (v___y_86_ == 0)
{
size_t v___x_87_; size_t v___x_88_; 
v___x_87_ = ((size_t)1ULL);
v___x_88_ = lean_usize_add(v_i_83_, v___x_87_);
v_i_83_ = v___x_88_;
goto _start;
}
else
{
return v___y_86_;
}
}
v___jp_90_:
{
uint8_t v___x_92_; 
v___x_92_ = lean_usize_dec_eq(v_i_83_, v_stop_84_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_array_uget_borrowed(v_as_82_, v_i_83_);
v___x_94_ = lean_nat_dec_lt(v_cutoff_78_, v___x_93_);
if (v___x_94_ == 0)
{
v___y_86_ = v___y_91_;
goto v___jp_85_;
}
else
{
uint8_t v___x_95_; 
v___x_95_ = lean_nat_dec_lt(v_cutoff_78_, v___x_81_);
v___y_86_ = v___x_95_;
goto v___jp_85_;
}
}
else
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2___boxed(lean_object* v_cutoff_101_, lean_object* v_str1_102_, lean_object* v___x_103_, lean_object* v___x_104_, lean_object* v_as_105_, lean_object* v_i_106_, lean_object* v_stop_107_){
_start:
{
size_t v_i_boxed_108_; size_t v_stop_boxed_109_; uint8_t v_res_110_; lean_object* v_r_111_; 
v_i_boxed_108_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_stop_boxed_109_ = lean_unbox_usize(v_stop_107_);
lean_dec(v_stop_107_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2(v_cutoff_101_, v_str1_102_, v___x_103_, v___x_104_, v_as_105_, v_i_boxed_108_, v_stop_boxed_109_);
lean_dec_ref(v_as_105_);
lean_dec(v___x_104_);
lean_dec(v___x_103_);
lean_dec_ref(v_str1_102_);
lean_dec(v_cutoff_101_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg(lean_object* v_str1_116_, lean_object* v___x_117_, lean_object* v_str2_118_, lean_object* v_cutoff_119_, lean_object* v___x_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_snd_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_201_; 
v_snd_122_ = lean_ctor_get(v_a_121_, 1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_a_121_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v_a_121_, 0);
lean_dec(v_unused_202_);
v___x_124_ = v_a_121_;
v_isShared_125_ = v_isSharedCheck_201_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_snd_122_);
lean_dec(v_a_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_201_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v_snd_126_; lean_object* v_snd_127_; lean_object* v_fst_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_199_; 
v_snd_126_ = lean_ctor_get(v_snd_122_, 1);
lean_inc(v_snd_126_);
v_snd_127_ = lean_ctor_get(v_snd_126_, 1);
lean_inc(v_snd_127_);
v_fst_128_ = lean_ctor_get(v_snd_122_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v_snd_122_);
if (v_isSharedCheck_199_ == 0)
{
lean_object* v_unused_200_; 
v_unused_200_ = lean_ctor_get(v_snd_122_, 1);
lean_dec(v_unused_200_);
v___x_130_ = v_snd_122_;
v_isShared_131_ = v_isSharedCheck_199_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_fst_128_);
lean_dec(v_snd_122_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_199_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v_fst_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_197_; 
v_fst_132_ = lean_ctor_get(v_snd_126_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v_snd_126_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; 
v_unused_198_ = lean_ctor_get(v_snd_126_, 1);
lean_dec(v_unused_198_);
v___x_134_ = v_snd_126_;
v_isShared_135_ = v_isSharedCheck_197_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_fst_132_);
lean_dec(v_snd_126_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_197_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_fst_136_; lean_object* v_snd_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_196_; 
v_fst_136_ = lean_ctor_get(v_snd_127_, 0);
v_snd_137_ = lean_ctor_get(v_snd_127_, 1);
v_isSharedCheck_196_ = !lean_is_exclusive(v_snd_127_);
if (v_isSharedCheck_196_ == 0)
{
v___x_139_ = v_snd_127_;
v_isShared_140_ = v_isSharedCheck_196_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_snd_137_);
lean_inc(v_fst_136_);
lean_dec(v_snd_127_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_196_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v_decide_143_; 
v___x_141_ = lean_box(0);
v___x_142_ = lean_string_utf8_byte_size(v_str1_116_);
v_decide_143_ = lean_nat_dec_eq(v_fst_136_, v___x_142_);
if (v_decide_143_ == 0)
{
lean_object* v___x_144_; lean_object* v_i_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v_i_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_nat_add(v_snd_137_, v___x_144_);
lean_dec(v_snd_137_);
lean_inc(v___x_146_);
v___x_147_ = lean_array_fset(v_fst_132_, v_i_145_, v___x_146_);
v___x_148_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__0));
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v___x_148_);
lean_ctor_set(v___x_139_, 0, v___x_147_);
v___x_150_ = v___x_139_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_183_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_151_; lean_object* v_fst_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_181_; 
v___x_151_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg(v_str2_118_, v___x_117_, v_fst_128_, v_fst_136_, v_str1_116_, v___x_150_);
v_fst_152_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v___x_151_, 1);
lean_dec(v_unused_182_);
v___x_154_ = v___x_151_;
v_isShared_155_ = v_isSharedCheck_181_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_fst_152_);
lean_dec(v___x_151_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_181_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_156_ = lean_string_utf8_next_fast(v_str1_116_, v_fst_136_);
v___x_171_ = lean_array_get_size(v_fst_152_);
v___x_172_ = lean_nat_dec_lt(v_i_145_, v___x_171_);
if (v___x_172_ == 0)
{
lean_dec(v_fst_136_);
goto v___jp_157_;
}
else
{
size_t v___x_173_; size_t v___x_174_; uint8_t v___x_175_; 
v___x_173_ = ((size_t)0ULL);
v___x_174_ = lean_usize_of_nat(v___x_171_);
v___x_175_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2(v_cutoff_119_, v_str1_116_, v_fst_136_, v___x_120_, v_fst_152_, v___x_173_, v___x_174_);
lean_dec(v_fst_136_);
if (v___x_175_ == 0)
{
goto v___jp_157_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_del_object(v___x_154_);
lean_del_object(v___x_134_);
lean_del_object(v___x_130_);
lean_dec(v_fst_128_);
lean_del_object(v___x_124_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_156_);
lean_ctor_set(v___x_176_, 1, v___x_146_);
lean_inc(v_fst_152_);
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v_fst_152_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v_fst_152_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_141_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v_a_121_ = v___x_179_;
goto _start;
}
}
v___jp_157_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__1));
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 1, v___x_146_);
lean_ctor_set(v___x_154_, 0, v___x_156_);
v___x_160_ = v___x_154_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_156_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_146_);
v___x_160_ = v_reuseFailAlloc_170_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_162_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___x_160_);
lean_ctor_set(v___x_134_, 0, v_fst_152_);
v___x_162_ = v___x_134_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_fst_152_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_169_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_164_; 
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_162_);
v___x_164_ = v___x_130_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_fst_128_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_162_);
v___x_164_ = v_reuseFailAlloc_168_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_166_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_164_);
lean_ctor_set(v___x_124_, 0, v___x_158_);
v___x_166_ = v___x_124_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
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
lean_object* v___x_185_; 
if (v_isShared_140_ == 0)
{
v___x_185_ = v___x_139_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_fst_136_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_snd_137_);
v___x_185_ = v_reuseFailAlloc_195_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_187_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___x_185_);
v___x_187_ = v___x_134_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_fst_132_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_194_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_187_);
v___x_189_ = v___x_130_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_fst_128_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v___x_187_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_191_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_189_);
lean_ctor_set(v___x_124_, 0, v___x_141_);
v___x_191_ = v___x_124_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
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
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___boxed(lean_object* v_str1_203_, lean_object* v___x_204_, lean_object* v_str2_205_, lean_object* v_cutoff_206_, lean_object* v___x_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg(v_str1_203_, v___x_204_, v_str2_205_, v_cutoff_206_, v___x_207_, v_a_208_);
lean_dec(v___x_207_);
lean_dec(v_cutoff_206_);
lean_dec_ref(v_str2_205_);
lean_dec(v___x_204_);
lean_dec_ref(v_str1_203_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg(lean_object* v_str2_210_, lean_object* v___x_211_, lean_object* v_str1_212_, lean_object* v_cutoff_213_, lean_object* v___x_214_, lean_object* v_a_215_){
_start:
{
lean_object* v_snd_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_295_; 
v_snd_216_ = lean_ctor_get(v_a_215_, 1);
v_isSharedCheck_295_ = !lean_is_exclusive(v_a_215_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v_a_215_, 0);
lean_dec(v_unused_296_);
v___x_218_ = v_a_215_;
v_isShared_219_ = v_isSharedCheck_295_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_snd_216_);
lean_dec(v_a_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_295_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v_snd_220_; lean_object* v_snd_221_; lean_object* v_fst_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_293_; 
v_snd_220_ = lean_ctor_get(v_snd_216_, 1);
lean_inc(v_snd_220_);
v_snd_221_ = lean_ctor_get(v_snd_220_, 1);
lean_inc(v_snd_221_);
v_fst_222_ = lean_ctor_get(v_snd_216_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v_snd_216_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; 
v_unused_294_ = lean_ctor_get(v_snd_216_, 1);
lean_dec(v_unused_294_);
v___x_224_ = v_snd_216_;
v_isShared_225_ = v_isSharedCheck_293_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_fst_222_);
lean_dec(v_snd_216_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_293_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v_fst_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_291_; 
v_fst_226_ = lean_ctor_get(v_snd_220_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v_snd_220_);
if (v_isSharedCheck_291_ == 0)
{
lean_object* v_unused_292_; 
v_unused_292_ = lean_ctor_get(v_snd_220_, 1);
lean_dec(v_unused_292_);
v___x_228_ = v_snd_220_;
v_isShared_229_ = v_isSharedCheck_291_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_fst_226_);
lean_dec(v_snd_220_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_291_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v_fst_230_; lean_object* v_snd_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_290_; 
v_fst_230_ = lean_ctor_get(v_snd_221_, 0);
v_snd_231_ = lean_ctor_get(v_snd_221_, 1);
v_isSharedCheck_290_ = !lean_is_exclusive(v_snd_221_);
if (v_isSharedCheck_290_ == 0)
{
v___x_233_ = v_snd_221_;
v_isShared_234_ = v_isSharedCheck_290_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_snd_231_);
lean_inc(v_fst_230_);
lean_dec(v_snd_221_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_290_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v_decide_237_; 
v___x_235_ = lean_box(0);
v___x_236_ = lean_string_utf8_byte_size(v_str1_212_);
v_decide_237_ = lean_nat_dec_eq(v_fst_230_, v___x_236_);
if (v_decide_237_ == 0)
{
lean_object* v___x_238_; lean_object* v_i_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_238_ = lean_unsigned_to_nat(1u);
v_i_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_nat_add(v_snd_231_, v___x_238_);
lean_dec(v_snd_231_);
lean_inc(v___x_240_);
v___x_241_ = lean_array_fset(v_fst_226_, v_i_239_, v___x_240_);
v___x_242_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__0));
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v___x_242_);
lean_ctor_set(v___x_233_, 0, v___x_241_);
v___x_244_ = v___x_233_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_242_);
v___x_244_ = v_reuseFailAlloc_277_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_245_; lean_object* v_fst_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_275_; 
v___x_245_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg(v_str2_210_, v___x_211_, v_fst_222_, v_fst_230_, v_str1_212_, v___x_244_);
v_fst_246_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_275_ == 0)
{
lean_object* v_unused_276_; 
v_unused_276_ = lean_ctor_get(v___x_245_, 1);
lean_dec(v_unused_276_);
v___x_248_ = v___x_245_;
v_isShared_249_ = v_isSharedCheck_275_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_fst_246_);
lean_dec(v___x_245_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_275_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_250_; lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_250_ = lean_string_utf8_next_fast(v_str1_212_, v_fst_230_);
v___x_265_ = lean_array_get_size(v_fst_246_);
v___x_266_ = lean_nat_dec_lt(v_i_239_, v___x_265_);
if (v___x_266_ == 0)
{
lean_dec(v_fst_230_);
goto v___jp_251_;
}
else
{
size_t v___x_267_; size_t v___x_268_; uint8_t v___x_269_; 
v___x_267_ = ((size_t)0ULL);
v___x_268_ = lean_usize_of_nat(v___x_265_);
v___x_269_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_EditDistance_levenshtein_spec__2(v_cutoff_213_, v_str1_212_, v_fst_230_, v___x_214_, v_fst_246_, v___x_267_, v___x_268_);
lean_dec(v_fst_230_);
if (v___x_269_ == 0)
{
goto v___jp_251_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
lean_del_object(v___x_248_);
lean_del_object(v___x_228_);
lean_del_object(v___x_224_);
lean_dec(v_fst_222_);
lean_del_object(v___x_218_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_250_);
lean_ctor_set(v___x_270_, 1, v___x_240_);
lean_inc(v_fst_246_);
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v_fst_246_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v_fst_246_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_235_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg(v_str1_212_, v___x_211_, v_str2_210_, v_cutoff_213_, v___x_214_, v___x_273_);
return v___x_274_;
}
}
v___jp_251_:
{
lean_object* v___x_252_; lean_object* v___x_254_; 
v___x_252_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__1));
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 1, v___x_240_);
lean_ctor_set(v___x_248_, 0, v___x_250_);
v___x_254_ = v___x_248_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_250_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___x_240_);
v___x_254_ = v_reuseFailAlloc_264_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v___x_256_; 
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 1, v___x_254_);
lean_ctor_set(v___x_228_, 0, v_fst_246_);
v___x_256_ = v___x_228_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_fst_246_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___x_254_);
v___x_256_ = v_reuseFailAlloc_263_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_258_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_256_);
v___x_258_ = v___x_224_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_fst_222_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_256_);
v___x_258_ = v_reuseFailAlloc_262_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_260_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___x_258_);
lean_ctor_set(v___x_218_, 0, v___x_252_);
v___x_260_ = v___x_218_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_258_);
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
}
}
}
}
else
{
lean_object* v___x_279_; 
if (v_isShared_234_ == 0)
{
v___x_279_ = v___x_233_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_fst_230_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_snd_231_);
v___x_279_ = v_reuseFailAlloc_289_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_281_; 
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 1, v___x_279_);
v___x_281_ = v___x_228_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_fst_226_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v___x_279_);
v___x_281_ = v_reuseFailAlloc_288_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_283_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_281_);
v___x_283_ = v___x_224_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_fst_222_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_281_);
v___x_283_ = v_reuseFailAlloc_287_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___x_283_);
lean_ctor_set(v___x_218_, 0, v___x_235_);
v___x_285_ = v___x_218_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_283_);
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg___boxed(lean_object* v_str2_297_, lean_object* v___x_298_, lean_object* v_str1_299_, lean_object* v_cutoff_300_, lean_object* v___x_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg(v_str2_297_, v___x_298_, v_str1_299_, v_cutoff_300_, v___x_301_, v_a_302_);
lean_dec(v___x_301_);
lean_dec(v_cutoff_300_);
lean_dec_ref(v_str1_299_);
lean_dec(v___x_298_);
lean_dec_ref(v_str2_297_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_EditDistance_levenshtein(lean_object* v_str1_304_, lean_object* v_str2_305_, lean_object* v_cutoff_306_){
_start:
{
lean_object* v_len1_307_; lean_object* v_len2_308_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_334_; uint8_t v___x_336_; 
v_len1_307_ = lean_string_length(v_str1_304_);
v_len2_308_ = lean_string_length(v_str2_305_);
v___x_336_ = lean_nat_dec_le(v_len1_307_, v_len2_308_);
if (v___x_336_ == 0)
{
v___y_334_ = v_len1_307_;
goto v___jp_333_;
}
else
{
v___y_334_ = v_len2_308_;
goto v___jp_333_;
}
v___jp_309_:
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = lean_nat_sub(v___y_310_, v___y_311_);
lean_dec(v___y_311_);
lean_dec(v___y_310_);
v___x_313_ = lean_nat_dec_lt(v_cutoff_306_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v_i_316_; lean_object* v_v1_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v_fst_326_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_len2_308_, v___x_314_);
v_i_316_ = lean_unsigned_to_nat(0u);
lean_inc_n(v___x_315_, 2);
v_v1_317_ = lean_mk_array(v___x_315_, v_i_316_);
v___x_318_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_318_, 0, v_i_316_);
lean_ctor_set(v___x_318_, 1, v___x_315_);
lean_ctor_set(v___x_318_, 2, v___x_314_);
lean_inc_ref(v_v1_317_);
v___x_319_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg(v___x_318_, v_v1_317_, v_i_316_);
lean_dec_ref_known(v___x_318_, 3);
v___x_320_ = lean_box(0);
v___x_321_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg___closed__0));
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v_v1_317_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_319_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_320_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg(v_str2_305_, v___x_315_, v_str1_304_, v_cutoff_306_, v___x_312_, v___x_324_);
lean_dec(v___x_312_);
lean_dec(v___x_315_);
v_fst_326_ = lean_ctor_get(v___x_325_, 0);
if (lean_obj_tag(v_fst_326_) == 0)
{
lean_object* v_snd_327_; lean_object* v_fst_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_snd_327_ = lean_ctor_get(v___x_325_, 1);
lean_inc(v_snd_327_);
lean_dec_ref(v___x_325_);
v_fst_328_ = lean_ctor_get(v_snd_327_, 0);
lean_inc(v_fst_328_);
lean_dec(v_snd_327_);
v___x_329_ = lean_array_fget(v_fst_328_, v_len2_308_);
lean_dec(v_fst_328_);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
else
{
lean_object* v_val_331_; 
lean_inc_ref(v_fst_326_);
lean_dec_ref(v___x_325_);
v_val_331_ = lean_ctor_get(v_fst_326_, 0);
lean_inc(v_val_331_);
lean_dec_ref_known(v_fst_326_, 1);
return v_val_331_;
}
}
else
{
lean_object* v___x_332_; 
lean_dec(v___x_312_);
v___x_332_ = lean_box(0);
return v___x_332_;
}
}
v___jp_333_:
{
uint8_t v___x_335_; 
v___x_335_ = lean_nat_dec_le(v_len1_307_, v_len2_308_);
if (v___x_335_ == 0)
{
v___y_310_ = v___y_334_;
v___y_311_ = v_len2_308_;
goto v___jp_309_;
}
else
{
v___y_310_ = v___y_334_;
v___y_311_ = v_len1_307_;
goto v___jp_309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EditDistance_levenshtein___boxed(lean_object* v_str1_337_, lean_object* v_str2_338_, lean_object* v_cutoff_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_EditDistance_levenshtein(v_str1_337_, v_str2_338_, v_cutoff_339_);
lean_dec(v_cutoff_339_);
lean_dec_ref(v_str2_338_);
lean_dec_ref(v_str1_337_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0(lean_object* v___x_341_, lean_object* v_range_342_, lean_object* v_b_343_, lean_object* v_i_344_, lean_object* v_hs_345_, lean_object* v_hl_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___redArg(v_range_342_, v_b_343_, v_i_344_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0___boxed(lean_object* v___x_348_, lean_object* v_range_349_, lean_object* v_b_350_, lean_object* v_i_351_, lean_object* v_hs_352_, lean_object* v_hl_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_EditDistance_levenshtein_spec__0(v___x_348_, v_range_349_, v_b_350_, v_i_351_, v_hs_352_, v_hl_353_);
lean_dec_ref(v_range_349_);
lean_dec(v___x_348_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1(lean_object* v_str2_355_, lean_object* v___x_356_, lean_object* v___x_357_, lean_object* v___x_358_, lean_object* v_str1_359_, lean_object* v_inst_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___redArg(v_str2_355_, v___x_356_, v___x_357_, v___x_358_, v_str1_359_, v_a_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1___boxed(lean_object* v_str2_363_, lean_object* v___x_364_, lean_object* v___x_365_, lean_object* v___x_366_, lean_object* v_str1_367_, lean_object* v_inst_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__1(v_str2_363_, v___x_364_, v___x_365_, v___x_366_, v_str1_367_, v_inst_368_, v_a_369_);
lean_dec_ref(v_str1_367_);
lean_dec(v___x_366_);
lean_dec_ref(v___x_365_);
lean_dec(v___x_364_);
lean_dec_ref(v_str2_363_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3(lean_object* v_str2_371_, lean_object* v___x_372_, lean_object* v_str1_373_, lean_object* v_cutoff_374_, lean_object* v___x_375_, lean_object* v_inst_376_, lean_object* v_a_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___redArg(v_str2_371_, v___x_372_, v_str1_373_, v_cutoff_374_, v___x_375_, v_a_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3___boxed(lean_object* v_str2_379_, lean_object* v___x_380_, lean_object* v_str1_381_, lean_object* v_cutoff_382_, lean_object* v___x_383_, lean_object* v_inst_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l___private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3(v_str2_379_, v___x_380_, v_str1_381_, v_cutoff_382_, v___x_383_, v_inst_384_, v_a_385_);
lean_dec(v___x_383_);
lean_dec(v_cutoff_382_);
lean_dec_ref(v_str1_381_);
lean_dec(v___x_380_);
lean_dec_ref(v_str2_379_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3(lean_object* v_str1_387_, lean_object* v___x_388_, lean_object* v_str2_389_, lean_object* v_cutoff_390_, lean_object* v___x_391_, lean_object* v_inst_392_, lean_object* v_a_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___redArg(v_str1_387_, v___x_388_, v_str2_389_, v_cutoff_390_, v___x_391_, v_a_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3___boxed(lean_object* v_str1_395_, lean_object* v___x_396_, lean_object* v_str2_397_, lean_object* v_cutoff_398_, lean_object* v___x_399_, lean_object* v_inst_400_, lean_object* v_a_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Lean_EditDistance_levenshtein_spec__3_spec__3(v_str1_395_, v___x_396_, v_str2_397_, v_cutoff_398_, v___x_399_, v_inst_400_, v_a_401_);
lean_dec(v___x_399_);
lean_dec(v_cutoff_398_);
lean_dec_ref(v_str2_397_);
lean_dec(v___x_396_);
lean_dec_ref(v_str1_395_);
return v_res_402_;
}
}
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_EditDistance(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_EditDistance(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Range(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_EditDistance(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_EditDistance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_EditDistance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_EditDistance(builtin);
}
#ifdef __cplusplus
}
#endif
