// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.MarkAccessible
// Imports: public import Lean.Meta.Tactic.Revert import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getAt_x3f(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "__grind_mark"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getOriginalName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getOriginalName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_markGrindName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getOriginalName_x3f(lean_object* v_name_3_){
_start:
{
if (lean_obj_tag(v_name_3_) == 1)
{
lean_object* v_pre_4_; lean_object* v_str_5_; lean_object* v___x_6_; uint8_t v___x_7_; 
v_pre_4_ = lean_ctor_get(v_name_3_, 0);
v_str_5_ = lean_ctor_get(v_name_3_, 1);
v___x_6_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark___closed__0));
v___x_7_ = lean_string_dec_eq(v_str_5_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; 
v___x_8_ = lean_box(0);
return v___x_8_;
}
else
{
lean_object* v___x_9_; 
lean_inc(v_pre_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_pre_4_);
return v___x_9_;
}
}
else
{
lean_object* v___x_10_; 
v___x_10_ = lean_box(0);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getOriginalName_x3f___boxed(lean_object* v_name_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Meta_Grind_getOriginalName_x3f(v_name_11_);
lean_dec(v_name_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_markGrindName(lean_object* v_userName_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MarkAccessible_0__Lean_Meta_Grind_grindMark___closed__0));
v___x_15_ = l_Lean_Name_str___override(v_userName_13_, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg(lean_object* v_mvarId_16_, lean_object* v_x_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_16_, v_x_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_31_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_31_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_29_; 
if (v_isShared_27_ == 0)
{
v___x_29_ = v___x_26_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_a_24_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
v_a_32_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_23_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_23_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_32_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg___boxed(lean_object* v_mvarId_40_, lean_object* v_x_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg(v_mvarId_40_, v_x_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2(lean_object* v_00_u03b1_48_, lean_object* v_mvarId_49_, lean_object* v_x_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg(v_mvarId_49_, v_x_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___boxed(lean_object* v_00_u03b1_57_, lean_object* v_mvarId_58_, lean_object* v_x_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2(v_00_u03b1_57_, v_mvarId_58_, v_x_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_66_, lean_object* v_x_67_, lean_object* v_x_68_, lean_object* v_x_69_){
_start:
{
lean_object* v_ks_70_; lean_object* v_vs_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_95_; 
v_ks_70_ = lean_ctor_get(v_x_66_, 0);
v_vs_71_ = lean_ctor_get(v_x_66_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_95_ == 0)
{
v___x_73_ = v_x_66_;
v_isShared_74_ = v_isSharedCheck_95_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_vs_71_);
lean_inc(v_ks_70_);
lean_dec(v_x_66_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_95_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_75_ = lean_array_get_size(v_ks_70_);
v___x_76_ = lean_nat_dec_lt(v_x_67_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
lean_dec(v_x_67_);
v___x_77_ = lean_array_push(v_ks_70_, v_x_68_);
v___x_78_ = lean_array_push(v_vs_71_, v_x_69_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v___x_78_);
lean_ctor_set(v___x_73_, 0, v___x_77_);
v___x_80_ = v___x_73_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
else
{
lean_object* v_k_x27_82_; uint8_t v___x_83_; 
v_k_x27_82_ = lean_array_fget_borrowed(v_ks_70_, v_x_67_);
v___x_83_ = l_Lean_instBEqMVarId_beq(v_x_68_, v_k_x27_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_85_; 
if (v_isShared_74_ == 0)
{
v___x_85_ = v___x_73_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_ks_70_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_vs_71_);
v___x_85_ = v_reuseFailAlloc_89_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(1u);
v___x_87_ = lean_nat_add(v_x_67_, v___x_86_);
lean_dec(v_x_67_);
v_x_66_ = v___x_85_;
v_x_67_ = v___x_87_;
goto _start;
}
}
else
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_90_ = lean_array_fset(v_ks_70_, v_x_67_, v_x_68_);
v___x_91_ = lean_array_fset(v_vs_71_, v_x_67_, v_x_69_);
lean_dec(v_x_67_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v___x_91_);
lean_ctor_set(v___x_73_, 0, v___x_90_);
v___x_93_ = v___x_73_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v___x_91_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_96_, lean_object* v_k_97_, lean_object* v_v_98_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(0u);
v___x_100_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_96_, v___x_99_, v_k_97_, v_v_98_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(lean_object* v_x_102_, size_t v_x_103_, size_t v_x_104_, lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
if (lean_obj_tag(v_x_102_) == 0)
{
lean_object* v_es_107_; size_t v___x_108_; size_t v___x_109_; lean_object* v_j_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v_es_107_ = lean_ctor_get(v_x_102_, 0);
v___x_108_ = ((size_t)31ULL);
v___x_109_ = lean_usize_land(v_x_103_, v___x_108_);
v_j_110_ = lean_usize_to_nat(v___x_109_);
v___x_111_ = lean_array_get_size(v_es_107_);
v___x_112_ = lean_nat_dec_lt(v_j_110_, v___x_111_);
if (v___x_112_ == 0)
{
lean_dec(v_j_110_);
lean_dec(v_x_106_);
lean_dec(v_x_105_);
return v_x_102_;
}
else
{
lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_151_; 
lean_inc_ref(v_es_107_);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_102_);
if (v_isSharedCheck_151_ == 0)
{
lean_object* v_unused_152_; 
v_unused_152_ = lean_ctor_get(v_x_102_, 0);
lean_dec(v_unused_152_);
v___x_114_ = v_x_102_;
v_isShared_115_ = v_isSharedCheck_151_;
goto v_resetjp_113_;
}
else
{
lean_dec(v_x_102_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_151_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v_v_116_; lean_object* v___x_117_; lean_object* v_xs_x27_118_; lean_object* v___y_120_; 
v_v_116_ = lean_array_fget(v_es_107_, v_j_110_);
v___x_117_ = lean_box(0);
v_xs_x27_118_ = lean_array_fset(v_es_107_, v_j_110_, v___x_117_);
switch(lean_obj_tag(v_v_116_))
{
case 0:
{
lean_object* v_key_125_; lean_object* v_val_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_136_; 
v_key_125_ = lean_ctor_get(v_v_116_, 0);
v_val_126_ = lean_ctor_get(v_v_116_, 1);
v_isSharedCheck_136_ = !lean_is_exclusive(v_v_116_);
if (v_isSharedCheck_136_ == 0)
{
v___x_128_ = v_v_116_;
v_isShared_129_ = v_isSharedCheck_136_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_val_126_);
lean_inc(v_key_125_);
lean_dec(v_v_116_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_136_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
uint8_t v___x_130_; 
v___x_130_ = l_Lean_instBEqMVarId_beq(v_x_105_, v_key_125_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; lean_object* v___x_132_; 
lean_del_object(v___x_128_);
v___x_131_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_125_, v_val_126_, v_x_105_, v_x_106_);
v___x_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
v___y_120_ = v___x_132_;
goto v___jp_119_;
}
else
{
lean_object* v___x_134_; 
lean_dec(v_val_126_);
lean_dec(v_key_125_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v_x_106_);
lean_ctor_set(v___x_128_, 0, v_x_105_);
v___x_134_ = v___x_128_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_x_105_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_x_106_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
v___y_120_ = v___x_134_;
goto v___jp_119_;
}
}
}
}
case 1:
{
lean_object* v_node_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_149_; 
v_node_137_ = lean_ctor_get(v_v_116_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_v_116_);
if (v_isSharedCheck_149_ == 0)
{
v___x_139_ = v_v_116_;
v_isShared_140_ = v_isSharedCheck_149_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_node_137_);
lean_dec(v_v_116_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_149_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_141_ = ((size_t)5ULL);
v___x_142_ = lean_usize_shift_right(v_x_103_, v___x_141_);
v___x_143_ = ((size_t)1ULL);
v___x_144_ = lean_usize_add(v_x_104_, v___x_143_);
v___x_145_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(v_node_137_, v___x_142_, v___x_144_, v_x_105_, v_x_106_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_145_);
v___x_147_ = v___x_139_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
v___y_120_ = v___x_147_;
goto v___jp_119_;
}
}
}
default: 
{
lean_object* v___x_150_; 
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v_x_105_);
lean_ctor_set(v___x_150_, 1, v_x_106_);
v___y_120_ = v___x_150_;
goto v___jp_119_;
}
}
v___jp_119_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = lean_array_fset(v_xs_x27_118_, v_j_110_, v___y_120_);
lean_dec(v_j_110_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_121_);
v___x_123_ = v___x_114_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
else
{
lean_object* v_ks_153_; lean_object* v_vs_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_172_; 
v_ks_153_ = lean_ctor_get(v_x_102_, 0);
v_vs_154_ = lean_ctor_get(v_x_102_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_x_102_);
if (v_isSharedCheck_172_ == 0)
{
v___x_156_ = v_x_102_;
v_isShared_157_ = v_isSharedCheck_172_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_vs_154_);
lean_inc(v_ks_153_);
lean_dec(v_x_102_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_172_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_ks_153_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_vs_154_);
v___x_159_ = v_reuseFailAlloc_171_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v_newNode_160_; size_t v___x_161_; uint8_t v___x_162_; 
v_newNode_160_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4___redArg(v___x_159_, v_x_105_, v_x_106_);
v___x_161_ = ((size_t)7ULL);
v___x_162_ = lean_usize_dec_le(v___x_161_, v_x_104_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_163_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_160_);
v___x_164_ = lean_unsigned_to_nat(4u);
v___x_165_ = lean_nat_dec_lt(v___x_163_, v___x_164_);
lean_dec(v___x_163_);
if (v___x_165_ == 0)
{
lean_object* v_ks_166_; lean_object* v_vs_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_ks_166_ = lean_ctor_get(v_newNode_160_, 0);
lean_inc_ref(v_ks_166_);
v_vs_167_ = lean_ctor_get(v_newNode_160_, 1);
lean_inc_ref(v_vs_167_);
lean_dec_ref(v_newNode_160_);
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_169_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_170_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg(v_x_104_, v_ks_166_, v_vs_167_, v___x_168_, v___x_169_);
lean_dec_ref(v_vs_167_);
lean_dec_ref(v_ks_166_);
return v___x_170_;
}
else
{
return v_newNode_160_;
}
}
else
{
return v_newNode_160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_173_, lean_object* v_keys_174_, lean_object* v_vals_175_, lean_object* v_i_176_, lean_object* v_entries_177_){
_start:
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = lean_array_get_size(v_keys_174_);
v___x_179_ = lean_nat_dec_lt(v_i_176_, v___x_178_);
if (v___x_179_ == 0)
{
lean_dec(v_i_176_);
return v_entries_177_;
}
else
{
lean_object* v_k_180_; lean_object* v_v_181_; uint64_t v___x_182_; size_t v_h_183_; size_t v___x_184_; lean_object* v___x_185_; size_t v___x_186_; size_t v___x_187_; size_t v___x_188_; size_t v_h_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v_k_180_ = lean_array_fget_borrowed(v_keys_174_, v_i_176_);
v_v_181_ = lean_array_fget_borrowed(v_vals_175_, v_i_176_);
v___x_182_ = l_Lean_instHashableMVarId_hash(v_k_180_);
v_h_183_ = lean_uint64_to_usize(v___x_182_);
v___x_184_ = ((size_t)5ULL);
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = ((size_t)1ULL);
v___x_187_ = lean_usize_sub(v_depth_173_, v___x_186_);
v___x_188_ = lean_usize_mul(v___x_184_, v___x_187_);
v_h_189_ = lean_usize_shift_right(v_h_183_, v___x_188_);
v___x_190_ = lean_nat_add(v_i_176_, v___x_185_);
lean_dec(v_i_176_);
lean_inc(v_v_181_);
lean_inc(v_k_180_);
v___x_191_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(v_entries_177_, v_h_189_, v_depth_173_, v_k_180_, v_v_181_);
v_i_176_ = v___x_190_;
v_entries_177_ = v___x_191_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_193_, lean_object* v_keys_194_, lean_object* v_vals_195_, lean_object* v_i_196_, lean_object* v_entries_197_){
_start:
{
size_t v_depth_boxed_198_; lean_object* v_res_199_; 
v_depth_boxed_198_ = lean_unbox_usize(v_depth_193_);
lean_dec(v_depth_193_);
v_res_199_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_198_, v_keys_194_, v_vals_195_, v_i_196_, v_entries_197_);
lean_dec_ref(v_vals_195_);
lean_dec_ref(v_keys_194_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_200_, lean_object* v_x_201_, lean_object* v_x_202_, lean_object* v_x_203_, lean_object* v_x_204_){
_start:
{
size_t v_x_2755__boxed_205_; size_t v_x_2756__boxed_206_; lean_object* v_res_207_; 
v_x_2755__boxed_205_ = lean_unbox_usize(v_x_201_);
lean_dec(v_x_201_);
v_x_2756__boxed_206_ = lean_unbox_usize(v_x_202_);
lean_dec(v_x_202_);
v_res_207_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(v_x_200_, v_x_2755__boxed_205_, v_x_2756__boxed_206_, v_x_203_, v_x_204_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0___redArg(lean_object* v_x_208_, lean_object* v_x_209_, lean_object* v_x_210_){
_start:
{
uint64_t v___x_211_; size_t v___x_212_; size_t v___x_213_; lean_object* v___x_214_; 
v___x_211_ = l_Lean_instHashableMVarId_hash(v_x_209_);
v___x_212_ = lean_uint64_to_usize(v___x_211_);
v___x_213_ = ((size_t)1ULL);
v___x_214_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(v_x_208_, v___x_212_, v___x_213_, v_x_209_, v_x_210_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg(lean_object* v_mvarId_215_, lean_object* v_val_216_, lean_object* v___y_217_){
_start:
{
lean_object* v___x_219_; lean_object* v_mctx_220_; lean_object* v_cache_221_; lean_object* v_zetaDeltaFVarIds_222_; lean_object* v_postponed_223_; lean_object* v_diag_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_253_; 
v___x_219_ = lean_st_ref_take(v___y_217_);
v_mctx_220_ = lean_ctor_get(v___x_219_, 0);
v_cache_221_ = lean_ctor_get(v___x_219_, 1);
v_zetaDeltaFVarIds_222_ = lean_ctor_get(v___x_219_, 2);
v_postponed_223_ = lean_ctor_get(v___x_219_, 3);
v_diag_224_ = lean_ctor_get(v___x_219_, 4);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_253_ == 0)
{
v___x_226_ = v___x_219_;
v_isShared_227_ = v_isSharedCheck_253_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_diag_224_);
lean_inc(v_postponed_223_);
lean_inc(v_zetaDeltaFVarIds_222_);
lean_inc(v_cache_221_);
lean_inc(v_mctx_220_);
lean_dec(v___x_219_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_253_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v_depth_228_; lean_object* v_levelAssignDepth_229_; lean_object* v_lmvarCounter_230_; lean_object* v_mvarCounter_231_; lean_object* v_lDecls_232_; lean_object* v_decls_233_; lean_object* v_userNames_234_; lean_object* v_lAssignment_235_; lean_object* v_eAssignment_236_; lean_object* v_dAssignment_237_; lean_object* v_instanceTypedMVars_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_252_; 
v_depth_228_ = lean_ctor_get(v_mctx_220_, 0);
v_levelAssignDepth_229_ = lean_ctor_get(v_mctx_220_, 1);
v_lmvarCounter_230_ = lean_ctor_get(v_mctx_220_, 2);
v_mvarCounter_231_ = lean_ctor_get(v_mctx_220_, 3);
v_lDecls_232_ = lean_ctor_get(v_mctx_220_, 4);
v_decls_233_ = lean_ctor_get(v_mctx_220_, 5);
v_userNames_234_ = lean_ctor_get(v_mctx_220_, 6);
v_lAssignment_235_ = lean_ctor_get(v_mctx_220_, 7);
v_eAssignment_236_ = lean_ctor_get(v_mctx_220_, 8);
v_dAssignment_237_ = lean_ctor_get(v_mctx_220_, 9);
v_instanceTypedMVars_238_ = lean_ctor_get(v_mctx_220_, 10);
v_isSharedCheck_252_ = !lean_is_exclusive(v_mctx_220_);
if (v_isSharedCheck_252_ == 0)
{
v___x_240_ = v_mctx_220_;
v_isShared_241_ = v_isSharedCheck_252_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_instanceTypedMVars_238_);
lean_inc(v_dAssignment_237_);
lean_inc(v_eAssignment_236_);
lean_inc(v_lAssignment_235_);
lean_inc(v_userNames_234_);
lean_inc(v_decls_233_);
lean_inc(v_lDecls_232_);
lean_inc(v_mvarCounter_231_);
lean_inc(v_lmvarCounter_230_);
lean_inc(v_levelAssignDepth_229_);
lean_inc(v_depth_228_);
lean_dec(v_mctx_220_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_252_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_245_; 
v___x_242_ = lean_box(0);
v___x_243_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0___redArg(v_eAssignment_236_, v_mvarId_215_, v_val_216_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 8, v___x_243_);
v___x_245_ = v___x_240_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_depth_228_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v_levelAssignDepth_229_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v_lmvarCounter_230_);
lean_ctor_set(v_reuseFailAlloc_251_, 3, v_mvarCounter_231_);
lean_ctor_set(v_reuseFailAlloc_251_, 4, v_lDecls_232_);
lean_ctor_set(v_reuseFailAlloc_251_, 5, v_decls_233_);
lean_ctor_set(v_reuseFailAlloc_251_, 6, v_userNames_234_);
lean_ctor_set(v_reuseFailAlloc_251_, 7, v_lAssignment_235_);
lean_ctor_set(v_reuseFailAlloc_251_, 8, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_251_, 9, v_dAssignment_237_);
lean_ctor_set(v_reuseFailAlloc_251_, 10, v_instanceTypedMVars_238_);
v___x_245_ = v_reuseFailAlloc_251_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_247_; 
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_245_);
v___x_247_ = v___x_226_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_cache_221_);
lean_ctor_set(v_reuseFailAlloc_250_, 2, v_zetaDeltaFVarIds_222_);
lean_ctor_set(v_reuseFailAlloc_250_, 3, v_postponed_223_);
lean_ctor_set(v_reuseFailAlloc_250_, 4, v_diag_224_);
v___x_247_ = v_reuseFailAlloc_250_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_st_ref_put(v___y_217_, v___x_247_);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_242_);
return v___x_249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg___boxed(lean_object* v_mvarId_254_, lean_object* v_val_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg(v_mvarId_254_, v_val_255_, v___y_256_);
lean_dec(v___y_256_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0(lean_object* v_b_259_, lean_object* v_00___260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_266_, 0, v_b_259_);
v___x_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0___boxed(lean_object* v_b_268_, lean_object* v_00___269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0(v_b_268_, v_00___269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg(lean_object* v_upperBound_276_, lean_object* v___x_277_, lean_object* v_a_278_, lean_object* v_b_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_a_286_; lean_object* v___y_291_; uint8_t v___x_310_; 
v___x_310_ = lean_nat_dec_lt(v_a_278_, v_upperBound_276_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; 
lean_dec(v_a_278_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v_b_279_);
return v___x_311_;
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_312_ = lean_nat_sub(v___x_277_, v_a_278_);
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_sub(v___x_312_, v___x_313_);
lean_dec(v___x_312_);
v___x_315_ = l_Lean_LocalContext_getAt_x3f(v_b_279_, v___x_314_);
lean_dec(v___x_314_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_box(0);
v___x_317_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0(v_b_279_, v___x_316_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
v___y_291_ = v___x_317_;
goto v___jp_290_;
}
else
{
lean_object* v_val_318_; uint8_t v___x_319_; 
v_val_318_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_val_318_);
lean_dec_ref_known(v___x_315_, 1);
v___x_319_ = l_Lean_LocalDecl_isImplementationDetail(v_val_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = l_Lean_LocalDecl_userName(v_val_318_);
v___x_321_ = l_Lean_Name_hasMacroScopes(v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = l_Lean_Meta_Grind_markGrindName(v___x_320_);
v___x_323_ = l_Lean_LocalDecl_fvarId(v_val_318_);
lean_dec(v_val_318_);
v___x_324_ = l_Lean_LocalContext_setUserName(v_b_279_, v___x_323_, v___x_322_);
v_a_286_ = v___x_324_;
goto v___jp_285_;
}
else
{
lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec(v___x_320_);
lean_dec(v_val_318_);
v___x_325_ = lean_box(0);
v___x_326_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0(v_b_279_, v___x_325_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
v___y_291_ = v___x_326_;
goto v___jp_290_;
}
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; 
lean_dec(v_val_318_);
v___x_327_ = lean_box(0);
v___x_328_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___lam__0(v_b_279_, v___x_327_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
v___y_291_ = v___x_328_;
goto v___jp_290_;
}
}
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_nat_add(v_a_278_, v___x_287_);
lean_dec(v_a_278_);
v_a_278_ = v___x_288_;
v_b_279_ = v_a_286_;
goto _start;
}
v___jp_290_:
{
if (lean_obj_tag(v___y_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_301_; 
v_a_292_ = lean_ctor_get(v___y_291_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___y_291_);
if (v_isSharedCheck_301_ == 0)
{
v___x_294_ = v___y_291_;
v_isShared_295_ = v_isSharedCheck_301_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___y_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_301_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
if (lean_obj_tag(v_a_292_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; 
lean_dec(v_a_278_);
v_a_296_ = lean_ctor_get(v_a_292_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v_a_292_, 1);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v_a_296_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
else
{
lean_object* v_a_300_; 
lean_del_object(v___x_294_);
v_a_300_ = lean_ctor_get(v_a_292_, 0);
lean_inc(v_a_300_);
lean_dec_ref_known(v_a_292_, 1);
v_a_286_ = v_a_300_;
goto v___jp_285_;
}
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
lean_dec(v_a_278_);
v_a_302_ = lean_ctor_get(v___y_291_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___y_291_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___y_291_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___y_291_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg___boxed(lean_object* v_upperBound_329_, lean_object* v___x_330_, lean_object* v_a_331_, lean_object* v_b_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg(v_upperBound_329_, v___x_330_, v_a_331_, v_b_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___x_330_);
lean_dec(v_upperBound_329_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible___lam__0(lean_object* v_mvarId_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; 
lean_inc(v_mvarId_339_);
v___x_345_ = l_Lean_MVarId_getDecl(v_mvarId_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v_userName_347_; lean_object* v_lctx_348_; lean_object* v_type_349_; lean_object* v_localInstances_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v_userName_347_ = lean_ctor_get(v_a_346_, 0);
lean_inc(v_userName_347_);
v_lctx_348_ = lean_ctor_get(v_a_346_, 1);
lean_inc_ref_n(v_lctx_348_, 2);
v_type_349_ = lean_ctor_get(v_a_346_, 2);
lean_inc_ref(v_type_349_);
v_localInstances_350_ = lean_ctor_get(v_a_346_, 4);
lean_inc_ref(v_localInstances_350_);
lean_dec(v_a_346_);
v___x_351_ = lean_local_ctx_num_indices(v_lctx_348_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg(v___x_351_, v___x_351_, v___x_352_, v_lctx_348_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
lean_dec(v___x_351_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; uint8_t v___x_355_; lean_object* v___x_356_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v___x_353_, 1);
v___x_355_ = 2;
v___x_356_ = l_Lean_Meta_mkFreshExprMVarAt(v_a_354_, v_localInstances_350_, v_type_349_, v___x_355_, v_userName_347_, v___x_352_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_366_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc_n(v_a_357_, 2);
lean_dec_ref_known(v___x_356_, 1);
v___x_358_ = l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg(v_mvarId_339_, v_a_357_, v___y_341_);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; 
v_unused_367_ = lean_ctor_get(v___x_358_, 0);
lean_dec(v_unused_367_);
v___x_360_ = v___x_358_;
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
else
{
lean_dec(v___x_358_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_362_ = l_Lean_Expr_mvarId_x21(v_a_357_);
lean_dec(v_a_357_);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v___x_362_);
v___x_364_ = v___x_360_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
lean_dec(v_mvarId_339_);
v_a_368_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_356_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_356_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec_ref(v_localInstances_350_);
lean_dec_ref(v_type_349_);
lean_dec(v_userName_347_);
lean_dec(v_mvarId_339_);
v_a_376_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_353_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_353_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec(v_mvarId_339_);
v_a_384_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_345_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_345_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible___lam__0___boxed(lean_object* v_mvarId_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_MVarId_markAccessible___lam__0(v_mvarId_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible(lean_object* v_mvarId_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v___f_405_; lean_object* v___x_406_; 
lean_inc(v_mvarId_399_);
v___f_405_ = lean_alloc_closure((void*)(l_Lean_MVarId_markAccessible___lam__0___boxed), 6, 1);
lean_closure_set(v___f_405_, 0, v_mvarId_399_);
v___x_406_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_markAccessible_spec__2___redArg(v_mvarId_399_, v___f_405_, v_a_400_, v_a_401_, v_a_402_, v_a_403_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_markAccessible___boxed(lean_object* v_mvarId_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_MVarId_markAccessible(v_mvarId_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0(lean_object* v_mvarId_414_, lean_object* v_val_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___redArg(v_mvarId_414_, v_val_415_, v___y_417_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0___boxed(lean_object* v_mvarId_422_, lean_object* v_val_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0(v_mvarId_422_, v_val_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1(lean_object* v_upperBound_430_, lean_object* v___x_431_, lean_object* v_inst_432_, lean_object* v_R_433_, lean_object* v_a_434_, lean_object* v_b_435_, lean_object* v_c_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___redArg(v_upperBound_430_, v___x_431_, v_a_434_, v_b_435_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1___boxed(lean_object* v_upperBound_443_, lean_object* v___x_444_, lean_object* v_inst_445_, lean_object* v_R_446_, lean_object* v_a_447_, lean_object* v_b_448_, lean_object* v_c_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_markAccessible_spec__1(v_upperBound_443_, v___x_444_, v_inst_445_, v_R_446_, v_a_447_, v_b_448_, v_c_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___x_444_);
lean_dec(v_upperBound_443_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0(lean_object* v_00_u03b2_456_, lean_object* v_x_457_, lean_object* v_x_458_, lean_object* v_x_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0___redArg(v_x_457_, v_x_458_, v_x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_461_, lean_object* v_x_462_, size_t v_x_463_, size_t v_x_464_, lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___redArg(v_x_462_, v_x_463_, v_x_464_, v_x_465_, v_x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_468_, lean_object* v_x_469_, lean_object* v_x_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
size_t v_x_3254__boxed_474_; size_t v_x_3255__boxed_475_; lean_object* v_res_476_; 
v_x_3254__boxed_474_ = lean_unbox_usize(v_x_470_);
lean_dec(v_x_470_);
v_x_3255__boxed_475_ = lean_unbox_usize(v_x_471_);
lean_dec(v_x_471_);
v_res_476_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2(v_00_u03b2_468_, v_x_469_, v_x_3254__boxed_474_, v_x_3255__boxed_475_, v_x_472_, v_x_473_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_477_, lean_object* v_n_478_, lean_object* v_k_479_, lean_object* v_v_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4___redArg(v_n_478_, v_k_479_, v_v_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_482_, size_t v_depth_483_, lean_object* v_keys_484_, lean_object* v_vals_485_, lean_object* v_heq_486_, lean_object* v_i_487_, lean_object* v_entries_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_483_, v_keys_484_, v_vals_485_, v_i_487_, v_entries_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_490_, lean_object* v_depth_491_, lean_object* v_keys_492_, lean_object* v_vals_493_, lean_object* v_heq_494_, lean_object* v_i_495_, lean_object* v_entries_496_){
_start:
{
size_t v_depth_boxed_497_; lean_object* v_res_498_; 
v_depth_boxed_497_ = lean_unbox_usize(v_depth_491_);
lean_dec(v_depth_491_);
v_res_498_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_490_, v_depth_boxed_497_, v_keys_492_, v_vals_493_, v_heq_494_, v_i_495_, v_entries_496_);
lean_dec_ref(v_vals_493_);
lean_dec_ref(v_keys_492_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_499_, lean_object* v_x_500_, lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v_x_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_markAccessible_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_500_, v_x_501_, v_x_502_, v_x_503_);
return v___x_504_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MarkAccessible(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_MarkAccessible(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_MarkAccessible(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MarkAccessible(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_MarkAccessible(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_MarkAccessible(builtin);
}
#ifdef __cplusplus
}
#endif
