// Lean compiler output
// Module: Lean.Meta.Match.Value
// Imports: public import Lean.Meta.LitValues
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFloatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint64_t lean_float_to_bits(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFloat32Value_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_float32_to_bits(float);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFinValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBitVecValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getStringValue_x3f(lean_object*);
lean_object* l_Lean_Meta_getCharValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getUInt8Value_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getUInt16Value_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getUInt32Value_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getUInt64Value_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatchValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatchValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_normMatchValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lean_Meta_normMatchValue___closed__0 = (const lean_object*)&l_Lean_Meta_normMatchValue___closed__0_value;
static const lean_string_object l_Lean_Meta_normMatchValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofBits"};
static const lean_object* l_Lean_Meta_normMatchValue___closed__1 = (const lean_object*)&l_Lean_Meta_normMatchValue___closed__1_value;
static const lean_ctor_object l_Lean_Meta_normMatchValue___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_normMatchValue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_ctor_object l_Lean_Meta_normMatchValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_normMatchValue___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_normMatchValue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 142, 56, 46, 8, 221, 246, 128)}};
static const lean_object* l_Lean_Meta_normMatchValue___closed__2 = (const lean_object*)&l_Lean_Meta_normMatchValue___closed__2_value;
static lean_once_cell_t l_Lean_Meta_normMatchValue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_normMatchValue___closed__3;
static const lean_string_object l_Lean_Meta_normMatchValue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l_Lean_Meta_normMatchValue___closed__4 = (const lean_object*)&l_Lean_Meta_normMatchValue___closed__4_value;
static const lean_ctor_object l_Lean_Meta_normMatchValue___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_normMatchValue___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_ctor_object l_Lean_Meta_normMatchValue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_normMatchValue___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_normMatchValue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(100, 203, 214, 18, 203, 3, 136, 149)}};
static const lean_object* l_Lean_Meta_normMatchValue___closed__5 = (const lean_object*)&l_Lean_Meta_normMatchValue___closed__5_value;
static lean_once_cell_t l_Lean_Meta_normMatchValue___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_normMatchValue___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_normMatchValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normMatchValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatchValue(lean_object* v_e_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_54_; lean_object* v_a_55_; lean_object* v___x_56_; 
v___x_54_ = l_Lean_instantiateMVars___at___00Lean_Meta_isMatchValue_spec__0___redArg(v_e_44_, v_a_46_);
v_a_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc(v_a_55_);
lean_dec_ref(v___x_54_);
v___x_56_ = l_Lean_Meta_getNatValue_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
lean_inc(v_a_57_);
lean_dec_ref_known(v___x_56_, 1);
if (lean_obj_tag(v_a_57_) == 0)
{
uint8_t v___x_58_; lean_object* v___x_59_; 
v___x_58_ = 0;
lean_inc(v_a_55_);
v___x_59_ = l_Lean_Meta_getIntValue_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_59_) == 0)
{
lean_object* v_a_60_; 
v_a_60_ = lean_ctor_get(v___x_59_, 0);
lean_inc(v_a_60_);
lean_dec_ref_known(v___x_59_, 1);
if (lean_obj_tag(v_a_60_) == 0)
{
lean_object* v___x_61_; 
lean_inc(v_a_55_);
v___x_61_ = l_Lean_Meta_getFinValue_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
lean_inc(v_a_62_);
lean_dec_ref_known(v___x_61_, 1);
if (lean_obj_tag(v_a_62_) == 0)
{
lean_object* v___x_63_; 
lean_inc(v_a_55_);
v___x_63_ = l_Lean_Meta_getBitVecValue_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_a_64_);
lean_dec_ref_known(v___x_63_, 1);
if (lean_obj_tag(v_a_64_) == 0)
{
lean_object* v___x_65_; 
lean_inc(v_a_55_);
v___x_65_ = l_Lean_Meta_getStringValue_x3f(v_a_55_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v___x_66_; 
lean_inc(v_a_55_);
v___x_66_ = l_Lean_Meta_getCharValue_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_66_) == 0)
{
lean_object* v_a_67_; 
v_a_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_a_67_);
lean_dec_ref_known(v___x_66_, 1);
if (lean_obj_tag(v_a_67_) == 0)
{
lean_object* v___x_68_; 
lean_inc(v_a_55_);
v___x_68_ = l_Lean_Meta_getUInt8Value_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v___x_68_, 1);
if (lean_obj_tag(v_a_69_) == 0)
{
lean_object* v___x_70_; 
lean_inc(v_a_55_);
v___x_70_ = l_Lean_Meta_getUInt16Value_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc(v_a_71_);
lean_dec_ref_known(v___x_70_, 1);
if (lean_obj_tag(v_a_71_) == 0)
{
lean_object* v___x_72_; 
lean_inc(v_a_55_);
v___x_72_ = l_Lean_Meta_getUInt32Value_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_72_, 1);
if (lean_obj_tag(v_a_73_) == 0)
{
lean_object* v___x_74_; 
lean_inc(v_a_55_);
v___x_74_ = l_Lean_Meta_getUInt64Value_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_75_);
lean_dec_ref_known(v___x_74_, 1);
if (lean_obj_tag(v_a_75_) == 0)
{
lean_object* v___x_76_; 
lean_inc(v_a_55_);
v___x_76_ = l_Lean_Meta_getFloatValue_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_76_) == 0)
{
lean_object* v_a_77_; 
v_a_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_a_77_);
lean_dec_ref_known(v___x_76_, 1);
if (lean_obj_tag(v_a_77_) == 0)
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_getFloat32Value_x3f(v_a_55_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_87_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_87_ == 0)
{
v___x_81_ = v___x_78_;
v_isShared_82_ = v_isSharedCheck_87_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_a_79_);
lean_dec(v___x_78_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_87_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
if (lean_obj_tag(v_a_79_) == 0)
{
lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_83_ = lean_box(v___x_58_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 0, v___x_83_);
v___x_85_ = v___x_81_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
else
{
lean_dec_ref_known(v_a_79_, 1);
lean_del_object(v___x_81_);
goto v___jp_50_;
}
}
}
else
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_a_88_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_78_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_78_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_77_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
lean_dec(v_a_55_);
v_a_96_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_76_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_76_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_75_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v_a_55_);
v_a_104_ = lean_ctor_get(v___x_74_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_74_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_74_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_74_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
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
else
{
lean_dec_ref_known(v_a_73_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
lean_dec(v_a_55_);
v_a_112_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_72_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_72_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_71_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
lean_dec(v_a_55_);
v_a_120_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_70_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_70_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_69_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec(v_a_55_);
v_a_128_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_68_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_68_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_67_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec(v_a_55_);
v_a_136_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_66_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_66_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_65_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_dec_ref_known(v_a_64_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
lean_dec(v_a_55_);
v_a_144_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_63_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_63_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_62_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
lean_dec(v_a_55_);
v_a_152_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_61_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_61_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_60_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec(v_a_55_);
v_a_160_ = lean_ctor_get(v___x_59_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_59_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_59_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_57_, 1);
lean_dec(v_a_55_);
goto v___jp_50_;
}
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
lean_dec(v_a_55_);
v_a_168_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_56_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_56_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
v___jp_50_:
{
uint8_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = 1;
v___x_52_ = lean_box(v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatchValue___boxed(lean_object* v_e_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_Meta_isMatchValue(v_e_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
return v_res_182_;
}
}
static lean_object* _init_l_Lean_Meta_normMatchValue___closed__3(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = lean_box(0);
v___x_189_ = ((lean_object*)(l_Lean_Meta_normMatchValue___closed__2));
v___x_190_ = l_Lean_mkConst(v___x_189_, v___x_188_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Meta_normMatchValue___closed__6(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_195_ = lean_box(0);
v___x_196_ = ((lean_object*)(l_Lean_Meta_normMatchValue___closed__5));
v___x_197_ = l_Lean_mkConst(v___x_196_, v___x_195_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normMatchValue(lean_object* v_e_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___x_204_; 
lean_inc_ref(v_e_198_);
v___x_204_ = l_Lean_Meta_getFloatValue_x3f(v_e_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_246_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_246_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_246_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_246_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
if (lean_obj_tag(v_a_205_) == 1)
{
lean_object* v_val_209_; lean_object* v___x_210_; double v___x_211_; uint64_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_217_; 
lean_dec_ref(v_e_198_);
v_val_209_ = lean_ctor_get(v_a_205_, 0);
lean_inc(v_val_209_);
lean_dec_ref_known(v_a_205_, 1);
v___x_210_ = lean_obj_once(&l_Lean_Meta_normMatchValue___closed__3, &l_Lean_Meta_normMatchValue___closed__3_once, _init_l_Lean_Meta_normMatchValue___closed__3);
v___x_211_ = lean_unbox_float(v_val_209_);
lean_dec(v_val_209_);
v___x_212_ = lean_float_to_bits(v___x_211_);
v___x_213_ = lean_uint64_to_nat(v___x_212_);
v___x_214_ = l_Lean_mkRawNatLit(v___x_213_);
v___x_215_ = l_Lean_Expr_app___override(v___x_210_, v___x_214_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_215_);
v___x_217_ = v___x_207_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
else
{
lean_object* v___x_219_; 
lean_del_object(v___x_207_);
lean_dec(v_a_205_);
lean_inc_ref(v_e_198_);
v___x_219_ = l_Lean_Meta_getFloat32Value_x3f(v_e_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_237_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_237_ == 0)
{
v___x_222_ = v___x_219_;
v_isShared_223_ = v_isSharedCheck_237_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_237_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
if (lean_obj_tag(v_a_220_) == 1)
{
lean_object* v_val_224_; lean_object* v___x_225_; float v___x_226_; uint32_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
lean_dec_ref(v_e_198_);
v_val_224_ = lean_ctor_get(v_a_220_, 0);
lean_inc(v_val_224_);
lean_dec_ref_known(v_a_220_, 1);
v___x_225_ = lean_obj_once(&l_Lean_Meta_normMatchValue___closed__6, &l_Lean_Meta_normMatchValue___closed__6_once, _init_l_Lean_Meta_normMatchValue___closed__6);
v___x_226_ = lean_unbox_float32(v_val_224_);
lean_dec(v_val_224_);
v___x_227_ = lean_float32_to_bits(v___x_226_);
v___x_228_ = lean_uint32_to_nat(v___x_227_);
v___x_229_ = l_Lean_mkRawNatLit(v___x_228_);
v___x_230_ = l_Lean_Expr_app___override(v___x_225_, v___x_229_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_230_);
v___x_232_ = v___x_222_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
else
{
lean_object* v___x_235_; 
lean_dec(v_a_220_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v_e_198_);
v___x_235_ = v___x_222_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_e_198_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_dec_ref(v_e_198_);
v_a_238_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_219_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_219_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v_e_198_);
v_a_247_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_204_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_204_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normMatchValue___boxed(lean_object* v_e_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Meta_normMatchValue(v_e_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
return v_res_261_;
}
}
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_Value(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_Value(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_Value(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_Value(builtin);
}
#ifdef __cplusplus
}
#endif
