// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.IsRelevant
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Arith.Util import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util import Lean.Meta.Tactic.Grind.Arith.Linear.StructId
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
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isSupportedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isSupportedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__4_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__6_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dvd"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__8_value),LEAN_SCALAR_PTR_LITERAL(255, 71, 229, 107, 63, 192, 93, 62)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__9_value),LEAN_SCALAR_PTR_LITERAL(233, 16, 181, 127, 123, 63, 3, 18)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__11_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__12_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__14_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__14_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isRelevantPred___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__15_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isRelevantPred___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isSupportedType(lean_object* v_00_u03b1_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___x_17_; 
lean_inc_ref(v_00_u03b1_1_);
v___x_17_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(v_00_u03b1_1_, v_a_9_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; uint8_t v___x_19_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_a_18_);
lean_dec_ref_known(v___x_17_, 1);
v___x_19_ = lean_unbox(v_a_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_00_u03b1_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
v_a_21_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_20_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_20_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
if (lean_obj_tag(v_a_21_) == 0)
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v_a_18_);
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_18_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
else
{
lean_dec_ref_known(v_a_21_, 1);
lean_del_object(v___x_23_);
lean_dec(v_a_18_);
goto v___jp_13_;
}
}
}
else
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_36_; 
lean_dec(v_a_18_);
v_a_29_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_36_ == 0)
{
v___x_31_ = v___x_20_;
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_20_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
else
{
lean_dec(v_a_18_);
lean_dec_ref(v_00_u03b1_1_);
goto v___jp_13_;
}
}
else
{
lean_dec_ref(v_00_u03b1_1_);
return v___x_17_;
}
v___jp_13_:
{
uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = 1;
v___x_15_ = lean_box(v___x_14_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isSupportedType___boxed(lean_object* v_00_u03b1_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_Meta_Grind_Arith_isSupportedType(v_00_u03b1_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
lean_dec_ref(v_a_44_);
lean_dec(v_a_43_);
lean_dec_ref(v_a_42_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec(v_a_38_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred(lean_object* v_e_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = l_Lean_Expr_cleanupAnnotations(v_e_77_);
lean_dec_ref(v_e_77_);
v___x_94_ = l_Lean_Expr_isApp(v___x_93_);
if (v___x_94_ == 0)
{
lean_dec_ref(v___x_93_);
goto v___jp_89_;
}
else
{
lean_object* v_arg_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_arg_95_ = lean_ctor_get(v___x_93_, 1);
lean_inc_ref(v_arg_95_);
v___x_96_ = l_Lean_Expr_appFnCleanup___redArg(v___x_93_);
lean_dec_ref(v___x_93_);
v___x_97_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__1));
v___x_98_ = l_Lean_Expr_isConstOf(v___x_96_, v___x_97_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = l_Lean_Expr_isApp(v___x_96_);
if (v___x_99_ == 0)
{
lean_dec_ref(v___x_96_);
lean_dec_ref(v_arg_95_);
goto v___jp_89_;
}
else
{
lean_object* v_arg_100_; lean_object* v_q_102_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v___y_107_; lean_object* v___y_108_; lean_object* v___y_109_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_arg_100_ = lean_ctor_get(v___x_96_, 1);
lean_inc_ref(v_arg_100_);
v___x_117_ = l_Lean_Expr_appFnCleanup___redArg(v___x_96_);
lean_dec_ref(v___x_96_);
v___x_118_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__3));
v___x_119_ = l_Lean_Expr_isConstOf(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__5));
v___x_121_ = l_Lean_Expr_isConstOf(v___x_117_, v___x_120_);
if (v___x_121_ == 0)
{
uint8_t v___x_122_; 
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_95_);
v___x_122_ = l_Lean_Expr_isApp(v___x_117_);
if (v___x_122_ == 0)
{
lean_dec_ref(v___x_117_);
goto v___jp_89_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = l_Lean_Expr_appFnCleanup___redArg(v___x_117_);
v___x_124_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__7));
v___x_125_ = l_Lean_Expr_isConstOf(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
uint8_t v___x_126_; 
lean_dec_ref(v___x_117_);
v___x_126_ = l_Lean_Expr_isApp(v___x_123_);
if (v___x_126_ == 0)
{
lean_dec_ref(v___x_123_);
goto v___jp_89_;
}
else
{
lean_object* v_arg_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v_arg_127_ = lean_ctor_get(v___x_123_, 1);
lean_inc_ref(v_arg_127_);
v___x_128_ = l_Lean_Expr_appFnCleanup___redArg(v___x_123_);
lean_dec_ref(v___x_123_);
v___x_129_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__10));
v___x_130_ = l_Lean_Expr_isConstOf(v___x_128_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__13));
v___x_132_ = l_Lean_Expr_isConstOf(v___x_128_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isRelevantPred___closed__16));
v___x_134_ = l_Lean_Expr_isConstOf(v___x_128_, v___x_133_);
lean_dec_ref(v___x_128_);
if (v___x_134_ == 0)
{
lean_dec_ref(v_arg_127_);
goto v___jp_89_;
}
else
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Meta_Grind_Arith_isSupportedType(v_arg_127_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_);
return v___x_135_;
}
}
else
{
lean_object* v___x_136_; 
lean_dec_ref(v___x_128_);
v___x_136_ = l_Lean_Meta_Grind_Arith_isSupportedType(v_arg_127_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_);
return v___x_136_;
}
}
else
{
lean_object* v___x_137_; 
lean_dec_ref(v___x_128_);
v___x_137_ = l_Lean_Meta_Grind_Arith_isSupportedType(v_arg_127_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_);
return v___x_137_;
}
}
}
else
{
lean_object* v_arg_138_; lean_object* v___x_139_; 
lean_dec_ref(v___x_123_);
v_arg_138_ = lean_ctor_get(v___x_117_, 1);
lean_inc_ref(v_arg_138_);
lean_dec_ref(v___x_117_);
v___x_139_ = l_Lean_Meta_Grind_Arith_isSupportedType(v_arg_138_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_);
return v___x_139_;
}
}
}
else
{
lean_dec_ref(v___x_117_);
v_q_102_ = v_arg_95_;
v___y_103_ = v_a_78_;
v___y_104_ = v_a_79_;
v___y_105_ = v_a_80_;
v___y_106_ = v_a_81_;
v___y_107_ = v_a_82_;
v___y_108_ = v_a_83_;
v___y_109_ = v_a_84_;
v___y_110_ = v_a_85_;
v___y_111_ = v_a_86_;
v___y_112_ = v_a_87_;
goto v___jp_101_;
}
}
else
{
lean_dec_ref(v___x_117_);
v_q_102_ = v_arg_95_;
v___y_103_ = v_a_78_;
v___y_104_ = v_a_79_;
v___y_105_ = v_a_80_;
v___y_106_ = v_a_81_;
v___y_107_ = v_a_82_;
v___y_108_ = v_a_83_;
v___y_109_ = v_a_84_;
v___y_110_ = v_a_85_;
v___y_111_ = v_a_86_;
v___y_112_ = v_a_87_;
goto v___jp_101_;
}
v___jp_101_:
{
lean_object* v___x_113_; 
v___x_113_ = l_Lean_Meta_Grind_Arith_isRelevantPred(v_arg_100_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; uint8_t v___x_115_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v___x_115_ = lean_unbox(v_a_114_);
if (v___x_115_ == 0)
{
lean_dec_ref_known(v___x_113_, 1);
v_e_77_ = v_q_102_;
v_a_78_ = v___y_103_;
v_a_79_ = v___y_104_;
v_a_80_ = v___y_105_;
v_a_81_ = v___y_106_;
v_a_82_ = v___y_107_;
v_a_83_ = v___y_108_;
v_a_84_ = v___y_109_;
v_a_85_ = v___y_110_;
v_a_86_ = v___y_111_;
v_a_87_ = v___y_112_;
goto _start;
}
else
{
lean_dec_ref(v_q_102_);
return v___x_113_;
}
}
else
{
lean_dec_ref(v_q_102_);
return v___x_113_;
}
}
}
}
else
{
lean_dec_ref(v___x_96_);
v_e_77_ = v_arg_95_;
goto _start;
}
}
v___jp_89_:
{
uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = 0;
v___x_91_ = lean_box(v___x_90_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isRelevantPred___boxed(lean_object* v_e_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_Meta_Grind_Arith_isRelevantPred(v_e_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec(v_a_142_);
return v_res_153_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_IsRelevant(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_IsRelevant(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_IsRelevant(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_IsRelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_IsRelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_IsRelevant(builtin);
}
#ifdef __cplusplus
}
#endif
