// Lean compiler output
// Module: Lean.Data.Markdown.Parser.LinkSyntax
// Imports: public import Init.While public import Lean.Data.Markdown.Inline public import Lean.Data.Markdown.InlineCursor import Lean.Data.Markdown.Text
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
uint8_t l_Lean_Markdown_InlineCursor_isEmpty___redArg(lean_object*);
uint32_t l_Lean_Markdown_InlineCursor_front(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_InlineCursor_drop1(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_InlineCursor_front_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_isAsciiPunctuation(uint32_t);
lean_object* l_Lean_Markdown_InlineCursor_charSubslice_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_InlineSource_linesBetween(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Markdown_subsliceClamped___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Markdown_parseLinkDestination_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Markdown_parseLinkDestination_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkDestination_x3f___closed__0___boxed__const__1;
static lean_once_cell_t l_Lean_Markdown_parseLinkDestination_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Markdown_parseLinkDestination_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkDestination_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkDestination_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkTitle_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkTitle_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Markdown_parseLinkDestination_x3f_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint32_t v___x_8_; uint32_t v___x_9_; uint8_t v___x_10_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_unbox_uint32(v_val_6_);
v___x_9_ = lean_unbox_uint32(v_val_7_);
v___x_10_ = lean_uint32_dec_eq(v___x_8_, v___x_9_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Markdown_parseLinkDestination_x3f_spec__0___boxed(lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_instBEqOption_beq___at___00Lean_Markdown_parseLinkDestination_x3f_spec__0(v_x_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_x_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg___lam__0(lean_object* v_fst_15_, lean_object* v_snd_16_, lean_object* v_00___17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v_fst_15_);
lean_ctor_set(v___x_18_, 1, v_snd_16_);
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
v___x_20_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg(lean_object* v_s_21_, lean_object* v_a_22_){
_start:
{
lean_object* v___y_24_; lean_object* v_fst_37_; lean_object* v_snd_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_101_; 
v_fst_37_ = lean_ctor_get(v_a_22_, 0);
v_snd_38_ = lean_ctor_get(v_a_22_, 1);
v_isSharedCheck_101_ = !lean_is_exclusive(v_a_22_);
if (v_isSharedCheck_101_ == 0)
{
v___x_40_ = v_a_22_;
v_isShared_41_ = v_isSharedCheck_101_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_snd_38_);
lean_inc(v_fst_37_);
lean_dec(v_a_22_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_101_;
goto v_resetjp_39_;
}
v___jp_23_:
{
if (lean_obj_tag(v___y_24_) == 0)
{
lean_object* v___x_25_; 
v___x_25_ = lean_box(0);
return v___x_25_;
}
else
{
lean_object* v_val_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_36_; 
v_val_26_ = lean_ctor_get(v___y_24_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___y_24_);
if (v_isSharedCheck_36_ == 0)
{
v___x_28_ = v___y_24_;
v_isShared_29_ = v_isSharedCheck_36_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_val_26_);
lean_dec(v___y_24_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_36_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
if (lean_obj_tag(v_val_26_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; 
v_a_30_ = lean_ctor_get(v_val_26_, 0);
lean_inc(v_a_30_);
lean_dec_ref_known(v_val_26_, 1);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v_a_30_);
v___x_32_ = v___x_28_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_a_30_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
else
{
lean_object* v_a_34_; 
lean_del_object(v___x_28_);
v_a_34_ = lean_ctor_get(v_val_26_, 0);
lean_inc(v_a_34_);
lean_dec_ref_known(v_val_26_, 1);
v_a_22_ = v_a_34_;
goto _start;
}
}
}
}
v_resetjp_39_:
{
uint8_t v___x_42_; 
v___x_42_ = l_Lean_Markdown_InlineCursor_isEmpty___redArg(v_fst_37_);
if (v___x_42_ == 0)
{
lean_object* v_parenDepth_43_; uint32_t v___x_47_; lean_object* v___x_48_; uint32_t v___x_88_; uint8_t v___x_89_; 
v_parenDepth_43_ = lean_unsigned_to_nat(0u);
v___x_47_ = l_Lean_Markdown_InlineCursor_front(v_s_21_, v_fst_37_);
lean_inc(v_fst_37_);
v___x_48_ = l_Lean_Markdown_InlineCursor_drop1(v_s_21_, v_fst_37_);
v___x_88_ = 92;
v___x_89_ = lean_uint32_dec_eq(v___x_47_, v___x_88_);
if (v___x_89_ == 0)
{
goto v___jp_49_;
}
else
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Markdown_InlineCursor_front_x3f(v_s_21_, v___x_48_);
if (lean_obj_tag(v___x_90_) == 0)
{
goto v___jp_49_;
}
else
{
lean_object* v_val_91_; uint32_t v___x_92_; uint8_t v___x_93_; 
v_val_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_val_91_);
lean_dec_ref_known(v___x_90_, 1);
v___x_92_ = lean_unbox_uint32(v_val_91_);
lean_dec(v_val_91_);
v___x_93_ = l_Lean_Markdown_isAsciiPunctuation(v___x_92_);
if (v___x_93_ == 0)
{
goto v___jp_49_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_del_object(v___x_40_);
lean_dec(v_fst_37_);
v___x_94_ = l_Lean_Markdown_InlineCursor_drop1(v_s_21_, v___x_48_);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v_snd_38_);
v_a_22_ = v___x_95_;
goto _start;
}
}
}
v___jp_44_:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_box(0);
v___x_46_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg___lam__0(v_fst_37_, v_snd_38_, v___x_45_);
v___y_24_ = v___x_46_;
goto v___jp_23_;
}
v___jp_49_:
{
uint32_t v___x_50_; uint8_t v___x_51_; 
v___x_50_ = 32;
v___x_51_ = lean_uint32_dec_eq(v___x_47_, v___x_50_);
if (v___x_51_ == 0)
{
uint32_t v___x_52_; uint8_t v___x_53_; 
v___x_52_ = 9;
v___x_53_ = lean_uint32_dec_eq(v___x_47_, v___x_52_);
if (v___x_53_ == 0)
{
uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_54_ = 13;
v___x_55_ = lean_uint32_dec_eq(v___x_47_, v___x_54_);
if (v___x_55_ == 0)
{
uint32_t v___x_56_; uint8_t v___x_57_; 
v___x_56_ = 10;
v___x_57_ = lean_uint32_dec_eq(v___x_47_, v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_58_ = lean_unsigned_to_nat(32u);
v___x_59_ = lean_uint32_to_nat(v___x_47_);
v___x_60_ = lean_nat_dec_lt(v___x_59_, v___x_58_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(127u);
v___x_62_ = lean_nat_dec_eq(v___x_59_, v___x_61_);
lean_dec(v___x_59_);
if (v___x_62_ == 0)
{
uint32_t v___x_63_; uint8_t v___x_64_; 
v___x_63_ = 40;
v___x_64_ = lean_uint32_dec_eq(v___x_47_, v___x_63_);
if (v___x_64_ == 0)
{
uint32_t v___x_65_; uint8_t v___x_66_; 
v___x_65_ = 41;
v___x_66_ = lean_uint32_dec_eq(v___x_47_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_68_; 
lean_dec(v_fst_37_);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 0, v___x_48_);
v___x_68_ = v___x_40_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_snd_38_);
v___x_68_ = v_reuseFailAlloc_70_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
v_a_22_ = v___x_68_;
goto _start;
}
}
else
{
uint8_t v___x_71_; 
v___x_71_ = lean_nat_dec_eq(v_snd_38_, v_parenDepth_43_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_75_; 
lean_dec(v_fst_37_);
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_sub(v_snd_38_, v___x_72_);
lean_dec(v_snd_38_);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 1, v___x_73_);
lean_ctor_set(v___x_40_, 0, v___x_48_);
v___x_75_ = v___x_40_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v___x_73_);
v___x_75_ = v_reuseFailAlloc_77_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
v_a_22_ = v___x_75_;
goto _start;
}
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; 
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
v___x_78_ = lean_box(0);
v___x_79_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg___lam__0(v_fst_37_, v_snd_38_, v___x_78_);
v___y_24_ = v___x_79_;
goto v___jp_23_;
}
}
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
lean_dec(v_fst_37_);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_add(v_snd_38_, v___x_80_);
lean_dec(v_snd_38_);
v___x_82_ = lean_nat_dec_lt(v___x_58_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_84_; 
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 1, v___x_81_);
lean_ctor_set(v___x_40_, 0, v___x_48_);
v___x_84_ = v___x_40_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v___x_81_);
v___x_84_ = v_reuseFailAlloc_86_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v_a_22_ = v___x_84_;
goto _start;
}
}
else
{
lean_object* v___x_87_; 
lean_dec(v___x_81_);
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
v___x_87_ = lean_box(0);
return v___x_87_;
}
}
}
else
{
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
goto v___jp_44_;
}
}
else
{
lean_dec(v___x_59_);
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
goto v___jp_44_;
}
}
else
{
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
goto v___jp_44_;
}
}
else
{
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
goto v___jp_44_;
}
}
else
{
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
goto v___jp_44_;
}
}
else
{
lean_dec_ref(v___x_48_);
lean_del_object(v___x_40_);
goto v___jp_44_;
}
}
}
else
{
lean_object* v___x_98_; 
if (v_isShared_41_ == 0)
{
v___x_98_ = v___x_40_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_fst_37_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_snd_38_);
v___x_98_ = v_reuseFailAlloc_100_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg___boxed(lean_object* v_s_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg(v_s_102_, v_a_103_);
lean_dec_ref(v_s_102_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg(lean_object* v_s_105_, lean_object* v_val_106_, lean_object* v___x_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_snd_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_162_; 
v_snd_109_ = lean_ctor_get(v_a_108_, 1);
v_isSharedCheck_162_ = !lean_is_exclusive(v_a_108_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v_a_108_, 0);
lean_dec(v_unused_163_);
v___x_111_ = v_a_108_;
v_isShared_112_ = v_isSharedCheck_162_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_snd_109_);
lean_dec(v_a_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_162_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_box(0);
v___x_114_ = l_Lean_Markdown_InlineCursor_isEmpty___redArg(v_snd_109_);
if (v___x_114_ == 0)
{
uint32_t v___x_115_; lean_object* v___x_116_; uint32_t v___x_149_; uint8_t v___x_150_; 
v___x_115_ = l_Lean_Markdown_InlineCursor_front(v_s_105_, v_snd_109_);
lean_inc(v_snd_109_);
v___x_116_ = l_Lean_Markdown_InlineCursor_drop1(v_s_105_, v_snd_109_);
v___x_149_ = 92;
v___x_150_ = lean_uint32_dec_eq(v___x_115_, v___x_149_);
if (v___x_150_ == 0)
{
goto v___jp_117_;
}
else
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Markdown_InlineCursor_front_x3f(v_s_105_, v___x_116_);
if (lean_obj_tag(v___x_151_) == 0)
{
goto v___jp_117_;
}
else
{
lean_object* v_val_152_; uint32_t v___x_153_; uint8_t v___x_154_; 
v_val_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_val_152_);
lean_dec_ref_known(v___x_151_, 1);
v___x_153_ = lean_unbox_uint32(v_val_152_);
lean_dec(v_val_152_);
v___x_154_ = l_Lean_Markdown_isAsciiPunctuation(v___x_153_);
if (v___x_154_ == 0)
{
goto v___jp_117_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; 
lean_del_object(v___x_111_);
lean_dec(v_snd_109_);
v___x_155_ = l_Lean_Markdown_InlineCursor_drop1(v_s_105_, v___x_116_);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_113_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v_a_108_ = v___x_156_;
goto _start;
}
}
}
v___jp_117_:
{
uint32_t v___x_118_; uint8_t v___x_119_; 
v___x_118_ = 62;
v___x_119_ = lean_uint32_dec_eq(v___x_115_, v___x_118_);
if (v___x_119_ == 0)
{
uint32_t v___x_120_; uint8_t v___x_121_; 
lean_dec(v_snd_109_);
v___x_120_ = 60;
v___x_121_ = lean_uint32_dec_eq(v___x_115_, v___x_120_);
if (v___x_121_ == 0)
{
uint32_t v___x_122_; uint8_t v___x_123_; 
v___x_122_ = 10;
v___x_123_ = lean_uint32_dec_eq(v___x_115_, v___x_122_);
if (v___x_123_ == 0)
{
uint32_t v___x_124_; uint8_t v___x_125_; 
v___x_124_ = 13;
v___x_125_ = lean_uint32_dec_eq(v___x_115_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_127_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v___x_116_);
lean_ctor_set(v___x_111_, 0, v___x_113_);
v___x_127_ = v___x_111_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v___x_116_);
v___x_127_ = v_reuseFailAlloc_129_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v_a_108_ = v___x_127_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_116_);
lean_del_object(v___x_111_);
lean_dec(v___x_107_);
lean_dec_ref(v_val_106_);
return v___x_113_;
}
}
else
{
lean_dec_ref(v___x_116_);
lean_del_object(v___x_111_);
lean_dec(v___x_107_);
lean_dec_ref(v_val_106_);
return v___x_113_;
}
}
else
{
lean_dec_ref(v___x_116_);
lean_del_object(v___x_111_);
lean_dec(v___x_107_);
lean_dec_ref(v_val_106_);
return v___x_113_;
}
}
else
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_Markdown_InlineCursor_charSubslice_x3f(v_s_105_, v_snd_109_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_dec_ref(v___x_116_);
lean_del_object(v___x_111_);
lean_dec(v_snd_109_);
lean_dec(v___x_107_);
lean_dec_ref(v_val_106_);
return v___x_113_;
}
else
{
lean_object* v_val_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_148_; 
v_val_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_148_ == 0)
{
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_148_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_val_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_148_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v_startPos_135_; lean_object* v___x_137_; 
v_startPos_135_ = lean_ctor_get(v_snd_109_, 2);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v_val_131_);
lean_ctor_set(v___x_111_, 0, v_val_106_);
v___x_137_ = v___x_111_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_val_106_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v_val_131_);
v___x_137_ = v_reuseFailAlloc_147_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_139_; 
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 0, v___x_137_);
v___x_139_ = v___x_133_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_146_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
lean_inc(v_startPos_135_);
v___x_140_ = l_Lean_Markdown_subsliceClamped___redArg(v___x_107_, v_startPos_135_);
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_139_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_116_);
v___x_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v_snd_109_);
v___x_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_159_; 
lean_dec(v___x_107_);
lean_dec_ref(v_val_106_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_113_);
v___x_159_ = v___x_111_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_snd_109_);
v___x_159_ = v_reuseFailAlloc_161_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg___boxed(lean_object* v_s_164_, lean_object* v_val_165_, lean_object* v___x_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg(v_s_164_, v_val_165_, v___x_166_, v_a_167_);
lean_dec_ref(v_s_164_);
return v_res_168_;
}
}
static lean_object* _init_l_Lean_Markdown_parseLinkDestination_x3f___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_169_; lean_object* v___x_170_; 
v___x_169_ = 60;
v___x_170_ = lean_box_uint32(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Markdown_parseLinkDestination_x3f___closed__0(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = l_Lean_Markdown_parseLinkDestination_x3f___closed__0___boxed__const__1;
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkDestination_x3f(lean_object* v_s_173_, lean_object* v_cur_174_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_175_ = l_Lean_Markdown_InlineCursor_front_x3f(v_s_173_, v_cur_174_);
v___x_176_ = lean_obj_once(&l_Lean_Markdown_parseLinkDestination_x3f___closed__0, &l_Lean_Markdown_parseLinkDestination_x3f___closed__0_once, _init_l_Lean_Markdown_parseLinkDestination_x3f___closed__0);
v___x_177_ = l_instBEqOption_beq___at___00Lean_Markdown_parseLinkDestination_x3f_spec__0(v___x_175_, v___x_176_);
lean_dec(v___x_175_);
if (v___x_177_ == 0)
{
lean_object* v_startPos_178_; lean_object* v_parenDepth_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_startPos_178_ = lean_ctor_get(v_cur_174_, 2);
lean_inc(v_startPos_178_);
v_parenDepth_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_cur_174_);
lean_ctor_set(v___x_180_, 1, v_parenDepth_179_);
v___x_181_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg(v_s_173_, v___x_180_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v___x_182_; 
lean_dec(v_startPos_178_);
v___x_182_ = lean_box(0);
return v___x_182_;
}
else
{
lean_object* v_val_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_205_; 
v_val_183_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_205_ == 0)
{
v___x_185_ = v___x_181_;
v_isShared_186_ = v_isSharedCheck_205_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_val_183_);
lean_dec(v___x_181_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_205_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v_fst_187_; lean_object* v_snd_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_204_; 
v_fst_187_ = lean_ctor_get(v_val_183_, 0);
v_snd_188_ = lean_ctor_get(v_val_183_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_val_183_);
if (v_isSharedCheck_204_ == 0)
{
v___x_190_ = v_val_183_;
v_isShared_191_ = v_isSharedCheck_204_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_snd_188_);
lean_inc(v_fst_187_);
lean_dec(v_val_183_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_204_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
uint8_t v___x_192_; 
v___x_192_ = lean_nat_dec_eq(v_snd_188_, v_parenDepth_179_);
lean_dec(v_snd_188_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
lean_del_object(v___x_190_);
lean_dec(v_fst_187_);
lean_del_object(v___x_185_);
lean_dec(v_startPos_178_);
v___x_193_ = lean_box(0);
return v___x_193_;
}
else
{
lean_object* v_startPos_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_199_; 
v_startPos_194_ = lean_ctor_get(v_fst_187_, 2);
v___x_195_ = lean_box(0);
lean_inc(v_startPos_194_);
v___x_196_ = l_Lean_Markdown_subsliceClamped___redArg(v_startPos_178_, v_startPos_194_);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_195_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 1, v_fst_187_);
lean_ctor_set(v___x_190_, 0, v___x_197_);
v___x_199_ = v___x_190_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_fst_187_);
v___x_199_ = v_reuseFailAlloc_203_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_201_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_199_);
v___x_201_ = v___x_185_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Markdown_InlineCursor_charSubslice_x3f(v_s_173_, v_cur_174_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v___x_207_; 
lean_dec_ref(v_cur_174_);
v___x_207_ = lean_box(0);
return v___x_207_;
}
else
{
lean_object* v_val_208_; lean_object* v___x_209_; lean_object* v_startPos_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_val_208_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_val_208_);
lean_dec_ref_known(v___x_206_, 1);
v___x_209_ = l_Lean_Markdown_InlineCursor_drop1(v_s_173_, v_cur_174_);
v_startPos_210_ = lean_ctor_get(v___x_209_, 2);
lean_inc(v_startPos_210_);
v___x_211_ = lean_box(0);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v___x_209_);
v___x_213_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg(v_s_173_, v_val_208_, v_startPos_210_, v___x_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
return v___x_211_;
}
else
{
lean_object* v_val_214_; lean_object* v_fst_215_; 
v_val_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_val_214_);
lean_dec_ref_known(v___x_213_, 1);
v_fst_215_ = lean_ctor_get(v_val_214_, 0);
lean_inc(v_fst_215_);
lean_dec(v_val_214_);
return v_fst_215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkDestination_x3f___boxed(lean_object* v_s_216_, lean_object* v_cur_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_Markdown_parseLinkDestination_x3f(v_s_216_, v_cur_217_);
lean_dec_ref(v_s_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1(lean_object* v_s_219_, lean_object* v_inst_220_, lean_object* v_a_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___redArg(v_s_219_, v_a_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1___boxed(lean_object* v_s_223_, lean_object* v_inst_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__1(v_s_223_, v_inst_224_, v_a_225_);
lean_dec_ref(v_s_223_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2(lean_object* v_s_227_, lean_object* v_val_228_, lean_object* v___x_229_, lean_object* v_inst_230_, lean_object* v_a_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___redArg(v_s_227_, v_val_228_, v___x_229_, v_a_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2___boxed(lean_object* v_s_233_, lean_object* v_val_234_, lean_object* v___x_235_, lean_object* v_inst_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkDestination_x3f_spec__2(v_s_233_, v_val_234_, v___x_235_, v_inst_236_, v_a_237_);
lean_dec_ref(v_s_233_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg(lean_object* v_s_239_, uint32_t v_closerChar_240_, lean_object* v___x_241_, lean_object* v_val_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_snd_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_292_; 
v_snd_244_ = lean_ctor_get(v_a_243_, 1);
v_isSharedCheck_292_ = !lean_is_exclusive(v_a_243_);
if (v_isSharedCheck_292_ == 0)
{
lean_object* v_unused_293_; 
v_unused_293_ = lean_ctor_get(v_a_243_, 0);
lean_dec(v_unused_293_);
v___x_246_ = v_a_243_;
v_isShared_247_ = v_isSharedCheck_292_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_snd_244_);
lean_dec(v_a_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_292_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_box(0);
v___x_249_ = l_Lean_Markdown_InlineCursor_isEmpty___redArg(v_snd_244_);
if (v___x_249_ == 0)
{
uint32_t v___x_250_; lean_object* v___x_251_; uint32_t v___x_279_; uint8_t v___x_280_; 
v___x_250_ = l_Lean_Markdown_InlineCursor_front(v_s_239_, v_snd_244_);
lean_inc(v_snd_244_);
v___x_251_ = l_Lean_Markdown_InlineCursor_drop1(v_s_239_, v_snd_244_);
v___x_279_ = 92;
v___x_280_ = lean_uint32_dec_eq(v___x_250_, v___x_279_);
if (v___x_280_ == 0)
{
goto v___jp_257_;
}
else
{
lean_object* v___x_281_; 
v___x_281_ = l_Lean_Markdown_InlineCursor_front_x3f(v_s_239_, v___x_251_);
if (lean_obj_tag(v___x_281_) == 0)
{
goto v___jp_257_;
}
else
{
lean_object* v_val_282_; uint32_t v___x_283_; uint8_t v___x_284_; 
v_val_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_val_282_);
lean_dec_ref_known(v___x_281_, 1);
v___x_283_ = lean_unbox_uint32(v_val_282_);
lean_dec(v_val_282_);
v___x_284_ = l_Lean_Markdown_isAsciiPunctuation(v___x_283_);
if (v___x_284_ == 0)
{
goto v___jp_257_;
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; 
lean_del_object(v___x_246_);
lean_dec(v_snd_244_);
v___x_285_ = l_Lean_Markdown_InlineCursor_drop1(v_s_239_, v___x_251_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_248_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v_a_243_ = v___x_286_;
goto _start;
}
}
}
v___jp_252_:
{
lean_object* v___x_254_; 
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 1, v___x_251_);
lean_ctor_set(v___x_246_, 0, v___x_248_);
v___x_254_ = v___x_246_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v___x_251_);
v___x_254_ = v_reuseFailAlloc_256_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
v_a_243_ = v___x_254_;
goto _start;
}
}
v___jp_257_:
{
uint8_t v___x_258_; 
v___x_258_ = lean_uint32_dec_eq(v___x_250_, v_closerChar_240_);
if (v___x_258_ == 0)
{
uint32_t v___x_259_; uint8_t v___x_260_; 
lean_dec(v_snd_244_);
v___x_259_ = 40;
v___x_260_ = lean_uint32_dec_eq(v___x_250_, v___x_259_);
if (v___x_260_ == 0)
{
goto v___jp_252_;
}
else
{
uint32_t v___x_261_; uint8_t v___x_262_; 
v___x_261_ = 41;
v___x_262_ = lean_uint32_dec_eq(v_closerChar_240_, v___x_261_);
if (v___x_262_ == 0)
{
goto v___jp_252_;
}
else
{
lean_dec_ref(v___x_251_);
lean_del_object(v___x_246_);
lean_dec_ref(v_val_242_);
lean_dec(v___x_241_);
return v___x_248_;
}
}
}
else
{
lean_object* v___x_263_; 
lean_del_object(v___x_246_);
v___x_263_ = l_Lean_Markdown_InlineCursor_charSubslice_x3f(v_s_239_, v_snd_244_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_dec_ref(v___x_251_);
lean_dec(v_snd_244_);
lean_dec_ref(v_val_242_);
lean_dec(v___x_241_);
return v___x_248_;
}
else
{
lean_object* v_val_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_278_; 
v_val_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_278_ == 0)
{
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_278_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_val_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_278_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v_source_268_; lean_object* v_startPos_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v_source_268_ = lean_ctor_get(v_snd_244_, 0);
v_startPos_269_ = lean_ctor_get(v_snd_244_, 2);
lean_inc(v_startPos_269_);
v___x_270_ = l_Lean_Markdown_InlineSource_linesBetween(v_s_239_, v_source_268_, v___x_241_, v_startPos_269_);
v___x_271_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_271_, 0, v_val_242_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
lean_ctor_set(v___x_271_, 2, v_val_264_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_251_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_272_);
v___x_274_ = v___x_266_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_277_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v_snd_244_);
v___x_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
}
}
}
}
else
{
lean_object* v___x_289_; 
lean_dec_ref(v_val_242_);
lean_dec(v___x_241_);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v___x_248_);
v___x_289_ = v___x_246_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_snd_244_);
v___x_289_ = v_reuseFailAlloc_291_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; 
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg___boxed(lean_object* v_s_294_, lean_object* v_closerChar_295_, lean_object* v___x_296_, lean_object* v_val_297_, lean_object* v_a_298_){
_start:
{
uint32_t v_closerChar_boxed_299_; lean_object* v_res_300_; 
v_closerChar_boxed_299_ = lean_unbox_uint32(v_closerChar_295_);
lean_dec(v_closerChar_295_);
v_res_300_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg(v_s_294_, v_closerChar_boxed_299_, v___x_296_, v_val_297_, v_a_298_);
lean_dec_ref(v_s_294_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkTitle_x3f(lean_object* v_s_301_, lean_object* v_cur_302_){
_start:
{
uint32_t v_closerChar_304_; lean_object* v___x_315_; 
v___x_315_ = l_Lean_Markdown_InlineCursor_front_x3f(v_s_301_, v_cur_302_);
if (lean_obj_tag(v___x_315_) == 1)
{
lean_object* v_val_316_; uint32_t v___x_317_; uint32_t v___x_318_; uint8_t v___x_319_; 
v_val_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_val_316_);
lean_dec_ref_known(v___x_315_, 1);
v___x_317_ = 34;
v___x_318_ = lean_unbox_uint32(v_val_316_);
v___x_319_ = lean_uint32_dec_eq(v___x_318_, v___x_317_);
if (v___x_319_ == 0)
{
uint32_t v___x_320_; uint32_t v___x_321_; uint8_t v___x_322_; 
v___x_320_ = 39;
v___x_321_ = lean_unbox_uint32(v_val_316_);
v___x_322_ = lean_uint32_dec_eq(v___x_321_, v___x_320_);
if (v___x_322_ == 0)
{
uint32_t v___x_323_; uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_323_ = 40;
v___x_324_ = lean_unbox_uint32(v_val_316_);
lean_dec(v_val_316_);
v___x_325_ = lean_uint32_dec_eq(v___x_324_, v___x_323_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
lean_dec_ref(v_cur_302_);
v___x_326_ = lean_box(0);
return v___x_326_;
}
else
{
uint32_t v___x_327_; 
v___x_327_ = 41;
v_closerChar_304_ = v___x_327_;
goto v___jp_303_;
}
}
else
{
lean_dec(v_val_316_);
v_closerChar_304_ = v___x_320_;
goto v___jp_303_;
}
}
else
{
lean_dec(v_val_316_);
v_closerChar_304_ = v___x_317_;
goto v___jp_303_;
}
}
else
{
lean_object* v___x_328_; 
lean_dec(v___x_315_);
lean_dec_ref(v_cur_302_);
v___x_328_ = lean_box(0);
return v___x_328_;
}
v___jp_303_:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Markdown_InlineCursor_charSubslice_x3f(v_s_301_, v_cur_302_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v___x_306_; 
lean_dec_ref(v_cur_302_);
v___x_306_ = lean_box(0);
return v___x_306_;
}
else
{
lean_object* v_val_307_; lean_object* v_endExclusive_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_val_307_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_val_307_);
lean_dec_ref_known(v___x_305_, 1);
v_endExclusive_308_ = lean_ctor_get(v_val_307_, 1);
lean_inc(v_endExclusive_308_);
v___x_309_ = l_Lean_Markdown_InlineCursor_drop1(v_s_301_, v_cur_302_);
v___x_310_ = lean_box(0);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___x_309_);
v___x_312_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg(v_s_301_, v_closerChar_304_, v_endExclusive_308_, v_val_307_, v___x_311_);
if (lean_obj_tag(v___x_312_) == 0)
{
return v___x_310_;
}
else
{
lean_object* v_val_313_; lean_object* v_fst_314_; 
v_val_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_val_313_);
lean_dec_ref_known(v___x_312_, 1);
v_fst_314_ = lean_ctor_get(v_val_313_, 0);
lean_inc(v_fst_314_);
lean_dec(v_val_313_);
return v_fst_314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_parseLinkTitle_x3f___boxed(lean_object* v_s_329_, lean_object* v_cur_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Markdown_parseLinkTitle_x3f(v_s_329_, v_cur_330_);
lean_dec_ref(v_s_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0(lean_object* v_s_332_, uint32_t v_closerChar_333_, lean_object* v___x_334_, lean_object* v_val_335_, lean_object* v_inst_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___redArg(v_s_332_, v_closerChar_333_, v___x_334_, v_val_335_, v_a_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0___boxed(lean_object* v_s_339_, lean_object* v_closerChar_340_, lean_object* v___x_341_, lean_object* v_val_342_, lean_object* v_inst_343_, lean_object* v_a_344_){
_start:
{
uint32_t v_closerChar_boxed_345_; lean_object* v_res_346_; 
v_closerChar_boxed_345_ = lean_unbox_uint32(v_closerChar_340_);
lean_dec(v_closerChar_340_);
v_res_346_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Markdown_parseLinkTitle_x3f_spec__0(v_s_339_, v_closerChar_boxed_345_, v___x_341_, v_val_342_, v_inst_343_, v_a_344_);
lean_dec_ref(v_s_339_);
return v_res_346_;
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Inline(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_InlineCursor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Text(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Markdown_Parser_LinkSyntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Inline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_InlineCursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Text(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Markdown_parseLinkDestination_x3f___closed__0___boxed__const__1 = _init_l_Lean_Markdown_parseLinkDestination_x3f___closed__0___boxed__const__1();
lean_mark_persistent(l_Lean_Markdown_parseLinkDestination_x3f___closed__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Markdown_Parser_LinkSyntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Inline(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_InlineCursor(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Text(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Markdown_Parser_LinkSyntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Inline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_InlineCursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Text(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Parser_LinkSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Markdown_Parser_LinkSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Markdown_Parser_LinkSyntax(builtin);
}
#ifdef __cplusplus
}
#endif
