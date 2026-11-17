// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.DefaultAlt
// Imports: public import Lean.Compiler.LCNF.Simp.SimpM import Lean.Compiler.LCNF.Simp.Used
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_Simp_isUsed___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_Alt_getParams(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_alphaEqv(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v___y_4_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v_fvarId_8_; lean_object* v___x_9_; 
v___x_7_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
v_fvarId_8_ = lean_ctor_get(v___x_7_, 0);
v___x_9_ = l_Lean_Compiler_LCNF_Simp_isUsed___redArg(v_fvarId_8_, v___y_4_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; uint8_t v___x_11_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v___x_11_ = lean_unbox(v_a_10_);
if (v___x_11_ == 0)
{
size_t v___x_12_; size_t v___x_13_; 
lean_dec_ref_known(v___x_9_, 1);
v___x_12_ = ((size_t)1ULL);
v___x_13_ = lean_usize_add(v_i_2_, v___x_12_);
v_i_2_ = v___x_13_;
goto _start;
}
else
{
return v___x_9_;
}
}
else
{
return v___x_9_;
}
}
else
{
uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = 0;
v___x_16_ = lean_box(v___x_15_);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg___boxed(lean_object* v_as_18_, lean_object* v_i_19_, lean_object* v_stop_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
size_t v_i_boxed_23_; size_t v_stop_boxed_24_; lean_object* v_res_25_; 
v_i_boxed_23_ = lean_unbox_usize(v_i_19_);
lean_dec(v_i_19_);
v_stop_boxed_24_ = lean_unbox_usize(v_stop_20_);
lean_dec(v_stop_20_);
v_res_25_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg(v_as_18_, v_i_boxed_23_, v_stop_boxed_24_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v_as_18_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams(lean_object* v_alt_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_39_ = l_Lean_Compiler_LCNF_Alt_getParams(v_alt_26_);
v___x_40_ = lean_unsigned_to_nat(0u);
v___x_41_ = lean_array_get_size(v___x_39_);
v___x_42_ = lean_nat_dec_lt(v___x_40_, v___x_41_);
if (v___x_42_ == 0)
{
lean_dec_ref(v___x_39_);
goto v___jp_35_;
}
else
{
if (v___x_42_ == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec_ref(v___x_39_);
v___x_43_ = lean_box(v___x_42_);
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
else
{
size_t v___x_45_; size_t v___x_46_; lean_object* v___x_47_; 
v___x_45_ = ((size_t)0ULL);
v___x_46_ = lean_usize_of_nat(v___x_41_);
v___x_47_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg(v___x_39_, v___x_45_, v___x_46_, v_a_28_);
lean_dec_ref(v___x_39_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_58_; 
v_a_48_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_58_ == 0)
{
v___x_50_ = v___x_47_;
v_isShared_51_ = v_isSharedCheck_58_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_47_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_58_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
uint8_t v___x_52_; 
v___x_52_ = lean_unbox(v_a_48_);
lean_dec(v_a_48_);
if (v___x_52_ == 0)
{
lean_del_object(v___x_50_);
goto v___jp_35_;
}
else
{
uint8_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_53_ = 0;
v___x_54_ = lean_box(v___x_53_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 0, v___x_54_);
v___x_56_ = v___x_50_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_54_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
}
else
{
return v___x_47_;
}
}
}
v___jp_35_:
{
uint8_t v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = 1;
v___x_37_ = lean_box(v___x_36_);
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams___boxed(lean_object* v_alt_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams(v_alt_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec_ref(v_alt_59_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0(lean_object* v_as_69_, size_t v_i_70_, size_t v_stop_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___redArg(v_as_69_, v_i_70_, v_stop_71_, v___y_73_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0___boxed(lean_object* v_as_81_, lean_object* v_i_82_, lean_object* v_stop_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
size_t v_i_boxed_92_; size_t v_stop_boxed_93_; lean_object* v_res_94_; 
v_i_boxed_92_ = lean_unbox_usize(v_i_82_);
lean_dec(v_i_82_);
v_stop_boxed_93_ = lean_unbox_usize(v_stop_83_);
lean_dec(v_stop_83_);
v_res_94_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams_spec__0(v_as_81_, v_i_boxed_92_, v_stop_boxed_93_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec_ref(v_as_81_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__1(lean_object* v_as_95_, size_t v_sz_96_, size_t v_i_97_, lean_object* v_b_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = lean_usize_dec_lt(v_i_97_, v_sz_96_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v_b_98_);
return v___x_108_;
}
else
{
lean_object* v_snd_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_146_; 
v_snd_109_ = lean_ctor_get(v_b_98_, 1);
v_isSharedCheck_146_ = !lean_is_exclusive(v_b_98_);
if (v_isSharedCheck_146_ == 0)
{
lean_object* v_unused_147_; 
v_unused_147_ = lean_ctor_get(v_b_98_, 0);
lean_dec(v_unused_147_);
v___x_111_ = v_b_98_;
v_isShared_112_ = v_isSharedCheck_146_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_snd_109_);
lean_dec(v_b_98_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_146_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v_a_114_; lean_object* v___x_115_; 
v___x_113_ = lean_box(0);
v_a_114_ = lean_array_uget_borrowed(v_as_95_, v_i_97_);
v___x_115_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams(v_a_114_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_137_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_137_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_137_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_137_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
uint8_t v___x_120_; 
v___x_120_ = lean_unbox(v_a_116_);
lean_dec(v_a_116_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_124_; 
lean_del_object(v___x_118_);
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_add(v_snd_109_, v___x_121_);
lean_dec(v_snd_109_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v___x_122_);
lean_ctor_set(v___x_111_, 0, v___x_113_);
v___x_124_ = v___x_111_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v___x_122_);
v___x_124_ = v_reuseFailAlloc_128_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
size_t v___x_125_; size_t v___x_126_; 
v___x_125_ = ((size_t)1ULL);
v___x_126_ = lean_usize_add(v_i_97_, v___x_125_);
v_i_97_ = v___x_126_;
v_b_98_ = v___x_124_;
goto _start;
}
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
lean_inc(v_snd_109_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v_snd_109_);
v___x_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_130_);
v___x_132_ = v___x_111_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_136_, 1, v_snd_109_);
v___x_132_ = v_reuseFailAlloc_136_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_134_; 
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v___x_132_);
v___x_134_ = v___x_118_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_del_object(v___x_111_);
lean_dec(v_snd_109_);
v_a_138_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_115_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_115_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__1___boxed(lean_object* v_as_148_, lean_object* v_sz_149_, lean_object* v_i_150_, lean_object* v_b_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
size_t v_sz_boxed_160_; size_t v_i_boxed_161_; lean_object* v_res_162_; 
v_sz_boxed_160_ = lean_unbox_usize(v_sz_149_);
lean_dec(v_sz_149_);
v_i_boxed_161_ = lean_unbox_usize(v_i_150_);
lean_dec(v_i_150_);
v_res_162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__1(v_as_148_, v_sz_boxed_160_, v_i_boxed_161_, v_b_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
lean_dec_ref(v_as_148_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__0(lean_object* v_as_163_, lean_object* v_j_164_){
_start:
{
lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = lean_array_get_size(v_as_163_);
v___x_166_ = lean_nat_dec_lt(v_j_164_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
lean_dec(v_j_164_);
v___x_167_ = lean_box(0);
return v___x_167_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_array_fget(v_as_163_, v_j_164_);
if (lean_obj_tag(v___x_168_) == 2)
{
lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_175_ == 0)
{
lean_object* v_unused_176_; 
v_unused_176_ = lean_ctor_get(v___x_168_, 0);
lean_dec(v_unused_176_);
v___x_170_ = v___x_168_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_dec(v___x_168_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set_tag(v___x_170_, 1);
lean_ctor_set(v___x_170_, 0, v_j_164_);
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_j_164_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec(v___x_168_);
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = lean_nat_add(v_j_164_, v___x_177_);
lean_dec(v_j_164_);
v_j_164_ = v___x_178_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__0___boxed(lean_object* v_as_180_, lean_object* v_j_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__0(v_as_180_, v_j_181_);
lean_dec_ref(v_as_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx(lean_object* v_alts_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__0(v_alts_186_, v___x_195_);
if (lean_obj_tag(v___x_196_) == 1)
{
lean_object* v___x_197_; 
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
else
{
lean_object* v___x_198_; lean_object* v___x_199_; size_t v_sz_200_; size_t v___x_201_; lean_object* v___x_202_; 
lean_dec(v___x_196_);
v___x_198_ = lean_box(0);
v___x_199_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx___closed__0));
v_sz_200_ = lean_array_size(v_alts_186_);
v___x_201_ = ((size_t)0ULL);
v___x_202_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx_spec__1(v_alts_186_, v_sz_200_, v___x_201_, v___x_199_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_215_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_215_ == 0)
{
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_215_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_215_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v_fst_207_; 
v_fst_207_ = lean_ctor_get(v_a_203_, 0);
lean_inc(v_fst_207_);
lean_dec(v_a_203_);
if (lean_obj_tag(v_fst_207_) == 0)
{
lean_object* v___x_209_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_198_);
v___x_209_ = v___x_205_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_198_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
else
{
lean_object* v_val_211_; lean_object* v___x_213_; 
v_val_211_ = lean_ctor_get(v_fst_207_, 0);
lean_inc(v_val_211_);
lean_dec_ref_known(v_fst_207_, 1);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v_val_211_);
v___x_213_ = v___x_205_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_val_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
v_a_216_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_202_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_202_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx___boxed(lean_object* v_alts_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx(v_alts_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v_a_230_, v_a_231_);
lean_dec(v_a_231_);
lean_dec_ref(v_a_230_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec_ref(v_alts_224_);
return v_res_233_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg(lean_object* v_upperBound_235_, lean_object* v_val_236_, lean_object* v_alts_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_a_242_; uint8_t v___x_246_; 
v___x_246_ = lean_nat_dec_lt(v_a_238_, v_upperBound_235_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; 
lean_dec(v_a_238_);
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v_b_239_);
return v___x_247_;
}
else
{
uint8_t v___x_248_; 
v___x_248_ = lean_nat_dec_eq(v_a_238_, v_val_236_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0);
v___x_250_ = lean_array_get_borrowed(v___x_249_, v_alts_237_, v_a_238_);
lean_inc(v___x_250_);
v___x_251_ = lean_array_push(v_b_239_, v___x_250_);
v_a_242_ = v___x_251_;
goto v___jp_241_;
}
else
{
v_a_242_ = v_b_239_;
goto v___jp_241_;
}
}
v___jp_241_:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_nat_add(v_a_238_, v___x_243_);
lean_dec(v_a_238_);
v_a_238_ = v___x_244_;
v_b_239_ = v_a_242_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___boxed(lean_object* v_upperBound_252_, lean_object* v_val_253_, lean_object* v_alts_254_, lean_object* v_a_255_, lean_object* v_b_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg(v_upperBound_252_, v_val_253_, v_alts_254_, v_a_255_, v_b_256_);
lean_dec_ref(v_alts_254_);
lean_dec(v_val_253_);
lean_dec(v_upperBound_252_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt(lean_object* v_alts_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootIdx(v_alts_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_310_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_310_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_310_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_310_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
if (lean_obj_tag(v_a_269_) == 1)
{
lean_object* v_val_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_305_; 
lean_del_object(v___x_271_);
v_val_273_ = lean_ctor_get(v_a_269_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v_a_269_);
if (v_isSharedCheck_305_ == 0)
{
v___x_275_ = v_a_269_;
v_isShared_276_ = v_isSharedCheck_305_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_val_273_);
lean_dec(v_a_269_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_305_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_277_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg___closed__0);
v___x_278_ = lean_array_get_size(v_alts_259_);
v___x_279_ = lean_unsigned_to_nat(1u);
v___x_280_ = lean_nat_sub(v___x_278_, v___x_279_);
v___x_281_ = lean_unsigned_to_nat(0u);
v___x_282_ = lean_array_get_borrowed(v___x_277_, v_alts_259_, v_val_273_);
v___x_283_ = lean_mk_empty_array_with_capacity(v___x_280_);
lean_dec(v___x_280_);
v___x_284_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg(v___x_278_, v_val_273_, v_alts_259_, v___x_281_, v___x_283_);
lean_dec(v_val_273_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_296_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_296_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_296_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_296_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_291_; 
lean_inc(v___x_282_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_282_);
lean_ctor_set(v___x_289_, 1, v_a_285_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_289_);
v___x_291_ = v___x_275_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_295_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_293_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_291_);
v___x_293_ = v___x_287_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_del_object(v___x_275_);
v_a_297_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_284_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_284_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
else
{
lean_object* v___x_306_; lean_object* v___x_308_; 
lean_dec(v_a_269_);
v___x_306_ = lean_box(0);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_306_);
v___x_308_ = v___x_271_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
v_a_311_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_268_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_268_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt___boxed(lean_object* v_alts_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt(v_alts_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec_ref(v_a_322_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
lean_dec_ref(v_alts_319_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0(lean_object* v_upperBound_329_, lean_object* v_val_330_, lean_object* v_alts_331_, lean_object* v_inst_332_, lean_object* v_R_333_, lean_object* v_a_334_, lean_object* v_b_335_, lean_object* v_c_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___redArg(v_upperBound_329_, v_val_330_, v_alts_331_, v_a_334_, v_b_335_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0___boxed(lean_object* v_upperBound_346_, lean_object* v_val_347_, lean_object* v_alts_348_, lean_object* v_inst_349_, lean_object* v_R_350_, lean_object* v_a_351_, lean_object* v_b_352_, lean_object* v_c_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt_spec__0(v_upperBound_346_, v_val_347_, v_alts_348_, v_inst_349_, v_R_350_, v_a_351_, v_b_352_, v_c_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec_ref(v_alts_348_);
lean_dec(v_val_347_);
lean_dec(v_upperBound_346_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg(lean_object* v_as_363_, size_t v_i_364_, size_t v_stop_365_, lean_object* v_b_366_, lean_object* v___y_367_){
_start:
{
uint8_t v___x_369_; 
v___x_369_ = lean_usize_dec_eq(v_i_364_, v_stop_365_);
if (v___x_369_ == 0)
{
uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_370_ = 0;
v___x_371_ = lean_array_uget_borrowed(v_as_363_, v_i_364_);
v___x_372_ = l_Lean_Compiler_LCNF_Alt_getParams(v___x_371_);
v___x_373_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_370_, v___x_372_, v___y_367_);
lean_dec_ref(v___x_372_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v___y_375_; 
lean_dec_ref_known(v___x_373_, 1);
switch(lean_obj_tag(v___x_371_))
{
case 0:
{
lean_object* v_code_381_; 
v_code_381_ = lean_ctor_get(v___x_371_, 2);
v___y_375_ = v_code_381_;
goto v___jp_374_;
}
case 1:
{
lean_object* v_code_382_; 
v_code_382_ = lean_ctor_get(v___x_371_, 1);
v___y_375_ = v_code_382_;
goto v___jp_374_;
}
default: 
{
lean_object* v_code_383_; 
v_code_383_ = lean_ctor_get(v___x_371_, 0);
v___y_375_ = v_code_383_;
goto v___jp_374_;
}
}
v___jp_374_:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_370_, v___y_375_, v___y_367_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; size_t v___x_378_; size_t v___x_379_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_376_, 1);
v___x_378_ = ((size_t)1ULL);
v___x_379_ = lean_usize_add(v_i_364_, v___x_378_);
v_i_364_ = v___x_379_;
v_b_366_ = v_a_377_;
goto _start;
}
else
{
return v___x_376_;
}
}
}
else
{
return v___x_373_;
}
}
else
{
lean_object* v___x_384_; 
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v_b_366_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg___boxed(lean_object* v_as_385_, lean_object* v_i_386_, lean_object* v_stop_387_, lean_object* v_b_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
size_t v_i_boxed_391_; size_t v_stop_boxed_392_; lean_object* v_res_393_; 
v_i_boxed_391_ = lean_unbox_usize(v_i_386_);
lean_dec(v_i_386_);
v_stop_boxed_392_ = lean_unbox_usize(v_stop_387_);
lean_dec(v_stop_387_);
v_res_393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg(v_as_385_, v_i_boxed_391_, v_stop_boxed_392_, v_b_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v_as_385_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(lean_object* v_fst_394_, lean_object* v_as_395_, size_t v_sz_396_, size_t v_i_397_, lean_object* v_b_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_a_408_; uint8_t v___x_412_; 
v___x_412_ = lean_usize_dec_lt(v_i_397_, v_sz_396_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_dec_ref(v_fst_394_);
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v_b_398_);
return v___x_413_;
}
else
{
lean_object* v_fst_414_; lean_object* v_snd_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_451_; 
v_fst_414_ = lean_ctor_get(v_b_398_, 0);
v_snd_415_ = lean_ctor_get(v_b_398_, 1);
v_isSharedCheck_451_ = !lean_is_exclusive(v_b_398_);
if (v_isSharedCheck_451_ == 0)
{
v___x_417_ = v_b_398_;
v_isShared_418_ = v_isSharedCheck_451_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_snd_415_);
lean_inc(v_fst_414_);
lean_dec(v_b_398_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_451_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v_a_419_; lean_object* v___x_425_; 
v_a_419_ = lean_array_uget_borrowed(v_as_395_, v_i_397_);
v___x_425_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_hasNoUsedParams(v_a_419_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; uint8_t v___x_427_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = lean_unbox(v_a_426_);
lean_dec(v_a_426_);
if (v___x_427_ == 0)
{
goto v___jp_420_;
}
else
{
uint8_t v___x_428_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___y_436_; 
v___x_428_ = 0;
switch(lean_obj_tag(v_a_419_))
{
case 0:
{
lean_object* v_code_440_; 
v_code_440_ = lean_ctor_get(v_a_419_, 2);
lean_inc_ref(v_code_440_);
v___y_436_ = v_code_440_;
goto v___jp_435_;
}
case 1:
{
lean_object* v_code_441_; 
v_code_441_ = lean_ctor_get(v_a_419_, 1);
lean_inc_ref(v_code_441_);
v___y_436_ = v_code_441_;
goto v___jp_435_;
}
default: 
{
lean_object* v_code_442_; 
v_code_442_ = lean_ctor_get(v_a_419_, 0);
lean_inc_ref(v_code_442_);
v___y_436_ = v_code_442_;
goto v___jp_435_;
}
}
v___jp_429_:
{
uint8_t v___x_432_; 
v___x_432_ = l_Lean_Compiler_LCNF_Code_alphaEqv(v___x_428_, v___y_430_, v___y_431_);
if (v___x_432_ == 0)
{
goto v___jp_420_;
}
else
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_del_object(v___x_417_);
lean_inc(v_a_419_);
v___x_433_ = lean_array_push(v_snd_415_, v_a_419_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v_fst_414_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v_a_408_ = v___x_434_;
goto v___jp_407_;
}
}
v___jp_435_:
{
switch(lean_obj_tag(v_fst_394_))
{
case 0:
{
lean_object* v_code_437_; 
v_code_437_ = lean_ctor_get(v_fst_394_, 2);
lean_inc_ref(v_code_437_);
v___y_430_ = v___y_436_;
v___y_431_ = v_code_437_;
goto v___jp_429_;
}
case 1:
{
lean_object* v_code_438_; 
v_code_438_ = lean_ctor_get(v_fst_394_, 1);
lean_inc_ref(v_code_438_);
v___y_430_ = v___y_436_;
v___y_431_ = v_code_438_;
goto v___jp_429_;
}
default: 
{
lean_object* v_code_439_; 
v_code_439_ = lean_ctor_get(v_fst_394_, 0);
lean_inc_ref(v_code_439_);
v___y_430_ = v___y_436_;
v___y_431_ = v_code_439_;
goto v___jp_429_;
}
}
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_del_object(v___x_417_);
lean_dec(v_snd_415_);
lean_dec(v_fst_414_);
lean_dec_ref(v_fst_394_);
v_a_443_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_425_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_425_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
v___jp_420_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
lean_inc(v_a_419_);
v___x_421_ = lean_array_push(v_fst_414_, v_a_419_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_421_);
v___x_423_ = v___x_417_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_snd_415_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
v_a_408_ = v___x_423_;
goto v___jp_407_;
}
}
}
}
v___jp_407_:
{
size_t v___x_409_; size_t v___x_410_; 
v___x_409_ = ((size_t)1ULL);
v___x_410_ = lean_usize_add(v_i_397_, v___x_409_);
v_i_397_ = v___x_410_;
v_b_398_ = v_a_408_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0___boxed(lean_object* v_fst_452_, lean_object* v_as_453_, lean_object* v_sz_454_, lean_object* v_i_455_, lean_object* v_b_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
size_t v_sz_boxed_465_; size_t v_i_boxed_466_; lean_object* v_res_467_; 
v_sz_boxed_465_ = lean_unbox_usize(v_sz_454_);
lean_dec(v_sz_454_);
v_i_boxed_466_ = lean_unbox_usize(v_i_455_);
lean_dec(v_i_455_);
v_res_467_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(v_fst_452_, v_as_453_, v_sz_boxed_465_, v_i_boxed_466_, v_b_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec_ref(v_as_453_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object* v_alts_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_481_ = lean_array_get_size(v_alts_472_);
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = lean_nat_dec_le(v___x_481_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_addDefaultAlt_chooseRootAlt(v_alts_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_569_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_569_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_569_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_569_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
if (lean_obj_tag(v_a_485_) == 1)
{
lean_object* v_val_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_565_; 
v_val_489_ = lean_ctor_get(v_a_485_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v_a_485_);
if (v_isSharedCheck_565_ == 0)
{
v___x_491_ = v_a_485_;
v_isShared_492_ = v_isSharedCheck_565_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_val_489_);
lean_dec(v_a_485_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_565_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v_fst_493_; lean_object* v_snd_494_; lean_object* v___x_495_; lean_object* v___x_496_; size_t v_sz_497_; size_t v___x_498_; lean_object* v___x_499_; 
v_fst_493_ = lean_ctor_get(v_val_489_, 0);
lean_inc_n(v_fst_493_, 2);
v_snd_494_ = lean_ctor_get(v_val_489_, 1);
lean_inc(v_snd_494_);
lean_dec(v_val_489_);
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1));
v_sz_497_ = lean_array_size(v_snd_494_);
v___x_498_ = ((size_t)0ULL);
v___x_499_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__0(v_fst_493_, v_snd_494_, v_sz_497_, v___x_498_, v___x_496_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
lean_dec(v_snd_494_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_556_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_556_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_556_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_556_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v_fst_504_; lean_object* v_snd_505_; lean_object* v___y_507_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_fst_504_ = lean_ctor_get(v_a_500_, 0);
lean_inc(v_fst_504_);
v_snd_505_ = lean_ctor_get(v_a_500_, 1);
lean_inc(v_snd_505_);
lean_dec(v_a_500_);
v___x_519_ = lean_array_get_size(v_snd_505_);
v___x_520_ = lean_nat_dec_eq(v___x_519_, v___x_495_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; 
lean_del_object(v___x_487_);
lean_dec_ref(v_alts_472_);
v___x_521_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v_a_474_);
if (lean_obj_tag(v___x_521_) == 0)
{
uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec_ref_known(v___x_521_, 1);
v___x_522_ = 0;
v___x_523_ = l_Lean_Compiler_LCNF_Alt_getParams(v_fst_493_);
v___x_524_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_522_, v___x_523_, v_a_477_);
lean_dec_ref(v___x_523_);
if (lean_obj_tag(v___x_524_) == 0)
{
uint8_t v___x_525_; 
lean_dec_ref_known(v___x_524_, 1);
v___x_525_ = lean_nat_dec_lt(v___x_495_, v___x_519_);
if (v___x_525_ == 0)
{
lean_dec(v_snd_505_);
goto v___jp_515_;
}
else
{
lean_object* v___x_526_; size_t v___x_527_; lean_object* v___x_528_; 
v___x_526_ = lean_box(0);
v___x_527_ = lean_usize_of_nat(v___x_519_);
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg(v_snd_505_, v___x_498_, v___x_527_, v___x_526_, v_a_477_);
lean_dec(v_snd_505_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_dec_ref_known(v___x_528_, 1);
goto v___jp_515_;
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_fst_504_);
lean_del_object(v___x_502_);
lean_dec(v_fst_493_);
lean_del_object(v___x_491_);
v_a_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
lean_del_object(v___x_502_);
lean_dec(v_fst_493_);
lean_del_object(v___x_491_);
v_a_537_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_524_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_524_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
lean_del_object(v___x_502_);
lean_dec(v_fst_493_);
lean_del_object(v___x_491_);
v_a_545_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v___x_521_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_521_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
if (v_isShared_548_ == 0)
{
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
else
{
lean_object* v___x_554_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
lean_del_object(v___x_502_);
lean_dec(v_fst_493_);
lean_del_object(v___x_491_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_alts_472_);
v___x_554_ = v___x_487_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_alts_472_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
v___jp_506_:
{
lean_object* v___x_509_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set_tag(v___x_491_, 2);
lean_ctor_set(v___x_491_, 0, v___y_507_);
v___x_509_ = v___x_491_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___y_507_);
v___x_509_ = v_reuseFailAlloc_514_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_510_ = lean_array_push(v_fst_504_, v___x_509_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v___x_510_);
v___x_512_ = v___x_502_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
v___jp_515_:
{
switch(lean_obj_tag(v_fst_493_))
{
case 0:
{
lean_object* v_code_516_; 
v_code_516_ = lean_ctor_get(v_fst_493_, 2);
lean_inc_ref(v_code_516_);
lean_dec_ref_known(v_fst_493_, 3);
v___y_507_ = v_code_516_;
goto v___jp_506_;
}
case 1:
{
lean_object* v_code_517_; 
v_code_517_ = lean_ctor_get(v_fst_493_, 1);
lean_inc_ref(v_code_517_);
lean_dec_ref_known(v_fst_493_, 2);
v___y_507_ = v_code_517_;
goto v___jp_506_;
}
default: 
{
lean_object* v_code_518_; 
v_code_518_ = lean_ctor_get(v_fst_493_, 0);
lean_inc_ref(v_code_518_);
lean_dec_ref_known(v_fst_493_, 1);
v___y_507_ = v_code_518_;
goto v___jp_506_;
}
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec(v_fst_493_);
lean_del_object(v___x_491_);
lean_del_object(v___x_487_);
lean_dec_ref(v_alts_472_);
v_a_557_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_499_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_499_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
else
{
lean_object* v___x_567_; 
lean_dec(v_a_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_alts_472_);
v___x_567_ = v___x_487_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_alts_472_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v_alts_472_);
v_a_570_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_484_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_484_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
else
{
lean_object* v___x_578_; 
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v_alts_472_);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___boxed(lean_object* v_alts_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_Compiler_LCNF_Simp_addDefaultAlt(v_alts_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_);
lean_dec(v_a_586_);
lean_dec_ref(v_a_585_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec_ref(v_a_582_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(lean_object* v_as_589_, size_t v_i_590_, size_t v_stop_591_, lean_object* v_b_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___redArg(v_as_589_, v_i_590_, v_stop_591_, v_b_592_, v___y_597_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1___boxed(lean_object* v_as_602_, lean_object* v_i_603_, lean_object* v_stop_604_, lean_object* v_b_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
size_t v_i_boxed_614_; size_t v_stop_boxed_615_; lean_object* v_res_616_; 
v_i_boxed_614_ = lean_unbox_usize(v_i_603_);
lean_dec(v_i_603_);
v_stop_boxed_615_ = lean_unbox_usize(v_stop_604_);
lean_dec(v_stop_604_);
v_res_616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Simp_addDefaultAlt_spec__1(v_as_602_, v_i_boxed_614_, v_stop_boxed_615_, v_b_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec_ref(v_as_602_);
return v_res_616_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
}
#ifdef __cplusplus
}
#endif
