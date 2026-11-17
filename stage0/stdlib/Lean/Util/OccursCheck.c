// Lean compiler output
// Module: Lean.Util.OccursCheck
// Imports: public import Lean.MetavarContext
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
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadMCtxOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_lift___redArg___lam__0(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_getDelayedMVarAssignment_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExprMVarAssignment_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ExceptT_lift___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__1 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_occursCheck___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___redArg___closed__0;
static lean_once_cell_t l_Lean_occursCheck___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_occursCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0(lean_object* v_inst_3_, lean_object* v_00___4_, lean_object* v___y_5_){
_start:
{
lean_object* v_toApplicative_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_16_; 
v_toApplicative_6_ = lean_ctor_get(v_inst_3_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v_inst_3_);
if (v_isSharedCheck_16_ == 0)
{
lean_object* v_unused_17_; 
v_unused_17_ = lean_ctor_get(v_inst_3_, 1);
lean_dec(v_unused_17_);
v___x_8_ = v_inst_3_;
v_isShared_9_ = v_isSharedCheck_16_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_toApplicative_6_);
lean_dec(v_inst_3_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_16_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v_toPure_10_; lean_object* v___x_11_; lean_object* v___x_13_; 
v_toPure_10_ = lean_ctor_get(v_toApplicative_6_, 1);
lean_inc(v_toPure_10_);
lean_dec_ref(v_toApplicative_6_);
v___x_11_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0___closed__0));
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 1, v___y_5_);
lean_ctor_set(v___x_8_, 0, v___x_11_);
v___x_13_ = v___x_8_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v___x_11_);
lean_ctor_set(v_reuseFailAlloc_15_, 1, v___y_5_);
v___x_13_ = v_reuseFailAlloc_15_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
lean_object* v___x_14_; 
v___x_14_ = lean_apply_2(v_toPure_10_, lean_box(0), v___x_13_);
return v___x_14_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__6(lean_object* v_toPure_18_, lean_object* v_____x_19_){
_start:
{
lean_object* v_fst_20_; lean_object* v_snd_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_30_; 
v_fst_20_ = lean_ctor_get(v_____x_19_, 0);
v_snd_21_ = lean_ctor_get(v_____x_19_, 1);
v_isSharedCheck_30_ = !lean_is_exclusive(v_____x_19_);
if (v_isSharedCheck_30_ == 0)
{
v___x_23_ = v_____x_19_;
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_snd_21_);
lean_inc(v_fst_20_);
lean_dec(v_____x_19_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; lean_object* v___x_27_; 
v___x_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_25_, 0, v_fst_20_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_25_);
v___x_27_ = v___x_23_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_25_);
lean_ctor_set(v_reuseFailAlloc_29_, 1, v_snd_21_);
v___x_27_ = v_reuseFailAlloc_29_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; 
v___x_28_ = lean_apply_2(v_toPure_18_, lean_box(0), v___x_27_);
return v___x_28_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__7(lean_object* v_toPure_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v_e_34_, lean_object* v_toBind_35_, lean_object* v___f_36_, lean_object* v___f_37_, lean_object* v_____x_38_){
_start:
{
lean_object* v_fst_39_; 
v_fst_39_ = lean_ctor_get(v_____x_38_, 0);
lean_inc(v_fst_39_);
if (lean_obj_tag(v_fst_39_) == 0)
{
lean_object* v_snd_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_56_; 
lean_dec(v___f_37_);
lean_dec(v___f_36_);
lean_dec(v_toBind_35_);
lean_dec_ref(v_e_34_);
lean_dec_ref(v___x_33_);
lean_dec_ref(v___x_32_);
v_snd_40_ = lean_ctor_get(v_____x_38_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v_____x_38_);
if (v_isSharedCheck_56_ == 0)
{
lean_object* v_unused_57_; 
v_unused_57_ = lean_ctor_get(v_____x_38_, 0);
lean_dec(v_unused_57_);
v___x_42_ = v_____x_38_;
v_isShared_43_ = v_isSharedCheck_56_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_snd_40_);
lean_dec(v_____x_38_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_56_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_55_; 
v_a_44_ = lean_ctor_get(v_fst_39_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_fst_39_);
if (v_isSharedCheck_55_ == 0)
{
v___x_46_ = v_fst_39_;
v_isShared_47_ = v_isSharedCheck_55_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v_fst_39_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_55_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_49_; 
if (v_isShared_47_ == 0)
{
v___x_49_ = v___x_46_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_44_);
v___x_49_ = v_reuseFailAlloc_54_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
lean_object* v___x_51_; 
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 0, v___x_49_);
v___x_51_ = v___x_42_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v_snd_40_);
v___x_51_ = v_reuseFailAlloc_53_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; 
v___x_52_ = lean_apply_2(v_toPure_31_, lean_box(0), v___x_51_);
return v___x_52_;
}
}
}
}
}
else
{
lean_object* v_snd_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_75_; 
v_snd_58_ = lean_ctor_get(v_____x_38_, 1);
v_isSharedCheck_75_ = !lean_is_exclusive(v_____x_38_);
if (v_isSharedCheck_75_ == 0)
{
lean_object* v_unused_76_; 
v_unused_76_ = lean_ctor_get(v_____x_38_, 0);
lean_dec(v_unused_76_);
v___x_60_ = v_____x_38_;
v_isShared_61_ = v_isSharedCheck_75_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_snd_58_);
lean_dec(v_____x_38_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_75_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v_a_62_; uint8_t v___x_63_; 
v_a_62_ = lean_ctor_get(v_fst_39_, 0);
lean_inc(v_a_62_);
lean_dec_ref_known(v_fst_39_, 1);
lean_inc_ref(v_e_34_);
lean_inc_ref(v___x_33_);
lean_inc_ref(v___x_32_);
v___x_63_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_32_, v___x_33_, v_a_62_, v_e_34_);
lean_dec(v_a_62_);
if (v___x_63_ == 0)
{
lean_object* v___f_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
lean_dec(v___f_37_);
lean_inc(v_toPure_31_);
v___f_64_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__6), 2, 1);
lean_closure_set(v___f_64_, 0, v_toPure_31_);
v___x_65_ = lean_box(0);
v___x_66_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_32_, v___x_33_, v_snd_58_, v_e_34_, v___x_65_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 1, v___x_66_);
lean_ctor_set(v___x_60_, 0, v___x_65_);
v___x_68_ = v___x_60_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_65_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v___x_66_);
v___x_68_ = v_reuseFailAlloc_72_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_apply_2(v_toPure_31_, lean_box(0), v___x_68_);
lean_inc(v_toBind_35_);
v___x_70_ = lean_apply_4(v_toBind_35_, lean_box(0), lean_box(0), v___x_69_, v___f_64_);
v___x_71_ = lean_apply_4(v_toBind_35_, lean_box(0), lean_box(0), v___x_70_, v___f_36_);
return v___x_71_;
}
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; 
lean_del_object(v___x_60_);
lean_dec(v___f_36_);
lean_dec(v_toBind_35_);
lean_dec_ref(v_e_34_);
lean_dec_ref(v___x_33_);
lean_dec_ref(v___x_32_);
lean_dec(v_toPure_31_);
v___x_73_ = lean_box(0);
v___x_74_ = lean_apply_2(v___f_37_, v___x_73_, v_snd_58_);
return v___x_74_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__8(lean_object* v_toPure_77_, lean_object* v_____x_78_){
_start:
{
lean_object* v_fst_79_; lean_object* v_snd_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_89_; 
v_fst_79_ = lean_ctor_get(v_____x_78_, 0);
v_snd_80_ = lean_ctor_get(v_____x_78_, 1);
v_isSharedCheck_89_ = !lean_is_exclusive(v_____x_78_);
if (v_isSharedCheck_89_ == 0)
{
v___x_82_ = v_____x_78_;
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_snd_80_);
lean_inc(v_fst_79_);
lean_dec(v_____x_78_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v_fst_79_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v___x_84_);
v___x_86_ = v___x_82_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_snd_80_);
v___x_86_ = v_reuseFailAlloc_88_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; 
v___x_87_ = lean_apply_2(v_toPure_77_, lean_box(0), v___x_86_);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__2(lean_object* v_toPure_90_, lean_object* v_inst_91_, lean_object* v_inst_92_, lean_object* v_mvarId_93_, lean_object* v_body_94_, lean_object* v_____x_95_){
_start:
{
lean_object* v_fst_96_; 
v_fst_96_ = lean_ctor_get(v_____x_95_, 0);
if (lean_obj_tag(v_fst_96_) == 0)
{
lean_object* v___x_97_; 
lean_dec_ref(v_body_94_);
lean_dec(v_mvarId_93_);
lean_dec_ref(v_inst_92_);
lean_dec_ref(v_inst_91_);
v___x_97_ = lean_apply_2(v_toPure_90_, lean_box(0), v_____x_95_);
return v___x_97_;
}
else
{
lean_object* v_snd_98_; lean_object* v___x_99_; 
lean_dec(v_toPure_90_);
v_snd_98_ = lean_ctor_get(v_____x_95_, 1);
lean_inc(v_snd_98_);
lean_dec_ref(v_____x_95_);
v___x_99_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_91_, v_inst_92_, v_mvarId_93_, v_body_94_, v_snd_98_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__3(lean_object* v_toPure_100_, lean_object* v_inst_101_, lean_object* v_inst_102_, lean_object* v_mvarId_103_, lean_object* v_value_104_, lean_object* v_toBind_105_, lean_object* v___f_106_, lean_object* v_____x_107_){
_start:
{
lean_object* v_fst_108_; 
v_fst_108_ = lean_ctor_get(v_____x_107_, 0);
if (lean_obj_tag(v_fst_108_) == 0)
{
lean_object* v___x_109_; 
lean_dec(v___f_106_);
lean_dec(v_toBind_105_);
lean_dec_ref(v_value_104_);
lean_dec(v_mvarId_103_);
lean_dec_ref(v_inst_102_);
lean_dec_ref(v_inst_101_);
v___x_109_ = lean_apply_2(v_toPure_100_, lean_box(0), v_____x_107_);
return v___x_109_;
}
else
{
lean_object* v_snd_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
lean_dec(v_toPure_100_);
v_snd_110_ = lean_ctor_get(v_____x_107_, 1);
lean_inc(v_snd_110_);
lean_dec_ref(v_____x_107_);
v___x_111_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_101_, v_inst_102_, v_mvarId_103_, v_value_104_, v_snd_110_);
v___x_112_ = lean_apply_4(v_toBind_105_, lean_box(0), lean_box(0), v___x_111_, v___f_106_);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__4(lean_object* v_toPure_113_, lean_object* v_inst_114_, lean_object* v_inst_115_, lean_object* v_mvarId_116_, lean_object* v_arg_117_, lean_object* v_____x_118_){
_start:
{
lean_object* v_fst_119_; 
v_fst_119_ = lean_ctor_get(v_____x_118_, 0);
if (lean_obj_tag(v_fst_119_) == 0)
{
lean_object* v___x_120_; 
lean_dec_ref(v_arg_117_);
lean_dec(v_mvarId_116_);
lean_dec_ref(v_inst_115_);
lean_dec_ref(v_inst_114_);
v___x_120_ = lean_apply_2(v_toPure_113_, lean_box(0), v_____x_118_);
return v___x_120_;
}
else
{
lean_object* v_snd_121_; lean_object* v___x_122_; 
lean_dec(v_toPure_113_);
v_snd_121_ = lean_ctor_get(v_____x_118_, 1);
lean_inc(v_snd_121_);
lean_dec_ref(v_____x_118_);
v___x_122_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_114_, v_inst_115_, v_mvarId_116_, v_arg_117_, v_snd_121_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___lam__0(lean_object* v_toApplicative_124_, lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_mvarId_127_, lean_object* v_____x_128_){
_start:
{
lean_object* v_fst_129_; 
v_fst_129_ = lean_ctor_get(v_____x_128_, 0);
lean_inc(v_fst_129_);
if (lean_obj_tag(v_fst_129_) == 0)
{
lean_object* v_snd_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_mvarId_127_);
lean_dec_ref(v_inst_126_);
lean_dec_ref(v_inst_125_);
v_snd_130_ = lean_ctor_get(v_____x_128_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_____x_128_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; 
v_unused_148_ = lean_ctor_get(v_____x_128_, 0);
lean_dec(v_unused_148_);
v___x_132_ = v_____x_128_;
v_isShared_133_ = v_isSharedCheck_147_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_snd_130_);
lean_dec(v_____x_128_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_147_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_146_; 
v_a_134_ = lean_ctor_get(v_fst_129_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v_fst_129_);
if (v_isSharedCheck_146_ == 0)
{
v___x_136_ = v_fst_129_;
v_isShared_137_ = v_isSharedCheck_146_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v_fst_129_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_146_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v_toPure_138_; lean_object* v___x_140_; 
v_toPure_138_ = lean_ctor_get(v_toApplicative_124_, 1);
lean_inc(v_toPure_138_);
lean_dec_ref(v_toApplicative_124_);
if (v_isShared_137_ == 0)
{
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_134_);
v___x_140_ = v_reuseFailAlloc_145_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_142_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 0, v___x_140_);
v___x_142_ = v___x_132_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_snd_130_);
v___x_142_ = v_reuseFailAlloc_144_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = lean_apply_2(v_toPure_138_, lean_box(0), v___x_142_);
return v___x_143_;
}
}
}
}
}
else
{
lean_object* v_a_149_; 
v_a_149_ = lean_ctor_get(v_fst_129_, 0);
lean_inc(v_a_149_);
lean_dec_ref_known(v_fst_129_, 1);
if (lean_obj_tag(v_a_149_) == 0)
{
lean_object* v_snd_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_160_; 
lean_dec(v_mvarId_127_);
lean_dec_ref(v_inst_126_);
lean_dec_ref(v_inst_125_);
v_snd_150_ = lean_ctor_get(v_____x_128_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v_____x_128_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v_____x_128_, 0);
lean_dec(v_unused_161_);
v___x_152_ = v_____x_128_;
v_isShared_153_ = v_isSharedCheck_160_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_snd_150_);
lean_dec(v_____x_128_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_160_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v_toPure_154_; lean_object* v___x_155_; lean_object* v___x_157_; 
v_toPure_154_ = lean_ctor_get(v_toApplicative_124_, 1);
lean_inc(v_toPure_154_);
lean_dec_ref(v_toApplicative_124_);
v___x_155_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0___closed__0));
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_155_);
v___x_157_ = v___x_152_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_snd_150_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; 
v___x_158_ = lean_apply_2(v_toPure_154_, lean_box(0), v___x_157_);
return v___x_158_;
}
}
}
else
{
lean_object* v_val_162_; lean_object* v_snd_163_; lean_object* v_mvarIdPending_164_; lean_object* v___x_165_; 
lean_dec_ref(v_toApplicative_124_);
v_val_162_ = lean_ctor_get(v_a_149_, 0);
lean_inc(v_val_162_);
lean_dec_ref_known(v_a_149_, 1);
v_snd_163_ = lean_ctor_get(v_____x_128_, 1);
lean_inc(v_snd_163_);
lean_dec_ref(v_____x_128_);
v_mvarIdPending_164_ = lean_ctor_get(v_val_162_, 1);
lean_inc(v_mvarIdPending_164_);
lean_dec(v_val_162_);
v___x_165_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg(v_inst_125_, v_inst_126_, v_mvarId_127_, v_mvarIdPending_164_, v_snd_163_);
return v___x_165_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___lam__1(lean_object* v_toApplicative_166_, lean_object* v___x_167_, lean_object* v___x_168_, lean_object* v_mvarId_x27_169_, lean_object* v_toBind_170_, lean_object* v___f_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_mvarId_174_, lean_object* v_____x_175_){
_start:
{
lean_object* v_fst_176_; 
v_fst_176_ = lean_ctor_get(v_____x_175_, 0);
lean_inc(v_fst_176_);
if (lean_obj_tag(v_fst_176_) == 0)
{
lean_object* v_snd_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_194_; 
lean_dec(v_mvarId_174_);
lean_dec_ref(v_inst_173_);
lean_dec_ref(v_inst_172_);
lean_dec(v___f_171_);
lean_dec(v_toBind_170_);
lean_dec(v_mvarId_x27_169_);
lean_dec_ref(v___x_168_);
lean_dec_ref(v___x_167_);
v_snd_177_ = lean_ctor_get(v_____x_175_, 1);
v_isSharedCheck_194_ = !lean_is_exclusive(v_____x_175_);
if (v_isSharedCheck_194_ == 0)
{
lean_object* v_unused_195_; 
v_unused_195_ = lean_ctor_get(v_____x_175_, 0);
lean_dec(v_unused_195_);
v___x_179_ = v_____x_175_;
v_isShared_180_ = v_isSharedCheck_194_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_snd_177_);
lean_dec(v_____x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_194_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_193_; 
v_a_181_ = lean_ctor_get(v_fst_176_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v_fst_176_);
if (v_isSharedCheck_193_ == 0)
{
v___x_183_ = v_fst_176_;
v_isShared_184_ = v_isSharedCheck_193_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v_fst_176_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_193_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v_toPure_185_; lean_object* v___x_187_; 
v_toPure_185_ = lean_ctor_get(v_toApplicative_166_, 1);
lean_inc(v_toPure_185_);
lean_dec_ref(v_toApplicative_166_);
if (v_isShared_184_ == 0)
{
v___x_187_ = v___x_183_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_181_);
v___x_187_ = v_reuseFailAlloc_192_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_187_);
v___x_189_ = v___x_179_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v_snd_177_);
v___x_189_ = v_reuseFailAlloc_191_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; 
v___x_190_ = lean_apply_2(v_toPure_185_, lean_box(0), v___x_189_);
return v___x_190_;
}
}
}
}
}
else
{
lean_object* v_a_196_; 
lean_dec_ref(v_toApplicative_166_);
v_a_196_ = lean_ctor_get(v_fst_176_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v_fst_176_, 1);
if (lean_obj_tag(v_a_196_) == 0)
{
lean_object* v_snd_197_; lean_object* v___x_4648__overap_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec(v_mvarId_174_);
lean_dec_ref(v_inst_173_);
lean_dec_ref(v_inst_172_);
v_snd_197_ = lean_ctor_get(v_____x_175_, 1);
lean_inc(v_snd_197_);
lean_dec_ref(v_____x_175_);
v___x_4648__overap_198_ = l_Lean_getDelayedMVarAssignment_x3f___redArg(v___x_167_, v___x_168_, v_mvarId_x27_169_);
v___x_199_ = lean_apply_1(v___x_4648__overap_198_, v_snd_197_);
v___x_200_ = lean_apply_4(v_toBind_170_, lean_box(0), lean_box(0), v___x_199_, v___f_171_);
return v___x_200_;
}
else
{
lean_object* v_snd_201_; lean_object* v_val_202_; lean_object* v___x_203_; 
lean_dec(v___f_171_);
lean_dec(v_toBind_170_);
lean_dec(v_mvarId_x27_169_);
lean_dec_ref(v___x_168_);
lean_dec_ref(v___x_167_);
v_snd_201_ = lean_ctor_get(v_____x_175_, 1);
lean_inc(v_snd_201_);
lean_dec_ref(v_____x_175_);
v_val_202_ = lean_ctor_get(v_a_196_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v_a_196_, 1);
v___x_203_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_172_, v_inst_173_, v_mvarId_174_, v_val_202_, v_snd_201_);
return v___x_203_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg(lean_object* v_inst_206_, lean_object* v_inst_207_, lean_object* v_mvarId_208_, lean_object* v_mvarId_x27_209_, lean_object* v_a_210_){
_start:
{
lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___f_213_; lean_object* v___f_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v_getMCtx_231_; lean_object* v_modifyMCtx_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___f_235_; lean_object* v___x_236_; lean_object* v___f_237_; lean_object* v___f_238_; lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
lean_inc_ref_n(v_inst_206_, 10);
v___f_211_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_211_, 0, v_inst_206_);
v___f_212_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_212_, 0, v_inst_206_);
v___f_213_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_213_, 0, v_inst_206_);
v___f_214_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_214_, 0, v_inst_206_);
v___x_215_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_215_, 0, lean_box(0));
lean_closure_set(v___x_215_, 1, lean_box(0));
lean_closure_set(v___x_215_, 2, v_inst_206_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___f_211_);
v___x_217_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_217_, 0, lean_box(0));
lean_closure_set(v___x_217_, 1, lean_box(0));
lean_closure_set(v___x_217_, 2, v_inst_206_);
v___x_218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
lean_ctor_set(v___x_218_, 2, v___f_212_);
lean_ctor_set(v___x_218_, 3, v___f_213_);
lean_ctor_set(v___x_218_, 4, v___f_214_);
v___x_219_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_219_, 0, lean_box(0));
lean_closure_set(v___x_219_, 1, lean_box(0));
lean_closure_set(v___x_219_, 2, v_inst_206_);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
lean_inc_ref_n(v___x_220_, 7);
v___f_221_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_221_, 0, v___x_220_);
v___f_222_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_222_, 0, v___x_220_);
v___f_223_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_223_, 0, v___x_220_);
v___f_224_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_224_, 0, v___x_220_);
v___x_225_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_225_, 0, lean_box(0));
lean_closure_set(v___x_225_, 1, lean_box(0));
lean_closure_set(v___x_225_, 2, v___x_220_);
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
lean_ctor_set(v___x_226_, 1, v___f_221_);
v___x_227_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_227_, 0, lean_box(0));
lean_closure_set(v___x_227_, 1, lean_box(0));
lean_closure_set(v___x_227_, 2, v___x_220_);
v___x_228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
lean_ctor_set(v___x_228_, 2, v___f_222_);
lean_ctor_set(v___x_228_, 3, v___f_223_);
lean_ctor_set(v___x_228_, 4, v___f_224_);
v___x_229_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_229_, 0, lean_box(0));
lean_closure_set(v___x_229_, 1, lean_box(0));
lean_closure_set(v___x_229_, 2, v___x_220_);
v___x_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v_getMCtx_231_ = lean_ctor_get(v_inst_207_, 0);
v_modifyMCtx_232_ = lean_ctor_get(v_inst_207_, 1);
v___x_233_ = lean_alloc_closure((void*)(l_ExceptT_lift), 5, 3);
lean_closure_set(v___x_233_, 0, lean_box(0));
lean_closure_set(v___x_233_, 1, lean_box(0));
lean_closure_set(v___x_233_, 2, v___x_220_);
v___x_234_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_234_, 0, lean_box(0));
lean_closure_set(v___x_234_, 1, lean_box(0));
lean_closure_set(v___x_234_, 2, v_inst_206_);
lean_inc(v_modifyMCtx_232_);
v___f_235_ = lean_alloc_closure((void*)(l_Lean_instMonadMCtxOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_235_, 0, v_modifyMCtx_232_);
lean_closure_set(v___f_235_, 1, v___x_234_);
lean_inc(v_getMCtx_231_);
v___x_236_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 5);
lean_closure_set(v___x_236_, 0, lean_box(0));
lean_closure_set(v___x_236_, 1, lean_box(0));
lean_closure_set(v___x_236_, 2, v_inst_206_);
lean_closure_set(v___x_236_, 3, lean_box(0));
lean_closure_set(v___x_236_, 4, v_getMCtx_231_);
v___f_237_ = lean_alloc_closure((void*)(l_Lean_instMonadMCtxOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_237_, 0, v___f_235_);
lean_closure_set(v___f_237_, 1, v___x_233_);
v___f_238_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__0));
v___x_239_ = lean_alloc_closure((void*)(l_StateT_map), 8, 7);
lean_closure_set(v___x_239_, 0, lean_box(0));
lean_closure_set(v___x_239_, 1, lean_box(0));
lean_closure_set(v___x_239_, 2, v_inst_206_);
lean_closure_set(v___x_239_, 3, lean_box(0));
lean_closure_set(v___x_239_, 4, lean_box(0));
lean_closure_set(v___x_239_, 5, v___f_238_);
lean_closure_set(v___x_239_, 6, v___x_236_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___f_237_);
v___x_241_ = l_Lean_instBEqMVarId_beq(v_mvarId_208_, v_mvarId_x27_209_);
if (v___x_241_ == 0)
{
lean_object* v_toApplicative_242_; lean_object* v_toBind_243_; lean_object* v___f_244_; lean_object* v___f_245_; lean_object* v___x_4604__overap_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_toApplicative_242_ = lean_ctor_get(v_inst_206_, 0);
lean_inc_ref_n(v_toApplicative_242_, 2);
v_toBind_243_ = lean_ctor_get(v_inst_206_, 1);
lean_inc_n(v_toBind_243_, 2);
lean_inc(v_mvarId_208_);
lean_inc_ref(v_inst_207_);
lean_inc_ref(v_inst_206_);
v___f_244_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___lam__0), 5, 4);
lean_closure_set(v___f_244_, 0, v_toApplicative_242_);
lean_closure_set(v___f_244_, 1, v_inst_206_);
lean_closure_set(v___f_244_, 2, v_inst_207_);
lean_closure_set(v___f_244_, 3, v_mvarId_208_);
lean_inc(v_mvarId_x27_209_);
lean_inc_ref(v___x_240_);
lean_inc_ref(v___x_230_);
v___f_245_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___lam__1), 10, 9);
lean_closure_set(v___f_245_, 0, v_toApplicative_242_);
lean_closure_set(v___f_245_, 1, v___x_230_);
lean_closure_set(v___f_245_, 2, v___x_240_);
lean_closure_set(v___f_245_, 3, v_mvarId_x27_209_);
lean_closure_set(v___f_245_, 4, v_toBind_243_);
lean_closure_set(v___f_245_, 5, v___f_244_);
lean_closure_set(v___f_245_, 6, v_inst_206_);
lean_closure_set(v___f_245_, 7, v_inst_207_);
lean_closure_set(v___f_245_, 8, v_mvarId_208_);
v___x_4604__overap_246_ = l_Lean_getExprMVarAssignment_x3f___redArg(v___x_230_, v___x_240_, v_mvarId_x27_209_);
v___x_247_ = lean_apply_1(v___x_4604__overap_246_, v_a_210_);
v___x_248_ = lean_apply_4(v_toBind_243_, lean_box(0), lean_box(0), v___x_247_, v___f_245_);
return v___x_248_;
}
else
{
lean_object* v_toApplicative_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_259_; 
lean_dec_ref_known(v___x_240_, 2);
lean_dec_ref_known(v___x_230_, 2);
lean_dec(v_mvarId_x27_209_);
lean_dec(v_mvarId_208_);
lean_dec_ref(v_inst_207_);
v_toApplicative_249_ = lean_ctor_get(v_inst_206_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_inst_206_);
if (v_isSharedCheck_259_ == 0)
{
lean_object* v_unused_260_; 
v_unused_260_ = lean_ctor_get(v_inst_206_, 1);
lean_dec(v_unused_260_);
v___x_251_ = v_inst_206_;
v_isShared_252_ = v_isSharedCheck_259_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_toApplicative_249_);
lean_dec(v_inst_206_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_259_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_toPure_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v_toPure_253_ = lean_ctor_get(v_toApplicative_249_, 1);
lean_inc(v_toPure_253_);
lean_dec_ref(v_toApplicative_249_);
v___x_254_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg___closed__1));
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v_a_210_);
lean_ctor_set(v___x_251_, 0, v___x_254_);
v___x_256_ = v___x_251_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_a_210_);
v___x_256_ = v_reuseFailAlloc_258_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_257_; 
v___x_257_ = lean_apply_2(v_toPure_253_, lean_box(0), v___x_256_);
return v___x_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__5(lean_object* v_toPure_261_, lean_object* v_inst_262_, lean_object* v_inst_263_, lean_object* v_mvarId_264_, lean_object* v_toBind_265_, lean_object* v_e_266_, lean_object* v_____x_267_){
_start:
{
lean_object* v_d_269_; lean_object* v_b_270_; lean_object* v___y_271_; lean_object* v_fst_275_; 
v_fst_275_ = lean_ctor_get(v_____x_267_, 0);
if (lean_obj_tag(v_fst_275_) == 0)
{
lean_object* v___x_276_; 
lean_dec_ref(v_e_266_);
lean_dec(v_toBind_265_);
lean_dec(v_mvarId_264_);
lean_dec_ref(v_inst_263_);
lean_dec_ref(v_inst_262_);
v___x_276_ = lean_apply_2(v_toPure_261_, lean_box(0), v_____x_267_);
return v___x_276_;
}
else
{
switch(lean_obj_tag(v_e_266_))
{
case 11:
{
lean_object* v_snd_277_; lean_object* v_struct_278_; lean_object* v___x_279_; 
lean_dec(v_toBind_265_);
lean_dec(v_toPure_261_);
v_snd_277_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_277_);
lean_dec_ref(v_____x_267_);
v_struct_278_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_struct_278_);
lean_dec_ref_known(v_e_266_, 3);
v___x_279_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_262_, v_inst_263_, v_mvarId_264_, v_struct_278_, v_snd_277_);
return v___x_279_;
}
case 7:
{
lean_object* v_snd_280_; lean_object* v_binderType_281_; lean_object* v_body_282_; 
v_snd_280_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_280_);
lean_dec_ref(v_____x_267_);
v_binderType_281_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_binderType_281_);
v_body_282_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_body_282_);
lean_dec_ref_known(v_e_266_, 3);
v_d_269_ = v_binderType_281_;
v_b_270_ = v_body_282_;
v___y_271_ = v_snd_280_;
goto v___jp_268_;
}
case 6:
{
lean_object* v_snd_283_; lean_object* v_binderType_284_; lean_object* v_body_285_; 
v_snd_283_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_283_);
lean_dec_ref(v_____x_267_);
v_binderType_284_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_binderType_284_);
v_body_285_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_body_285_);
lean_dec_ref_known(v_e_266_, 3);
v_d_269_ = v_binderType_284_;
v_b_270_ = v_body_285_;
v___y_271_ = v_snd_283_;
goto v___jp_268_;
}
case 8:
{
lean_object* v_snd_286_; lean_object* v_type_287_; lean_object* v_value_288_; lean_object* v_body_289_; lean_object* v___f_290_; lean_object* v___f_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_snd_286_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_286_);
lean_dec_ref(v_____x_267_);
v_type_287_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_type_287_);
v_value_288_ = lean_ctor_get(v_e_266_, 2);
lean_inc_ref(v_value_288_);
v_body_289_ = lean_ctor_get(v_e_266_, 3);
lean_inc_ref(v_body_289_);
lean_dec_ref_known(v_e_266_, 4);
lean_inc_n(v_mvarId_264_, 2);
lean_inc_ref_n(v_inst_263_, 2);
lean_inc_ref_n(v_inst_262_, 2);
lean_inc(v_toPure_261_);
v___f_290_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__2), 6, 5);
lean_closure_set(v___f_290_, 0, v_toPure_261_);
lean_closure_set(v___f_290_, 1, v_inst_262_);
lean_closure_set(v___f_290_, 2, v_inst_263_);
lean_closure_set(v___f_290_, 3, v_mvarId_264_);
lean_closure_set(v___f_290_, 4, v_body_289_);
lean_inc(v_toBind_265_);
v___f_291_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__3), 8, 7);
lean_closure_set(v___f_291_, 0, v_toPure_261_);
lean_closure_set(v___f_291_, 1, v_inst_262_);
lean_closure_set(v___f_291_, 2, v_inst_263_);
lean_closure_set(v___f_291_, 3, v_mvarId_264_);
lean_closure_set(v___f_291_, 4, v_value_288_);
lean_closure_set(v___f_291_, 5, v_toBind_265_);
lean_closure_set(v___f_291_, 6, v___f_290_);
v___x_292_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_262_, v_inst_263_, v_mvarId_264_, v_type_287_, v_snd_286_);
v___x_293_ = lean_apply_4(v_toBind_265_, lean_box(0), lean_box(0), v___x_292_, v___f_291_);
return v___x_293_;
}
case 10:
{
lean_object* v_snd_294_; lean_object* v_expr_295_; lean_object* v___x_296_; 
lean_dec(v_toBind_265_);
lean_dec(v_toPure_261_);
v_snd_294_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_294_);
lean_dec_ref(v_____x_267_);
v_expr_295_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_expr_295_);
lean_dec_ref_known(v_e_266_, 2);
v___x_296_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_262_, v_inst_263_, v_mvarId_264_, v_expr_295_, v_snd_294_);
return v___x_296_;
}
case 5:
{
lean_object* v_snd_297_; lean_object* v_fn_298_; lean_object* v_arg_299_; lean_object* v___f_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_snd_297_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_297_);
lean_dec_ref(v_____x_267_);
v_fn_298_ = lean_ctor_get(v_e_266_, 0);
lean_inc_ref(v_fn_298_);
v_arg_299_ = lean_ctor_get(v_e_266_, 1);
lean_inc_ref(v_arg_299_);
lean_dec_ref_known(v_e_266_, 2);
lean_inc(v_mvarId_264_);
lean_inc_ref(v_inst_263_);
lean_inc_ref(v_inst_262_);
v___f_300_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__4), 6, 5);
lean_closure_set(v___f_300_, 0, v_toPure_261_);
lean_closure_set(v___f_300_, 1, v_inst_262_);
lean_closure_set(v___f_300_, 2, v_inst_263_);
lean_closure_set(v___f_300_, 3, v_mvarId_264_);
lean_closure_set(v___f_300_, 4, v_arg_299_);
v___x_301_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_262_, v_inst_263_, v_mvarId_264_, v_fn_298_, v_snd_297_);
v___x_302_ = lean_apply_4(v_toBind_265_, lean_box(0), lean_box(0), v___x_301_, v___f_300_);
return v___x_302_;
}
case 2:
{
lean_object* v_snd_303_; lean_object* v_mvarId_304_; lean_object* v___x_305_; 
lean_dec(v_toBind_265_);
lean_dec(v_toPure_261_);
v_snd_303_ = lean_ctor_get(v_____x_267_, 1);
lean_inc(v_snd_303_);
lean_dec_ref(v_____x_267_);
v_mvarId_304_ = lean_ctor_get(v_e_266_, 0);
lean_inc(v_mvarId_304_);
lean_dec_ref_known(v_e_266_, 1);
v___x_305_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg(v_inst_262_, v_inst_263_, v_mvarId_264_, v_mvarId_304_, v_snd_303_);
return v___x_305_;
}
default: 
{
lean_object* v_snd_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v_e_266_);
lean_dec(v_toBind_265_);
lean_dec(v_mvarId_264_);
lean_dec_ref(v_inst_263_);
lean_dec_ref(v_inst_262_);
v_snd_306_ = lean_ctor_get(v_____x_267_, 1);
v_isSharedCheck_315_ = !lean_is_exclusive(v_____x_267_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; 
v_unused_316_ = lean_ctor_get(v_____x_267_, 0);
lean_dec(v_unused_316_);
v___x_308_ = v_____x_267_;
v_isShared_309_ = v_isSharedCheck_315_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_snd_306_);
lean_dec(v_____x_267_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_315_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0___closed__0));
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 0, v___x_310_);
v___x_312_ = v___x_308_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_310_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_snd_306_);
v___x_312_ = v_reuseFailAlloc_314_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; 
v___x_313_ = lean_apply_2(v_toPure_261_, lean_box(0), v___x_312_);
return v___x_313_;
}
}
}
}
}
v___jp_268_:
{
lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
lean_inc(v_mvarId_264_);
lean_inc_ref(v_inst_263_);
lean_inc_ref(v_inst_262_);
v___f_272_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__1), 6, 5);
lean_closure_set(v___f_272_, 0, v_toPure_261_);
lean_closure_set(v___f_272_, 1, v_inst_262_);
lean_closure_set(v___f_272_, 2, v_inst_263_);
lean_closure_set(v___f_272_, 3, v_mvarId_264_);
lean_closure_set(v___f_272_, 4, v_b_270_);
v___x_273_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_262_, v_inst_263_, v_mvarId_264_, v_d_269_, v___y_271_);
v___x_274_ = lean_apply_4(v_toBind_265_, lean_box(0), lean_box(0), v___x_273_, v___f_272_);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(lean_object* v_inst_319_, lean_object* v_inst_320_, lean_object* v_mvarId_321_, lean_object* v_e_322_, lean_object* v_a_323_){
_start:
{
lean_object* v___f_324_; uint8_t v___x_325_; 
lean_inc_ref(v_inst_319_);
v___f_324_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0), 3, 1);
lean_closure_set(v___f_324_, 0, v_inst_319_);
v___x_325_ = l_Lean_Expr_hasExprMVar(v_e_322_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec_ref(v___f_324_);
lean_dec_ref(v_e_322_);
lean_dec(v_mvarId_321_);
lean_dec_ref(v_inst_320_);
v___x_326_ = lean_box(0);
v___x_327_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__0(v_inst_319_, v___x_326_, v_a_323_);
return v___x_327_;
}
else
{
lean_object* v_toApplicative_328_; lean_object* v_toBind_329_; lean_object* v_toPure_330_; lean_object* v___f_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___f_334_; lean_object* v___f_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_toApplicative_328_ = lean_ctor_get(v_inst_319_, 0);
v_toBind_329_ = lean_ctor_get(v_inst_319_, 1);
lean_inc_n(v_toBind_329_, 4);
v_toPure_330_ = lean_ctor_get(v_toApplicative_328_, 1);
lean_inc_n(v_toPure_330_, 4);
lean_inc_ref(v_e_322_);
v___f_331_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__5), 7, 6);
lean_closure_set(v___f_331_, 0, v_toPure_330_);
lean_closure_set(v___f_331_, 1, v_inst_319_);
lean_closure_set(v___f_331_, 2, v_inst_320_);
lean_closure_set(v___f_331_, 3, v_mvarId_321_);
lean_closure_set(v___f_331_, 4, v_toBind_329_);
lean_closure_set(v___f_331_, 5, v_e_322_);
v___x_332_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__0));
v___x_333_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___closed__1));
v___f_334_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__7), 8, 7);
lean_closure_set(v___f_334_, 0, v_toPure_330_);
lean_closure_set(v___f_334_, 1, v___x_332_);
lean_closure_set(v___f_334_, 2, v___x_333_);
lean_closure_set(v___f_334_, 3, v_e_322_);
lean_closure_set(v___f_334_, 4, v_toBind_329_);
lean_closure_set(v___f_334_, 5, v___f_331_);
lean_closure_set(v___f_334_, 6, v___f_324_);
v___f_335_ = lean_alloc_closure((void*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__8), 2, 1);
lean_closure_set(v___f_335_, 0, v_toPure_330_);
lean_inc_ref(v_a_323_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v_a_323_);
lean_ctor_set(v___x_336_, 1, v_a_323_);
v___x_337_ = lean_apply_2(v_toPure_330_, lean_box(0), v___x_336_);
v___x_338_ = lean_apply_4(v_toBind_329_, lean_box(0), lean_box(0), v___x_337_, v___f_335_);
v___x_339_ = lean_apply_4(v_toBind_329_, lean_box(0), lean_box(0), v___x_338_, v___f_334_);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg___lam__1(lean_object* v_toPure_340_, lean_object* v_inst_341_, lean_object* v_inst_342_, lean_object* v_mvarId_343_, lean_object* v_b_344_, lean_object* v_____x_345_){
_start:
{
lean_object* v_fst_346_; 
v_fst_346_ = lean_ctor_get(v_____x_345_, 0);
if (lean_obj_tag(v_fst_346_) == 0)
{
lean_object* v___x_347_; 
lean_dec_ref(v_b_344_);
lean_dec(v_mvarId_343_);
lean_dec_ref(v_inst_342_);
lean_dec_ref(v_inst_341_);
v___x_347_ = lean_apply_2(v_toPure_340_, lean_box(0), v_____x_345_);
return v___x_347_;
}
else
{
lean_object* v_snd_348_; lean_object* v___x_349_; 
lean_dec(v_toPure_340_);
v_snd_348_ = lean_ctor_get(v_____x_345_, 1);
lean_inc(v_snd_348_);
lean_dec_ref(v_____x_345_);
v___x_349_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_341_, v_inst_342_, v_mvarId_343_, v_b_344_, v_snd_348_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar(lean_object* v_m_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_mvarId_353_, lean_object* v_mvarId_x27_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___redArg(v_inst_351_, v_inst_352_, v_mvarId_353_, v_mvarId_x27_354_, v_a_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit(lean_object* v_m_357_, lean_object* v_inst_358_, lean_object* v_inst_359_, lean_object* v_mvarId_360_, lean_object* v_e_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_358_, v_inst_359_, v_mvarId_360_, v_e_361_, v_a_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___redArg___lam__0(lean_object* v_toPure_364_, uint8_t v___x_365_, lean_object* v_____do__lift_366_){
_start:
{
lean_object* v_fst_367_; 
v_fst_367_ = lean_ctor_get(v_____do__lift_366_, 0);
if (lean_obj_tag(v_fst_367_) == 0)
{
uint8_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_368_ = 0;
v___x_369_ = lean_box(v___x_368_);
v___x_370_ = lean_apply_2(v_toPure_364_, lean_box(0), v___x_369_);
return v___x_370_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_box(v___x_365_);
v___x_372_ = lean_apply_2(v_toPure_364_, lean_box(0), v___x_371_);
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___redArg___lam__0___boxed(lean_object* v_toPure_373_, lean_object* v___x_374_, lean_object* v_____do__lift_375_){
_start:
{
uint8_t v___x_162__boxed_376_; lean_object* v_res_377_; 
v___x_162__boxed_376_ = lean_unbox(v___x_374_);
v_res_377_ = l_Lean_occursCheck___redArg___lam__0(v_toPure_373_, v___x_162__boxed_376_, v_____do__lift_375_);
lean_dec_ref(v_____do__lift_375_);
return v_res_377_;
}
}
static lean_object* _init_l_Lean_occursCheck___redArg___closed__0(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = lean_box(0);
v___x_379_ = lean_unsigned_to_nat(16u);
v___x_380_ = lean_mk_array(v___x_379_, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_occursCheck___redArg___closed__1(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = lean_obj_once(&l_Lean_occursCheck___redArg___closed__0, &l_Lean_occursCheck___redArg___closed__0_once, _init_l_Lean_occursCheck___redArg___closed__0);
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v___x_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___redArg(lean_object* v_inst_384_, lean_object* v_inst_385_, lean_object* v_mvarId_386_, lean_object* v_e_387_){
_start:
{
lean_object* v_toApplicative_388_; lean_object* v_toBind_389_; lean_object* v_toPure_390_; uint8_t v___x_391_; 
v_toApplicative_388_ = lean_ctor_get(v_inst_384_, 0);
v_toBind_389_ = lean_ctor_get(v_inst_384_, 1);
lean_inc(v_toBind_389_);
v_toPure_390_ = lean_ctor_get(v_toApplicative_388_, 1);
v___x_391_ = l_Lean_Expr_hasExprMVar(v_e_387_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
lean_inc(v_toPure_390_);
lean_dec(v_toBind_389_);
lean_dec_ref(v_e_387_);
lean_dec(v_mvarId_386_);
lean_dec_ref(v_inst_385_);
lean_dec_ref(v_inst_384_);
v___x_392_ = 1;
v___x_393_ = lean_box(v___x_392_);
v___x_394_ = lean_apply_2(v_toPure_390_, lean_box(0), v___x_393_);
return v___x_394_;
}
else
{
lean_object* v___x_395_; lean_object* v___f_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_395_ = lean_box(v___x_391_);
lean_inc(v_toPure_390_);
v___f_396_ = lean_alloc_closure((void*)(l_Lean_occursCheck___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_396_, 0, v_toPure_390_);
lean_closure_set(v___f_396_, 1, v___x_395_);
v___x_397_ = lean_obj_once(&l_Lean_occursCheck___redArg___closed__1, &l_Lean_occursCheck___redArg___closed__1_once, _init_l_Lean_occursCheck___redArg___closed__1);
v___x_398_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___redArg(v_inst_384_, v_inst_385_, v_mvarId_386_, v_e_387_, v___x_397_);
v___x_399_ = lean_apply_4(v_toBind_389_, lean_box(0), lean_box(0), v___x_398_, v___f_396_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck(lean_object* v_m_400_, lean_object* v_inst_401_, lean_object* v_inst_402_, lean_object* v_mvarId_403_, lean_object* v_e_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_occursCheck___redArg(v_inst_401_, v_inst_402_, v_mvarId_403_, v_e_404_);
return v___x_405_;
}
}
lean_object* runtime_initialize_Lean_MetavarContext(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_OccursCheck(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_MetavarContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_OccursCheck(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_MetavarContext(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_OccursCheck(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_MetavarContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_OccursCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_OccursCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_OccursCheck(builtin);
}
#ifdef __cplusplus
}
#endif
