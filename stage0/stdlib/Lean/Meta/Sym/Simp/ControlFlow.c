// Lean compiler output
// Module: Lean.Meta.Sym.Simp.ControlFlow
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.Simp.App import Lean.Meta.Sym.Simp.Result import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.Discharger import Lean.Meta.Sym.Simp.TheoremsLookup import Lean.Meta.Sym.Util import Lean.Meta.Sym.Reduce import Lean.Meta.WHNF import Lean.Meta.Match.Value import Lean.Meta.AppBuilder import Lean.Meta.Decidable import Init.Sym.Lemmas
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
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isMatchValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_reduceMatcherApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getMatchTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeSimpSelf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_replaceFn(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceDecisionProjection_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_markAsNotDone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_cond"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(145, 61, 47, 221, 107, 134, 179, 192)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 21, 178, 198, 97, 164, 246, 137)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dite_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(78, 119, 178, 178, 249, 126, 188, 7)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dite_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(65, 218, 189, 96, 14, 237, 238, 210)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(72, 238, 116, 219, 106, 19, 52, 46)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "dite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(181, 72, 248, 145, 136, 9, 228, 221)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "dite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_value),LEAN_SCALAR_PTR_LITERAL(36, 253, 19, 136, 170, 78, 36, 13)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__31 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__31_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_false"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 46, 65, 221, 159, 136, 150, 89)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "decide_true"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 8, 17, 237, 36, 213, 18, 105)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_congr"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__4_value),LEAN_SCALAR_PTR_LITERAL(61, 229, 9, 191, 122, 61, 70, 94)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "decide_prop_eq_false"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__6_value),LEAN_SCALAR_PTR_LITERAL(55, 242, 168, 209, 35, 165, 174, 215)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "decide_prop_eq_true"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__8_value),LEAN_SCALAR_PTR_LITERAL(91, 57, 77, 17, 146, 195, 162, 163)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "cond_cond_congr"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 228, 101, 80, 96, 119, 204, 25)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cond_cond_eq_false"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 151, 22, 186, 118, 232, 224)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "cond_cond_eq_true"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 237, 153, 45, 203, 196, 217, 147)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cond_false"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(98, 92, 93, 112, 12, 94, 108, 230)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cond_true"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(159, 102, 104, 109, 28, 196, 37, 90)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_simpCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpDecisionProjection___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0;
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeSimpSelf___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg(lean_object* v_structName_1_, lean_object* v_idx_2_, lean_object* v_struct_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___y_12_; lean_object* v___x_15_; uint8_t v_debug_16_; 
v___x_15_ = lean_st_ref_get(v___y_5_);
v_debug_16_ = lean_ctor_get_uint8(v___x_15_, sizeof(void*)*13);
lean_dec(v___x_15_);
if (v_debug_16_ == 0)
{
v___y_12_ = v___y_5_;
goto v___jp_11_;
}
else
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_struct_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_dec_ref_known(v___x_17_, 1);
v___y_12_ = v___y_5_;
goto v___jp_11_;
}
else
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_25_; 
lean_dec_ref(v_struct_3_);
lean_dec(v_idx_2_);
lean_dec(v_structName_1_);
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_25_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_25_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_25_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_18_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
v___jp_11_:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = l_Lean_Expr_proj___override(v_structName_1_, v_idx_2_, v_struct_3_);
v___x_14_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_13_, v___y_12_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg___boxed(lean_object* v_structName_26_, lean_object* v_idx_27_, lean_object* v_struct_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg(v_structName_26_, v_idx_27_, v_struct_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0(lean_object* v_structName_37_, lean_object* v_idx_38_, lean_object* v_struct_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg(v_structName_37_, v_idx_38_, v_struct_39_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___boxed(lean_object* v_structName_51_, lean_object* v_idx_52_, lean_object* v_struct_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0(v_structName_51_, v_idx_52_, v_struct_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg(lean_object* v_declName_65_, lean_object* v_us_66_, lean_object* v___y_67_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = l_Lean_Expr_const___override(v_declName_65_, v_us_66_);
v___x_70_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_69_, v___y_67_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg___boxed(lean_object* v_declName_71_, lean_object* v_us_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg(v_declName_71_, v_us_72_, v___y_73_);
lean_dec(v___y_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1(lean_object* v_declName_76_, lean_object* v_us_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg(v_declName_76_, v_us_77_, v___y_82_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___boxed(lean_object* v_declName_89_, lean_object* v_us_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1(v_declName_89_, v_us_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(lean_object* v_f_102_, lean_object* v_a_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___y_112_; lean_object* v___x_115_; uint8_t v_debug_116_; 
v___x_115_ = lean_st_ref_get(v___y_105_);
v_debug_116_ = lean_ctor_get_uint8(v___x_115_, sizeof(void*)*13);
lean_dec(v___x_115_);
if (v_debug_116_ == 0)
{
v___y_112_ = v___y_105_;
goto v___jp_111_;
}
else
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_102_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v___x_118_; 
lean_dec_ref_known(v___x_117_, 1);
v___x_118_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_dec_ref_known(v___x_118_, 1);
v___y_112_ = v___y_105_;
goto v___jp_111_;
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec_ref(v_a_103_);
lean_dec_ref(v_f_102_);
v_a_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
else
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_134_; 
lean_dec_ref(v_a_103_);
lean_dec_ref(v_f_102_);
v_a_127_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_134_ == 0)
{
v___x_129_ = v___x_117_;
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_117_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_127_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
v___jp_111_:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = l_Lean_Expr_app___override(v_f_102_, v_a_103_);
v___x_114_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_113_, v___y_112_);
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg___boxed(lean_object* v_f_135_, lean_object* v_a_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(v_f_135_, v_a_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2_spec__3(lean_object* v_f_145_, lean_object* v_a_u2081_146_, lean_object* v_a_u2082_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(v_f_145_, v_a_u2081_146_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; lean_object* v___x_160_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_a_159_);
lean_dec_ref_known(v___x_158_, 1);
v___x_160_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(v_a_159_, v_a_u2082_147_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
return v___x_160_;
}
else
{
lean_dec_ref(v_a_u2082_147_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2_spec__3___boxed(lean_object* v_f_161_, lean_object* v_a_u2081_162_, lean_object* v_a_u2082_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2_spec__3(v_f_161_, v_a_u2081_162_, v_a_u2082_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2(lean_object* v_f_175_, lean_object* v_a_u2081_176_, lean_object* v_a_u2082_177_, lean_object* v_a_u2083_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2_spec__3(v_f_175_, v_a_u2081_176_, v_a_u2082_177_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_191_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
v___x_191_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(v_a_190_, v_a_u2083_178_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
return v___x_191_;
}
else
{
lean_dec_ref(v_a_u2083_178_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2___boxed(lean_object* v_f_192_, lean_object* v_a_u2081_193_, lean_object* v_a_u2082_194_, lean_object* v_a_u2083_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2(v_f_192_, v_a_u2081_193_, v_a_u2082_194_, v_a_u2083_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2(lean_object* v_f_207_, lean_object* v_a_u2081_208_, lean_object* v_a_u2082_209_, lean_object* v_a_u2083_210_, lean_object* v_a_u2084_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2(v_f_207_, v_a_u2081_208_, v_a_u2082_209_, v_a_u2083_210_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_224_; 
v_a_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_a_223_);
lean_dec_ref_known(v___x_222_, 1);
v___x_224_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(v_a_223_, v_a_u2084_211_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
return v___x_224_;
}
else
{
lean_dec_ref(v_a_u2084_211_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2___boxed(lean_object* v_f_225_, lean_object* v_a_u2081_226_, lean_object* v_a_u2082_227_, lean_object* v_a_u2083_228_, lean_object* v_a_u2084_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2(v_f_225_, v_a_u2081_226_, v_a_u2082_227_, v_a_u2083_228_, v_a_u2084_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0(uint8_t v___x_257_, lean_object* v_e_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_272_ = l_Lean_Expr_cleanupAnnotations(v_e_258_);
v___x_273_ = l_Lean_Expr_isApp(v___x_272_);
if (v___x_273_ == 0)
{
lean_dec_ref(v___x_272_);
goto v___jp_269_;
}
else
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = l_Lean_Expr_appFnCleanup___redArg(v___x_272_);
v___x_275_ = l_Lean_Expr_isApp(v___x_274_);
if (v___x_275_ == 0)
{
lean_dec_ref(v___x_274_);
lean_dec_ref(v___x_272_);
goto v___jp_269_;
}
else
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = l_Lean_Expr_appFnCleanup___redArg(v___x_274_);
v___x_277_ = l_Lean_Expr_isApp(v___x_276_);
if (v___x_277_ == 0)
{
lean_dec_ref(v___x_276_);
lean_dec_ref(v___x_274_);
lean_dec_ref(v___x_272_);
goto v___jp_269_;
}
else
{
lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_278_ = l_Lean_Expr_appFnCleanup___redArg(v___x_276_);
v___x_279_ = l_Lean_Expr_isApp(v___x_278_);
if (v___x_279_ == 0)
{
lean_dec_ref(v___x_278_);
lean_dec_ref(v___x_276_);
lean_dec_ref(v___x_274_);
lean_dec_ref(v___x_272_);
goto v___jp_269_;
}
else
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = l_Lean_Expr_appFnCleanup___redArg(v___x_278_);
v___x_281_ = l_Lean_Expr_isApp(v___x_280_);
if (v___x_281_ == 0)
{
lean_dec_ref(v___x_280_);
lean_dec_ref(v___x_278_);
lean_dec_ref(v___x_276_);
lean_dec_ref(v___x_274_);
lean_dec_ref(v___x_272_);
goto v___jp_269_;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_282_ = l_Lean_Expr_appFnCleanup___redArg(v___x_280_);
v___x_283_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1));
v___x_284_ = l_Lean_Expr_isConstOf(v___x_282_, v___x_283_);
if (v___x_284_ == 0)
{
lean_dec_ref(v___x_282_);
lean_dec_ref(v___x_280_);
lean_dec_ref(v___x_278_);
lean_dec_ref(v___x_276_);
lean_dec_ref(v___x_274_);
lean_dec_ref(v___x_272_);
goto v___jp_269_;
}
else
{
lean_object* v_arg_285_; lean_object* v_arg_286_; lean_object* v_arg_287_; lean_object* v_arg_288_; lean_object* v_arg_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_arg_285_ = lean_ctor_get(v___x_272_, 1);
lean_inc_ref(v_arg_285_);
lean_dec_ref(v___x_272_);
v_arg_286_ = lean_ctor_get(v___x_274_, 1);
lean_inc_ref(v_arg_286_);
lean_dec_ref(v___x_274_);
v_arg_287_ = lean_ctor_get(v___x_276_, 1);
lean_inc_ref_n(v_arg_287_, 2);
lean_dec_ref(v___x_276_);
v_arg_288_ = lean_ctor_get(v___x_278_, 1);
lean_inc_ref(v_arg_288_);
lean_dec_ref(v___x_278_);
v_arg_289_ = lean_ctor_get(v___x_280_, 1);
lean_inc_ref(v_arg_289_);
lean_dec_ref(v___x_280_);
v___x_290_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3));
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg(v___x_290_, v___x_291_, v_arg_287_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5));
v___x_295_ = l_Lean_Expr_constLevels_x21(v___x_282_);
lean_dec_ref(v___x_282_);
lean_inc(v___x_295_);
v___x_296_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00Lean_Meta_Sym_Simp_simpIte_spec__1___redArg(v___x_294_, v___x_295_, v___y_263_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_298_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_296_, 1);
lean_inc_ref(v_arg_285_);
lean_inc_ref(v_arg_286_);
lean_inc_ref(v_arg_289_);
v___x_298_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2(v_a_297_, v_arg_289_, v_a_293_, v_arg_286_, v_arg_285_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc(v_a_299_);
lean_dec_ref_known(v___x_298_, 1);
v___x_300_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9));
v___x_301_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_300_, v___x_295_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_311_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_311_ == 0)
{
v___x_304_ = v___x_301_;
v_isShared_305_ = v_isSharedCheck_311_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_301_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_311_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = l_Lean_mkApp5(v_a_302_, v_arg_289_, v_arg_288_, v_arg_287_, v_arg_286_, v_arg_285_);
v___x_307_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_307_, 0, v_a_299_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*2, v___x_257_);
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*2 + 1, v___x_257_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_dec(v_a_299_);
lean_dec_ref(v_arg_289_);
lean_dec_ref(v_arg_288_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
v_a_312_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_301_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_301_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v___x_295_);
lean_dec_ref(v_arg_289_);
lean_dec_ref(v_arg_288_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
v_a_320_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_298_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_298_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v___x_295_);
lean_dec(v_a_293_);
lean_dec_ref(v_arg_289_);
lean_dec_ref(v_arg_288_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
v_a_328_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_296_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_296_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec_ref(v_arg_289_);
lean_dec_ref(v_arg_288_);
lean_dec_ref(v_arg_287_);
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v___x_282_);
v_a_336_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_292_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_292_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
}
}
}
v___jp_269_:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_270_, 0, v___x_257_);
lean_ctor_set_uint8(v___x_270_, 1, v___x_257_);
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte___lam__0___boxed(lean_object* v___x_344_, lean_object* v_e_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
uint8_t v___x_9147__boxed_356_; lean_object* v_res_357_; 
v___x_9147__boxed_356_ = lean_unbox(v___x_344_);
v_res_357_ = l_Lean_Meta_Sym_Simp_simpIte___lam__0(v___x_9147__boxed_356_, v_e_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
lean_dec(v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec(v___y_346_);
lean_dec_ref(v_e_345_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte(lean_object* v_e_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_numArgs_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v_numArgs_369_ = l_Lean_Expr_getAppNumArgs(v_e_358_);
v___x_370_ = lean_unsigned_to_nat(5u);
v___x_371_ = lean_nat_dec_lt(v_numArgs_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___f_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_372_ = lean_box(v___x_371_);
v___f_373_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_373_, 0, v___x_372_);
v___x_374_ = lean_nat_sub(v_numArgs_369_, v___x_370_);
lean_dec(v_numArgs_369_);
v___x_375_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_358_, v___x_374_, v___f_373_, v_a_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
lean_dec(v___x_374_);
return v___x_375_;
}
else
{
uint8_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
lean_dec(v_numArgs_369_);
lean_dec_ref(v_e_358_);
v___x_376_ = 0;
v___x_377_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_377_, 0, v___x_371_);
lean_ctor_set_uint8(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpIte___boxed(lean_object* v_e_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Meta_Sym_Simp_simpIte(v_e_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_);
lean_dec(v_a_388_);
lean_dec_ref(v_a_387_);
lean_dec(v_a_386_);
lean_dec_ref(v_a_385_);
lean_dec(v_a_384_);
lean_dec_ref(v_a_383_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3(lean_object* v_f_391_, lean_object* v_a_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___redArg(v_f_391_, v_a_392_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3___boxed(lean_object* v_f_404_, lean_object* v_a_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__3(v_f_404_, v_a_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
lean_dec(v___y_406_);
return v_res_416_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_box(0);
v___x_424_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3));
v___x_425_ = l_Lean_mkConst(v___x_424_, v___x_423_);
return v___x_425_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_426_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4);
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = lean_mk_empty_array_with_capacity(v___x_427_);
v___x_429_ = lean_array_push(v___x_428_, v___x_426_);
return v___x_429_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_box(0);
v___x_439_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10));
v___x_440_ = l_Lean_mkConst(v___x_439_, v___x_438_);
return v___x_440_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_441_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11);
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_mk_empty_array_with_capacity(v___x_442_);
v___x_444_ = lean_array_push(v___x_443_, v___x_441_);
return v___x_444_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_448_ = lean_box(0);
v___x_449_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3));
v___x_450_ = l_Lean_mkConst(v___x_449_, v___x_448_);
return v___x_450_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_box(0);
v___x_460_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20));
v___x_461_ = l_Lean_mkConst(v___x_460_, v___x_459_);
return v___x_461_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = l_Lean_mkBVar(v___x_462_);
return v___x_463_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = lean_box(0);
v___x_469_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24));
v___x_470_ = l_Lean_mkConst(v___x_469_, v___x_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(uint8_t v___x_482_, lean_object* v_e_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = l_Lean_Expr_cleanupAnnotations(v_e_483_);
v___x_498_ = l_Lean_Expr_isApp(v___x_497_);
if (v___x_498_ == 0)
{
lean_dec_ref(v___x_497_);
lean_dec_ref(v_e_483_);
goto v___jp_494_;
}
else
{
lean_object* v___x_499_; uint8_t v___x_500_; 
v___x_499_ = l_Lean_Expr_appFnCleanup___redArg(v___x_497_);
v___x_500_ = l_Lean_Expr_isApp(v___x_499_);
if (v___x_500_ == 0)
{
lean_dec_ref(v___x_499_);
lean_dec_ref(v___x_497_);
lean_dec_ref(v_e_483_);
goto v___jp_494_;
}
else
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = l_Lean_Expr_appFnCleanup___redArg(v___x_499_);
v___x_502_ = l_Lean_Expr_isApp(v___x_501_);
if (v___x_502_ == 0)
{
lean_dec_ref(v___x_501_);
lean_dec_ref(v___x_499_);
lean_dec_ref(v___x_497_);
lean_dec_ref(v_e_483_);
goto v___jp_494_;
}
else
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = l_Lean_Expr_appFnCleanup___redArg(v___x_501_);
v___x_504_ = l_Lean_Expr_isApp(v___x_503_);
if (v___x_504_ == 0)
{
lean_dec_ref(v___x_503_);
lean_dec_ref(v___x_501_);
lean_dec_ref(v___x_499_);
lean_dec_ref(v___x_497_);
lean_dec_ref(v_e_483_);
goto v___jp_494_;
}
else
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = l_Lean_Expr_appFnCleanup___redArg(v___x_503_);
v___x_506_ = l_Lean_Expr_isApp(v___x_505_);
if (v___x_506_ == 0)
{
lean_dec_ref(v___x_505_);
lean_dec_ref(v___x_503_);
lean_dec_ref(v___x_501_);
lean_dec_ref(v___x_499_);
lean_dec_ref(v___x_497_);
lean_dec_ref(v_e_483_);
goto v___jp_494_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_507_ = l_Lean_Expr_appFnCleanup___redArg(v___x_505_);
v___x_508_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1));
v___x_509_ = l_Lean_Expr_isConstOf(v___x_507_, v___x_508_);
if (v___x_509_ == 0)
{
lean_dec_ref(v___x_507_);
lean_dec_ref(v___x_505_);
lean_dec_ref(v___x_503_);
lean_dec_ref(v___x_501_);
lean_dec_ref(v___x_499_);
lean_dec_ref(v___x_497_);
lean_dec_ref(v_e_483_);
goto v___jp_494_;
}
else
{
lean_object* v_arg_510_; lean_object* v_arg_511_; lean_object* v_arg_512_; lean_object* v_arg_513_; lean_object* v_arg_514_; lean_object* v___x_515_; 
v_arg_510_ = lean_ctor_get(v___x_497_, 1);
lean_inc_ref(v_arg_510_);
lean_dec_ref(v___x_497_);
v_arg_511_ = lean_ctor_get(v___x_499_, 1);
lean_inc_ref(v_arg_511_);
lean_dec_ref(v___x_499_);
v_arg_512_ = lean_ctor_get(v___x_501_, 1);
lean_inc_ref(v_arg_512_);
lean_dec_ref(v___x_501_);
v_arg_513_ = lean_ctor_get(v___x_503_, 1);
lean_inc_ref_n(v_arg_513_, 2);
lean_dec_ref(v___x_503_);
v_arg_514_ = lean_ctor_get(v___x_505_, 1);
lean_inc_ref(v_arg_514_);
lean_dec_ref(v___x_505_);
lean_inc(v___y_492_);
lean_inc_ref(v___y_491_);
lean_inc(v___y_490_);
lean_inc_ref(v___y_489_);
lean_inc(v___y_488_);
lean_inc_ref(v___y_487_);
lean_inc(v___y_486_);
lean_inc_ref(v___y_485_);
lean_inc(v___y_484_);
v___x_515_ = lean_sym_simp(v_arg_513_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
if (lean_obj_tag(v_a_516_) == 0)
{
uint8_t v_contextDependent_517_; lean_object* v___x_518_; 
lean_dec_ref(v_e_483_);
v_contextDependent_517_ = lean_ctor_get_uint8(v_a_516_, 1);
lean_dec_ref_known(v_a_516_, 0);
v___x_518_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_513_, v___y_487_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; uint8_t v___x_520_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v___x_520_ = lean_unbox(v_a_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_513_, v___y_487_);
lean_dec_ref(v_arg_513_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_558_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_558_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_558_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_558_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
uint8_t v___x_526_; 
v___x_526_ = lean_unbox(v_a_522_);
lean_dec(v_a_522_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; lean_object* v___x_529_; 
lean_dec(v_a_519_);
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v___x_507_);
v___x_527_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_509_, v_contextDependent_517_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_527_);
v___x_529_ = v___x_524_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
else
{
lean_object* v___x_531_; uint8_t v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
lean_del_object(v___x_524_);
v___x_531_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5);
v___x_532_ = lean_unbox(v_a_519_);
v___x_533_ = lean_unbox(v_a_519_);
lean_inc_ref(v_arg_510_);
v___x_534_ = l_Lean_Expr_betaRev(v_arg_510_, v___x_531_, v___x_532_, v___x_533_);
v___x_535_ = l_Lean_Meta_Sym_shareCommonInc(v___x_534_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_549_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_549_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_549_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_549_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; lean_object* v___x_547_; 
v___x_540_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7));
v___x_541_ = l_Lean_Expr_constLevels_x21(v___x_507_);
lean_dec_ref(v___x_507_);
v___x_542_ = l_Lean_mkConst(v___x_540_, v___x_541_);
v___x_543_ = l_Lean_mkApp4(v___x_542_, v_arg_514_, v_arg_512_, v_arg_511_, v_arg_510_);
v___x_544_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_544_, 0, v_a_536_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = lean_unbox(v_a_519_);
lean_dec(v_a_519_);
lean_ctor_set_uint8(v___x_544_, sizeof(void*)*2, v___x_545_);
lean_ctor_set_uint8(v___x_544_, sizeof(void*)*2 + 1, v_contextDependent_517_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_544_);
v___x_547_ = v___x_538_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_544_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec(v_a_519_);
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v___x_507_);
v_a_550_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_535_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_535_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_dec(v_a_519_);
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v___x_507_);
v_a_559_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_521_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_521_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
lean_dec(v_a_519_);
lean_dec_ref(v_arg_513_);
v___x_567_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12);
lean_inc_ref(v_arg_511_);
v___x_568_ = l_Lean_Expr_betaRev(v_arg_511_, v___x_567_, v___x_482_, v___x_482_);
v___x_569_ = l_Lean_Meta_Sym_shareCommonInc(v___x_568_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_582_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_582_ == 0)
{
v___x_572_ = v___x_569_;
v_isShared_573_ = v_isSharedCheck_582_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_582_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_574_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14));
v___x_575_ = l_Lean_Expr_constLevels_x21(v___x_507_);
lean_dec_ref(v___x_507_);
v___x_576_ = l_Lean_mkConst(v___x_574_, v___x_575_);
v___x_577_ = l_Lean_mkApp4(v___x_576_, v_arg_514_, v_arg_512_, v_arg_511_, v_arg_510_);
v___x_578_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_578_, 0, v_a_570_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
lean_ctor_set_uint8(v___x_578_, sizeof(void*)*2, v___x_482_);
lean_ctor_set_uint8(v___x_578_, sizeof(void*)*2 + 1, v_contextDependent_517_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v___x_578_);
v___x_580_ = v___x_572_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v___x_507_);
v_a_583_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_569_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_569_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v___x_507_);
v_a_591_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_518_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_518_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
else
{
lean_object* v_e_x27_599_; lean_object* v_proof_600_; uint8_t v_contextDependent_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_813_; 
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v___x_507_);
v_e_x27_599_ = lean_ctor_get(v_a_516_, 0);
v_proof_600_ = lean_ctor_get(v_a_516_, 1);
v_contextDependent_601_ = lean_ctor_get_uint8(v_a_516_, sizeof(void*)*2 + 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v_a_516_);
if (v_isSharedCheck_813_ == 0)
{
v___x_603_ = v_a_516_;
v_isShared_604_ = v_isSharedCheck_813_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_proof_600_);
lean_inc(v_e_x27_599_);
lean_dec(v_a_516_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_813_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_599_, v___y_487_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; uint8_t v___x_607_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_605_, 1);
v___x_607_ = lean_unbox(v_a_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_599_, v___y_487_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; uint8_t v___x_610_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_608_, 1);
v___x_610_ = lean_unbox(v_a_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
lean_dec(v_a_606_);
v___x_611_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15);
lean_inc_ref(v_e_x27_599_);
v___x_612_ = l_Lean_Expr_app___override(v___x_611_, v_e_x27_599_);
v___x_613_ = lean_box(0);
v___x_614_ = l_Lean_Meta_trySynthInstance(v___x_612_, v___x_613_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_709_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_709_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_709_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_709_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
if (lean_obj_tag(v_a_615_) == 1)
{
lean_object* v_a_619_; lean_object* v___x_620_; 
lean_del_object(v___x_617_);
v_a_619_ = lean_ctor_get(v_a_615_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v_a_615_, 1);
v___x_620_ = l_Lean_Meta_Sym_shareCommon(v_a_619_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = lean_unsigned_to_nat(4u);
v___x_623_ = l_Lean_Expr_getBoundedAppFn(v___x_622_, v_e_483_);
v___x_624_ = l_Lean_Meta_Sym_shareCommon(v_proof_600_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_626_; uint8_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc_n(v_a_625_, 2);
lean_dec_ref_known(v___x_624_, 1);
v___x_626_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17));
v___x_627_ = 0;
v___x_628_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21);
v___x_629_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22);
lean_inc_ref_n(v_e_x27_599_, 2);
lean_inc_ref(v_arg_513_);
v___x_630_ = l_Lean_mkApp4(v___x_628_, v_arg_513_, v_e_x27_599_, v_a_625_, v___x_629_);
v___x_631_ = lean_unsigned_to_nat(1u);
v___x_632_ = lean_mk_empty_array_with_capacity(v___x_631_);
lean_inc_ref(v___x_632_);
v___x_633_ = lean_array_push(v___x_632_, v___x_630_);
v___x_634_ = lean_unbox(v_a_609_);
v___x_635_ = lean_unbox(v_a_609_);
v___x_636_ = l_Lean_Expr_betaRev(v_arg_511_, v___x_633_, v___x_634_, v___x_635_);
lean_dec_ref(v___x_633_);
v___x_637_ = l_Lean_mkLambda(v___x_626_, v___x_627_, v_e_x27_599_, v___x_636_);
v___x_638_ = l_Lean_Meta_Sym_shareCommonInc(v___x_637_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v___x_638_, 1);
lean_inc_ref_n(v_e_x27_599_, 2);
v___x_640_ = l_Lean_mkNot(v_e_x27_599_);
v___x_641_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25);
lean_inc(v_a_625_);
v___x_642_ = l_Lean_mkApp4(v___x_641_, v_arg_513_, v_e_x27_599_, v_a_625_, v___x_629_);
v___x_643_ = lean_array_push(v___x_632_, v___x_642_);
v___x_644_ = lean_unbox(v_a_609_);
v___x_645_ = lean_unbox(v_a_609_);
lean_dec(v_a_609_);
v___x_646_ = l_Lean_Expr_betaRev(v_arg_510_, v___x_643_, v___x_644_, v___x_645_);
lean_dec_ref(v___x_643_);
v___x_647_ = l_Lean_mkLambda(v___x_626_, v___x_627_, v___x_640_, v___x_646_);
v___x_648_ = l_Lean_Meta_Sym_shareCommonInc(v___x_647_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_650_; 
v_a_649_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_a_649_);
lean_dec_ref_known(v___x_648_, 1);
lean_inc(v_a_621_);
lean_inc_ref(v_e_x27_599_);
v___x_650_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2(v___x_623_, v_e_x27_599_, v_a_621_, v_a_639_, v_a_649_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_664_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_664_ == 0)
{
v___x_653_ = v___x_650_;
v_isShared_654_ = v_isSharedCheck_664_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_664_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_655_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27));
v___x_656_ = l_Lean_Expr_replaceFn(v_e_483_, v___x_655_);
v___x_657_ = l_Lean_mkApp3(v___x_656_, v_e_x27_599_, v_a_621_, v_a_625_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v___x_657_);
lean_ctor_set(v___x_603_, 0, v_a_651_);
v___x_659_ = v___x_603_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_651_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v___x_657_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*2 + 1, v_contextDependent_601_);
v___x_659_ = v_reuseFailAlloc_663_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
lean_object* v___x_661_; 
lean_ctor_set_uint8(v___x_659_, sizeof(void*)*2, v___x_509_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_659_);
v___x_661_ = v___x_653_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec(v_a_625_);
lean_dec(v_a_621_);
lean_del_object(v___x_603_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_e_483_);
v_a_665_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_650_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_650_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec(v_a_639_);
lean_dec(v_a_625_);
lean_dec_ref(v___x_623_);
lean_dec(v_a_621_);
lean_del_object(v___x_603_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_e_483_);
v_a_673_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_648_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_648_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec_ref(v___x_632_);
lean_dec(v_a_625_);
lean_dec_ref(v___x_623_);
lean_dec(v_a_621_);
lean_dec(v_a_609_);
lean_del_object(v___x_603_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_681_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_638_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_638_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v___x_623_);
lean_dec(v_a_621_);
lean_dec(v_a_609_);
lean_del_object(v___x_603_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_689_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_624_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_624_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
lean_dec(v_a_609_);
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_697_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_620_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_620_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
else
{
lean_object* v___x_705_; lean_object* v___x_707_; 
lean_dec(v_a_615_);
lean_dec(v_a_609_);
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v___x_705_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_509_, v_contextDependent_601_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_705_);
v___x_707_ = v___x_617_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_dec(v_a_609_);
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_710_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_614_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_614_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; 
lean_dec(v_a_609_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_511_);
lean_inc_ref(v_proof_600_);
v___x_718_ = l_Lean_Meta_mkOfEqFalseCore(v_arg_513_, v_proof_600_);
v___x_719_ = l_Lean_Meta_Sym_shareCommon(v___x_718_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v___x_721_ = lean_unsigned_to_nat(1u);
v___x_722_ = lean_mk_empty_array_with_capacity(v___x_721_);
v___x_723_ = lean_array_push(v___x_722_, v_a_720_);
v___x_724_ = lean_unbox(v_a_606_);
v___x_725_ = lean_unbox(v_a_606_);
v___x_726_ = l_Lean_Expr_betaRev(v_arg_510_, v___x_723_, v___x_724_, v___x_725_);
lean_dec_ref(v___x_723_);
v___x_727_ = l_Lean_Meta_Sym_shareCommonInc(v___x_726_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_742_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_742_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_742_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_742_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_732_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29));
v___x_733_ = l_Lean_Expr_replaceFn(v_e_483_, v___x_732_);
v___x_734_ = l_Lean_Expr_app___override(v___x_733_, v_proof_600_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v___x_734_);
lean_ctor_set(v___x_603_, 0, v_a_728_);
v___x_736_ = v___x_603_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_728_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_734_);
v___x_736_ = v_reuseFailAlloc_741_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
uint8_t v___x_737_; lean_object* v___x_739_; 
v___x_737_ = lean_unbox(v_a_606_);
lean_dec(v_a_606_);
lean_ctor_set_uint8(v___x_736_, sizeof(void*)*2, v___x_737_);
lean_ctor_set_uint8(v___x_736_, sizeof(void*)*2 + 1, v_contextDependent_601_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_736_);
v___x_739_ = v___x_730_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_736_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_a_606_);
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_483_);
v_a_743_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_727_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_727_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec(v_a_606_);
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_751_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_719_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_719_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
lean_dec(v_a_606_);
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_759_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_608_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_608_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; 
lean_dec(v_a_606_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_510_);
lean_inc_ref(v_proof_600_);
v___x_767_ = l_Lean_Meta_mkOfEqTrueCore(v_arg_513_, v_proof_600_);
v___x_768_ = l_Lean_Meta_Sym_shareCommon(v___x_767_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref_known(v___x_768_, 1);
v___x_770_ = lean_unsigned_to_nat(1u);
v___x_771_ = lean_mk_empty_array_with_capacity(v___x_770_);
v___x_772_ = lean_array_push(v___x_771_, v_a_769_);
v___x_773_ = l_Lean_Expr_betaRev(v_arg_511_, v___x_772_, v___x_482_, v___x_482_);
lean_dec_ref(v___x_772_);
v___x_774_ = l_Lean_Meta_Sym_shareCommonInc(v___x_773_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_788_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_788_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_788_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_788_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_779_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__31));
v___x_780_ = l_Lean_Expr_replaceFn(v_e_483_, v___x_779_);
v___x_781_ = l_Lean_Expr_app___override(v___x_780_, v_proof_600_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v___x_781_);
lean_ctor_set(v___x_603_, 0, v_a_775_);
v___x_783_ = v___x_603_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_775_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_781_);
lean_ctor_set_uint8(v_reuseFailAlloc_787_, sizeof(void*)*2 + 1, v_contextDependent_601_);
v___x_783_ = v_reuseFailAlloc_787_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_785_; 
lean_ctor_set_uint8(v___x_783_, sizeof(void*)*2, v___x_482_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_783_);
v___x_785_ = v___x_777_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
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
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_483_);
v_a_789_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_774_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_774_);
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
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_e_483_);
v_a_797_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_768_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_768_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_del_object(v___x_603_);
lean_dec_ref(v_proof_600_);
lean_dec_ref(v_e_x27_599_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v_e_483_);
v_a_805_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_605_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_605_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_514_);
lean_dec_ref(v_arg_513_);
lean_dec_ref(v_arg_512_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_510_);
lean_dec_ref(v___x_507_);
lean_dec_ref(v_e_483_);
return v___x_515_;
}
}
}
}
}
}
}
v___jp_494_:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_495_, 0, v___x_482_);
lean_ctor_set_uint8(v___x_495_, 1, v___x_482_);
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed(lean_object* v___x_814_, lean_object* v_e_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
uint8_t v___x_35320__boxed_826_; lean_object* v_res_827_; 
v___x_35320__boxed_826_ = lean_unbox(v___x_814_);
v_res_827_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(v___x_35320__boxed_826_, v_e_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(lean_object* v_e_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_numArgs_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v_numArgs_839_ = l_Lean_Expr_getAppNumArgs(v_e_828_);
v___x_840_ = lean_unsigned_to_nat(5u);
v___x_841_ = lean_nat_dec_lt(v_numArgs_839_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___f_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_842_ = lean_box(v___x_841_);
v___f_843_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_843_, 0, v___x_842_);
v___x_844_ = lean_nat_sub(v_numArgs_839_, v___x_840_);
lean_dec(v_numArgs_839_);
v___x_845_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_828_, v___x_844_, v___f_843_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_);
lean_dec(v___x_844_);
return v___x_845_;
}
else
{
uint8_t v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v_numArgs_839_);
lean_dec_ref(v_e_828_);
v___x_846_ = 0;
v___x_847_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_847_, 0, v___x_841_);
lean_ctor_set_uint8(v___x_847_, 1, v___x_846_);
v___x_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___boxed(lean_object* v_e_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(v_e_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_);
lean_dec(v_a_858_);
lean_dec_ref(v_a_857_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
lean_dec_ref(v_a_853_);
lean_dec(v_a_852_);
lean_dec_ref(v_a_851_);
lean_dec(v_a_850_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection(lean_object* v_p_881_, lean_object* v_inst_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_893_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3));
v___x_894_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_inst_882_);
v___x_895_ = l_Lean_mkProj(v___x_893_, v___x_894_, v_inst_882_);
v___x_896_ = l_Lean_Meta_reduceDecisionProjection_x3f(v___x_895_);
lean_dec_ref(v___x_895_);
if (lean_obj_tag(v___x_896_) == 1)
{
lean_object* v_val_897_; lean_object* v___x_898_; 
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_val_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_val_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = l_Lean_Meta_Sym_shareCommon(v_val_897_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc_n(v_a_899_, 2);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = l_Lean_Meta_Sym_mkEqRefl(v_a_899_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_910_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_910_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_910_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_910_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
uint8_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_905_ = 0;
v___x_906_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_906_, 0, v_a_899_);
lean_ctor_set(v___x_906_, 1, v_a_901_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*2, v___x_905_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*2 + 1, v___x_905_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_906_);
v___x_908_ = v___x_903_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_a_899_);
v_a_911_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_900_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_900_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
v_a_919_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_898_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_898_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
else
{
lean_object* v___x_927_; 
lean_dec(v___x_896_);
lean_inc(v_a_891_);
lean_inc_ref(v_a_890_);
lean_inc(v_a_889_);
lean_inc_ref(v_a_888_);
lean_inc(v_a_887_);
lean_inc_ref(v_a_886_);
lean_inc(v_a_885_);
lean_inc_ref(v_a_884_);
lean_inc(v_a_883_);
lean_inc_ref(v_p_881_);
v___x_927_ = lean_sym_simp(v_p_881_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
if (lean_obj_tag(v_a_928_) == 0)
{
uint8_t v_contextDependent_929_; lean_object* v___x_930_; 
v_contextDependent_929_ = lean_ctor_get_uint8(v_a_928_, 1);
lean_dec_ref_known(v_a_928_, 0);
v___x_930_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_p_881_, v_a_886_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; uint8_t v___x_932_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_930_, 1);
v___x_932_ = lean_unbox(v_a_931_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; 
lean_dec(v_a_931_);
v___x_933_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_p_881_, v_a_886_);
lean_dec_ref(v_p_881_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_976_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_976_ == 0)
{
v___x_936_ = v___x_933_;
v_isShared_937_ = v_isSharedCheck_976_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_933_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_976_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
uint8_t v___x_938_; 
v___x_938_ = lean_unbox(v_a_934_);
if (v___x_938_ == 0)
{
uint8_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
lean_dec_ref(v_inst_882_);
v___x_939_ = lean_unbox(v_a_934_);
lean_dec(v_a_934_);
v___x_940_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_939_, v_contextDependent_929_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v___x_940_);
v___x_942_ = v___x_936_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
else
{
lean_object* v___x_944_; 
lean_del_object(v___x_936_);
v___x_944_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_886_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v___x_946_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__1));
v___x_947_ = lean_box(0);
v___x_948_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_946_, v___x_947_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_959_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_959_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_954_; uint8_t v___x_955_; lean_object* v___x_957_; 
v___x_953_ = l_Lean_Expr_app___override(v_a_949_, v_inst_882_);
v___x_954_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_954_, 0, v_a_945_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = lean_unbox(v_a_934_);
lean_dec(v_a_934_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*2, v___x_955_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*2 + 1, v_contextDependent_929_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_954_);
v___x_957_ = v___x_951_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_954_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
lean_dec(v_a_945_);
lean_dec(v_a_934_);
lean_dec_ref(v_inst_882_);
v_a_960_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_948_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_948_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec(v_a_934_);
lean_dec_ref(v_inst_882_);
v_a_968_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_944_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_944_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec_ref(v_inst_882_);
v_a_977_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_933_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_933_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
else
{
lean_object* v___x_985_; 
lean_dec_ref(v_p_881_);
v___x_985_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_886_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
v___x_987_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__3));
v___x_988_ = lean_box(0);
v___x_989_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_987_, v___x_988_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1000_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_1000_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1000_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; lean_object* v___x_998_; 
v___x_994_ = l_Lean_Expr_app___override(v_a_990_, v_inst_882_);
v___x_995_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_995_, 0, v_a_986_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = lean_unbox(v_a_931_);
lean_dec(v_a_931_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*2, v___x_996_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*2 + 1, v_contextDependent_929_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_995_);
v___x_998_ = v___x_992_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_995_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec(v_a_986_);
lean_dec(v_a_931_);
lean_dec_ref(v_inst_882_);
v_a_1001_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_989_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_989_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_a_931_);
lean_dec_ref(v_inst_882_);
v_a_1009_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_985_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_985_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1017_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_930_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_930_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_e_x27_1025_; lean_object* v_proof_1026_; uint8_t v_contextDependent_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1188_; 
v_e_x27_1025_ = lean_ctor_get(v_a_928_, 0);
v_proof_1026_ = lean_ctor_get(v_a_928_, 1);
v_contextDependent_1027_ = lean_ctor_get_uint8(v_a_928_, sizeof(void*)*2 + 1);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_a_928_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1029_ = v_a_928_;
v_isShared_1030_ = v_isSharedCheck_1188_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_proof_1026_);
lean_inc(v_e_x27_1025_);
lean_dec(v_a_928_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1188_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_1025_, v_a_886_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; uint8_t v___x_1033_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v___x_1033_ = lean_unbox(v_a_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; 
lean_dec(v_a_1032_);
v___x_1034_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_1025_, v_a_886_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; uint8_t v___x_1036_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1036_ = lean_unbox(v_a_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1037_ = lean_box(0);
v___x_1038_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15);
lean_inc_ref(v_e_x27_1025_);
v___x_1039_ = l_Lean_Expr_app___override(v___x_1038_, v_e_x27_1025_);
v___x_1040_ = lean_box(0);
v___x_1041_ = l_Lean_Meta_trySynthInstance(v___x_1039_, v___x_1040_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1095_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1044_ = v___x_1041_;
v_isShared_1045_ = v_isSharedCheck_1095_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1095_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
if (lean_obj_tag(v_a_1042_) == 1)
{
lean_object* v_a_1046_; lean_object* v___x_1047_; 
lean_del_object(v___x_1044_);
v_a_1046_ = lean_ctor_get(v_a_1042_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v_a_1042_, 1);
v___x_1047_ = l_Lean_Meta_Sym_shareCommon(v_a_1046_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1049_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc_n(v_a_1048_, 2);
lean_dec_ref_known(v___x_1047_, 1);
v___x_1049_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00Lean_Meta_Sym_Simp_simpIte_spec__0___redArg(v___x_893_, v___x_894_, v_a_1048_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
v___x_1051_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__5));
v___x_1052_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_1051_, v___x_1037_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1065_; 
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1055_ = v___x_1052_;
v_isShared_1056_ = v_isSharedCheck_1065_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1052_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1065_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = l_Lean_mkApp5(v_a_1053_, v_p_881_, v_e_x27_1025_, v_proof_1026_, v_inst_882_, v_a_1048_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1057_);
lean_ctor_set(v___x_1029_, 0, v_a_1050_);
v___x_1059_ = v___x_1029_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1050_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
uint8_t v___x_1060_; lean_object* v___x_1062_; 
v___x_1060_ = lean_unbox(v_a_1035_);
lean_dec(v_a_1035_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*2, v___x_1060_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*2 + 1, v_contextDependent_1027_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1059_);
v___x_1062_ = v___x_1055_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1059_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec(v_a_1050_);
lean_dec(v_a_1048_);
lean_dec(v_a_1035_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1066_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1052_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1052_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec(v_a_1048_);
lean_dec(v_a_1035_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1074_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1049_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1049_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec(v_a_1035_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1082_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1047_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1047_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
else
{
uint8_t v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
lean_dec(v_a_1042_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v___x_1090_ = lean_unbox(v_a_1035_);
lean_dec(v_a_1035_);
v___x_1091_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1090_, v_contextDependent_1027_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1091_);
v___x_1093_ = v___x_1044_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v_a_1035_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1096_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1041_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1041_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
else
{
lean_object* v___x_1104_; 
lean_dec_ref(v_e_x27_1025_);
v___x_1104_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_886_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__7));
v___x_1107_ = lean_box(0);
v___x_1108_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_1106_, v___x_1107_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1121_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1121_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1121_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1113_ = l_Lean_mkApp3(v_a_1109_, v_p_881_, v_inst_882_, v_proof_1026_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1113_);
lean_ctor_set(v___x_1029_, 0, v_a_1105_);
v___x_1115_ = v___x_1029_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1105_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
uint8_t v___x_1116_; lean_object* v___x_1118_; 
v___x_1116_ = lean_unbox(v_a_1035_);
lean_dec(v_a_1035_);
lean_ctor_set_uint8(v___x_1115_, sizeof(void*)*2, v___x_1116_);
lean_ctor_set_uint8(v___x_1115_, sizeof(void*)*2 + 1, v_contextDependent_1027_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1115_);
v___x_1118_ = v___x_1111_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1115_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec(v_a_1105_);
lean_dec(v_a_1035_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1122_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1108_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1108_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec(v_a_1035_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1130_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1104_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1104_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1138_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1034_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1034_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
else
{
lean_object* v___x_1146_; 
lean_dec_ref(v_e_x27_1025_);
v___x_1146_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_886_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1148_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpDecisionProjection___closed__9));
v___x_1149_ = lean_box(0);
v___x_1150_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_1148_, v___x_1149_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1163_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1163_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1163_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1155_ = l_Lean_mkApp3(v_a_1151_, v_p_881_, v_inst_882_, v_proof_1026_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1155_);
lean_ctor_set(v___x_1029_, 0, v_a_1147_);
v___x_1157_ = v___x_1029_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1147_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
uint8_t v___x_1158_; lean_object* v___x_1160_; 
v___x_1158_ = lean_unbox(v_a_1032_);
lean_dec(v_a_1032_);
lean_ctor_set_uint8(v___x_1157_, sizeof(void*)*2, v___x_1158_);
lean_ctor_set_uint8(v___x_1157_, sizeof(void*)*2 + 1, v_contextDependent_1027_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1157_);
v___x_1160_ = v___x_1153_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1157_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1147_);
lean_dec(v_a_1032_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1164_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1150_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1150_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_a_1032_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1172_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1146_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1146_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_del_object(v___x_1029_);
lean_dec_ref(v_proof_1026_);
lean_dec_ref(v_e_x27_1025_);
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
v_a_1180_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1031_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1031_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_inst_882_);
lean_dec_ref(v_p_881_);
return v___x_927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection___boxed(lean_object* v_p_1189_, lean_object* v_inst_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_){
_start:
{
lean_object* v_res_1201_; 
v_res_1201_ = l_Lean_Meta_Sym_Simp_simpDecisionProjection(v_p_1189_, v_inst_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_, v_a_1199_);
lean_dec(v_a_1199_);
lean_dec_ref(v_a_1198_);
lean_dec(v_a_1197_);
lean_dec_ref(v_a_1196_);
lean_dec(v_a_1195_);
lean_dec_ref(v_a_1194_);
lean_dec(v_a_1193_);
lean_dec_ref(v_a_1192_);
lean_dec(v_a_1191_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0(uint8_t v___x_1223_, lean_object* v_simplifyDecision_1224_, lean_object* v_e_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = l_Lean_Expr_cleanupAnnotations(v_e_1225_);
v___x_1240_ = l_Lean_Expr_isApp(v___x_1239_);
if (v___x_1240_ == 0)
{
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1239_);
v___x_1242_ = l_Lean_Expr_isApp(v___x_1241_);
if (v___x_1242_ == 0)
{
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1241_);
v___x_1244_ = l_Lean_Expr_isApp(v___x_1243_);
if (v___x_1244_ == 0)
{
lean_dec_ref(v___x_1243_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1243_);
v___x_1246_ = l_Lean_Expr_isApp(v___x_1245_);
if (v___x_1246_ == 0)
{
lean_dec_ref(v___x_1245_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1247_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1245_);
v___x_1248_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5));
v___x_1249_ = l_Lean_Expr_isConstOf(v___x_1247_, v___x_1248_);
if (v___x_1249_ == 0)
{
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___x_1245_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
goto v___jp_1236_;
}
else
{
lean_object* v_arg_1250_; lean_object* v_arg_1251_; lean_object* v_e_x27_1253_; lean_object* v_proof_1254_; uint8_t v_contextDependent_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v_arg_1336_; lean_object* v_arg_1337_; uint8_t v_contextDependent_1339_; lean_object* v___y_1340_; lean_object* v_result_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; uint8_t v___y_1421_; lean_object* v___y_1424_; uint8_t v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v_a_1434_; lean_object* v_result_1437_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___x_1486_; 
v_arg_1250_ = lean_ctor_get(v___x_1239_, 1);
lean_inc_ref(v_arg_1250_);
lean_dec_ref(v___x_1239_);
v_arg_1251_ = lean_ctor_get(v___x_1241_, 1);
lean_inc_ref(v_arg_1251_);
lean_dec_ref(v___x_1241_);
v_arg_1336_ = lean_ctor_get(v___x_1243_, 1);
lean_inc_ref_n(v_arg_1336_, 2);
lean_dec_ref(v___x_1243_);
v_arg_1337_ = lean_ctor_get(v___x_1245_, 1);
lean_inc_ref(v_arg_1337_);
lean_dec_ref(v___x_1245_);
v___x_1486_ = l_Lean_Meta_getBoolDecision_x3f(v_arg_1336_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
if (lean_obj_tag(v_a_1487_) == 1)
{
lean_object* v_val_1488_; lean_object* v_fst_1489_; lean_object* v_snd_1490_; lean_object* v___x_1491_; 
v_val_1488_ = lean_ctor_get(v_a_1487_, 0);
lean_inc(v_val_1488_);
lean_dec_ref_known(v_a_1487_, 1);
v_fst_1489_ = lean_ctor_get(v_val_1488_, 0);
lean_inc(v_fst_1489_);
v_snd_1490_ = lean_ctor_get(v_val_1488_, 1);
lean_inc(v_snd_1490_);
lean_dec(v_val_1488_);
v___x_1491_ = l_Lean_Meta_Sym_shareCommon(v_fst_1489_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v_a_1492_; lean_object* v___x_1493_; 
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v___x_1491_, 1);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
lean_inc(v___y_1232_);
lean_inc_ref(v___y_1231_);
lean_inc(v___y_1230_);
lean_inc_ref(v___y_1229_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
lean_inc(v___y_1226_);
v___x_1493_ = lean_apply_12(v_simplifyDecision_1224_, v_a_1492_, v_snd_1490_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, lean_box(0));
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_a_1494_; 
v_a_1494_ = lean_ctor_get(v___x_1493_, 0);
lean_inc(v_a_1494_);
lean_dec_ref_known(v___x_1493_, 1);
if (lean_obj_tag(v_a_1494_) == 0)
{
uint8_t v_done_1495_; 
v_done_1495_ = lean_ctor_get_uint8(v_a_1494_, 0);
if (v_done_1495_ == 0)
{
uint8_t v_contextDependent_1496_; lean_object* v___x_1497_; 
v_contextDependent_1496_ = lean_ctor_get_uint8(v_a_1494_, 1);
lean_dec_ref_known(v_a_1494_, 0);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
lean_inc(v___y_1232_);
lean_inc_ref(v___y_1231_);
lean_inc(v___y_1230_);
lean_inc_ref(v___y_1229_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
lean_inc(v___y_1226_);
lean_inc_ref(v_arg_1336_);
v___x_1497_ = lean_sym_simp(v_arg_1336_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; uint8_t v___y_1500_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
if (v_contextDependent_1496_ == 0)
{
v_result_1437_ = v_a_1498_;
v___y_1438_ = v___y_1226_;
v___y_1439_ = v___y_1227_;
v___y_1440_ = v___y_1228_;
v___y_1441_ = v___y_1229_;
v___y_1442_ = v___y_1230_;
v___y_1443_ = v___y_1231_;
v___y_1444_ = v___y_1232_;
v___y_1445_ = v___y_1233_;
v___y_1446_ = v___y_1234_;
goto v___jp_1436_;
}
else
{
if (lean_obj_tag(v_a_1498_) == 0)
{
uint8_t v_contextDependent_1502_; 
v_contextDependent_1502_ = lean_ctor_get_uint8(v_a_1498_, 1);
v___y_1500_ = v_contextDependent_1502_;
goto v___jp_1499_;
}
else
{
uint8_t v_contextDependent_1503_; 
v_contextDependent_1503_ = lean_ctor_get_uint8(v_a_1498_, sizeof(void*)*2 + 1);
v___y_1500_ = v_contextDependent_1503_;
goto v___jp_1499_;
}
}
v___jp_1499_:
{
if (v___y_1500_ == 0)
{
lean_object* v___x_1501_; 
v___x_1501_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1498_);
v_result_1437_ = v___x_1501_;
v___y_1438_ = v___y_1226_;
v___y_1439_ = v___y_1227_;
v___y_1440_ = v___y_1228_;
v___y_1441_ = v___y_1229_;
v___y_1442_ = v___y_1230_;
v___y_1443_ = v___y_1231_;
v___y_1444_ = v___y_1232_;
v___y_1445_ = v___y_1233_;
v___y_1446_ = v___y_1234_;
goto v___jp_1436_;
}
else
{
v_result_1437_ = v_a_1498_;
v___y_1438_ = v___y_1226_;
v___y_1439_ = v___y_1227_;
v___y_1440_ = v___y_1228_;
v___y_1441_ = v___y_1229_;
v___y_1442_ = v___y_1230_;
v___y_1443_ = v___y_1231_;
v___y_1444_ = v___y_1232_;
v___y_1445_ = v___y_1233_;
v___y_1446_ = v___y_1234_;
goto v___jp_1436_;
}
}
}
else
{
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
return v___x_1497_;
}
}
else
{
uint8_t v_contextDependent_1504_; 
lean_dec_ref(v_e_1225_);
v_contextDependent_1504_ = lean_ctor_get_uint8(v_a_1494_, 1);
lean_dec_ref_known(v_a_1494_, 0);
v_contextDependent_1339_ = v_contextDependent_1504_;
v___y_1340_ = v___y_1229_;
goto v___jp_1338_;
}
}
else
{
v_result_1437_ = v_a_1494_;
v___y_1438_ = v___y_1226_;
v___y_1439_ = v___y_1227_;
v___y_1440_ = v___y_1228_;
v___y_1441_ = v___y_1229_;
v___y_1442_ = v___y_1230_;
v___y_1443_ = v___y_1231_;
v___y_1444_ = v___y_1232_;
v___y_1445_ = v___y_1233_;
v___y_1446_ = v___y_1234_;
goto v___jp_1436_;
}
}
else
{
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
return v___x_1493_;
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec(v_snd_1490_);
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
v_a_1505_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1491_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1491_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
else
{
lean_object* v___x_1513_; 
lean_dec(v_a_1487_);
lean_dec_ref(v_simplifyDecision_1224_);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
lean_inc(v___y_1232_);
lean_inc_ref(v___y_1231_);
lean_inc(v___y_1230_);
lean_inc_ref(v___y_1229_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
lean_inc(v___y_1226_);
lean_inc_ref(v_arg_1336_);
v___x_1513_ = lean_sym_simp(v_arg_1336_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v___x_1513_, 1);
v_result_1437_ = v_a_1514_;
v___y_1438_ = v___y_1226_;
v___y_1439_ = v___y_1227_;
v___y_1440_ = v___y_1228_;
v___y_1441_ = v___y_1229_;
v___y_1442_ = v___y_1230_;
v___y_1443_ = v___y_1231_;
v___y_1444_ = v___y_1232_;
v___y_1445_ = v___y_1233_;
v___y_1446_ = v___y_1234_;
goto v___jp_1436_;
}
else
{
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
return v___x_1513_;
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
lean_dec_ref(v_simplifyDecision_1224_);
v_a_1515_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1486_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1486_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
v___jp_1252_:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_1259_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1327_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1327_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1327_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
size_t v___x_1270_; size_t v___x_1271_; uint8_t v___x_1272_; 
v___x_1270_ = lean_ptr_addr(v_e_x27_1253_);
v___x_1271_ = lean_ptr_addr(v_a_1266_);
lean_dec(v_a_1266_);
v___x_1272_ = lean_usize_dec_eq(v___x_1270_, v___x_1271_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; 
lean_del_object(v___x_1268_);
v___x_1273_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_1259_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1311_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1276_ = v___x_1273_;
v_isShared_1277_ = v_isSharedCheck_1311_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v___x_1273_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1311_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
size_t v___x_1278_; size_t v___x_1279_; uint8_t v___x_1280_; 
v___x_1278_ = lean_ptr_addr(v_e_x27_1253_);
v___x_1279_ = lean_ptr_addr(v_a_1274_);
lean_dec(v_a_1274_);
v___x_1280_ = lean_usize_dec_eq(v___x_1278_, v___x_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
lean_del_object(v___x_1276_);
v___x_1281_ = lean_unsigned_to_nat(3u);
v___x_1282_ = l_Lean_Expr_getBoundedAppFn(v___x_1281_, v_e_1225_);
lean_inc_ref(v_e_x27_1253_);
v___x_1283_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Simp_simpIte_spec__2_spec__2(v___x_1282_, v_e_x27_1253_, v_arg_1251_, v_arg_1250_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1295_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1286_ = v___x_1283_;
v_isShared_1287_ = v_isSharedCheck_1295_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1283_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1295_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1288_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__1));
v___x_1289_ = l_Lean_Expr_replaceFn(v_e_1225_, v___x_1288_);
v___x_1290_ = l_Lean_mkAppB(v___x_1289_, v_e_x27_1253_, v_proof_1254_);
v___x_1291_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1291_, 0, v_a_1284_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*2, v___x_1249_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*2 + 1, v_contextDependent_1255_);
if (v_isShared_1287_ == 0)
{
lean_ctor_set(v___x_1286_, 0, v___x_1291_);
v___x_1293_ = v___x_1286_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v_proof_1254_);
lean_dec_ref(v_e_x27_1253_);
lean_dec_ref(v_e_1225_);
v_a_1296_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1283_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1283_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1309_; 
lean_dec_ref(v_e_x27_1253_);
lean_dec_ref(v_arg_1251_);
v___x_1304_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__3));
v___x_1305_ = l_Lean_Expr_replaceFn(v_e_1225_, v___x_1304_);
v___x_1306_ = l_Lean_Expr_app___override(v___x_1305_, v_proof_1254_);
v___x_1307_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1307_, 0, v_arg_1250_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*2, v___x_1272_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*2 + 1, v_contextDependent_1255_);
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v___x_1307_);
v___x_1309_ = v___x_1276_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec_ref(v_proof_1254_);
lean_dec_ref(v_e_x27_1253_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_e_1225_);
v_a_1312_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1273_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1273_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1325_; 
lean_dec_ref(v_e_x27_1253_);
lean_dec_ref(v_arg_1250_);
v___x_1320_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__5));
v___x_1321_ = l_Lean_Expr_replaceFn(v_e_1225_, v___x_1320_);
v___x_1322_ = l_Lean_Expr_app___override(v___x_1321_, v_proof_1254_);
v___x_1323_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1323_, 0, v_arg_1251_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
lean_ctor_set_uint8(v___x_1323_, sizeof(void*)*2, v___x_1223_);
lean_ctor_set_uint8(v___x_1323_, sizeof(void*)*2 + 1, v_contextDependent_1255_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1323_);
v___x_1325_ = v___x_1268_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
lean_dec_ref(v_proof_1254_);
lean_dec_ref(v_e_x27_1253_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_e_1225_);
v_a_1328_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1265_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1265_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
v___jp_1338_:
{
lean_object* v___x_1341_; 
v___x_1341_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_1340_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1386_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1344_ = v___x_1341_;
v_isShared_1345_ = v_isSharedCheck_1386_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1341_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1386_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
size_t v___x_1346_; size_t v___x_1347_; uint8_t v___x_1348_; 
v___x_1346_ = lean_ptr_addr(v_arg_1336_);
v___x_1347_ = lean_ptr_addr(v_a_1342_);
lean_dec(v_a_1342_);
v___x_1348_ = lean_usize_dec_eq(v___x_1346_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; 
lean_del_object(v___x_1344_);
v___x_1349_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_1340_);
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1369_; 
v_a_1350_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1352_ = v___x_1349_;
v_isShared_1353_ = v_isSharedCheck_1369_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1349_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1369_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
size_t v___x_1354_; size_t v___x_1355_; uint8_t v___x_1356_; 
v___x_1354_ = lean_ptr_addr(v_arg_1336_);
lean_dec_ref(v_arg_1336_);
v___x_1355_ = lean_ptr_addr(v_a_1350_);
lean_dec(v_a_1350_);
v___x_1356_ = lean_usize_dec_eq(v___x_1354_, v___x_1355_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1359_; 
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
v___x_1357_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1249_, v_contextDependent_1339_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 0, v___x_1357_);
v___x_1359_ = v___x_1352_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1367_; 
v___x_1361_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__7));
v___x_1362_ = l_Lean_Expr_constLevels_x21(v___x_1247_);
lean_dec_ref(v___x_1247_);
v___x_1363_ = l_Lean_mkConst(v___x_1361_, v___x_1362_);
lean_inc_ref(v_arg_1250_);
v___x_1364_ = l_Lean_mkApp3(v___x_1363_, v_arg_1337_, v_arg_1251_, v_arg_1250_);
v___x_1365_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1365_, 0, v_arg_1250_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
lean_ctor_set_uint8(v___x_1365_, sizeof(void*)*2, v___x_1348_);
lean_ctor_set_uint8(v___x_1365_, sizeof(void*)*2 + 1, v_contextDependent_1339_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 0, v___x_1365_);
v___x_1367_ = v___x_1352_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
else
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
v_a_1370_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1372_ = v___x_1349_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1349_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_a_1370_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1384_; 
lean_dec_ref(v_arg_1336_);
v___x_1378_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___closed__9));
v___x_1379_ = l_Lean_Expr_constLevels_x21(v___x_1247_);
lean_dec_ref(v___x_1247_);
v___x_1380_ = l_Lean_mkConst(v___x_1378_, v___x_1379_);
lean_inc_ref(v_arg_1251_);
v___x_1381_ = l_Lean_mkApp3(v___x_1380_, v_arg_1337_, v_arg_1251_, v_arg_1250_);
v___x_1382_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1382_, 0, v_arg_1251_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
lean_ctor_set_uint8(v___x_1382_, sizeof(void*)*2, v___x_1223_);
lean_ctor_set_uint8(v___x_1382_, sizeof(void*)*2 + 1, v_contextDependent_1339_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 0, v___x_1382_);
v___x_1384_ = v___x_1344_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
v_a_1387_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1341_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1341_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
v___jp_1395_:
{
if (lean_obj_tag(v_result_1396_) == 0)
{
uint8_t v_contextDependent_1406_; 
lean_dec_ref(v_e_1225_);
v_contextDependent_1406_ = lean_ctor_get_uint8(v_result_1396_, 1);
lean_dec_ref_known(v_result_1396_, 0);
v_contextDependent_1339_ = v_contextDependent_1406_;
v___y_1340_ = v___y_1400_;
goto v___jp_1338_;
}
else
{
lean_object* v_e_x27_1407_; lean_object* v_proof_1408_; uint8_t v_contextDependent_1409_; 
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v___x_1247_);
v_e_x27_1407_ = lean_ctor_get(v_result_1396_, 0);
lean_inc_ref(v_e_x27_1407_);
v_proof_1408_ = lean_ctor_get(v_result_1396_, 1);
lean_inc_ref(v_proof_1408_);
v_contextDependent_1409_ = lean_ctor_get_uint8(v_result_1396_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_result_1396_, 2);
v_e_x27_1253_ = v_e_x27_1407_;
v_proof_1254_ = v_proof_1408_;
v_contextDependent_1255_ = v_contextDependent_1409_;
v___y_1256_ = v___y_1397_;
v___y_1257_ = v___y_1398_;
v___y_1258_ = v___y_1399_;
v___y_1259_ = v___y_1400_;
v___y_1260_ = v___y_1401_;
v___y_1261_ = v___y_1402_;
v___y_1262_ = v___y_1403_;
v___y_1263_ = v___y_1404_;
v___y_1264_ = v___y_1405_;
goto v___jp_1252_;
}
}
v___jp_1410_:
{
if (v___y_1421_ == 0)
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1420_);
v_result_1396_ = v___x_1422_;
v___y_1397_ = v___y_1414_;
v___y_1398_ = v___y_1417_;
v___y_1399_ = v___y_1416_;
v___y_1400_ = v___y_1418_;
v___y_1401_ = v___y_1412_;
v___y_1402_ = v___y_1413_;
v___y_1403_ = v___y_1419_;
v___y_1404_ = v___y_1415_;
v___y_1405_ = v___y_1411_;
goto v___jp_1395_;
}
else
{
v_result_1396_ = v___y_1420_;
v___y_1397_ = v___y_1414_;
v___y_1398_ = v___y_1417_;
v___y_1399_ = v___y_1416_;
v___y_1400_ = v___y_1418_;
v___y_1401_ = v___y_1412_;
v___y_1402_ = v___y_1413_;
v___y_1403_ = v___y_1419_;
v___y_1404_ = v___y_1415_;
v___y_1405_ = v___y_1411_;
goto v___jp_1395_;
}
}
v___jp_1423_:
{
if (v___y_1425_ == 0)
{
v_result_1396_ = v_a_1434_;
v___y_1397_ = v___y_1428_;
v___y_1398_ = v___y_1429_;
v___y_1399_ = v___y_1430_;
v___y_1400_ = v___y_1432_;
v___y_1401_ = v___y_1426_;
v___y_1402_ = v___y_1427_;
v___y_1403_ = v___y_1433_;
v___y_1404_ = v___y_1431_;
v___y_1405_ = v___y_1424_;
goto v___jp_1395_;
}
else
{
uint8_t v_contextDependent_1435_; 
v_contextDependent_1435_ = lean_ctor_get_uint8(v_a_1434_, sizeof(void*)*2 + 1);
v___y_1411_ = v___y_1424_;
v___y_1412_ = v___y_1426_;
v___y_1413_ = v___y_1427_;
v___y_1414_ = v___y_1428_;
v___y_1415_ = v___y_1431_;
v___y_1416_ = v___y_1430_;
v___y_1417_ = v___y_1429_;
v___y_1418_ = v___y_1432_;
v___y_1419_ = v___y_1433_;
v___y_1420_ = v_a_1434_;
v___y_1421_ = v_contextDependent_1435_;
goto v___jp_1410_;
}
}
v___jp_1436_:
{
if (lean_obj_tag(v_result_1437_) == 1)
{
uint8_t v_done_1447_; 
v_done_1447_ = lean_ctor_get_uint8(v_result_1437_, sizeof(void*)*2);
if (v_done_1447_ == 0)
{
lean_object* v_e_x27_1448_; lean_object* v_proof_1449_; uint8_t v_contextDependent_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1482_; 
v_e_x27_1448_ = lean_ctor_get(v_result_1437_, 0);
v_proof_1449_ = lean_ctor_get(v_result_1437_, 1);
v_contextDependent_1450_ = lean_ctor_get_uint8(v_result_1437_, sizeof(void*)*2 + 1);
v_isSharedCheck_1482_ = !lean_is_exclusive(v_result_1437_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1452_ = v_result_1437_;
v_isShared_1453_ = v_isSharedCheck_1482_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_proof_1449_);
lean_inc(v_e_x27_1448_);
lean_dec(v_result_1437_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1482_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; 
lean_inc(v___y_1446_);
lean_inc_ref(v___y_1445_);
lean_inc(v___y_1444_);
lean_inc_ref(v___y_1443_);
lean_inc(v___y_1442_);
lean_inc_ref(v___y_1441_);
lean_inc(v___y_1440_);
lean_inc_ref(v___y_1439_);
lean_inc(v___y_1438_);
lean_inc_ref(v_e_x27_1448_);
v___x_1454_ = lean_sym_simp(v_e_x27_1448_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
if (lean_obj_tag(v_a_1455_) == 0)
{
uint8_t v_done_1456_; uint8_t v_contextDependent_1457_; lean_object* v___x_1459_; 
v_done_1456_ = lean_ctor_get_uint8(v_a_1455_, 0);
v_contextDependent_1457_ = lean_ctor_get_uint8(v_a_1455_, 1);
lean_dec_ref_known(v_a_1455_, 0);
if (v_isShared_1453_ == 0)
{
v___x_1459_ = v___x_1452_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_e_x27_1448_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v_proof_1449_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
lean_ctor_set_uint8(v___x_1459_, sizeof(void*)*2, v_done_1456_);
lean_ctor_set_uint8(v___x_1459_, sizeof(void*)*2 + 1, v_contextDependent_1457_);
v___y_1424_ = v___y_1446_;
v___y_1425_ = v_contextDependent_1450_;
v___y_1426_ = v___y_1442_;
v___y_1427_ = v___y_1443_;
v___y_1428_ = v___y_1438_;
v___y_1429_ = v___y_1439_;
v___y_1430_ = v___y_1440_;
v___y_1431_ = v___y_1445_;
v___y_1432_ = v___y_1441_;
v___y_1433_ = v___y_1444_;
v_a_1434_ = v___x_1459_;
goto v___jp_1423_;
}
}
else
{
lean_object* v_e_x27_1461_; lean_object* v_proof_1462_; uint8_t v_done_1463_; uint8_t v_contextDependent_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1481_; 
lean_del_object(v___x_1452_);
v_e_x27_1461_ = lean_ctor_get(v_a_1455_, 0);
v_proof_1462_ = lean_ctor_get(v_a_1455_, 1);
v_done_1463_ = lean_ctor_get_uint8(v_a_1455_, sizeof(void*)*2);
v_contextDependent_1464_ = lean_ctor_get_uint8(v_a_1455_, sizeof(void*)*2 + 1);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_a_1455_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1466_ = v_a_1455_;
v_isShared_1467_ = v_isSharedCheck_1481_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_proof_1462_);
lean_inc(v_e_x27_1461_);
lean_dec(v_a_1455_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1481_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; 
lean_inc_ref(v_e_x27_1461_);
lean_inc_ref(v_arg_1336_);
v___x_1468_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_arg_1336_, v_e_x27_1448_, v_proof_1449_, v_e_x27_1461_, v_proof_1462_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1471_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1468_, 1);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v_a_1469_);
v___x_1471_ = v___x_1466_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_e_x27_1461_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_a_1469_);
lean_ctor_set_uint8(v_reuseFailAlloc_1472_, sizeof(void*)*2, v_done_1463_);
lean_ctor_set_uint8(v_reuseFailAlloc_1472_, sizeof(void*)*2 + 1, v_contextDependent_1464_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
v___y_1424_ = v___y_1446_;
v___y_1425_ = v_contextDependent_1450_;
v___y_1426_ = v___y_1442_;
v___y_1427_ = v___y_1443_;
v___y_1428_ = v___y_1438_;
v___y_1429_ = v___y_1439_;
v___y_1430_ = v___y_1440_;
v___y_1431_ = v___y_1445_;
v___y_1432_ = v___y_1441_;
v___y_1433_ = v___y_1444_;
v_a_1434_ = v___x_1471_;
goto v___jp_1423_;
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
lean_del_object(v___x_1466_);
lean_dec_ref(v_e_x27_1461_);
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
v_a_1473_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1468_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1468_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1473_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1452_);
lean_dec_ref(v_proof_1449_);
lean_dec_ref(v_e_x27_1448_);
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v_arg_1251_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_e_1225_);
return v___x_1454_;
}
}
}
else
{
lean_object* v_e_x27_1483_; lean_object* v_proof_1484_; uint8_t v_contextDependent_1485_; 
lean_dec_ref(v_arg_1337_);
lean_dec_ref(v_arg_1336_);
lean_dec_ref(v___x_1247_);
v_e_x27_1483_ = lean_ctor_get(v_result_1437_, 0);
lean_inc_ref(v_e_x27_1483_);
v_proof_1484_ = lean_ctor_get(v_result_1437_, 1);
lean_inc_ref(v_proof_1484_);
v_contextDependent_1485_ = lean_ctor_get_uint8(v_result_1437_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_result_1437_, 2);
v_e_x27_1253_ = v_e_x27_1483_;
v_proof_1254_ = v_proof_1484_;
v_contextDependent_1255_ = v_contextDependent_1485_;
v___y_1256_ = v___y_1438_;
v___y_1257_ = v___y_1439_;
v___y_1258_ = v___y_1440_;
v___y_1259_ = v___y_1441_;
v___y_1260_ = v___y_1442_;
v___y_1261_ = v___y_1443_;
v___y_1262_ = v___y_1444_;
v___y_1263_ = v___y_1445_;
v___y_1264_ = v___y_1446_;
goto v___jp_1252_;
}
}
else
{
v_result_1396_ = v_result_1437_;
v___y_1397_ = v___y_1438_;
v___y_1398_ = v___y_1439_;
v___y_1399_ = v___y_1440_;
v___y_1400_ = v___y_1441_;
v___y_1401_ = v___y_1442_;
v___y_1402_ = v___y_1443_;
v___y_1403_ = v___y_1444_;
v___y_1404_ = v___y_1445_;
v___y_1405_ = v___y_1446_;
goto v___jp_1395_;
}
}
}
}
}
}
}
v___jp_1236_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1237_, 0, v___x_1223_);
lean_ctor_set_uint8(v___x_1237_, 1, v___x_1223_);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___boxed(lean_object* v___x_1523_, lean_object* v_simplifyDecision_1524_, lean_object* v_e_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
uint8_t v___x_25622__boxed_1536_; lean_object* v_res_1537_; 
v___x_25622__boxed_1536_ = lean_unbox(v___x_1523_);
v_res_1537_ = l_Lean_Meta_Sym_Simp_simpCondWith___lam__0(v___x_25622__boxed_1536_, v_simplifyDecision_1524_, v_e_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
lean_dec(v___y_1526_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith(lean_object* v_simplifyDecision_1538_, lean_object* v_e_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_numArgs_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; 
v_numArgs_1550_ = l_Lean_Expr_getAppNumArgs(v_e_1539_);
v___x_1551_ = lean_unsigned_to_nat(4u);
v___x_1552_ = lean_nat_dec_lt(v_numArgs_1550_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___f_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1553_ = lean_box(v___x_1552_);
v___f_1554_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpCondWith___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1554_, 0, v___x_1553_);
lean_closure_set(v___f_1554_, 1, v_simplifyDecision_1538_);
v___x_1555_ = lean_nat_sub(v_numArgs_1550_, v___x_1551_);
lean_dec(v_numArgs_1550_);
v___x_1556_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_1539_, v___x_1555_, v___f_1554_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
lean_dec(v___x_1555_);
return v___x_1556_;
}
else
{
uint8_t v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
lean_dec(v_numArgs_1550_);
lean_dec_ref(v_e_1539_);
lean_dec_ref(v_simplifyDecision_1538_);
v___x_1557_ = 0;
v___x_1558_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1558_, 0, v___x_1552_);
lean_ctor_set_uint8(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCondWith___boxed(lean_object* v_simplifyDecision_1560_, lean_object* v_e_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Meta_Sym_Simp_simpCondWith(v_simplifyDecision_1560_, v_e_1561_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
lean_dec(v_a_1562_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___closed__0));
v___x_1586_ = l_Lean_Meta_Sym_Simp_simpCondWith(v___x_1585_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lean_Meta_Sym_Simp_simpCond(v_a_1587_, v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_);
lean_dec(v_a_1596_);
lean_dec_ref(v_a_1595_);
lean_dec(v_a_1594_);
lean_dec_ref(v_a_1593_);
lean_dec(v_a_1592_);
lean_dec_ref(v_a_1591_);
lean_dec(v_a_1590_);
lean_dec_ref(v_a_1589_);
lean_dec(v_a_1588_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(lean_object* v_declName_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v___x_1602_; lean_object* v_env_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1602_ = lean_st_ref_get(v___y_1600_);
v_env_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc_ref(v_env_1603_);
lean_dec(v___x_1602_);
v___x_1604_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1603_, v_declName_1599_);
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg___boxed(lean_object* v_declName_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1606_, v___y_1607_);
lean_dec(v___y_1607_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(lean_object* v_declName_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1610_, v___y_1619_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___boxed(lean_object* v_declName_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(v_declName_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg(lean_object* v_as_1634_, size_t v_i_1635_, size_t v_stop_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
uint8_t v___x_1642_; 
v___x_1642_ = lean_usize_dec_eq(v_i_1635_, v_stop_1636_);
if (v___x_1642_ == 0)
{
lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1643_ = lean_array_uget_borrowed(v_as_1634_, v_i_1635_);
lean_inc(v___x_1643_);
v___x_1644_ = l_Lean_Meta_isMatchValue(v___x_1643_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; uint8_t v___x_1646_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v___x_1646_ = lean_unbox(v_a_1645_);
if (v___x_1646_ == 0)
{
size_t v___x_1647_; size_t v___x_1648_; 
lean_dec_ref_known(v___x_1644_, 1);
v___x_1647_ = ((size_t)1ULL);
v___x_1648_ = lean_usize_add(v_i_1635_, v___x_1647_);
v_i_1635_ = v___x_1648_;
goto _start;
}
else
{
return v___x_1644_;
}
}
else
{
return v___x_1644_;
}
}
else
{
uint8_t v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = 0;
v___x_1651_ = lean_box(v___x_1650_);
v___x_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
return v___x_1652_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg___boxed(lean_object* v_as_1653_, lean_object* v_i_1654_, lean_object* v_stop_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
size_t v_i_boxed_1661_; size_t v_stop_boxed_1662_; lean_object* v_res_1663_; 
v_i_boxed_1661_ = lean_unbox_usize(v_i_1654_);
lean_dec(v_i_1654_);
v_stop_boxed_1662_ = lean_unbox_usize(v_stop_1655_);
lean_dec(v_stop_1655_);
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg(v_as_1653_, v_i_boxed_1661_, v_stop_boxed_1662_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec_ref(v_as_1653_);
return v_res_1663_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0(void){
_start:
{
lean_object* v___x_1664_; lean_object* v_dummy_1665_; 
v___x_1664_ = lean_box(0);
v_dummy_1665_ = l_Lean_Expr_sort___override(v___x_1664_);
return v_dummy_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(lean_object* v_declName_1669_, lean_object* v_e_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_){
_start:
{
uint8_t v___y_1682_; uint8_t v___y_1683_; lean_object* v___y_1687_; uint8_t v___y_1688_; lean_object* v___y_1689_; uint8_t v___y_1690_; lean_object* v___x_1693_; 
v___x_1693_ = l_Lean_Meta_Sym_reduceMatcherApp_x3f(v_e_1670_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref_known(v___x_1693_, 1);
if (lean_obj_tag(v_a_1694_) == 1)
{
lean_object* v_val_1695_; lean_object* v___x_1696_; 
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
v_val_1695_ = lean_ctor_get(v_a_1694_, 0);
lean_inc_n(v_val_1695_, 2);
lean_dec_ref_known(v_a_1694_, 1);
v___x_1696_ = l_Lean_Meta_Sym_mkEqRefl(v_val_1695_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1706_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1706_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1706_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
uint8_t v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1701_ = 0;
v___x_1702_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1702_, 0, v_val_1695_);
lean_ctor_set(v___x_1702_, 1, v_a_1697_);
lean_ctor_set_uint8(v___x_1702_, sizeof(void*)*2, v___x_1701_);
lean_ctor_set_uint8(v___x_1702_, sizeof(void*)*2 + 1, v___x_1701_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 0, v___x_1702_);
v___x_1704_ = v___x_1699_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec(v_val_1695_);
v_a_1707_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1696_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1696_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
else
{
lean_object* v___x_1715_; lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1792_; 
lean_dec(v_a_1694_);
lean_inc(v_declName_1669_);
v___x_1715_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1669_, v_a_1679_);
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1718_ = v___x_1715_;
v_isShared_1719_ = v_isSharedCheck_1792_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1715_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1792_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
if (lean_obj_tag(v_a_1716_) == 1)
{
lean_object* v_val_1720_; lean_object* v_numParams_1721_; lean_object* v_numDiscrs_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_del_object(v___x_1718_);
v_val_1720_ = lean_ctor_get(v_a_1716_, 0);
lean_inc(v_val_1720_);
lean_dec_ref_known(v_a_1716_, 1);
v_numParams_1721_ = lean_ctor_get(v_val_1720_, 0);
lean_inc(v_numParams_1721_);
v_numDiscrs_1722_ = lean_ctor_get(v_val_1720_, 1);
lean_inc(v_numDiscrs_1722_);
lean_dec(v_val_1720_);
v___x_1723_ = lean_unsigned_to_nat(1u);
v___x_1724_ = lean_nat_add(v_numParams_1721_, v___x_1723_);
lean_dec(v_numParams_1721_);
v___x_1725_ = lean_nat_add(v___x_1724_, v_numDiscrs_1722_);
lean_dec(v_numDiscrs_1722_);
lean_inc_ref(v_e_1670_);
v___x_1726_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_e_1670_, v___x_1724_, v___x_1725_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
if (lean_obj_tag(v_a_1727_) == 0)
{
lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1786_; 
lean_inc_ref(v_a_1727_);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1786_ == 0)
{
lean_object* v_unused_1787_; 
v_unused_1787_ = lean_ctor_get(v___x_1726_, 0);
lean_dec(v_unused_1787_);
v___x_1729_ = v___x_1726_;
v_isShared_1730_ = v_isSharedCheck_1786_;
goto v_resetjp_1728_;
}
else
{
lean_dec(v___x_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1786_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
uint8_t v_contextDependent_1731_; uint8_t v___x_1738_; 
v_contextDependent_1731_ = lean_ctor_get_uint8(v_a_1727_, 1);
lean_dec_ref_known(v_a_1727_, 0);
v___x_1738_ = lean_nat_dec_lt(v___x_1724_, v___x_1725_);
if (v___x_1738_ == 0)
{
lean_dec(v___x_1725_);
lean_dec(v___x_1724_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
goto v___jp_1732_;
}
else
{
lean_object* v_nargs_1739_; lean_object* v_dummy_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___y_1745_; lean_object* v___x_1784_; uint8_t v___x_1785_; 
v_nargs_1739_ = l_Lean_Expr_getAppNumArgs(v_e_1670_);
v_dummy_1740_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0);
lean_inc(v_nargs_1739_);
v___x_1741_ = lean_mk_array(v_nargs_1739_, v_dummy_1740_);
v___x_1742_ = lean_nat_sub(v_nargs_1739_, v___x_1723_);
lean_dec(v_nargs_1739_);
lean_inc_ref(v_e_1670_);
v___x_1743_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1670_, v___x_1741_, v___x_1742_);
v___x_1784_ = lean_array_get_size(v___x_1743_);
v___x_1785_ = lean_nat_dec_le(v___x_1725_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_dec(v___x_1725_);
v___y_1745_ = v___x_1784_;
goto v___jp_1744_;
}
else
{
v___y_1745_ = v___x_1725_;
goto v___jp_1744_;
}
v___jp_1744_:
{
uint8_t v___x_1746_; 
v___x_1746_ = lean_nat_dec_lt(v___x_1724_, v___y_1745_);
if (v___x_1746_ == 0)
{
lean_dec(v___y_1745_);
lean_dec_ref(v___x_1743_);
lean_dec(v___x_1724_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
goto v___jp_1732_;
}
else
{
size_t v___x_1747_; size_t v___x_1748_; lean_object* v___x_1749_; 
v___x_1747_ = lean_usize_of_nat(v___x_1724_);
lean_dec(v___x_1724_);
v___x_1748_ = lean_usize_of_nat(v___y_1745_);
lean_dec(v___y_1745_);
v___x_1749_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg(v___x_1743_, v___x_1747_, v___x_1748_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
lean_dec_ref(v___x_1743_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; uint8_t v___x_1751_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_a_1750_);
lean_dec_ref_known(v___x_1749_, 1);
v___x_1751_ = lean_unbox(v_a_1750_);
if (v___x_1751_ == 0)
{
lean_dec(v_a_1750_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
goto v___jp_1732_;
}
else
{
lean_object* v___x_1752_; 
lean_del_object(v___x_1729_);
v___x_1752_ = l_Lean_Meta_Sym_Simp_getMatchTheorems(v_declName_1669_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v___x_1754_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__1));
v___x_1755_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_1753_, v___x_1754_, v_e_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
lean_dec(v_a_1753_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_a_1756_);
lean_dec_ref_known(v___x_1755_, 1);
if (lean_obj_tag(v_a_1756_) == 0)
{
if (v_contextDependent_1731_ == 0)
{
uint8_t v_contextDependent_1757_; uint8_t v___x_1758_; 
v_contextDependent_1757_ = lean_ctor_get_uint8(v_a_1756_, 1);
lean_dec_ref_known(v_a_1756_, 0);
v___x_1758_ = lean_unbox(v_a_1750_);
lean_dec(v_a_1750_);
v___y_1682_ = v___x_1758_;
v___y_1683_ = v_contextDependent_1757_;
goto v___jp_1681_;
}
else
{
uint8_t v___x_1759_; uint8_t v___x_1760_; 
lean_dec_ref_known(v_a_1756_, 0);
v___x_1759_ = lean_unbox(v_a_1750_);
v___x_1760_ = lean_unbox(v_a_1750_);
lean_dec(v_a_1750_);
v___y_1682_ = v___x_1759_;
v___y_1683_ = v___x_1760_;
goto v___jp_1681_;
}
}
else
{
lean_dec(v_a_1750_);
if (v_contextDependent_1731_ == 0)
{
lean_object* v_e_x27_1761_; lean_object* v_proof_1762_; uint8_t v_done_1763_; uint8_t v_contextDependent_1764_; 
v_e_x27_1761_ = lean_ctor_get(v_a_1756_, 0);
lean_inc_ref(v_e_x27_1761_);
v_proof_1762_ = lean_ctor_get(v_a_1756_, 1);
lean_inc_ref(v_proof_1762_);
v_done_1763_ = lean_ctor_get_uint8(v_a_1756_, sizeof(void*)*2);
v_contextDependent_1764_ = lean_ctor_get_uint8(v_a_1756_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1756_, 2);
v___y_1687_ = v_e_x27_1761_;
v___y_1688_ = v_done_1763_;
v___y_1689_ = v_proof_1762_;
v___y_1690_ = v_contextDependent_1764_;
goto v___jp_1686_;
}
else
{
lean_object* v_e_x27_1765_; lean_object* v_proof_1766_; uint8_t v_done_1767_; 
v_e_x27_1765_ = lean_ctor_get(v_a_1756_, 0);
lean_inc_ref(v_e_x27_1765_);
v_proof_1766_ = lean_ctor_get(v_a_1756_, 1);
lean_inc_ref(v_proof_1766_);
v_done_1767_ = lean_ctor_get_uint8(v_a_1756_, sizeof(void*)*2);
lean_dec_ref_known(v_a_1756_, 2);
v___y_1687_ = v_e_x27_1765_;
v___y_1688_ = v_done_1767_;
v___y_1689_ = v_proof_1766_;
v___y_1690_ = v_contextDependent_1731_;
goto v___jp_1686_;
}
}
}
else
{
lean_dec(v_a_1750_);
return v___x_1755_;
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec(v_a_1750_);
lean_dec_ref(v_e_1670_);
v_a_1768_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1752_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1752_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_del_object(v___x_1729_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
v_a_1776_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1749_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1749_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
}
v___jp_1732_:
{
uint8_t v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1733_ = 1;
v___x_1734_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1733_, v_contextDependent_1731_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___x_1734_);
v___x_1736_ = v___x_1729_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
else
{
lean_dec(v___x_1725_);
lean_dec(v___x_1724_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
return v___x_1726_;
}
}
else
{
lean_dec(v___x_1725_);
lean_dec(v___x_1724_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
return v___x_1726_;
}
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1790_; 
lean_dec(v_a_1716_);
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
v___x_1788_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__2));
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1788_);
v___x_1790_ = v___x_1718_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v___x_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec_ref(v_e_1670_);
lean_dec(v_declName_1669_);
v_a_1793_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1693_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1693_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
v___jp_1681_:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___y_1682_, v___y_1683_);
v___x_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
return v___x_1685_;
}
v___jp_1686_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1691_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1691_, 0, v___y_1687_);
lean_ctor_set(v___x_1691_, 1, v___y_1689_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*2, v___y_1688_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*2 + 1, v___y_1690_);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___boxed(lean_object* v_declName_1801_, lean_object* v_e_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(v_declName_1801_, v_e_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_);
lean_dec(v_a_1811_);
lean_dec_ref(v_a_1810_);
lean_dec(v_a_1809_);
lean_dec_ref(v_a_1808_);
lean_dec(v_a_1807_);
lean_dec_ref(v_a_1806_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
lean_dec(v_a_1803_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1(lean_object* v_as_1814_, size_t v_i_1815_, size_t v_stop_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___redArg(v_as_1814_, v_i_1815_, v_stop_1816_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1___boxed(lean_object* v_as_1828_, lean_object* v_i_1829_, lean_object* v_stop_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
size_t v_i_boxed_1841_; size_t v_stop_boxed_1842_; lean_object* v_res_1843_; 
v_i_boxed_1841_ = lean_unbox_usize(v_i_1829_);
lean_dec(v_i_1829_);
v_stop_boxed_1842_ = lean_unbox_usize(v_stop_1830_);
lean_dec(v_stop_1830_);
v_res_1843_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__1(v_as_1828_, v_i_boxed_1841_, v_stop_boxed_1842_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v_as_1828_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object* v_e_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_){
_start:
{
uint8_t v___x_1855_; 
v___x_1855_ = l_Lean_Expr_isApp(v_e_1844_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
lean_dec_ref(v_e_1844_);
v___x_1856_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1856_, 0, v___x_1855_);
lean_ctor_set_uint8(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1856_);
return v___x_1857_;
}
else
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Lean_Expr_getAppFn(v_e_1844_);
if (lean_obj_tag(v___x_1858_) == 4)
{
lean_object* v_declName_1859_; lean_object* v___x_1860_; uint8_t v___x_1861_; 
v_declName_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_declName_1859_);
lean_dec_ref_known(v___x_1858_, 2);
v___x_1860_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1));
v___x_1861_ = lean_name_eq(v_declName_1859_, v___x_1860_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5));
v___x_1863_ = lean_name_eq(v_declName_1859_, v___x_1862_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1));
v___x_1865_ = lean_name_eq(v_declName_1859_, v___x_1864_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; 
v___x_1866_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(v_declName_1859_, v_e_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
return v___x_1866_;
}
else
{
lean_object* v___x_1867_; 
lean_dec(v_declName_1859_);
v___x_1867_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(v_e_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
return v___x_1867_;
}
}
else
{
lean_object* v___x_1868_; 
lean_dec(v_declName_1859_);
v___x_1868_ = l_Lean_Meta_Sym_Simp_simpCond(v_e_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
return v___x_1868_;
}
}
else
{
lean_object* v___x_1869_; 
lean_dec(v_declName_1859_);
v___x_1869_ = l_Lean_Meta_Sym_Simp_simpIte(v_e_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
return v___x_1869_;
}
}
else
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
lean_dec_ref(v___x_1858_);
lean_dec_ref(v_e_1844_);
v___x_1870_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__2));
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1870_);
return v___x_1871_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl___boxed(lean_object* v_e_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_);
lean_dec(v_a_1881_);
lean_dec_ref(v_a_1880_);
lean_dec(v_a_1879_);
lean_dec_ref(v_a_1878_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec(v_a_1873_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl(lean_object* v_e_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1904_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1898_ = v___x_1895_;
v_isShared_1899_ = v_isSharedCheck_1904_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1895_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1904_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1900_ = l_Lean_Meta_Sym_Simp_Result_markAsNotDone(v_a_1896_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1900_);
v___x_1902_ = v___x_1898_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
else
{
return v___x_1895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl___boxed(lean_object* v_e_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Lean_Meta_Sym_Simp_reduceControl(v_e_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_);
lean_dec(v_a_1914_);
lean_dec_ref(v_a_1913_);
lean_dec(v_a_1912_);
lean_dec_ref(v_a_1911_);
lean_dec(v_a_1910_);
lean_dec_ref(v_a_1909_);
lean_dec(v_a_1908_);
lean_dec_ref(v_a_1907_);
lean_dec(v_a_1906_);
return v_res_1916_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_TheoremsLookup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Reduce(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_Value(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Init_Sym_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_TheoremsLookup(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Reduce(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_Value(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Init_Sym_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
}
#ifdef __cplusplus
}
#endif
