// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Discharger
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.AppBuilder
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
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_solved_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_solved_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Discharger_0__Lean_Meta_Sym_Simp_resultToDischargeResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_dischargeSimpSelf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_dischargeSimpSelf___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeAssumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeAssumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
uint8_t v_contextDependent_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_contextDependent_7_ = lean_ctor_get_uint8(v_t_5_, 0);
lean_dec_ref_known(v_t_5_, 0);
v___x_8_ = lean_box(v_contextDependent_7_);
v___x_9_ = lean_apply_1(v_k_6_, v___x_8_);
return v___x_9_;
}
else
{
lean_object* v_proof_10_; uint8_t v_contextDependent_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v_proof_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_proof_10_);
v_contextDependent_11_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*1);
lean_dec_ref_known(v_t_5_, 1);
v___x_12_ = lean_box(v_contextDependent_11_);
v___x_13_ = lean_apply_2(v_k_6_, v_proof_10_, v___x_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim(lean_object* v_motive_14_, lean_object* v_ctorIdx_15_, lean_object* v_t_16_, lean_object* v_h_17_, lean_object* v_k_18_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(v_t_16_, v_k_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___boxed(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim(v_motive_20_, v_ctorIdx_21_, v_t_22_, v_h_23_, v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_failed_elim___redArg(lean_object* v_t_26_, lean_object* v_failed_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(v_t_26_, v_failed_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_failed_elim(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_failed_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(v_t_30_, v_failed_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_solved_elim___redArg(lean_object* v_t_34_, lean_object* v_solved_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(v_t_34_, v_solved_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_DischargeResult_solved_elim(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_solved_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Meta_Sym_Simp_DischargeResult_ctorElim___redArg(v_t_38_, v_solved_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Discharger_0__Lean_Meta_Sym_Simp_resultToDischargeResult(lean_object* v_e_42_, lean_object* v_result_43_){
_start:
{
if (lean_obj_tag(v_result_43_) == 0)
{
uint8_t v_contextDependent_44_; lean_object* v___x_45_; 
lean_dec_ref(v_e_42_);
v_contextDependent_44_ = lean_ctor_get_uint8(v_result_43_, 1);
lean_dec_ref_known(v_result_43_, 0);
v___x_45_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_45_, 0, v_contextDependent_44_);
return v___x_45_;
}
else
{
lean_object* v_e_x27_46_; lean_object* v_proof_47_; uint8_t v_contextDependent_48_; uint8_t v___x_49_; 
v_e_x27_46_ = lean_ctor_get(v_result_43_, 0);
lean_inc_ref(v_e_x27_46_);
v_proof_47_ = lean_ctor_get(v_result_43_, 1);
lean_inc_ref(v_proof_47_);
v_contextDependent_48_ = lean_ctor_get_uint8(v_result_43_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_result_43_, 2);
v___x_49_ = l_Lean_Expr_isTrue(v_e_x27_46_);
lean_dec_ref(v_e_x27_46_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; 
lean_dec_ref(v_proof_47_);
lean_dec_ref(v_e_42_);
v___x_50_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_50_, 0, v_contextDependent_48_);
return v___x_50_;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = l_Lean_Meta_mkOfEqTrueCore(v_e_42_, v_proof_47_);
v___x_52_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set_uint8(v___x_52_, sizeof(void*)*1, v_contextDependent_48_);
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc(lean_object* v_p_53_, lean_object* v_e_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_65_; 
lean_inc(v_a_63_);
lean_inc_ref(v_a_62_);
lean_inc(v_a_61_);
lean_inc_ref(v_a_60_);
lean_inc(v_a_59_);
lean_inc_ref(v_a_58_);
lean_inc(v_a_57_);
lean_inc_ref(v_a_56_);
lean_inc(v_a_55_);
lean_inc_ref(v_e_54_);
v___x_65_ = lean_apply_11(v_p_53_, v_e_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, lean_box(0));
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_70_; lean_object* v___x_72_; 
v___x_70_ = l___private_Lean_Meta_Sym_Simp_Discharger_0__Lean_Meta_Sym_Simp_resultToDischargeResult(v_e_54_, v_a_66_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v___x_70_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v___x_70_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
else
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
lean_dec_ref(v_e_54_);
v_a_75_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_65_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_65_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc___boxed(lean_object* v_p_83_, lean_object* v_e_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc(v_p_83_, v_e_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
lean_dec(v_a_93_);
lean_dec_ref(v_a_92_);
lean_dec(v_a_91_);
lean_dec_ref(v_a_90_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
lean_dec(v_a_87_);
lean_dec_ref(v_a_86_);
lean_dec(v_a_85_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0(lean_object* v_a_96_, lean_object* v_persistentCache_97_, lean_object* v_transientCache_98_, lean_object* v_funext_99_, lean_object* v_a_x3f_100_){
_start:
{
lean_object* v___x_102_; lean_object* v_numSteps_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_113_; 
v___x_102_ = lean_st_ref_take(v_a_96_);
v_numSteps_103_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_113_ == 0)
{
lean_object* v_unused_114_; lean_object* v_unused_115_; lean_object* v_unused_116_; 
v_unused_114_ = lean_ctor_get(v___x_102_, 3);
lean_dec(v_unused_114_);
v_unused_115_ = lean_ctor_get(v___x_102_, 2);
lean_dec(v_unused_115_);
v_unused_116_ = lean_ctor_get(v___x_102_, 1);
lean_dec(v_unused_116_);
v___x_105_ = v___x_102_;
v_isShared_106_ = v_isSharedCheck_113_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_numSteps_103_);
lean_dec(v___x_102_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_113_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = lean_box(0);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 3, v_funext_99_);
lean_ctor_set(v___x_105_, 2, v_transientCache_98_);
lean_ctor_set(v___x_105_, 1, v_persistentCache_97_);
v___x_109_ = v___x_105_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_numSteps_103_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v_persistentCache_97_);
lean_ctor_set(v_reuseFailAlloc_112_, 2, v_transientCache_98_);
lean_ctor_set(v_reuseFailAlloc_112_, 3, v_funext_99_);
v___x_109_ = v_reuseFailAlloc_112_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_st_ref_put(v_a_96_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_107_);
return v___x_111_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0___boxed(lean_object* v_a_117_, lean_object* v_persistentCache_118_, lean_object* v_transientCache_119_, lean_object* v_funext_120_, lean_object* v_a_x3f_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0(v_a_117_, v_persistentCache_118_, v_transientCache_119_, v_funext_120_, v_a_x3f_121_);
lean_dec(v_a_x3f_121_);
lean_dec(v_a_117_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf(lean_object* v_e_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_128_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_190_; 
v_a_138_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_190_ == 0)
{
v___x_140_ = v___x_137_;
v_isShared_141_ = v_isSharedCheck_190_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_190_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v_maxDischargeDepth_142_; lean_object* v_config_143_; lean_object* v_initialLCtxSize_144_; lean_object* v_dischargeDepth_145_; uint8_t v___x_146_; 
v_maxDischargeDepth_142_ = lean_ctor_get(v_a_138_, 1);
lean_inc(v_maxDischargeDepth_142_);
lean_dec(v_a_138_);
v_config_143_ = lean_ctor_get(v_a_128_, 0);
v_initialLCtxSize_144_ = lean_ctor_get(v_a_128_, 1);
v_dischargeDepth_145_ = lean_ctor_get(v_a_128_, 2);
v___x_146_ = lean_nat_dec_lt(v_maxDischargeDepth_142_, v_dischargeDepth_145_);
lean_dec(v_maxDischargeDepth_142_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v_persistentCache_148_; lean_object* v___x_149_; lean_object* v_transientCache_150_; lean_object* v___x_151_; lean_object* v_funext_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
lean_del_object(v___x_140_);
v___x_147_ = lean_st_ref_get(v_a_129_);
v_persistentCache_148_ = lean_ctor_get(v___x_147_, 1);
lean_inc_ref(v_persistentCache_148_);
lean_dec(v___x_147_);
v___x_149_ = lean_st_ref_get(v_a_129_);
v_transientCache_150_ = lean_ctor_get(v___x_149_, 2);
lean_inc_ref(v_transientCache_150_);
lean_dec(v___x_149_);
v___x_151_ = lean_st_ref_get(v_a_129_);
v_funext_152_ = lean_ctor_get(v___x_151_, 3);
lean_inc_ref(v_funext_152_);
lean_dec(v___x_151_);
v___x_153_ = lean_unsigned_to_nat(1u);
v___x_154_ = lean_nat_add(v_dischargeDepth_145_, v___x_153_);
lean_inc(v_initialLCtxSize_144_);
lean_inc_ref(v_config_143_);
v___x_155_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_155_, 0, v_config_143_);
lean_ctor_set(v___x_155_, 1, v_initialLCtxSize_144_);
lean_ctor_set(v___x_155_, 2, v___x_154_);
lean_inc(v_a_135_);
lean_inc_ref(v_a_134_);
lean_inc(v_a_133_);
lean_inc_ref(v_a_132_);
lean_inc(v_a_131_);
lean_inc_ref(v_a_130_);
lean_inc(v_a_129_);
lean_inc(v_a_127_);
lean_inc_ref(v_e_126_);
v___x_156_ = lean_sym_simp(v_e_126_, v_a_127_, v___x_155_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_);
if (lean_obj_tag(v___x_156_) == 0)
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_174_; 
v_a_157_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_174_ == 0)
{
v___x_159_ = v___x_156_;
v_isShared_160_ = v_isSharedCheck_174_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_174_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_161_ = l___private_Lean_Meta_Sym_Simp_Discharger_0__Lean_Meta_Sym_Simp_resultToDischargeResult(v_e_126_, v_a_157_);
lean_inc_ref(v___x_161_);
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 1);
lean_ctor_set(v___x_159_, 0, v___x_161_);
v___x_163_ = v___x_159_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_161_);
v___x_163_ = v_reuseFailAlloc_173_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
v___x_164_ = l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0(v_a_129_, v_persistentCache_148_, v_transientCache_150_, v_funext_152_, v___x_163_);
lean_dec_ref(v___x_163_);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v___x_164_, 0);
lean_dec(v_unused_172_);
v___x_166_ = v___x_164_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_dec(v___x_164_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___x_161_);
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_161_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
else
{
lean_object* v_a_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
lean_dec_ref(v_e_126_);
v_a_175_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_a_175_);
lean_dec_ref_known(v___x_156_, 1);
v___x_176_ = lean_box(0);
v___x_177_ = l_Lean_Meta_Sym_Simp_dischargeSimpSelf___lam__0(v_a_129_, v_persistentCache_148_, v_transientCache_150_, v_funext_152_, v___x_176_);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_184_ == 0)
{
lean_object* v_unused_185_; 
v_unused_185_ = lean_ctor_get(v___x_177_, 0);
lean_dec(v_unused_185_);
v___x_179_ = v___x_177_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_dec(v___x_177_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 1);
lean_ctor_set(v___x_179_, 0, v_a_175_);
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_175_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
else
{
lean_object* v___x_186_; lean_object* v___x_188_; 
lean_dec_ref(v_e_126_);
v___x_186_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_dischargeSimpSelf___closed__0));
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v___x_186_);
v___x_188_ = v___x_140_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec_ref(v_e_126_);
v_a_191_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_137_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_137_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___boxed(lean_object* v_e_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Meta_Sym_Simp_dischargeSimpSelf(v_e_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
lean_dec(v_a_204_);
lean_dec_ref(v_a_203_);
lean_dec(v_a_202_);
lean_dec_ref(v_a_201_);
lean_dec(v_a_200_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___redArg(){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_dischargeSimpSelf___closed__0));
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___redArg___boxed(lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Meta_Sym_Simp_dischargeNone___redArg();
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone(lean_object* v_x_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Meta_Sym_Simp_dischargeNone___redArg();
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object* v_x_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Meta_Sym_Simp_dischargeNone(v_x_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec_ref(v_a_232_);
lean_dec(v_a_231_);
lean_dec_ref(v_a_230_);
lean_dec(v_a_229_);
lean_dec_ref(v_x_228_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg(lean_object* v_e_243_, lean_object* v_as_244_, size_t v_sz_245_, size_t v_i_246_, lean_object* v_b_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
uint8_t v___x_253_; 
v___x_253_ = lean_usize_dec_lt(v_i_246_, v_sz_245_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_dec_ref(v_e_243_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v_b_247_);
return v___x_254_;
}
else
{
lean_object* v_snd_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_305_; 
v_snd_255_ = lean_ctor_get(v_b_247_, 1);
v_isSharedCheck_305_ = !lean_is_exclusive(v_b_247_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v_b_247_, 0);
lean_dec(v_unused_306_);
v___x_257_ = v_b_247_;
v_isShared_258_ = v_isSharedCheck_305_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_snd_255_);
lean_dec(v_b_247_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_305_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v_a_261_; lean_object* v_a_268_; 
v___x_259_ = lean_box(0);
v_a_268_ = lean_array_uget(v_as_244_, v_i_246_);
if (lean_obj_tag(v_a_268_) == 0)
{
v_a_261_ = v_snd_255_;
goto v___jp_260_;
}
else
{
lean_object* v_val_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_304_; 
v_val_269_ = lean_ctor_get(v_a_268_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_a_268_);
if (v_isSharedCheck_304_ == 0)
{
v___x_271_ = v_a_268_;
v_isShared_272_ = v_isSharedCheck_304_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_val_269_);
lean_dec(v_a_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_304_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_273_ = lean_box(0);
v___x_274_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_275_ = l_Lean_LocalDecl_isAuxDecl(v_val_269_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = l_Lean_LocalDecl_type(v_val_269_);
lean_inc_ref(v_e_243_);
v___x_277_ = l_Lean_Meta_isExprDefEq(v___x_276_, v_e_243_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_295_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_295_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_295_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_295_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
uint8_t v___x_282_; 
v___x_282_ = lean_unbox(v_a_278_);
if (v___x_282_ == 0)
{
lean_del_object(v___x_280_);
lean_dec(v_a_278_);
lean_del_object(v___x_271_);
lean_dec(v_val_269_);
lean_dec(v_snd_255_);
v_a_261_ = v___x_274_;
goto v___jp_260_;
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_287_; 
lean_del_object(v___x_257_);
lean_dec_ref(v_e_243_);
v___x_283_ = l_Lean_LocalDecl_toExpr(v_val_269_);
v___x_284_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_284_, 0, v___x_283_);
v___x_285_ = lean_unbox(v_a_278_);
lean_dec(v_a_278_);
lean_ctor_set_uint8(v___x_284_, sizeof(void*)*1, v___x_285_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_284_);
v___x_287_ = v___x_271_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_284_);
v___x_287_ = v_reuseFailAlloc_294_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___x_273_);
v___x_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v_snd_255_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_290_);
v___x_292_ = v___x_280_;
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
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_del_object(v___x_271_);
lean_dec(v_val_269_);
lean_del_object(v___x_257_);
lean_dec(v_snd_255_);
lean_dec_ref(v_e_243_);
v_a_296_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_277_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_277_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
else
{
lean_del_object(v___x_271_);
lean_dec(v_val_269_);
lean_dec(v_snd_255_);
v_a_261_ = v___x_274_;
goto v___jp_260_;
}
}
}
v___jp_260_:
{
lean_object* v___x_263_; 
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v_a_261_);
lean_ctor_set(v___x_257_, 0, v___x_259_);
v___x_263_ = v___x_257_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_259_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_a_261_);
v___x_263_ = v_reuseFailAlloc_267_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
size_t v___x_264_; size_t v___x_265_; 
v___x_264_ = ((size_t)1ULL);
v___x_265_ = lean_usize_add(v_i_246_, v___x_264_);
v_i_246_ = v___x_265_;
v_b_247_ = v___x_263_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_e_307_, lean_object* v_as_308_, lean_object* v_sz_309_, lean_object* v_i_310_, lean_object* v_b_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
size_t v_sz_boxed_317_; size_t v_i_boxed_318_; lean_object* v_res_319_; 
v_sz_boxed_317_ = lean_unbox_usize(v_sz_309_);
lean_dec(v_sz_309_);
v_i_boxed_318_ = lean_unbox_usize(v_i_310_);
lean_dec(v_i_310_);
v_res_319_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg(v_e_307_, v_as_308_, v_sz_boxed_317_, v_i_boxed_318_, v_b_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec_ref(v_as_308_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1(lean_object* v_e_320_, lean_object* v_as_321_, size_t v_sz_322_, size_t v_i_323_, lean_object* v_b_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
uint8_t v___x_335_; 
v___x_335_ = lean_usize_dec_lt(v_i_323_, v_sz_322_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; 
lean_dec_ref(v_e_320_);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v_b_324_);
return v___x_336_;
}
else
{
lean_object* v_snd_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_387_; 
v_snd_337_ = lean_ctor_get(v_b_324_, 1);
v_isSharedCheck_387_ = !lean_is_exclusive(v_b_324_);
if (v_isSharedCheck_387_ == 0)
{
lean_object* v_unused_388_; 
v_unused_388_ = lean_ctor_get(v_b_324_, 0);
lean_dec(v_unused_388_);
v___x_339_ = v_b_324_;
v_isShared_340_ = v_isSharedCheck_387_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_snd_337_);
lean_dec(v_b_324_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_387_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_341_; lean_object* v_a_343_; lean_object* v_a_350_; 
v___x_341_ = lean_box(0);
v_a_350_ = lean_array_uget(v_as_321_, v_i_323_);
if (lean_obj_tag(v_a_350_) == 0)
{
v_a_343_ = v_snd_337_;
goto v___jp_342_;
}
else
{
lean_object* v_val_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_386_; 
v_val_351_ = lean_ctor_get(v_a_350_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v_a_350_);
if (v_isSharedCheck_386_ == 0)
{
v___x_353_ = v_a_350_;
v_isShared_354_ = v_isSharedCheck_386_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_val_351_);
lean_dec(v_a_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_386_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_355_ = lean_box(0);
v___x_356_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_357_ = l_Lean_LocalDecl_isAuxDecl(v_val_351_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = l_Lean_LocalDecl_type(v_val_351_);
lean_inc_ref(v_e_320_);
v___x_359_ = l_Lean_Meta_isExprDefEq(v___x_358_, v_e_320_, v___y_330_, v___y_331_, v___y_332_, v___y_333_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_377_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_377_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_377_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_377_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
uint8_t v___x_364_; 
v___x_364_ = lean_unbox(v_a_360_);
if (v___x_364_ == 0)
{
lean_del_object(v___x_362_);
lean_dec(v_a_360_);
lean_del_object(v___x_353_);
lean_dec(v_val_351_);
lean_dec(v_snd_337_);
v_a_343_ = v___x_356_;
goto v___jp_342_;
}
else
{
lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_369_; 
lean_del_object(v___x_339_);
lean_dec_ref(v_e_320_);
v___x_365_ = l_Lean_LocalDecl_toExpr(v_val_351_);
v___x_366_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_366_, 0, v___x_365_);
v___x_367_ = lean_unbox(v_a_360_);
lean_dec(v_a_360_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*1, v___x_367_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_366_);
v___x_369_ = v___x_353_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_366_);
v___x_369_ = v_reuseFailAlloc_376_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
lean_ctor_set(v___x_370_, 1, v___x_355_);
v___x_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v_snd_337_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_372_);
v___x_374_ = v___x_362_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_del_object(v___x_353_);
lean_dec(v_val_351_);
lean_del_object(v___x_339_);
lean_dec(v_snd_337_);
lean_dec_ref(v_e_320_);
v_a_378_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_359_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_359_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
else
{
lean_del_object(v___x_353_);
lean_dec(v_val_351_);
lean_dec(v_snd_337_);
v_a_343_ = v___x_356_;
goto v___jp_342_;
}
}
}
v___jp_342_:
{
lean_object* v___x_345_; 
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 1, v_a_343_);
lean_ctor_set(v___x_339_, 0, v___x_341_);
v___x_345_ = v___x_339_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_a_343_);
v___x_345_ = v_reuseFailAlloc_349_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
size_t v___x_346_; size_t v___x_347_; lean_object* v___x_348_; 
v___x_346_ = ((size_t)1ULL);
v___x_347_ = lean_usize_add(v_i_323_, v___x_346_);
v___x_348_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg(v_e_320_, v_as_321_, v_sz_322_, v___x_347_, v___x_345_, v___y_330_, v___y_331_, v___y_332_, v___y_333_);
return v___x_348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1___boxed(lean_object* v_e_389_, lean_object* v_as_390_, lean_object* v_sz_391_, lean_object* v_i_392_, lean_object* v_b_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
size_t v_sz_boxed_404_; size_t v_i_boxed_405_; lean_object* v_res_406_; 
v_sz_boxed_404_ = lean_unbox_usize(v_sz_391_);
lean_dec(v_sz_391_);
v_i_boxed_405_ = lean_unbox_usize(v_i_392_);
lean_dec(v_i_392_);
v_res_406_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1(v_e_389_, v_as_390_, v_sz_boxed_404_, v_i_boxed_405_, v_b_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v_as_390_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_e_410_, lean_object* v_as_411_, size_t v_sz_412_, size_t v_i_413_, lean_object* v_b_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
uint8_t v___x_420_; 
v___x_420_ = lean_usize_dec_lt(v_i_413_, v_sz_412_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
lean_dec_ref(v_e_410_);
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v_b_414_);
return v___x_421_;
}
else
{
lean_object* v_snd_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_473_; 
v_snd_422_ = lean_ctor_get(v_b_414_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_b_414_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; 
v_unused_474_ = lean_ctor_get(v_b_414_, 0);
lean_dec(v_unused_474_);
v___x_424_ = v_b_414_;
v_isShared_425_ = v_isSharedCheck_473_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_snd_422_);
lean_dec(v_b_414_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_473_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v_a_428_; lean_object* v_a_435_; 
v___x_426_ = lean_box(0);
v_a_435_ = lean_array_uget(v_as_411_, v_i_413_);
if (lean_obj_tag(v_a_435_) == 0)
{
v_a_428_ = v_snd_422_;
goto v___jp_427_;
}
else
{
lean_object* v_val_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_472_; 
v_val_436_ = lean_ctor_get(v_a_435_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_a_435_);
if (v_isSharedCheck_472_ == 0)
{
v___x_438_ = v_a_435_;
v_isShared_439_ = v_isSharedCheck_472_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_val_436_);
lean_dec(v_a_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_472_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_440_ = lean_box(0);
v___x_441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___closed__0));
v___x_442_ = l_Lean_LocalDecl_isAuxDecl(v_val_436_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = l_Lean_LocalDecl_type(v_val_436_);
lean_inc_ref(v_e_410_);
v___x_444_ = l_Lean_Meta_isExprDefEq(v___x_443_, v_e_410_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_463_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_463_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_463_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_463_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
uint8_t v___x_449_; 
v___x_449_ = lean_unbox(v_a_445_);
if (v___x_449_ == 0)
{
lean_del_object(v___x_447_);
lean_dec(v_a_445_);
lean_del_object(v___x_438_);
lean_dec(v_val_436_);
lean_dec(v_snd_422_);
v_a_428_ = v___x_441_;
goto v___jp_427_;
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; lean_object* v___x_454_; 
lean_del_object(v___x_424_);
lean_dec_ref(v_e_410_);
v___x_450_ = l_Lean_LocalDecl_toExpr(v_val_436_);
v___x_451_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_451_, 0, v___x_450_);
v___x_452_ = lean_unbox(v_a_445_);
lean_dec(v_a_445_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*1, v___x_452_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_451_);
v___x_454_ = v___x_438_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_451_);
v___x_454_ = v_reuseFailAlloc_462_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_440_);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v_snd_422_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_458_);
v___x_460_ = v___x_447_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_del_object(v___x_438_);
lean_dec(v_val_436_);
lean_del_object(v___x_424_);
lean_dec(v_snd_422_);
lean_dec_ref(v_e_410_);
v_a_464_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_444_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_444_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_del_object(v___x_438_);
lean_dec(v_val_436_);
lean_dec(v_snd_422_);
v_a_428_ = v___x_441_;
goto v___jp_427_;
}
}
}
v___jp_427_:
{
lean_object* v___x_430_; 
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v_a_428_);
lean_ctor_set(v___x_424_, 0, v___x_426_);
v___x_430_ = v___x_424_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_426_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_a_428_);
v___x_430_ = v_reuseFailAlloc_434_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
size_t v___x_431_; size_t v___x_432_; 
v___x_431_ = ((size_t)1ULL);
v___x_432_ = lean_usize_add(v_i_413_, v___x_431_);
v_i_413_ = v___x_432_;
v_b_414_ = v___x_430_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_e_475_, lean_object* v_as_476_, lean_object* v_sz_477_, lean_object* v_i_478_, lean_object* v_b_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
size_t v_sz_boxed_485_; size_t v_i_boxed_486_; lean_object* v_res_487_; 
v_sz_boxed_485_ = lean_unbox_usize(v_sz_477_);
lean_dec(v_sz_477_);
v_i_boxed_486_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_res_487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg(v_e_475_, v_as_476_, v_sz_boxed_485_, v_i_boxed_486_, v_b_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec_ref(v_as_476_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2(lean_object* v_e_488_, lean_object* v_as_489_, size_t v_sz_490_, size_t v_i_491_, lean_object* v_b_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
uint8_t v___x_503_; 
v___x_503_ = lean_usize_dec_lt(v_i_491_, v_sz_490_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; 
lean_dec_ref(v_e_488_);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v_b_492_);
return v___x_504_;
}
else
{
lean_object* v_snd_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_556_; 
v_snd_505_ = lean_ctor_get(v_b_492_, 1);
v_isSharedCheck_556_ = !lean_is_exclusive(v_b_492_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v_b_492_, 0);
lean_dec(v_unused_557_);
v___x_507_ = v_b_492_;
v_isShared_508_ = v_isSharedCheck_556_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_snd_505_);
lean_dec(v_b_492_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_556_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v_a_511_; lean_object* v_a_518_; 
v___x_509_ = lean_box(0);
v_a_518_ = lean_array_uget(v_as_489_, v_i_491_);
if (lean_obj_tag(v_a_518_) == 0)
{
v_a_511_ = v_snd_505_;
goto v___jp_510_;
}
else
{
lean_object* v_val_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_555_; 
v_val_519_ = lean_ctor_get(v_a_518_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v_a_518_);
if (v_isSharedCheck_555_ == 0)
{
v___x_521_ = v_a_518_;
v_isShared_522_ = v_isSharedCheck_555_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_val_519_);
lean_dec(v_a_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_555_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_523_ = lean_box(0);
v___x_524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg___closed__0));
v___x_525_ = l_Lean_LocalDecl_isAuxDecl(v_val_519_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = l_Lean_LocalDecl_type(v_val_519_);
lean_inc_ref(v_e_488_);
v___x_527_ = l_Lean_Meta_isExprDefEq(v___x_526_, v_e_488_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_546_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_546_ == 0)
{
v___x_530_ = v___x_527_;
v_isShared_531_ = v_isSharedCheck_546_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_546_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
uint8_t v___x_532_; 
v___x_532_ = lean_unbox(v_a_528_);
if (v___x_532_ == 0)
{
lean_del_object(v___x_530_);
lean_dec(v_a_528_);
lean_del_object(v___x_521_);
lean_dec(v_val_519_);
lean_dec(v_snd_505_);
v_a_511_ = v___x_524_;
goto v___jp_510_;
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; uint8_t v___x_535_; lean_object* v___x_537_; 
lean_del_object(v___x_507_);
lean_dec_ref(v_e_488_);
v___x_533_ = l_Lean_LocalDecl_toExpr(v_val_519_);
v___x_534_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_534_, 0, v___x_533_);
v___x_535_ = lean_unbox(v_a_528_);
lean_dec(v_a_528_);
lean_ctor_set_uint8(v___x_534_, sizeof(void*)*1, v___x_535_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_534_);
v___x_537_ = v___x_521_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_534_);
v___x_537_ = v_reuseFailAlloc_545_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v___x_523_);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v_snd_505_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_541_);
v___x_543_ = v___x_530_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
lean_del_object(v___x_521_);
lean_dec(v_val_519_);
lean_del_object(v___x_507_);
lean_dec(v_snd_505_);
lean_dec_ref(v_e_488_);
v_a_547_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_527_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_527_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
else
{
lean_del_object(v___x_521_);
lean_dec(v_val_519_);
lean_dec(v_snd_505_);
v_a_511_ = v___x_524_;
goto v___jp_510_;
}
}
}
v___jp_510_:
{
lean_object* v___x_513_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_a_511_);
lean_ctor_set(v___x_507_, 0, v___x_509_);
v___x_513_ = v___x_507_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_a_511_);
v___x_513_ = v_reuseFailAlloc_517_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
size_t v___x_514_; size_t v___x_515_; lean_object* v___x_516_; 
v___x_514_ = ((size_t)1ULL);
v___x_515_ = lean_usize_add(v_i_491_, v___x_514_);
v___x_516_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg(v_e_488_, v_as_489_, v_sz_490_, v___x_515_, v___x_513_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
return v___x_516_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2___boxed(lean_object* v_e_558_, lean_object* v_as_559_, lean_object* v_sz_560_, lean_object* v_i_561_, lean_object* v_b_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
size_t v_sz_boxed_573_; size_t v_i_boxed_574_; lean_object* v_res_575_; 
v_sz_boxed_573_ = lean_unbox_usize(v_sz_560_);
lean_dec(v_sz_560_);
v_i_boxed_574_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_res_575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2(v_e_558_, v_as_559_, v_sz_boxed_573_, v_i_boxed_574_, v_b_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v_as_559_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0(lean_object* v_init_576_, lean_object* v_e_577_, lean_object* v_n_578_, lean_object* v_b_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
if (lean_obj_tag(v_n_578_) == 0)
{
lean_object* v_cs_590_; lean_object* v___x_591_; lean_object* v___x_592_; size_t v_sz_593_; size_t v___x_594_; lean_object* v___x_595_; 
v_cs_590_ = lean_ctor_get(v_n_578_, 0);
v___x_591_ = lean_box(0);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v_b_579_);
v_sz_593_ = lean_array_size(v_cs_590_);
v___x_594_ = ((size_t)0ULL);
v___x_595_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__1(v_init_576_, v_e_577_, v_cs_590_, v_sz_593_, v___x_594_, v___x_592_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_610_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_610_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_610_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_610_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v_fst_600_; 
v_fst_600_ = lean_ctor_get(v_a_596_, 0);
if (lean_obj_tag(v_fst_600_) == 0)
{
lean_object* v_snd_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v_snd_601_ = lean_ctor_get(v_a_596_, 1);
lean_inc(v_snd_601_);
lean_dec(v_a_596_);
v___x_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_602_, 0, v_snd_601_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_602_);
v___x_604_ = v___x_598_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
else
{
lean_object* v_val_606_; lean_object* v___x_608_; 
lean_inc_ref(v_fst_600_);
lean_dec(v_a_596_);
v_val_606_ = lean_ctor_get(v_fst_600_, 0);
lean_inc(v_val_606_);
lean_dec_ref_known(v_fst_600_, 1);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v_val_606_);
v___x_608_ = v___x_598_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_val_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_595_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_595_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
else
{
lean_object* v_vs_619_; lean_object* v___x_620_; lean_object* v___x_621_; size_t v_sz_622_; size_t v___x_623_; lean_object* v___x_624_; 
v_vs_619_ = lean_ctor_get(v_n_578_, 0);
v___x_620_ = lean_box(0);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v_b_579_);
v_sz_622_ = lean_array_size(v_vs_619_);
v___x_623_ = ((size_t)0ULL);
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2(v_e_577_, v_vs_619_, v_sz_622_, v___x_623_, v___x_621_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_639_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_639_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_639_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_639_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_fst_629_; 
v_fst_629_ = lean_ctor_get(v_a_625_, 0);
if (lean_obj_tag(v_fst_629_) == 0)
{
lean_object* v_snd_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v_snd_630_ = lean_ctor_get(v_a_625_, 1);
lean_inc(v_snd_630_);
lean_dec(v_a_625_);
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v_snd_630_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_631_);
v___x_633_ = v___x_627_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
else
{
lean_object* v_val_635_; lean_object* v___x_637_; 
lean_inc_ref(v_fst_629_);
lean_dec(v_a_625_);
v_val_635_ = lean_ctor_get(v_fst_629_, 0);
lean_inc(v_val_635_);
lean_dec_ref_known(v_fst_629_, 1);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v_val_635_);
v___x_637_ = v___x_627_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_val_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
v_a_640_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_624_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_624_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__1(lean_object* v_init_648_, lean_object* v_e_649_, lean_object* v_as_650_, size_t v_sz_651_, size_t v_i_652_, lean_object* v_b_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = lean_usize_dec_lt(v_i_652_, v_sz_651_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; 
lean_dec_ref(v_e_649_);
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v_b_653_);
return v___x_665_;
}
else
{
lean_object* v_snd_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_700_; 
v_snd_666_ = lean_ctor_get(v_b_653_, 1);
v_isSharedCheck_700_ = !lean_is_exclusive(v_b_653_);
if (v_isSharedCheck_700_ == 0)
{
lean_object* v_unused_701_; 
v_unused_701_ = lean_ctor_get(v_b_653_, 0);
lean_dec(v_unused_701_);
v___x_668_ = v_b_653_;
v_isShared_669_ = v_isSharedCheck_700_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_snd_666_);
lean_dec(v_b_653_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_700_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v_a_671_; lean_object* v___x_672_; 
v___x_670_ = lean_box(0);
v_a_671_ = lean_array_uget_borrowed(v_as_650_, v_i_652_);
lean_inc(v_snd_666_);
lean_inc_ref(v_e_649_);
v___x_672_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0(v_init_648_, v_e_649_, v_a_671_, v_snd_666_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_691_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_691_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_691_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_691_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
if (lean_obj_tag(v_a_673_) == 0)
{
lean_object* v___x_677_; lean_object* v___x_679_; 
lean_dec_ref(v_e_649_);
v___x_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_677_, 0, v_a_673_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_677_);
v___x_679_ = v___x_668_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_snd_666_);
v___x_679_ = v_reuseFailAlloc_683_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_681_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_679_);
v___x_681_ = v___x_675_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; 
lean_del_object(v___x_675_);
lean_dec(v_snd_666_);
v_a_684_ = lean_ctor_get(v_a_673_, 0);
lean_inc(v_a_684_);
lean_dec_ref_known(v_a_673_, 1);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 1, v_a_684_);
lean_ctor_set(v___x_668_, 0, v___x_670_);
v___x_686_ = v___x_668_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_a_684_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
size_t v___x_687_; size_t v___x_688_; 
v___x_687_ = ((size_t)1ULL);
v___x_688_ = lean_usize_add(v_i_652_, v___x_687_);
v_i_652_ = v___x_688_;
v_b_653_ = v___x_686_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_del_object(v___x_668_);
lean_dec(v_snd_666_);
lean_dec_ref(v_e_649_);
v_a_692_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_672_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_672_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__1___boxed(lean_object* v_init_702_, lean_object* v_e_703_, lean_object* v_as_704_, lean_object* v_sz_705_, lean_object* v_i_706_, lean_object* v_b_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
size_t v_sz_boxed_718_; size_t v_i_boxed_719_; lean_object* v_res_720_; 
v_sz_boxed_718_ = lean_unbox_usize(v_sz_705_);
lean_dec(v_sz_705_);
v_i_boxed_719_ = lean_unbox_usize(v_i_706_);
lean_dec(v_i_706_);
v_res_720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__1(v_init_702_, v_e_703_, v_as_704_, v_sz_boxed_718_, v_i_boxed_719_, v_b_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v_as_704_);
lean_dec_ref(v_init_702_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0___boxed(lean_object* v_init_721_, lean_object* v_e_722_, lean_object* v_n_723_, lean_object* v_b_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0(v_init_721_, v_e_722_, v_n_723_, v_b_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
lean_dec_ref(v_n_723_);
lean_dec_ref(v_init_721_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0(lean_object* v_e_736_, lean_object* v_t_737_, lean_object* v_init_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_root_749_; lean_object* v_tail_750_; lean_object* v___x_751_; 
v_root_749_ = lean_ctor_get(v_t_737_, 0);
v_tail_750_ = lean_ctor_get(v_t_737_, 1);
lean_inc_ref(v_e_736_);
lean_inc_ref(v_init_738_);
v___x_751_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0(v_init_738_, v_e_736_, v_root_749_, v_init_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec_ref(v_init_738_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_788_; 
v_a_752_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_788_ == 0)
{
v___x_754_ = v___x_751_;
v_isShared_755_ = v_isSharedCheck_788_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_751_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_788_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
if (lean_obj_tag(v_a_752_) == 0)
{
lean_object* v_a_756_; lean_object* v___x_758_; 
lean_dec_ref(v_e_736_);
v_a_756_ = lean_ctor_get(v_a_752_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v_a_752_, 1);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 0, v_a_756_);
v___x_758_ = v___x_754_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_756_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
else
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; size_t v_sz_763_; size_t v___x_764_; lean_object* v___x_765_; 
lean_del_object(v___x_754_);
v_a_760_ = lean_ctor_get(v_a_752_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v_a_752_, 1);
v___x_761_ = lean_box(0);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v_a_760_);
v_sz_763_ = lean_array_size(v_tail_750_);
v___x_764_ = ((size_t)0ULL);
v___x_765_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1(v_e_736_, v_tail_750_, v_sz_763_, v___x_764_, v___x_762_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_779_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_779_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_779_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_779_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v_fst_770_; 
v_fst_770_ = lean_ctor_get(v_a_766_, 0);
if (lean_obj_tag(v_fst_770_) == 0)
{
lean_object* v_snd_771_; lean_object* v___x_773_; 
v_snd_771_ = lean_ctor_get(v_a_766_, 1);
lean_inc(v_snd_771_);
lean_dec(v_a_766_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v_snd_771_);
v___x_773_ = v___x_768_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_snd_771_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
else
{
lean_object* v_val_775_; lean_object* v___x_777_; 
lean_inc_ref(v_fst_770_);
lean_dec(v_a_766_);
v_val_775_ = lean_ctor_get(v_fst_770_, 0);
lean_inc(v_val_775_);
lean_dec_ref_known(v_fst_770_, 1);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v_val_775_);
v___x_777_ = v___x_768_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_val_775_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
v_a_780_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_765_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_765_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec_ref(v_e_736_);
v_a_789_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_751_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_751_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0___boxed(lean_object* v_e_797_, lean_object* v_t_798_, lean_object* v_init_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0(v_e_797_, v_t_798_, v_init_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v_t_798_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeAssumption(lean_object* v_e_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_lctx_827_; lean_object* v_decls_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v_lctx_827_ = lean_ctor_get(v_a_822_, 2);
v_decls_828_ = lean_ctor_get(v_lctx_827_, 1);
v___x_829_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__0));
v___x_830_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0(v_e_816_, v_decls_828_, v___x_829_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_844_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_844_ == 0)
{
v___x_833_ = v___x_830_;
v_isShared_834_ = v_isSharedCheck_844_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_830_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_844_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v_fst_835_; 
v_fst_835_ = lean_ctor_get(v_a_831_, 0);
lean_inc(v_fst_835_);
lean_dec(v_a_831_);
if (lean_obj_tag(v_fst_835_) == 0)
{
lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_836_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_dischargeAssumption___closed__1));
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 0, v___x_836_);
v___x_838_ = v___x_833_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
else
{
lean_object* v_val_840_; lean_object* v___x_842_; 
v_val_840_ = lean_ctor_get(v_fst_835_, 0);
lean_inc(v_val_840_);
lean_dec_ref_known(v_fst_835_, 1);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 0, v_val_840_);
v___x_842_ = v___x_833_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_val_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_830_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_830_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_dischargeAssumption___boxed(lean_object* v_e_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_Meta_Sym_Simp_dischargeAssumption(v_e_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
lean_dec(v_a_858_);
lean_dec_ref(v_a_857_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4(lean_object* v_e_865_, lean_object* v_as_866_, size_t v_sz_867_, size_t v_i_868_, lean_object* v_b_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___redArg(v_e_865_, v_as_866_, v_sz_867_, v_i_868_, v_b_869_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4___boxed(lean_object* v_e_881_, lean_object* v_as_882_, lean_object* v_sz_883_, lean_object* v_i_884_, lean_object* v_b_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
size_t v_sz_boxed_896_; size_t v_i_boxed_897_; lean_object* v_res_898_; 
v_sz_boxed_896_ = lean_unbox_usize(v_sz_883_);
lean_dec(v_sz_883_);
v_i_boxed_897_ = lean_unbox_usize(v_i_884_);
lean_dec(v_i_884_);
v_res_898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__1_spec__4(v_e_881_, v_as_882_, v_sz_boxed_896_, v_i_boxed_897_, v_b_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v_as_882_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3(lean_object* v_e_899_, lean_object* v_as_900_, size_t v_sz_901_, size_t v_i_902_, lean_object* v_b_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___redArg(v_e_899_, v_as_900_, v_sz_901_, v_i_902_, v_b_903_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_e_915_, lean_object* v_as_916_, lean_object* v_sz_917_, lean_object* v_i_918_, lean_object* v_b_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
size_t v_sz_boxed_930_; size_t v_i_boxed_931_; lean_object* v_res_932_; 
v_sz_boxed_930_ = lean_unbox_usize(v_sz_917_);
lean_dec(v_sz_917_);
v_i_boxed_931_ = lean_unbox_usize(v_i_918_);
lean_dec(v_i_918_);
v_res_932_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Sym_Simp_dischargeAssumption_spec__0_spec__0_spec__2_spec__3(v_e_915_, v_as_916_, v_sz_boxed_930_, v_i_boxed_931_, v_b_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v_as_916_);
return v_res_932_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
}
#ifdef __cplusplus
}
#endif
