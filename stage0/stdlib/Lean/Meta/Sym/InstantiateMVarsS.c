// Lean compiler output
// Module: Lean.Meta.Sym.InstantiateMVarsS
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.InstantiateS
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
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_betaS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg(v_e_30_, v___y_34_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___boxed(lean_object* v_e_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0(v_e_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object* v_e_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
uint8_t v___x_56_; 
v___x_56_ = l_Lean_Expr_hasMVar(v_e_48_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; 
v___x_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_57_, 0, v_e_48_);
return v___x_57_;
}
else
{
lean_object* v___x_58_; lean_object* v_a_59_; lean_object* v___x_60_; 
v___x_58_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg(v_e_48_, v_a_52_);
v_a_59_ = lean_ctor_get(v___x_58_, 0);
lean_inc(v_a_59_);
lean_dec_ref(v___x_58_);
v___x_60_ = l_Lean_Meta_Sym_shareCommon(v_a_59_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsS___boxed(lean_object* v_e_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Meta_Sym_instantiateMVarsS(v_e_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(lean_object* v_e_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = l_Lean_Expr_getAppFn(v_e_70_);
v___x_79_ = l_Lean_Expr_isMVar(v___x_78_);
lean_dec_ref(v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v_e_70_);
return v___x_80_;
}
else
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_Meta_Sym_instantiateMVarsS(v_e_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_, v_a_76_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS___boxed(lean_object* v_e_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Meta_Sym_instantiateMVarsIfMVarAppS(v_e_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg(lean_object* v_mvarId_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_mctx_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = lean_st_ref_get(v___y_92_);
v_mctx_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_95_);
lean_dec(v___x_94_);
v___x_96_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_95_, v_mvarId_91_);
lean_dec_ref(v_mctx_95_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg(v_mvarId_98_, v___y_99_);
lean_dec(v___y_99_);
lean_dec(v_mvarId_98_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0(lean_object* v_mvarId_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg(v_mvarId_102_, v___y_106_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___boxed(lean_object* v_mvarId_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0(v_mvarId_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v_mvarId_111_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg(lean_object* v_mvarId_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_mctx_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_123_ = lean_st_ref_get(v___y_121_);
v_mctx_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc_ref(v_mctx_124_);
lean_dec(v___x_123_);
v___x_125_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_124_, v_mvarId_120_);
lean_dec_ref(v_mctx_124_);
v___x_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg___boxed(lean_object* v_mvarId_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg(v_mvarId_127_, v___y_128_);
lean_dec(v___y_128_);
lean_dec(v_mvarId_127_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1(lean_object* v_mvarId_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg(v_mvarId_131_, v___y_135_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___boxed(lean_object* v_mvarId_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1(v_mvarId_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v_mvarId_140_);
return v_res_148_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0(void){
_start:
{
lean_object* v___x_149_; lean_object* v_dummy_150_; 
v___x_149_ = lean_box(0);
v_dummy_150_ = l_Lean_Expr_sort___override(v___x_149_);
return v_dummy_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(lean_object* v_e_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Expr_getAppFn(v_e_151_);
if (lean_obj_tag(v___x_162_) == 2)
{
lean_object* v_mvarId_163_; lean_object* v___x_164_; lean_object* v_a_165_; 
v_mvarId_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_mvarId_163_);
lean_dec_ref_known(v___x_162_, 1);
v___x_164_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__0___redArg(v_mvarId_163_, v_a_155_);
v_a_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_a_165_);
lean_dec_ref(v___x_164_);
if (lean_obj_tag(v_a_165_) == 1)
{
lean_object* v_val_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_mvarId_163_);
v_val_166_ = lean_ctor_get(v_a_165_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_206_ == 0)
{
v___x_168_ = v_a_165_;
v_isShared_169_ = v_isSharedCheck_206_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_val_166_);
lean_dec(v_a_165_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_206_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_Meta_Sym_instantiateMVarsS(v_val_166_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v_dummy_172_; lean_object* v_nargs_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_a_171_);
lean_dec_ref_known(v___x_170_, 1);
v_dummy_172_ = lean_obj_once(&l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0, &l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0_once, _init_l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0);
v_nargs_173_ = l_Lean_Expr_getAppNumArgs(v_e_151_);
lean_inc(v_nargs_173_);
v___x_174_ = lean_mk_array(v_nargs_173_, v_dummy_172_);
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_sub(v_nargs_173_, v___x_175_);
lean_dec(v_nargs_173_);
v___x_177_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_151_, v___x_174_, v___x_176_);
v___x_178_ = l_Lean_Meta_Sym_betaS(v_a_171_, v___x_177_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_189_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_189_ == 0)
{
v___x_181_ = v___x_178_;
v_isShared_182_ = v_isSharedCheck_189_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_189_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v_a_179_);
v___x_184_ = v___x_168_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_188_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_186_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_184_);
v___x_186_ = v___x_181_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
lean_del_object(v___x_168_);
v_a_190_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_178_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_178_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_del_object(v___x_168_);
lean_dec_ref(v_e_151_);
v_a_198_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_170_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_170_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
else
{
lean_object* v___x_207_; lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_279_; 
lean_dec(v_a_165_);
v___x_207_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f_spec__1___redArg(v_mvarId_163_, v_a_155_);
lean_dec(v_mvarId_163_);
v_a_208_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_279_ == 0)
{
v___x_210_ = v___x_207_;
v_isShared_211_ = v_isSharedCheck_279_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_207_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_279_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
if (lean_obj_tag(v_a_208_) == 1)
{
lean_object* v_val_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_274_; 
lean_del_object(v___x_210_);
v_val_212_ = lean_ctor_get(v_a_208_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v_a_208_);
if (v_isSharedCheck_274_ == 0)
{
v___x_214_ = v_a_208_;
v_isShared_215_ = v_isSharedCheck_274_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_val_212_);
lean_dec(v_a_208_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_274_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_fvars_216_; lean_object* v_mvarIdPending_217_; lean_object* v_dummy_218_; lean_object* v_nargs_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_fvars_216_ = lean_ctor_get(v_val_212_, 0);
lean_inc_ref(v_fvars_216_);
v_mvarIdPending_217_ = lean_ctor_get(v_val_212_, 1);
lean_inc(v_mvarIdPending_217_);
lean_dec(v_val_212_);
v_dummy_218_ = lean_obj_once(&l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0, &l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0_once, _init_l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___closed__0);
v_nargs_219_ = l_Lean_Expr_getAppNumArgs(v_e_151_);
lean_inc(v_nargs_219_);
v___x_220_ = lean_mk_array(v_nargs_219_, v_dummy_218_);
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_sub(v_nargs_219_, v___x_221_);
lean_dec(v_nargs_219_);
v___x_223_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_151_, v___x_220_, v___x_222_);
v___x_224_ = lean_array_get_size(v___x_223_);
v___x_225_ = lean_array_get_size(v_fvars_216_);
v___x_226_ = lean_nat_dec_lt(v___x_224_, v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_a_229_; uint8_t v___x_230_; 
v___x_227_ = l_Lean_mkMVar(v_mvarIdPending_217_);
v___x_228_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_instantiateMVarsS_spec__0___redArg(v___x_227_, v_a_155_);
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref(v___x_228_);
v___x_230_ = l_Lean_Expr_hasExprMVar(v_a_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = lean_expr_abstract(v_a_229_, v_fvars_216_);
lean_dec_ref(v_fvars_216_);
lean_dec(v_a_229_);
v___x_232_ = l_Lean_Meta_Sym_shareCommon(v___x_231_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
v___x_234_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_223_);
v___x_235_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_a_233_, v___x_234_, v___x_225_, v___x_223_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_235_, 1);
v___x_237_ = l_Array_extract___redArg(v___x_223_, v___x_225_, v___x_224_);
lean_dec_ref(v___x_223_);
v___x_238_ = l_Lean_Meta_Sym_betaS(v_a_236_, v___x_237_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_249_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_249_ == 0)
{
v___x_241_ = v___x_238_;
v_isShared_242_ = v_isSharedCheck_249_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_249_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v_a_239_);
v___x_244_ = v___x_214_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_246_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v___x_244_);
v___x_246_ = v___x_241_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_del_object(v___x_214_);
v_a_250_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_238_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_238_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v___x_223_);
lean_del_object(v___x_214_);
v_a_258_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_235_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_235_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
lean_dec_ref(v___x_223_);
lean_del_object(v___x_214_);
v_a_266_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_232_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_232_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
lean_dec(v_a_229_);
lean_dec_ref(v___x_223_);
lean_dec_ref(v_fvars_216_);
lean_del_object(v___x_214_);
goto v___jp_159_;
}
}
else
{
lean_dec_ref(v___x_223_);
lean_dec(v_mvarIdPending_217_);
lean_dec_ref(v_fvars_216_);
lean_del_object(v___x_214_);
goto v___jp_159_;
}
}
}
else
{
lean_object* v___x_275_; lean_object* v___x_277_; 
lean_dec(v_a_208_);
lean_dec_ref(v_e_151_);
v___x_275_ = lean_box(0);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_275_);
v___x_277_ = v___x_210_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec_ref(v___x_162_);
lean_dec_ref(v_e_151_);
v___x_280_ = lean_box(0);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
v___jp_159_:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f___boxed(lean_object* v_e_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(v_e_282_, v_a_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_);
lean_dec(v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
return v_res_290_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
}
#ifdef __cplusplus
}
#endif
