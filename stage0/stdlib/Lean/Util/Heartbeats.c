// Lean compiler output
// Module: Lean.Util.Heartbeats
// Imports: public import Lean.CoreM
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_IO_getNumHeartbeats___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_withHeartbeats___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_getNumHeartbeats___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_withHeartbeats___redArg___closed__0 = (const lean_object*)&l_Lean_withHeartbeats___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeartbeats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_reportOutOfHeartbeats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_reportOutOfHeartbeats___closed__0 = (const lean_object*)&l_Lean_reportOutOfHeartbeats___closed__0_value;
static const lean_string_object l_Lean_reportOutOfHeartbeats___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 109, .m_capacity = 109, .m_length = 108, .m_data = "` stopped because it was running out of time.\nYou may get better results using `set_option maxHeartbeats 0`."};
static const lean_object* l_Lean_reportOutOfHeartbeats___closed__1 = (const lean_object*)&l_Lean_reportOutOfHeartbeats___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_reportOutOfHeartbeats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportOutOfHeartbeats___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__0(lean_object* v_start_1_, lean_object* v_r_2_, lean_object* v_toPure_3_, lean_object* v_finish_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = lean_nat_sub(v_finish_4_, v_start_1_);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v_r_2_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
v___x_7_ = lean_apply_2(v_toPure_3_, lean_box(0), v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__0___boxed(lean_object* v_start_8_, lean_object* v_r_9_, lean_object* v_toPure_10_, lean_object* v_finish_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_withHeartbeats___redArg___lam__0(v_start_8_, v_r_9_, v_toPure_10_, v_finish_11_);
lean_dec(v_finish_11_);
lean_dec(v_start_8_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__1(lean_object* v_start_13_, lean_object* v_toPure_14_, lean_object* v_toBind_15_, lean_object* v___x_16_, lean_object* v_r_17_){
_start:
{
lean_object* v___f_18_; lean_object* v___x_19_; 
v___f_18_ = lean_alloc_closure((void*)(l_Lean_withHeartbeats___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_18_, 0, v_start_13_);
lean_closure_set(v___f_18_, 1, v_r_17_);
lean_closure_set(v___f_18_, 2, v_toPure_14_);
v___x_19_ = lean_apply_4(v_toBind_15_, lean_box(0), lean_box(0), v___x_16_, v___f_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg___lam__2(lean_object* v_toPure_20_, lean_object* v_toBind_21_, lean_object* v___x_22_, lean_object* v_x_23_, lean_object* v_start_24_){
_start:
{
lean_object* v___f_25_; lean_object* v___x_26_; 
lean_inc(v_toBind_21_);
v___f_25_ = lean_alloc_closure((void*)(l_Lean_withHeartbeats___redArg___lam__1), 5, 4);
lean_closure_set(v___f_25_, 0, v_start_24_);
lean_closure_set(v___f_25_, 1, v_toPure_20_);
lean_closure_set(v___f_25_, 2, v_toBind_21_);
lean_closure_set(v___f_25_, 3, v___x_22_);
v___x_26_ = lean_apply_4(v_toBind_21_, lean_box(0), lean_box(0), v_x_23_, v___f_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeartbeats___redArg(lean_object* v_inst_28_, lean_object* v_inst_29_, lean_object* v_x_30_){
_start:
{
lean_object* v_toApplicative_31_; lean_object* v_toBind_32_; lean_object* v_toPure_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___f_36_; lean_object* v___x_37_; 
v_toApplicative_31_ = lean_ctor_get(v_inst_28_, 0);
lean_inc_ref(v_toApplicative_31_);
v_toBind_32_ = lean_ctor_get(v_inst_28_, 1);
lean_inc_n(v_toBind_32_, 2);
lean_dec_ref(v_inst_28_);
v_toPure_33_ = lean_ctor_get(v_toApplicative_31_, 1);
lean_inc(v_toPure_33_);
lean_dec_ref(v_toApplicative_31_);
v___x_34_ = ((lean_object*)(l_Lean_withHeartbeats___redArg___closed__0));
v___x_35_ = lean_apply_2(v_inst_29_, lean_box(0), v___x_34_);
lean_inc(v___x_35_);
v___f_36_ = lean_alloc_closure((void*)(l_Lean_withHeartbeats___redArg___lam__2), 5, 4);
lean_closure_set(v___f_36_, 0, v_toPure_33_);
lean_closure_set(v___f_36_, 1, v_toBind_32_);
lean_closure_set(v___f_36_, 2, v___x_35_);
lean_closure_set(v___f_36_, 3, v_x_30_);
v___x_37_ = lean_apply_4(v_toBind_32_, lean_box(0), lean_box(0), v___x_35_, v___f_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeartbeats(lean_object* v_m_38_, lean_object* v_00_u03b1_39_, lean_object* v_inst_40_, lean_object* v_inst_41_, lean_object* v_x_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_withHeartbeats___redArg(v_inst_40_, v_inst_41_, v_x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats___redArg(lean_object* v_a_44_){
_start:
{
lean_object* v_toCold_46_; lean_object* v_maxHeartbeats_47_; lean_object* v___x_48_; 
v_toCold_46_ = lean_ctor_get(v_a_44_, 0);
v_maxHeartbeats_47_ = lean_ctor_get(v_toCold_46_, 7);
lean_inc(v_maxHeartbeats_47_);
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v_maxHeartbeats_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats___redArg___boxed(lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_getMaxHeartbeats___redArg(v_a_49_);
lean_dec_ref(v_a_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats(lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_getMaxHeartbeats___redArg(v_a_52_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMaxHeartbeats___boxed(lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_getMaxHeartbeats(v_a_56_, v_a_57_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats___redArg(lean_object* v_a_60_){
_start:
{
lean_object* v_toCold_62_; lean_object* v_initHeartbeats_63_; lean_object* v___x_64_; 
v_toCold_62_ = lean_ctor_get(v_a_60_, 0);
v_initHeartbeats_63_ = lean_ctor_get(v_toCold_62_, 6);
lean_inc(v_initHeartbeats_63_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_initHeartbeats_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats___redArg___boxed(lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_getInitHeartbeats___redArg(v_a_65_);
lean_dec_ref(v_a_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats(lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_getInitHeartbeats___redArg(v_a_68_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_getInitHeartbeats___boxed(lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_getInitHeartbeats(v_a_72_, v_a_73_);
lean_dec(v_a_73_);
lean_dec_ref(v_a_72_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats___redArg(lean_object* v_a_76_){
_start:
{
lean_object* v___x_78_; lean_object* v_a_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_91_; 
v___x_78_ = l_Lean_getMaxHeartbeats___redArg(v_a_76_);
v_a_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_79_);
lean_dec_ref(v___x_78_);
v___x_80_ = lean_io_get_num_heartbeats();
v___x_81_ = l_Lean_getInitHeartbeats___redArg(v_a_76_);
v_a_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_91_ == 0)
{
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_91_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_91_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_86_ = lean_nat_sub(v___x_80_, v_a_82_);
lean_dec(v_a_82_);
lean_dec(v___x_80_);
v___x_87_ = lean_nat_sub(v_a_79_, v___x_86_);
lean_dec(v___x_86_);
lean_dec(v_a_79_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v___x_87_);
v___x_89_ = v___x_84_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats___redArg___boxed(lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_getRemainingHeartbeats___redArg(v_a_92_);
lean_dec_ref(v_a_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats(lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_getRemainingHeartbeats___redArg(v_a_95_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRemainingHeartbeats___boxed(lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_getRemainingHeartbeats(v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent___redArg(lean_object* v_a_103_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v_a_107_; lean_object* v___x_108_; lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_120_; 
v___x_105_ = lean_io_get_num_heartbeats();
v___x_106_ = l_Lean_getInitHeartbeats___redArg(v_a_103_);
v_a_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_a_107_);
lean_dec_ref(v___x_106_);
v___x_108_ = l_Lean_getMaxHeartbeats___redArg(v_a_103_);
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_120_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_113_ = lean_nat_sub(v___x_105_, v_a_107_);
lean_dec(v_a_107_);
lean_dec(v___x_105_);
v___x_114_ = lean_unsigned_to_nat(100u);
v___x_115_ = lean_nat_mul(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_nat_div(v___x_115_, v_a_109_);
lean_dec(v_a_109_);
lean_dec(v___x_115_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_116_);
v___x_118_ = v___x_111_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent___redArg___boxed(lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lean_heartbeatsPercent___redArg(v_a_121_);
lean_dec_ref(v_a_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent(lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lean_heartbeatsPercent___redArg(v_a_124_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_heartbeatsPercent___boxed(lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_heartbeatsPercent(v_a_128_, v_a_129_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_131_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0(uint8_t v___x_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 1)
{
lean_object* v_pre_142_; 
v_pre_142_ = lean_ctor_get(v_x_141_, 0);
switch(lean_obj_tag(v_pre_142_))
{
case 1:
{
lean_object* v_pre_143_; 
v_pre_143_ = lean_ctor_get(v_pre_142_, 0);
switch(lean_obj_tag(v_pre_143_))
{
case 0:
{
lean_object* v_str_144_; lean_object* v_str_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v_str_144_ = lean_ctor_get(v_x_141_, 1);
v_str_145_ = lean_ctor_get(v_pre_142_, 1);
v___x_146_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__0));
v___x_147_ = lean_string_dec_eq(v_str_145_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__1));
v___x_149_ = lean_string_dec_eq(v_str_145_, v___x_148_);
if (v___x_149_ == 0)
{
return v___x_149_;
}
else
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__2));
v___x_151_ = lean_string_dec_eq(v_str_144_, v___x_150_);
return v___x_151_;
}
}
else
{
lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_152_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__3));
v___x_153_ = lean_string_dec_eq(v_str_144_, v___x_152_);
return v___x_153_;
}
}
case 1:
{
lean_object* v_pre_154_; 
v_pre_154_ = lean_ctor_get(v_pre_143_, 0);
if (lean_obj_tag(v_pre_154_) == 0)
{
lean_object* v_str_155_; lean_object* v_str_156_; lean_object* v_str_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_str_155_ = lean_ctor_get(v_x_141_, 1);
v_str_156_ = lean_ctor_get(v_pre_142_, 1);
v_str_157_ = lean_ctor_get(v_pre_143_, 1);
v___x_158_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__4));
v___x_159_ = lean_string_dec_eq(v_str_157_, v___x_158_);
if (v___x_159_ == 0)
{
return v___x_159_;
}
else
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__5));
v___x_161_ = lean_string_dec_eq(v_str_156_, v___x_160_);
if (v___x_161_ == 0)
{
return v___x_161_;
}
else
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__6));
v___x_163_ = lean_string_dec_eq(v_str_155_, v___x_162_);
return v___x_163_;
}
}
}
else
{
return v___x_140_;
}
}
default: 
{
return v___x_140_;
}
}
}
case 0:
{
lean_object* v_str_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v_str_164_ = lean_ctor_get(v_x_141_, 1);
v___x_165_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___closed__7));
v___x_166_ = lean_string_dec_eq(v_str_164_, v___x_165_);
return v___x_166_;
}
default: 
{
return v___x_140_;
}
}
}
else
{
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0___boxed(lean_object* v___x_167_, lean_object* v_x_168_){
_start:
{
uint8_t v___x_2759__boxed_169_; uint8_t v_res_170_; lean_object* v_r_171_; 
v___x_2759__boxed_169_ = lean_unbox(v___x_167_);
v_res_170_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___lam__0(v___x_2759__boxed_169_, v_x_168_);
lean_dec(v_x_168_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__2(lean_object* v_opts_172_, lean_object* v_opt_173_){
_start:
{
lean_object* v_name_174_; lean_object* v_defValue_175_; lean_object* v_map_176_; lean_object* v___x_177_; 
v_name_174_ = lean_ctor_get(v_opt_173_, 0);
v_defValue_175_ = lean_ctor_get(v_opt_173_, 1);
v_map_176_ = lean_ctor_get(v_opts_172_, 0);
v___x_177_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_176_, v_name_174_);
if (lean_obj_tag(v___x_177_) == 0)
{
uint8_t v___x_178_; 
v___x_178_ = lean_unbox(v_defValue_175_);
return v___x_178_;
}
else
{
lean_object* v_val_179_; 
v_val_179_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_val_179_);
lean_dec_ref_known(v___x_177_, 1);
if (lean_obj_tag(v_val_179_) == 1)
{
uint8_t v_v_180_; 
v_v_180_ = lean_ctor_get_uint8(v_val_179_, 0);
lean_dec_ref_known(v_val_179_, 0);
return v_v_180_;
}
else
{
uint8_t v___x_181_; 
lean_dec(v_val_179_);
v___x_181_ = lean_unbox(v_defValue_175_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_182_, lean_object* v_opt_183_){
_start:
{
uint8_t v_res_184_; lean_object* v_r_185_; 
v_res_184_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__2(v_opts_182_, v_opt_183_);
lean_dec_ref(v_opt_183_);
lean_dec_ref(v_opts_182_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_186_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__0);
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1);
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
lean_ctor_set(v___x_191_, 2, v___x_190_);
lean_ctor_set(v___x_191_, 3, v___x_190_);
lean_ctor_set(v___x_191_, 4, v___x_189_);
lean_ctor_set(v___x_191_, 5, v___x_189_);
lean_ctor_set(v___x_191_, 6, v___x_189_);
lean_ctor_set(v___x_191_, 7, v___x_189_);
lean_ctor_set(v___x_191_, 8, v___x_189_);
lean_ctor_set(v___x_191_, 9, v___x_189_);
lean_ctor_set(v___x_191_, 10, v___x_189_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_unsigned_to_nat(32u);
v___x_193_ = lean_mk_empty_array_with_capacity(v___x_192_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
size_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_195_ = ((size_t)5ULL);
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_unsigned_to_nat(32u);
v___x_198_ = lean_mk_empty_array_with_capacity(v___x_197_);
v___x_199_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__3);
v___x_200_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
lean_ctor_set(v___x_200_, 2, v___x_196_);
lean_ctor_set(v___x_200_, 3, v___x_196_);
lean_ctor_set_usize(v___x_200_, 4, v___x_195_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_201_ = lean_box(1);
v___x_202_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__4);
v___x_203_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__1);
v___x_204_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_202_);
lean_ctor_set(v___x_204_, 2, v___x_201_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1(lean_object* v_msgData_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v___x_209_; lean_object* v_toCold_210_; lean_object* v_env_211_; lean_object* v_options_212_; uint8_t v___x_213_; lean_object* v_env_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_209_ = lean_st_ref_get(v___y_207_);
v_toCold_210_ = lean_ctor_get(v___y_206_, 0);
v_env_211_ = lean_ctor_get(v___x_209_, 0);
lean_inc_ref(v_env_211_);
lean_dec(v___x_209_);
v_options_212_ = lean_ctor_get(v_toCold_210_, 2);
v___x_213_ = 0;
v_env_214_ = l_Lean_Environment_setRecordingDeps(v_env_211_, v___x_213_);
v___x_215_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__2);
v___x_216_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___closed__5);
lean_inc_ref(v_options_212_);
v___x_217_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_217_, 0, v_env_214_);
lean_ctor_set(v___x_217_, 1, v___x_215_);
lean_ctor_set(v___x_217_, 2, v___x_216_);
lean_ctor_set(v___x_217_, 3, v_options_212_);
v___x_218_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v_msgData_205_);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1(v_msgData_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0(lean_object* v_ref_229_, lean_object* v_msgData_230_, uint8_t v_severity_231_, uint8_t v_isSilent_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v___y_237_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; uint8_t v___y_242_; lean_object* v___y_243_; lean_object* v_toCold_244_; lean_object* v___y_245_; lean_object* v___y_274_; lean_object* v___y_275_; uint8_t v___y_276_; uint8_t v___y_277_; lean_object* v___y_278_; uint8_t v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; uint8_t v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; uint8_t v___y_304_; lean_object* v___y_305_; uint8_t v___y_306_; lean_object* v___y_307_; uint8_t v___y_311_; uint8_t v___x_328_; uint8_t v___x_329_; 
v___x_328_ = 2;
v___x_329_ = l_Lean_instBEqMessageSeverity_beq(v_severity_231_, v___x_328_);
if (v___x_329_ == 0)
{
goto v___jp_321_;
}
else
{
uint8_t v___x_330_; 
lean_inc_ref(v_msgData_230_);
v___x_330_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_230_);
if (v___x_330_ == 0)
{
goto v___jp_321_;
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; 
lean_dec_ref(v_msgData_230_);
v___x_331_ = lean_box(0);
v___x_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
return v___x_332_;
}
}
v___jp_236_:
{
lean_object* v_currNamespace_246_; lean_object* v_openDecls_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v_env_252_; lean_object* v_nextMacroScope_253_; lean_object* v_ngen_254_; lean_object* v_auxDeclNGen_255_; lean_object* v_traceState_256_; lean_object* v_cache_257_; lean_object* v_recordedDeps_258_; lean_object* v_messages_259_; lean_object* v_infoState_260_; lean_object* v_snapshotTasks_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_272_; 
v_currNamespace_246_ = lean_ctor_get(v_toCold_244_, 4);
v_openDecls_247_ = lean_ctor_get(v_toCold_244_, 5);
lean_inc(v_openDecls_247_);
lean_inc(v_currNamespace_246_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v_currNamespace_246_);
lean_ctor_set(v___x_248_, 1, v_openDecls_247_);
v___x_249_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___y_240_);
lean_inc_ref(v___y_239_);
lean_inc_ref(v___y_238_);
v___x_250_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_250_, 0, v___y_238_);
lean_ctor_set(v___x_250_, 1, v___y_243_);
lean_ctor_set(v___x_250_, 2, v___y_241_);
lean_ctor_set(v___x_250_, 3, v___y_239_);
lean_ctor_set(v___x_250_, 4, v___x_249_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*5, v___y_242_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*5 + 1, v___y_237_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*5 + 2, v_isSilent_232_);
v___x_251_ = lean_st_ref_take(v___y_245_);
v_env_252_ = lean_ctor_get(v___x_251_, 0);
v_nextMacroScope_253_ = lean_ctor_get(v___x_251_, 1);
v_ngen_254_ = lean_ctor_get(v___x_251_, 2);
v_auxDeclNGen_255_ = lean_ctor_get(v___x_251_, 3);
v_traceState_256_ = lean_ctor_get(v___x_251_, 4);
v_cache_257_ = lean_ctor_get(v___x_251_, 5);
v_recordedDeps_258_ = lean_ctor_get(v___x_251_, 6);
v_messages_259_ = lean_ctor_get(v___x_251_, 7);
v_infoState_260_ = lean_ctor_get(v___x_251_, 8);
v_snapshotTasks_261_ = lean_ctor_get(v___x_251_, 9);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_272_ == 0)
{
v___x_263_ = v___x_251_;
v_isShared_264_ = v_isSharedCheck_272_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_snapshotTasks_261_);
lean_inc(v_infoState_260_);
lean_inc(v_messages_259_);
lean_inc(v_recordedDeps_258_);
lean_inc(v_cache_257_);
lean_inc(v_traceState_256_);
lean_inc(v_auxDeclNGen_255_);
lean_inc(v_ngen_254_);
lean_inc(v_nextMacroScope_253_);
lean_inc(v_env_252_);
lean_dec(v___x_251_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_272_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_265_ = lean_box(0);
v___x_266_ = l_Lean_MessageLog_add(v___x_250_, v_messages_259_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 7, v___x_266_);
v___x_268_ = v___x_263_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_env_252_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_nextMacroScope_253_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v_ngen_254_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v_auxDeclNGen_255_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v_traceState_256_);
lean_ctor_set(v_reuseFailAlloc_271_, 5, v_cache_257_);
lean_ctor_set(v_reuseFailAlloc_271_, 6, v_recordedDeps_258_);
lean_ctor_set(v_reuseFailAlloc_271_, 7, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_271_, 8, v_infoState_260_);
lean_ctor_set(v_reuseFailAlloc_271_, 9, v_snapshotTasks_261_);
v___x_268_ = v_reuseFailAlloc_271_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_st_ref_put(v___y_245_, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_265_);
return v___x_270_;
}
}
}
v___jp_273_:
{
lean_object* v_fileName_282_; lean_object* v_fileMap_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_299_; 
v_fileName_282_ = lean_ctor_get(v___y_278_, 0);
v_fileMap_283_ = lean_ctor_get(v___y_278_, 1);
v___x_284_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_230_);
v___x_285_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__1(v___x_284_, v___y_233_, v___y_234_);
v_a_286_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_299_ == 0)
{
v___x_288_ = v___x_285_;
v_isShared_289_ = v_isSharedCheck_299_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_285_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_299_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
lean_inc_ref_n(v_fileMap_283_, 2);
v___x_290_ = l_Lean_FileMap_toPosition(v_fileMap_283_, v___y_280_);
lean_dec(v___y_280_);
v___x_291_ = l_Lean_FileMap_toPosition(v_fileMap_283_, v___y_281_);
lean_dec(v___y_281_);
v___x_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
v___x_293_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__0));
if (v___y_279_ == 0)
{
lean_del_object(v___x_288_);
v___y_237_ = v___y_276_;
v___y_238_ = v_fileName_282_;
v___y_239_ = v___x_293_;
v___y_240_ = v_a_286_;
v___y_241_ = v___x_292_;
v___y_242_ = v___y_277_;
v___y_243_ = v___x_290_;
v_toCold_244_ = v___y_274_;
v___y_245_ = v___y_234_;
goto v___jp_236_;
}
else
{
uint8_t v___x_294_; 
lean_inc(v_a_286_);
lean_inc_ref(v___y_275_);
v___x_294_ = l_Lean_MessageData_hasTag(v___y_275_, v_a_286_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_297_; 
lean_dec_ref_known(v___x_292_, 1);
lean_dec_ref(v___x_290_);
lean_dec(v_a_286_);
v___x_295_ = lean_box(0);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_295_);
v___x_297_ = v___x_288_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
else
{
lean_del_object(v___x_288_);
v___y_237_ = v___y_276_;
v___y_238_ = v_fileName_282_;
v___y_239_ = v___x_293_;
v___y_240_ = v_a_286_;
v___y_241_ = v___x_292_;
v___y_242_ = v___y_277_;
v___y_243_ = v___x_290_;
v_toCold_244_ = v___y_274_;
v___y_245_ = v___y_234_;
goto v___jp_236_;
}
}
}
}
v___jp_300_:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Syntax_getTailPos_x3f(v___y_305_, v___y_301_);
lean_dec(v___y_305_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_inc(v___y_307_);
v___y_274_ = v___y_302_;
v___y_275_ = v___y_303_;
v___y_276_ = v___y_306_;
v___y_277_ = v___y_301_;
v___y_278_ = v___y_302_;
v___y_279_ = v___y_304_;
v___y_280_ = v___y_307_;
v___y_281_ = v___y_307_;
goto v___jp_273_;
}
else
{
lean_object* v_val_309_; 
v_val_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_val_309_);
lean_dec_ref_known(v___x_308_, 1);
v___y_274_ = v___y_302_;
v___y_275_ = v___y_303_;
v___y_276_ = v___y_306_;
v___y_277_ = v___y_301_;
v___y_278_ = v___y_302_;
v___y_279_ = v___y_304_;
v___y_280_ = v___y_307_;
v___y_281_ = v_val_309_;
goto v___jp_273_;
}
}
v___jp_310_:
{
lean_object* v_toCold_312_; lean_object* v_ref_313_; uint8_t v_suppressElabErrors_314_; lean_object* v_ref_315_; uint8_t v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; 
v_toCold_312_ = lean_ctor_get(v___y_233_, 0);
v_ref_313_ = lean_ctor_get(v___y_233_, 2);
v_suppressElabErrors_314_ = lean_ctor_get_uint8(v___y_233_, sizeof(void*)*3 + 2);
v_ref_315_ = l_Lean_replaceRef(v_ref_229_, v_ref_313_);
v___x_316_ = 0;
v___f_317_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___closed__1));
v___x_318_ = l_Lean_Syntax_getPos_x3f(v_ref_315_, v___x_316_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v___x_319_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v___y_301_ = v___x_316_;
v___y_302_ = v_toCold_312_;
v___y_303_ = v___f_317_;
v___y_304_ = v_suppressElabErrors_314_;
v___y_305_ = v_ref_315_;
v___y_306_ = v___y_311_;
v___y_307_ = v___x_319_;
goto v___jp_300_;
}
else
{
lean_object* v_val_320_; 
v_val_320_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_320_);
lean_dec_ref_known(v___x_318_, 1);
v___y_301_ = v___x_316_;
v___y_302_ = v_toCold_312_;
v___y_303_ = v___f_317_;
v___y_304_ = v_suppressElabErrors_314_;
v___y_305_ = v_ref_315_;
v___y_306_ = v___y_311_;
v___y_307_ = v_val_320_;
goto v___jp_300_;
}
}
v___jp_321_:
{
uint8_t v___x_322_; uint8_t v___x_323_; 
v___x_322_ = 1;
v___x_323_ = l_Lean_instBEqMessageSeverity_beq(v_severity_231_, v___x_322_);
if (v___x_323_ == 0)
{
v___y_311_ = v_severity_231_;
goto v___jp_310_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_324_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_233_);
v___x_325_ = l_Lean_warningAsError;
v___x_326_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0_spec__2(v___x_324_, v___x_325_);
lean_dec_ref(v___x_324_);
if (v___x_326_ == 0)
{
v___y_311_ = v_severity_231_;
goto v___jp_310_;
}
else
{
uint8_t v___x_327_; 
v___x_327_ = 2;
v___y_311_ = v___x_327_;
goto v___jp_310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0___boxed(lean_object* v_ref_333_, lean_object* v_msgData_334_, lean_object* v_severity_335_, lean_object* v_isSilent_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
uint8_t v_severity_boxed_340_; uint8_t v_isSilent_boxed_341_; lean_object* v_res_342_; 
v_severity_boxed_340_ = lean_unbox(v_severity_335_);
v_isSilent_boxed_341_ = lean_unbox(v_isSilent_336_);
v_res_342_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0(v_ref_333_, v_msgData_334_, v_severity_boxed_340_, v_isSilent_boxed_341_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v_ref_333_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0(lean_object* v_ref_343_, lean_object* v_msgData_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
uint8_t v___x_348_; uint8_t v___x_349_; lean_object* v___x_350_; 
v___x_348_ = 0;
v___x_349_ = 0;
v___x_350_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0_spec__0(v_ref_343_, v_msgData_344_, v___x_348_, v___x_349_, v___y_345_, v___y_346_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0___boxed(lean_object* v_ref_351_, lean_object* v_msgData_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0(v_ref_351_, v_msgData_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v_ref_351_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportOutOfHeartbeats(lean_object* v_tac_359_, lean_object* v_stx_360_, lean_object* v_threshold_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v___x_365_; lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_383_; 
v___x_365_ = l_Lean_heartbeatsPercent___redArg(v_a_362_);
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_383_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_383_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_383_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
uint8_t v___x_370_; 
v___x_370_ = lean_nat_dec_le(v_threshold_361_, v_a_366_);
lean_dec(v_a_366_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_373_; 
lean_dec(v_tac_359_);
v___x_371_ = lean_box(0);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_371_);
v___x_373_ = v___x_368_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
lean_del_object(v___x_368_);
v___x_375_ = ((lean_object*)(l_Lean_reportOutOfHeartbeats___closed__0));
v___x_376_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_tac_359_, v___x_370_);
v___x_377_ = lean_string_append(v___x_375_, v___x_376_);
lean_dec_ref(v___x_376_);
v___x_378_ = ((lean_object*)(l_Lean_reportOutOfHeartbeats___closed__1));
v___x_379_ = lean_string_append(v___x_377_, v___x_378_);
v___x_380_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___x_381_ = l_Lean_MessageData_ofFormat(v___x_380_);
v___x_382_ = l_Lean_logInfoAt___at___00Lean_reportOutOfHeartbeats_spec__0(v_stx_360_, v___x_381_, v_a_362_, v_a_363_);
return v___x_382_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportOutOfHeartbeats___boxed(lean_object* v_tac_384_, lean_object* v_stx_385_, lean_object* v_threshold_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_reportOutOfHeartbeats(v_tac_384_, v_stx_385_, v_threshold_386_, v_a_387_, v_a_388_);
lean_dec(v_a_388_);
lean_dec_ref(v_a_387_);
lean_dec(v_threshold_386_);
lean_dec(v_stx_385_);
return v_res_390_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_Heartbeats(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_Heartbeats(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_Heartbeats(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_Heartbeats(builtin);
}
#ifdef __cplusplus
}
#endif
