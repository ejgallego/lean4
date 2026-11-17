// Lean compiler output
// Module: Lean.Meta.Tactic.CasesOnStuckLHS
// Imports: public import Lean.Meta.Basic import Lean.ProjFns import Lean.Meta.Tactic.Cases
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_RecursorVal_getMajorIdx(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEqHEqLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_casesOnStuckLHS_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_casesOnStuckLHS_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_casesOnStuckLHS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "'casesOnStuckLHS' failed"};
static const lean_object* l_Lean_Meta_casesOnStuckLHS___closed__0 = (const lean_object*)&l_Lean_Meta_casesOnStuckLHS___closed__0_value;
static lean_once_cell_t l_Lean_Meta_casesOnStuckLHS___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_casesOnStuckLHS___closed__1;
static const lean_array_object l_Lean_Meta_casesOnStuckLHS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_casesOnStuckLHS___closed__2 = (const lean_object*)&l_Lean_Meta_casesOnStuckLHS___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg(lean_object* v_declName_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_env_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_env_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_env_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_5_, v_declName_1_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg___boxed(lean_object* v_declName_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg(v_declName_8_, v___y_9_);
lean_dec(v___y_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0(lean_object* v_declName_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg(v_declName_12_, v___y_16_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___boxed(lean_object* v_declName_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0(v_declName_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___closed__0(void){
_start:
{
lean_object* v___x_26_; lean_object* v_dummy_27_; 
v___x_26_ = lean_box(0);
v_dummy_27_ = l_Lean_Expr_sort___override(v___x_26_);
return v_dummy_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f(lean_object* v_e_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Expr_getAppFn(v_e_28_);
if (lean_obj_tag(v___x_40_) == 11)
{
lean_object* v_struct_41_; 
lean_dec_ref(v_e_28_);
v_struct_41_ = lean_ctor_get(v___x_40_, 2);
lean_inc_ref(v_struct_41_);
lean_dec_ref_known(v___x_40_, 3);
v_e_28_ = v_struct_41_;
goto _start;
}
else
{
uint8_t v___x_43_; 
v___x_43_ = l_Lean_Expr_isConst(v___x_40_);
if (v___x_43_ == 0)
{
lean_dec_ref(v___x_40_);
lean_dec_ref(v_e_28_);
goto v___jp_34_;
}
else
{
lean_object* v___x_44_; lean_object* v_declName_45_; lean_object* v_dummy_46_; lean_object* v_nargs_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v_args_51_; lean_object* v___x_52_; 
v___x_44_ = l_Lean_instInhabitedExpr;
v_declName_45_ = l_Lean_Expr_constName_x21(v___x_40_);
v_dummy_46_ = lean_obj_once(&l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___closed__0, &l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___closed__0);
v_nargs_47_ = l_Lean_Expr_getAppNumArgs(v_e_28_);
lean_inc(v_nargs_47_);
v___x_48_ = lean_mk_array(v_nargs_47_, v_dummy_46_);
v___x_49_ = lean_unsigned_to_nat(1u);
v___x_50_ = lean_nat_sub(v_nargs_47_, v___x_49_);
lean_dec(v_nargs_47_);
v_args_51_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_28_, v___x_48_, v___x_50_);
v___x_52_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f_spec__0___redArg(v_declName_45_, v_a_32_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_87_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_87_ == 0)
{
v___x_55_ = v___x_52_;
v_isShared_56_ = v_isSharedCheck_87_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_a_53_);
lean_dec(v___x_52_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_87_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
if (lean_obj_tag(v_a_53_) == 0)
{
if (lean_obj_tag(v___x_40_) == 4)
{
lean_object* v_declName_57_; lean_object* v___x_58_; lean_object* v_env_59_; uint8_t v___x_60_; lean_object* v___x_61_; 
v_declName_57_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_declName_57_);
lean_dec_ref_known(v___x_40_, 2);
v___x_58_ = lean_st_ref_get(v_a_32_);
v_env_59_ = lean_ctor_get(v___x_58_, 0);
lean_inc_ref(v_env_59_);
lean_dec(v___x_58_);
v___x_60_ = 0;
v___x_61_ = l_Lean_Environment_find_x3f(v_env_59_, v_declName_57_, v___x_60_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_del_object(v___x_55_);
lean_dec_ref(v_args_51_);
goto v___jp_37_;
}
else
{
lean_object* v_val_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_80_; 
v_val_62_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_80_ == 0)
{
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_80_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_val_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_80_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
if (lean_obj_tag(v_val_62_) == 7)
{
lean_object* v_val_66_; lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v_val_66_ = lean_ctor_get(v_val_62_, 0);
lean_inc_ref(v_val_66_);
lean_dec_ref_known(v_val_62_, 1);
v___x_67_ = lean_array_get_size(v_args_51_);
v___x_68_ = l_Lean_RecursorVal_getMajorIdx(v_val_66_);
lean_dec_ref(v_val_66_);
v___x_69_ = lean_nat_dec_le(v___x_67_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_70_ = lean_array_get(v___x_44_, v_args_51_, v___x_68_);
lean_dec(v___x_68_);
lean_dec_ref(v_args_51_);
v___x_71_ = l_Lean_Expr_consumeMData(v___x_70_);
lean_dec(v___x_70_);
v___x_72_ = l_Lean_Expr_isFVar(v___x_71_);
if (v___x_72_ == 0)
{
lean_dec_ref(v___x_71_);
lean_del_object(v___x_64_);
lean_del_object(v___x_55_);
goto v___jp_34_;
}
else
{
lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_73_ = l_Lean_Expr_fvarId_x21(v___x_71_);
lean_dec_ref(v___x_71_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_73_);
v___x_75_ = v___x_64_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_73_);
v___x_75_ = v_reuseFailAlloc_79_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_77_; 
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_75_);
v___x_77_ = v___x_55_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
else
{
lean_dec(v___x_68_);
lean_del_object(v___x_64_);
lean_del_object(v___x_55_);
lean_dec_ref(v_args_51_);
goto v___jp_34_;
}
}
else
{
lean_del_object(v___x_64_);
lean_dec(v_val_62_);
lean_del_object(v___x_55_);
lean_dec_ref(v_args_51_);
goto v___jp_37_;
}
}
}
}
else
{
lean_del_object(v___x_55_);
lean_dec_ref(v_args_51_);
lean_dec_ref(v___x_40_);
goto v___jp_37_;
}
}
else
{
lean_object* v_val_81_; lean_object* v_numParams_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
lean_del_object(v___x_55_);
lean_dec_ref(v___x_40_);
v_val_81_ = lean_ctor_get(v_a_53_, 0);
lean_inc(v_val_81_);
lean_dec_ref_known(v_a_53_, 1);
v_numParams_82_ = lean_ctor_get(v_val_81_, 1);
lean_inc(v_numParams_82_);
lean_dec(v_val_81_);
v___x_83_ = lean_array_get_size(v_args_51_);
v___x_84_ = lean_nat_dec_lt(v_numParams_82_, v___x_83_);
if (v___x_84_ == 0)
{
lean_dec(v_numParams_82_);
lean_dec_ref(v_args_51_);
goto v___jp_34_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = lean_array_get(v___x_44_, v_args_51_, v_numParams_82_);
lean_dec(v_numParams_82_);
lean_dec_ref(v_args_51_);
v_e_28_ = v___x_85_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
lean_dec_ref(v_args_51_);
lean_dec_ref(v___x_40_);
v_a_88_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_52_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_52_);
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
}
v___jp_34_:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
return v___x_36_;
}
v___jp_37_:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_box(0);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f___boxed(lean_object* v_e_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f(v_e_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_casesOnStuckLHS_spec__1(size_t v_sz_103_, size_t v_i_104_, lean_object* v_bs_105_){
_start:
{
uint8_t v___x_106_; 
v___x_106_ = lean_usize_dec_lt(v_i_104_, v_sz_103_);
if (v___x_106_ == 0)
{
return v_bs_105_;
}
else
{
lean_object* v_v_107_; lean_object* v_toInductionSubgoal_108_; lean_object* v_mvarId_109_; lean_object* v___x_110_; lean_object* v_bs_x27_111_; size_t v___x_112_; size_t v___x_113_; lean_object* v___x_114_; 
v_v_107_ = lean_array_uget_borrowed(v_bs_105_, v_i_104_);
v_toInductionSubgoal_108_ = lean_ctor_get(v_v_107_, 0);
v_mvarId_109_ = lean_ctor_get(v_toInductionSubgoal_108_, 0);
lean_inc(v_mvarId_109_);
v___x_110_ = lean_unsigned_to_nat(0u);
v_bs_x27_111_ = lean_array_uset(v_bs_105_, v_i_104_, v___x_110_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_104_, v___x_112_);
v___x_114_ = lean_array_uset(v_bs_x27_111_, v_i_104_, v_mvarId_109_);
v_i_104_ = v___x_113_;
v_bs_105_ = v___x_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_casesOnStuckLHS_spec__1___boxed(lean_object* v_sz_116_, lean_object* v_i_117_, lean_object* v_bs_118_){
_start:
{
size_t v_sz_boxed_119_; size_t v_i_boxed_120_; lean_object* v_res_121_; 
v_sz_boxed_119_ = lean_unbox_usize(v_sz_116_);
lean_dec(v_sz_116_);
v_i_boxed_120_ = lean_unbox_usize(v_i_117_);
lean_dec(v_i_117_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_casesOnStuckLHS_spec__1(v_sz_boxed_119_, v_i_boxed_120_, v_bs_118_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0_spec__0(lean_object* v_msgData_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v___x_128_; lean_object* v_env_129_; uint8_t v___x_130_; lean_object* v_env_131_; lean_object* v___x_132_; lean_object* v_toCold_133_; lean_object* v_mctx_134_; lean_object* v_lctx_135_; lean_object* v_options_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_128_ = lean_st_ref_get(v___y_126_);
v_env_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc_ref(v_env_129_);
lean_dec(v___x_128_);
v___x_130_ = 0;
v_env_131_ = l_Lean_Environment_setRecordingDeps(v_env_129_, v___x_130_);
v___x_132_ = lean_st_ref_get(v___y_124_);
v_toCold_133_ = lean_ctor_get(v___y_125_, 0);
v_mctx_134_ = lean_ctor_get(v___x_132_, 0);
lean_inc_ref(v_mctx_134_);
lean_dec(v___x_132_);
v_lctx_135_ = lean_ctor_get(v___y_123_, 2);
v_options_136_ = lean_ctor_get(v_toCold_133_, 2);
lean_inc_ref(v_options_136_);
lean_inc_ref(v_lctx_135_);
v___x_137_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_137_, 0, v_env_131_);
lean_ctor_set(v___x_137_, 1, v_mctx_134_);
lean_ctor_set(v___x_137_, 2, v_lctx_135_);
lean_ctor_set(v___x_137_, 3, v_options_136_);
v___x_138_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v_msgData_122_);
v___x_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0_spec__0___boxed(lean_object* v_msgData_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0_spec__0(v_msgData_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg(lean_object* v_msg_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_ref_153_; lean_object* v___x_154_; lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_163_; 
v_ref_153_ = lean_ctor_get(v___y_150_, 2);
v___x_154_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0_spec__0(v_msg_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
v_a_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_163_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_163_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_163_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_161_; 
lean_inc(v_ref_153_);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v_ref_153_);
lean_ctor_set(v___x_159_, 1, v_a_155_);
if (v_isShared_158_ == 0)
{
lean_ctor_set_tag(v___x_157_, 1);
lean_ctor_set(v___x_157_, 0, v___x_159_);
v___x_161_ = v___x_157_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg___boxed(lean_object* v_msg_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg(v_msg_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v_res_170_;
}
}
static lean_object* _init_l_Lean_Meta_casesOnStuckLHS___closed__1(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = ((lean_object*)(l_Lean_Meta_casesOnStuckLHS___closed__0));
v___x_173_ = l_Lean_stringToMessageData(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS(lean_object* v_mvarId_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___y_183_; lean_object* v___y_184_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v___x_189_; 
lean_inc(v_mvarId_176_);
v___x_189_ = l_Lean_MVarId_getType(v_mvarId_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_191_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
v___x_191_ = l_Lean_Meta_matchEqHEqLHS_x3f(v_a_190_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
if (lean_obj_tag(v_a_192_) == 1)
{
lean_object* v_val_193_; lean_object* v_snd_194_; lean_object* v___x_195_; 
v_val_193_ = lean_ctor_get(v_a_192_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v_a_192_, 1);
v_snd_194_ = lean_ctor_get(v_val_193_, 1);
lean_inc(v_snd_194_);
lean_dec(v_val_193_);
v___x_195_ = l___private_Lean_Meta_Tactic_CasesOnStuckLHS_0__Lean_Meta_casesOnStuckLHS_findFVar_x3f(v_snd_194_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_195_, 1);
if (lean_obj_tag(v_a_196_) == 1)
{
lean_object* v_val_197_; lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_val_197_ = lean_ctor_get(v_a_196_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v_a_196_, 1);
v___x_198_ = ((lean_object*)(l_Lean_Meta_casesOnStuckLHS___closed__2));
v___x_199_ = 0;
v___x_200_ = lean_box(0);
v___x_201_ = l_Lean_MVarId_cases(v_mvarId_176_, v_val_197_, v___x_198_, v___x_199_, v___x_200_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_212_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_212_ == 0)
{
v___x_204_ = v___x_201_;
v_isShared_205_ = v_isSharedCheck_212_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_212_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
size_t v_sz_206_; size_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v_sz_206_ = lean_array_size(v_a_202_);
v___x_207_ = ((size_t)0ULL);
v___x_208_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_casesOnStuckLHS_spec__1(v_sz_206_, v___x_207_, v_a_202_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_208_);
v___x_210_ = v___x_204_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_201_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_201_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
else
{
lean_dec(v_a_196_);
lean_dec(v_mvarId_176_);
v___y_183_ = v_a_177_;
v___y_184_ = v_a_178_;
v___y_185_ = v_a_179_;
v___y_186_ = v_a_180_;
goto v___jp_182_;
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec(v_mvarId_176_);
v_a_221_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_195_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_195_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
else
{
lean_dec(v_a_192_);
lean_dec(v_mvarId_176_);
v___y_183_ = v_a_177_;
v___y_184_ = v_a_178_;
v___y_185_ = v_a_179_;
v___y_186_ = v_a_180_;
goto v___jp_182_;
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_mvarId_176_);
v_a_229_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_191_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_191_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec(v_mvarId_176_);
v_a_237_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_189_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_189_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
v___jp_182_:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_obj_once(&l_Lean_Meta_casesOnStuckLHS___closed__1, &l_Lean_Meta_casesOnStuckLHS___closed__1_once, _init_l_Lean_Meta_casesOnStuckLHS___closed__1);
v___x_188_ = l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg(v___x_187_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS___boxed(lean_object* v_mvarId_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Meta_casesOnStuckLHS(v_mvarId_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0(lean_object* v_00_u03b1_252_, lean_object* v_msg_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___redArg(v_msg_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0___boxed(lean_object* v_00_u03b1_260_, lean_object* v_msg_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_throwError___at___00Lean_Meta_casesOnStuckLHS_spec__0(v_00_u03b1_260_, v_msg_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS_x3f(lean_object* v_mvarId_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Meta_casesOnStuckLHS(v_mvarId_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_283_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_283_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_279_, 0, v_a_275_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
else
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_300_; 
v_a_284_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_300_ == 0)
{
v___x_286_ = v___x_274_;
v_isShared_287_ = v_isSharedCheck_300_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_274_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_300_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
uint8_t v___x_288_; 
v___x_288_ = l_Lean_Exception_isInterrupt(v_a_284_);
if (v___x_288_ == 0)
{
uint8_t v___x_289_; 
lean_inc(v_a_284_);
v___x_289_ = l_Lean_Exception_isRuntime(v_a_284_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_292_; 
lean_dec(v_a_284_);
v___x_290_ = lean_box(0);
if (v_isShared_287_ == 0)
{
lean_ctor_set_tag(v___x_286_, 0);
lean_ctor_set(v___x_286_, 0, v___x_290_);
v___x_292_ = v___x_286_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
else
{
lean_object* v___x_295_; 
if (v_isShared_287_ == 0)
{
v___x_295_ = v___x_286_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_284_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
else
{
lean_object* v___x_298_; 
if (v_isShared_287_ == 0)
{
v___x_298_ = v___x_286_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_284_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_casesOnStuckLHS_x3f___boxed(lean_object* v_mvarId_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
return v_res_307_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
}
#ifdef __cplusplus
}
#endif
