// Lean compiler output
// Module: Lean.Meta.Tactic.Repeat
// Imports: public import Lean.Meta.Basic import Init.Data.Nat.Internal.Linear import Init.Omega
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
lean_object* l_Array_appendList(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isAssigned___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_observing_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Bool_Internal_not___boxed(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_mapRev___redArg(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_appendList, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__List_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__List_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_repeat_x27Core___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Bool_Internal_not___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_repeat_x27Core___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_repeat_x27Core___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_repeat_x27Core___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_repeat_x27Core___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_repeat_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_repeat_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_repeat_x27___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_repeat_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`repeat1'` made no progress"};
static const lean_object* l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__0___boxed(lean_object* v_a_2_, lean_object* v_head_3_, lean_object* v_inst_4_, lean_object* v_inst_5_, lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_f_8_, lean_object* v_n_9_, lean_object* v_a_10_, lean_object* v_tail_11_, lean_object* v_a_12_, lean_object* v_____do__lift_13_){
_start:
{
uint8_t v_a_265__boxed_14_; lean_object* v_res_15_; 
v_a_265__boxed_14_ = lean_unbox(v_a_10_);
v_res_15_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__0(v_a_2_, v_head_3_, v_inst_4_, v_inst_5_, v_inst_6_, v_inst_7_, v_f_8_, v_n_9_, v_a_265__boxed_14_, v_tail_11_, v_a_12_, v_____do__lift_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1(lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_head_18_, lean_object* v_tail_19_, lean_object* v_a_20_, uint8_t v_a_21_, lean_object* v_toPure_22_, lean_object* v_inst_23_, lean_object* v_inst_24_, lean_object* v_inst_25_, lean_object* v_inst_26_, lean_object* v_f_27_, lean_object* v_toBind_28_, uint8_t v_____do__lift_29_){
_start:
{
if (v_____do__lift_29_ == 0)
{
lean_object* v_zero_30_; uint8_t v_isZero_31_; 
v_zero_30_ = lean_unsigned_to_nat(0u);
v_isZero_31_ = lean_nat_dec_eq(v_a_16_, v_zero_30_);
if (v_isZero_31_ == 1)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
lean_dec(v_toBind_28_);
lean_dec(v_f_27_);
lean_dec_ref(v_inst_26_);
lean_dec_ref(v_inst_25_);
lean_dec_ref(v_inst_24_);
lean_dec_ref(v_inst_23_);
lean_dec(v_a_16_);
v___x_32_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___closed__0));
v___x_33_ = lean_array_push(v_a_17_, v_head_18_);
v___x_34_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v___x_33_, v_tail_19_);
v___x_35_ = l_List_foldl___redArg(v___x_32_, v___x_34_, v_a_20_);
v___x_36_ = lean_box(v_a_21_);
v___x_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
v___x_38_ = lean_apply_2(v_toPure_22_, lean_box(0), v___x_37_);
return v___x_38_;
}
else
{
lean_object* v_one_39_; lean_object* v_n_40_; lean_object* v___x_41_; lean_object* v___f_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
lean_dec(v_toPure_22_);
v_one_39_ = lean_unsigned_to_nat(1u);
v_n_40_ = lean_nat_sub(v_a_16_, v_one_39_);
lean_dec(v_a_16_);
v___x_41_ = lean_box(v_a_21_);
lean_inc(v_f_27_);
lean_inc_ref(v_inst_25_);
lean_inc_ref(v_inst_24_);
lean_inc_ref(v_inst_23_);
lean_inc(v_head_18_);
v___f_42_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__0___boxed), 12, 11);
lean_closure_set(v___f_42_, 0, v_a_17_);
lean_closure_set(v___f_42_, 1, v_head_18_);
lean_closure_set(v___f_42_, 2, v_inst_23_);
lean_closure_set(v___f_42_, 3, v_inst_24_);
lean_closure_set(v___f_42_, 4, v_inst_25_);
lean_closure_set(v___f_42_, 5, v_inst_26_);
lean_closure_set(v___f_42_, 6, v_f_27_);
lean_closure_set(v___f_42_, 7, v_n_40_);
lean_closure_set(v___f_42_, 8, v___x_41_);
lean_closure_set(v___f_42_, 9, v_tail_19_);
lean_closure_set(v___f_42_, 10, v_a_20_);
v___x_43_ = lean_apply_1(v_f_27_, v_head_18_);
v___x_44_ = l_Lean_observing_x3f___redArg(v_inst_23_, v_inst_25_, v_inst_24_, v___x_43_);
v___x_45_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v___x_44_, v___f_42_);
return v___x_45_;
}
}
else
{
lean_object* v___x_46_; 
lean_dec(v_toBind_28_);
lean_dec(v_toPure_22_);
lean_dec(v_head_18_);
v___x_46_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(v_inst_23_, v_inst_24_, v_inst_25_, v_inst_26_, v_f_27_, v_a_16_, v_a_21_, v_tail_19_, v_a_20_, v_a_17_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___boxed(lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_head_49_, lean_object* v_tail_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_toPure_53_, lean_object* v_inst_54_, lean_object* v_inst_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_f_58_, lean_object* v_toBind_59_, lean_object* v_____do__lift_60_){
_start:
{
uint8_t v_a_300__boxed_61_; uint8_t v_____do__lift_305__boxed_62_; lean_object* v_res_63_; 
v_a_300__boxed_61_ = lean_unbox(v_a_52_);
v_____do__lift_305__boxed_62_ = lean_unbox(v_____do__lift_60_);
v_res_63_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1(v_a_47_, v_a_48_, v_head_49_, v_tail_50_, v_a_51_, v_a_300__boxed_61_, v_toPure_53_, v_inst_54_, v_inst_55_, v_inst_56_, v_inst_57_, v_f_58_, v_toBind_59_, v_____do__lift_305__boxed_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(lean_object* v_inst_64_, lean_object* v_inst_65_, lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_f_68_, lean_object* v_a_69_, uint8_t v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
if (lean_obj_tag(v_a_71_) == 0)
{
if (lean_obj_tag(v_a_72_) == 0)
{
lean_object* v_toApplicative_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_84_; 
v_toApplicative_74_ = lean_ctor_get(v_inst_64_, 0);
lean_inc_ref(v_toApplicative_74_);
lean_dec(v_a_69_);
lean_dec(v_f_68_);
lean_dec_ref(v_inst_67_);
lean_dec_ref(v_inst_66_);
lean_dec_ref(v_inst_65_);
v_isSharedCheck_84_ = !lean_is_exclusive(v_inst_64_);
if (v_isSharedCheck_84_ == 0)
{
lean_object* v_unused_85_; lean_object* v_unused_86_; 
v_unused_85_ = lean_ctor_get(v_inst_64_, 1);
lean_dec(v_unused_85_);
v_unused_86_ = lean_ctor_get(v_inst_64_, 0);
lean_dec(v_unused_86_);
v___x_76_ = v_inst_64_;
v_isShared_77_ = v_isSharedCheck_84_;
goto v_resetjp_75_;
}
else
{
lean_dec(v_inst_64_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_84_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v_toPure_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v_toPure_78_ = lean_ctor_get(v_toApplicative_74_, 1);
lean_inc(v_toPure_78_);
lean_dec_ref(v_toApplicative_74_);
v___x_79_ = lean_box(v_a_70_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 1, v_a_73_);
lean_ctor_set(v___x_76_, 0, v___x_79_);
v___x_81_ = v___x_76_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_a_73_);
v___x_81_ = v_reuseFailAlloc_83_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; 
v___x_82_ = lean_apply_2(v_toPure_78_, lean_box(0), v___x_81_);
return v___x_82_;
}
}
}
else
{
lean_object* v_head_87_; lean_object* v_tail_88_; 
v_head_87_ = lean_ctor_get(v_a_72_, 0);
lean_inc(v_head_87_);
v_tail_88_ = lean_ctor_get(v_a_72_, 1);
lean_inc(v_tail_88_);
lean_dec_ref_known(v_a_72_, 2);
v_a_71_ = v_head_87_;
v_a_72_ = v_tail_88_;
goto _start;
}
}
else
{
lean_object* v_toApplicative_90_; lean_object* v_toBind_91_; lean_object* v_toPure_92_; lean_object* v_head_93_; lean_object* v_tail_94_; lean_object* v___x_95_; lean_object* v___f_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_toApplicative_90_ = lean_ctor_get(v_inst_64_, 0);
v_toBind_91_ = lean_ctor_get(v_inst_64_, 1);
lean_inc_n(v_toBind_91_, 2);
v_toPure_92_ = lean_ctor_get(v_toApplicative_90_, 1);
v_head_93_ = lean_ctor_get(v_a_71_, 0);
lean_inc_n(v_head_93_, 2);
v_tail_94_ = lean_ctor_get(v_a_71_, 1);
lean_inc(v_tail_94_);
lean_dec_ref_known(v_a_71_, 2);
v___x_95_ = lean_box(v_a_70_);
lean_inc_ref(v_inst_67_);
lean_inc_ref(v_inst_64_);
lean_inc(v_toPure_92_);
v___f_96_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__1___boxed), 14, 13);
lean_closure_set(v___f_96_, 0, v_a_69_);
lean_closure_set(v___f_96_, 1, v_a_73_);
lean_closure_set(v___f_96_, 2, v_head_93_);
lean_closure_set(v___f_96_, 3, v_tail_94_);
lean_closure_set(v___f_96_, 4, v_a_72_);
lean_closure_set(v___f_96_, 5, v___x_95_);
lean_closure_set(v___f_96_, 6, v_toPure_92_);
lean_closure_set(v___f_96_, 7, v_inst_64_);
lean_closure_set(v___f_96_, 8, v_inst_65_);
lean_closure_set(v___f_96_, 9, v_inst_66_);
lean_closure_set(v___f_96_, 10, v_inst_67_);
lean_closure_set(v___f_96_, 11, v_f_68_);
lean_closure_set(v___f_96_, 12, v_toBind_91_);
v___x_97_ = l_Lean_MVarId_isAssigned___redArg(v_inst_64_, v_inst_67_, v_head_93_);
v___x_98_ = lean_apply_4(v_toBind_91_, lean_box(0), lean_box(0), v___x_97_, v___f_96_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___lam__0(lean_object* v_a_99_, lean_object* v_head_100_, lean_object* v_inst_101_, lean_object* v_inst_102_, lean_object* v_inst_103_, lean_object* v_inst_104_, lean_object* v_f_105_, lean_object* v_n_106_, uint8_t v_a_107_, lean_object* v_tail_108_, lean_object* v_a_109_, lean_object* v_____do__lift_110_){
_start:
{
if (lean_obj_tag(v_____do__lift_110_) == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_array_push(v_a_99_, v_head_100_);
v___x_112_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(v_inst_101_, v_inst_102_, v_inst_103_, v_inst_104_, v_f_105_, v_n_106_, v_a_107_, v_tail_108_, v_a_109_, v___x_111_);
return v___x_112_;
}
else
{
lean_object* v_val_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
lean_dec(v_head_100_);
v_val_113_ = lean_ctor_get(v_____do__lift_110_, 0);
lean_inc(v_val_113_);
lean_dec_ref_known(v_____do__lift_110_, 1);
v___x_114_ = 1;
v___x_115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_115_, 0, v_tail_108_);
lean_ctor_set(v___x_115_, 1, v_a_109_);
v___x_116_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(v_inst_101_, v_inst_102_, v_inst_103_, v_inst_104_, v_f_105_, v_n_106_, v___x_114_, v_val_113_, v___x_115_, v_a_99_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg___boxed(lean_object* v_inst_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_f_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
uint8_t v_a_280__boxed_127_; lean_object* v_res_128_; 
v_a_280__boxed_127_ = lean_unbox(v_a_123_);
v_res_128_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(v_inst_117_, v_inst_118_, v_inst_119_, v_inst_120_, v_f_121_, v_a_122_, v_a_280__boxed_127_, v_a_124_, v_a_125_, v_a_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go(lean_object* v_m_129_, lean_object* v_00_u03b5_130_, lean_object* v_s_131_, lean_object* v_inst_132_, lean_object* v_inst_133_, lean_object* v_inst_134_, lean_object* v_inst_135_, lean_object* v_f_136_, lean_object* v_a_137_, uint8_t v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(v_inst_132_, v_inst_133_, v_inst_134_, v_inst_135_, v_f_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___boxed(lean_object* v_m_143_, lean_object* v_00_u03b5_144_, lean_object* v_s_145_, lean_object* v_inst_146_, lean_object* v_inst_147_, lean_object* v_inst_148_, lean_object* v_inst_149_, lean_object* v_f_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
uint8_t v_a_438__boxed_156_; lean_object* v_res_157_; 
v_a_438__boxed_156_ = lean_unbox(v_a_152_);
v_res_157_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go(v_m_143_, v_00_u03b5_144_, v_s_145_, v_inst_146_, v_inst_147_, v_inst_148_, v_inst_149_, v_f_150_, v_a_151_, v_a_438__boxed_156_, v_a_153_, v_a_154_, v_a_155_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___redArg(lean_object* v_x_158_, uint8_t v_x_159_, lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_, lean_object* v_h__1_163_, lean_object* v_h__2_164_, lean_object* v_h__3_165_){
_start:
{
if (lean_obj_tag(v_x_160_) == 0)
{
lean_dec(v_h__3_165_);
if (lean_obj_tag(v_x_161_) == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec(v_h__2_164_);
v___x_166_ = lean_box(v_x_159_);
v___x_167_ = lean_apply_3(v_h__1_163_, v_x_158_, v___x_166_, v_x_162_);
return v___x_167_;
}
else
{
lean_object* v_head_168_; lean_object* v_tail_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
lean_dec(v_h__1_163_);
v_head_168_ = lean_ctor_get(v_x_161_, 0);
lean_inc(v_head_168_);
v_tail_169_ = lean_ctor_get(v_x_161_, 1);
lean_inc(v_tail_169_);
lean_dec_ref_known(v_x_161_, 2);
v___x_170_ = lean_box(v_x_159_);
v___x_171_ = lean_apply_5(v_h__2_164_, v_x_158_, v___x_170_, v_head_168_, v_tail_169_, v_x_162_);
return v___x_171_;
}
}
else
{
lean_object* v_head_172_; lean_object* v_tail_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec(v_h__2_164_);
lean_dec(v_h__1_163_);
v_head_172_ = lean_ctor_get(v_x_160_, 0);
lean_inc(v_head_172_);
v_tail_173_ = lean_ctor_get(v_x_160_, 1);
lean_inc(v_tail_173_);
lean_dec_ref_known(v_x_160_, 2);
v___x_174_ = lean_box(v_x_159_);
v___x_175_ = lean_apply_6(v_h__3_165_, v_x_158_, v___x_174_, v_head_172_, v_tail_173_, v_x_161_, v_x_162_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___redArg___boxed(lean_object* v_x_176_, lean_object* v_x_177_, lean_object* v_x_178_, lean_object* v_x_179_, lean_object* v_x_180_, lean_object* v_h__1_181_, lean_object* v_h__2_182_, lean_object* v_h__3_183_){
_start:
{
uint8_t v_x_43__boxed_184_; lean_object* v_res_185_; 
v_x_43__boxed_184_ = lean_unbox(v_x_177_);
v_res_185_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___redArg(v_x_176_, v_x_43__boxed_184_, v_x_178_, v_x_179_, v_x_180_, v_h__1_181_, v_h__2_182_, v_h__3_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter(lean_object* v_motive_186_, lean_object* v_x_187_, uint8_t v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_, lean_object* v_h__1_192_, lean_object* v_h__2_193_, lean_object* v_h__3_194_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_dec(v_h__3_194_);
if (lean_obj_tag(v_x_190_) == 0)
{
lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec(v_h__2_193_);
v___x_195_ = lean_box(v_x_188_);
v___x_196_ = lean_apply_3(v_h__1_192_, v_x_187_, v___x_195_, v_x_191_);
return v___x_196_;
}
else
{
lean_object* v_head_197_; lean_object* v_tail_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec(v_h__1_192_);
v_head_197_ = lean_ctor_get(v_x_190_, 0);
lean_inc(v_head_197_);
v_tail_198_ = lean_ctor_get(v_x_190_, 1);
lean_inc(v_tail_198_);
lean_dec_ref_known(v_x_190_, 2);
v___x_199_ = lean_box(v_x_188_);
v___x_200_ = lean_apply_5(v_h__2_193_, v_x_187_, v___x_199_, v_head_197_, v_tail_198_, v_x_191_);
return v___x_200_;
}
}
else
{
lean_object* v_head_201_; lean_object* v_tail_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
lean_dec(v_h__2_193_);
lean_dec(v_h__1_192_);
v_head_201_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_head_201_);
v_tail_202_ = lean_ctor_get(v_x_189_, 1);
lean_inc(v_tail_202_);
lean_dec_ref_known(v_x_189_, 2);
v___x_203_ = lean_box(v_x_188_);
v___x_204_ = lean_apply_6(v_h__3_194_, v_x_187_, v___x_203_, v_head_201_, v_tail_202_, v_x_190_, v_x_191_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter___boxed(lean_object* v_motive_205_, lean_object* v_x_206_, lean_object* v_x_207_, lean_object* v_x_208_, lean_object* v_x_209_, lean_object* v_x_210_, lean_object* v_h__1_211_, lean_object* v_h__2_212_, lean_object* v_h__3_213_){
_start:
{
uint8_t v_x_78__boxed_214_; lean_object* v_res_215_; 
v_x_78__boxed_214_ = lean_unbox(v_x_207_);
v_res_215_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__5_splitter(v_motive_205_, v_x_206_, v_x_78__boxed_214_, v_x_208_, v_x_209_, v_x_210_, v_h__1_211_, v_h__2_212_, v_h__3_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___redArg(lean_object* v_n_216_, lean_object* v_h__1_217_, lean_object* v_h__2_218_){
_start:
{
lean_object* v_zero_219_; uint8_t v_isZero_220_; 
v_zero_219_ = lean_unsigned_to_nat(0u);
v_isZero_220_ = lean_nat_dec_eq(v_n_216_, v_zero_219_);
if (v_isZero_220_ == 1)
{
lean_object* v___x_221_; lean_object* v___x_222_; 
lean_dec(v_h__2_218_);
v___x_221_ = lean_box(0);
v___x_222_ = lean_apply_1(v_h__1_217_, v___x_221_);
return v___x_222_;
}
else
{
lean_object* v_one_223_; lean_object* v_n_224_; lean_object* v___x_225_; 
lean_dec(v_h__1_217_);
v_one_223_ = lean_unsigned_to_nat(1u);
v_n_224_ = lean_nat_sub(v_n_216_, v_one_223_);
v___x_225_ = lean_apply_1(v_h__2_218_, v_n_224_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___redArg___boxed(lean_object* v_n_226_, lean_object* v_h__1_227_, lean_object* v_h__2_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___redArg(v_n_226_, v_h__1_227_, v_h__2_228_);
lean_dec(v_n_226_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter(lean_object* v_motive_230_, lean_object* v_n_231_, lean_object* v_h__1_232_, lean_object* v_h__2_233_){
_start:
{
lean_object* v_zero_234_; uint8_t v_isZero_235_; 
v_zero_234_ = lean_unsigned_to_nat(0u);
v_isZero_235_ = lean_nat_dec_eq(v_n_231_, v_zero_234_);
if (v_isZero_235_ == 1)
{
lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec(v_h__2_233_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_apply_1(v_h__1_232_, v___x_236_);
return v___x_237_;
}
else
{
lean_object* v_one_238_; lean_object* v_n_239_; lean_object* v___x_240_; 
lean_dec(v_h__1_232_);
v_one_238_ = lean_unsigned_to_nat(1u);
v_n_239_ = lean_nat_sub(v_n_231_, v_one_238_);
v___x_240_ = lean_apply_1(v_h__2_233_, v_n_239_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter___boxed(lean_object* v_motive_241_, lean_object* v_n_242_, lean_object* v_h__1_243_, lean_object* v_h__2_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__3_splitter(v_motive_241_, v_n_242_, v_h__1_243_, v_h__2_244_);
lean_dec(v_n_242_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__List_map__unattach_match__1_splitter___redArg(lean_object* v_x_246_, lean_object* v_h__1_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = lean_apply_2(v_h__1_247_, v_x_246_, lean_box(0));
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__List_map__unattach_match__1_splitter(lean_object* v_00_u03b1_249_, lean_object* v_P_250_, lean_object* v_motive_251_, lean_object* v_x_252_, lean_object* v_h__1_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_apply_2(v_h__1_253_, v_x_252_, lean_box(0));
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__1_splitter___redArg(lean_object* v_____do__lift_255_, lean_object* v_h__1_256_, lean_object* v_h__2_257_){
_start:
{
if (lean_obj_tag(v_____do__lift_255_) == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; 
lean_dec(v_h__1_256_);
v___x_258_ = lean_box(0);
v___x_259_ = lean_apply_1(v_h__2_257_, v___x_258_);
return v___x_259_;
}
else
{
lean_object* v_val_260_; lean_object* v___x_261_; 
lean_dec(v_h__2_257_);
v_val_260_ = lean_ctor_get(v_____do__lift_255_, 0);
lean_inc(v_val_260_);
lean_dec_ref_known(v_____do__lift_255_, 1);
v___x_261_ = lean_apply_1(v_h__1_256_, v_val_260_);
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go_match__1_splitter(lean_object* v_motive_262_, lean_object* v_____do__lift_263_, lean_object* v_h__1_264_, lean_object* v_h__2_265_){
_start:
{
if (lean_obj_tag(v_____do__lift_263_) == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; 
lean_dec(v_h__1_264_);
v___x_266_ = lean_box(0);
v___x_267_ = lean_apply_1(v_h__2_265_, v___x_266_);
return v___x_267_;
}
else
{
lean_object* v_val_268_; lean_object* v___x_269_; 
lean_dec(v_h__2_265_);
v_val_268_ = lean_ctor_get(v_____do__lift_263_, 0);
lean_inc(v_val_268_);
lean_dec_ref_known(v_____do__lift_263_, 1);
v___x_269_ = lean_apply_1(v_h__1_264_, v_val_268_);
return v___x_269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__0(lean_object* v_toPure_270_, lean_object* v_acc_271_, lean_object* v_a_272_, uint8_t v_____do__lift_273_){
_start:
{
if (v_____do__lift_273_ == 0)
{
lean_object* v___x_274_; 
lean_dec(v_a_272_);
v___x_274_ = lean_apply_2(v_toPure_270_, lean_box(0), v_acc_271_);
return v___x_274_;
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_array_push(v_acc_271_, v_a_272_);
v___x_276_ = lean_apply_2(v_toPure_270_, lean_box(0), v___x_275_);
return v___x_276_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__0___boxed(lean_object* v_toPure_277_, lean_object* v_acc_278_, lean_object* v_a_279_, lean_object* v_____do__lift_280_){
_start:
{
uint8_t v_____do__lift_177__boxed_281_; lean_object* v_res_282_; 
v_____do__lift_177__boxed_281_ = lean_unbox(v_____do__lift_280_);
v_res_282_ = l_Lean_Meta_repeat_x27Core___redArg___lam__0(v_toPure_277_, v_acc_278_, v_a_279_, v_____do__lift_177__boxed_281_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__1(lean_object* v_toFunctor_284_, lean_object* v_toPure_285_, lean_object* v_inst_286_, lean_object* v_inst_287_, lean_object* v_toBind_288_, lean_object* v_acc_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_map_291_; lean_object* v___f_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v_map_291_ = lean_ctor_get(v_toFunctor_284_, 0);
lean_inc(v_map_291_);
lean_dec_ref(v_toFunctor_284_);
lean_inc(v_a_290_);
v___f_292_ = lean_alloc_closure((void*)(l_Lean_Meta_repeat_x27Core___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_292_, 0, v_toPure_285_);
lean_closure_set(v___f_292_, 1, v_acc_289_);
lean_closure_set(v___f_292_, 2, v_a_290_);
v___x_293_ = ((lean_object*)(l_Lean_Meta_repeat_x27Core___redArg___lam__1___closed__0));
v___x_294_ = l_Lean_MVarId_isAssigned___redArg(v_inst_286_, v_inst_287_, v_a_290_);
v___x_295_ = lean_apply_4(v_map_291_, lean_box(0), lean_box(0), v___x_293_, v___x_294_);
v___x_296_ = lean_apply_4(v_toBind_288_, lean_box(0), lean_box(0), v___x_295_, v___f_292_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__2(uint8_t v_fst_297_, lean_object* v_toPure_298_, lean_object* v_____do__lift_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_300_ = lean_array_to_list(v_____do__lift_299_);
v___x_301_ = lean_box(v_fst_297_);
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set(v___x_302_, 1, v___x_300_);
v___x_303_ = lean_apply_2(v_toPure_298_, lean_box(0), v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__2___boxed(lean_object* v_fst_304_, lean_object* v_toPure_305_, lean_object* v_____do__lift_306_){
_start:
{
uint8_t v_fst_203__boxed_307_; lean_object* v_res_308_; 
v_fst_203__boxed_307_ = lean_unbox(v_fst_304_);
v_res_308_ = l_Lean_Meta_repeat_x27Core___redArg___lam__2(v_fst_203__boxed_307_, v_toPure_305_, v_____do__lift_306_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__3(lean_object* v_toPure_309_, lean_object* v___x_310_, lean_object* v___x_311_, lean_object* v_toBind_312_, lean_object* v_inst_313_, lean_object* v___f_314_, lean_object* v_____x_315_){
_start:
{
lean_object* v_fst_316_; lean_object* v_snd_317_; lean_object* v___f_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v_fst_316_ = lean_ctor_get(v_____x_315_, 0);
lean_inc(v_fst_316_);
v_snd_317_ = lean_ctor_get(v_____x_315_, 1);
lean_inc(v_snd_317_);
lean_dec_ref(v_____x_315_);
lean_inc(v_toPure_309_);
v___f_318_ = lean_alloc_closure((void*)(l_Lean_Meta_repeat_x27Core___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_318_, 0, v_fst_316_);
lean_closure_set(v___f_318_, 1, v_toPure_309_);
v___x_319_ = lean_array_get_size(v_snd_317_);
v___x_320_ = lean_nat_dec_lt(v___x_310_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v_snd_317_);
lean_dec(v___f_314_);
lean_dec_ref(v_inst_313_);
v___x_321_ = lean_apply_2(v_toPure_309_, lean_box(0), v___x_311_);
v___x_322_ = lean_apply_4(v_toBind_312_, lean_box(0), lean_box(0), v___x_321_, v___f_318_);
return v___x_322_;
}
else
{
size_t v___x_323_; size_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec(v_toPure_309_);
v___x_323_ = ((size_t)0ULL);
v___x_324_ = lean_usize_of_nat(v___x_319_);
v___x_325_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_313_, v___f_314_, v_snd_317_, v___x_323_, v___x_324_, v___x_311_);
v___x_326_ = lean_apply_4(v_toBind_312_, lean_box(0), lean_box(0), v___x_325_, v___f_318_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg___lam__3___boxed(lean_object* v_toPure_327_, lean_object* v___x_328_, lean_object* v___x_329_, lean_object* v_toBind_330_, lean_object* v_inst_331_, lean_object* v___f_332_, lean_object* v_____x_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Meta_repeat_x27Core___redArg___lam__3(v_toPure_327_, v___x_328_, v___x_329_, v_toBind_330_, v_inst_331_, v___f_332_, v_____x_333_);
lean_dec(v___x_328_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___redArg(lean_object* v_inst_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_inst_340_, lean_object* v_f_341_, lean_object* v_goals_342_, lean_object* v_maxIters_343_){
_start:
{
lean_object* v_toApplicative_344_; lean_object* v_toBind_345_; lean_object* v_toFunctor_346_; lean_object* v_toPure_347_; uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___f_353_; lean_object* v___f_354_; lean_object* v___x_355_; 
v_toApplicative_344_ = lean_ctor_get(v_inst_337_, 0);
v_toBind_345_ = lean_ctor_get(v_inst_337_, 1);
lean_inc_n(v_toBind_345_, 3);
v_toFunctor_346_ = lean_ctor_get(v_toApplicative_344_, 0);
v_toPure_347_ = lean_ctor_get(v_toApplicative_344_, 1);
lean_inc_n(v_toPure_347_, 2);
v___x_348_ = 0;
v___x_349_ = lean_box(0);
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = ((lean_object*)(l_Lean_Meta_repeat_x27Core___redArg___closed__0));
lean_inc_ref(v_inst_340_);
lean_inc_ref_n(v_inst_337_, 2);
v___x_352_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___redArg(v_inst_337_, v_inst_338_, v_inst_339_, v_inst_340_, v_f_341_, v_maxIters_343_, v___x_348_, v_goals_342_, v___x_349_, v___x_351_);
lean_inc_ref(v_toFunctor_346_);
v___f_353_ = lean_alloc_closure((void*)(l_Lean_Meta_repeat_x27Core___redArg___lam__1), 7, 5);
lean_closure_set(v___f_353_, 0, v_toFunctor_346_);
lean_closure_set(v___f_353_, 1, v_toPure_347_);
lean_closure_set(v___f_353_, 2, v_inst_337_);
lean_closure_set(v___f_353_, 3, v_inst_340_);
lean_closure_set(v___f_353_, 4, v_toBind_345_);
v___f_354_ = lean_alloc_closure((void*)(l_Lean_Meta_repeat_x27Core___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_354_, 0, v_toPure_347_);
lean_closure_set(v___f_354_, 1, v___x_350_);
lean_closure_set(v___f_354_, 2, v___x_351_);
lean_closure_set(v___f_354_, 3, v_toBind_345_);
lean_closure_set(v___f_354_, 4, v_inst_337_);
lean_closure_set(v___f_354_, 5, v___f_353_);
v___x_355_ = lean_apply_4(v_toBind_345_, lean_box(0), lean_box(0), v___x_352_, v___f_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core(lean_object* v_m_356_, lean_object* v_00_u03b5_357_, lean_object* v_s_358_, lean_object* v_inst_359_, lean_object* v_inst_360_, lean_object* v_inst_361_, lean_object* v_inst_362_, lean_object* v_f_363_, lean_object* v_goals_364_, lean_object* v_maxIters_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = l_Lean_Meta_repeat_x27Core___redArg(v_inst_359_, v_inst_360_, v_inst_361_, v_inst_362_, v_f_363_, v_goals_364_, v_maxIters_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27___redArg___lam__0(lean_object* v_x_367_){
_start:
{
lean_object* v_snd_368_; 
v_snd_368_ = lean_ctor_get(v_x_367_, 1);
lean_inc(v_snd_368_);
return v_snd_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27___redArg___lam__0___boxed(lean_object* v_x_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_Meta_repeat_x27___redArg___lam__0(v_x_369_);
lean_dec_ref(v_x_369_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27___redArg(lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inst_375_, lean_object* v_f_376_, lean_object* v_goals_377_, lean_object* v_maxIters_378_){
_start:
{
lean_object* v_toApplicative_379_; lean_object* v_toFunctor_380_; lean_object* v___f_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_toApplicative_379_ = lean_ctor_get(v_inst_372_, 0);
v_toFunctor_380_ = lean_ctor_get(v_toApplicative_379_, 0);
lean_inc_ref(v_toFunctor_380_);
v___f_381_ = ((lean_object*)(l_Lean_Meta_repeat_x27___redArg___closed__0));
v___x_382_ = l_Lean_Meta_repeat_x27Core___redArg(v_inst_372_, v_inst_373_, v_inst_374_, v_inst_375_, v_f_376_, v_goals_377_, v_maxIters_378_);
v___x_383_ = l_Functor_mapRev___redArg(v_toFunctor_380_, v___x_382_, v___f_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27(lean_object* v_m_384_, lean_object* v_00_u03b5_385_, lean_object* v_s_386_, lean_object* v_inst_387_, lean_object* v_inst_388_, lean_object* v_inst_389_, lean_object* v_inst_390_, lean_object* v_f_391_, lean_object* v_goals_392_, lean_object* v_maxIters_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Meta_repeat_x27___redArg(v_inst_387_, v_inst_388_, v_inst_389_, v_inst_390_, v_f_391_, v_goals_392_, v_maxIters_393_);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = ((lean_object*)(l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__0));
v___x_397_ = l_Lean_stringToMessageData(v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___redArg___lam__0(lean_object* v_toPure_398_, lean_object* v_inst_399_, lean_object* v_inst_400_, lean_object* v_____x_401_){
_start:
{
lean_object* v_fst_402_; uint8_t v___x_403_; 
v_fst_402_ = lean_ctor_get(v_____x_401_, 0);
v___x_403_ = lean_unbox(v_fst_402_);
if (v___x_403_ == 1)
{
lean_object* v_snd_404_; lean_object* v___x_405_; 
lean_dec_ref(v_inst_400_);
lean_dec_ref(v_inst_399_);
v_snd_404_ = lean_ctor_get(v_____x_401_, 1);
lean_inc(v_snd_404_);
lean_dec_ref(v_____x_401_);
v___x_405_ = lean_apply_2(v_toPure_398_, lean_box(0), v_snd_404_);
return v___x_405_;
}
else
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref(v_____x_401_);
lean_dec(v_toPure_398_);
v___x_406_ = lean_obj_once(&l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__1, &l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_repeat1_x27___redArg___lam__0___closed__1);
v___x_407_ = l_Lean_throwError___redArg(v_inst_399_, v_inst_400_, v___x_406_);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___redArg(lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_inst_410_, lean_object* v_inst_411_, lean_object* v_inst_412_, lean_object* v_f_413_, lean_object* v_goals_414_, lean_object* v_maxIters_415_){
_start:
{
lean_object* v_toApplicative_416_; lean_object* v_toBind_417_; lean_object* v_toPure_418_; lean_object* v___x_419_; lean_object* v___f_420_; lean_object* v___x_421_; 
v_toApplicative_416_ = lean_ctor_get(v_inst_408_, 0);
v_toBind_417_ = lean_ctor_get(v_inst_408_, 1);
lean_inc(v_toBind_417_);
v_toPure_418_ = lean_ctor_get(v_toApplicative_416_, 1);
lean_inc(v_toPure_418_);
lean_inc_ref(v_inst_408_);
v___x_419_ = l_Lean_Meta_repeat_x27Core___redArg(v_inst_408_, v_inst_410_, v_inst_411_, v_inst_412_, v_f_413_, v_goals_414_, v_maxIters_415_);
v___f_420_ = lean_alloc_closure((void*)(l_Lean_Meta_repeat1_x27___redArg___lam__0), 4, 3);
lean_closure_set(v___f_420_, 0, v_toPure_418_);
lean_closure_set(v___f_420_, 1, v_inst_408_);
lean_closure_set(v___f_420_, 2, v_inst_409_);
v___x_421_ = lean_apply_4(v_toBind_417_, lean_box(0), lean_box(0), v___x_419_, v___f_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27(lean_object* v_m_422_, lean_object* v_00_u03b5_423_, lean_object* v_s_424_, lean_object* v_inst_425_, lean_object* v_inst_426_, lean_object* v_inst_427_, lean_object* v_inst_428_, lean_object* v_inst_429_, lean_object* v_f_430_, lean_object* v_goals_431_, lean_object* v_maxIters_432_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_Meta_repeat1_x27___redArg(v_inst_425_, v_inst_426_, v_inst_427_, v_inst_428_, v_inst_429_, v_f_430_, v_goals_431_, v_maxIters_432_);
return v___x_433_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Repeat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Repeat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Repeat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Repeat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Repeat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Repeat(builtin);
}
#ifdef __cplusplus
}
#endif
