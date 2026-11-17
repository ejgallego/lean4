// Lean compiler output
// Module: Lean.Util.ForEachExprWhere
// Imports: public import Lean.Expr public import Lean.Util.MonadCache
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
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_ForEachExprWhere_cacheSize;
static const lean_ctor_object l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_notAnExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_notAnExpr___closed__0 = (const lean_object*)&l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_notAnExpr___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_notAnExpr = (const lean_object*)&l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_notAnExpr___closed__0_value;
static lean_once_cell_t l_Lean_ForEachExprWhere_initCache___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ForEachExprWhere_initCache___closed__0;
static lean_once_cell_t l_Lean_ForEachExprWhere_initCache___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ForEachExprWhere_initCache___closed__1;
static lean_once_cell_t l_Lean_ForEachExprWhere_initCache___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ForEachExprWhere_initCache___closed__2;
static lean_once_cell_t l_Lean_ForEachExprWhere_initCache___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ForEachExprWhere_initCache___closed__3;
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_initCache;
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__0(size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ForEachExprWhere_checked___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ForEachExprWhere_checked___redArg___closed__0 = (const lean_object*)&l_Lean_ForEachExprWhere_checked___redArg___closed__0_value;
static const lean_closure_object l_Lean_ForEachExprWhere_checked___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ForEachExprWhere_checked___redArg___closed__1 = (const lean_object*)&l_Lean_ForEachExprWhere_checked___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__3(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ForEachExprWhere_visit___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ForEachExprWhere_visit___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static size_t _init_l_Lean_ForEachExprWhere_cacheSize(void){
_start:
{
size_t v___x_1_; 
v___x_1_ = ((size_t)8191ULL);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_ForEachExprWhere_initCache___closed__0(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = ((lean_object*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_notAnExpr));
v___x_6_ = lean_unsigned_to_nat(8191u);
v___x_7_ = lean_mk_array(v___x_6_, v___x_5_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_ForEachExprWhere_initCache___closed__1(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_box(0);
v___x_9_ = lean_unsigned_to_nat(16u);
v___x_10_ = lean_mk_array(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_ForEachExprWhere_initCache___closed__2(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_obj_once(&l_Lean_ForEachExprWhere_initCache___closed__1, &l_Lean_ForEachExprWhere_initCache___closed__1_once, _init_l_Lean_ForEachExprWhere_initCache___closed__1);
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_ForEachExprWhere_initCache___closed__3(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&l_Lean_ForEachExprWhere_initCache___closed__2, &l_Lean_ForEachExprWhere_initCache___closed__2_once, _init_l_Lean_ForEachExprWhere_initCache___closed__2);
v___x_15_ = lean_obj_once(&l_Lean_ForEachExprWhere_initCache___closed__0, &l_Lean_ForEachExprWhere_initCache___closed__0_once, _init_l_Lean_ForEachExprWhere_initCache___closed__0);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_ForEachExprWhere_initCache(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l_Lean_ForEachExprWhere_initCache___closed__3, &l_Lean_ForEachExprWhere_initCache___closed__3_once, _init_l_Lean_ForEachExprWhere_initCache___closed__3);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__0(size_t v___x_18_, lean_object* v_e_19_, lean_object* v_s_20_){
_start:
{
lean_object* v_visited_21_; lean_object* v_checked_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_32_; 
v_visited_21_ = lean_ctor_get(v_s_20_, 0);
v_checked_22_ = lean_ctor_get(v_s_20_, 1);
v_isSharedCheck_32_ = !lean_is_exclusive(v_s_20_);
if (v_isSharedCheck_32_ == 0)
{
v___x_24_ = v_s_20_;
v_isShared_25_ = v_isSharedCheck_32_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_checked_22_);
lean_inc(v_visited_21_);
lean_dec(v_s_20_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_32_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v___x_26_ = lean_box(0);
v___x_27_ = lean_array_uset(v_visited_21_, v___x_18_, v_e_19_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 0, v___x_27_);
v___x_29_ = v___x_24_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v_checked_22_);
v___x_29_ = v_reuseFailAlloc_31_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
lean_object* v___x_30_; 
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_26_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__0___boxed(lean_object* v___x_33_, lean_object* v_e_34_, lean_object* v_s_35_){
_start:
{
size_t v___x_330__boxed_36_; lean_object* v_res_37_; 
v___x_330__boxed_36_ = lean_unbox_usize(v___x_33_);
lean_dec(v___x_33_);
v_res_37_ = l_Lean_ForEachExprWhere_visited___redArg___lam__0(v___x_330__boxed_36_, v_e_34_, v_s_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__1(lean_object* v_toApplicative_38_, uint8_t v___x_39_, lean_object* v_a_40_){
_start:
{
lean_object* v_toPure_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v_toPure_41_ = lean_ctor_get(v_toApplicative_38_, 1);
lean_inc(v_toPure_41_);
lean_dec_ref(v_toApplicative_38_);
v___x_42_ = lean_box(v___x_39_);
v___x_43_ = lean_apply_2(v_toPure_41_, lean_box(0), v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__1___boxed(lean_object* v_toApplicative_44_, lean_object* v___x_45_, lean_object* v_a_46_){
_start:
{
uint8_t v___x_353__boxed_47_; lean_object* v_res_48_; 
v___x_353__boxed_47_ = lean_unbox(v___x_45_);
v_res_48_ = l_Lean_ForEachExprWhere_visited___redArg___lam__1(v_toApplicative_44_, v___x_353__boxed_47_, v_a_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__2(lean_object* v_e_49_, lean_object* v_toApplicative_50_, lean_object* v_a_51_, lean_object* v_inst_52_, lean_object* v_toBind_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_visited_55_; size_t v___x_56_; size_t v___x_57_; size_t v___x_58_; lean_object* v___x_59_; size_t v___x_60_; uint8_t v___x_61_; 
v_visited_55_ = lean_ctor_get(v_a_54_, 0);
v___x_56_ = lean_ptr_addr(v_e_49_);
v___x_57_ = ((size_t)8191ULL);
v___x_58_ = lean_usize_mod(v___x_56_, v___x_57_);
v___x_59_ = lean_array_uget_borrowed(v_visited_55_, v___x_58_);
v___x_60_ = lean_ptr_addr(v___x_59_);
v___x_61_ = lean_usize_dec_eq(v___x_60_, v___x_56_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___f_63_; lean_object* v___x_64_; lean_object* v___f_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_62_ = lean_box_usize(v___x_58_);
v___f_63_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visited___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_63_, 0, v___x_62_);
lean_closure_set(v___f_63_, 1, v_e_49_);
v___x_64_ = lean_box(v___x_61_);
v___f_65_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visited___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_65_, 0, v_toApplicative_50_);
lean_closure_set(v___f_65_, 1, v___x_64_);
lean_inc(v_a_51_);
v___x_66_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_66_, 0, lean_box(0));
lean_closure_set(v___x_66_, 1, lean_box(0));
lean_closure_set(v___x_66_, 2, lean_box(0));
lean_closure_set(v___x_66_, 3, v_a_51_);
lean_closure_set(v___x_66_, 4, v___f_63_);
v___x_67_ = lean_apply_2(v_inst_52_, lean_box(0), v___x_66_);
v___x_68_ = lean_apply_4(v_toBind_53_, lean_box(0), lean_box(0), v___x_67_, v___f_65_);
return v___x_68_;
}
else
{
lean_object* v_toPure_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
lean_dec(v_toBind_53_);
lean_dec(v_inst_52_);
lean_dec_ref(v_e_49_);
v_toPure_69_ = lean_ctor_get(v_toApplicative_50_, 1);
lean_inc(v_toPure_69_);
lean_dec_ref(v_toApplicative_50_);
v___x_70_ = lean_box(v___x_61_);
v___x_71_ = lean_apply_2(v_toPure_69_, lean_box(0), v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___lam__2___boxed(lean_object* v_e_72_, lean_object* v_toApplicative_73_, lean_object* v_a_74_, lean_object* v_inst_75_, lean_object* v_toBind_76_, lean_object* v_a_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_ForEachExprWhere_visited___redArg___lam__2(v_e_72_, v_toApplicative_73_, v_a_74_, v_inst_75_, v_toBind_76_, v_a_77_);
lean_dec_ref(v_a_77_);
lean_dec(v_a_74_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg(lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_e_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_toApplicative_83_; lean_object* v_toBind_84_; lean_object* v___f_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_toApplicative_83_ = lean_ctor_get(v_inst_80_, 0);
lean_inc_ref(v_toApplicative_83_);
v_toBind_84_ = lean_ctor_get(v_inst_80_, 1);
lean_inc_n(v_toBind_84_, 2);
lean_dec_ref(v_inst_80_);
lean_inc(v_inst_79_);
lean_inc_n(v_a_82_, 2);
v___f_85_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visited___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_85_, 0, v_e_81_);
lean_closure_set(v___f_85_, 1, v_toApplicative_83_);
lean_closure_set(v___f_85_, 2, v_a_82_);
lean_closure_set(v___f_85_, 3, v_inst_79_);
lean_closure_set(v___f_85_, 4, v_toBind_84_);
v___x_86_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_86_, 0, lean_box(0));
lean_closure_set(v___x_86_, 1, lean_box(0));
lean_closure_set(v___x_86_, 2, v_a_82_);
v___x_87_ = lean_apply_2(v_inst_79_, lean_box(0), v___x_86_);
v___x_88_ = lean_apply_4(v_toBind_84_, lean_box(0), lean_box(0), v___x_87_, v___f_85_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___redArg___boxed(lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_e_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_ForEachExprWhere_visited___redArg(v_inst_89_, v_inst_90_, v_e_91_, v_a_92_);
lean_dec(v_a_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited(lean_object* v_00_u03c9_94_, lean_object* v_m_95_, lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v_inst_98_, lean_object* v_e_99_, lean_object* v_a_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_ForEachExprWhere_visited___redArg(v_inst_97_, v_inst_98_, v_e_99_, v_a_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___boxed(lean_object* v_00_u03c9_102_, lean_object* v_m_103_, lean_object* v_inst_104_, lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v_e_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_ForEachExprWhere_visited(v_00_u03c9_102_, v_m_103_, v_inst_104_, v_inst_105_, v_inst_106_, v_e_107_, v_a_108_);
lean_dec(v_a_108_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__0(lean_object* v___x_110_, lean_object* v___x_111_, lean_object* v_e_112_, lean_object* v_s_113_){
_start:
{
lean_object* v_visited_114_; lean_object* v_checked_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_125_; 
v_visited_114_ = lean_ctor_get(v_s_113_, 0);
v_checked_115_ = lean_ctor_get(v_s_113_, 1);
v_isSharedCheck_125_ = !lean_is_exclusive(v_s_113_);
if (v_isSharedCheck_125_ == 0)
{
v___x_117_ = v_s_113_;
v_isShared_118_ = v_isSharedCheck_125_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_checked_115_);
lean_inc(v_visited_114_);
lean_dec(v_s_113_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_125_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = lean_box(0);
v___x_120_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_110_, v___x_111_, v_checked_115_, v_e_112_, v___x_119_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___x_120_);
v___x_122_ = v___x_117_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_visited_114_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_124_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_119_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__1(lean_object* v_toApplicative_126_, uint8_t v___x_127_, lean_object* v_a_128_){
_start:
{
lean_object* v_toPure_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_toPure_129_ = lean_ctor_get(v_toApplicative_126_, 1);
lean_inc(v_toPure_129_);
lean_dec_ref(v_toApplicative_126_);
v___x_130_ = lean_box(v___x_127_);
v___x_131_ = lean_apply_2(v_toPure_129_, lean_box(0), v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__1___boxed(lean_object* v_toApplicative_132_, lean_object* v___x_133_, lean_object* v_a_134_){
_start:
{
uint8_t v___x_354__boxed_135_; lean_object* v_res_136_; 
v___x_354__boxed_135_ = lean_unbox(v___x_133_);
v_res_136_ = l_Lean_ForEachExprWhere_checked___redArg___lam__1(v_toApplicative_132_, v___x_354__boxed_135_, v_a_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__2(lean_object* v___x_137_, lean_object* v___x_138_, lean_object* v_e_139_, lean_object* v_toApplicative_140_, lean_object* v_a_141_, lean_object* v___f_142_, lean_object* v_inst_143_, lean_object* v_toBind_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_checked_146_; uint8_t v___x_147_; 
v_checked_146_ = lean_ctor_get(v_a_145_, 1);
v___x_147_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_137_, v___x_138_, v_checked_146_, v_e_139_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v___f_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_148_ = lean_box(v___x_147_);
v___f_149_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_checked___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_149_, 0, v_toApplicative_140_);
lean_closure_set(v___f_149_, 1, v___x_148_);
lean_inc(v_a_141_);
v___x_150_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_150_, 0, lean_box(0));
lean_closure_set(v___x_150_, 1, lean_box(0));
lean_closure_set(v___x_150_, 2, lean_box(0));
lean_closure_set(v___x_150_, 3, v_a_141_);
lean_closure_set(v___x_150_, 4, v___f_142_);
v___x_151_ = lean_apply_2(v_inst_143_, lean_box(0), v___x_150_);
v___x_152_ = lean_apply_4(v_toBind_144_, lean_box(0), lean_box(0), v___x_151_, v___f_149_);
return v___x_152_;
}
else
{
lean_object* v_toPure_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec(v_toBind_144_);
lean_dec(v_inst_143_);
lean_dec_ref(v___f_142_);
v_toPure_153_ = lean_ctor_get(v_toApplicative_140_, 1);
lean_inc(v_toPure_153_);
lean_dec_ref(v_toApplicative_140_);
v___x_154_ = lean_box(v___x_147_);
v___x_155_ = lean_apply_2(v_toPure_153_, lean_box(0), v___x_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___lam__2___boxed(lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v_e_158_, lean_object* v_toApplicative_159_, lean_object* v_a_160_, lean_object* v___f_161_, lean_object* v_inst_162_, lean_object* v_toBind_163_, lean_object* v_a_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lean_ForEachExprWhere_checked___redArg___lam__2(v___x_156_, v___x_157_, v_e_158_, v_toApplicative_159_, v_a_160_, v___f_161_, v_inst_162_, v_toBind_163_, v_a_164_);
lean_dec_ref(v_a_164_);
lean_dec(v_a_160_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg(lean_object* v_inst_168_, lean_object* v_inst_169_, lean_object* v_e_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_toApplicative_172_; lean_object* v_toBind_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_toApplicative_172_ = lean_ctor_get(v_inst_169_, 0);
lean_inc_ref(v_toApplicative_172_);
v_toBind_173_ = lean_ctor_get(v_inst_169_, 1);
lean_inc_n(v_toBind_173_, 2);
lean_dec_ref(v_inst_169_);
v___x_174_ = ((lean_object*)(l_Lean_ForEachExprWhere_checked___redArg___closed__0));
v___x_175_ = ((lean_object*)(l_Lean_ForEachExprWhere_checked___redArg___closed__1));
lean_inc_ref(v_e_170_);
v___f_176_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_checked___redArg___lam__0), 4, 3);
lean_closure_set(v___f_176_, 0, v___x_174_);
lean_closure_set(v___f_176_, 1, v___x_175_);
lean_closure_set(v___f_176_, 2, v_e_170_);
lean_inc(v_inst_168_);
lean_inc_n(v_a_171_, 2);
v___f_177_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_checked___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_177_, 0, v___x_174_);
lean_closure_set(v___f_177_, 1, v___x_175_);
lean_closure_set(v___f_177_, 2, v_e_170_);
lean_closure_set(v___f_177_, 3, v_toApplicative_172_);
lean_closure_set(v___f_177_, 4, v_a_171_);
lean_closure_set(v___f_177_, 5, v___f_176_);
lean_closure_set(v___f_177_, 6, v_inst_168_);
lean_closure_set(v___f_177_, 7, v_toBind_173_);
v___x_178_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_178_, 0, lean_box(0));
lean_closure_set(v___x_178_, 1, lean_box(0));
lean_closure_set(v___x_178_, 2, v_a_171_);
v___x_179_ = lean_apply_2(v_inst_168_, lean_box(0), v___x_178_);
v___x_180_ = lean_apply_4(v_toBind_173_, lean_box(0), lean_box(0), v___x_179_, v___f_177_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___redArg___boxed(lean_object* v_inst_181_, lean_object* v_inst_182_, lean_object* v_e_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lean_ForEachExprWhere_checked___redArg(v_inst_181_, v_inst_182_, v_e_183_, v_a_184_);
lean_dec(v_a_184_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked(lean_object* v_00_u03c9_186_, lean_object* v_m_187_, lean_object* v_inst_188_, lean_object* v_inst_189_, lean_object* v_inst_190_, lean_object* v_e_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_ForEachExprWhere_checked___redArg(v_inst_189_, v_inst_190_, v_e_191_, v_a_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___boxed(lean_object* v_00_u03c9_194_, lean_object* v_m_195_, lean_object* v_inst_196_, lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_e_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_ForEachExprWhere_checked(v_00_u03c9_194_, v_m_195_, v_inst_196_, v_inst_197_, v_inst_198_, v_e_199_, v_a_200_);
lean_dec(v_a_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__0(lean_object* v_toApplicative_202_, lean_object* v_00___203_, lean_object* v___y_204_){
_start:
{
lean_object* v_toPure_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v_toPure_205_ = lean_ctor_get(v_toApplicative_202_, 1);
lean_inc(v_toPure_205_);
lean_dec_ref(v_toApplicative_202_);
v___x_206_ = lean_box(0);
v___x_207_ = lean_apply_2(v_toPure_205_, lean_box(0), v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__0___boxed(lean_object* v_toApplicative_208_, lean_object* v_00___209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__0(v_toApplicative_208_, v_00___209_, v___y_210_);
lean_dec(v___y_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__7(uint8_t v_stopWhenVisited_212_, lean_object* v___f_213_, lean_object* v_a_214_, lean_object* v___f_215_, lean_object* v_a_216_){
_start:
{
if (v_stopWhenVisited_212_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; 
lean_dec(v___f_215_);
v___x_217_ = lean_box(0);
lean_inc(v_a_214_);
v___x_218_ = lean_apply_2(v___f_213_, v___x_217_, v_a_214_);
return v___x_218_;
}
else
{
lean_object* v___x_219_; lean_object* v___x_220_; 
lean_dec(v___f_213_);
v___x_219_ = lean_box(0);
lean_inc(v_a_214_);
v___x_220_ = lean_apply_2(v___f_215_, v___x_219_, v_a_214_);
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__7___boxed(lean_object* v_stopWhenVisited_221_, lean_object* v___f_222_, lean_object* v_a_223_, lean_object* v___f_224_, lean_object* v_a_225_){
_start:
{
uint8_t v_stopWhenVisited_boxed_226_; lean_object* v_res_227_; 
v_stopWhenVisited_boxed_226_ = lean_unbox(v_stopWhenVisited_221_);
v_res_227_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__7(v_stopWhenVisited_boxed_226_, v___f_222_, v_a_223_, v___f_224_, v_a_225_);
lean_dec(v_a_223_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__8(lean_object* v_f_228_, lean_object* v_e_229_, lean_object* v_toBind_230_, lean_object* v___f_231_, lean_object* v___f_232_, lean_object* v_a_233_, uint8_t v_a_234_){
_start:
{
if (v_a_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; 
lean_dec(v___f_232_);
v___x_235_ = lean_apply_1(v_f_228_, v_e_229_);
v___x_236_ = lean_apply_4(v_toBind_230_, lean_box(0), lean_box(0), v___x_235_, v___f_231_);
return v___x_236_;
}
else
{
lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec(v___f_231_);
lean_dec(v_toBind_230_);
lean_dec_ref(v_e_229_);
lean_dec(v_f_228_);
v___x_237_ = lean_box(0);
lean_inc(v_a_233_);
v___x_238_ = lean_apply_2(v___f_232_, v___x_237_, v_a_233_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__8___boxed(lean_object* v_f_239_, lean_object* v_e_240_, lean_object* v_toBind_241_, lean_object* v___f_242_, lean_object* v___f_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
uint8_t v_a_boxed_246_; lean_object* v_res_247_; 
v_a_boxed_246_ = lean_unbox(v_a_245_);
v_res_247_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__8(v_f_239_, v_e_240_, v_toBind_241_, v___f_242_, v___f_243_, v_a_244_, v_a_boxed_246_);
lean_dec(v_a_244_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__6(lean_object* v___f_248_, lean_object* v_00___249_, lean_object* v___y_250_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = lean_box(0);
lean_inc(v___y_250_);
v___x_252_ = lean_apply_2(v___f_248_, v___x_251_, v___y_250_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__6___boxed(lean_object* v___f_253_, lean_object* v_00___254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__6(v___f_253_, v_00___254_, v___y_255_);
lean_dec(v___y_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__9(lean_object* v_p_257_, lean_object* v_e_258_, lean_object* v___f_259_, lean_object* v_a_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v_toBind_263_, lean_object* v___f_264_, lean_object* v___f_265_, uint8_t v_a_266_){
_start:
{
if (v_a_266_ == 0)
{
lean_object* v___x_267_; uint8_t v___x_268_; 
lean_dec(v___f_265_);
lean_inc_ref(v_e_258_);
v___x_267_ = lean_apply_1(v_p_257_, v_e_258_);
v___x_268_ = lean_unbox(v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec(v___f_264_);
lean_dec(v_toBind_263_);
lean_dec_ref(v_inst_262_);
lean_dec(v_inst_261_);
lean_dec_ref(v_e_258_);
v___x_269_ = lean_box(0);
lean_inc(v_a_260_);
v___x_270_ = lean_apply_2(v___f_259_, v___x_269_, v_a_260_);
return v___x_270_;
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec(v___f_259_);
v___x_271_ = l_Lean_ForEachExprWhere_checked___redArg(v_inst_261_, v_inst_262_, v_e_258_, v_a_260_);
v___x_272_ = lean_apply_4(v_toBind_263_, lean_box(0), lean_box(0), v___x_271_, v___f_264_);
return v___x_272_;
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec(v___f_264_);
lean_dec(v_toBind_263_);
lean_dec_ref(v_inst_262_);
lean_dec(v_inst_261_);
lean_dec(v___f_259_);
lean_dec_ref(v_e_258_);
lean_dec_ref(v_p_257_);
v___x_273_ = lean_box(0);
lean_inc(v_a_260_);
v___x_274_ = lean_apply_2(v___f_265_, v___x_273_, v_a_260_);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__9___boxed(lean_object* v_p_275_, lean_object* v_e_276_, lean_object* v___f_277_, lean_object* v_a_278_, lean_object* v_inst_279_, lean_object* v_inst_280_, lean_object* v_toBind_281_, lean_object* v___f_282_, lean_object* v___f_283_, lean_object* v_a_284_){
_start:
{
uint8_t v_a_boxed_285_; lean_object* v_res_286_; 
v_a_boxed_285_ = lean_unbox(v_a_284_);
v_res_286_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__9(v_p_275_, v_e_276_, v___f_277_, v_a_278_, v_inst_279_, v_inst_280_, v_toBind_281_, v___f_282_, v___f_283_, v_a_boxed_285_);
lean_dec(v_a_278_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__1___boxed(lean_object* v_inst_287_, lean_object* v_inst_288_, lean_object* v_p_289_, lean_object* v_f_290_, lean_object* v_stopWhenVisited_291_, lean_object* v_b_292_, lean_object* v___y_293_, lean_object* v_a_294_){
_start:
{
uint8_t v_stopWhenVisited_boxed_295_; lean_object* v_res_296_; 
v_stopWhenVisited_boxed_295_ = lean_unbox(v_stopWhenVisited_291_);
v_res_296_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__1(v_inst_287_, v_inst_288_, v_p_289_, v_f_290_, v_stopWhenVisited_boxed_295_, v_b_292_, v___y_293_, v_a_294_);
lean_dec(v___y_293_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__2(lean_object* v_inst_297_, lean_object* v_inst_298_, lean_object* v_p_299_, lean_object* v_f_300_, uint8_t v_stopWhenVisited_301_, lean_object* v_body_302_, lean_object* v___y_303_, lean_object* v_a_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_297_, v_inst_298_, v_p_299_, v_f_300_, v_stopWhenVisited_301_, v_body_302_, v___y_303_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__2___boxed(lean_object* v_inst_306_, lean_object* v_inst_307_, lean_object* v_p_308_, lean_object* v_f_309_, lean_object* v_stopWhenVisited_310_, lean_object* v_body_311_, lean_object* v___y_312_, lean_object* v_a_313_){
_start:
{
uint8_t v_stopWhenVisited_boxed_314_; lean_object* v_res_315_; 
v_stopWhenVisited_boxed_314_ = lean_unbox(v_stopWhenVisited_310_);
v_res_315_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__2(v_inst_306_, v_inst_307_, v_p_308_, v_f_309_, v_stopWhenVisited_boxed_314_, v_body_311_, v___y_312_, v_a_313_);
lean_dec(v___y_312_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__3(lean_object* v_inst_316_, lean_object* v_inst_317_, lean_object* v_p_318_, lean_object* v_f_319_, uint8_t v_stopWhenVisited_320_, lean_object* v_value_321_, lean_object* v___y_322_, lean_object* v_toBind_323_, lean_object* v___f_324_, lean_object* v_a_325_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_316_, v_inst_317_, v_p_318_, v_f_319_, v_stopWhenVisited_320_, v_value_321_, v___y_322_);
v___x_327_ = lean_apply_4(v_toBind_323_, lean_box(0), lean_box(0), v___x_326_, v___f_324_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__3___boxed(lean_object* v_inst_328_, lean_object* v_inst_329_, lean_object* v_p_330_, lean_object* v_f_331_, lean_object* v_stopWhenVisited_332_, lean_object* v_value_333_, lean_object* v___y_334_, lean_object* v_toBind_335_, lean_object* v___f_336_, lean_object* v_a_337_){
_start:
{
uint8_t v_stopWhenVisited_boxed_338_; lean_object* v_res_339_; 
v_stopWhenVisited_boxed_338_ = lean_unbox(v_stopWhenVisited_332_);
v_res_339_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__3(v_inst_328_, v_inst_329_, v_p_330_, v_f_331_, v_stopWhenVisited_boxed_338_, v_value_333_, v___y_334_, v_toBind_335_, v___f_336_, v_a_337_);
lean_dec(v___y_334_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__4(lean_object* v_inst_340_, lean_object* v_inst_341_, lean_object* v_p_342_, lean_object* v_f_343_, uint8_t v_stopWhenVisited_344_, lean_object* v_arg_345_, lean_object* v___y_346_, lean_object* v_a_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_340_, v_inst_341_, v_p_342_, v_f_343_, v_stopWhenVisited_344_, v_arg_345_, v___y_346_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__4___boxed(lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_p_351_, lean_object* v_f_352_, lean_object* v_stopWhenVisited_353_, lean_object* v_arg_354_, lean_object* v___y_355_, lean_object* v_a_356_){
_start:
{
uint8_t v_stopWhenVisited_boxed_357_; lean_object* v_res_358_; 
v_stopWhenVisited_boxed_357_ = lean_unbox(v_stopWhenVisited_353_);
v_res_358_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__4(v_inst_349_, v_inst_350_, v_p_351_, v_f_352_, v_stopWhenVisited_boxed_357_, v_arg_354_, v___y_355_, v_a_356_);
lean_dec(v___y_355_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__5(lean_object* v_inst_359_, lean_object* v_inst_360_, lean_object* v_p_361_, lean_object* v_f_362_, uint8_t v_stopWhenVisited_363_, lean_object* v_toBind_364_, lean_object* v_e_365_, lean_object* v_toApplicative_366_, lean_object* v_____r_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_d_370_; lean_object* v_b_371_; 
switch(lean_obj_tag(v_e_365_))
{
case 7:
{
lean_object* v_binderType_376_; lean_object* v_body_377_; 
lean_dec_ref(v_toApplicative_366_);
v_binderType_376_ = lean_ctor_get(v_e_365_, 1);
lean_inc_ref(v_binderType_376_);
v_body_377_ = lean_ctor_get(v_e_365_, 2);
lean_inc_ref(v_body_377_);
lean_dec_ref_known(v_e_365_, 3);
v_d_370_ = v_binderType_376_;
v_b_371_ = v_body_377_;
goto v___jp_369_;
}
case 6:
{
lean_object* v_binderType_378_; lean_object* v_body_379_; 
lean_dec_ref(v_toApplicative_366_);
v_binderType_378_ = lean_ctor_get(v_e_365_, 1);
lean_inc_ref(v_binderType_378_);
v_body_379_ = lean_ctor_get(v_e_365_, 2);
lean_inc_ref(v_body_379_);
lean_dec_ref_known(v_e_365_, 3);
v_d_370_ = v_binderType_378_;
v_b_371_ = v_body_379_;
goto v___jp_369_;
}
case 8:
{
lean_object* v_type_380_; lean_object* v_value_381_; lean_object* v_body_382_; lean_object* v___x_383_; lean_object* v___f_384_; lean_object* v___x_385_; lean_object* v___f_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec_ref(v_toApplicative_366_);
v_type_380_ = lean_ctor_get(v_e_365_, 1);
lean_inc_ref(v_type_380_);
v_value_381_ = lean_ctor_get(v_e_365_, 2);
lean_inc_ref(v_value_381_);
v_body_382_ = lean_ctor_get(v_e_365_, 3);
lean_inc_ref(v_body_382_);
lean_dec_ref_known(v_e_365_, 4);
v___x_383_ = lean_box(v_stopWhenVisited_363_);
lean_inc_n(v___y_368_, 2);
lean_inc_n(v_f_362_, 2);
lean_inc_ref_n(v_p_361_, 2);
lean_inc_ref_n(v_inst_360_, 2);
lean_inc_n(v_inst_359_, 2);
v___f_384_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_384_, 0, v_inst_359_);
lean_closure_set(v___f_384_, 1, v_inst_360_);
lean_closure_set(v___f_384_, 2, v_p_361_);
lean_closure_set(v___f_384_, 3, v_f_362_);
lean_closure_set(v___f_384_, 4, v___x_383_);
lean_closure_set(v___f_384_, 5, v_body_382_);
lean_closure_set(v___f_384_, 6, v___y_368_);
v___x_385_ = lean_box(v_stopWhenVisited_363_);
lean_inc(v_toBind_364_);
v___f_386_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__3___boxed), 10, 9);
lean_closure_set(v___f_386_, 0, v_inst_359_);
lean_closure_set(v___f_386_, 1, v_inst_360_);
lean_closure_set(v___f_386_, 2, v_p_361_);
lean_closure_set(v___f_386_, 3, v_f_362_);
lean_closure_set(v___f_386_, 4, v___x_385_);
lean_closure_set(v___f_386_, 5, v_value_381_);
lean_closure_set(v___f_386_, 6, v___y_368_);
lean_closure_set(v___f_386_, 7, v_toBind_364_);
lean_closure_set(v___f_386_, 8, v___f_384_);
v___x_387_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_359_, v_inst_360_, v_p_361_, v_f_362_, v_stopWhenVisited_363_, v_type_380_, v___y_368_);
v___x_388_ = lean_apply_4(v_toBind_364_, lean_box(0), lean_box(0), v___x_387_, v___f_386_);
return v___x_388_;
}
case 5:
{
lean_object* v_fn_389_; lean_object* v_arg_390_; lean_object* v___x_391_; lean_object* v___f_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec_ref(v_toApplicative_366_);
v_fn_389_ = lean_ctor_get(v_e_365_, 0);
lean_inc_ref(v_fn_389_);
v_arg_390_ = lean_ctor_get(v_e_365_, 1);
lean_inc_ref(v_arg_390_);
lean_dec_ref_known(v_e_365_, 2);
v___x_391_ = lean_box(v_stopWhenVisited_363_);
lean_inc(v___y_368_);
lean_inc(v_f_362_);
lean_inc_ref(v_p_361_);
lean_inc_ref(v_inst_360_);
lean_inc(v_inst_359_);
v___f_392_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_392_, 0, v_inst_359_);
lean_closure_set(v___f_392_, 1, v_inst_360_);
lean_closure_set(v___f_392_, 2, v_p_361_);
lean_closure_set(v___f_392_, 3, v_f_362_);
lean_closure_set(v___f_392_, 4, v___x_391_);
lean_closure_set(v___f_392_, 5, v_arg_390_);
lean_closure_set(v___f_392_, 6, v___y_368_);
v___x_393_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_359_, v_inst_360_, v_p_361_, v_f_362_, v_stopWhenVisited_363_, v_fn_389_, v___y_368_);
v___x_394_ = lean_apply_4(v_toBind_364_, lean_box(0), lean_box(0), v___x_393_, v___f_392_);
return v___x_394_;
}
case 10:
{
lean_object* v_expr_395_; lean_object* v___x_396_; 
lean_dec_ref(v_toApplicative_366_);
lean_dec(v_toBind_364_);
v_expr_395_ = lean_ctor_get(v_e_365_, 1);
lean_inc_ref(v_expr_395_);
lean_dec_ref_known(v_e_365_, 2);
v___x_396_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_359_, v_inst_360_, v_p_361_, v_f_362_, v_stopWhenVisited_363_, v_expr_395_, v___y_368_);
return v___x_396_;
}
case 11:
{
lean_object* v_struct_397_; lean_object* v___x_398_; 
lean_dec_ref(v_toApplicative_366_);
lean_dec(v_toBind_364_);
v_struct_397_ = lean_ctor_get(v_e_365_, 2);
lean_inc_ref(v_struct_397_);
lean_dec_ref_known(v_e_365_, 3);
v___x_398_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_359_, v_inst_360_, v_p_361_, v_f_362_, v_stopWhenVisited_363_, v_struct_397_, v___y_368_);
return v___x_398_;
}
default: 
{
lean_object* v_toPure_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec_ref(v_e_365_);
lean_dec(v_toBind_364_);
lean_dec(v_f_362_);
lean_dec_ref(v_p_361_);
lean_dec_ref(v_inst_360_);
lean_dec(v_inst_359_);
v_toPure_399_ = lean_ctor_get(v_toApplicative_366_, 1);
lean_inc(v_toPure_399_);
lean_dec_ref(v_toApplicative_366_);
v___x_400_ = lean_box(0);
v___x_401_ = lean_apply_2(v_toPure_399_, lean_box(0), v___x_400_);
return v___x_401_;
}
}
v___jp_369_:
{
lean_object* v___x_372_; lean_object* v___f_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_372_ = lean_box(v_stopWhenVisited_363_);
lean_inc(v___y_368_);
lean_inc(v_f_362_);
lean_inc_ref(v_p_361_);
lean_inc_ref(v_inst_360_);
lean_inc(v_inst_359_);
v___f_373_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_373_, 0, v_inst_359_);
lean_closure_set(v___f_373_, 1, v_inst_360_);
lean_closure_set(v___f_373_, 2, v_p_361_);
lean_closure_set(v___f_373_, 3, v_f_362_);
lean_closure_set(v___f_373_, 4, v___x_372_);
lean_closure_set(v___f_373_, 5, v_b_371_);
lean_closure_set(v___f_373_, 6, v___y_368_);
v___x_374_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_359_, v_inst_360_, v_p_361_, v_f_362_, v_stopWhenVisited_363_, v_d_370_, v___y_368_);
v___x_375_ = lean_apply_4(v_toBind_364_, lean_box(0), lean_box(0), v___x_374_, v___f_373_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__5___boxed(lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v_p_404_, lean_object* v_f_405_, lean_object* v_stopWhenVisited_406_, lean_object* v_toBind_407_, lean_object* v_e_408_, lean_object* v_toApplicative_409_, lean_object* v_____r_410_, lean_object* v___y_411_){
_start:
{
uint8_t v_stopWhenVisited_boxed_412_; lean_object* v_res_413_; 
v_stopWhenVisited_boxed_412_ = lean_unbox(v_stopWhenVisited_406_);
v_res_413_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__5(v_inst_402_, v_inst_403_, v_p_404_, v_f_405_, v_stopWhenVisited_boxed_412_, v_toBind_407_, v_e_408_, v_toApplicative_409_, v_____r_410_, v___y_411_);
lean_dec(v___y_411_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(lean_object* v_inst_414_, lean_object* v_inst_415_, lean_object* v_p_416_, lean_object* v_f_417_, uint8_t v_stopWhenVisited_418_, lean_object* v_e_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_toApplicative_421_; lean_object* v_toBind_422_; lean_object* v___f_423_; lean_object* v___x_424_; lean_object* v___f_425_; lean_object* v___f_426_; lean_object* v___x_427_; lean_object* v___f_428_; lean_object* v___f_429_; lean_object* v___f_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_toApplicative_421_ = lean_ctor_get(v_inst_415_, 0);
v_toBind_422_ = lean_ctor_get(v_inst_415_, 1);
lean_inc_n(v_toBind_422_, 4);
lean_inc_ref_n(v_toApplicative_421_, 2);
v___f_423_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_423_, 0, v_toApplicative_421_);
v___x_424_ = lean_box(v_stopWhenVisited_418_);
lean_inc_ref_n(v_e_419_, 3);
lean_inc(v_f_417_);
lean_inc_ref(v_p_416_);
lean_inc_ref_n(v_inst_415_, 2);
lean_inc_n(v_inst_414_, 2);
v___f_425_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__5___boxed), 10, 8);
lean_closure_set(v___f_425_, 0, v_inst_414_);
lean_closure_set(v___f_425_, 1, v_inst_415_);
lean_closure_set(v___f_425_, 2, v_p_416_);
lean_closure_set(v___f_425_, 3, v_f_417_);
lean_closure_set(v___f_425_, 4, v___x_424_);
lean_closure_set(v___f_425_, 5, v_toBind_422_);
lean_closure_set(v___f_425_, 6, v_e_419_);
lean_closure_set(v___f_425_, 7, v_toApplicative_421_);
lean_inc_ref(v___f_425_);
v___f_426_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_426_, 0, v___f_425_);
v___x_427_ = lean_box(v_stopWhenVisited_418_);
lean_inc_ref(v___f_423_);
lean_inc_n(v_a_420_, 3);
lean_inc_ref(v___f_426_);
v___f_428_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__7___boxed), 5, 4);
lean_closure_set(v___f_428_, 0, v___x_427_);
lean_closure_set(v___f_428_, 1, v___f_426_);
lean_closure_set(v___f_428_, 2, v_a_420_);
lean_closure_set(v___f_428_, 3, v___f_423_);
v___f_429_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__8___boxed), 7, 6);
lean_closure_set(v___f_429_, 0, v_f_417_);
lean_closure_set(v___f_429_, 1, v_e_419_);
lean_closure_set(v___f_429_, 2, v_toBind_422_);
lean_closure_set(v___f_429_, 3, v___f_428_);
lean_closure_set(v___f_429_, 4, v___f_426_);
lean_closure_set(v___f_429_, 5, v_a_420_);
v___f_430_ = lean_alloc_closure((void*)(l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_430_, 0, v_p_416_);
lean_closure_set(v___f_430_, 1, v_e_419_);
lean_closure_set(v___f_430_, 2, v___f_425_);
lean_closure_set(v___f_430_, 3, v_a_420_);
lean_closure_set(v___f_430_, 4, v_inst_414_);
lean_closure_set(v___f_430_, 5, v_inst_415_);
lean_closure_set(v___f_430_, 6, v_toBind_422_);
lean_closure_set(v___f_430_, 7, v___f_429_);
lean_closure_set(v___f_430_, 8, v___f_423_);
v___x_431_ = l_Lean_ForEachExprWhere_visited___redArg(v_inst_414_, v_inst_415_, v_e_419_, v_a_420_);
v___x_432_ = lean_apply_4(v_toBind_422_, lean_box(0), lean_box(0), v___x_431_, v___f_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___lam__1(lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v_p_435_, lean_object* v_f_436_, uint8_t v_stopWhenVisited_437_, lean_object* v_b_438_, lean_object* v___y_439_, lean_object* v_a_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_433_, v_inst_434_, v_p_435_, v_f_436_, v_stopWhenVisited_437_, v_b_438_, v___y_439_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg___boxed(lean_object* v_inst_442_, lean_object* v_inst_443_, lean_object* v_p_444_, lean_object* v_f_445_, lean_object* v_stopWhenVisited_446_, lean_object* v_e_447_, lean_object* v_a_448_){
_start:
{
uint8_t v_stopWhenVisited_boxed_449_; lean_object* v_res_450_; 
v_stopWhenVisited_boxed_449_ = lean_unbox(v_stopWhenVisited_446_);
v_res_450_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_442_, v_inst_443_, v_p_444_, v_f_445_, v_stopWhenVisited_boxed_449_, v_e_447_, v_a_448_);
lean_dec(v_a_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go(lean_object* v_00_u03c9_451_, lean_object* v_m_452_, lean_object* v_inst_453_, lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_p_456_, lean_object* v_f_457_, uint8_t v_stopWhenVisited_458_, lean_object* v_e_459_, lean_object* v_a_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_454_, v_inst_455_, v_p_456_, v_f_457_, v_stopWhenVisited_458_, v_e_459_, v_a_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___boxed(lean_object* v_00_u03c9_462_, lean_object* v_m_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_p_467_, lean_object* v_f_468_, lean_object* v_stopWhenVisited_469_, lean_object* v_e_470_, lean_object* v_a_471_){
_start:
{
uint8_t v_stopWhenVisited_boxed_472_; lean_object* v_res_473_; 
v_stopWhenVisited_boxed_472_ = lean_unbox(v_stopWhenVisited_469_);
v_res_473_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go(v_00_u03c9_462_, v_m_463_, v_inst_464_, v_inst_465_, v_inst_466_, v_p_467_, v_f_468_, v_stopWhenVisited_boxed_472_, v_e_470_, v_a_471_);
lean_dec(v_a_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__0(lean_object* v_a_474_, lean_object* v_toPure_475_, lean_object* v_s_476_){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v_a_474_);
lean_ctor_set(v___x_477_, 1, v_s_476_);
v___x_478_ = lean_apply_2(v_toPure_475_, lean_box(0), v___x_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__1(lean_object* v_toPure_479_, lean_object* v_ref_480_, lean_object* v_inst_481_, lean_object* v_toBind_482_, lean_object* v_a_483_){
_start:
{
lean_object* v___f_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___f_484_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visit___redArg___lam__0), 3, 2);
lean_closure_set(v___f_484_, 0, v_a_483_);
lean_closure_set(v___f_484_, 1, v_toPure_479_);
v___x_485_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_485_, 0, lean_box(0));
lean_closure_set(v___x_485_, 1, lean_box(0));
lean_closure_set(v___x_485_, 2, v_ref_480_);
v___x_486_ = lean_apply_2(v_inst_481_, lean_box(0), v___x_485_);
v___x_487_ = lean_apply_4(v_toBind_482_, lean_box(0), lean_box(0), v___x_486_, v___f_484_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__2(lean_object* v_toPure_488_, lean_object* v_inst_489_, lean_object* v_toBind_490_, lean_object* v_inst_491_, lean_object* v_p_492_, lean_object* v_f_493_, uint8_t v_stopWhenVisited_494_, lean_object* v_e_495_, lean_object* v_ref_496_){
_start:
{
lean_object* v___f_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
lean_inc(v_toBind_490_);
lean_inc(v_inst_489_);
lean_inc(v_ref_496_);
v___f_497_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visit___redArg___lam__1), 5, 4);
lean_closure_set(v___f_497_, 0, v_toPure_488_);
lean_closure_set(v___f_497_, 1, v_ref_496_);
lean_closure_set(v___f_497_, 2, v_inst_489_);
lean_closure_set(v___f_497_, 3, v_toBind_490_);
v___x_498_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___redArg(v_inst_489_, v_inst_491_, v_p_492_, v_f_493_, v_stopWhenVisited_494_, v_e_495_, v_ref_496_);
lean_dec(v_ref_496_);
v___x_499_ = lean_apply_4(v_toBind_490_, lean_box(0), lean_box(0), v___x_498_, v___f_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__2___boxed(lean_object* v_toPure_500_, lean_object* v_inst_501_, lean_object* v_toBind_502_, lean_object* v_inst_503_, lean_object* v_p_504_, lean_object* v_f_505_, lean_object* v_stopWhenVisited_506_, lean_object* v_e_507_, lean_object* v_ref_508_){
_start:
{
uint8_t v_stopWhenVisited_boxed_509_; lean_object* v_res_510_; 
v_stopWhenVisited_boxed_509_ = lean_unbox(v_stopWhenVisited_506_);
v_res_510_ = l_Lean_ForEachExprWhere_visit___redArg___lam__2(v_toPure_500_, v_inst_501_, v_toBind_502_, v_inst_503_, v_p_504_, v_f_505_, v_stopWhenVisited_boxed_509_, v_e_507_, v_ref_508_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___lam__3(lean_object* v_toPure_511_, lean_object* v_____x_512_){
_start:
{
lean_object* v_fst_513_; lean_object* v___x_514_; 
v_fst_513_ = lean_ctor_get(v_____x_512_, 0);
lean_inc(v_fst_513_);
lean_dec_ref(v_____x_512_);
v___x_514_ = lean_apply_2(v_toPure_511_, lean_box(0), v_fst_513_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_ForEachExprWhere_visit___redArg___closed__0(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = l_Lean_ForEachExprWhere_initCache;
v___x_516_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_516_, 0, lean_box(0));
lean_closure_set(v___x_516_, 1, lean_box(0));
lean_closure_set(v___x_516_, 2, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg(lean_object* v_inst_517_, lean_object* v_inst_518_, lean_object* v_p_519_, lean_object* v_f_520_, lean_object* v_e_521_, uint8_t v_stopWhenVisited_522_){
_start:
{
lean_object* v_toApplicative_523_; lean_object* v_toBind_524_; lean_object* v_toPure_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___f_529_; lean_object* v___f_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_toApplicative_523_ = lean_ctor_get(v_inst_518_, 0);
v_toBind_524_ = lean_ctor_get(v_inst_518_, 1);
lean_inc_n(v_toBind_524_, 3);
v_toPure_525_ = lean_ctor_get(v_toApplicative_523_, 1);
lean_inc_n(v_toPure_525_, 2);
v___x_526_ = lean_obj_once(&l_Lean_ForEachExprWhere_visit___redArg___closed__0, &l_Lean_ForEachExprWhere_visit___redArg___closed__0_once, _init_l_Lean_ForEachExprWhere_visit___redArg___closed__0);
lean_inc(v_inst_517_);
v___x_527_ = lean_apply_2(v_inst_517_, lean_box(0), v___x_526_);
v___x_528_ = lean_box(v_stopWhenVisited_522_);
v___f_529_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visit___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_529_, 0, v_toPure_525_);
lean_closure_set(v___f_529_, 1, v_inst_517_);
lean_closure_set(v___f_529_, 2, v_toBind_524_);
lean_closure_set(v___f_529_, 3, v_inst_518_);
lean_closure_set(v___f_529_, 4, v_p_519_);
lean_closure_set(v___f_529_, 5, v_f_520_);
lean_closure_set(v___f_529_, 6, v___x_528_);
lean_closure_set(v___f_529_, 7, v_e_521_);
v___f_530_ = lean_alloc_closure((void*)(l_Lean_ForEachExprWhere_visit___redArg___lam__3), 2, 1);
lean_closure_set(v___f_530_, 0, v_toPure_525_);
v___x_531_ = lean_apply_4(v_toBind_524_, lean_box(0), lean_box(0), v___x_527_, v___f_529_);
v___x_532_ = lean_apply_4(v_toBind_524_, lean_box(0), lean_box(0), v___x_531_, v___f_530_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___redArg___boxed(lean_object* v_inst_533_, lean_object* v_inst_534_, lean_object* v_p_535_, lean_object* v_f_536_, lean_object* v_e_537_, lean_object* v_stopWhenVisited_538_){
_start:
{
uint8_t v_stopWhenVisited_boxed_539_; lean_object* v_res_540_; 
v_stopWhenVisited_boxed_539_ = lean_unbox(v_stopWhenVisited_538_);
v_res_540_ = l_Lean_ForEachExprWhere_visit___redArg(v_inst_533_, v_inst_534_, v_p_535_, v_f_536_, v_e_537_, v_stopWhenVisited_boxed_539_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit(lean_object* v_00_u03c9_541_, lean_object* v_m_542_, lean_object* v_inst_543_, lean_object* v_inst_544_, lean_object* v_inst_545_, lean_object* v_p_546_, lean_object* v_f_547_, lean_object* v_e_548_, uint8_t v_stopWhenVisited_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lean_ForEachExprWhere_visit___redArg(v_inst_544_, v_inst_545_, v_p_546_, v_f_547_, v_e_548_, v_stopWhenVisited_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___boxed(lean_object* v_00_u03c9_551_, lean_object* v_m_552_, lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_inst_555_, lean_object* v_p_556_, lean_object* v_f_557_, lean_object* v_e_558_, lean_object* v_stopWhenVisited_559_){
_start:
{
uint8_t v_stopWhenVisited_boxed_560_; lean_object* v_res_561_; 
v_stopWhenVisited_boxed_560_ = lean_unbox(v_stopWhenVisited_559_);
v_res_561_ = l_Lean_ForEachExprWhere_visit(v_00_u03c9_551_, v_m_552_, v_inst_553_, v_inst_554_, v_inst_555_, v_p_556_, v_f_557_, v_e_558_, v_stopWhenVisited_boxed_560_);
return v_res_561_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_MonadCache(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_MonadCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ForEachExprWhere_cacheSize = _init_l_Lean_ForEachExprWhere_cacheSize();
l_Lean_ForEachExprWhere_initCache = _init_l_Lean_ForEachExprWhere_initCache();
lean_mark_persistent(l_Lean_ForEachExprWhere_initCache);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Lean_Util_MonadCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_ForEachExprWhere(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_MonadCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_ForEachExprWhere(builtin);
}
#ifdef __cplusplus
}
#endif
