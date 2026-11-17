// Lean compiler output
// Module: Lean.Meta.GeneralizeVars
// Imports: public import Lean.Meta.Basic public import Lean.Util.CollectFVars
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
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_CollectFVars_State_ofFVarSet(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_sortFVarIds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object* v_k_44_, lean_object* v_t_45_){
_start:
{
if (lean_obj_tag(v_t_45_) == 0)
{
lean_object* v_k_46_; lean_object* v_l_47_; lean_object* v_r_48_; uint8_t v___x_49_; 
v_k_46_ = lean_ctor_get(v_t_45_, 1);
v_l_47_ = lean_ctor_get(v_t_45_, 3);
v_r_48_ = lean_ctor_get(v_t_45_, 4);
v___x_49_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_44_, v_k_46_);
switch(v___x_49_)
{
case 0:
{
v_t_45_ = v_l_47_;
goto _start;
}
case 1:
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
default: 
{
v_t_45_ = v_r_48_;
goto _start;
}
}
}
else
{
uint8_t v___x_53_; 
v___x_53_ = 0;
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object* v_k_54_, lean_object* v_t_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_54_, v_t_55_);
lean_dec(v_t_55_);
lean_dec(v_k_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object* v_init_58_, lean_object* v_x_59_){
_start:
{
if (lean_obj_tag(v_x_59_) == 0)
{
lean_object* v_k_61_; lean_object* v_l_62_; lean_object* v_r_63_; lean_object* v___x_64_; lean_object* v_a_65_; lean_object* v_a_66_; lean_object* v_fst_67_; lean_object* v_snd_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_83_; 
v_k_61_ = lean_ctor_get(v_x_59_, 1);
lean_inc(v_k_61_);
v_l_62_ = lean_ctor_get(v_x_59_, 3);
lean_inc(v_l_62_);
v_r_63_ = lean_ctor_get(v_x_59_, 4);
lean_inc(v_r_63_);
lean_dec_ref_known(v_x_59_, 5);
v___x_64_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_58_, v_l_62_);
v_a_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_65_);
lean_dec_ref(v___x_64_);
v_a_66_ = lean_ctor_get(v_a_65_, 0);
lean_inc(v_a_66_);
lean_dec(v_a_65_);
v_fst_67_ = lean_ctor_get(v_a_66_, 0);
v_snd_68_ = lean_ctor_get(v_a_66_, 1);
v_isSharedCheck_83_ = !lean_is_exclusive(v_a_66_);
if (v_isSharedCheck_83_ == 0)
{
v___x_70_ = v_a_66_;
v_isShared_71_ = v_isSharedCheck_83_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_snd_68_);
lean_inc(v_fst_67_);
lean_dec(v_a_66_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_83_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
uint8_t v___x_72_; 
v___x_72_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_61_, v_snd_68_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_76_; 
lean_inc(v_k_61_);
v___x_73_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_73_, 0, v_k_61_);
lean_ctor_set(v___x_73_, 1, v_fst_67_);
v___x_74_ = l_Lean_FVarIdSet_insert(v_snd_68_, v_k_61_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 1, v___x_74_);
lean_ctor_set(v___x_70_, 0, v___x_73_);
v___x_76_ = v___x_70_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_73_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_74_);
v___x_76_ = v_reuseFailAlloc_78_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
v_init_58_ = v___x_76_;
v_x_59_ = v_r_63_;
goto _start;
}
}
else
{
lean_object* v___x_80_; 
lean_dec(v_k_61_);
if (v_isShared_71_ == 0)
{
v___x_80_ = v___x_70_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_fst_67_);
lean_ctor_set(v_reuseFailAlloc_82_, 1, v_snd_68_);
v___x_80_ = v_reuseFailAlloc_82_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
v_init_58_ = v___x_80_;
v_x_59_ = v_r_63_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v_init_58_);
v___x_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object* v_init_86_, lean_object* v_x_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_86_, v_x_87_);
return v_res_89_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = ((lean_object*)(l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0));
v___x_93_ = lean_box(1);
v___x_94_ = l_Lean_CollectFVars_State_ofFVarSet(v___x_93_, v___x_92_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object* v_fvarId_95_, lean_object* v_todo_96_, lean_object* v_s_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_a_104_; lean_object* v_s_x27_116_; lean_object* v___y_117_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v___x_126_; 
v___x_126_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_95_, v_a_98_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v_a_130_; lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; lean_object* v___x_134_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_a_127_);
lean_dec_ref_known(v___x_126_, 1);
v___x_128_ = l_Lean_LocalDecl_type(v_a_127_);
v___x_129_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v___x_128_, v_a_99_);
v_a_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_130_);
lean_dec_ref(v___x_129_);
v___x_131_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_132_ = l_Lean_collectFVars(v___x_131_, v_a_130_);
v___x_133_ = 0;
v___x_134_ = l_Lean_LocalDecl_value_x3f(v_a_127_, v___x_133_);
lean_dec(v_a_127_);
if (lean_obj_tag(v___x_134_) == 1)
{
lean_object* v_val_135_; lean_object* v___x_136_; lean_object* v_a_137_; lean_object* v___x_138_; 
v_val_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_135_);
lean_dec_ref_known(v___x_134_, 1);
v___x_136_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_val_135_, v_a_99_);
v_a_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref(v___x_136_);
v___x_138_ = l_Lean_collectFVars(v___x_132_, v_a_137_);
v_s_x27_116_ = v___x_138_;
v___y_117_ = v_a_98_;
v___y_118_ = v_a_99_;
v___y_119_ = v_a_100_;
v___y_120_ = v_a_101_;
goto v___jp_115_;
}
else
{
lean_dec(v___x_134_);
v_s_x27_116_ = v___x_132_;
v___y_117_ = v_a_98_;
v___y_118_ = v_a_99_;
v___y_119_ = v_a_100_;
v___y_120_ = v_a_101_;
goto v___jp_115_;
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_s_97_);
lean_dec(v_todo_96_);
v_a_139_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_126_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_126_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
v___jp_103_:
{
lean_object* v_fst_105_; lean_object* v_snd_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_114_; 
v_fst_105_ = lean_ctor_get(v_a_104_, 0);
v_snd_106_ = lean_ctor_get(v_a_104_, 1);
v_isSharedCheck_114_ = !lean_is_exclusive(v_a_104_);
if (v_isSharedCheck_114_ == 0)
{
v___x_108_ = v_a_104_;
v_isShared_109_ = v_isSharedCheck_114_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_snd_106_);
lean_inc(v_fst_105_);
lean_dec(v_a_104_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_114_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_fst_105_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_snd_106_);
v___x_111_ = v_reuseFailAlloc_113_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_112_; 
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
}
v___jp_115_:
{
lean_object* v_fvarSet_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v_a_124_; lean_object* v_a_125_; 
v_fvarSet_121_ = lean_ctor_get(v_s_x27_116_, 1);
lean_inc(v_fvarSet_121_);
lean_dec_ref(v_s_x27_116_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v_todo_96_);
lean_ctor_set(v___x_122_, 1, v_s_97_);
v___x_123_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v___x_122_, v_fvarSet_121_);
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref(v___x_123_);
v_a_125_ = lean_ctor_get(v_a_124_, 0);
lean_inc(v_a_125_);
lean_dec(v_a_124_);
v_a_104_ = v_a_125_;
goto v___jp_103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object* v_fvarId_147_, lean_object* v_todo_148_, lean_object* v_s_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_fvarId_147_, v_todo_148_, v_s_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object* v_00_u03b2_156_, lean_object* v_k_157_, lean_object* v_t_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_157_, v_t_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object* v_00_u03b2_160_, lean_object* v_k_161_, lean_object* v_t_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(v_00_u03b2_160_, v_k_161_, v_t_162_);
lean_dec(v_t_162_);
lean_dec(v_k_161_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object* v_init_165_, lean_object* v_x_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_165_, v_x_166_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object* v_init_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(v_init_173_, v_x_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object* v_todo_181_, lean_object* v_s_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
if (lean_obj_tag(v_todo_181_) == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v_s_182_);
return v___x_188_;
}
else
{
lean_object* v_head_189_; lean_object* v_tail_190_; uint8_t v___x_191_; 
v_head_189_ = lean_ctor_get(v_todo_181_, 0);
lean_inc(v_head_189_);
v_tail_190_ = lean_ctor_get(v_todo_181_, 1);
lean_inc(v_tail_190_);
lean_dec_ref_known(v_todo_181_, 2);
v___x_191_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_head_189_, v_s_182_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; 
lean_inc(v_head_189_);
v___x_192_ = l_Lean_FVarIdSet_insert(v_s_182_, v_head_189_);
v___x_193_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_head_189_, v_tail_190_, v___x_192_, v_a_183_, v_a_184_, v_a_185_, v_a_186_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v_fst_195_; lean_object* v_snd_196_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v_fst_195_ = lean_ctor_get(v_a_194_, 0);
lean_inc(v_fst_195_);
v_snd_196_ = lean_ctor_get(v_a_194_, 1);
lean_inc(v_snd_196_);
lean_dec(v_a_194_);
v_todo_181_ = v_fst_195_;
v_s_182_ = v_snd_196_;
goto _start;
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
v_a_198_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_193_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_193_);
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
else
{
lean_dec(v_head_189_);
v_todo_181_ = v_tail_190_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object* v_todo_207_, lean_object* v_s_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v_todo_207_, v_s_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec_ref(v_a_209_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object* v_as_215_, size_t v_sz_216_, size_t v_i_217_, lean_object* v_b_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_a_225_; uint8_t v___x_229_; 
v___x_229_ = lean_usize_dec_lt(v_i_217_, v_sz_216_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_b_218_);
return v___x_230_;
}
else
{
lean_object* v_fst_231_; lean_object* v_snd_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_267_; 
v_fst_231_ = lean_ctor_get(v_b_218_, 0);
v_snd_232_ = lean_ctor_get(v_b_218_, 1);
v_isSharedCheck_267_ = !lean_is_exclusive(v_b_218_);
if (v_isSharedCheck_267_ == 0)
{
v___x_234_ = v_b_218_;
v_isShared_235_ = v_isSharedCheck_267_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_snd_232_);
lean_inc(v_fst_231_);
lean_dec(v_b_218_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_267_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_a_236_; uint8_t v___x_237_; 
v_a_236_ = lean_array_uget_borrowed(v_as_215_, v_i_217_);
v___x_237_ = l_Lean_Expr_isFVar(v_a_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
lean_inc(v___y_222_);
lean_inc_ref(v___y_221_);
lean_inc(v___y_220_);
lean_inc_ref(v___y_219_);
lean_inc(v_a_236_);
v___x_238_ = lean_infer_type(v_a_236_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_240_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_239_);
lean_dec_ref_known(v___x_238_, 1);
v___x_240_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_a_239_, v___y_220_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_a_241_);
lean_dec_ref_known(v___x_240_, 1);
v___x_242_ = l_Lean_collectFVars(v_fst_231_, v_a_241_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_242_);
v___x_244_ = v___x_234_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_snd_232_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
v_a_225_ = v___x_244_;
goto v___jp_224_;
}
}
else
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
lean_del_object(v___x_234_);
lean_dec(v_snd_232_);
lean_dec(v_fst_231_);
v_a_246_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_240_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_240_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_del_object(v___x_234_);
lean_dec(v_snd_232_);
lean_dec(v_fst_231_);
v_a_254_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_238_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_238_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_262_ = l_Lean_Expr_fvarId_x21(v_a_236_);
v___x_263_ = lean_array_push(v_snd_232_, v___x_262_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v___x_263_);
v___x_265_ = v___x_234_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_fst_231_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
v_a_225_ = v___x_265_;
goto v___jp_224_;
}
}
}
}
v___jp_224_:
{
size_t v___x_226_; size_t v___x_227_; 
v___x_226_ = ((size_t)1ULL);
v___x_227_ = lean_usize_add(v_i_217_, v___x_226_);
v_i_217_ = v___x_227_;
v_b_218_ = v_a_225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object* v_as_268_, lean_object* v_sz_269_, lean_object* v_i_270_, lean_object* v_b_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
size_t v_sz_boxed_277_; size_t v_i_boxed_278_; lean_object* v_res_279_; 
v_sz_boxed_277_ = lean_unbox_usize(v_sz_269_);
lean_dec(v_sz_269_);
v_i_boxed_278_ = lean_unbox_usize(v_i_270_);
lean_dec(v_i_270_);
v_res_279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_as_268_, v_sz_boxed_277_, v_i_boxed_278_, v_b_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec_ref(v_as_268_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object* v_targets_280_, lean_object* v_forbidden_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_todo_287_; lean_object* v_s_288_; lean_object* v___x_289_; size_t v_sz_290_; size_t v___x_291_; lean_object* v___x_292_; 
v_todo_287_ = ((lean_object*)(l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0));
v_s_288_ = l_Lean_CollectFVars_State_ofFVarSet(v_forbidden_281_, v_todo_287_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v_s_288_);
lean_ctor_set(v___x_289_, 1, v_todo_287_);
v_sz_290_ = lean_array_size(v_targets_280_);
v___x_291_ = ((size_t)0ULL);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_targets_280_, v_sz_290_, v___x_291_, v___x_289_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v_fst_294_; lean_object* v_snd_295_; lean_object* v_fvarSet_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v_fst_294_ = lean_ctor_get(v_a_293_, 0);
lean_inc(v_fst_294_);
v_snd_295_ = lean_ctor_get(v_a_293_, 1);
lean_inc(v_snd_295_);
lean_dec(v_a_293_);
v_fvarSet_296_ = lean_ctor_get(v_fst_294_, 1);
lean_inc(v_fvarSet_296_);
lean_dec(v_fst_294_);
v___x_297_ = lean_array_to_list(v_snd_295_);
v___x_298_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v___x_297_, v_fvarSet_296_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
return v___x_298_;
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
v_a_299_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___x_292_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_292_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object* v_targets_307_, lean_object* v_forbidden_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_307_, v_forbidden_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
lean_dec_ref(v_targets_307_);
return v_res_314_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t v___y_315_, lean_object* v_x_316_){
_start:
{
return v___y_315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object* v___y_317_, lean_object* v_x_318_){
_start:
{
uint8_t v___y_9172__boxed_319_; uint8_t v_res_320_; lean_object* v_r_321_; 
v___y_9172__boxed_319_ = lean_unbox(v___y_317_);
v_res_320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(v___y_9172__boxed_319_, v_x_318_);
lean_dec(v_x_318_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object* v_fst_322_, lean_object* v_x_323_){
_start:
{
uint8_t v___x_324_; 
v___x_324_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_x_323_, v_fst_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object* v_fst_325_, lean_object* v_x_326_){
_start:
{
uint8_t v_res_327_; lean_object* v_r_328_; 
v_res_327_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(v_fst_325_, v_x_326_);
lean_dec(v_x_326_);
lean_dec(v_fst_325_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_box(0);
v___x_330_ = lean_unsigned_to_nat(16u);
v___x_331_ = lean_mk_array(v___x_330_, v___x_329_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__0);
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(lean_object* v_forbidden_335_, uint8_t v_ignoreLetDecls_336_, lean_object* v_as_337_, size_t v_sz_338_, size_t v_i_339_, lean_object* v_b_340_, lean_object* v___y_341_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_lt(v_i_339_, v_sz_338_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v_b_340_);
return v___x_344_;
}
else
{
lean_object* v_snd_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_502_; 
v_snd_345_ = lean_ctor_get(v_b_340_, 1);
v_isSharedCheck_502_ = !lean_is_exclusive(v_b_340_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; 
v_unused_503_ = lean_ctor_get(v_b_340_, 0);
lean_dec(v_unused_503_);
v___x_347_ = v_b_340_;
v_isShared_348_ = v_isSharedCheck_502_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_snd_345_);
lean_dec(v_b_340_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_502_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v_a_351_; lean_object* v_a_358_; 
v___x_349_ = lean_box(0);
v_a_358_ = lean_array_uget_borrowed(v_as_337_, v_i_339_);
if (lean_obj_tag(v_a_358_) == 0)
{
v_a_351_ = v_snd_345_;
goto v___jp_350_;
}
else
{
lean_object* v_val_359_; lean_object* v_fst_360_; lean_object* v_snd_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_501_; 
v_val_359_ = lean_ctor_get(v_a_358_, 0);
v_fst_360_ = lean_ctor_get(v_snd_345_, 0);
v_snd_361_ = lean_ctor_get(v_snd_345_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v_snd_345_);
if (v_isSharedCheck_501_ == 0)
{
v___x_363_ = v_snd_345_;
v_isShared_364_ = v_isSharedCheck_501_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_snd_361_);
lean_inc(v_fst_360_);
lean_dec(v_snd_345_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_501_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
uint8_t v_a_370_; uint8_t v_fst_376_; lean_object* v_mctx_377_; lean_object* v___y_393_; uint8_t v_fst_399_; lean_object* v_snd_400_; lean_object* v___y_417_; uint8_t v_fst_422_; lean_object* v_mctx_423_; lean_object* v___y_439_; lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_444_ = l_Lean_LocalDecl_fvarId(v_val_359_);
v___x_445_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_444_, v_forbidden_335_);
lean_dec(v___x_444_);
if (v___x_445_ == 0)
{
uint8_t v___x_446_; 
v___x_446_ = l_Lean_LocalDecl_isAuxDecl(v_val_359_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = l_Lean_LocalDecl_binderInfo(v_val_359_);
v___x_448_ = l_Lean_BinderInfo_isInstImplicit(v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___f_449_; lean_object* v___y_451_; lean_object* v___y_452_; lean_object* v_snd_453_; lean_object* v___y_459_; lean_object* v___y_460_; lean_object* v___y_461_; uint8_t v___y_468_; 
lean_inc(v_fst_360_);
v___f_449_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_449_, 0, v_fst_360_);
if (v_ignoreLetDecls_336_ == 0)
{
v___y_468_ = v_ignoreLetDecls_336_;
goto v___jp_467_;
}
else
{
uint8_t v___x_500_; 
v___x_500_ = l_Lean_LocalDecl_isLet(v_val_359_, v___x_448_);
if (v___x_500_ == 0)
{
v___y_468_ = v___x_500_;
goto v___jp_467_;
}
else
{
lean_dec_ref(v___f_449_);
goto v___jp_365_;
}
}
v___jp_450_:
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_Expr_hasFVar(v___y_452_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; 
v___x_455_ = l_Lean_Expr_hasMVar(v___y_452_);
if (v___x_455_ == 0)
{
lean_dec_ref(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec_ref(v___f_449_);
v_fst_399_ = v___x_455_;
v_snd_400_ = v_snd_453_;
goto v___jp_398_;
}
else
{
lean_object* v___x_456_; 
v___x_456_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___y_451_, v___y_452_, v_snd_453_);
v___y_417_ = v___x_456_;
goto v___jp_416_;
}
}
else
{
lean_object* v___x_457_; 
v___x_457_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___y_451_, v___y_452_, v_snd_453_);
v___y_417_ = v___x_457_;
goto v___jp_416_;
}
}
v___jp_458_:
{
lean_object* v_fst_462_; uint8_t v___x_463_; 
v_fst_462_ = lean_ctor_get(v___y_461_, 0);
v___x_463_ = lean_unbox(v_fst_462_);
if (v___x_463_ == 0)
{
lean_object* v_snd_464_; 
v_snd_464_ = lean_ctor_get(v___y_461_, 1);
lean_inc(v_snd_464_);
lean_dec_ref(v___y_461_);
v___y_451_ = v___y_459_;
v___y_452_ = v___y_460_;
v_snd_453_ = v_snd_464_;
goto v___jp_450_;
}
else
{
lean_object* v_snd_465_; uint8_t v___x_466_; 
lean_inc(v_fst_462_);
lean_dec_ref(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec_ref(v___f_449_);
v_snd_465_ = lean_ctor_get(v___y_461_, 1);
lean_inc(v_snd_465_);
lean_dec_ref(v___y_461_);
v___x_466_ = lean_unbox(v_fst_462_);
lean_dec(v_fst_462_);
v_fst_399_ = v___x_466_;
v_snd_400_ = v_snd_465_;
goto v___jp_398_;
}
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v___f_470_; 
v___x_469_ = lean_box(v___y_468_);
v___f_470_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_470_, 0, v___x_469_);
if (lean_obj_tag(v_val_359_) == 0)
{
lean_object* v_type_471_; lean_object* v___x_472_; lean_object* v_mctx_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v_type_471_ = lean_ctor_get(v_val_359_, 3);
v___x_472_ = lean_st_ref_get(v___y_341_);
v_mctx_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc_ref_n(v_mctx_473_, 2);
lean_dec(v___x_472_);
v___x_474_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v_mctx_473_);
v___x_476_ = l_Lean_Expr_hasFVar(v_type_471_);
if (v___x_476_ == 0)
{
uint8_t v___x_477_; 
v___x_477_ = l_Lean_Expr_hasMVar(v_type_471_);
if (v___x_477_ == 0)
{
lean_dec_ref_known(v___x_475_, 2);
lean_dec_ref(v___f_470_);
lean_dec_ref(v___f_449_);
v_fst_422_ = v___x_477_;
v_mctx_423_ = v_mctx_473_;
goto v___jp_421_;
}
else
{
lean_object* v___x_478_; 
lean_dec_ref(v_mctx_473_);
lean_inc_ref(v_type_471_);
v___x_478_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___f_470_, v_type_471_, v___x_475_);
v___y_439_ = v___x_478_;
goto v___jp_438_;
}
}
else
{
lean_object* v___x_479_; 
lean_dec_ref(v_mctx_473_);
lean_inc_ref(v_type_471_);
v___x_479_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___f_470_, v_type_471_, v___x_475_);
v___y_439_ = v___x_479_;
goto v___jp_438_;
}
}
else
{
uint8_t v_nondep_480_; 
v_nondep_480_ = lean_ctor_get_uint8(v_val_359_, sizeof(void*)*5);
if (v_nondep_480_ == 0)
{
lean_object* v_type_481_; lean_object* v_value_482_; lean_object* v___x_483_; lean_object* v_mctx_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v_type_481_ = lean_ctor_get(v_val_359_, 3);
v_value_482_ = lean_ctor_get(v_val_359_, 4);
v___x_483_ = lean_st_ref_get(v___y_341_);
v_mctx_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc_ref(v_mctx_484_);
lean_dec(v___x_483_);
v___x_485_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
lean_ctor_set(v___x_486_, 1, v_mctx_484_);
v___x_487_ = l_Lean_Expr_hasFVar(v_type_481_);
if (v___x_487_ == 0)
{
uint8_t v___x_488_; 
v___x_488_ = l_Lean_Expr_hasMVar(v_type_481_);
if (v___x_488_ == 0)
{
lean_inc_ref(v_value_482_);
v___y_451_ = v___f_470_;
v___y_452_ = v_value_482_;
v_snd_453_ = v___x_486_;
goto v___jp_450_;
}
else
{
lean_object* v___x_489_; 
lean_inc_ref(v_type_481_);
lean_inc_ref(v___f_470_);
lean_inc_ref(v___f_449_);
v___x_489_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___f_470_, v_type_481_, v___x_486_);
lean_inc_ref(v_value_482_);
v___y_459_ = v___f_470_;
v___y_460_ = v_value_482_;
v___y_461_ = v___x_489_;
goto v___jp_458_;
}
}
else
{
lean_object* v___x_490_; 
lean_inc_ref(v_type_481_);
lean_inc_ref(v___f_470_);
lean_inc_ref(v___f_449_);
v___x_490_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___f_470_, v_type_481_, v___x_486_);
lean_inc_ref(v_value_482_);
v___y_459_ = v___f_470_;
v___y_460_ = v_value_482_;
v___y_461_ = v___x_490_;
goto v___jp_458_;
}
}
else
{
lean_object* v_type_491_; lean_object* v___x_492_; lean_object* v_mctx_493_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v_type_491_ = lean_ctor_get(v_val_359_, 3);
v___x_492_ = lean_st_ref_get(v___y_341_);
v_mctx_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc_ref_n(v_mctx_493_, 2);
lean_dec(v___x_492_);
v___x_494_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v_mctx_493_);
v___x_496_ = l_Lean_Expr_hasFVar(v_type_491_);
if (v___x_496_ == 0)
{
uint8_t v___x_497_; 
v___x_497_ = l_Lean_Expr_hasMVar(v_type_491_);
if (v___x_497_ == 0)
{
lean_dec_ref_known(v___x_495_, 2);
lean_dec_ref(v___f_470_);
lean_dec_ref(v___f_449_);
v_fst_376_ = v___x_497_;
v_mctx_377_ = v_mctx_493_;
goto v___jp_375_;
}
else
{
lean_object* v___x_498_; 
lean_dec_ref(v_mctx_493_);
lean_inc_ref(v_type_491_);
v___x_498_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___f_470_, v_type_491_, v___x_495_);
v___y_393_ = v___x_498_;
goto v___jp_392_;
}
}
else
{
lean_object* v___x_499_; 
lean_dec_ref(v_mctx_493_);
lean_inc_ref(v_type_491_);
v___x_499_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_449_, v___f_470_, v_type_491_, v___x_495_);
v___y_393_ = v___x_499_;
goto v___jp_392_;
}
}
}
}
}
else
{
goto v___jp_365_;
}
}
else
{
goto v___jp_365_;
}
}
else
{
goto v___jp_365_;
}
v___jp_365_:
{
lean_object* v___x_367_; 
if (v_isShared_364_ == 0)
{
v___x_367_ = v___x_363_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_fst_360_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_snd_361_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
v_a_351_ = v___x_367_;
goto v___jp_350_;
}
}
v___jp_369_:
{
if (v_a_370_ == 0)
{
goto v___jp_365_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
lean_del_object(v___x_363_);
v___x_371_ = l_Lean_LocalDecl_fvarId(v_val_359_);
lean_inc(v___x_371_);
v___x_372_ = l_Lean_FVarIdSet_insert(v_snd_361_, v___x_371_);
v___x_373_ = l_Lean_FVarIdSet_insert(v_fst_360_, v___x_371_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_372_);
v_a_351_ = v___x_374_;
goto v___jp_350_;
}
}
v___jp_375_:
{
lean_object* v___x_378_; lean_object* v_cache_379_; lean_object* v_zetaDeltaFVarIds_380_; lean_object* v_postponed_381_; lean_object* v_diag_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_390_; 
v___x_378_ = lean_st_ref_take(v___y_341_);
v_cache_379_ = lean_ctor_get(v___x_378_, 1);
v_zetaDeltaFVarIds_380_ = lean_ctor_get(v___x_378_, 2);
v_postponed_381_ = lean_ctor_get(v___x_378_, 3);
v_diag_382_ = lean_ctor_get(v___x_378_, 4);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_390_ == 0)
{
lean_object* v_unused_391_; 
v_unused_391_ = lean_ctor_get(v___x_378_, 0);
lean_dec(v_unused_391_);
v___x_384_ = v___x_378_;
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_diag_382_);
lean_inc(v_postponed_381_);
lean_inc(v_zetaDeltaFVarIds_380_);
lean_inc(v_cache_379_);
lean_dec(v___x_378_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v_mctx_377_);
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_mctx_377_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_cache_379_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v_zetaDeltaFVarIds_380_);
lean_ctor_set(v_reuseFailAlloc_389_, 3, v_postponed_381_);
lean_ctor_set(v_reuseFailAlloc_389_, 4, v_diag_382_);
v___x_387_ = v_reuseFailAlloc_389_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; 
v___x_388_ = lean_st_ref_put(v___y_341_, v___x_387_);
v_a_370_ = v_fst_376_;
goto v___jp_369_;
}
}
}
v___jp_392_:
{
lean_object* v_snd_394_; lean_object* v_fst_395_; lean_object* v_mctx_396_; uint8_t v___x_397_; 
v_snd_394_ = lean_ctor_get(v___y_393_, 1);
lean_inc(v_snd_394_);
v_fst_395_ = lean_ctor_get(v___y_393_, 0);
lean_inc(v_fst_395_);
lean_dec_ref(v___y_393_);
v_mctx_396_ = lean_ctor_get(v_snd_394_, 1);
lean_inc_ref(v_mctx_396_);
lean_dec(v_snd_394_);
v___x_397_ = lean_unbox(v_fst_395_);
lean_dec(v_fst_395_);
v_fst_376_ = v___x_397_;
v_mctx_377_ = v_mctx_396_;
goto v___jp_375_;
}
v___jp_398_:
{
lean_object* v_mctx_401_; lean_object* v___x_402_; lean_object* v_cache_403_; lean_object* v_zetaDeltaFVarIds_404_; lean_object* v_postponed_405_; lean_object* v_diag_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_414_; 
v_mctx_401_ = lean_ctor_get(v_snd_400_, 1);
lean_inc_ref(v_mctx_401_);
lean_dec_ref(v_snd_400_);
v___x_402_ = lean_st_ref_take(v___y_341_);
v_cache_403_ = lean_ctor_get(v___x_402_, 1);
v_zetaDeltaFVarIds_404_ = lean_ctor_get(v___x_402_, 2);
v_postponed_405_ = lean_ctor_get(v___x_402_, 3);
v_diag_406_ = lean_ctor_get(v___x_402_, 4);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_402_, 0);
lean_dec(v_unused_415_);
v___x_408_ = v___x_402_;
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_diag_406_);
lean_inc(v_postponed_405_);
lean_inc(v_zetaDeltaFVarIds_404_);
lean_inc(v_cache_403_);
lean_dec(v___x_402_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_411_; 
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 0, v_mctx_401_);
v___x_411_ = v___x_408_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_mctx_401_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_cache_403_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_zetaDeltaFVarIds_404_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_postponed_405_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_diag_406_);
v___x_411_ = v_reuseFailAlloc_413_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_412_; 
v___x_412_ = lean_st_ref_put(v___y_341_, v___x_411_);
v_a_370_ = v_fst_399_;
goto v___jp_369_;
}
}
}
v___jp_416_:
{
lean_object* v_fst_418_; lean_object* v_snd_419_; uint8_t v___x_420_; 
v_fst_418_ = lean_ctor_get(v___y_417_, 0);
lean_inc(v_fst_418_);
v_snd_419_ = lean_ctor_get(v___y_417_, 1);
lean_inc(v_snd_419_);
lean_dec_ref(v___y_417_);
v___x_420_ = lean_unbox(v_fst_418_);
lean_dec(v_fst_418_);
v_fst_399_ = v___x_420_;
v_snd_400_ = v_snd_419_;
goto v___jp_398_;
}
v___jp_421_:
{
lean_object* v___x_424_; lean_object* v_cache_425_; lean_object* v_zetaDeltaFVarIds_426_; lean_object* v_postponed_427_; lean_object* v_diag_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_436_; 
v___x_424_ = lean_st_ref_take(v___y_341_);
v_cache_425_ = lean_ctor_get(v___x_424_, 1);
v_zetaDeltaFVarIds_426_ = lean_ctor_get(v___x_424_, 2);
v_postponed_427_ = lean_ctor_get(v___x_424_, 3);
v_diag_428_ = lean_ctor_get(v___x_424_, 4);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_436_ == 0)
{
lean_object* v_unused_437_; 
v_unused_437_ = lean_ctor_get(v___x_424_, 0);
lean_dec(v_unused_437_);
v___x_430_ = v___x_424_;
v_isShared_431_ = v_isSharedCheck_436_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_diag_428_);
lean_inc(v_postponed_427_);
lean_inc(v_zetaDeltaFVarIds_426_);
lean_inc(v_cache_425_);
lean_dec(v___x_424_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_436_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v_mctx_423_);
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_mctx_423_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_cache_425_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_zetaDeltaFVarIds_426_);
lean_ctor_set(v_reuseFailAlloc_435_, 3, v_postponed_427_);
lean_ctor_set(v_reuseFailAlloc_435_, 4, v_diag_428_);
v___x_433_ = v_reuseFailAlloc_435_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; 
v___x_434_ = lean_st_ref_put(v___y_341_, v___x_433_);
v_a_370_ = v_fst_422_;
goto v___jp_369_;
}
}
}
v___jp_438_:
{
lean_object* v_snd_440_; lean_object* v_fst_441_; lean_object* v_mctx_442_; uint8_t v___x_443_; 
v_snd_440_ = lean_ctor_get(v___y_439_, 1);
lean_inc(v_snd_440_);
v_fst_441_ = lean_ctor_get(v___y_439_, 0);
lean_inc(v_fst_441_);
lean_dec_ref(v___y_439_);
v_mctx_442_ = lean_ctor_get(v_snd_440_, 1);
lean_inc_ref(v_mctx_442_);
lean_dec(v_snd_440_);
v___x_443_ = lean_unbox(v_fst_441_);
lean_dec(v_fst_441_);
v_fst_422_ = v___x_443_;
v_mctx_423_ = v_mctx_442_;
goto v___jp_421_;
}
}
}
v___jp_350_:
{
lean_object* v___x_353_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v_a_351_);
lean_ctor_set(v___x_347_, 0, v___x_349_);
v___x_353_ = v___x_347_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_a_351_);
v___x_353_ = v_reuseFailAlloc_357_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
size_t v___x_354_; size_t v___x_355_; 
v___x_354_ = ((size_t)1ULL);
v___x_355_ = lean_usize_add(v_i_339_, v___x_354_);
v_i_339_ = v___x_355_;
v_b_340_ = v___x_353_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_forbidden_504_, lean_object* v_ignoreLetDecls_505_, lean_object* v_as_506_, lean_object* v_sz_507_, lean_object* v_i_508_, lean_object* v_b_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_512_; size_t v_sz_boxed_513_; size_t v_i_boxed_514_; lean_object* v_res_515_; 
v_ignoreLetDecls_boxed_512_ = lean_unbox(v_ignoreLetDecls_505_);
v_sz_boxed_513_ = lean_unbox_usize(v_sz_507_);
lean_dec(v_sz_507_);
v_i_boxed_514_ = lean_unbox_usize(v_i_508_);
lean_dec(v_i_508_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_504_, v_ignoreLetDecls_boxed_512_, v_as_506_, v_sz_boxed_513_, v_i_boxed_514_, v_b_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v_as_506_);
lean_dec(v_forbidden_504_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(lean_object* v_forbidden_516_, uint8_t v_ignoreLetDecls_517_, lean_object* v_as_518_, size_t v_sz_519_, size_t v_i_520_, lean_object* v_b_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
uint8_t v___x_527_; 
v___x_527_ = lean_usize_dec_lt(v_i_520_, v_sz_519_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v_b_521_);
return v___x_528_;
}
else
{
lean_object* v_snd_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_686_; 
v_snd_529_ = lean_ctor_get(v_b_521_, 1);
v_isSharedCheck_686_ = !lean_is_exclusive(v_b_521_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v_b_521_, 0);
lean_dec(v_unused_687_);
v___x_531_ = v_b_521_;
v_isShared_532_ = v_isSharedCheck_686_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_snd_529_);
lean_dec(v_b_521_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_686_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v_a_535_; lean_object* v_a_542_; 
v___x_533_ = lean_box(0);
v_a_542_ = lean_array_uget_borrowed(v_as_518_, v_i_520_);
if (lean_obj_tag(v_a_542_) == 0)
{
v_a_535_ = v_snd_529_;
goto v___jp_534_;
}
else
{
lean_object* v_val_543_; lean_object* v_fst_544_; lean_object* v_snd_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_685_; 
v_val_543_ = lean_ctor_get(v_a_542_, 0);
v_fst_544_ = lean_ctor_get(v_snd_529_, 0);
v_snd_545_ = lean_ctor_get(v_snd_529_, 1);
v_isSharedCheck_685_ = !lean_is_exclusive(v_snd_529_);
if (v_isSharedCheck_685_ == 0)
{
v___x_547_ = v_snd_529_;
v_isShared_548_ = v_isSharedCheck_685_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_snd_545_);
lean_inc(v_fst_544_);
lean_dec(v_snd_529_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_685_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
uint8_t v_a_554_; uint8_t v_fst_560_; lean_object* v_mctx_561_; lean_object* v___y_577_; uint8_t v_fst_583_; lean_object* v_snd_584_; lean_object* v___y_601_; uint8_t v_fst_606_; lean_object* v_mctx_607_; lean_object* v___y_623_; lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_628_ = l_Lean_LocalDecl_fvarId(v_val_543_);
v___x_629_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_628_, v_forbidden_516_);
lean_dec(v___x_628_);
if (v___x_629_ == 0)
{
uint8_t v___x_630_; 
v___x_630_ = l_Lean_LocalDecl_isAuxDecl(v_val_543_);
if (v___x_630_ == 0)
{
uint8_t v___x_631_; uint8_t v___x_632_; 
v___x_631_ = l_Lean_LocalDecl_binderInfo(v_val_543_);
v___x_632_ = l_Lean_BinderInfo_isInstImplicit(v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___f_633_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v_snd_637_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; uint8_t v___y_652_; 
lean_inc(v_fst_544_);
v___f_633_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_633_, 0, v_fst_544_);
if (v_ignoreLetDecls_517_ == 0)
{
v___y_652_ = v_ignoreLetDecls_517_;
goto v___jp_651_;
}
else
{
uint8_t v___x_684_; 
v___x_684_ = l_Lean_LocalDecl_isLet(v_val_543_, v___x_632_);
if (v___x_684_ == 0)
{
v___y_652_ = v___x_684_;
goto v___jp_651_;
}
else
{
lean_dec_ref(v___f_633_);
goto v___jp_549_;
}
}
v___jp_634_:
{
uint8_t v___x_638_; 
v___x_638_ = l_Lean_Expr_hasFVar(v___y_636_);
if (v___x_638_ == 0)
{
uint8_t v___x_639_; 
v___x_639_ = l_Lean_Expr_hasMVar(v___y_636_);
if (v___x_639_ == 0)
{
lean_dec_ref(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec_ref(v___f_633_);
v_fst_583_ = v___x_639_;
v_snd_584_ = v_snd_637_;
goto v___jp_582_;
}
else
{
lean_object* v___x_640_; 
v___x_640_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___y_635_, v___y_636_, v_snd_637_);
v___y_601_ = v___x_640_;
goto v___jp_600_;
}
}
else
{
lean_object* v___x_641_; 
v___x_641_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___y_635_, v___y_636_, v_snd_637_);
v___y_601_ = v___x_641_;
goto v___jp_600_;
}
}
v___jp_642_:
{
lean_object* v_fst_646_; uint8_t v___x_647_; 
v_fst_646_ = lean_ctor_get(v___y_645_, 0);
v___x_647_ = lean_unbox(v_fst_646_);
if (v___x_647_ == 0)
{
lean_object* v_snd_648_; 
v_snd_648_ = lean_ctor_get(v___y_645_, 1);
lean_inc(v_snd_648_);
lean_dec_ref(v___y_645_);
v___y_635_ = v___y_643_;
v___y_636_ = v___y_644_;
v_snd_637_ = v_snd_648_;
goto v___jp_634_;
}
else
{
lean_object* v_snd_649_; uint8_t v___x_650_; 
lean_inc(v_fst_646_);
lean_dec_ref(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec_ref(v___f_633_);
v_snd_649_ = lean_ctor_get(v___y_645_, 1);
lean_inc(v_snd_649_);
lean_dec_ref(v___y_645_);
v___x_650_ = lean_unbox(v_fst_646_);
lean_dec(v_fst_646_);
v_fst_583_ = v___x_650_;
v_snd_584_ = v_snd_649_;
goto v___jp_582_;
}
}
v___jp_651_:
{
lean_object* v___x_653_; lean_object* v___f_654_; 
v___x_653_ = lean_box(v___y_652_);
v___f_654_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_654_, 0, v___x_653_);
if (lean_obj_tag(v_val_543_) == 0)
{
lean_object* v_type_655_; lean_object* v___x_656_; lean_object* v_mctx_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v_type_655_ = lean_ctor_get(v_val_543_, 3);
v___x_656_ = lean_st_ref_get(v___y_523_);
v_mctx_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc_ref_n(v_mctx_657_, 2);
lean_dec(v___x_656_);
v___x_658_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
lean_ctor_set(v___x_659_, 1, v_mctx_657_);
v___x_660_ = l_Lean_Expr_hasFVar(v_type_655_);
if (v___x_660_ == 0)
{
uint8_t v___x_661_; 
v___x_661_ = l_Lean_Expr_hasMVar(v_type_655_);
if (v___x_661_ == 0)
{
lean_dec_ref_known(v___x_659_, 2);
lean_dec_ref(v___f_654_);
lean_dec_ref(v___f_633_);
v_fst_606_ = v___x_661_;
v_mctx_607_ = v_mctx_657_;
goto v___jp_605_;
}
else
{
lean_object* v___x_662_; 
lean_dec_ref(v_mctx_657_);
lean_inc_ref(v_type_655_);
v___x_662_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___f_654_, v_type_655_, v___x_659_);
v___y_623_ = v___x_662_;
goto v___jp_622_;
}
}
else
{
lean_object* v___x_663_; 
lean_dec_ref(v_mctx_657_);
lean_inc_ref(v_type_655_);
v___x_663_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___f_654_, v_type_655_, v___x_659_);
v___y_623_ = v___x_663_;
goto v___jp_622_;
}
}
else
{
uint8_t v_nondep_664_; 
v_nondep_664_ = lean_ctor_get_uint8(v_val_543_, sizeof(void*)*5);
if (v_nondep_664_ == 0)
{
lean_object* v_type_665_; lean_object* v_value_666_; lean_object* v___x_667_; lean_object* v_mctx_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v_type_665_ = lean_ctor_get(v_val_543_, 3);
v_value_666_ = lean_ctor_get(v_val_543_, 4);
v___x_667_ = lean_st_ref_get(v___y_523_);
v_mctx_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc_ref(v_mctx_668_);
lean_dec(v___x_667_);
v___x_669_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v_mctx_668_);
v___x_671_ = l_Lean_Expr_hasFVar(v_type_665_);
if (v___x_671_ == 0)
{
uint8_t v___x_672_; 
v___x_672_ = l_Lean_Expr_hasMVar(v_type_665_);
if (v___x_672_ == 0)
{
lean_inc_ref(v_value_666_);
v___y_635_ = v___f_654_;
v___y_636_ = v_value_666_;
v_snd_637_ = v___x_670_;
goto v___jp_634_;
}
else
{
lean_object* v___x_673_; 
lean_inc_ref(v_type_665_);
lean_inc_ref(v___f_654_);
lean_inc_ref(v___f_633_);
v___x_673_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___f_654_, v_type_665_, v___x_670_);
lean_inc_ref(v_value_666_);
v___y_643_ = v___f_654_;
v___y_644_ = v_value_666_;
v___y_645_ = v___x_673_;
goto v___jp_642_;
}
}
else
{
lean_object* v___x_674_; 
lean_inc_ref(v_type_665_);
lean_inc_ref(v___f_654_);
lean_inc_ref(v___f_633_);
v___x_674_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___f_654_, v_type_665_, v___x_670_);
lean_inc_ref(v_value_666_);
v___y_643_ = v___f_654_;
v___y_644_ = v_value_666_;
v___y_645_ = v___x_674_;
goto v___jp_642_;
}
}
else
{
lean_object* v_type_675_; lean_object* v___x_676_; lean_object* v_mctx_677_; lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v_type_675_ = lean_ctor_get(v_val_543_, 3);
v___x_676_ = lean_st_ref_get(v___y_523_);
v_mctx_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc_ref_n(v_mctx_677_, 2);
lean_dec(v___x_676_);
v___x_678_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v_mctx_677_);
v___x_680_ = l_Lean_Expr_hasFVar(v_type_675_);
if (v___x_680_ == 0)
{
uint8_t v___x_681_; 
v___x_681_ = l_Lean_Expr_hasMVar(v_type_675_);
if (v___x_681_ == 0)
{
lean_dec_ref_known(v___x_679_, 2);
lean_dec_ref(v___f_654_);
lean_dec_ref(v___f_633_);
v_fst_560_ = v___x_681_;
v_mctx_561_ = v_mctx_677_;
goto v___jp_559_;
}
else
{
lean_object* v___x_682_; 
lean_dec_ref(v_mctx_677_);
lean_inc_ref(v_type_675_);
v___x_682_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___f_654_, v_type_675_, v___x_679_);
v___y_577_ = v___x_682_;
goto v___jp_576_;
}
}
else
{
lean_object* v___x_683_; 
lean_dec_ref(v_mctx_677_);
lean_inc_ref(v_type_675_);
v___x_683_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_633_, v___f_654_, v_type_675_, v___x_679_);
v___y_577_ = v___x_683_;
goto v___jp_576_;
}
}
}
}
}
else
{
goto v___jp_549_;
}
}
else
{
goto v___jp_549_;
}
}
else
{
goto v___jp_549_;
}
v___jp_549_:
{
lean_object* v___x_551_; 
if (v_isShared_548_ == 0)
{
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_fst_544_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_snd_545_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
v_a_535_ = v___x_551_;
goto v___jp_534_;
}
}
v___jp_553_:
{
if (v_a_554_ == 0)
{
goto v___jp_549_;
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_del_object(v___x_547_);
v___x_555_ = l_Lean_LocalDecl_fvarId(v_val_543_);
lean_inc(v___x_555_);
v___x_556_ = l_Lean_FVarIdSet_insert(v_snd_545_, v___x_555_);
v___x_557_ = l_Lean_FVarIdSet_insert(v_fst_544_, v___x_555_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
v_a_535_ = v___x_558_;
goto v___jp_534_;
}
}
v___jp_559_:
{
lean_object* v___x_562_; lean_object* v_cache_563_; lean_object* v_zetaDeltaFVarIds_564_; lean_object* v_postponed_565_; lean_object* v_diag_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_574_; 
v___x_562_ = lean_st_ref_take(v___y_523_);
v_cache_563_ = lean_ctor_get(v___x_562_, 1);
v_zetaDeltaFVarIds_564_ = lean_ctor_get(v___x_562_, 2);
v_postponed_565_ = lean_ctor_get(v___x_562_, 3);
v_diag_566_ = lean_ctor_get(v___x_562_, 4);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_574_ == 0)
{
lean_object* v_unused_575_; 
v_unused_575_ = lean_ctor_get(v___x_562_, 0);
lean_dec(v_unused_575_);
v___x_568_ = v___x_562_;
v_isShared_569_ = v_isSharedCheck_574_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_diag_566_);
lean_inc(v_postponed_565_);
lean_inc(v_zetaDeltaFVarIds_564_);
lean_inc(v_cache_563_);
lean_dec(v___x_562_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_574_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v_mctx_561_);
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_mctx_561_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_cache_563_);
lean_ctor_set(v_reuseFailAlloc_573_, 2, v_zetaDeltaFVarIds_564_);
lean_ctor_set(v_reuseFailAlloc_573_, 3, v_postponed_565_);
lean_ctor_set(v_reuseFailAlloc_573_, 4, v_diag_566_);
v___x_571_ = v_reuseFailAlloc_573_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = lean_st_ref_put(v___y_523_, v___x_571_);
v_a_554_ = v_fst_560_;
goto v___jp_553_;
}
}
}
v___jp_576_:
{
lean_object* v_snd_578_; lean_object* v_fst_579_; lean_object* v_mctx_580_; uint8_t v___x_581_; 
v_snd_578_ = lean_ctor_get(v___y_577_, 1);
lean_inc(v_snd_578_);
v_fst_579_ = lean_ctor_get(v___y_577_, 0);
lean_inc(v_fst_579_);
lean_dec_ref(v___y_577_);
v_mctx_580_ = lean_ctor_get(v_snd_578_, 1);
lean_inc_ref(v_mctx_580_);
lean_dec(v_snd_578_);
v___x_581_ = lean_unbox(v_fst_579_);
lean_dec(v_fst_579_);
v_fst_560_ = v___x_581_;
v_mctx_561_ = v_mctx_580_;
goto v___jp_559_;
}
v___jp_582_:
{
lean_object* v_mctx_585_; lean_object* v___x_586_; lean_object* v_cache_587_; lean_object* v_zetaDeltaFVarIds_588_; lean_object* v_postponed_589_; lean_object* v_diag_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_598_; 
v_mctx_585_ = lean_ctor_get(v_snd_584_, 1);
lean_inc_ref(v_mctx_585_);
lean_dec_ref(v_snd_584_);
v___x_586_ = lean_st_ref_take(v___y_523_);
v_cache_587_ = lean_ctor_get(v___x_586_, 1);
v_zetaDeltaFVarIds_588_ = lean_ctor_get(v___x_586_, 2);
v_postponed_589_ = lean_ctor_get(v___x_586_, 3);
v_diag_590_ = lean_ctor_get(v___x_586_, 4);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v___x_586_, 0);
lean_dec(v_unused_599_);
v___x_592_ = v___x_586_;
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_diag_590_);
lean_inc(v_postponed_589_);
lean_inc(v_zetaDeltaFVarIds_588_);
lean_inc(v_cache_587_);
lean_dec(v___x_586_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v_mctx_585_);
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_mctx_585_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_cache_587_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v_zetaDeltaFVarIds_588_);
lean_ctor_set(v_reuseFailAlloc_597_, 3, v_postponed_589_);
lean_ctor_set(v_reuseFailAlloc_597_, 4, v_diag_590_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_st_ref_put(v___y_523_, v___x_595_);
v_a_554_ = v_fst_583_;
goto v___jp_553_;
}
}
}
v___jp_600_:
{
lean_object* v_fst_602_; lean_object* v_snd_603_; uint8_t v___x_604_; 
v_fst_602_ = lean_ctor_get(v___y_601_, 0);
lean_inc(v_fst_602_);
v_snd_603_ = lean_ctor_get(v___y_601_, 1);
lean_inc(v_snd_603_);
lean_dec_ref(v___y_601_);
v___x_604_ = lean_unbox(v_fst_602_);
lean_dec(v_fst_602_);
v_fst_583_ = v___x_604_;
v_snd_584_ = v_snd_603_;
goto v___jp_582_;
}
v___jp_605_:
{
lean_object* v___x_608_; lean_object* v_cache_609_; lean_object* v_zetaDeltaFVarIds_610_; lean_object* v_postponed_611_; lean_object* v_diag_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_620_; 
v___x_608_ = lean_st_ref_take(v___y_523_);
v_cache_609_ = lean_ctor_get(v___x_608_, 1);
v_zetaDeltaFVarIds_610_ = lean_ctor_get(v___x_608_, 2);
v_postponed_611_ = lean_ctor_get(v___x_608_, 3);
v_diag_612_ = lean_ctor_get(v___x_608_, 4);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; 
v_unused_621_ = lean_ctor_get(v___x_608_, 0);
lean_dec(v_unused_621_);
v___x_614_ = v___x_608_;
v_isShared_615_ = v_isSharedCheck_620_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_diag_612_);
lean_inc(v_postponed_611_);
lean_inc(v_zetaDeltaFVarIds_610_);
lean_inc(v_cache_609_);
lean_dec(v___x_608_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_620_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v_mctx_607_);
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_mctx_607_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_cache_609_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_zetaDeltaFVarIds_610_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_postponed_611_);
lean_ctor_set(v_reuseFailAlloc_619_, 4, v_diag_612_);
v___x_617_ = v_reuseFailAlloc_619_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
lean_object* v___x_618_; 
v___x_618_ = lean_st_ref_put(v___y_523_, v___x_617_);
v_a_554_ = v_fst_606_;
goto v___jp_553_;
}
}
}
v___jp_622_:
{
lean_object* v_snd_624_; lean_object* v_fst_625_; lean_object* v_mctx_626_; uint8_t v___x_627_; 
v_snd_624_ = lean_ctor_get(v___y_623_, 1);
lean_inc(v_snd_624_);
v_fst_625_ = lean_ctor_get(v___y_623_, 0);
lean_inc(v_fst_625_);
lean_dec_ref(v___y_623_);
v_mctx_626_ = lean_ctor_get(v_snd_624_, 1);
lean_inc_ref(v_mctx_626_);
lean_dec(v_snd_624_);
v___x_627_ = lean_unbox(v_fst_625_);
lean_dec(v_fst_625_);
v_fst_606_ = v___x_627_;
v_mctx_607_ = v_mctx_626_;
goto v___jp_605_;
}
}
}
v___jp_534_:
{
lean_object* v___x_537_; 
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 1, v_a_535_);
lean_ctor_set(v___x_531_, 0, v___x_533_);
v___x_537_ = v___x_531_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_a_535_);
v___x_537_ = v_reuseFailAlloc_541_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
size_t v___x_538_; size_t v___x_539_; lean_object* v___x_540_; 
v___x_538_ = ((size_t)1ULL);
v___x_539_ = lean_usize_add(v_i_520_, v___x_538_);
v___x_540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_516_, v_ignoreLetDecls_517_, v_as_518_, v_sz_519_, v___x_539_, v___x_537_, v___y_523_);
return v___x_540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object* v_forbidden_688_, lean_object* v_ignoreLetDecls_689_, lean_object* v_as_690_, lean_object* v_sz_691_, lean_object* v_i_692_, lean_object* v_b_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_699_; size_t v_sz_boxed_700_; size_t v_i_boxed_701_; lean_object* v_res_702_; 
v_ignoreLetDecls_boxed_699_ = lean_unbox(v_ignoreLetDecls_689_);
v_sz_boxed_700_ = lean_unbox_usize(v_sz_691_);
lean_dec(v_sz_691_);
v_i_boxed_701_ = lean_unbox_usize(v_i_692_);
lean_dec(v_i_692_);
v_res_702_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_forbidden_688_, v_ignoreLetDecls_boxed_699_, v_as_690_, v_sz_boxed_700_, v_i_boxed_701_, v_b_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec_ref(v_as_690_);
lean_dec(v_forbidden_688_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_forbidden_703_, uint8_t v_ignoreLetDecls_704_, lean_object* v_as_705_, size_t v_sz_706_, size_t v_i_707_, lean_object* v_b_708_, lean_object* v___y_709_){
_start:
{
uint8_t v___x_711_; 
v___x_711_ = lean_usize_dec_lt(v_i_707_, v_sz_706_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; 
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v_b_708_);
return v___x_712_;
}
else
{
lean_object* v_snd_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_870_; 
v_snd_713_ = lean_ctor_get(v_b_708_, 1);
v_isSharedCheck_870_ = !lean_is_exclusive(v_b_708_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; 
v_unused_871_ = lean_ctor_get(v_b_708_, 0);
lean_dec(v_unused_871_);
v___x_715_ = v_b_708_;
v_isShared_716_ = v_isSharedCheck_870_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_snd_713_);
lean_dec(v_b_708_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_870_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_717_; lean_object* v_a_719_; lean_object* v_a_726_; 
v___x_717_ = lean_box(0);
v_a_726_ = lean_array_uget_borrowed(v_as_705_, v_i_707_);
if (lean_obj_tag(v_a_726_) == 0)
{
v_a_719_ = v_snd_713_;
goto v___jp_718_;
}
else
{
lean_object* v_val_727_; lean_object* v_fst_728_; lean_object* v_snd_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_869_; 
v_val_727_ = lean_ctor_get(v_a_726_, 0);
v_fst_728_ = lean_ctor_get(v_snd_713_, 0);
v_snd_729_ = lean_ctor_get(v_snd_713_, 1);
v_isSharedCheck_869_ = !lean_is_exclusive(v_snd_713_);
if (v_isSharedCheck_869_ == 0)
{
v___x_731_ = v_snd_713_;
v_isShared_732_ = v_isSharedCheck_869_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_snd_729_);
lean_inc(v_fst_728_);
lean_dec(v_snd_713_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_869_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
uint8_t v_a_738_; uint8_t v_fst_744_; lean_object* v_mctx_745_; lean_object* v___y_761_; uint8_t v_fst_767_; lean_object* v_snd_768_; lean_object* v___y_785_; uint8_t v_fst_790_; lean_object* v_mctx_791_; lean_object* v___y_807_; lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = l_Lean_LocalDecl_fvarId(v_val_727_);
v___x_813_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_812_, v_forbidden_703_);
lean_dec(v___x_812_);
if (v___x_813_ == 0)
{
uint8_t v___x_814_; 
v___x_814_ = l_Lean_LocalDecl_isAuxDecl(v_val_727_);
if (v___x_814_ == 0)
{
uint8_t v___x_815_; uint8_t v___x_816_; 
v___x_815_ = l_Lean_LocalDecl_binderInfo(v_val_727_);
v___x_816_ = l_Lean_BinderInfo_isInstImplicit(v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___f_817_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v_snd_821_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; uint8_t v___y_836_; 
lean_inc(v_fst_728_);
v___f_817_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_817_, 0, v_fst_728_);
if (v_ignoreLetDecls_704_ == 0)
{
v___y_836_ = v_ignoreLetDecls_704_;
goto v___jp_835_;
}
else
{
uint8_t v___x_868_; 
v___x_868_ = l_Lean_LocalDecl_isLet(v_val_727_, v___x_816_);
if (v___x_868_ == 0)
{
v___y_836_ = v___x_868_;
goto v___jp_835_;
}
else
{
lean_dec_ref(v___f_817_);
goto v___jp_733_;
}
}
v___jp_818_:
{
uint8_t v___x_822_; 
v___x_822_ = l_Lean_Expr_hasFVar(v___y_820_);
if (v___x_822_ == 0)
{
uint8_t v___x_823_; 
v___x_823_ = l_Lean_Expr_hasMVar(v___y_820_);
if (v___x_823_ == 0)
{
lean_dec_ref(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec_ref(v___f_817_);
v_fst_767_ = v___x_823_;
v_snd_768_ = v_snd_821_;
goto v___jp_766_;
}
else
{
lean_object* v___x_824_; 
v___x_824_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___y_819_, v___y_820_, v_snd_821_);
v___y_785_ = v___x_824_;
goto v___jp_784_;
}
}
else
{
lean_object* v___x_825_; 
v___x_825_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___y_819_, v___y_820_, v_snd_821_);
v___y_785_ = v___x_825_;
goto v___jp_784_;
}
}
v___jp_826_:
{
lean_object* v_fst_830_; uint8_t v___x_831_; 
v_fst_830_ = lean_ctor_get(v___y_829_, 0);
v___x_831_ = lean_unbox(v_fst_830_);
if (v___x_831_ == 0)
{
lean_object* v_snd_832_; 
v_snd_832_ = lean_ctor_get(v___y_829_, 1);
lean_inc(v_snd_832_);
lean_dec_ref(v___y_829_);
v___y_819_ = v___y_828_;
v___y_820_ = v___y_827_;
v_snd_821_ = v_snd_832_;
goto v___jp_818_;
}
else
{
lean_object* v_snd_833_; uint8_t v___x_834_; 
lean_inc(v_fst_830_);
lean_dec_ref(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec_ref(v___f_817_);
v_snd_833_ = lean_ctor_get(v___y_829_, 1);
lean_inc(v_snd_833_);
lean_dec_ref(v___y_829_);
v___x_834_ = lean_unbox(v_fst_830_);
lean_dec(v_fst_830_);
v_fst_767_ = v___x_834_;
v_snd_768_ = v_snd_833_;
goto v___jp_766_;
}
}
v___jp_835_:
{
lean_object* v___x_837_; lean_object* v___f_838_; 
v___x_837_ = lean_box(v___y_836_);
v___f_838_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_838_, 0, v___x_837_);
if (lean_obj_tag(v_val_727_) == 0)
{
lean_object* v_type_839_; lean_object* v___x_840_; lean_object* v_mctx_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; 
v_type_839_ = lean_ctor_get(v_val_727_, 3);
v___x_840_ = lean_st_ref_get(v___y_709_);
v_mctx_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc_ref_n(v_mctx_841_, 2);
lean_dec(v___x_840_);
v___x_842_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
lean_ctor_set(v___x_843_, 1, v_mctx_841_);
v___x_844_ = l_Lean_Expr_hasFVar(v_type_839_);
if (v___x_844_ == 0)
{
uint8_t v___x_845_; 
v___x_845_ = l_Lean_Expr_hasMVar(v_type_839_);
if (v___x_845_ == 0)
{
lean_dec_ref_known(v___x_843_, 2);
lean_dec_ref(v___f_838_);
lean_dec_ref(v___f_817_);
v_fst_790_ = v___x_845_;
v_mctx_791_ = v_mctx_841_;
goto v___jp_789_;
}
else
{
lean_object* v___x_846_; 
lean_dec_ref(v_mctx_841_);
lean_inc_ref(v_type_839_);
v___x_846_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___f_838_, v_type_839_, v___x_843_);
v___y_807_ = v___x_846_;
goto v___jp_806_;
}
}
else
{
lean_object* v___x_847_; 
lean_dec_ref(v_mctx_841_);
lean_inc_ref(v_type_839_);
v___x_847_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___f_838_, v_type_839_, v___x_843_);
v___y_807_ = v___x_847_;
goto v___jp_806_;
}
}
else
{
uint8_t v_nondep_848_; 
v_nondep_848_ = lean_ctor_get_uint8(v_val_727_, sizeof(void*)*5);
if (v_nondep_848_ == 0)
{
lean_object* v_type_849_; lean_object* v_value_850_; lean_object* v___x_851_; lean_object* v_mctx_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_type_849_ = lean_ctor_get(v_val_727_, 3);
v_value_850_ = lean_ctor_get(v_val_727_, 4);
v___x_851_ = lean_st_ref_get(v___y_709_);
v_mctx_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc_ref(v_mctx_852_);
lean_dec(v___x_851_);
v___x_853_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
lean_ctor_set(v___x_854_, 1, v_mctx_852_);
v___x_855_ = l_Lean_Expr_hasFVar(v_type_849_);
if (v___x_855_ == 0)
{
uint8_t v___x_856_; 
v___x_856_ = l_Lean_Expr_hasMVar(v_type_849_);
if (v___x_856_ == 0)
{
lean_inc_ref(v_value_850_);
v___y_819_ = v___f_838_;
v___y_820_ = v_value_850_;
v_snd_821_ = v___x_854_;
goto v___jp_818_;
}
else
{
lean_object* v___x_857_; 
lean_inc_ref(v_type_849_);
lean_inc_ref(v___f_838_);
lean_inc_ref(v___f_817_);
v___x_857_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___f_838_, v_type_849_, v___x_854_);
lean_inc_ref(v_value_850_);
v___y_827_ = v_value_850_;
v___y_828_ = v___f_838_;
v___y_829_ = v___x_857_;
goto v___jp_826_;
}
}
else
{
lean_object* v___x_858_; 
lean_inc_ref(v_type_849_);
lean_inc_ref(v___f_838_);
lean_inc_ref(v___f_817_);
v___x_858_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___f_838_, v_type_849_, v___x_854_);
lean_inc_ref(v_value_850_);
v___y_827_ = v_value_850_;
v___y_828_ = v___f_838_;
v___y_829_ = v___x_858_;
goto v___jp_826_;
}
}
else
{
lean_object* v_type_859_; lean_object* v___x_860_; lean_object* v_mctx_861_; lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v_type_859_ = lean_ctor_get(v_val_727_, 3);
v___x_860_ = lean_st_ref_get(v___y_709_);
v_mctx_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc_ref_n(v_mctx_861_, 2);
lean_dec(v___x_860_);
v___x_862_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
lean_ctor_set(v___x_863_, 1, v_mctx_861_);
v___x_864_ = l_Lean_Expr_hasFVar(v_type_859_);
if (v___x_864_ == 0)
{
uint8_t v___x_865_; 
v___x_865_ = l_Lean_Expr_hasMVar(v_type_859_);
if (v___x_865_ == 0)
{
lean_dec_ref_known(v___x_863_, 2);
lean_dec_ref(v___f_838_);
lean_dec_ref(v___f_817_);
v_fst_744_ = v___x_865_;
v_mctx_745_ = v_mctx_861_;
goto v___jp_743_;
}
else
{
lean_object* v___x_866_; 
lean_dec_ref(v_mctx_861_);
lean_inc_ref(v_type_859_);
v___x_866_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___f_838_, v_type_859_, v___x_863_);
v___y_761_ = v___x_866_;
goto v___jp_760_;
}
}
else
{
lean_object* v___x_867_; 
lean_dec_ref(v_mctx_861_);
lean_inc_ref(v_type_859_);
v___x_867_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_817_, v___f_838_, v_type_859_, v___x_863_);
v___y_761_ = v___x_867_;
goto v___jp_760_;
}
}
}
}
}
else
{
goto v___jp_733_;
}
}
else
{
goto v___jp_733_;
}
}
else
{
goto v___jp_733_;
}
v___jp_733_:
{
lean_object* v___x_735_; 
if (v_isShared_732_ == 0)
{
v___x_735_ = v___x_731_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_fst_728_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_snd_729_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
v_a_719_ = v___x_735_;
goto v___jp_718_;
}
}
v___jp_737_:
{
if (v_a_738_ == 0)
{
goto v___jp_733_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
lean_del_object(v___x_731_);
v___x_739_ = l_Lean_LocalDecl_fvarId(v_val_727_);
lean_inc(v___x_739_);
v___x_740_ = l_Lean_FVarIdSet_insert(v_snd_729_, v___x_739_);
v___x_741_ = l_Lean_FVarIdSet_insert(v_fst_728_, v___x_739_);
v___x_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___x_740_);
v_a_719_ = v___x_742_;
goto v___jp_718_;
}
}
v___jp_743_:
{
lean_object* v___x_746_; lean_object* v_cache_747_; lean_object* v_zetaDeltaFVarIds_748_; lean_object* v_postponed_749_; lean_object* v_diag_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_758_; 
v___x_746_ = lean_st_ref_take(v___y_709_);
v_cache_747_ = lean_ctor_get(v___x_746_, 1);
v_zetaDeltaFVarIds_748_ = lean_ctor_get(v___x_746_, 2);
v_postponed_749_ = lean_ctor_get(v___x_746_, 3);
v_diag_750_ = lean_ctor_get(v___x_746_, 4);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; 
v_unused_759_ = lean_ctor_get(v___x_746_, 0);
lean_dec(v_unused_759_);
v___x_752_ = v___x_746_;
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_diag_750_);
lean_inc(v_postponed_749_);
lean_inc(v_zetaDeltaFVarIds_748_);
lean_inc(v_cache_747_);
lean_dec(v___x_746_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v_mctx_745_);
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_mctx_745_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_cache_747_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_zetaDeltaFVarIds_748_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v_postponed_749_);
lean_ctor_set(v_reuseFailAlloc_757_, 4, v_diag_750_);
v___x_755_ = v_reuseFailAlloc_757_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; 
v___x_756_ = lean_st_ref_put(v___y_709_, v___x_755_);
v_a_738_ = v_fst_744_;
goto v___jp_737_;
}
}
}
v___jp_760_:
{
lean_object* v_snd_762_; lean_object* v_fst_763_; lean_object* v_mctx_764_; uint8_t v___x_765_; 
v_snd_762_ = lean_ctor_get(v___y_761_, 1);
lean_inc(v_snd_762_);
v_fst_763_ = lean_ctor_get(v___y_761_, 0);
lean_inc(v_fst_763_);
lean_dec_ref(v___y_761_);
v_mctx_764_ = lean_ctor_get(v_snd_762_, 1);
lean_inc_ref(v_mctx_764_);
lean_dec(v_snd_762_);
v___x_765_ = lean_unbox(v_fst_763_);
lean_dec(v_fst_763_);
v_fst_744_ = v___x_765_;
v_mctx_745_ = v_mctx_764_;
goto v___jp_743_;
}
v___jp_766_:
{
lean_object* v_mctx_769_; lean_object* v___x_770_; lean_object* v_cache_771_; lean_object* v_zetaDeltaFVarIds_772_; lean_object* v_postponed_773_; lean_object* v_diag_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_782_; 
v_mctx_769_ = lean_ctor_get(v_snd_768_, 1);
lean_inc_ref(v_mctx_769_);
lean_dec_ref(v_snd_768_);
v___x_770_ = lean_st_ref_take(v___y_709_);
v_cache_771_ = lean_ctor_get(v___x_770_, 1);
v_zetaDeltaFVarIds_772_ = lean_ctor_get(v___x_770_, 2);
v_postponed_773_ = lean_ctor_get(v___x_770_, 3);
v_diag_774_ = lean_ctor_get(v___x_770_, 4);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v___x_770_, 0);
lean_dec(v_unused_783_);
v___x_776_ = v___x_770_;
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_diag_774_);
lean_inc(v_postponed_773_);
lean_inc(v_zetaDeltaFVarIds_772_);
lean_inc(v_cache_771_);
lean_dec(v___x_770_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v_mctx_769_);
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_mctx_769_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_cache_771_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_zetaDeltaFVarIds_772_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_postponed_773_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v_diag_774_);
v___x_779_ = v_reuseFailAlloc_781_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_780_; 
v___x_780_ = lean_st_ref_put(v___y_709_, v___x_779_);
v_a_738_ = v_fst_767_;
goto v___jp_737_;
}
}
}
v___jp_784_:
{
lean_object* v_fst_786_; lean_object* v_snd_787_; uint8_t v___x_788_; 
v_fst_786_ = lean_ctor_get(v___y_785_, 0);
lean_inc(v_fst_786_);
v_snd_787_ = lean_ctor_get(v___y_785_, 1);
lean_inc(v_snd_787_);
lean_dec_ref(v___y_785_);
v___x_788_ = lean_unbox(v_fst_786_);
lean_dec(v_fst_786_);
v_fst_767_ = v___x_788_;
v_snd_768_ = v_snd_787_;
goto v___jp_766_;
}
v___jp_789_:
{
lean_object* v___x_792_; lean_object* v_cache_793_; lean_object* v_zetaDeltaFVarIds_794_; lean_object* v_postponed_795_; lean_object* v_diag_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_804_; 
v___x_792_ = lean_st_ref_take(v___y_709_);
v_cache_793_ = lean_ctor_get(v___x_792_, 1);
v_zetaDeltaFVarIds_794_ = lean_ctor_get(v___x_792_, 2);
v_postponed_795_ = lean_ctor_get(v___x_792_, 3);
v_diag_796_ = lean_ctor_get(v___x_792_, 4);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; 
v_unused_805_ = lean_ctor_get(v___x_792_, 0);
lean_dec(v_unused_805_);
v___x_798_ = v___x_792_;
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_diag_796_);
lean_inc(v_postponed_795_);
lean_inc(v_zetaDeltaFVarIds_794_);
lean_inc(v_cache_793_);
lean_dec(v___x_792_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_804_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v_mctx_791_);
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_mctx_791_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v_cache_793_);
lean_ctor_set(v_reuseFailAlloc_803_, 2, v_zetaDeltaFVarIds_794_);
lean_ctor_set(v_reuseFailAlloc_803_, 3, v_postponed_795_);
lean_ctor_set(v_reuseFailAlloc_803_, 4, v_diag_796_);
v___x_801_ = v_reuseFailAlloc_803_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_802_; 
v___x_802_ = lean_st_ref_put(v___y_709_, v___x_801_);
v_a_738_ = v_fst_790_;
goto v___jp_737_;
}
}
}
v___jp_806_:
{
lean_object* v_snd_808_; lean_object* v_fst_809_; lean_object* v_mctx_810_; uint8_t v___x_811_; 
v_snd_808_ = lean_ctor_get(v___y_807_, 1);
lean_inc(v_snd_808_);
v_fst_809_ = lean_ctor_get(v___y_807_, 0);
lean_inc(v_fst_809_);
lean_dec_ref(v___y_807_);
v_mctx_810_ = lean_ctor_get(v_snd_808_, 1);
lean_inc_ref(v_mctx_810_);
lean_dec(v_snd_808_);
v___x_811_ = lean_unbox(v_fst_809_);
lean_dec(v_fst_809_);
v_fst_790_ = v___x_811_;
v_mctx_791_ = v_mctx_810_;
goto v___jp_789_;
}
}
}
v___jp_718_:
{
lean_object* v___x_721_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v_a_719_);
lean_ctor_set(v___x_715_, 0, v___x_717_);
v___x_721_ = v___x_715_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v_a_719_);
v___x_721_ = v_reuseFailAlloc_725_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
size_t v___x_722_; size_t v___x_723_; 
v___x_722_ = ((size_t)1ULL);
v___x_723_ = lean_usize_add(v_i_707_, v___x_722_);
v_i_707_ = v___x_723_;
v_b_708_ = v___x_721_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_forbidden_872_, lean_object* v_ignoreLetDecls_873_, lean_object* v_as_874_, lean_object* v_sz_875_, lean_object* v_i_876_, lean_object* v_b_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_880_; size_t v_sz_boxed_881_; size_t v_i_boxed_882_; lean_object* v_res_883_; 
v_ignoreLetDecls_boxed_880_ = lean_unbox(v_ignoreLetDecls_873_);
v_sz_boxed_881_ = lean_unbox_usize(v_sz_875_);
lean_dec(v_sz_875_);
v_i_boxed_882_ = lean_unbox_usize(v_i_876_);
lean_dec(v_i_876_);
v_res_883_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_872_, v_ignoreLetDecls_boxed_880_, v_as_874_, v_sz_boxed_881_, v_i_boxed_882_, v_b_877_, v___y_878_);
lean_dec(v___y_878_);
lean_dec_ref(v_as_874_);
lean_dec(v_forbidden_872_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(lean_object* v_forbidden_884_, uint8_t v_ignoreLetDecls_885_, lean_object* v_as_886_, size_t v_sz_887_, size_t v_i_888_, lean_object* v_b_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
uint8_t v___x_895_; 
v___x_895_ = lean_usize_dec_lt(v_i_888_, v_sz_887_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v_b_889_);
return v___x_896_;
}
else
{
lean_object* v_snd_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_1054_; 
v_snd_897_ = lean_ctor_get(v_b_889_, 1);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_b_889_);
if (v_isSharedCheck_1054_ == 0)
{
lean_object* v_unused_1055_; 
v_unused_1055_ = lean_ctor_get(v_b_889_, 0);
lean_dec(v_unused_1055_);
v___x_899_ = v_b_889_;
v_isShared_900_ = v_isSharedCheck_1054_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_snd_897_);
lean_dec(v_b_889_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_1054_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v_a_903_; lean_object* v_a_910_; 
v___x_901_ = lean_box(0);
v_a_910_ = lean_array_uget_borrowed(v_as_886_, v_i_888_);
if (lean_obj_tag(v_a_910_) == 0)
{
v_a_903_ = v_snd_897_;
goto v___jp_902_;
}
else
{
lean_object* v_val_911_; lean_object* v_fst_912_; lean_object* v_snd_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_1053_; 
v_val_911_ = lean_ctor_get(v_a_910_, 0);
v_fst_912_ = lean_ctor_get(v_snd_897_, 0);
v_snd_913_ = lean_ctor_get(v_snd_897_, 1);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_snd_897_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_915_ = v_snd_897_;
v_isShared_916_ = v_isSharedCheck_1053_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_snd_913_);
lean_inc(v_fst_912_);
lean_dec(v_snd_897_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_1053_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
uint8_t v_a_922_; uint8_t v_fst_928_; lean_object* v_mctx_929_; lean_object* v___y_945_; uint8_t v_fst_951_; lean_object* v_snd_952_; lean_object* v___y_969_; uint8_t v_fst_974_; lean_object* v_mctx_975_; lean_object* v___y_991_; lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_996_ = l_Lean_LocalDecl_fvarId(v_val_911_);
v___x_997_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_996_, v_forbidden_884_);
lean_dec(v___x_996_);
if (v___x_997_ == 0)
{
uint8_t v___x_998_; 
v___x_998_ = l_Lean_LocalDecl_isAuxDecl(v_val_911_);
if (v___x_998_ == 0)
{
uint8_t v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = l_Lean_LocalDecl_binderInfo(v_val_911_);
v___x_1000_ = l_Lean_BinderInfo_isInstImplicit(v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___f_1001_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v_snd_1005_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; uint8_t v___y_1020_; 
lean_inc(v_fst_912_);
v___f_1001_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1001_, 0, v_fst_912_);
if (v_ignoreLetDecls_885_ == 0)
{
v___y_1020_ = v_ignoreLetDecls_885_;
goto v___jp_1019_;
}
else
{
uint8_t v___x_1052_; 
v___x_1052_ = l_Lean_LocalDecl_isLet(v_val_911_, v___x_1000_);
if (v___x_1052_ == 0)
{
v___y_1020_ = v___x_1052_;
goto v___jp_1019_;
}
else
{
lean_dec_ref(v___f_1001_);
goto v___jp_917_;
}
}
v___jp_1002_:
{
uint8_t v___x_1006_; 
v___x_1006_ = l_Lean_Expr_hasFVar(v___y_1004_);
if (v___x_1006_ == 0)
{
uint8_t v___x_1007_; 
v___x_1007_ = l_Lean_Expr_hasMVar(v___y_1004_);
if (v___x_1007_ == 0)
{
lean_dec_ref(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec_ref(v___f_1001_);
v_fst_951_ = v___x_1007_;
v_snd_952_ = v_snd_1005_;
goto v___jp_950_;
}
else
{
lean_object* v___x_1008_; 
v___x_1008_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___y_1003_, v___y_1004_, v_snd_1005_);
v___y_969_ = v___x_1008_;
goto v___jp_968_;
}
}
else
{
lean_object* v___x_1009_; 
v___x_1009_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___y_1003_, v___y_1004_, v_snd_1005_);
v___y_969_ = v___x_1009_;
goto v___jp_968_;
}
}
v___jp_1010_:
{
lean_object* v_fst_1014_; uint8_t v___x_1015_; 
v_fst_1014_ = lean_ctor_get(v___y_1013_, 0);
v___x_1015_ = lean_unbox(v_fst_1014_);
if (v___x_1015_ == 0)
{
lean_object* v_snd_1016_; 
v_snd_1016_ = lean_ctor_get(v___y_1013_, 1);
lean_inc(v_snd_1016_);
lean_dec_ref(v___y_1013_);
v___y_1003_ = v___y_1011_;
v___y_1004_ = v___y_1012_;
v_snd_1005_ = v_snd_1016_;
goto v___jp_1002_;
}
else
{
lean_object* v_snd_1017_; uint8_t v___x_1018_; 
lean_inc(v_fst_1014_);
lean_dec_ref(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec_ref(v___f_1001_);
v_snd_1017_ = lean_ctor_get(v___y_1013_, 1);
lean_inc(v_snd_1017_);
lean_dec_ref(v___y_1013_);
v___x_1018_ = lean_unbox(v_fst_1014_);
lean_dec(v_fst_1014_);
v_fst_951_ = v___x_1018_;
v_snd_952_ = v_snd_1017_;
goto v___jp_950_;
}
}
v___jp_1019_:
{
lean_object* v___x_1021_; lean_object* v___f_1022_; 
v___x_1021_ = lean_box(v___y_1020_);
v___f_1022_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1022_, 0, v___x_1021_);
if (lean_obj_tag(v_val_911_) == 0)
{
lean_object* v_type_1023_; lean_object* v___x_1024_; lean_object* v_mctx_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; 
v_type_1023_ = lean_ctor_get(v_val_911_, 3);
v___x_1024_ = lean_st_ref_get(v___y_891_);
v_mctx_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc_ref_n(v_mctx_1025_, 2);
lean_dec(v___x_1024_);
v___x_1026_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v_mctx_1025_);
v___x_1028_ = l_Lean_Expr_hasFVar(v_type_1023_);
if (v___x_1028_ == 0)
{
uint8_t v___x_1029_; 
v___x_1029_ = l_Lean_Expr_hasMVar(v_type_1023_);
if (v___x_1029_ == 0)
{
lean_dec_ref_known(v___x_1027_, 2);
lean_dec_ref(v___f_1022_);
lean_dec_ref(v___f_1001_);
v_fst_974_ = v___x_1029_;
v_mctx_975_ = v_mctx_1025_;
goto v___jp_973_;
}
else
{
lean_object* v___x_1030_; 
lean_dec_ref(v_mctx_1025_);
lean_inc_ref(v_type_1023_);
v___x_1030_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___f_1022_, v_type_1023_, v___x_1027_);
v___y_991_ = v___x_1030_;
goto v___jp_990_;
}
}
else
{
lean_object* v___x_1031_; 
lean_dec_ref(v_mctx_1025_);
lean_inc_ref(v_type_1023_);
v___x_1031_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___f_1022_, v_type_1023_, v___x_1027_);
v___y_991_ = v___x_1031_;
goto v___jp_990_;
}
}
else
{
uint8_t v_nondep_1032_; 
v_nondep_1032_ = lean_ctor_get_uint8(v_val_911_, sizeof(void*)*5);
if (v_nondep_1032_ == 0)
{
lean_object* v_type_1033_; lean_object* v_value_1034_; lean_object* v___x_1035_; lean_object* v_mctx_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_type_1033_ = lean_ctor_get(v_val_911_, 3);
v_value_1034_ = lean_ctor_get(v_val_911_, 4);
v___x_1035_ = lean_st_ref_get(v___y_891_);
v_mctx_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc_ref(v_mctx_1036_);
lean_dec(v___x_1035_);
v___x_1037_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v_mctx_1036_);
v___x_1039_ = l_Lean_Expr_hasFVar(v_type_1033_);
if (v___x_1039_ == 0)
{
uint8_t v___x_1040_; 
v___x_1040_ = l_Lean_Expr_hasMVar(v_type_1033_);
if (v___x_1040_ == 0)
{
lean_inc_ref(v_value_1034_);
v___y_1003_ = v___f_1022_;
v___y_1004_ = v_value_1034_;
v_snd_1005_ = v___x_1038_;
goto v___jp_1002_;
}
else
{
lean_object* v___x_1041_; 
lean_inc_ref(v_type_1033_);
lean_inc_ref(v___f_1022_);
lean_inc_ref(v___f_1001_);
v___x_1041_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___f_1022_, v_type_1033_, v___x_1038_);
lean_inc_ref(v_value_1034_);
v___y_1011_ = v___f_1022_;
v___y_1012_ = v_value_1034_;
v___y_1013_ = v___x_1041_;
goto v___jp_1010_;
}
}
else
{
lean_object* v___x_1042_; 
lean_inc_ref(v_type_1033_);
lean_inc_ref(v___f_1022_);
lean_inc_ref(v___f_1001_);
v___x_1042_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___f_1022_, v_type_1033_, v___x_1038_);
lean_inc_ref(v_value_1034_);
v___y_1011_ = v___f_1022_;
v___y_1012_ = v_value_1034_;
v___y_1013_ = v___x_1042_;
goto v___jp_1010_;
}
}
else
{
lean_object* v_type_1043_; lean_object* v___x_1044_; lean_object* v_mctx_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v_type_1043_ = lean_ctor_get(v_val_911_, 3);
v___x_1044_ = lean_st_ref_get(v___y_891_);
v_mctx_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc_ref_n(v_mctx_1045_, 2);
lean_dec(v___x_1044_);
v___x_1046_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v_mctx_1045_);
v___x_1048_ = l_Lean_Expr_hasFVar(v_type_1043_);
if (v___x_1048_ == 0)
{
uint8_t v___x_1049_; 
v___x_1049_ = l_Lean_Expr_hasMVar(v_type_1043_);
if (v___x_1049_ == 0)
{
lean_dec_ref_known(v___x_1047_, 2);
lean_dec_ref(v___f_1022_);
lean_dec_ref(v___f_1001_);
v_fst_928_ = v___x_1049_;
v_mctx_929_ = v_mctx_1045_;
goto v___jp_927_;
}
else
{
lean_object* v___x_1050_; 
lean_dec_ref(v_mctx_1045_);
lean_inc_ref(v_type_1043_);
v___x_1050_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___f_1022_, v_type_1043_, v___x_1047_);
v___y_945_ = v___x_1050_;
goto v___jp_944_;
}
}
else
{
lean_object* v___x_1051_; 
lean_dec_ref(v_mctx_1045_);
lean_inc_ref(v_type_1043_);
v___x_1051_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1001_, v___f_1022_, v_type_1043_, v___x_1047_);
v___y_945_ = v___x_1051_;
goto v___jp_944_;
}
}
}
}
}
else
{
goto v___jp_917_;
}
}
else
{
goto v___jp_917_;
}
}
else
{
goto v___jp_917_;
}
v___jp_917_:
{
lean_object* v___x_919_; 
if (v_isShared_916_ == 0)
{
v___x_919_ = v___x_915_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_fst_912_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v_snd_913_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
v_a_903_ = v___x_919_;
goto v___jp_902_;
}
}
v___jp_921_:
{
if (v_a_922_ == 0)
{
goto v___jp_917_;
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_del_object(v___x_915_);
v___x_923_ = l_Lean_LocalDecl_fvarId(v_val_911_);
lean_inc(v___x_923_);
v___x_924_ = l_Lean_FVarIdSet_insert(v_snd_913_, v___x_923_);
v___x_925_ = l_Lean_FVarIdSet_insert(v_fst_912_, v___x_923_);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
lean_ctor_set(v___x_926_, 1, v___x_924_);
v_a_903_ = v___x_926_;
goto v___jp_902_;
}
}
v___jp_927_:
{
lean_object* v___x_930_; lean_object* v_cache_931_; lean_object* v_zetaDeltaFVarIds_932_; lean_object* v_postponed_933_; lean_object* v_diag_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_942_; 
v___x_930_ = lean_st_ref_take(v___y_891_);
v_cache_931_ = lean_ctor_get(v___x_930_, 1);
v_zetaDeltaFVarIds_932_ = lean_ctor_get(v___x_930_, 2);
v_postponed_933_ = lean_ctor_get(v___x_930_, 3);
v_diag_934_ = lean_ctor_get(v___x_930_, 4);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_930_, 0);
lean_dec(v_unused_943_);
v___x_936_ = v___x_930_;
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_diag_934_);
lean_inc(v_postponed_933_);
lean_inc(v_zetaDeltaFVarIds_932_);
lean_inc(v_cache_931_);
lean_dec(v___x_930_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v_mctx_929_);
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_mctx_929_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_cache_931_);
lean_ctor_set(v_reuseFailAlloc_941_, 2, v_zetaDeltaFVarIds_932_);
lean_ctor_set(v_reuseFailAlloc_941_, 3, v_postponed_933_);
lean_ctor_set(v_reuseFailAlloc_941_, 4, v_diag_934_);
v___x_939_ = v_reuseFailAlloc_941_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; 
v___x_940_ = lean_st_ref_put(v___y_891_, v___x_939_);
v_a_922_ = v_fst_928_;
goto v___jp_921_;
}
}
}
v___jp_944_:
{
lean_object* v_snd_946_; lean_object* v_fst_947_; lean_object* v_mctx_948_; uint8_t v___x_949_; 
v_snd_946_ = lean_ctor_get(v___y_945_, 1);
lean_inc(v_snd_946_);
v_fst_947_ = lean_ctor_get(v___y_945_, 0);
lean_inc(v_fst_947_);
lean_dec_ref(v___y_945_);
v_mctx_948_ = lean_ctor_get(v_snd_946_, 1);
lean_inc_ref(v_mctx_948_);
lean_dec(v_snd_946_);
v___x_949_ = lean_unbox(v_fst_947_);
lean_dec(v_fst_947_);
v_fst_928_ = v___x_949_;
v_mctx_929_ = v_mctx_948_;
goto v___jp_927_;
}
v___jp_950_:
{
lean_object* v_mctx_953_; lean_object* v___x_954_; lean_object* v_cache_955_; lean_object* v_zetaDeltaFVarIds_956_; lean_object* v_postponed_957_; lean_object* v_diag_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_966_; 
v_mctx_953_ = lean_ctor_get(v_snd_952_, 1);
lean_inc_ref(v_mctx_953_);
lean_dec_ref(v_snd_952_);
v___x_954_ = lean_st_ref_take(v___y_891_);
v_cache_955_ = lean_ctor_get(v___x_954_, 1);
v_zetaDeltaFVarIds_956_ = lean_ctor_get(v___x_954_, 2);
v_postponed_957_ = lean_ctor_get(v___x_954_, 3);
v_diag_958_ = lean_ctor_get(v___x_954_, 4);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_966_ == 0)
{
lean_object* v_unused_967_; 
v_unused_967_ = lean_ctor_get(v___x_954_, 0);
lean_dec(v_unused_967_);
v___x_960_ = v___x_954_;
v_isShared_961_ = v_isSharedCheck_966_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_diag_958_);
lean_inc(v_postponed_957_);
lean_inc(v_zetaDeltaFVarIds_956_);
lean_inc(v_cache_955_);
lean_dec(v___x_954_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_966_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v_mctx_953_);
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_mctx_953_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_cache_955_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_zetaDeltaFVarIds_956_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v_postponed_957_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v_diag_958_);
v___x_963_ = v_reuseFailAlloc_965_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; 
v___x_964_ = lean_st_ref_put(v___y_891_, v___x_963_);
v_a_922_ = v_fst_951_;
goto v___jp_921_;
}
}
}
v___jp_968_:
{
lean_object* v_fst_970_; lean_object* v_snd_971_; uint8_t v___x_972_; 
v_fst_970_ = lean_ctor_get(v___y_969_, 0);
lean_inc(v_fst_970_);
v_snd_971_ = lean_ctor_get(v___y_969_, 1);
lean_inc(v_snd_971_);
lean_dec_ref(v___y_969_);
v___x_972_ = lean_unbox(v_fst_970_);
lean_dec(v_fst_970_);
v_fst_951_ = v___x_972_;
v_snd_952_ = v_snd_971_;
goto v___jp_950_;
}
v___jp_973_:
{
lean_object* v___x_976_; lean_object* v_cache_977_; lean_object* v_zetaDeltaFVarIds_978_; lean_object* v_postponed_979_; lean_object* v_diag_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
v___x_976_ = lean_st_ref_take(v___y_891_);
v_cache_977_ = lean_ctor_get(v___x_976_, 1);
v_zetaDeltaFVarIds_978_ = lean_ctor_get(v___x_976_, 2);
v_postponed_979_ = lean_ctor_get(v___x_976_, 3);
v_diag_980_ = lean_ctor_get(v___x_976_, 4);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; 
v_unused_989_ = lean_ctor_get(v___x_976_, 0);
lean_dec(v_unused_989_);
v___x_982_ = v___x_976_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_diag_980_);
lean_inc(v_postponed_979_);
lean_inc(v_zetaDeltaFVarIds_978_);
lean_inc(v_cache_977_);
lean_dec(v___x_976_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v_mctx_975_);
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_mctx_975_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_cache_977_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_zetaDeltaFVarIds_978_);
lean_ctor_set(v_reuseFailAlloc_987_, 3, v_postponed_979_);
lean_ctor_set(v_reuseFailAlloc_987_, 4, v_diag_980_);
v___x_985_ = v_reuseFailAlloc_987_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; 
v___x_986_ = lean_st_ref_put(v___y_891_, v___x_985_);
v_a_922_ = v_fst_974_;
goto v___jp_921_;
}
}
}
v___jp_990_:
{
lean_object* v_snd_992_; lean_object* v_fst_993_; lean_object* v_mctx_994_; uint8_t v___x_995_; 
v_snd_992_ = lean_ctor_get(v___y_991_, 1);
lean_inc(v_snd_992_);
v_fst_993_ = lean_ctor_get(v___y_991_, 0);
lean_inc(v_fst_993_);
lean_dec_ref(v___y_991_);
v_mctx_994_ = lean_ctor_get(v_snd_992_, 1);
lean_inc_ref(v_mctx_994_);
lean_dec(v_snd_992_);
v___x_995_ = lean_unbox(v_fst_993_);
lean_dec(v_fst_993_);
v_fst_974_ = v___x_995_;
v_mctx_975_ = v_mctx_994_;
goto v___jp_973_;
}
}
}
v___jp_902_:
{
lean_object* v___x_905_; 
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 1, v_a_903_);
lean_ctor_set(v___x_899_, 0, v___x_901_);
v___x_905_ = v___x_899_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_a_903_);
v___x_905_ = v_reuseFailAlloc_909_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
size_t v___x_906_; size_t v___x_907_; lean_object* v___x_908_; 
v___x_906_ = ((size_t)1ULL);
v___x_907_ = lean_usize_add(v_i_888_, v___x_906_);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_884_, v_ignoreLetDecls_885_, v_as_886_, v_sz_887_, v___x_907_, v___x_905_, v___y_891_);
return v___x_908_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object* v_forbidden_1056_, lean_object* v_ignoreLetDecls_1057_, lean_object* v_as_1058_, lean_object* v_sz_1059_, lean_object* v_i_1060_, lean_object* v_b_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1067_; size_t v_sz_boxed_1068_; size_t v_i_boxed_1069_; lean_object* v_res_1070_; 
v_ignoreLetDecls_boxed_1067_ = lean_unbox(v_ignoreLetDecls_1057_);
v_sz_boxed_1068_ = lean_unbox_usize(v_sz_1059_);
lean_dec(v_sz_1059_);
v_i_boxed_1069_ = lean_unbox_usize(v_i_1060_);
lean_dec(v_i_1060_);
v_res_1070_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_forbidden_1056_, v_ignoreLetDecls_boxed_1067_, v_as_1058_, v_sz_boxed_1068_, v_i_boxed_1069_, v_b_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec_ref(v_as_1058_);
lean_dec(v_forbidden_1056_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object* v_init_1071_, lean_object* v_forbidden_1072_, uint8_t v_ignoreLetDecls_1073_, lean_object* v_n_1074_, lean_object* v_b_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
if (lean_obj_tag(v_n_1074_) == 0)
{
lean_object* v_cs_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; size_t v_sz_1084_; size_t v___x_1085_; lean_object* v___x_1086_; 
v_cs_1081_ = lean_ctor_get(v_n_1074_, 0);
v___x_1082_ = lean_box(0);
v___x_1083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
lean_ctor_set(v___x_1083_, 1, v_b_1075_);
v_sz_1084_ = lean_array_size(v_cs_1081_);
v___x_1085_ = ((size_t)0ULL);
v___x_1086_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_1071_, v_forbidden_1072_, v_ignoreLetDecls_1073_, v_cs_1081_, v_sz_1084_, v___x_1085_, v___x_1083_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1101_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1101_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1101_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v_fst_1091_; 
v_fst_1091_ = lean_ctor_get(v_a_1087_, 0);
if (lean_obj_tag(v_fst_1091_) == 0)
{
lean_object* v_snd_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v_snd_1092_ = lean_ctor_get(v_a_1087_, 1);
lean_inc(v_snd_1092_);
lean_dec(v_a_1087_);
v___x_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1093_, 0, v_snd_1092_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1093_);
v___x_1095_ = v___x_1089_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
else
{
lean_object* v_val_1097_; lean_object* v___x_1099_; 
lean_inc_ref(v_fst_1091_);
lean_dec(v_a_1087_);
v_val_1097_ = lean_ctor_get(v_fst_1091_, 0);
lean_inc(v_val_1097_);
lean_dec_ref_known(v_fst_1091_, 1);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v_val_1097_);
v___x_1099_ = v___x_1089_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_val_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1086_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1086_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
else
{
lean_object* v_vs_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; size_t v_sz_1113_; size_t v___x_1114_; lean_object* v___x_1115_; 
v_vs_1110_ = lean_ctor_get(v_n_1074_, 0);
v___x_1111_ = lean_box(0);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v_b_1075_);
v_sz_1113_ = lean_array_size(v_vs_1110_);
v___x_1114_ = ((size_t)0ULL);
v___x_1115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_forbidden_1072_, v_ignoreLetDecls_1073_, v_vs_1110_, v_sz_1113_, v___x_1114_, v___x_1112_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1130_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1130_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1130_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v_fst_1120_; 
v_fst_1120_ = lean_ctor_get(v_a_1116_, 0);
if (lean_obj_tag(v_fst_1120_) == 0)
{
lean_object* v_snd_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
v_snd_1121_ = lean_ctor_get(v_a_1116_, 1);
lean_inc(v_snd_1121_);
lean_dec(v_a_1116_);
v___x_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1122_, 0, v_snd_1121_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1122_);
v___x_1124_ = v___x_1118_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
else
{
lean_object* v_val_1126_; lean_object* v___x_1128_; 
lean_inc_ref(v_fst_1120_);
lean_dec(v_a_1116_);
v_val_1126_ = lean_ctor_get(v_fst_1120_, 0);
lean_inc(v_val_1126_);
lean_dec_ref_known(v_fst_1120_, 1);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v_val_1126_);
v___x_1128_ = v___x_1118_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_val_1126_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
v_a_1131_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1115_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1115_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object* v_init_1139_, lean_object* v_forbidden_1140_, uint8_t v_ignoreLetDecls_1141_, lean_object* v_as_1142_, size_t v_sz_1143_, size_t v_i_1144_, lean_object* v_b_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
uint8_t v___x_1151_; 
v___x_1151_ = lean_usize_dec_lt(v_i_1144_, v_sz_1143_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1152_, 0, v_b_1145_);
return v___x_1152_;
}
else
{
lean_object* v_snd_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1187_; 
v_snd_1153_ = lean_ctor_get(v_b_1145_, 1);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_b_1145_);
if (v_isSharedCheck_1187_ == 0)
{
lean_object* v_unused_1188_; 
v_unused_1188_ = lean_ctor_get(v_b_1145_, 0);
lean_dec(v_unused_1188_);
v___x_1155_ = v_b_1145_;
v_isShared_1156_ = v_isSharedCheck_1187_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_snd_1153_);
lean_dec(v_b_1145_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1187_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v_a_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_box(0);
v_a_1158_ = lean_array_uget_borrowed(v_as_1142_, v_i_1144_);
lean_inc(v_snd_1153_);
v___x_1159_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1139_, v_forbidden_1140_, v_ignoreLetDecls_1141_, v_a_1158_, v_snd_1153_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1178_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1178_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1178_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
if (lean_obj_tag(v_a_1160_) == 0)
{
lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1164_, 0, v_a_1160_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1164_);
v___x_1166_ = v___x_1155_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_snd_1153_);
v___x_1166_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1168_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1166_);
v___x_1168_ = v___x_1162_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; 
lean_del_object(v___x_1162_);
lean_dec(v_snd_1153_);
v_a_1171_ = lean_ctor_get(v_a_1160_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v_a_1160_, 1);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 1, v_a_1171_);
lean_ctor_set(v___x_1155_, 0, v___x_1157_);
v___x_1173_ = v___x_1155_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1157_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_a_1171_);
v___x_1173_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
size_t v___x_1174_; size_t v___x_1175_; 
v___x_1174_ = ((size_t)1ULL);
v___x_1175_ = lean_usize_add(v_i_1144_, v___x_1174_);
v_i_1144_ = v___x_1175_;
v_b_1145_ = v___x_1173_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_del_object(v___x_1155_);
lean_dec(v_snd_1153_);
v_a_1179_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1159_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1159_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object* v_init_1189_, lean_object* v_forbidden_1190_, lean_object* v_ignoreLetDecls_1191_, lean_object* v_as_1192_, lean_object* v_sz_1193_, lean_object* v_i_1194_, lean_object* v_b_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1201_; size_t v_sz_boxed_1202_; size_t v_i_boxed_1203_; lean_object* v_res_1204_; 
v_ignoreLetDecls_boxed_1201_ = lean_unbox(v_ignoreLetDecls_1191_);
v_sz_boxed_1202_ = lean_unbox_usize(v_sz_1193_);
lean_dec(v_sz_1193_);
v_i_boxed_1203_ = lean_unbox_usize(v_i_1194_);
lean_dec(v_i_1194_);
v_res_1204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_1189_, v_forbidden_1190_, v_ignoreLetDecls_boxed_1201_, v_as_1192_, v_sz_boxed_1202_, v_i_boxed_1203_, v_b_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec_ref(v_as_1192_);
lean_dec(v_forbidden_1190_);
lean_dec_ref(v_init_1189_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object* v_init_1205_, lean_object* v_forbidden_1206_, lean_object* v_ignoreLetDecls_1207_, lean_object* v_n_1208_, lean_object* v_b_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1215_; lean_object* v_res_1216_; 
v_ignoreLetDecls_boxed_1215_ = lean_unbox(v_ignoreLetDecls_1207_);
v_res_1216_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1205_, v_forbidden_1206_, v_ignoreLetDecls_boxed_1215_, v_n_1208_, v_b_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec_ref(v_n_1208_);
lean_dec(v_forbidden_1206_);
lean_dec_ref(v_init_1205_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(lean_object* v_forbidden_1217_, uint8_t v_ignoreLetDecls_1218_, lean_object* v_t_1219_, lean_object* v_init_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_root_1226_; lean_object* v_tail_1227_; lean_object* v___x_1228_; 
v_root_1226_ = lean_ctor_get(v_t_1219_, 0);
v_tail_1227_ = lean_ctor_get(v_t_1219_, 1);
lean_inc_ref(v_init_1220_);
v___x_1228_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1220_, v_forbidden_1217_, v_ignoreLetDecls_1218_, v_root_1226_, v_init_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec_ref(v_init_1220_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1265_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1265_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1265_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
if (lean_obj_tag(v_a_1229_) == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1235_; 
v_a_1233_ = lean_ctor_get(v_a_1229_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v_a_1229_, 1);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v_a_1233_);
v___x_1235_ = v___x_1231_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1233_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; size_t v_sz_1240_; size_t v___x_1241_; lean_object* v___x_1242_; 
lean_del_object(v___x_1231_);
v_a_1237_ = lean_ctor_get(v_a_1229_, 0);
lean_inc(v_a_1237_);
lean_dec_ref_known(v_a_1229_, 1);
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v_a_1237_);
v_sz_1240_ = lean_array_size(v_tail_1227_);
v___x_1241_ = ((size_t)0ULL);
v___x_1242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_forbidden_1217_, v_ignoreLetDecls_1218_, v_tail_1227_, v_sz_1240_, v___x_1241_, v___x_1239_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1256_; 
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1245_ = v___x_1242_;
v_isShared_1246_ = v_isSharedCheck_1256_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1242_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1256_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_fst_1247_; 
v_fst_1247_ = lean_ctor_get(v_a_1243_, 0);
if (lean_obj_tag(v_fst_1247_) == 0)
{
lean_object* v_snd_1248_; lean_object* v___x_1250_; 
v_snd_1248_ = lean_ctor_get(v_a_1243_, 1);
lean_inc(v_snd_1248_);
lean_dec(v_a_1243_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_snd_1248_);
v___x_1250_ = v___x_1245_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_snd_1248_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
else
{
lean_object* v_val_1252_; lean_object* v___x_1254_; 
lean_inc_ref(v_fst_1247_);
lean_dec(v_a_1243_);
v_val_1252_ = lean_ctor_get(v_fst_1247_, 0);
lean_inc(v_val_1252_);
lean_dec_ref_known(v_fst_1247_, 1);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_val_1252_);
v___x_1254_ = v___x_1245_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_val_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1242_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1242_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
v_a_1266_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1228_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1228_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object* v_forbidden_1274_, lean_object* v_ignoreLetDecls_1275_, lean_object* v_t_1276_, lean_object* v_init_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1283_; lean_object* v_res_1284_; 
v_ignoreLetDecls_boxed_1283_ = lean_unbox(v_ignoreLetDecls_1275_);
v_res_1284_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_forbidden_1274_, v_ignoreLetDecls_boxed_1283_, v_t_1276_, v_init_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec_ref(v_t_1276_);
lean_dec(v_forbidden_1274_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object* v_as_1285_, size_t v_i_1286_, size_t v_stop_1287_, lean_object* v_b_1288_){
_start:
{
lean_object* v___y_1290_; uint8_t v___x_1294_; 
v___x_1294_ = lean_usize_dec_eq(v_i_1286_, v_stop_1287_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = lean_array_uget_borrowed(v_as_1285_, v_i_1286_);
v___x_1296_ = l_Lean_Expr_isFVar(v___x_1295_);
if (v___x_1296_ == 0)
{
v___y_1290_ = v_b_1288_;
goto v___jp_1289_;
}
else
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = l_Lean_Expr_fvarId_x21(v___x_1295_);
v___x_1298_ = l_Lean_FVarIdSet_insert(v_b_1288_, v___x_1297_);
v___y_1290_ = v___x_1298_;
goto v___jp_1289_;
}
}
else
{
return v_b_1288_;
}
v___jp_1289_:
{
size_t v___x_1291_; size_t v___x_1292_; 
v___x_1291_ = ((size_t)1ULL);
v___x_1292_ = lean_usize_add(v_i_1286_, v___x_1291_);
v_i_1286_ = v___x_1292_;
v_b_1288_ = v___y_1290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object* v_as_1299_, lean_object* v_i_1300_, lean_object* v_stop_1301_, lean_object* v_b_1302_){
_start:
{
size_t v_i_boxed_1303_; size_t v_stop_boxed_1304_; lean_object* v_res_1305_; 
v_i_boxed_1303_ = lean_unbox_usize(v_i_1300_);
lean_dec(v_i_1300_);
v_stop_boxed_1304_ = lean_unbox_usize(v_stop_1301_);
lean_dec(v_stop_1301_);
v_res_1305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_as_1299_, v_i_boxed_1303_, v_stop_boxed_1304_, v_b_1302_);
lean_dec_ref(v_as_1299_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object* v_targets_1306_, lean_object* v_forbidden_1307_, uint8_t v_ignoreLetDecls_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_){
_start:
{
lean_object* v_r_1314_; lean_object* v___y_1316_; lean_object* v___x_1338_; lean_object* v___x_1339_; uint8_t v___x_1340_; 
v_r_1314_ = lean_box(1);
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = lean_array_get_size(v_targets_1306_);
v___x_1340_ = lean_nat_dec_lt(v___x_1338_, v___x_1339_);
if (v___x_1340_ == 0)
{
v___y_1316_ = v_r_1314_;
goto v___jp_1315_;
}
else
{
size_t v___x_1341_; size_t v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = ((size_t)0ULL);
v___x_1342_ = lean_usize_of_nat(v___x_1339_);
v___x_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_targets_1306_, v___x_1341_, v___x_1342_, v_r_1314_);
v___y_1316_ = v___x_1343_;
goto v___jp_1315_;
}
v___jp_1315_:
{
lean_object* v_lctx_1317_; lean_object* v_decls_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_lctx_1317_ = lean_ctor_get(v_a_1309_, 2);
v_decls_1318_ = lean_ctor_get(v_lctx_1317_, 1);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___y_1316_);
lean_ctor_set(v___x_1319_, 1, v_r_1314_);
v___x_1320_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_forbidden_1307_, v_ignoreLetDecls_1308_, v_decls_1318_, v___x_1319_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1329_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1329_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1329_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v_snd_1325_; lean_object* v___x_1327_; 
v_snd_1325_ = lean_ctor_get(v_a_1321_, 1);
lean_inc(v_snd_1325_);
lean_dec(v_a_1321_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v_snd_1325_);
v___x_1327_ = v___x_1323_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_snd_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
v_a_1330_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1320_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1320_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object* v_targets_1344_, lean_object* v_forbidden_1345_, lean_object* v_ignoreLetDecls_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1352_; lean_object* v_res_1353_; 
v_ignoreLetDecls_boxed_1352_ = lean_unbox(v_ignoreLetDecls_1346_);
v_res_1353_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1344_, v_forbidden_1345_, v_ignoreLetDecls_boxed_1352_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
lean_dec(v_a_1348_);
lean_dec_ref(v_a_1347_);
lean_dec(v_forbidden_1345_);
lean_dec_ref(v_targets_1344_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(lean_object* v_forbidden_1354_, uint8_t v_ignoreLetDecls_1355_, lean_object* v_as_1356_, size_t v_sz_1357_, size_t v_i_1358_, lean_object* v_b_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___x_1365_; 
v___x_1365_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_1354_, v_ignoreLetDecls_1355_, v_as_1356_, v_sz_1357_, v_i_1358_, v_b_1359_, v___y_1361_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object* v_forbidden_1366_, lean_object* v_ignoreLetDecls_1367_, lean_object* v_as_1368_, lean_object* v_sz_1369_, lean_object* v_i_1370_, lean_object* v_b_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1377_; size_t v_sz_boxed_1378_; size_t v_i_boxed_1379_; lean_object* v_res_1380_; 
v_ignoreLetDecls_boxed_1377_ = lean_unbox(v_ignoreLetDecls_1367_);
v_sz_boxed_1378_ = lean_unbox_usize(v_sz_1369_);
lean_dec(v_sz_1369_);
v_i_boxed_1379_ = lean_unbox_usize(v_i_1370_);
lean_dec(v_i_1370_);
v_res_1380_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(v_forbidden_1366_, v_ignoreLetDecls_boxed_1377_, v_as_1368_, v_sz_boxed_1378_, v_i_boxed_1379_, v_b_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec_ref(v_as_1368_);
lean_dec(v_forbidden_1366_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(lean_object* v_forbidden_1381_, uint8_t v_ignoreLetDecls_1382_, lean_object* v_as_1383_, size_t v_sz_1384_, size_t v_i_1385_, lean_object* v_b_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_1381_, v_ignoreLetDecls_1382_, v_as_1383_, v_sz_1384_, v_i_1385_, v_b_1386_, v___y_1388_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_forbidden_1393_, lean_object* v_ignoreLetDecls_1394_, lean_object* v_as_1395_, lean_object* v_sz_1396_, lean_object* v_i_1397_, lean_object* v_b_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1404_; size_t v_sz_boxed_1405_; size_t v_i_boxed_1406_; lean_object* v_res_1407_; 
v_ignoreLetDecls_boxed_1404_ = lean_unbox(v_ignoreLetDecls_1394_);
v_sz_boxed_1405_ = lean_unbox_usize(v_sz_1396_);
lean_dec(v_sz_1396_);
v_i_boxed_1406_ = lean_unbox_usize(v_i_1397_);
lean_dec(v_i_1397_);
v_res_1407_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(v_forbidden_1393_, v_ignoreLetDecls_boxed_1404_, v_as_1395_, v_sz_boxed_1405_, v_i_boxed_1406_, v_b_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec_ref(v_as_1395_);
lean_dec(v_forbidden_1393_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(lean_object* v_init_1408_, lean_object* v_x_1409_){
_start:
{
if (lean_obj_tag(v_x_1409_) == 0)
{
lean_object* v_k_1410_; lean_object* v_l_1411_; lean_object* v_r_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v_k_1410_ = lean_ctor_get(v_x_1409_, 1);
lean_inc(v_k_1410_);
v_l_1411_ = lean_ctor_get(v_x_1409_, 3);
lean_inc(v_l_1411_);
v_r_1412_ = lean_ctor_get(v_x_1409_, 4);
lean_inc(v_r_1412_);
lean_dec_ref_known(v_x_1409_, 5);
v___x_1413_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v_init_1408_, v_l_1411_);
v___x_1414_ = lean_array_push(v___x_1413_, v_k_1410_);
v_init_1408_ = v___x_1414_;
v_x_1409_ = v_r_1412_;
goto _start;
}
else
{
return v_init_1408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object* v_targets_1416_, lean_object* v_forbidden_1417_, uint8_t v_ignoreLetDecls_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_1416_, v_forbidden_1417_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1426_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
v___x_1426_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1416_, v_a_1425_, v_ignoreLetDecls_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_);
lean_dec(v_a_1425_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___y_1429_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
if (lean_obj_tag(v_a_1427_) == 0)
{
lean_object* v_size_1433_; 
v_size_1433_ = lean_ctor_get(v_a_1427_, 0);
lean_inc(v_size_1433_);
v___y_1429_ = v_size_1433_;
goto v___jp_1428_;
}
else
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_unsigned_to_nat(0u);
v___y_1429_ = v___x_1434_;
goto v___jp_1428_;
}
v___jp_1428_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1430_ = lean_mk_empty_array_with_capacity(v___y_1429_);
lean_dec(v___y_1429_);
v___x_1431_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v___x_1430_, v_a_1427_);
v___x_1432_ = l_Lean_Meta_sortFVarIds___redArg(v___x_1431_, v_a_1419_);
return v___x_1432_;
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
v_a_1435_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1426_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1426_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
v_a_1443_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1424_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1424_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object* v_targets_1451_, lean_object* v_forbidden_1452_, lean_object* v_ignoreLetDecls_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1459_; lean_object* v_res_1460_; 
v_ignoreLetDecls_boxed_1459_ = lean_unbox(v_ignoreLetDecls_1453_);
v_res_1460_ = l_Lean_Meta_getFVarsToGeneralize(v_targets_1451_, v_forbidden_1452_, v_ignoreLetDecls_boxed_1459_, v_a_1454_, v_a_1455_, v_a_1456_, v_a_1457_);
lean_dec(v_a_1457_);
lean_dec_ref(v_a_1456_);
lean_dec(v_a_1455_);
lean_dec_ref(v_a_1454_);
lean_dec_ref(v_targets_1451_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0(lean_object* v_init_1461_, lean_object* v_t_1462_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v_init_1461_, v_t_1462_);
return v___x_1463_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GeneralizeVars(builtin);
}
#ifdef __cplusplus
}
#endif
